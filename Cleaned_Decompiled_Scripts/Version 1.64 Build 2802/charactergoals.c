//Cleaned With dr NHA's C Script Cleaner V2.72
#region Local Var
var uLocal_0=0;
var uLocal_1=0;
int iLocal_2=0;
int iLocal_3=0;
int iLocal_4=0;
int iLocal_5=0;
int iLocal_6=0;
int iLocal_7=0;
int iLocal_8=0;
int iLocal_9=0;
int iLocal_10=0;
int iLocal_11=0;
var uLocal_12=0;
var uLocal_13=0;
float fLocal_14=0f;
var uLocal_15=0;
var uLocal_16=0;
int iLocal_17=0;
int iLocal_18=0;
var uLocal_19=2;
var uLocal_20=0;
var uLocal_21=0;
BOOL bLocal_22=0;
int iLocal_23=0;
int iLocal_24=0;
#endregion

void main() // Position - 0x0{
iLocal_2=1;
iLocal_3=134;
iLocal_4=134;
iLocal_5=1;
iLocal_6=1;
iLocal_7=1;
iLocal_8=134;
iLocal_9=1;
iLocal_10=12;
iLocal_11=12;
fLocal_14=0.001f;
iLocal_17=-1;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2)) func_51();
while (true){
SYSTEM::WAIT(250);
switch (iLocal_18){
case 0:
if(uLocal_19[0]){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Global_22844[3 /*42*/].f_27[0]=_GET_PLAYER_CASH(CHAR_TREVOR);
func_49(2, 32, Global_22844[3 /*42*/].f_27[0]);
}
TEXT_LABEL_ASSIGN_STRING(&Global_22844[3 /*42*/], "PA_TREV1" /*Earn one million dollars.*/, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_22844[3 /*42*/].f_4), "PA_TREV1" /*Earn one million dollars.*/, 16);
Global_22844[3 /*42*/].f_8=0;
Global_22844[3 /*42*/].f_9=1;
TEXT_LABEL_ASSIGN_STRING(&Global_22844[3 /*42*/].f_10[1 /*4*/], "PA_TREV1A" /*Current wealth $~1~.*/, 16);
Global_22844[3 /*42*/].f_37[1]=0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) Global_22844[3 /*42*/].f_27[1]=_GET_PLAYER_CASH(CHAR_TREVOR);
func_42(2, 3, true, 1);
func_39("PA_TREV1A" /*Current wealth $~1~.*/, Global_22844[3 /*42*/].f_27[1]);
iLocal_18=1;
}
break;
case 1:
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
Global_22844[3 /*42*/].f_27[1]=_GET_PLAYER_CASH(CHAR_TREVOR);
if(func_38(CHAR_TREVOR, 999999)){
func_37("PA_COMPLETE" /*Goal achieved ~a~*/, "PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
Global_22844[3 /*42*/].f_37[1]=1;
Global_22844[3 /*42*/].f_8=1;
iLocal_24=MISC::GET_GAME_TIMER();
iLocal_18=2;
}elseif(func_38(CHAR_TREVOR, 499999)){
if(!bLocal_22){
_SHOW_SUBTITLE("PA_TREV1" /*Earn one million dollars.*/, 2000, 1);
bLocal_22=true;
}}
if(uLocal_19[1]){
func_1(2, 32, 500000, false, false);
uLocal_19[1]=0;
}}
break;
case 2:
iLocal_23=MISC::GET_GAME_TIMER();
if(iLocal_23 - iLocal_24 < 5000) func_39("PA_TREV1A" /*Current wealth $~1~.*/, Global_22844[3 /*42*/].f_27[1]);
break;
}}
return;
}


