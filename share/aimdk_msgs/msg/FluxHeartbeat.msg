# FluxHeartbeat.msg — flux 录制状态心跳广播

# 录制状态: 0=录制中, 1=手动停止, 2=时长到达自动停止
int8 recording

# 录制来源: "app" / "agent" / "" (未录制时为空)
string source

# 录制持续秒数（未录制时为 0）
int64 duration_sec
