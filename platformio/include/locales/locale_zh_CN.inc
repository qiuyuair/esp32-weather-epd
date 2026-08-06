/* Simplified Chinese (China) locale data for esp32-weather-epd.
 * Based on en_US locale structure.
 */

#include "_locale.h"
#include <vector>
#include <Arduino.h>

// LC_TIME
const char *LC_D_T_FMT     = "%Y年%m月%d日 %H:%M:%S";
const char *LC_D_FMT       = "%Y-%m-%d";
const char *LC_T_FMT       = "%H:%M:%S";
const char *LC_T_FMT_AMPM  = "%p %I:%M:%S";
const char *LC_AM_STR      = "上午";
const char *LC_PM_STR      = "下午";
const char *LC_DAY[7]      = {"星期日", "星期一", "星期二", "星期三",
                              "星期四", "星期五", "星期六"};
const char *LC_ABDAY[7]    = {"周日", "周一", "周二", "周三", "周四", "周五", "周六"};
const char *LC_MON[12]     = {"一月", "二月", "三月", "四月",
                              "五月", "六月", "七月", "八月",
                              "九月", "十月", "十一月", "十二月"};
const char *LC_ABMON[12]   = {"1月", "2月", "3月", "4月", "5月", "6月",
                              "7月", "8月", "9月", "10月", "11月", "12月"};
const char *LC_ERA         = "";
const char *LC_ERA_D_FMT   = "";
const char *LC_ERA_D_T_FMT = "";
const char *LC_ERA_T_FMT   = "";

// OWM LANGUAGE (zh_cn for Simplified Chinese descriptions)
const String OWM_LANG = "zh_cn";

// CURRENT CONDITIONS
const char *TXT_FEELS_LIKE         = "体感";
const char *TXT_SUNRISE            = "日出";
const char *TXT_SUNSET             = "日落";
const char *TXT_MOONRISE           = "月出";
const char *TXT_MOONSET            = "月落";
const char *TXT_WIND               = "风力";
const char *TXT_HUMIDITY           = "湿度";
const char *TXT_UV_INDEX           = "紫外线";
const char *TXT_PRESSURE           = "气压";
const char *TXT_AIR_QUALITY        = "空气质量";
const char *TXT_AIR_POLLUTION      = "空气污染";
const char *TXT_VISIBILITY         = "能见度";
const char *TXT_INDOOR_TEMPERATURE = "室内温度";
const char *TXT_INDOOR_HUMIDITY    = "室内湿度";
const char *TXT_DEWPOINT           = "露点";

// MOON PHASE
const char *TXT_MOONPHASE       = "月相";
const char *TXT_NEW_MOON        = "新月";
const char *TXT_WAXING_CRESCENT = "蛾眉月";
const char *TXT_FIRST_QUARTER   = "上弦月";
const char *TXT_WAXING_GIBBOUS  = "盈凸月";
const char *TXT_FULL_MOON       = "满月";
const char *TXT_WANING_GIBBOUS  = "亏凸月";
const char *TXT_THIRD_QUARTER   = "下弦月";
const char *TXT_WANING_CRESCENT = "残月";

// UV INDEX
const char *TXT_UV_LOW       = "低";
const char *TXT_UV_MODERATE  = "中等";
const char *TXT_UV_HIGH      = "高";
const char *TXT_UV_VERY_HIGH = "很高";
const char *TXT_UV_EXTREME   = "极高";

// WIFI
const char *TXT_WIFI_EXCELLENT     = "极好";
const char *TXT_WIFI_GOOD          = "良好";
const char *TXT_WIFI_FAIR          = "一般";
const char *TXT_WIFI_WEAK          = "较弱";
const char *TXT_WIFI_NO_CONNECTION = "未连接";

// UNIT SYMBOLS - TEMPERATURE
const char *TXT_UNITS_TEMP_KELVIN     = "K";
const char *TXT_UNITS_TEMP_CELSIUS    = "\260C";
const char *TXT_UNITS_TEMP_FAHRENHEIT = "\260F";
// UNIT SYMBOLS - WIND SPEED
const char *TXT_UNITS_SPEED_METERSPERSECOND   = "m/s";
const char *TXT_UNITS_SPEED_FEETPERSECOND     = "ft/s";
const char *TXT_UNITS_SPEED_KILOMETERSPERHOUR = "km/h";
const char *TXT_UNITS_SPEED_MILESPERHOUR      = "mph";
const char *TXT_UNITS_SPEED_KNOTS             = "kt";
const char *TXT_UNITS_SPEED_BEAUFORT          = "级";
// UNIT SYMBOLS - PRESSURE
const char *TXT_UNITS_PRES_HECTOPASCALS             = "hPa";
const char *TXT_UNITS_PRES_PASCALS                  = "Pa";
const char *TXT_UNITS_PRES_MILLIMETERSOFMERCURY     = "mmHg";
const char *TXT_UNITS_PRES_INCHESOFMERCURY          = "inHg";
const char *TXT_UNITS_PRES_MILLIBARS                = "mbar";
const char *TXT_UNITS_PRES_ATMOSPHERES              = "atm";
const char *TXT_UNITS_PRES_GRAMSPERSQUARECENTIMETER = "g/cm\262";
const char *TXT_UNITS_PRES_POUNDSPERSQUAREINCH      = "lb/in\262";
const char *TXT_UNITS_DIST_KILOMETERS = "km";
const char *TXT_UNITS_DIST_MILES      = "mi";
const char *TXT_UNITS_PRECIP_MILLIMETERS = "mm";
const char *TXT_UNITS_PRECIP_CENTIMETERS = "cm";
const char *TXT_UNITS_PRECIP_INCHES      = "in";