void func_1(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x1D5{
int outValue;
Hash statHash;
if(func_35(iParam0)==3) return;
if(func_35(iParam0)==4) return;
func_2(func_35(iParam0), 1, iParam1, iParam2, false);
if(bParam3){
outValue=0;
if(bParam4){
switch (iParam0){
case 0:
statHash=joaat("SP0_MONEY_MADE_FROM_RANDOM_PEDS");
break;
case 1:
statHash=joaat("SP1_MONEY_MADE_FROM_RANDOM_PEDS");
break;
case 2:
statHash=joaat("SP2_MONEY_MADE_FROM_RANDOM_PEDS");
break;
default:
return;
}}else{
switch (iParam0){
case 0:
statHash=joaat("SP0_MONEY_MADE_FROM_MISSIONS");
break;
case 1:
statHash=joaat("SP1_MONEY_MADE_FROM_MISSIONS");
break;
case 2:
statHash=joaat("SP2_MONEY_MADE_FROM_MISSIONS");
break;
default:
return;
}}
STATS::STAT_GET_INT(statHash, &outValue, -1);
outValue=outValue + iParam2;
STATS::STAT_SET_INT(statHash, outValue, true);
}
return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x2A7{
float num;
int num2;
int num3;
int num4;
int num5;
int num6;
func_34();
if(iParam3 < 1) return 0;
num=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_33(99, 1);
func_32(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
break;
}
func_16(false);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_13(5)){
num=0.9f;
num2=5;
}
break;
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
}
if(func_13(1)){
num=0f;
num2=1;
}
break;
case 21:
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
break;
}
break;
case 99:
case 100:
case 101:
case 102:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
case 112:
case 113:
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
}
if(func_13(0)){
num=0f;
num2=0;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_32(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
break;
case 1:
func_32(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
break;
case 2:
func_32(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
break;
}
func_12(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_33(95, iParam3);
break;
case 1:
func_33(97, iParam3);
break;
case 2:
func_33(96, iParam3);
break;
}
func_33(98, iParam3);
break;
}
num3=iParam0;
iParam3=SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
num4=0;
num5=iParam3;
if(num==0f){
func_5(num2);
return 1;
}elseif(num !=1f){
func_5(num2);
}
num6=Global_60536[num3] + iParam3;
switch (iParam1){
case 1:
if(Global_60536[num3] >=0 && iParam3 > 0)if(num6 <=0) Global_60536[num3]=2147483647;
else Global_60536[num3]=Global_60536[num3] + iParam3;
switch (iParam0){
case 0:
func_32(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
break;
case 1:
func_32(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
break;
case 2:
func_32(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
break;
}
break;
case 0:
if(!bParam4)if(Global_60536[num3] - iParam3 < 0) return 0;
num4=Global_60536[num3];
Global_60536[num3]=Global_60536[num3] - iParam3;
if(bParam4) num5=num4;
break;
}
if(iParam2==1){
num5 > 20;
}else{
Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/]=iParam1;
Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113648.f_20566.f_233[num3 /*69*/].f_2[Global_113648.f_20566.f_233[num3 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113648.f_20566.f_233[num3 /*69*/]=Global_113648.f_20566.f_233[num3 /*69*/] + 1;
Global_113648.f_20566.f_233[num3 /*69*/].f_1=Global_113648.f_20566.f_233[num3 /*69*/].f_1 + 1;
if(Global_113648.f_20566.f_233[num3 /*69*/].f_1 > 10) Global_113648.f_20566.f_233[num3 /*69*/].f_1=0;
}
func_4(iParam0);
if(Global_43257==15) func_3(false);
return 1;
}


void func_3(BOOL bParam0) // Position - 0x8A6{
int i;
int j;
i=0;
j=0;
for (i=0;
i < 3;
i=i + 1){
for (j=0;
j < 11;
j=j + 1){
Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_3=Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/];
Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_4=Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_1;
Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_5=Global_113648.f_20566.f_233[i /*69*/].f_2[j /*6*/].f_2;
}}
for (i=0;
i < 10;
i=i + 1){
Global_60544[i /*3*/][0]=Global_113648.f_20566[i];
Global_60544.f_31[i /*3*/][0]=Global_113648.f_20566.f_11[i];
Global_60544.f_62[i /*3*/][0]=Global_113648.f_20566.f_22[i];
Global_60544.f_93[i /*3*/][0]=Global_113648.f_20566.f_33[i];
Global_60544.f_124[i /*3*/][0]=Global_113648.f_20566.f_44[i];
Global_60544.f_155[i /*3*/][0]=Global_113648.f_20566.f_55[i];
Global_60544.f_186[i /*3*/][0]=Global_113648.f_20566.f_66[i];
Global_60544.f_217[i /*3*/][0]=Global_113648.f_20566.f_77[i];
Global_60544.f_248[i /*3*/][0]=Global_113648.f_20566.f_88[i];
if(!bParam0){
Global_60544[i /*3*/][1]=Global_113648.f_20566[i];
Global_60544.f_31[i /*3*/][1]=Global_113648.f_20566.f_11[i];
Global_60544.f_62[i /*3*/][1]=Global_113648.f_20566.f_22[i];
Global_60544.f_93[i /*3*/][1]=Global_113648.f_20566.f_33[i];
Global_60544.f_124[i /*3*/][1]=Global_113648.f_20566.f_44[i];
Global_60544.f_155[i /*3*/][1]=Global_113648.f_20566.f_55[i];
Global_60544.f_186[i /*3*/][1]=Global_113648.f_20566.f_66[i];
Global_60544.f_217[i /*3*/][1]=Global_113648.f_20566.f_77[i];
Global_60544.f_248[i /*3*/][1]=Global_113648.f_20566.f_88[i];
}}
return;
}


void func_4(int iParam0) // Position - 0xB28{
int value;
value=Global_60536[iParam0];
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("SP0_TOTAL_CASH"), value, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("SP1_TOTAL_CASH"), value, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("SP2_TOTAL_CASH"), value, true);
break;
}
return;
}


