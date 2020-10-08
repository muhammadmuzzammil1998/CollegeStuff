package main

import (
	"errors"
	"fmt"
)

func sendmoremoney() ([50][3]int, int, error) {
	var (
		numberRange   = []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
		solutions     = [50][3]int{}
		solutionIndex = 0
		send          = 0
		more          = 0
		money         = 0
		combinations  = 0
		mIsOne        = 0
		uniqueSet     = 0
	)
	for _, s := range numberRange[1:] {
		for _, e := range numberRange {
			for _, n := range numberRange {
				for _, d := range numberRange {
					for _, m := range numberRange[1:] {
						for _, o := range numberRange {
							for _, r := range numberRange {
								for _, y := range numberRange {
									combinations++
									if len(uniqueSlice(s, e, n, d, m, o, r, y)) == 8 {
										uniqueSet++
										if m != 1 {
											continue
										}
										mIsOne++
										send = 1000*s + 100*e + 10*n + d
										more = 1000*m + 100*o + 10*r + e
										money = 10000*m + 1000*o + 100*n + 10*e + y
										fmt.Printf("\rChecking:\t\t%d, %d, %d  Combination: %d", send, more, money, combinations)
										if send+more == money {
											solutions[solutionIndex][0] = send
											solutions[solutionIndex][1] = more
											solutions[solutionIndex][2] = money
											solutionIndex++
											fmt.Printf("\rFound %d:\t\t%d, %d, %d  Combination #%d\t\t\t\t\n", solutionIndex, send, more, money, combinations)
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	fmt.Printf("\rTried %d combinations, where %d satisfied constraint \"M = 1\" from %d unique sets and found %d solution(s)\n", combinations, mIsOne, uniqueSet, solutionIndex)
	if solutionIndex == 0 {
		return solutions, 0, errors.New("Unable to find a solution")
	}
	return solutions, solutionIndex, nil
}

func twotwofour() ([50][3]int, int, error) {
	var (
		numberRange   = []int{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
		solutions     = [50][3]int{}
		solutionIndex = 0
		two           = 0
		four          = 0
		combinations  = 0
		fIsOne        = 0
		uniqueSet     = 0
	)
	for _, t := range numberRange {
		for _, w := range numberRange {
			for _, o := range numberRange {
				for _, f := range numberRange[1:] {
					for _, u := range numberRange {
						for _, r := range numberRange {
							combinations++
							if len(uniqueSlice(t, w, o, f, u, r)) == 6 {
								uniqueSet++
								if f != 1 {
									continue
								}
								fIsOne++
								two = 100*t + 10*w + o
								four = 1000*f + 100*o + 10*u + r
								fmt.Printf("\rChecking:\t\t%d, %d, %d  Combination: %d", two, two, four, combinations)
								if two+two == four {
									solutions[solutionIndex][0] = two
									solutions[solutionIndex][1] = two
									solutions[solutionIndex][2] = four
									solutionIndex++
									fmt.Printf("\rFound %d:\t\t%d, %d, %d  Combination #%d\t\t\t\t\n", solutionIndex, two, two, four, combinations)
								}
							}
						}
					}
				}
			}
		}
	}
	fmt.Printf("\rTried %d combinations, where %d satisfied constraint \"F = 1\" from %d unique sets and found %d solution(s)\n", combinations, fIsOne, uniqueSet, solutionIndex)
	if solutionIndex == 0 {
		return solutions, 0, errors.New("Unable to find a solution")
	}
	return solutions, solutionIndex, nil
}

func uniqueSlice(slice ...int) []int {
	keys := make(map[int]bool)
	list := []int{}
	for _, entry := range slice {
		if _, value := keys[entry]; !value {
			keys[entry] = true
			list = append(list, entry)
		}
	}
	return list
}

func getData(slice [3]int) (int, int, int) {
	return slice[0], slice[1], slice[2]
}

func evaluateSendMoreMoney() {
	fmt.Print("\n\nEvaluative values for SEND + MORE = MONEY\nComputing...")
	if solutions, sols, err := sendmoremoney(); err == nil {
		for i, solution := range solutions {
			if i >= sols {
				break
			}
			send, more, money := getData(solution)
			fmt.Printf("\nSolution number %d:\n  SEND\t=  %d\n+ MORE\t=  %d\n  -------------\n  MONEY\t= %d", i+1, send, more, money)
		}
	} else {
		fmt.Println(err)
	}
}

func evaluateTwoTwoFour() {
	fmt.Print("\n\nEvaluative values for TWO + TWO = FOUR\nComputing...")
	if solutions, sols, err := twotwofour(); err == nil {
		for i, solution := range solutions {
			if i >= sols {
				break
			}
			two, _, four := getData(solution)
			fmt.Printf("\nSolution number %d:\n   TWO\t=  %d\n+  TWO\t=  %d\n  -------------\n   FOUR\t= %d", i+1, two, two, four)
		}
	} else {
		fmt.Println(err)
	}
}

func main() {
	evaluateTwoTwoFour()
	evaluateSendMoreMoney()
}