// MISCELLANEOUS MESSAGES
const char *TXT_LOW_BATTERY = "电量低";
const char *TXT_NETWORK_NOT_AVAILABLE = "网络不可用";
const char *TXT_TIME_SYNCHRONIZATION_FAILED = "时间同步失败";
const char *TXT_WIFI_CONNECTION_FAILED = "WiFi连接失败";
const char *TXT_ATTEMPTING_HTTP_REQ = "正在请求";
const char *TXT_AWAKE_FOR = "已唤醒";
const char *TXT_BATTERY_VOLTAGE = "电池电压";
const char *TXT_CONNECTING_TO = "正在连接";
const char *TXT_COULD_NOT_CONNECT_TO = "无法连接";
const char *TXT_ENTERING_DEEP_SLEEP_FOR = "即将深度睡眠";
const char *TXT_READING_FROM = "正在读取";
const char *TXT_FAILED  = "失败";
const char *TXT_SUCCESS = "成功";
const char *TXT_UNKNOWN = "未知";
const char *TXT_NOT_FOUND = "未找到";
const char *TXT_READ_FAILED = "读取失败";
const char *TXT_FAILED_TO_GET_TIME = "获取时间失败！";
const char *TXT_HIBERNATING_INDEFINITELY_NOTICE = "无唤醒时间，进入休眠！";
const char *TXT_REFERENCING_OLDER_TIME_NOTICE = "深度睡眠前时间同步失败，使用旧时间。";
const char *TXT_WAITING_FOR_SNTP = "等待SNTP同步。";
const char *TXT_LOW_BATTERY_VOLTAGE = "电池电压偏低！";
const char *TXT_VERY_LOW_BATTERY_VOLTAGE = "电池电压很低！";
const char *TXT_CRIT_LOW_BATTERY_VOLTAGE = "电池电压过低！";

// ALERTS (OWM returns English event text; keep English urgency keywords)
const std::vector<String> ALERT_URGENCY = {"outlook", "statement", "watch", "advisory", "warning", "emergency"};

const std::vector<String> TERM_SMOG =
    {"smog"};
const std::vector<String> TERM_SMOKE =
    {"smoke"};
const std::vector<String> TERM_FOG =
    {"fog", "haar"};
const std::vector<String> TERM_METEOR =
    {"meteor", "asteroid"};
const std::vector<String> TERM_NUCLEAR =
    {"nuclear", "ionizing radiation"};
const std::vector<String> TERM_BIOHAZARD =
    {"biohazard", "biological hazard"};
const std::vector<String> TERM_EARTHQUAKE =
    {"earthquake"};
const std::vector<String> TERM_FIRE =
    {"fire", "red flag"};
const std::vector<String> TERM_HEAT =
    {"heat"};
const std::vector<String> TERM_WINTER =
    {"blizzard", "winter", "ice", "icy", "snow", "sleet", "cold",
     "freezing rain", "wind chill", "freeze", "frost", "hail"};
const std::vector<String> TERM_TSUNAMI =
    {"tsunami", "surf"};
const std::vector<String> TERM_LIGHTNING =
    {"thunderstorm", "storm cell", "pulse storm", "squall line", "supercell",
     "lightning"};
const std::vector<String> TERM_SANDSTORM =
    {"sandstorm", "blowing dust", "dust storm"};
const std::vector<String> TERM_FLOOD =
    {"flood", "storm surge", "seiche", "swell", "high seas", "high tides",
     "tidal surge", "hydrologic"};
const std::vector<String> TERM_VOLCANO =
    {"volcanic", "ash", "volcano", "eruption"};
const std::vector<String> TERM_AIR_QUALITY =
    {"air", "stagnation", "pollution"};
const std::vector<String> TERM_TORNADO =
    {"tornado"};
