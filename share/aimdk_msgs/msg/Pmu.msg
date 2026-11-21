MessageHeader header      # 数据头

# 版本信息
string protocol_version   # 协议版本
string hardware_version   # 硬件版本
string software_version   # 软件版本
string orin_hardware_version   # ORIN版本

#状态字
uint16 status_word
# 错误码
uint32 status             # 预留

# 电压信息
float32 vcc_3v3_voltage   # LDO 3v3电压(单位: V)
float32 vcc_1v8_voltage   # LDO 1v8电压(单位: V)
float32 vcc_1v2_voltage   # LDO 1v2电压(单位: V)
float32 nfc_5v_voltage    # NFC 5v电压(单位: V)
float32 periph_5v_voltage # 外设 5V电压(单位: V)
float32 lcd_voltage       # LCD电压(单位: V)
float32 sys2_12v_voltage  # 系统第二路 12v电压(单位: V)
float32 soc0_5v_voltage   # Soc0 5V电压(单位: V)
float32 sys_5v_voltage    # 系统 5V电压 (单位: V)
float32 sys_12v_voltage   # 系统 12V电压(单位: V)
float32 soc1_12v_voltage  # Soc1 12v电压(单位: V)
float32 ext_12v_voltage   # 扩展接口 12V电压(单位: V)
float32 ext_24v_voltage   # 扩展接口 24V电压(单位: V)
float32 arm_48v_voltage   # 上肢 48V电压(单位: V)
float32 leg_48v_voltage   # 下肢 48V电压(单位: V)

# 电流信息
float32 soc0_5v_current   # Soc0 5V电流(单位: A)
float32 periph_5v_current # 外设 5V电流(单位: A)
float32 sys2_12v_current  # 系统第二路 12V电流(单位: A)
float32 sys_5v_current    # 系统 5V电流(单位: A)
float32 sys_12v_current   # 系统 12V电流(单位: A)
float32 soc1_12v_current  # Soc1 12v电流(单位: A)
float32 ext_12v_current   # 扩展接口 12V电流(单位: A)
float32 ext_24v_current   # 扩展接口 24V电流(单位: A)
float32 arm_48v_current   # 上肢 48V电流(单位: A)
float32 leg_48v_current   # 下肢 48V电流(单位: A)

# 温度信息
float32 temp_48to12_orin_left   # 48V→12V Orin 左侧温度(单位: ℃)
float32 temp_48to12_orin_bottom # 48V→12V Orin 底部温度(单位: ℃)
float32 temp_12v_ext_mos        # 12V 外设 MOS 温度(单位: ℃)
float32 temp_12to5              # 12V→5V 转换温度(单位: ℃)
float32 temp_emmc               # eMMC 温度(单位: ℃)
float32 temp_soc                # SoC 温度(单位: ℃)