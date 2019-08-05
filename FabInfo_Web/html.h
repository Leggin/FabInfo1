
// HTML page to be served by the FabInfo webserver
// Conveniently, the Arduino C++ compiler supports raw-strings

static const char html[] = R"(
	<!DOCTYPE html>
	<html lang="en">
	  <head>
	   	<title>Arduino Webpage</title>
		<style> 
		  input.wide[type=text]
                { 
                    -webkit-appearance: none; 
                    -moz-appearance: none; 
                    display: block; 
                    margin: 0; 
                    width: 100%; 
                    height: 40px; 
                    line-height: 40px; 
                    font-size: 17px; 
                    border: 1px solid #bbb;
                }
            body 
                {
                    margin: auto;
                    max-width: 50%;
                }
		</style>
	  </head>
	  <body>
		<form action="/" method="GET">
		  <input type="text" name="text" class="wide" placeholder="Text to Display" value="%TEXT%">
		  <input type="number" name="speed" placeholder="Speed(Pixel/Sec) " value="%SPEED%">
		  <input type="number" name="repeat" placeholder="Repeat(0: Infinite) " value="%REPEAT%">
		  <input type="submit" value="Show Text!">
		</form>
	  </body>
	</html> 
)";
