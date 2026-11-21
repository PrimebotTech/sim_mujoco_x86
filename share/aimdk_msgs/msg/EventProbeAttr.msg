uint8 EA_TYPE_DOUBLE=0
uint8 EA_TYPE_INT=1
uint8 EA_TYPE_STRING=2
uint8 EA_TYPE_BOOL=3

# key
string key

# 根据类型解析具体的数据
uint8 type            


# 以下几种类型数据的值只会存在一个
# 整形数据
int64 value_int   

# 浮点型数据
float64 value_double

# 字符串类型数据
string value_string

# 布尔类型数据
bool value_bool
