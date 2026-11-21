# ----------------------------------------------------
# request

# 请求头
CommonRequest request

# 文件信息
AudioFile file

# 可选项，文件录制时长
# 如未设置时长，默认一直录音，调用StopCaptureAudioFile或切换内外置麦时停止录音
uint32 duration

