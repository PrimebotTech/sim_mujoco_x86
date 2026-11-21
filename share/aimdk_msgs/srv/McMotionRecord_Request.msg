# Request 部分
CommonRequest request

# 操作区域部分
int32 record_area
# 上半身
int32 RECORD_UPPER = 1
# 下半身
int32 RECORD_LOWER = 2 
# 全身
int32 RECORD_ALL   = 3

# 操作模式部分
int32 operation_type
# 开始录制
int32 OPER_START  = 1
# 结束录制
int32 OPER_STOP   = 2
# 暂停录制(产品暂时没提)
int32 OPER_PAUSE  = 3
# 继续录制(产品暂时没提)
int32 OPER_RESUME = 4

# 录制时长限制
int32 max_duration

# 存储路径
string folder_path
# 文件名
string file_name

