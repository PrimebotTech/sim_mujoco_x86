# 通知mcu整机下电服务
CommonRequest request

# 位置
uint8 command
#调用请求的模块名
string input_source

## command: 控制命令
uint8 UNKNOWN = 0   # 未知
uint8 POWERDOWN = 1    # 按键关机确认关机
uint8 CANCEL_POWERDOWN = 2    #按键关机取消关机
uint8 SOFTWARE_POWERDOWN = 3    #主动关机
uint8 BATTERY_REBOOT = 4    #电池立即下电再重新上电
uint8 SHUTDOWN_REBOOT = 5    #关机并重启

uint8 power_reboot_interval   #电池下电后重新上电的时间，单位：s

