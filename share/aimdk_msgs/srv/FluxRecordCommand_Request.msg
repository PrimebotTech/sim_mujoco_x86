# FluxRecordCommand.srv — flux 录制控制 RPC 服务

# request
string command          # "record.start" or "record.stop"
int32 duration          # seconds, 0 = use config default
