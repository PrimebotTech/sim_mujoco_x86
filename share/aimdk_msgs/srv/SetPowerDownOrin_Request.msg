# 通知adu给orin下电/重启
CommonRequest request

# 位置
uint8 command
#调用请求的模块名
string input_source

## command: 控制命令
uint8 CMD_UNKNOWN = 0               # 未知指令
uint8 CMD_POWER_DOWN = 1            # 正常下电
uint8 CMD_REBOOT = 2                # 重启
uint8 CMD_EMERGENCY_POWER_DOWN = 3  # 紧急下电/急停断电

