# 话题名
string name

# 类型名
string type

# 当前频率（Hz）
float64 frequency

# 最小时间差(ms)
float64 min_time_diff

# 最大时间差(ms)
float64 max_time_diff

# 标准差(ms)
float64 std_dev

# 统计滑动窗口大小(ms)
int32 window_size

# 超时阈值(ms)
float64 timeout_threshold

# 是否活跃(只要收到过一帧消息，则置为true，未收到则为false)
bool is_active

# 通讯后端
string[] backends