void func_5(int iParam0) // Position - 0xB82{
BOOL flag;
var txdName;
if(iParam0==8){
_STAT_SET_PACKED_BOOL(129, 0, -1);
return;
}
if(iParam0==9){
_STAT_SET_PACKED_BOOL(135, 0, -1);
return;
}
if(iParam0==10){
_STAT_SET_PACKED_BOOL(136, 0, -1);
return;
}
if(iParam0==11){
_STAT_SET_PACKED_BOOL(137, 0, -1);
return;
}
if(iParam0==12){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_PLANE_SITE, 0, -1, true, false);
return;
}
if(iParam0==13){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_BOAT_SITE, 0, -1, true, false);
return;
}
if(iParam0==14){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_CAR_SITE, 0, -1, true, false);
return;
}
if(iParam0==15){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_CAR_SITE2, 0, -1, true, false);
return;
}
if(iParam0==16){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_MIL_SITE, 0, -1, true, false);
return;
}
if(iParam0==17){
_MPCHAR_STAT_SET_INT(MP_STAT_DISCOUNT_BIKE_SITE, 0, -1, true, false);
return;
}
flag=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(IS_BIT_SET(Global_113648.f_20566.f_471, iParam0)){
flag=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
}}elseif(IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0)){
flag=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_7() /*5568*/].f_681.f_10), iParam0);
}
if(flag){
TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_6(iParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
}
return;
}


