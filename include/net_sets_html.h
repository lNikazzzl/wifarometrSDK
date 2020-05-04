const char net_sets_html[] = \
"<html>"\
   "<meta http-equiv=\"Content-Type\" content=\"text/html; charset=utf-8\">"\
  "<meta name=\"viewport\" content=\"width=device-width\">"\
     "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no\">"\
""\
"<head>"\
     "<title>ESP8266 Settings</title>"\
    "<style>"\
         "body {"\
             "background-color: #cccccc;"\
               "font-family: Arial, Helvetica, Sans-Serif;"\
             "Color: #000088;"\
        "}"\
    "</style>"\
"</head>"\
""\
"<body>"\
      "<form method=\"POST\" action=\"net_sets\">"\
                  "<h3 align=\"center\"><b>W I F A R O M E T R</b></h3>"\
         "<table align=\"center\">"\
            "<tr>"\
                  "<td colspan=\"2\" height=\"30\"><b>Сеть</b></td>"\
            "</tr>"\
            "<tr>"\
                 "<td>SSID: </td>"\
                "<td>"\
                      "<input name=\"ssid\" value=\"%s\">"\
                "</td>"\
            "</tr>"\
            "<tr>"\
                  "<td>Имя хоста: </td>"\
                "<td>"\
                      "<input name=\"hostname\" value=\"%s\">"\
                "</td>"\
            "</tr>"\
            "<tr>"\
                 "<td>Пароль: </td>"\
                "<td>"\
                       "<input name=\"passwd\" type=\"password\" value=\"00000\">"\
                "</td>"\
            "</tr>"\
            "<tr>"\
                  "<td>Ключ Yandex-API: </td>"\
                "<td>"\
                       "<input name=\"yandex_api_key\" type=\"password\" value=\"0000000000000000\">"\
                "</td>"\
            "</tr>"\
            "<tr>"\
                  "<td><a href=\"/\">Основные настройки</a></td>"\
                   "<td align=\"right\"><b><input type=SUBMIT value=\"Сохранить\"></b></td>"\
            "</tr>"\
        "</table>"\
    "</form>"\
"</body>"\
""\
"</html>";
