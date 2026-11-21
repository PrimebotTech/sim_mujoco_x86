

# 响应头（结果以 status 为准）
CommonResponse response
string trace_id             #本次响应对于的请求id
uint8 req_result            # 热切换结果，0 失败 1 成功
uint8 REQ_FAILED   = 0      # 最近一次请求失败
uint8 REQ_SUCCESS  = 1      # 最近一次切换成功

uint32 target_state_mask    # 上一次执行steam_ctrl_mask
uint8 switch_state      # 当前切换状态
uint8 STATE_SWITCHED = 0    # 已经切换完成
uint8 STATE_SWITCHING = 1   # 正在切换中