char* func_6(int iParam0) // Position - 0xCFF{
switch (iParam0){
case 0:
return "COUP_HAIRC" /*one free haircut.*/;
case 1:
return "COUP_TATTOO" /*one free tattoo.*/;
case 2:
return "COUP_WARSTOCK" /*10% off your next purchase at Warstock-Cache-and-Carry.com.*/;
case 3:
return "COUP_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
case 4:
return "COUP_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
case 5:
return "COUP_MEDSPENS" /*10 percent off your next medical expenses.*/;
case 6:
return "COUP_SPRUNK" /*one free can of Sprunk.*/;
case 7:
return "COUP_RESPRAY" /*one free respray.*/;
case 8:
return "COUP_XMAS2017";
case 9:
return "COUP_CAR_XMAS2018";
case 10:
return "COUP_HELI_XMAS2018";
case 11:
return "COUP_CAR2_XMAS2018";
case 12:
return "COUP_CAS_ELITAS" /*10 percent off your next purchase at ElitasTravel.com.*/;
case 13:
return "COUP_CAS_DOCKTEASE" /*10 percent off your next purchase at DockTease.com.*/;
case 14:
return "COUP_CAS_MOSPORT" /*10 percent off your next purchase at LegendaryMotorsport.net.*/;
case 15:
return "COUP_CAS_SSASA" /*10 percent off your next purchase at southernsanandreassuperautos.com.*/;
case 16:
return "COUP_CAS_WARSTOCK" /*10 percent off your next purchase at Warstock-Cache-and-Carry.com.*/;
case 17:
return "COUP_CAS_PANDM" /*10 percent off your next purchase at pandmcycles.com.*/;
default:
break;
}
return "";
}

int func_7() // Position - 0xDF3{
int num;
num=0;
return num;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0xE00{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_9(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}

int func_9(int iParam0) // Position - 0xE30{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_10();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_10() // Position - 0xE64{
return Global_1574918;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0xE70{
if(iParam2==-1) iParam2=func_10();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}


void func_12(int iParam0) // Position - 0xE8E{
func_33(93, iParam0);
func_33(29, iParam0);
func_33(30, iParam0);
return;
}
BOOL func_13(int iParam0) // Position - 0xEAE{
int cloudTimeAsInt;
int num;
int cloudTimeAsInt2;
int num2;
int cloudTimeAsInt3;
int num3;
int cloudTimeAsInt4;
int num4;
int cloudTimeAsInt5;
int num5;
int cloudTimeAsInt6;
int num6;
if(iParam0==8) return func_15(129, -1);
if(iParam0==9) return func_15(135, -1);
if(iParam0==10) return func_15(136, -1);
if(iParam0==11) return func_15(137, -1);
if(iParam0==12){
cloudTimeAsInt=NETWORK::GET_CLOUD_TIME_AS_INT();
num=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_PLANE_SITE, -1, 0);
if(num==0 || cloudTimeAsInt >=num) return false;
return true;
}
if(iParam0==13){
cloudTimeAsInt2=NETWORK::GET_CLOUD_TIME_AS_INT();
num2=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_BOAT_SITE, -1, 0);
if(num2==0 || cloudTimeAsInt2 >=num2) return false;
return true;
}
if(iParam0==14){
cloudTimeAsInt3=NETWORK::GET_CLOUD_TIME_AS_INT();
num3=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_CAR_SITE, -1, 0);
if(num3==0 || cloudTimeAsInt3 >=num3) return false;
return true;
}
if(iParam0==15){
cloudTimeAsInt4=NETWORK::GET_CLOUD_TIME_AS_INT();
num4=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_CAR_SITE2, -1, 0);
if(num4==0 || cloudTimeAsInt4 >=num4) return false;
return true;
}
if(iParam0==16){
cloudTimeAsInt5=NETWORK::GET_CLOUD_TIME_AS_INT();
num5=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_MIL_SITE, -1, 0);
if(num5==0 || cloudTimeAsInt5 >=num5) return false;
return true;
}
if(iParam0==17){
cloudTimeAsInt6=NETWORK::GET_CLOUD_TIME_AS_INT();
num6=_MPCHAR_STAT_GET_INT(MP_STAT_DISCOUNT_BIKE_SITE, -1, 0);
if(num6==0 || cloudTimeAsInt6 >=num6) return false;
return true;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return IS_BIT_SET(Global_113648.f_20566.f_471, iParam0);
return IS_BIT_SET(Global_2359296[func_7() /*5568*/].f_681.f_10, iParam0);
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x1054{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_9(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_15(int iParam0, int iParam1) // Position - 0x1091{
if(iParam1==-1) iParam1=func_10();
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_16(BOOL bParam0) // Position - 0x10AD{
var outValue;
int value;
int outValue2;
value=0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27)) return 0;
if(STATS::STAT_GET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), &outValue, -1)) value=value + outValue;
if(STATS::STAT_GET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), &outValue, -1)) value=value + outValue;
if(STATS::STAT_GET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), &outValue, -1)) value=value + outValue;
bParam0;
outValue2=0;
STATS::STAT_GET_INT(joaat("NUM_CASH_SPENT"), &outValue2, -1);
if(value > 0 && outValue2 / 2000000 !=value / 2000000){
STATS::STAT_SET_INT(joaat("NUM_CASH_SPENT"), value, true);
func_31(27, value);
}
if(value < 200000000) return 0;
func_17(27, 1);
return 1;
}

