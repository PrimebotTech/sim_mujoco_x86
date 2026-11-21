# uuid
uint64 uuid

# ns 时间辍
uint64 timestamp

# 告警本次生命周期首次出现时间戳，ns
uint64 appeared_timestamp

# 诊断码，字符串形式
string code

# 0 未知, 1 出现, 2 消失
uint8 alert_event_type

# 1 h1级告警，2 h2级告警，3 h3级告警, 4 h4级告警, 5 h5级告警
uint8 level

# 端侧后处理
# 语音报警
string text
bool is_audio_cycle

# 灯光报警，在interaction通过level做映射
string light_msg

# 表情报警
uint32 emotion_id

# 其他后处理部分，后续再添加
uint32 post_process

# app显示id
string app_show_id

# 故障信息
string breakdown_msg

# 功能禁用能力，多个能力使用英文逗号分隔
# 支持语音召唤（人形/四足）、前方目标跟随（人形/四足）、四足左右目标跟随、避障、自主建图、自主导航、自主回充
string capability_limit

# 故障诊断名称
string diag_name

# 语音播报策略；字段追加在末尾，is_audio_cycle 保留用于兼容旧使用方
uint8 AUDIO_STRATEGY_NONE       = 0
uint8 AUDIO_STRATEGY_ONCE       = 1
uint8 AUDIO_STRATEGY_REPEAT     = 2
uint8 AUDIO_STRATEGY_ACTIVATION = 3
uint8 audio_strategy

# 激活播报匹配的功能限制名，来自诊断表“功能限制播报”列，独立于 capability_limit
string[] disabled_capabilities

# 激活播报使用的 NLG 场景 ID
string nlg_scene_id
