# -----------------------------------------------------------------------------------
# 发布音乐播放状态
# 发布到 /aima/hal/audio/music_state
# -----------------------------------------------------------------------------------

# playback_state 枚举
## 空闲状态
int32 PLAYBACK_STATE_IDLE                          = 0
## 播放状态
int32 PLAYBACK_STATE_PLAYING                       = 1
## 暂停状态
int32 PLAYBACK_STATE_PAUSED                        = 2
## 停止状态
int32 PLAYBACK_STATE_STOPED                        = 4
## 错误状态
int32 PLAYBACK_STATE_ERROR                         = 5

# 当前已经执行的最新控制命令id
uint64 control_command_id

# 当前播放状态
int32 playback_state

# 当前播放音乐名称
string song_name

# 当前播放音乐歌手名
string[] artist

# 当前播放音乐总时长，单位秒
float64 total_duration

# 当前播放进度
float64 current_time

# 是否是VIP歌曲
bool vip_song

# 是否在试听
bool trail

# 上游自己的播放判定
int32 playable_code

# 音质列表
string[] qualities

# 当前选择音质索引
int32 quality_index

# 当前歌单对应的搜索命令id
uint64 search_command_id

# 当前歌单名称，和搜索关键字保持一致
string song_list_name

# 当前歌单歌曲数量
int32 song_list_size

# 当前播放歌曲在歌单中的索引，从0开始
int32 playback_index

# 当前歌单sp，和音乐搜索服务 SearchMusic 里的定义保持一致
int32 sp

# 搜索请求返回的HTTP STATUS
int32 search_resp_status

# 搜索请求返回的tts
string search_resp_tts_text

# 搜索请求返回的code
string search_resp_code

# url请求返回的warning
string url_resp_warning
