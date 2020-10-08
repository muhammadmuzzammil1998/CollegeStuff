@echo off

if exist runners/%1.bat (
  if not exist bin (
    mkdir bin
  )
  @echo on
  cd runners
  %1.bat
  exit 0
  @echo off
) else if exist %1.java (
  @echo on
  javac %1.java
  java %*
  @echo off
  clear
  exit 0
)

echo Runner %1 doesn't exists.
exit 1