int func_17(int iParam0, int iParam1) // Position - 0x1164{
if(iParam0 >=78) return 0;
return func_18(iParam0, iParam1);
}

int func_18(int iParam0, int iParam1) // Position - 0x117F{
if(func_30(14) && !func_29(iParam0)) return 0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1) return 0;
if(Global_32414 !=0 && !Global_78558) return 0;
if(func_28(&Global_4542597)){
if(func_26(&Global_4542597, iParam0)) return 0;
if(func_19(&Global_4542597, iParam0)) return 1;
}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)) return 0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)) return 1;
return 0;
}
return 0;
}
BOOL func_19(var uParam0, int iParam1) // Position - 0x121C{
int i;
var unk;
unk=78;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)) return false;
if(func_30(14) && !func_29(iParam1)) return false;
if(func_26(uParam0, iParam1)) return false;
if(func_25(uParam0) < 0f) func_24(uParam0, 0);
func_22(&unk);
i=0;
for (i=0;
i < *uParam0 - 1;
i=i + 1){
unk[i + 1]=uParam0->[i];
}
func_20(&unk, iParam1);
i=0;
for (i=0;
i < *uParam0;
i=i + 1){
uParam0->[i]=unk[i];
}
return true;
}

int func_20(var uParam0, int iParam1) // Position - 0x12CD{
int i;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)) return 0;
if(func_30(14) && !func_29(iParam1)) return 0;
if(func_26(uParam0, iParam1)) return 0;
if(func_25(uParam0) < 0f) func_24(uParam0, 0);
for (i=0;
i < *uParam0;
i=i + 1){
if(func_21(uParam0, i)){
uParam0->[i]=iParam1;
return 1;
}}
return 0;
}
BOOL func_21(var uParam0, int iParam1) // Position - 0x1348{
return uParam0->[iParam1]==78;
}


void func_22(var uParam0) // Position - 0x1359{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
func_23(uParam0, i);
}
func_24(uParam0, Global_4542596 - 0.5f);
return;
}


void func_23(var uParam0, int iParam1) // Position - 0x138D{
uParam0->[iParam1]=78;
return;
}


void func_24(var uParam0, int iParam1) // Position - 0x139D{
if(iParam1==0f) uParam0->f_80=0f;
else uParam0->f_80=iParam1;
return;
}


float func_25(var uParam0) // Position - 0x13BA{
return uParam0->f_80;
}
BOOL func_26(var uParam0, int iParam1) // Position - 0x13C6{
return func_27(uParam0, iParam1) !=-1;
}

int func_27(var uParam0, int iParam1) // Position - 0x13D8{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i]==iParam1) return i;
}
return -1;
}
BOOL func_28(var uParam0) // Position - 0x1405{
return uParam0->f_79==1;
}
BOOL func_29(int iParam0) // Position - 0x1413{
switch (iParam0){
case 60:
case 61:
case 62:
case 63:
case 64:
case 65:
case 66:
case 67:
case 68:
case 69:
return true;
default:
}
return false;
}
BOOL func_30(int iParam0) // Position - 0x1463{
return Global_43257==iParam0;
}
BOOL func_31(int iParam0, int iParam1) // Position - 0x1471{
int achievementProgress;
if(iParam0 < 0) return false;
if(iParam0 > 78) return false;
if(iParam1 <=0 || iParam1 > 100) return false;
achievementProgress=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > achievementProgress) return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
return false;
}


