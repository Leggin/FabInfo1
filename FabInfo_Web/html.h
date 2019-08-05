
// HTML page to be served by the FabInfo webserver
// Conveniently, the Arduino C++ compiler supports raw-strings

static const char html[] = R"(
<!DOCTYPE html>
<html>

<head>
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <style>
        input {
            width: 100%;
            padding: 12px 20px;
            margin: 8px 0;
            display: inline-block;
            border: 1px solid #ccc;
            border-radius: 4px;
            box-sizing: border-box;
        }

        input[type=submit] {
            width: 100%;
            background-color: #5b98df;
            color: white;
            padding: 14px 20px;
            margin: 8px 0;
            border: none;
            border-radius: 4px;
            cursor: pointer;
            -webkit-appearance: none;
        }

        input[type=submit]:hover {
            background-color: #5085c2;
        }

        body {
            margin: auto;
        }

        div.container {
            border-radius: 5px;
            background-color: #f2f2f2;
            padding: 20px;
            margin-top: 10px;
        }

        div.numerical-inputs {
            display: flex;
        }

        input.left-input {
            margin-right: 10px;
        }

        h1 {
            text-align: center;
            font-family: "Segoe UI", Arial, sans-serif;
        }

        @media screen and (max-width: 800px) {
            body {
                width: 100%;
            }
            input {
                height: 10vh;
            }
        }

        @media screen and (min-width: 800px) {
            body {
                width: 40%;
            }
        }

    </style>
</head>

<body>
    <div class="container">
        <h1>Controls for the LED-Matrix</h1>
        <form action="/" method="GET">
            <input type="text" name="text" class="wide" placeholder="Text to Display" value="%TEXT%">
            <div class="numerical-inputs">
                <input class="left-input" type="number" name="speed" placeholder="Speed(Pixel/Sec) " value="%SPEED%">
                <input class="right-input" type="number" name="repeat" placeholder="Repeat(0: Infinite) "
                    value="%REPEAT%">
            </div>
            <input type="submit" value="Show Text!">
        </form>
    </div>
</body>

</html>
)";
