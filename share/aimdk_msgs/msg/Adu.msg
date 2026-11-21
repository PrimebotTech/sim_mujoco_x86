MessageHeader header        # 数据头

# 版本信息
string protocol_version     # 协议版本
string hardware_version     # 硬件版本
string software_version     # 软件版本

# 状态位和状态码
uint16 status_word
# bit 0:  工作状态
# bit 13: 重启请求
# bit 14: 下电请求
# bit 15: 紧急下电

uint32 error_code
# Bit 0：SPI CRC校验错误
# Bit 1：12V电源异常
# Bit 2：5V电源异常
# Bit 3：3.3V电源异常
# Bit 4：1.8V电源异常
# Bit 5：3.8V电源异常（T项目预留不上报）
# Bit 6：1.2V电源异常
# Bit 7：12V电流异常
# Bit 8：板载温度异常
# Bit 9：风扇转速异常
# Bit 10：RK通讯异常
# Bit 11：HDU通讯异常

# ADU板卡电压/电流信息（56Bytes）
float32 board_12v_voltage           # ADU板卡12V电压值（单位：V）
float32 board_5v_voltage            # ADU板卡5V电压值（单位：V）
float32 board_3v3_voltage           # ADU板卡3.3V电压值（单位：V）
float32 board_1v2_voltage           # ADU板卡1.2V电压值（单位：V）
float32 board_1v8_voltage           # ADU板卡1.8V电压值（单位：V）
float32 board_3v8_voltage           # ADU板卡3.8V电压值（单位：V，T项目预留不上报）
float32 system_12v_current          # ADU板卡系统12V电流值（单位：A）
float32 board_temperature_voltage   # ADU板卡温度电压值（单位：V）
float32 board_hardware_voltage      # ADU板卡硬件版本电压值（单位：V）

# ADU板载NTC温度与风扇信息（28Bytes）
float32 ntc_temperature             # ADU板载NTC温度数据（单位：℃）
uint32 fan1_target_speed            # 风扇1控制转速比例（单位：%，T项目预留不上报）
uint32 fan1_feedback_speed         # 风扇1反馈转速（单位：RPM，T项目预留不上报）
uint32 fan2_target_speed           # 风扇2控制转速比例（单位：%，T项目预留不上报）
uint32 fan2_feedback_speed         # 风扇2反馈转速（单位：RPM，T项目预留不上报）