void func_32(Hash hParam0, int iParam1) // Position - 0x14C2{
int outValue;
STATS::STAT_GET_INT(hParam0, &outValue, -1);
outValue=outValue + iParam1;
STATS::STAT_SET_INT(hParam0, outValue, true);
return;
}


void func_33(int iParam0, int iParam1) // Position - 0x14E5{
int outValue;
if(iParam1 < 1) return;
if(Global_59104[iParam0 /*7*/].f_2) return;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return;
if(Global_59104[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_59104[iParam0 /*7*/].f_1, &outValue, -1);
outValue=outValue + iParam1;
STATS::STAT_SET_INT(Global_59104[iParam0 /*7*/].f_1, outValue, true);
}
return;
}


void func_34() // Position - 0x1542{
int outValue;
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
if(!Global_60536[0]==outValue) Global_60536[0]=outValue;
STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
if(!Global_60536[1]==outValue) Global_60536[1]=outValue;
STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
if(!Global_60536[2]==outValue) Global_60536[2]=outValue;
}
return;
}

int func_35(int iParam0) // Position - 0x15B7{
return Global_2028[iParam0 /*29*/].f_17;
}


void _SHOW_SUBTITLE(char* sParam0, int iParam1, int iParam2) // Position - 0x15C8{
iParam2=iParam2;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::END_TEXT_COMMAND_PRINT(iParam1, false);
return;
}


void func_37(char* sParam0, char* sParam1, int iParam2, int iParam3) // Position - 0x15E1{
iParam3=iParam3;
HUD::BEGIN_TEXT_COMMAND_PRINT(sParam0);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam1);
HUD::END_TEXT_COMMAND_PRINT(iParam2, false);
return;
}
BOOL func_38(eCharacter echParam0, int iParam1) // Position - 0x1600{
if(_GET_PLAYER_CASH(echParam0) > iParam1) return true;
return false;
}


void func_39(char* sParam0, int iParam1) // Position - 0x161B{
GRAPHICS::DRAW_RECT(0.852f, 0.81f, 0.141f, 0.025f, 0, 0, 0, 175, false);
func_41(255, 255, 255, 255);
func_40(0.81f, 0.8f, sParam0, iParam1, 0);
return;
}


void func_40(float fParam0, float fParam1, char* sParam2, int iParam3, int iParam4) // Position - 0x165E{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
HUD::END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam4);
return;
}


