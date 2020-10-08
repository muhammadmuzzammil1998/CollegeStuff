<!DOCTYPE html>
<html>
<head>
    <title>PHP Response | Q18</title>
    <style>
        body {
            font-family: "Segoe UI";
            font-size: 2em;
        }
        table{ width: 75%; }
        input {
            font-size: 1em;
            width: 100%;
        }
    </style>
</head>

<body>
    <center>
        <?php if(!isset($_GET["name"]) || !isset($_GET["food"])) { ?>
        <form action="#" method="GET">
            <table>
                <tr>
                    <td>Enter your name: </td>
                    <td><input type="text" name="name" required></td>
                </tr>
                <tr>
                    <td>Enter your favorite food: </td>
                    <td><input type="text" name="food" required></td>
                </tr>
                <tr><td colspan="2"><input type="submit" value="Submit!"></td></tr>
            </table>
        </form> 
        <?php } else { echo "<h1>" . $_GET["name"] . " loves " . $_GET["food"] . ".</h1>"; } ?>
    </center>
</body>
</html>


