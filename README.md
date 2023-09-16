# web_server_apache_on_Pi4
This is practice on Raspberry Pi4 using webserver Apache run on Pi4 and turn on/off led, using a littel bit of php to process HTTP request.  
Demo here: https://www.youtube.com/shorts/urDm42EjM-0        
Note:- File program you should copy it into /usr/lib/cgi-bin/ when pi4 install apache because it is easy to manager and maybe Permission denied.      
      -File PHP put it into /var/www/html        
-You may meet error and check it in /var/log/apache2 $ cat error.log- it permission deniend 2 file  /dev/mem and /dev/gpiomem (fix it sudo chmod 777  /dev/mem  /dev/gpiomem)      
-Check HTTP request in /var/log/apache2 $ cat access.log 
