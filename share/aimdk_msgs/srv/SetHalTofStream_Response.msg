

# 响应头（结果以 status 为准）
CommonResponse response
string trace_id             #本次响应对于的请求id
uint8 switch_state          # 热切换结果，0 失败 1 成功
uint8 SWITCH_FAILED   = 0   # 最近一次请求的切换失败
uint8 SWITCH_SUCCESS  = 1   # 最近一次切换成功