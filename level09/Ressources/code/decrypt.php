<?php
decrypt(file_get_contents("token"));

function decrypt($content) {

    $i = 0;
    while ($i < strlen($content)- 1)
    {
	echo chr(ord($content[$i]) - $i);
        $i++;
    }
  echo "\n";
}
?>