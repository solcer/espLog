# ESP Log

This library gives well looking log output over console which is contains time, file, line information and your messages.

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