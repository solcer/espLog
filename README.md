# ESP Log

This library provides well-formatted log output on the console, including timestamps, file and line information, and your messages for use with ESP-IDF on Espressif's MCUs (e.g., ESP32).
You can add this library to your project as a component. Usually it should be under components folder in your project directory.

## Usage

```c
log_message(LOG_INFO, , "Your formatted message here");
```
## Output
```console
[2131] [INFO] lvglTask() [./components/gui/gui.c:985]: UI init
[2267] [INFO] ui_task() [./components/gui/gui.c:139]: ui_task created
[2384] [ERROR] wifi_init_sta() [./components/wifi_connect.c:153]: UNEXPECTED EVENT
```

## License

[MIT](https://choosealicense.com/licenses/mit/)