const std::vector<String> TERM_SMALL_CRAFT_ADVISORY =
    {"small craft", "wind advisory"};
const std::vector<String> TERM_GALE_WARNING =
    {"gale"};
const std::vector<String> TERM_STORM_WARNING =
    {"storm warning"};
const std::vector<String> TERM_HURRICANE_WARNING =
    {"hurricane force wind", "extreme wind", "high wind"};
const std::vector<String> TERM_HURRICANE =
    {"hurricane", "tropical storm", "typhoon", "cyclone"};
const std::vector<String> TERM_DUST =
    {"dust", "sand"};
const std::vector<String> TERM_STRONG_WIND =
    {"wind"};

// AIR QUALITY INDEX
extern "C" {
const aqi_scale_t AQI_SCALE = CHINA_AQI;

const char *AUSTRALIA_AQI_TXT[6] =
{
  "很好", "好", "一般", "差", "很差", "危险",
};
const char *CANADA_AQHI_TXT[4] =
{
  "低", "中等", "高", "很高",
};
const char *EUROPEAN_UNION_CAQI_TXT[5] =
{
  "很低", "低", "中等", "高", "很高",
};
const char *HONG_KONG_AQHI_TXT[5] =
{
  "低", "中等", "高", "很高", "危险",
};
const char *INDIA_AQI_TXT[6] =
{
  "优", "良", "中等", "差", "很差", "严重",
};
const char *CHINA_AQI_TXT[6] =
{
  "优",
  "良",
  "轻度污染",
  "中度污染",
  "重度污染",
  "严重污染",
};
const char *SINGAPORE_PSI_TXT[5] =
{
  "好", "中等", "不健康", "很不健康", "危险",
};
const char *SOUTH_KOREA_CAI_TXT[4] =
{
  "好", "一般", "不健康", "很不健康",
};
const char *UNITED_KINGDOM_DAQI_TXT[4] =
{
  "低", "中等", "高", "很高",
};
const char *UNITED_STATES_AQI_TXT[6] =
{
  "好", "中等", "敏感人群不健康", "不健康", "很不健康", "危险",
};
} // end extern "C"

const char *COMPASS_POINT_NOTATION[32] = {
   "北",  "北偏东",  "东北偏北", "东北偏北", "东北", "东北偏东", "东偏北", "东偏北",
   "东",  "东偏南",  "东南偏东", "东南偏东", "东南", "东南偏南", "南偏东", "南偏东",
   "南",  "南偏西",  "西南偏南", "西南偏南", "西南", "西南偏西", "西偏南", "西偏南",
   "西",  "西偏北",  "西北偏西", "西北偏西", "西北", "西北偏北", "北偏西", "北偏西",
};

const char *TXT_HTTPC_ERROR_CONNECTION_REFUSED   = "连接被拒绝";
const char *TXT_HTTPC_ERROR_SEND_HEADER_FAILED   = "发送头失败";
const char *TXT_HTTPC_ERROR_SEND_PAYLOAD_FAILED  = "发送数据失败";
const char *TXT_HTTPC_ERROR_NOT_CONNECTED        = "未连接";
const char *TXT_HTTPC_ERROR_CONNECTION_LOST      = "连接丢失";
const char *TXT_HTTPC_ERROR_NO_STREAM            = "无数据流";
const char *TXT_HTTPC_ERROR_NO_HTTP_SERVER       = "无HTTP服务器";
const char *TXT_HTTPC_ERROR_TOO_LESS_RAM         = "内存不足";
const char *TXT_HTTPC_ERROR_ENCODING             = "不支持的传输编码";
const char *TXT_HTTPC_ERROR_STREAM_WRITE         = "流写入错误";
const char *TXT_HTTPC_ERROR_READ_TIMEOUT         = "读取超时";

