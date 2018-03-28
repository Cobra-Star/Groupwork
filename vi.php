<?php

//$file = "crawl.txt";
//$stringFile = file_get_contents($file, true);
//preg_match('/(<=keywords)\S+/i', stringFile,$match );
//return $match[0];

$lines = file(crawl.txt);
foreach ($lines as $lastline_num => $line) {
	echo "line #<br>{$lastline_num} </b> : ".htmlspecialchars($line). "<br>".;

}



  $index = 1;
  $returnedValue = null;

  $input = $_POST['$input'];
  $lastline = system("/var/www/html/afkanerd/n--map $input", $returnedValue);

//  print("\n\nPHP begins fromo here\nThe last line showed $lastline and  the return value was: $returnedValue\n");

?>
<html>
  <head>
      <title>carrio</title>
      <link rel="stylesheet" href="interface.css" type="text/css">
  </head>
  <body style="background-image: url(img3.jpg)">
      <div id="container">
          <div id="img">
  <label for=""><a href="carrier.html" style="color:white">Carriers</a></label>

    <label> <a href="" style="color:white"> Images</a></label>
   <label for=""> <a href="" style="color:white"> Video</a></label>
   <label for=""><a href="" style="color:white">schools</a></label>
           </div>
      <div id="carrio">
          <h1>CAR<span style="color:blue">RIO</span></h1>
          <form class="" action="post.php" method="POST">
                    <input  type="text" size="90" placeholder="search carrier orientation" name="carrio" id="text" ><br>
                   <a href="" id="sub"><input type="submit" name="input" value="Carrio Search" id="sub"  height="40" width="314"></a>
           </form>
      </div>
      <div id="about">
        <label><a href="" style="color:whitesmoke">About</a></label>
        <label><a href="" style="color:whitesmoke">Help</a></label>
      </div>
     </div>
  </body>

</html>
