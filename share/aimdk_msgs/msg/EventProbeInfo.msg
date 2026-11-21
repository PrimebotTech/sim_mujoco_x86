uint8 EA_STATUS_DEFAULT=0
uint8 EA_STATUS_START=1
uint8 EA_STATUS_END=2

# 事件状态
uint8 status

# 事件时间戳
uint64 timestamp

# 事件类型
EventProbeType type

# 模块ID
uint8 module_id

# 事件ID
uint32 event_id

# 模块时间码
uint64 event_code

# 模块事件信息
string desc

# 事件属性
EventProbeAttr[] attrs