void func_41(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x167C{
HUD::SET_TEXT_SCALE(0.3f, 0.3f);
HUD::SET_TEXT_DROPSHADOW(0, 0, 0, 0, 0);
HUD::SET_TEXT_EDGE(1, 0, 0, 0, 205);
HUD::SET_TEXT_PROPORTIONAL(true);
HUD::SET_TEXT_FONT(0);
HUD::SET_TEXT_COLOUR(iParam0, iParam1, iParam2, iParam3);
return;
}

int func_42(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16BB{
if(func_48()) return 0;
if(func_43(iParam0, iParam1, bParam2, iParam3)==1) return 1;
return 0;
}

int func_43(int iParam0, int iParam1, BOOL bParam2, int iParam3) // Position - 0x16E6{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appsidetask")) > 0) return 0;
if(func_46()==0){
func_45();
return 0;
}
func_44(Global_22843);
Global_23013[Global_22843 /*9*/].f_1=iParam1;
Global_23013[Global_22843 /*9*/]=iParam0;
if(iParam3==0){}else{
Global_23013[Global_22843 /*9*/].f_8=iParam3;
}
bParam2;
return 1;
}


void func_44(int iParam0) // Position - 0x174A{
int clockSeconds;
int clockMinutes;
int clockHours;
int clockDayOfMonth;
int num;
int clockYear;
clockSeconds=CLOCK::GET_CLOCK_SECONDS();
clockMinutes=CLOCK::GET_CLOCK_MINUTES();
clockHours=CLOCK::GET_CLOCK_HOURS();
clockDayOfMonth=CLOCK::GET_CLOCK_DAY_OF_MONTH();
num=CLOCK::GET_CLOCK_MONTH() + 1;
clockYear=CLOCK::GET_CLOCK_YEAR();
Global_23013[iParam0 /*9*/].f_2=clockSeconds;
Global_23013[iParam0 /*9*/].f_2.f_1=clockMinutes;
Global_23013[iParam0 /*9*/].f_2.f_2=clockHours;
Global_23013[iParam0 /*9*/].f_2.f_3=clockDayOfMonth;
Global_23013[iParam0 /*9*/].f_2.f_4=num;
Global_23013[iParam0 /*9*/].f_2.f_5=clockYear;
return;
}


void func_45() // Position - 0x17C4{
return;
}

int func_46() // Position - 0x17CC{
int i;
for (i=0;
i < 2;
i=i + 1){
if(Global_23013[i /*9*/].f_8==0){
Global_22843=i;
return 1;
}}
i=0;
Global_22843=3;
Global_23013[Global_22843 /*9*/].f_2=-1;
Global_23013[Global_22843 /*9*/].f_2.f_1=0;
Global_23013[Global_22843 /*9*/].f_2.f_2=0;
Global_23013[Global_22843 /*9*/].f_2.f_3=0;
Global_23013[Global_22843 /*9*/].f_2.f_5=99999;
while (i < 2){
if(Global_23013[i /*9*/].f_8==0 || Global_23013[i /*9*/].f_8==1)if(!func_47(Global_23013[i /*9*/].f_2, Global_23013[Global_22843 /*9*/].f_2)) Global_22843=i;
i=i + 1;
}
if(Global_22843==3) return 0;
return 1;
}
BOOL func_47(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x18A6{
int num;
int num2;
int num3;
int num4;
if(iParam0.f_5 < iParam6.f_5) return false;
if(iParam0.f_5 > iParam6.f_5) return true;
if(iParam0.f_5==iParam6.f_5){
if(iParam0.f_4 < iParam6.f_4) return false;
if(iParam0.f_4 > iParam6.f_4) return true;
if(iParam0.f_4==iParam6.f_4){
num=iParam0;
num.f_1=iParam0.f_1 * 60;
num.f_2=iParam0.f_2 * 3600;
num.f_3=iParam0.f_3 * 86400;
num3=num + num.f_1 + num.f_2 + num.f_3;
num2=iParam6;
num2.f_1=iParam6.f_1 * 60;
num2.f_2=iParam6.f_2 * 3600;
num2.f_3=iParam6.f_3 * 86400;
num4=num2 + num2.f_1 + num2.f_2 + num2.f_3;
if(num3 > num4 || num3==num4) return true;
else return false;
}}
return false;
}
BOOL func_48() // Position - 0x1991{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}

int func_49(int iParam0, int iParam1, int iParam2) // Position - 0x19B8{
if(func_35(iParam0)==3) return 0;
if(func_35(iParam0)==4) return 0;
return func_2(func_35(iParam0), 0, iParam1, iParam2, false);
}
int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x19EC{
int outValue;
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_TOTAL_CASH"), &outValue, -1);
return outValue;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_TOTAL_CASH"), &outValue, -1);
return outValue;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_TOTAL_CASH"), &outValue, -1);
return outValue;
default:
}
return 0;
}


void func_51() // Position - 0x1A44{
SCRIPT::TERMINATE_THIS_THREAD();
return;
}