const char *TXT_HTTP_RESPONSE_100 = "继续";
const char *TXT_HTTP_RESPONSE_101 = "切换协议";
const char *TXT_HTTP_RESPONSE_102 = "处理中";
const char *TXT_HTTP_RESPONSE_103 = "早期提示";
const char *TXT_HTTP_RESPONSE_200 = "成功";
const char *TXT_HTTP_RESPONSE_201 = "已创建";
const char *TXT_HTTP_RESPONSE_202 = "已接受";
const char *TXT_HTTP_RESPONSE_203 = "非权威信息";
const char *TXT_HTTP_RESPONSE_204 = "无内容";
const char *TXT_HTTP_RESPONSE_205 = "重置内容";
const char *TXT_HTTP_RESPONSE_206 = "部分内容";
const char *TXT_HTTP_RESPONSE_207 = "多状态";
const char *TXT_HTTP_RESPONSE_208 = "已报告";
const char *TXT_HTTP_RESPONSE_226 = "IM Used";
const char *TXT_HTTP_RESPONSE_300 = "多种选择";
const char *TXT_HTTP_RESPONSE_301 = "永久移动";
const char *TXT_HTTP_RESPONSE_302 = "找到";
const char *TXT_HTTP_RESPONSE_303 = "参见其他";
const char *TXT_HTTP_RESPONSE_304 = "未修改";
const char *TXT_HTTP_RESPONSE_305 = "使用代理";
const char *TXT_HTTP_RESPONSE_307 = "临时重定向";
const char *TXT_HTTP_RESPONSE_308 = "永久重定向";
const char *TXT_HTTP_RESPONSE_400 = "错误请求";
const char *TXT_HTTP_RESPONSE_401 = "未授权";
const char *TXT_HTTP_RESPONSE_402 = "需要付费";
const char *TXT_HTTP_RESPONSE_403 = "禁止";
const char *TXT_HTTP_RESPONSE_404 = "未找到";
const char *TXT_HTTP_RESPONSE_405 = "方法不允许";
const char *TXT_HTTP_RESPONSE_406 = "不可接受";
const char *TXT_HTTP_RESPONSE_407 = "需要代理认证";
const char *TXT_HTTP_RESPONSE_408 = "请求超时";
const char *TXT_HTTP_RESPONSE_409 = "冲突";
const char *TXT_HTTP_RESPONSE_410 = "已失效";
const char *TXT_HTTP_RESPONSE_411 = "需要长度";
const char *TXT_HTTP_RESPONSE_412 = "前提条件失败";
const char *TXT_HTTP_RESPONSE_413 = "内容过大";
const char *TXT_HTTP_RESPONSE_414 = "URI过长";
const char *TXT_HTTP_RESPONSE_415 = "不支持的媒体类型";
const char *TXT_HTTP_RESPONSE_416 = "范围无法满足";
const char *TXT_HTTP_RESPONSE_417 = "期望失败";
const char *TXT_HTTP_RESPONSE_418 = "我是茶壶";
const char *TXT_HTTP_RESPONSE_421 = "误导的请求";
const char *TXT_HTTP_RESPONSE_422 = "无法处理";
const char *TXT_HTTP_RESPONSE_423 = "已锁定";
const char *TXT_HTTP_RESPONSE_424 = "依赖失败";
const char *TXT_HTTP_RESPONSE_425 = "过早";
const char *TXT_HTTP_RESPONSE_426 = "需要升级";
const char *TXT_HTTP_RESPONSE_428 = "需要前提条件";
const char *TXT_HTTP_RESPONSE_429 = "请求过多";
const char *TXT_HTTP_RESPONSE_431 = "请求头过大";
const char *TXT_HTTP_RESPONSE_451 = "因法律原因不可用";
const char *TXT_HTTP_RESPONSE_500 = "服务器内部错误";
const char *TXT_HTTP_RESPONSE_501 = "未实现";
const char *TXT_HTTP_RESPONSE_502 = "网关错误";
const char *TXT_HTTP_RESPONSE_503 = "服务不可用";
const char *TXT_HTTP_RESPONSE_504 = "网关超时";
const char *TXT_HTTP_RESPONSE_505 = "HTTP版本不支持";
const char *TXT_HTTP_RESPONSE_506 = "变体也在协商";
const char *TXT_HTTP_RESPONSE_507 = "存储不足";
const char *TXT_HTTP_RESPONSE_508 = "检测到循环";
const char *TXT_HTTP_RESPONSE_510 = "未扩展";
const char *TXT_HTTP_RESPONSE_511 = "需要网络认证";

const char *TXT_DESERIALIZATION_ERROR_OK               = "反序列化成功";
const char *TXT_DESERIALIZATION_ERROR_EMPTY_INPUT      = "反序列化空输入";
const char *TXT_DESERIALIZATION_ERROR_INCOMPLETE_INPUT = "反序列化输入不完整";
const char *TXT_DESERIALIZATION_ERROR_INVALID_INPUT    = "反序列化输入无效";
const char *TXT_DESERIALIZATION_ERROR_NO_MEMORY        = "反序列化内存不足";
const char *TXT_DESERIALIZATION_ERROR_TOO_DEEP         = "反序列化嵌套过深";

const char *TXT_WL_NO_SHIELD       = "无网卡";
const char *TXT_WL_IDLE_STATUS     = "空闲";
const char *TXT_WL_NO_SSID_AVAIL   = "无可用SSID";
const char *TXT_WL_SCAN_COMPLETED  = "扫描完成";
const char *TXT_WL_CONNECTED       = "已连接";
const char *TXT_WL_CONNECT_FAILED  = "连接失败";
const char *TXT_WL_CONNECTION_LOST = "连接丢失";
const char *TXT_WL_DISCONNECTED    = "已断开";
