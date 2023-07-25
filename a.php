#!/usr/bin/php
<?php
  foreach(file('/usr/share/dict/words') as $line){
    if(strpos($line, "xy") !== false){ //trueのままだと"xy"から始まる文字列が表示されないため"!==false"とした
      echo "$line";
    }
  }
?>
