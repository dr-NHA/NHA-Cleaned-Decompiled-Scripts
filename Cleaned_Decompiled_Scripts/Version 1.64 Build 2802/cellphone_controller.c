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
var uLocal_18=0;
var uLocal_19=0;
char* sLocal_20=0;
float fLocal_21=0f;
var uLocal_22=0;
var uLocal_23=0;
var uLocal_24=0;
float fLocal_25=0f;
float fLocal_26=0f;
BOOL bLocal_27=0;
var uLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
int iLocal_36=0;
Player plLocal_37=0;
BOOL bLocal_38=0;
float fLocal_39=0f;
float fLocal_40=0f;
BOOL bLocal_41=0;
int iLocal_42=0;
var uLocal_43=4;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=4;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
var uLocal_52=0;
var uLocal_53=4;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=4;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
int iLocal_63=0;
int iLocal_64=0;
int iLocal_65=0;
int iLocal_66=0;
int iLocal_67=0;
int iLocal_68=0;
int iLocal_69=0;
int iLocal_70=0;
int iLocal_71=0;
int iLocal_72=0;
int iLocal_73=0;
int iLocal_74=0;
int iLocal_75=0;
int iLocal_76=0;
int iLocal_77=0;
int iLocal_78=0;
int iLocal_79=0;
int iLocal_80=0;
eCharacter echLocal_81=CHAR_MICHAEL;
BOOL bLocal_82=0;
float fLocal_83=0f;
float fLocal_84=0f;
float fLocal_85=0f;
float fLocal_86=0f;
float fLocal_87=0f;
float fLocal_88=0f;
float fLocal_89=0f;
int iLocal_90=0;
int iLocal_91=0;
int iLocal_92=0;
int iLocal_93=0;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
int iLocal_97=0;
#endregion

void main() // Position - 0x0{
var unk;
int num;
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
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0.0375f;
fLocal_26=0.17f;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_36=3;
fLocal_39=0f;
fLocal_40=0f;
fLocal_86=0.95f;
fLocal_87=0.07f;
fLocal_88=0.755f;
iLocal_97=9999;
MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
Global_113590=MISC::GET_GAME_TIMER();
func_136();
func_133();
func_131();
Global_20383.f_1=3;
Global_20371=false;
Global_20586=0;
Global_22760=0;
unk.f_23=2;
unk.f_56=16;
while (true){
SYSTEM::WAIT(0);
if(Global_20383.f_1 > 3){
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PARACHUTE, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_BIKE_WINGS, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_TRANSFORM, true);
PAD::DISABLE_CONTROL_ACTION(PLAYER_CONTROL, INPUT_VEH_PARACHUTE, true);
}
if(iLocal_95==0){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_95=1;
iLocal_97=_MPCHAR_STAT_GET_INT(MP_STAT_RAYCARBINE_DEATHS, -1, 0);
}}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iLocal_95==1){
switch (LOCALIZATION::GET_CURRENT_LANGUAGE()){
case -1:
unk_0xBFB9C30889C63CE4("gta5mkt_en");
break;
case 0:
unk_0xBFB9C30889C63CE4("gta5mkt_en");
break;
case 1:
unk_0xBFB9C30889C63CE4("gta5mkt_fr");
break;
case 2:
unk_0xBFB9C30889C63CE4("gta5mkt_ge");
break;
case 3:
unk_0xBFB9C30889C63CE4("gta5mkt_it");
break;
case 4:
unk_0xBFB9C30889C63CE4("gta5mkt_sp");
break;
case 5:
unk_0xBFB9C30889C63CE4("gta5mkt_pt");
break;
case 6:
unk_0xBFB9C30889C63CE4("gta5mkt_pl");
break;
case 7:
unk_0xBFB9C30889C63CE4("gta5mkt_ru");
break;
case 8:
unk_0xBFB9C30889C63CE4("gta5mkt_ko");
break;
case 9:
unk_0xBFB9C30889C63CE4("gta5mkt_ch");
break;
case 10:
unk_0xBFB9C30889C63CE4("gta5mkt_ja");
break;
case 11:
unk_0xBFB9C30889C63CE4("gta5mkt_me");
break;
case 12:
unk_0xBFB9C30889C63CE4("gta5mkt_cn");
break;
}
if(Global_2793044.f_5057) SOCIALCLUB::SC_EMAIL_RETRIEVE_EMAILS(0, 1);
iLocal_95=2;
}
if(iLocal_95==2){
iLocal_96=SOCIALCLUB::SC_EMAIL_GET_RETRIEVAL_STATUS();
switch (iLocal_96){
case 3:
break;
case 0:
if(SOCIALCLUB::SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() > 0){
SOCIALCLUB::SC_EMAIL_GET_EMAIL_AT_INDEX(0, &unk);
if(unk.f_1 !=iLocal_97) Global_4541031=1;
else Global_4541031=0;
}
iLocal_95=3;
break;
case 1:
break;
case 4:
Global_4541031=0;
iLocal_95=3;
break;
}}}else{
Global_4541031=0;
iLocal_95=0;
}
if(MISC::IS_PC_VERSION())if(MISC::IS_STUNT_JUMP_IN_PROGRESS())if(Global_20383.f_1==6) Global_20383.f_1=3;
if(func_127(146)){
if(Global_78558==false){
num=func_95(0, false, 119);
if(num !=0) func_93(num);
else func_92();
func_88(0);
}}
if(Global_2793044.f_4642==1)if(Global_20383.f_1 > 3) Global_20383.f_1=3;
if(Global_78558==true){
if(Global_20383.f_1==3){
if(IS_BIT_SET(Global_4542297, 15)){
MISC::SET_BIT(&Global_4542297, 14);
SYSTEM::WAIT(0);
while (!func_86(3, 0, 1, false)){
SYSTEM::WAIT(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 15);
}
if(IS_BIT_SET(Global_4542297, 16)){
MISC::SET_BIT(&Global_4542297, 14);
SYSTEM::WAIT(0);
while (!func_86(17, 0, 1, false)){
SYSTEM::WAIT(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 16);
MISC::CLEAR_BIT(&Global_4542297, 27);
}
if(IS_BIT_SET(Global_4542297, 27)){
MISC::SET_BIT(&Global_4542297, 14);
SYSTEM::WAIT(0);
while (!func_86(23, 0, 1, false)){
SYSTEM::WAIT(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 16);
MISC::CLEAR_BIT(&Global_4542297, 27);
}
if(IS_BIT_SET(Global_4542297, 29)){
MISC::SET_BIT(&Global_4542297, 14);
SYSTEM::WAIT(0);
while (!func_86(1, 0, 1, false)){
SYSTEM::WAIT(0);
}
MISC::CLEAR_BIT(&Global_4542297, 14);
MISC::CLEAR_BIT(&Global_4542297, 29);
}}}
if(Global_78558==false){
if(IS_BIT_SET(Global_4542297, 11)){
if(Global_20383.f_1 !=10 && Global_20383.f_1 !=9 || func_85()==false){
MISC::CLEAR_BIT(&Global_4542297, 11);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(Global_20383.f_1==10 || Global_20383.f_1==9){
if(func_85()){
MISC::SET_BIT(&Global_4542297, 11);
MISC::SET_BIT(&Global_8254, 11);
}}
if(IS_BIT_SET(Global_4542297, 12)){
MISC::CLEAR_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(IS_BIT_SET(Global_4542297, 12)){
if(Global_22788==0 || Global_22789==false && !Global_22790){
MISC::CLEAR_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(Global_22790 || Global_22788 > 0 && Global_22789==true){
MISC::SET_BIT(&Global_4542297, 12);
MISC::SET_BIT(&Global_8254, 11);
}
if(MISC::IS_PC_VERSION()){
if(unk_0xE194FD02572C7F74()){
if(!IS_BIT_SET(Global_4542297, 19)){
MISC::SET_BIT(&Global_4542297, 19);
MISC::SET_BIT(&Global_8254, 11);
}}elseif(IS_BIT_SET(Global_4542297, 19)){
MISC::CLEAR_BIT(&Global_4542297, 19);
MISC::SET_BIT(&Global_8254, 11);
}}
if(iLocal_93==0){
if(IS_BIT_SET(Global_8253, 25)){
STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_92, -1);
iLocal_90=MISC::GET_GAME_TIMER();
iLocal_93=1;
}}elseif(!IS_BIT_SET(Global_8253, 25)){
STATS::STAT_GET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), &iLocal_92, -1);
iLocal_91=MISC::GET_GAME_TIMER();
iLocal_93=0;
STATS::STAT_SET_INT(joaat("SP_CELLPHONE_SLEEP_TIME"), iLocal_92 + (iLocal_91 - iLocal_90), true);
}
func_84();
func_83();
func_82();
func_80();
func_62();
func_61();
func_60();
if(IS_BIT_SET(Global_8254, 21))if(!AUDIO::IS_MOBILE_INTERFERENCE_ACTIVE()) MISC::CLEAR_BIT(&Global_8254, 21);
if(IS_BIT_SET(Global_8253, 7)){
func_55();
MISC::CLEAR_BIT(&Global_8253, 7);
}
if(IS_BIT_SET(Global_8253, 0)) func_54();
if(IS_BIT_SET(Global_4542297, 0)) func_53();
if(IS_BIT_SET(Global_8254, 11)){
Global_8957=0;
if(IS_BIT_SET(Global_8253, 25)) Global_8957=Global_8957 + 1;
if(IS_BIT_SET(Global_4542297, 11))if(Global_78558==false) Global_8957=Global_8957 + 1;
if(IS_BIT_SET(Global_4542297, 28))if(Global_78558==true) Global_8957=Global_8957 + 1;
if(IS_BIT_SET(Global_4542297, 12))if(Global_78558 && Global_22789 || Global_22790) Global_8957=Global_8957 + 1;
if(IS_BIT_SET(Global_4542297, 19)) Global_8957=Global_8957 + 1;
if(Global_8957==0){
MISC::CLEAR_BIT(&Global_8254, 11);
bLocal_41=false;
}else{
bLocal_41=true;
}}
if(!func_52()){
if(!HUD::IS_WARNING_MESSAGE_ACTIVE())if(Global_20383.f_1==3)if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || CUTSCENE::CAN_USE_MOBILE_PHONE_DURING_CUTSCENE())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(Global_78558) func_37();
else func_37();
if(Global_20383.f_1==4)if(IS_BIT_SET(Global_8254, 21)) func_37();
func_23();
}else{
func_16();
}
switch (Global_22760){
case 0:
func_15();
if(Global_22762==1) func_14();
break;
case 1:
func_13();
break;
case 2:
func_12();
break;
case 3:
func_11();
break;
case 4:
func_10();
break;
case 5:
func_9();
break;
case 14:
func_14();
break;
case 6:
if(Global_22762==1) func_14();
if(Global_22763==1){
Global_22760=9;
Global_22763=0;
}
break;
case 8:
func_8();
break;
case 9:
func_5();
break;
case 10:
func_4();
break;
case 11:
func_3();
break;
case 12:
func_2();
break;
case 13:
func_1();
break;
}}
return;
}


void func_1() // Position - 0x851{
iLocal_70=GRAPHICS::GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(Global_22764);
switch (iLocal_70){
case 0:
Global_22760=4;
break;
case 1:
break;
case 2:
MISC::SET_BIT(&Global_8254, 15);
func_14();
break;
}
return;
}


void func_2() // Position - 0x895{
if(GRAPHICS::LOAD_HIGH_QUALITY_PHOTO(Global_22764)) Global_22760=13;
else func_14();
return;
}


void func_3() // Position - 0x8B3{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_68=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_66);
}else{
iLocal_67=MISC::GET_GAME_TIMER();
iLocal_68=iLocal_67 - iLocal_65;
}
if(iLocal_68 > 3000) HUD::BUSYSPINNER_OFF();
if(iLocal_68 > 3200) Global_22760=6;
return;
}


void func_4() // Position - 0x8F6{
iLocal_70=GRAPHICS::GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO();
switch (iLocal_70){
case 0:
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_66=NETWORK::GET_NETWORK_TIME();
else iLocal_65=MISC::GET_GAME_TIMER();
Global_22760=11;
SYSTEM::SETTIMERB(0);
break;
case 1:
break;
case 2:
func_14();
break;
}
return;
}


void func_5() // Position - 0x94A{
Global_22765=-1;
if(Global_78558){
if(func_7()) GRAPHICS::SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(*Global_4718592.f_160097, Global_4718592.f_160097.f_1);
if(func_6(&(Global_2657589[PLAYER::PLAYER_ID() /*466*/].f_445), 0)) GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(1);
else GRAPHICS::SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(0);
}
if(GRAPHICS::SAVE_HIGH_QUALITY_PHOTO(Global_22765)){
Global_22760=10;
HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("CELL_278" /*Saving Photo to Gallery*/);
HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(1);
}else{
func_14();
}
return;
}
BOOL func_6(var uParam0, int iParam1) // Position - 0x9C2{
return IS_BIT_SET(*uParam0, iParam1);
}
BOOL func_7() // Position - 0x9D0{
return IS_BIT_SET(*Global_4718592.f_160050, 12);
}


void func_8() // Position - 0x9E5{
iLocal_70=GRAPHICS::GET_STATUS_OF_SORTED_LIST_OPERATION(1);
switch (iLocal_70){
case 0:
Global_22760=9;
break;
case 1:
break;
case 2:
func_14();
break;
}
return;
}


void func_9() // Position - 0xA1F{
iLocal_70=GRAPHICS::GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_71);
switch (iLocal_70){
case 0:
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(true, true);
Global_22760=6;
break;
case 1:
break;
case 2:
if(iLocal_71==3){
MISC::SET_BIT(&Global_8254, 14);
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
Global_22760=6;
}
if(Global_22760==5){
if(iLocal_71==0){
Global_22760=4;
iLocal_71=1;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
SYSTEM::WAIT(0);
}}
if(Global_22760==5){
if(iLocal_71==1){
Global_22760=4;
iLocal_71=2;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
SYSTEM::WAIT(0);
}}
if(Global_22760==5){
if(iLocal_71==2){
Global_22760=4;
iLocal_71=3;
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
SYSTEM::WAIT(0);
}}
break;
}
return;
}


void func_10() // Position - 0xAD3{
if(GRAPHICS::BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(iLocal_71)){
Global_22760=5;
}else{
MISC::SET_BIT(&Global_8254, 15);
func_14();
}
return;
}


void func_11() // Position - 0xAF8{
iLocal_70=GRAPHICS::GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO();
switch (iLocal_70){
case 0:
Global_22760=4;
iLocal_71=2;
break;
case 1:
break;
case 2:
Global_20383.f_1=3;
func_14();
break;
}
return;
}


void func_12() // Position - 0xB39{
if(GRAPHICS::BEGIN_TAKE_HIGH_QUALITY_PHOTO()) Global_22760=3;
return;
}


void func_13() // Position - 0xB4C{
if(SYSTEM::TIMERB() > 0) Global_22760=2;
return;
}


void func_14() // Position - 0xB60{
GRAPHICS::DRAW_LOW_QUALITY_PHOTO_TO_PHONE(false, false);
GRAPHICS::FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO();
GRAPHICS::FREE_MEMORY_FOR_LOW_QUALITY_PHOTO();
HUD::BUSYSPINNER_OFF();
Global_22761=false;
Global_22762=0;
Global_22763=0;
Global_22760=0;
return;
}


void func_15() // Position - 0xB8A{
if(Global_22761){
Global_22760=1;
MISC::CLEAR_BIT(&Global_8254, 14);
SYSTEM::SETTIMERB(0);
}
return;
}
BOOL func_16() // Position - 0xBAA{
const char* filenameForAudioConversation;
if(func_22(FRONTEND_CONTROL, Global_20350, 0) && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL) && !MISC::IS_STUNT_JUMP_IN_PROGRESS()){
if(MISC::IS_PC_VERSION()){
if(DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Synched")){
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_ANTIH_A" /*ALERT!*/);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_ANTIH" /*You haven't paid your phone bill. Phone use may be impeded.*/);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_SOCIAL_CLUB", "CHAR_SOCIAL_CLUB", false, 0, filenameForAudioConversation, 0);
}}
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(func_21(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_AIMING_FROM_COVER(PLAYER::PLAYER_PED_ID()))if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 25) || GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68)) return false;
Global_22784=0;
Global_22785=0;
if(HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID()==Global_22782 && HUD::THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() !=-1){
Global_22784=Global_22783;
iLocal_74=MISC::GET_GAME_TIMER();
iLocal_76=0;
iLocal_77=0;
while (func_20(2, Global_20350) && iLocal_76 < 250 && Global_20592==0 && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL)){
if(Global_8957 > 0) func_17();
SYSTEM::WAIT(0);
iLocal_75=MISC::GET_GAME_TIMER();
iLocal_76=iLocal_75 - iLocal_74;
if(Global_8957 > 0) func_17();
}
if(func_20(2, Global_20350) && Global_20592==0 && !HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL)) iLocal_77=1;
if(Global_20592==0){
if(iLocal_77==1){
Global_22785=1;
Global_22784=Global_22783;
Global_22784==1;
Global_22784==2;
Global_22784==3;
Global_22784==0;
Global_22784==4;
}else{
Global_22784=0;
}}else{
Global_22784=0;
}}else{
Global_22784=0;
}
if(!HUD::IS_HUD_COMPONENT_ACTIVE(HUD_WEAPON_WHEEL)){
return true;
}else{
Global_22784=0;
Global_22785=0;
return false;
}}
return false;
}


void func_17() // Position - 0xD63{
int alpha;
alpha=255;
if(Global_22790){
fLocal_87=-0.055f;
fLocal_88=0.745f;
fLocal_83=GRAPHICS::GET_SAFE_ZONE_SIZE();
fLocal_89=(100f * fLocal_86) - (100f * fLocal_83);
fLocal_84=fLocal_87 + (fLocal_89 * 0.005f);
fLocal_85=fLocal_88 - (fLocal_89 * 0.005f);
if(!func_19()){
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(true);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(7);
if(MISC::IS_PC_VERSION()) GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
GRAPHICS::SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(false);
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
}}else{
if(MISC::IS_PC_VERSION())if(Global_2646729.f_1593) bLocal_38=false;
elseif(IS_BIT_SET(Global_8253, 13))if(IS_BIT_SET(Global_4542297, 19)) bLocal_38=false;
else bLocal_38=true;
else bLocal_38=false;
elseif(Global_2646729.f_1593 || IS_BIT_SET(Global_8253, 13)) bLocal_38=true;
else bLocal_38=false;
if(func_52()) bLocal_38=true;
if(IS_BIT_SET(Global_4542297, 28)){
alpha=125;
if(bLocal_38==true) bLocal_38=false;
}
if(HUD::IS_MINIMAP_RENDERING()){
if(!HUD::IS_RADAR_HIDDEN()){
if(!bLocal_38){
if(!func_18()){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(!PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)){
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
if(MISC::IS_PC_VERSION() && Global_2646729.f_1593){
fLocal_87=0.165f;
fLocal_88=0.755f;
}else{
fLocal_87=0.07f;
fLocal_88=0.755f;
}
fLocal_83=GRAPHICS::GET_SAFE_ZONE_SIZE();
fLocal_89=(100f * fLocal_86) - (100f * fLocal_83);
fLocal_84=fLocal_87 + (fLocal_89 * 0.005f);
fLocal_85=fLocal_88 - (fLocal_89 * 0.005f);
if(!func_19()){
if(MISC::IS_PC_VERSION()) GRAPHICS::ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9();
if(Global_2646729.f_1593){
fLocal_39=0.09f;
fLocal_40=-0.25f;
if(MISC::IS_PC_VERSION()){
if(IS_BIT_SET(Global_4542297, 28)){
}else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
}
}
else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_37, fLocal_84 + fLocal_39, fLocal_85 + fLocal_40, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
}
}
else{
GRAPHICS::DRAW_SCALEFORM_MOVIE(plLocal_37, fLocal_84, fLocal_85, 0.27f, 0.45f, 255, 255, 255, alpha, 0);
}}}
}}}}}}
return;
}
BOOL func_18() // Position - 0xFB2{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("appcamera")) > 0) return true;
return false;
}
BOOL func_19() // Position - 0xFCF{
if(IS_BIT_SET(Global_8255, 3)) return true;
return false;
}
BOOL func_20(const char* sParam0, eControlAction ecaParam1) // Position - 0xFE7{
if(GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(sParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}
BOOL func_21(Ped pedParam0) // Position - 0x102D{
int weaponHash;
if(CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE()){
if(!PED::IS_PED_INJURED(pedParam0)){
WEAPON::GET_CURRENT_PED_WEAPON(pedParam0, &weaponHash, true);
if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_MARKSMANRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER_MK2")) return true;
}}
return false;
}
BOOL func_22(eControlType ectParam0, eControlAction ecaParam1, int iParam2) // Position - 0x108A{
if(PAD::IS_CONTROL_JUST_PRESSED(ectParam0, ecaParam1) || iParam2==1 && PAD::IS_DISABLED_CONTROL_JUST_PRESSED(ectParam0, ecaParam1)){
if(MISC::IS_PC_VERSION())if(MISC::UPDATE_ONSCREEN_KEYBOARD()==0 || NETWORK::NETWORK_TEXT_CHAT_IS_TYPING() && PAD::IS_USING_KEYBOARD_AND_MOUSE(FRONTEND_CONTROL)) return false;
if(HUD::IS_PAUSE_MENU_ACTIVE() || HUD::IS_WARNING_MESSAGE_ACTIVE()) return false;
else return true;
}
return false;
}


void func_23() // Position - 0x10FC{
switch (Global_20383.f_1){
case 4:
if(IS_BIT_SET(Global_8254, 21)){
}else{
if(SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
}else{
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand")){
SYSTEM::WAIT(0);
if(Global_8957 > 0) func_17();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0) Global_20380=SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}
func_36(false);
}
if(Global_21735 || Global_21736){
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
SCRIPT::REQUEST_SCRIPT("cellphone_flashhand");
while (!SCRIPT::HAS_SCRIPT_LOADED("cellphone_flashhand")){
SYSTEM::WAIT(0);
if(Global_8957 > 0) func_17();
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0) Global_20380=SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
SYSTEM::WAIT(0);
if(Global_8957 > 0) func_17();
}
if(Global_20366==0){
Global_20383.f_1=9;
func_24();
}}else{
bLocal_82=false;
if(Global_78558 && Global_22787 || Global_1890001.f_5) bLocal_82=true;
if(Global_113648.f_14053[Global_20383 /*20*/].f_18==1 || Global_113648.f_14053[Global_20383 /*20*/].f_17==1 || bLocal_82==true || Global_22784 !=0){
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
SYSTEM::WAIT(0);
if(Global_8957 > 0) func_17();
}
if(Global_20366==0){
if(Global_20383.f_1 > 3){
Global_20383.f_1=6;
if(Global_22784==0){
if(bLocal_82){
}
elseif(Global_78558==false){
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1) func_86(1, 0, 1, false);
}}else{
Global_22784==3;
Global_22784==1;
Global_22784==2;
Global_22784==4;
}}
}}else{
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364) && Global_20366==0){
SYSTEM::WAIT(0);
if(Global_8957 > 0) func_17();
}
if(Global_20366==0)if(Global_20383.f_1 > 3)if(Global_21735 || Global_21736) Global_20383.f_1=9;
else Global_20383.f_1=6;
}}}
break;
}
return;
}


void func_24() // Position - 0x1385{
var unk;
if(Global_20366==1) return;
if(Global_20383.f_1 < 4) return;
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
if(Global_78558) return;
SYSTEM::WAIT(0);
}
switch (Global_20383.f_1){
case 6:
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_33(Global_8858);
if(Global_8858==1){
func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20387;
}else{
func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20388), -1082130432, -1082130432, -1082130432);
Global_20363=Global_20388;
}
if(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, "CELL_205" /*SELECT*/, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, "CELL_206" /*BACK*/, 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 2f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 4f, -1f, -1f, 0, 0, 0, 0, 0);
}
if(Global_20586==0){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}elseif(Global_78558){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
if(Global_20585==true)if(Global_20371) func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
else func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 20f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(Global_20371) func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, "CELL_225" /*NEXT*/, 0, 0, 0, 0);
else func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 3f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}
if(Global_78558){
func_30();
MISC::CLEAR_BIT(&Global_8255, 9);
func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20387), -1082130432, -1082130432, -1082130432);
}
break;
case 7:
break;
case 10:
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(IS_BIT_SET(Global_8253, 20)){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
if(Global_20326) func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}
break;
case 9:
if(Global_20382==1){
func_29();
func_35(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
if(Global_21738){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_28("CELL_300" /*CHAR_DEFAULT*/);
func_28("CELL_217" /*INCOMING CALL*/);
func_28("CELL_217" /*INCOMING CALL*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(func_27(Global_7568, Global_20383)==0){
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, "CELL_217" /*INCOMING CALL*/, "CELL_195" /*Unknown*/, 0);
}else{
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(2), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), "CELL_217" /*INCOMING CALL*/, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}elseif(Global_21725==4 || Global_21725==3){
func_35(Global_20364, "SET_THEME", SYSTEM::TO_FLOAT(Global_113648.f_14053[Global_20383 /*20*/].f_6), -1082130432, -1082130432, -1082130432, -1082130432);
func_29();
if(Global_21738){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(4);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(2);
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("CELL_CONDFON" /*~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&Global_21740);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
func_28("CELL_300" /*CHAR_DEFAULT*/);
func_28("CELL_219" /*CONNECTED*/);
func_28("CELL_219" /*CONNECTED*/);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}else{
if(Global_21983) TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_219" /*CONNECTED*/, 24);
else TEXT_LABEL_ASSIGN_STRING(&unk, "CELL_211" /*DIALING...*/, 24);
if(func_27(Global_7568, Global_20383)==0){
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_117[Global_7568 /*10*/].f_4), "CELL_300" /*CHAR_DEFAULT*/, &unk, "CELL_195" /*Unknown*/, 0);
}else{
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(4), SYSTEM::TO_FLOAT(0), SYSTEM::TO_FLOAT(3), -1f, -1f, &(Global_2028[Global_7568 /*29*/].f_3), &(Global_2028[Global_7568 /*29*/].f_7), &unk, &(Global_2028[Global_7568 /*29*/].f_3), 0);
}}
func_35(Global_20364, "DISPLAY_VIEW", 4f, -1082130432, -1082130432, -1082130432, -1082130432);
}
func_25();
break;
default:
break;
}
return;
}


void func_25() // Position - 0x196A{
if(GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(Global_20364)){
func_26();
if(Global_20382==1){
if(Global_20371) func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, "CELL_203" /*ANSWER*/, 0, 0, 0, 0);
else func_32(Global_20364, "SET_SOFT_KEYS", 2f, 1f, 5f, -1f, -1f, 0, 0, 0, 0, 0);
if(Global_21772) func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(IS_BIT_SET(Global_8253, 20)) func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
elseif(Global_20371) func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_204" /*REJECT*/, 0, 0, 0, 0);
else func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 2f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
if(IS_BIT_SET(Global_8253, 20)){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 0f, 1f, -1f, -1f, 0, 0, 0, 0, 0);
}elseif(Global_20371){
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, "CELL_202" /*END CALL*/, 0, 0, 0, 0);
if(Global_20326) func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_SOFT_KEYS", 3f, 1f, 6f, -1f, -1f, 0, 0, 0, 0, 0);
}}}
return;
}


void func_26() // Position - 0x1AF8{
if(Global_78558){
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 0f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::CLEAR_BIT(&Global_8253, 17);
}
return;
}

int func_27(int iParam0, eCharacter echParam1) // Position - 0x1B29{
if(echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF) return 0;
return Global_2028[iParam0 /*29*/].f_24[echParam1];
}


void func_28(char* sParam0) // Position - 0x1B53{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_29() // Position - 0x1B65{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(Global_20383==CHAR_MICHAEL){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}
if(Global_20383==CHAR_FRANKLIN){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
default:
break;
}}
if(Global_20383==CHAR_TREVOR){
switch (Global_113648.f_14053[Global_20383 /*20*/].f_6){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
default:
break;
}}
if(Global_20383==CHAR_MULTIPLAYER){
switch (Global_4542573){
case 1:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 0);
break;
case 2:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 1);
break;
case 3:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 2);
break;
case 4:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 3);
break;
case 5:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 4);
break;
case 6:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 5);
break;
case 7:
PLAYER::SET_PLAYER_PHONE_PALETTE_IDX(PLAYER::PLAYER_ID(), 6);
break;
default:
break;
}}}
return;
}


void func_30() // Position - 0x1DDC{
if(Global_78558){
if(func_31()==0) return;
func_32(Global_20364, "SET_SOFT_KEYS", 1f, 1f, 9f, -1f, -1f, 0, 0, 0, 0, 0);
MISC::SET_BIT(&Global_8253, 17);
}
return;
}

int func_31() // Position - 0x1E18{
return 0;
}


void func_32(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x1E21{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_28(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_28(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_28(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_28(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_28(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_33(int iParam0) // Position - 0x1ED4{
int i;
int num;
int value;
int j;
int value2;
int k;
int value3;
int value4;
int value5;
int value6;
Global_22793=0;
Global_8858=iParam0;
for (i=0;
i < 9;
i=i + 1){
Global_8822[i]=0;
}
for (i=0;
i < 9;
i=i + 1){
num=0;
if(func_34(14)){
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value=42;
Global_20588=1;
}else{
value=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519)if(num==14) func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
Global_8822[i]=1;
}}}
num=num + 1;
}}else{
while (num < 34){
if(iParam0==Global_8260[num /*15*/].f_11){
if(i==Global_8260[num /*15*/].f_4){
if(Global_8822[i]==0){
Global_8786[i]=num;
if(num==1){
for (j=0;
j < 35;
j=j + 1){
if(Global_113648.f_14143[j /*104*/].f_24 !=0)if(Global_113648.f_14143[j /*104*/].f_28==0)if(Global_113648.f_14143[j /*104*/].f_99[Global_20383]==1) Global_22793=Global_22793 + 1;
}
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==7){
if(Global_78558){
value2=0;
value2=Global_4541031;
for (k=0;
k < 12;
k=k + 1){
if(Global_4541032[k /*104*/].f_24 !=0)if(Global_4541032[k /*104*/].f_28==0)if(Global_4541032[k /*104*/].f_99[Global_20383]==1) value2=value2 + 1;
}
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
switch (Global_20383){
case CHAR_MICHAEL:
value3=Global_44457;
break;
case CHAR_FRANKLIN:
value3=Global_44458;
break;
case CHAR_TREVOR:
value3=Global_44459;
break;
default:
break;
}
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}}elseif(num==14){
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==20){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8259);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==2){
if(IS_BIT_SET(Global_8254, 6)) value4=42;
else value4=255;
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value4);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==3){
if(IS_BIT_SET(Global_8254, 3)){
value5=42;
Global_20588=1;
}else{
value5=255;
Global_20588=0;
}
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==8){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_28(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[num /*15*/].f_10==57 && num==23){
value6=0;
value6=Global_1890001.f_1;
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
func_32(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}
Global_8822[i]=1;
}}}
num=num + 1;
}}}
return;
}
BOOL func_34(int iParam0) // Position - 0x246E{
return Global_43257==iParam0;
}


void func_35(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x247C{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_36(BOOL bParam0) // Position - 0x24DF{
if(bParam0)if(Global_20383.f_1==9) Global_20584=true;
else Global_20584=false;
return;
}


void func_37() // Position - 0x2501{
if(func_16() || IS_BIT_SET(Global_8253, 8)){
MISC::CLEAR_BIT(&Global_8253, 8);
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
if(func_44()){
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(IS_BIT_SET(Global_8254, 21)) MISC::CLEAR_BIT(&Global_8254, 21);
if(Global_20592==1) Global_20592=0;
switch (Global_20383.f_1){
case 3:
Global_20383.f_1=4;
if(iLocal_94==0){
func_38();
iLocal_94=1;
}
break;
default:
break;
}
Global_20582=1;
}}}}
return;
}


void func_38() // Position - 0x25A3{
if(Global_4541031==1){
if(!func_43()) return;
if(func_39(PLAYER::PLAYER_ID())){
if(MISC::GET_PROFILE_SETTING(803)==1){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_EMAIL_EVENT" /*You have received an Eyefind message. Check your Eyefind inbox from the GTAO Eyefind website via a laptop or your cellphone's Internet application.*/);
HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(true, true);
}else{
MISC::GET_PROFILE_SETTING(803) !=1;
}}}
return;
}
BOOL func_39(Player plParam0) // Position - 0x25F1{
Player player;
var gamerHandle;
if(NETWORK::NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV()==false) return false;
player=-1;
if(plParam0 !=PLAYER::PLAYER_ID()){
player=plParam0;
if(player==-1) return false;
}
if(MISC::IS_PS3_VERSION() || func_42())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
if(MISC::IS_XBOX360_VERSION() || func_41()){
if(plParam0==PLAYER::PLAYER_ID()){
if(NETWORK::NETWORK_CHECK_COMMUNICATION_PRIVILEGES(0, -3, true) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1)) return true;
}else{
gamerHandle={
GET_GAMER_HANDLE_PLAYER(plParam0) 
};
if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, -1) || NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(1, -1) && NETWORK::NETWORK_IS_FRIEND(&gamerHandle)) return true;
}}
if(MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_COMMUNICATION_PRIVILEGES(0, player))if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
struct<13> GET_GAMER_HANDLE_PLAYER(Player plParam0) // Position - 0x26CA{
var gamerHandle;
NETWORK::NETWORK_HANDLE_FROM_PLAYER(plParam0, &gamerHandle, 13);
return gamerHandle;
}
BOOL func_41() // Position - 0x26E1{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}
BOOL func_42() // Position - 0x26F7{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_43() // Position - 0x270D{
if(func_42())if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==false) return true;
elseif(func_41())if(NETWORK::NETWORK_HAS_AGE_RESTRICTIONS()==false) return true;
elseif(MISC::IS_PC_VERSION())if(NETWORK::NETWORK_HAVE_ONLINE_PRIVILEGES()) return true;
return false;
}
BOOL func_44() // Position - 0x2754{
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_STUNNED(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID())==1) return true;
else return false;
return true;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x27BF{
if(func_34(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[0 /*29*/]) Global_20383=CHAR_MICHAEL;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[1 /*29*/]) Global_20383=CHAR_FRANKLIN;
elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113648.f_28052[2 /*29*/]) Global_20383=CHAR_TREVOR;
else Global_20383=CHAR_MICHAEL;
}else{
Global_20383=_GET_CURRENT_PLAYER_CHARACTER();
if(Global_20383==_CHAR_NULL) Global_20383=CHAR_MULTIPLAYER;
if(Global_78558) Global_20383=CHAR_MULTIPLAYER;
if(Global_20383 > CHAR_MULTIPLAYER) Global_20383=CHAR_MULTIPLAYER;
}
return;
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2861{
func_47();
return Global_113648.f_2365.f_539.f_4321;
}


void func_47() // Position - 0x287A{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_48(character) && !func_34(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_48(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
Global_113648.f_2365.f_539.f_4323=character;
Global_113648.f_2365.f_539.f_4321=character;
return;
}}else{
if(Global_113648.f_2365.f_539.f_4321 !=_CHAR_NULL) Global_113648.f_2365.f_539.f_4323=Global_113648.f_2365.f_539.f_4321;
return;
}}
Global_113648.f_2365.f_539.f_4321=145;
return;
}
BOOL func_48(eCharacter echParam0) // Position - 0x2977{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2983{
eCharacter i;
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
entityModel=ENTITY::GET_ENTITY_MODEL(pedParam0);
for (i=CHAR_MICHAEL;
i <=CHAR_TREVOR;
i=i + 1){
if(_GET_CHARACTER_MODEL(i)==entityModel) return i;
}}
return _CHAR_NULL;
}
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x29C0{
if(func_48(character)) return func_51(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_51(eCharacter echParam0) // Position - 0x29E5{
return Global_2028[echParam0 /*29*/];
}
BOOL func_52() // Position - 0x29F4{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_53() // Position - 0x2A1B{
var string1;
int num;
var sender;
var sender2;
var sender3;
var sender4;
MISC::CLEAR_BIT(&Global_4542297, 0);
if(Global_22786 !=0){
if(PED::IS_PEDHEADSHOT_VALID(Global_22786)){
if(PED::IS_PEDHEADSHOT_READY(Global_22786)){
TEXT_LABEL_ASSIGN_STRING(&string1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22786), 64);
Global_22794[Global_22792]=Global_22786;
}else{
TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
Global_22794[Global_4542281]=0;
}}else{
TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
Global_22794[Global_4542281]=0;
}}else{
TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_7)), 64);
Global_22794[Global_4542281]=0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&string1)) TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
elseif(MISC::ARE_STRINGS_EQUAL(&string1, "NULL")) TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
if(Global_4541032[Global_4542281 /*104*/].f_32==4 || Global_4541032[Global_4542281 /*104*/].f_32==5 || Global_4541032[Global_4542281 /*104*/].f_32==6 || Global_4541032[Global_4542281 /*104*/].f_32==7 || Global_4541032[Global_4542281 /*104*/].f_32==8 || Global_4541032[Global_4542281 /*104*/].f_32==9 || Global_4541032[Global_4542281 /*104*/].f_32==10 || Global_4541032[Global_4542281 /*104*/].f_32==11){
num=0;
switch (Global_4541032[Global_4542281 /*104*/].f_49){
case 1:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /*~a~ ~a~.*/);
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /*~a~ ~a~, ~a~.*/);
break;
case 3:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
break;
case 4:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
break;
case 5:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 6:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 7:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 8:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 9:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_4541032[Global_4542281 /*104*/]);
while (num < Global_4541032[Global_4542281 /*104*/].f_49){
switch (Global_4541032[Global_4542281 /*104*/].f_32){
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2793044.f_1755[num /*4*/]);
break;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935188[num /*4*/]);
break;
case 6:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935229[num /*4*/]);
break;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935250[num /*4*/]);
break;
case 8:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935267[num /*4*/]);
break;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935280[num /*4*/]);
break;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935293[num /*4*/]);
break;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935306[num /*4*/]);
break;
}
num=num + 1;
}
TEXT_LABEL_ASSIGN_STRING(&sender, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender, 0);
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=iLocal_64;
Global_22786=0;
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_4541032[Global_4542281 /*104*/]);
switch (Global_4541032[Global_4542281 /*104*/].f_32){
case 0:
break;
case 1:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_33));
if(Global_4541032[Global_4542281 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")) HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
if(Global_4541032[Global_4542281 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_67))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_67));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_83))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_83));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_83));
}
break;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541032[Global_4542281 /*104*/].f_49);
break;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_33));
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_4541032[Global_4542281 /*104*/].f_49);
if(Global_4541032[Global_4542281 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL")) HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
if(Global_4541032[Global_4542281 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_4541032[Global_4542281 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_67))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_67));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_67));
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_4541032[Global_4542281 /*104*/].f_83))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_4541032[Global_4542281 /*104*/].f_83));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_4541032[Global_4542281 /*104*/].f_83));
}
break;
}
if(Global_4541032[Global_4542281 /*104*/].f_17==145){
TEXT_LABEL_ASSIGN_STRING(&sender2, "<C>", 64);
TEXT_LABEL_APPEND_STRING(&sender2, &Global_8941, 64);
TEXT_LABEL_APPEND_STRING(&sender2, "</C>", 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender2, 0);
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=iLocal_64;
}else{
TEXT_LABEL_ASSIGN_STRING(&sender3, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_4541032[Global_4542281 /*104*/].f_17 /*29*/].f_3)), 64);
if(Global_4541032[Global_4542281 /*104*/].f_17==98){
TEXT_LABEL_ASSIGN_STRING(&sender4, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
TEXT_LABEL_APPEND_STRING(&sender4, &sender3, 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender4, 0);
}else{
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 2, &sender3, 0);
}
MISC::SET_BIT(&Global_4542297, 1);
Global_22783=1;
Global_22782=iLocal_64;
Global_22786=0;
}}
Global_4541032[Global_4542281 /*104*/].f_16=iLocal_64;
return;
}


void func_54() // Position - 0x3065{
var txdName;
var subject;
const char* filenameForAudioConversation;
TEXT_LABEL_ASSIGN_STRING(&txdName, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_8939 /*29*/].f_7)), 64);
if(Global_8958==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
TEXT_LABEL_ASSIGN_STRING(&subject, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&Global_8863[1 /*6*/]), 64);
filenameForAudioConversation=HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_253" /*New Contact*/);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, filenameForAudioConversation, &subject);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255" /*New Contact:
~n~~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_8863[1 /*6*/]);
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8253, 0);
return;
}


void func_55() // Position - 0x30E2{
if(IS_BIT_SET(Global_8253, 1)){
func_58();
func_56();
Global_113648.f_14053[Global_20383 /*20*/].f_18=1;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
uLocal_53[Global_20383]=NETWORK::GET_NETWORK_TIME();
uLocal_43[Global_20383]=1;
}elseif(!IS_BIT_SET(Global_8253, 10)){
uLocal_48[Global_20383]=MISC::GET_GAME_TIMER();
uLocal_43[Global_20383]=1;
}else{
uLocal_48[0]=MISC::GET_GAME_TIMER();
uLocal_48[2]=MISC::GET_GAME_TIMER();
uLocal_48[1]=MISC::GET_GAME_TIMER();
uLocal_43[0]=1;
uLocal_43[2]=1;
uLocal_43[1]=1;
}
MISC::CLEAR_BIT(&Global_8253, 1);
}
return;
}


void func_56() // Position - 0x317B{
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_78558) Global_113648.f_14053[3 /*20*/].f_10=_MPCHAR_STAT_GET_INT(MP_STAT_FM_CELLPHONE_VIBRATE, -1, 0);
if(Global_113648.f_14053[Global_20383 /*20*/].f_10==1)if(!func_57(0)) PAD::SET_CONTROL_SHAKE(PLAYER_CONTROL, 2000, 100);
return;
}
BOOL func_57(int iParam0) // Position - 0x31C8{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}


void func_58() // Position - 0x321F{
var string1;
int num;
int num2;
var sender;
var sender2;
var sender3;
var sender4;
if(Global_22786 !=0){
if(PED::IS_PEDHEADSHOT_VALID(Global_22786)){
if(PED::IS_PEDHEADSHOT_READY(Global_22786)){
TEXT_LABEL_ASSIGN_STRING(&string1, PED::GET_PEDHEADSHOT_TXD_STRING(Global_22786), 64);
Global_22794[Global_22792]=Global_22786;
}else{
TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
Global_22794[Global_22792]=0;
}}else{
TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
Global_22794[Global_22792]=0;
}}else{
TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_7)), 64);
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==CHAR_COMIC_STORE) TEXT_LABEL_ASSIGN_STRING(&string1, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_COMIC_P" /*CHAR_COMIC_STORE*/), 64);
Global_22794[Global_22792]=0;
}
if(MISC::IS_STRING_NULL_OR_EMPTY(&string1)) TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
elseif(MISC::ARE_STRINGS_EQUAL(&string1, "NULL")) TEXT_LABEL_ASSIGN_STRING(&string1, "CHAR_DEFAULT", 64);
if(Global_113648.f_14143[Global_22792 /*104*/].f_32==4 || Global_113648.f_14143[Global_22792 /*104*/].f_32==5 || Global_113648.f_14143[Global_22792 /*104*/].f_32==6 || Global_113648.f_14143[Global_22792 /*104*/].f_32==7 || Global_113648.f_14143[Global_22792 /*104*/].f_32==8 || Global_113648.f_14143[Global_22792 /*104*/].f_32==9 || Global_113648.f_14143[Global_22792 /*104*/].f_32==10 || Global_113648.f_14143[Global_22792 /*104*/].f_32==11 || Global_113648.f_14143[Global_22792 /*104*/].f_32==12){
num=0;
num2=func_59(9, Global_113648.f_14143[Global_22792 /*104*/].f_49);
switch (num2){
case 1:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL01" /*~a~ ~a~.*/);
break;
case 2:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL02" /*~a~ ~a~, ~a~.*/);
break;
case 3:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL03" /*~a~ ~a~, ~a~, ~a~.*/);
break;
case 4:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL04" /*~a~ ~a~, ~a~, ~a~, ~a~.*/);
break;
case 5:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL05" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 6:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL06" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 7:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL07" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 8:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL08" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
case 9:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_CL09" /*~a~ ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~, ~a~.*/);
break;
}
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_113648.f_14143[Global_22792 /*104*/]);
while (num < num2){
switch (Global_113648.f_14143[Global_22792 /*104*/].f_32){
case 4:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_2793044.f_1755[num /*4*/]);
break;
case 5:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935188[num /*4*/]);
break;
case 6:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935229[num /*4*/]);
break;
case 7:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935250[num /*4*/]);
break;
case 8:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935267[num /*4*/]);
break;
case 9:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935280[num /*4*/]);
break;
case 10:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935293[num /*4*/]);
break;
case 11:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935306[num /*4*/]);
break;
case 12:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Global_1935319[num /*4*/]);
break;
}
num=num + 1;
}
TEXT_LABEL_ASSIGN_STRING(&sender, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender, 0);
Global_22783=3;
Global_22782=iLocal_64;
Global_22786=0;
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&Global_113648.f_14143[Global_22792 /*104*/]);
switch (Global_113648.f_14143[Global_22792 /*104*/].f_32){
case 0:
break;
case 1:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")) HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_67))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_83))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}
break;
case 2:
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113648.f_14143[Global_22792 /*104*/].f_49);
break;
case 3:
HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_33));
HUD::ADD_TEXT_COMPONENT_INTEGER(Global_113648.f_14143[Global_22792 /*104*/].f_49);
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==1 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL")) HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
if(Global_113648.f_14143[Global_22792 /*104*/].f_66==2 && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), "NULL") && !MISC::ARE_STRINGS_EQUAL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), "NULL")){
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_67))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_67));
if(HUD::DOES_TEXT_LABEL_EXIST(&(Global_113648.f_14143[Global_22792 /*104*/].f_83))) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
else HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_113648.f_14143[Global_22792 /*104*/].f_83));
}
break;
}
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==_CHAR_NULL){
TEXT_LABEL_ASSIGN_STRING(&sender2, "<C>", 64);
TEXT_LABEL_APPEND_STRING(&sender2, &Global_8941, 64);
TEXT_LABEL_APPEND_STRING(&sender2, "</C>", 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender2, 0);
Global_22783=3;
Global_22782=iLocal_64;
}else{
TEXT_LABEL_ASSIGN_STRING(&sender3, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[Global_113648.f_14143[Global_22792 /*104*/].f_17 /*29*/].f_3)), 64);
if(Global_113648.f_14143[Global_22792 /*104*/].f_17==CHAR_SOCIAL_CLUB){
TEXT_LABEL_ASSIGN_STRING(&sender4, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
TEXT_LABEL_APPEND_STRING(&sender4, &sender3, 64);
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender4, 0);
}else{
iLocal_64=HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&string1, &string1, false, 1, &sender3, 0);
}
Global_22783=3;
Global_22782=iLocal_64;
Global_22786=0;
}}
Global_113648.f_14143[Global_22792 /*104*/].f_16=iLocal_64;
return;
}

int func_59(int iParam0, int iParam1) // Position - 0x38EB{
if(iParam0 < iParam1) return iParam0;
elseif(iParam1 < iParam0) return iParam1;
return iParam0;
}


void func_60() // Position - 0x3910{
if(IS_BIT_SET(Global_8253, 19)){
MISC::CLEAR_BIT(&Global_8253, 19);
_UPDATE_CURRENT_PLAYER_CHARACTER();
Global_113648.f_14053[3 /*20*/].f_18=0;
Global_113648.f_14053[3 /*20*/].f_17=0;
}
return;
}


void func_61() // Position - 0x3948{
if(uLocal_43[Global_20383]==1){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_63=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), uLocal_53[Global_20383]);
}else{
uLocal_58[Global_20383]=MISC::GET_GAME_TIMER();
iLocal_63=uLocal_58[Global_20383] - uLocal_48[Global_20383];
}
if(iLocal_63 > 300000){
Global_113648.f_14053[Global_20383 /*20*/].f_18=0;
Global_113648.f_14053[Global_20383 /*20*/].f_17=0;
uLocal_43[Global_20383]=0;
}}
return;
}


void func_62() // Position - 0x39C1{
int num;
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_78558==false){
if(!func_52()){
if(iLocal_69==0){
if(Global_113648.f_14143[21 /*104*/].f_24 !=0 || Global_113648.f_14143[22 /*104*/].f_24 !=0 || Global_113648.f_14143[23 /*104*/].f_24 !=0){
switch (Global_20383){
case CHAR_MICHAEL:
if(Global_113648.f_14143[21 /*104*/].f_24 !=0){
iLocal_42=21;
iLocal_69=1;
SYSTEM::SETTIMERA(0);
}
break;
case CHAR_FRANKLIN:
if(Global_113648.f_14143[22 /*104*/].f_24 !=0){
iLocal_42=22;
iLocal_69=1;
SYSTEM::SETTIMERA(0);
}
break;
case CHAR_TREVOR:
if(Global_113648.f_14143[23 /*104*/].f_24 !=0){
iLocal_42=23;
iLocal_69=1;
SYSTEM::SETTIMERA(0);
}
break;
default:
break;
}}}elseif(SYSTEM::TIMERA() > 15000){
iLocal_69=0;
num=0;
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(iLocal_42==21 && Global_20383 !=CHAR_MICHAEL) num=1;
if(iLocal_42==22 && Global_20383 !=CHAR_FRANKLIN) num=1;
if(iLocal_42==23 && Global_20383 !=CHAR_TREVOR) num=1;
if(Global_113648.f_14143[iLocal_42 /*104*/].f_24 !=0 && num==0)if(!func_34(14))if(_SEND_TEXT_MESSAGE_FROM_CHARACTER_2(Global_113648.f_14143[iLocal_42 /*104*/].f_17, &Global_113648.f_14143[iLocal_42 /*104*/], Global_113648.f_14143[iLocal_42 /*104*/].f_24, Global_113648.f_14143[iLocal_42 /*104*/].f_25, Global_113648.f_14143[iLocal_42 /*104*/].f_26, Global_113648.f_14143[iLocal_42 /*104*/].f_29, 0, true, Global_113648.f_14143[iLocal_42 /*104*/].f_31, Global_113648.f_14143[iLocal_42 /*104*/].f_30)) Global_113648.f_14143[iLocal_42 /*104*/].f_24=0;
}
if(iLocal_80==0){
if(Global_8929[Global_20383]){
iLocal_80=1;
echLocal_81=Global_20383;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) iLocal_78=NETWORK::GET_NETWORK_TIME();
else iLocal_72=MISC::GET_GAME_TIMER();
}}else{
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iLocal_79=NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_78);
}else{
iLocal_73=MISC::GET_GAME_TIMER();
iLocal_79=iLocal_73 - iLocal_72;
}
if(iLocal_79 > 7000){
if(_CAN_ENTER_FREEROAM_STATE(0)){
Global_8863[1 /*6*/]={
Global_8912[Global_20383 /*4*/] 
};
Global_8939=Global_8934[Global_20383];
Global_8929[Global_20383]=false;
iLocal_80=0;
}}
if(echLocal_81 !=Global_20383) iLocal_80=0;
}}}
return;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x3C2D{
return func_64(iParam0, Global_43257);
}
BOOL func_64(int iParam0, int iParam1) // Position - 0x3C3E{
if(iParam1==15) return 1;
if(iParam0==15) return 0;
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
}
return 1;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
}
break;
case 2:
case 3:
switch (iParam1){
case 5:
case 6:
case 8:
case 17:
return 1;
}
break;
case 4:
if(iParam1==17) return 1;
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5) return 1;
break;
case 7:
if(iParam1==6) return 1;
break;
case 9:
if(iParam1==5) return 1;
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
}
break;
case 11:
if(iParam1==5) return 1;
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
}
break;
}
return 0;
}
BOOL _SEND_TEXT_MESSAGE_FROM_CHARACTER_2(eCharacter echParam0, char* sParam1, int iParam2, var uParam3, var uParam4, var uParam5, int iParam6, BOOL bParam7, var uParam8, var uParam9) // Position - 0x3E1F{
int num;
char* str;
int num2;
char* str2;
int num3;
char* str3;
char* str4;
int num4;
MISC::CLEAR_BIT(&Global_8253, 10);
num=0;
str="NULL";
num2=-99;
str2="NULL";
num3=0;
str3="NULL";
str4="NULL";
num4=3;
if(func_67(echParam0, sParam1, iParam2, num, str, str2, num2, uParam3, uParam4, uParam5, bParam7, uParam8, uParam9, num3, str3, str4, num4)==1){
if(bParam7==true){
Global_8960=iParam6;
Global_8863[3 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8940=echParam0;
MISC::SET_BIT(&Global_8253, 1);
MISC::SET_BIT(&Global_8253, 7);
}
return true;
}
return false;
}
struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x3EAE{
return Global_2028[character /*29*/].f_3;
}

int func_67(eCharacter echParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, BOOL bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x3EC1{
int num;
BOOL flag;
iParam13 > 99;
MISC::ARE_STRINGS_EQUAL(sParam14, sParam15);
_UPDATE_CURRENT_PLAYER_CHARACTER();
num=0;
switch (iParam16){
case 0:
if(Global_20383==CHAR_MICHAEL) num=0;
else num=1;
break;
case 2:
if(Global_20383==CHAR_TREVOR) num=0;
else num=1;
break;
case 1:
if(Global_20383==CHAR_FRANKLIN) num=0;
else num=1;
break;
default:
num=0;
break;
}
if(num==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(Global_113648.f_14053[Global_20383 /*20*/].f_17==1) return 0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0) return 0;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptextmessage")) > 0) return 0;
}
if(func_79()==0){
func_77();
return 0;
}
func_76(Global_22792);
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_14143[Global_22792 /*104*/], sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=echParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=uParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=uParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=uParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=uParam11;
Global_113648.f_14143[Global_22792 /*104*/].f_28=0;
Global_113648.f_14143[Global_22792 /*104*/].f_32=iParam3;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_33), sParam4, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_49=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_50), sParam5, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_66=iParam13;
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_67), sParam14, 64);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_14143[Global_22792 /*104*/].f_83), sParam15, 64);
if(IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
Global_8959=4;
func_75(0);
func_75(2);
func_75(1);
}else{
_UPDATE_CURRENT_PLAYER_CHARACTER();
switch (iParam16){
case 3:
Global_113648.f_14143[Global_22792 /*104*/].f_99[Global_20383]=1;
break;
case 0:
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=1;
break;
case 2:
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=1;
break;
case 1:
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20383){
case CHAR_MICHAEL:
func_75(0);
Global_8959=0;
break;
case CHAR_FRANKLIN:
func_75(1);
Global_8959=1;
break;
case CHAR_TREVOR:
func_75(2);
Global_8959=2;
break;
case CHAR_MULTIPLAYER:
func_75(3);
Global_8959=3;
break;
default:
Global_8959=4;
break;
}}}
if(iParam7==1){
if(IS_BIT_SET(Global_8253, 10)){
Global_113648.f_14053[0 /*20*/].f_17=1;
Global_113648.f_14053[1 /*20*/].f_17=1;
Global_113648.f_14053[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113648.f_14053[Global_20383 /*20*/].f_17=1;
break;
case 0:
Global_113648.f_14053[0 /*20*/].f_17=1;
break;
case 2:
Global_113648.f_14053[2 /*20*/].f_17=1;
break;
case 1:
Global_113648.f_14053[1 /*20*/].f_17=1;
break;
}}}
Global_22794[Global_22792]=0;
if(bParam10){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_20326){
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20383){
case CHAR_MICHAEL:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
break;
case CHAR_TREVOR:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
break;
case CHAR_FRANKLIN:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
break;
default:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1)if(!func_74()) AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, true);
}
if(!Global_20585){
if(Global_20383.f_1==6){
func_35(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_33(1);
func_35(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && echParam0==Global_1977527) flag=true;
func_68(echParam0, sParam1, flag, func_73(PLAYER::PLAYER_ID()));
return 1;
}


void func_68(eCharacter echParam0, char* sParam1, BOOL bParam2, Any anParam3) // Position - 0x439C{
if(!func_69()) return;
MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(echParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, anParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2) Global_1977527=-1;
return;
}
BOOL func_69() // Position - 0x43F9{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_70(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_70(Player plParam0) // Position - 0x445C{
return func_71(plParam0, 20);
}
BOOL func_71(Player plParam0, int iParam1) // Position - 0x446C{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Player _INVALID_PLAYER_INDEX() // Position - 0x4484{
return -1;
}
Any func_73(Player plParam0) // Position - 0x448D{
return Global_1853910[plParam0 /*862*/].f_205.f_6;
}
BOOL func_74() // Position - 0x44A2{
return Global_1575060;
}


void func_75(int iParam0) // Position - 0x44AE{
var unk;
var unk2;
unk=Global_113648.f_14053[iParam0 /*20*/].f_8;
unk=unk;
unk2=unk2;
return;
}


void func_76(int iParam0) // Position - 0x44CD{
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
Global_113648.f_14143[iParam0 /*104*/].f_18=clockSeconds;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_1=clockMinutes;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_2=clockHours;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_3=clockDayOfMonth;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_4=num;
Global_113648.f_14143[iParam0 /*104*/].f_18.f_5=clockYear;
return;
}


void func_77() // Position - 0x455F{
int num;
int num2;
int num3;
if(Global_78558){
num=24;
num2=33;
}else{
num=0;
num2=20;
}
num3=num;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (num3 < num2){
if(!func_78(Global_113648.f_14143[num3 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=num3;
num3=num3 + 1;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
return;
}
BOOL func_78(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x462A{
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

int func_79() // Position - 0x4715{
int num;
int num2;
int i;
if(Global_78558){
num=24;
num2=33;
}else{
num=0;
num2=20;
}
for (i=num;
i < num2;
i=i + 1){
if(Global_113648.f_14143[i /*104*/].f_24==0){
Global_22792=i;
return 1;
}}
i=num;
Global_22792=34;
Global_113648.f_14143[Global_22792 /*104*/].f_18=-1;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_1=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_2=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_3=0;
Global_113648.f_14143[Global_22792 /*104*/].f_18.f_5=99999;
while (i < num2){
if(Global_113648.f_14143[i /*104*/].f_24==0 || Global_113648.f_14143[i /*104*/].f_24==1)if(!func_78(Global_113648.f_14143[i /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=i;
Global_113648.f_14143[i /*104*/].f_24==2;
i=i + 1;
}
if(Global_22792==34) return 0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}


void func_80() // Position - 0x487D{
if(IS_BIT_SET(Global_8253, 6)){
if(Global_8957 > 0){
if(IS_BIT_SET(Global_8254, 11)){
if(bLocal_41){
func_81(plLocal_37, "CLEAR_ALL");
if(IS_BIT_SET(Global_8253, 25)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(26);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(IS_BIT_SET(Global_4542297, 11)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(53);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_78558==true){
if(IS_BIT_SET(Global_4542297, 12)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(52);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(IS_BIT_SET(Global_4542297, 28)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(60);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(148f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}}
if(IS_BIT_SET(Global_4542297, 19)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plLocal_37, "CREATE_ALERT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(55);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
if(IS_BIT_SET(Global_4542297, 12) || IS_BIT_SET(Global_4542297, 11) || IS_BIT_SET(Global_8253, 25)) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(192f);
else GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(222f);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
MISC::CLEAR_BIT(&Global_8254, 11);
bLocal_41=false;
}}}
if(Global_8957 < 1){
GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&plLocal_37);
MISC::CLEAR_BIT(&Global_8253, 6);
}else{
func_17();
}}elseif(Global_8957 > 0){
plLocal_37=GRAPHICS::REQUEST_SCALEFORM_MOVIE("cellphone_alert_popup");
while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(plLocal_37)){
SYSTEM::WAIT(0);
}
GRAPHICS::SET_SCRIPT_GFX_DRAW_ORDER(4);
MISC::SET_BIT(&Global_8253, 6);
}
return;
}


void func_81(Player plParam0, char* sParam1) // Position - 0x4A32{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_82() // Position - 0x4A47{
if(IS_BIT_SET(Global_8254, 7)){
MISC::SET_BIT(&Global_8254, 6);
MISC::CLEAR_BIT(&Global_8254, 7);
return;
}
if(!IS_BIT_SET(Global_8254, 7)){
MISC::CLEAR_BIT(&Global_8254, 6);
return;
}
return;
}


void func_83() // Position - 0x4A7E{
if(IS_BIT_SET(Global_8254, 4)){
MISC::SET_BIT(&Global_8254, 3);
MISC::CLEAR_BIT(&Global_8254, 4);
return;
}
if(!IS_BIT_SET(Global_8254, 4)){
MISC::CLEAR_BIT(&Global_8254, 3);
return;
}
return;
}


void func_84() // Position - 0x4AB5{
if(IS_BIT_SET(Global_8254, 2)){
if(!Global_20383.f_1==1) Global_20383.f_1=0;
MISC::CLEAR_BIT(&Global_8254, 2);
return;
}
if(!IS_BIT_SET(Global_8254, 2)){
if(!Global_20383.f_1==1)if(Global_20383.f_1 < 4) Global_20383.f_1=3;
return;
}
return;
}
BOOL func_85() // Position - 0x4B07{
eViewModeContext camActiveViewModeContext;
eViewMode camViewModeForContext;
int num;
Vehicle vehiclePedIsIn;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(Global_20383.f_1==10 || Global_20383.f_1==9)if(Global_20326==false)if(Global_7568 !=128)if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) Global_21725 !=2;
if(func_34(14)) return false;
if(PED::IS_PED_IN_COVER(PLAYER::PLAYER_PED_ID(), false)) return false;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))if(!CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING())if(ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) return false;
if(unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID()) && !(IS_BIT_SET(Global_4718592.f_37, 17) && NETWORK::NETWORK_IS_ACTIVITY_SESSION() || Global_1926632)) return false;
if(Global_112696) return false;
}
if(Global_78558) return false;
num=0;
camActiveViewModeContext=CAM::GET_CAM_ACTIVE_VIEW_MODE_CONTEXT();
camViewModeForContext=CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(camActiveViewModeContext);
if(camViewModeForContext==FIRST_PERSON && camActiveViewModeContext==ON_FOOT || CAM::IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING()){
num=1;
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
vehiclePedIsIn=PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
if(VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || VEHICLE::IS_THIS_MODEL_A_QUADBIKE(ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)) || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("seashark") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("seashark2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("rhino") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("submersible") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("submersible2") || ENTITY::GET_ENTITY_MODEL(vehiclePedIsIn)==joaat("toro")) num=0;
}}}
if(Global_4542575 || num==1)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("apptrackify")) > 0 || Global_113648.f_14053.f_89)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("michael2")) > 0) return true;
else return false;
else return true;
return false;
}
BOOL func_86(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x4D50{
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_78558==false){
if(func_34(14)){
if(Global_22784==2 || Global_22784==4){
}else{
return false;
}}}
if(Global_20383.f_1==9) return false;
if(iParam2==0)if(func_57(0)==true) return false;
if(Global_20349==1) return false;
if(Global_20383.f_1==7) return false;
iParam1==1;
if(!SCRIPT::IS_THREAD_ACTIVE(Global_20380)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0){
if(Global_20383.f_1 < 4){
func_87("cellphone_flashhand");
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand"))==0) Global_20380=SYSTEM::START_NEW_SCRIPT("cellphone_flashhand", DEFAULT);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("cellphone_flashhand");
}}}
while (!Global_20365){
SYSTEM::WAIT(0);
}
func_133();
func_131();
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0){
Global_8859=0;
Global_20383.f_1=7;
func_87(&(Global_8260[iParam0 /*15*/].f_5));
if(bParam3)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0) Global_20381=SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CONTACTS_APP);
elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_8260[iParam0 /*15*/].f_9)==0) Global_20381=SYSTEM::START_NEW_SCRIPT(&(Global_8260[iParam0 /*15*/].f_5), CELLPHONE);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&(Global_8260[iParam0 /*15*/].f_5));
return true;
}
return true;
}


void func_87(char* sParam0) // Position - 0x4EB3{
SCRIPT::REQUEST_SCRIPT(sParam0);
while (!SCRIPT::HAS_SCRIPT_LOADED(sParam0)){
SYSTEM::WAIT(0);
}
return;
}


void func_88(int iParam0) // Position - 0x4ED3{
if(func_91()) return;
if(Global_20584)if(func_90()) func_89(true, true);
else func_89(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_52()) Global_20383.f_1=3;
return;
}


void func_89(BOOL bParam0, BOOL bParam1) // Position - 0x4F5D{
if(bParam0){
if(func_57(0)){
Global_20584=true;
if(bParam1) MOBILE::GET_MOBILE_PHONE_POSITION(&Global_20320);
Global_20311={
Global_20329[Global_20328 /*3*/] 
};
MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}}elseif(Global_20584==true){
Global_20584=false;
Global_20311={
Global_20336[Global_20328 /*3*/] 
};
if(bParam1) MOBILE::SET_MOBILE_PHONE_POSITION(Global_20320);
else MOBILE::SET_MOBILE_PHONE_POSITION(Global_20311);
}
return;
}
BOOL func_90() // Position - 0x4FD1{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_91() // Position - 0x4FDF{
return IS_BIT_SET(Global_1962996, 19);
}


void func_92() // Position - 0x4FEE{
float i;
MISC::SET_GAME_PAUSED(true);
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL);
for (i=0f;
!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) && !PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_CANCEL) || i < 1f;
i=i + MISC::GET_FRAME_TIME()){
HUD::SET_WARNING_MESSAGE_WITH_HEADER("VEUI_HDR_ALERT" /*ALERT*/, "VE_DIR_MODE_SURE" /*Are you sure you want to launch Director Mode?*/, 18, 0, false, -1, 0, 0, true, 0);
SYSTEM::WAIT(0);
}
MISC::SET_GAME_PAUSED(false);
if(PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT)){
CAM::DO_SCREEN_FADE_OUT(0);
Global_112593=1;
}
return;
}


void func_93(int iParam0) // Position - 0x506D{
float i;
char* str;
MISC::SET_GAME_PAUSED(true);
PAD::SET_INPUT_EXCLUSIVE(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT);
for (i=0f;
!PAD::IS_CONTROL_JUST_PRESSED(FRONTEND_CONTROL, INPUT_FRONTEND_ACCEPT) || i < 1f;
i=i + MISC::GET_FRAME_TIME()){
str=func_94(iParam0, 119);
HUD::SET_WARNING_MESSAGE("FBR_GENERIC" /*~a~ is not available whilst ~a~.*/, 16384, 0, false, -1, "FBR_DIR_MODE" /*Director Mode*/, str, true, 0);
SYSTEM::WAIT(0);
}
MISC::SET_GAME_PAUSED(false);
return;
}


char* func_94(int iParam0, int iParam1) // Position - 0x50CF{
iParam1=iParam1;
switch (iParam0){
case 1:
return "FBR_BLK_CLEAN";
case 2:
return "FBR_BLK_RNNNG" /*feature is already running*/;
case 13:
return "FBR_BLK_DEAD" /*dead*/;
case 3:
return "FBR_BLK_MISS" /*playing a mission*/;
case 5:
return "FBR_BLK_SHOP" /*browsing a shop*/;
case 4:
return "FBR_BLK_CUTS" /*watching a cutscene*/;
case 6:
return "FBR_BLK_WANT" /*wanted*/;
case 7:
return "FBR_BLK_ONLI" /*playing GTA Online*/;
case 8:
return "FBR_BLK_ACT" /*performing this action*/;
case 9:
return "FBR_BLK_LOC" /*in this location*/;
case 10:
return "FBR_BLK_VEH" /*in a vehicle*/;
case 11:
return "FBR_BLK_PARA" /*skydiving*/;
case 12:
return "FBR_BLK_FALL" /*falling*/;
default:
return "ERROR";
}
return "ERROR";
}

int func_95(int iParam0, BOOL bParam1, int iParam2) // Position - 0x51C0{
int num;
iParam2=iParam2;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) return 13;
if(bParam1)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1) return 2;
if(func_126() && !func_34(14)) return 3;
if(func_125()) return 3;
if(func_124()) return 8;
if(bParam1)if(func_123()) return 8;
if(Global_97601) return 3;
if(Global_32421) return 8;
if(Global_32312) return 8;
if(Global_2883694)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1516147206) > 0) return 3;
elseif(Global_2883693)if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2006115718) > 0) return 3;
elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("mission_stat_watcher")) > 0) return 3;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("finale_choice")) > 0) return 3;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("creator")) > 0) return 3;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("respawn_controller")) > 0) return 13;
if(_IS_MISSION_REPEAT_ACTIVE(bParam1)) return 3;
if(PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) return 12;
if(func_121(Global_112673, 256)) return 3;
if(func_120() || func_119() || func_114() || func_113()) return 5;
if(func_113()) return 5;
if(func_112()) return 5;
if(func_111()) return 5;
if(func_119()) return 5;
if(func_110() && !Global_112598) return 8;
if(func_114()) return 5;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || func_109()) return 4;
if(func_74()) return 4;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
num=func_99(60);
if(num !=0) return num;
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID()) || PED::GET_PED_PARACHUTE_STATE(PLAYER::PLAYER_PED_ID()) !=-1) return 11;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || Global_112695) return 10;
}}
if(Global_32419) return 8;
if(Global_78556) return 4;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) return 6;
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) return 8;
if(TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) return 8;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return 7;
if(func_98()) return 8;
if(Global_32166) return 3;
if(CAM::IS_GAMEPLAY_HINT_ACTIVE()) return 4;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 439.4357f, -997.4747f, 28.9584f, 428.3288f, -997.0398f, 24.8372f, 8f, false, true, 0)) return 9;
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) return 9;
if(bParam1)if(!func_96(false)) return 8;
if(PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID())) return 9;
return 0;
}
BOOL func_96(BOOL bParam0) // Position - 0x54FC{
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return false;
if(!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_BEING_JACKED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true)) return false;
if(func_74() || Global_23131.f_4 || func_97() || MISC::IS_MEMORY_CARD_IN_USE() || MISC::IS_AUTO_SAVE_IN_PROGRESS() || func_109() || func_125()) return false;
if(!bParam0)if(MISC::GET_MISSION_FLAG()) return false;
return true;
}
BOOL func_97() // Position - 0x560C{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_98() // Position - 0x5628{
return Global_60543;
}

int func_99(int iParam0) // Position - 0x5633{
Vector3 vector;
Interior interiorFromEntity;
int i;
if(ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 207.43358f, -1019.7954f, -100.47276f, 189.93378f, -1019.6235f, -95.56883f, 17.1875f, false, true, 0) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) return 5;
vector={
_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()) 
};
if(Global_112735[10 /*10*/].f_1)if(SYSTEM::VDIST2(vector, 241.9889f, 360.4732f, 105.6166f) < 2f) return 3;
if(func_107(2) && !func_107(17))if(SYSTEM::VDIST2(vector, -59.966286f, -1099.0055f, 25.520878f) < 8f)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -61.266285f, -1096.5055f, 25.520878f, -58.433327f, -1101.1473f, 29.24937f, 1.25f, false, true)) return 9;
if(SYSTEM::VDIST2(vector, -740.9346f, 5599.4263f, 40.71515f) < 11f)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -746.1299f, 5599.2256f, 40.475605f, -737.63196f, 5599.364f, 44.169304f, 3.375f, false, true)) return 9;
if(SYSTEM::VDIST2(vector, -740.9346f, 5590.4263f, 40.71515f) < 11f)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, -746.1299f, 5590.6675f, 40.4392f, -737.6585f, 5590.592f, 44.52327f, 3.375f, false, true)) return 9;
if(SYSTEM::VDIST2(vector, 446.32654f, 5566.35f, 780.21515f) < 11f)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 451.16608f, 5566.451f, 780.1703f, 442.52106f, 5566.374f, 783.98193f, 3.375f, false, true)) return 9;
if(SYSTEM::VDIST2(vector, 446.32654f, 5577.35f, 780.21515f) < 11f)if(OBJECT::IS_POINT_IN_ANGLED_AREA(vector, 451.16608f, 5577.8667f, 780.1899f, 442.5765f, 5577.579f, 783.9086f, 3.375f, false, true)) return 9;
if(SYSTEM::VDIST2(vector, 128.83f, -1297.98f, 29.3f) < 2f || SYSTEM::VDIST2(vector, 95.07f, -1284.98f, 29.3f) < 2f) return 9;
if(SYSTEM::VDIST2(vector, 1081.9506f, -1976.7618f, 30.47218f) < 6f && func_106(26)) return 9;
if(!bLocal_27) func_100(iParam0);
interiorFromEntity=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
if(interiorFromEntity==0) return 0;
elseif(interiorFromEntity==Global_112611 || interiorFromEntity==Global_112612 || interiorFromEntity==Global_112613) return 9;
elseif(interiorFromEntity==Global_112602) return 9;
elseif(interiorFromEntity==Global_112603) return 9;
elseif(interiorFromEntity==Global_112606) return 9;
elseif(interiorFromEntity==Global_112605) return 9;
elseif(interiorFromEntity==Global_112607) return 9;
elseif(interiorFromEntity==Global_112608) return 9;
elseif(interiorFromEntity==Global_112609) return 9;
elseif(interiorFromEntity==Global_112610) return 9;
elseif(interiorFromEntity==Global_112614) return 9;
elseif(interiorFromEntity==Global_112615) return 9;
elseif(interiorFromEntity==Global_112616) return 9;
elseif(interiorFromEntity==Global_112617) return 9;
elseif(interiorFromEntity==Global_112618) return 9;
elseif(interiorFromEntity==Global_112619 || interiorFromEntity==Global_112620 && func_107(67)) return 9;
for (i=0;
i <=19 - 1;
i=i + 1){
if(interiorFromEntity==Global_112621[i]) return 9;
}
return 0;
}


void func_100(int iParam0) // Position - 0x5A5B{
int i;
iParam0=iParam0;
func_103(24, &Global_112602);
func_103(47, &Global_112603);
func_103(10, &Global_112611);
func_103(9, &Global_112612);
func_103(8, &Global_112613);
func_103(21, &Global_112614);
func_103(11, &Global_112615);
func_103(18, &Global_112619);
func_103(19, &Global_112620);
Global_112606=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-76.6618f, 6222.1914f, 32.2412f, "V_factory1");
Global_112605=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-98.2637f, 6210.0225f, 31.924f, "V_factory2");
Global_112607=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-115.8956f, 6179.7485f, 32.4102f, "V_factory3");
Global_112608=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-149.8199f, 6144.9775f, 31.3353f, "V_factory4");
Global_112609=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(16.3605f, -1100.2587f, 28.797f, "v_gun");
Global_112610=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(125.1948f, -1284.1304f, 28.2847f, "v_strip3");
Global_112616=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-545.5717f, 1987.1454f, 126.0262f, "cs6_08_mine_int");
Global_112617=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(2330.5984f, 2571.9353f, 45.6802f, "ch3_01_trlr_int");
Global_112618=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(-54.7f, -1092.7f, 26.4f, "v_carshowroom");
for (i=0;
i <=19 - 1;
i=i + 1){
Global_112621[i]=INTERIOR::GET_INTERIOR_AT_COORDS(func_101(i));
}
bLocal_27=true;
return;
}


Vector3 func__101(int iParam0) // Position - 0x5BE7{
if(!func_102(iParam0)) return 0f, 0f, 0f;
switch (iParam0){
case 0:
return -711.8212f, -915.9057f, 18.2377f;
case 1:
return -52.7185f, -1756.1747f, 28.4432f;
case 2:
return 1159.4408f, -325.6666f, 68.2272f;
case 3:
return 1699.4293f, 4928.6416f, 41.0858f;
case 4:
return -1822.9261f, 788.9531f, 137.212f;
case 5:
return 1166.4265f, 2703.5283f, 37.1574f;
case 6:
return -2973.4138f, 390.6885f, 14.0433f;
case 7:
return -1225.8604f, -903.5782f, 11.3263f;
case 8:
return 1140.659f, -981.0806f, 45.4158f;
case 9:
return -1490.2753f, -382.8514f, 39.1634f;
case 10:
return -3240.7188f, 1004.5081f, 11.8468f;
case 11:
return -3039.2488f, 589.3831f, 6.9251f;
case 12:
return 544.4275f, 2672.061f, 41.1726f;
case 13:
return 2558.7542f, 385.599f, 107.6391f;
case 14:
return 2681.5112f, 3282.7627f, 54.2573f;
case 15:
return 1731.1532f, 6411.6333f, 34.0373f;
case 16:
return 1964.9305f, 3741.207f, 31.3599f;
case 17:
return 29.0707f, -1348.7728f, 28.5101f;
case 18:
return 376.8503f, 323.9777f, 102.5825f;
default:
}
return 0f, 0f, 0f;
}
BOOL func_102(int iParam0) // Position - 0x5DD1{
if(iParam0 >=19) return false;
elseif(iParam0 <=-1) return false;
return true;
}


var func__103(int iParam0, var uParam1) // Position - 0x5DF2{
Vector3 vector;
vector={
func_104(iParam0) 
};
*uParam1=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, vector.f_3);
return vector.f_4;
}


struct<5> func_104(int iParam0) // Position - 0x5E17{
var unk;
var unk6;
switch (iParam0){
case 0:
unk={
-447.4833f, 280.3197f, 77.5215f 
};
unk.f_3="v_comedy";
unk.f_4=unk.f_3;
break;
case 1:
unk={
-1906.7858f, -573.7576f, 19.0773f 
};
unk.f_3="v_psycheoffice";
unk.f_4=unk.f_3;
break;
case 2:
unk={
1399.973f, 1148.7559f, 113.3336f 
};
unk.f_3="v_ranch";
unk.f_4=unk.f_3;
break;
case 3:
unk={
-598.6379f, -1608.3986f, 26.0108f 
};
unk.f_3="v_recycle";
unk.f_4=unk.f_3;
break;
case 4:
unk={
-556.5089f, 286.3181f, 81.1763f 
};
unk.f_3="v_rockclub";
unk.f_4=unk.f_3;
break;
case 5:
unk={
-111.7116f, -11.912f, 69.5196f 
};
unk.f_3="v_janitor";
unk.f_4=unk.f_3;
break;
case 6:
unk={
1274.9338f, -1714.7256f, 53.7715f 
};
unk.f_3="v_lesters";
unk.f_4=unk.f_3;
break;
case 7:
unk={
147.433f, -2201.3704f, 3.688f 
};
unk.f_3="v_torture";
unk.f_4=unk.f_3;
break;
case 8:
unk={
320.9934f, 265.2515f, 82.1221f 
};
unk.f_3="v_cinema";
unk.f_4="v_cinema (Vinewood)";
break;
case 9:
unk={
-1425.5645f, -244.3f, 15.8053f 
};
unk.f_3="v_cinema";
unk.f_4="v_cinema (Morningwood)";
break;
case 10:
unk={
377.153f, -717.567f, 10.0536f 
};
unk.f_3="v_cinema";
unk.f_4="v_cinema (Downtown)";
break;
case 11:
unk={
245.1564f, 370.211f, 104.7382f 
};
unk.f_3="v_epsilonism";
unk.f_4=unk.f_3;
break;
case 12:
unk={
173.1176f, -1003.2789f, -99.9999f 
};
unk.f_3="v_garages";
unk.f_4=unk.f_3;
break;
case 13:
unk={
199.9715f, -999.6678f, -100f 
};
unk.f_3="v_garagem";
unk.f_4=unk.f_3;
break;
case 14:
unk={
228.6058f, -992.0537f, -99.9999f 
};
unk.f_3="v_garagel";
unk.f_3="hei_dlc_garage_high_new";
unk.f_4=unk.f_3;
break;
case 15:
unk={
1854.2538f, 3686.7385f, 33.2671f 
};
unk.f_3="v_sheriff";
unk.f_4=unk.f_3;
break;
case 16:
unk={
-444.8907f, 6013.587f, 30.7164f 
};
unk.f_3="v_sheriff2";
unk.f_4=unk.f_3;
break;
case 17:
unk={
3522.8452f, 3707.9653f, 19.9918f 
};
unk.f_3="v_lab";
unk.f_4=unk.f_3;
break;
case 18:
unk={
717.2994f, -974.4271f, 23.9142f 
};
unk.f_3="v_sweat";
unk.f_4=unk.f_3;
break;
case 19:
unk={
717.299f, -974.4271f, 23.9142f 
};
unk.f_3="v_sweatempty";
unk.f_4=unk.f_3;
break;
case 20:
unk={
2449.7852f, 4983.8247f, 45.8106f 
};
unk.f_3="v_farmhouse";
unk.f_4=unk.f_3;
break;
case 22:
unk={
1087.1952f, -1988.445f, 28.649f 
};
unk.f_3="v_foundry";
unk.f_4=unk.f_3;
break;
case 23:
unk={
982.233f, -2160.3816f, 28.4761f 
};
unk.f_3="v_abattoir";
unk.f_4=unk.f_3;
break;
case 21:
unk={
479.0568f, -1316.8253f, 28.2038f 
};
unk.f_3="v_chopshop";
unk.f_4=unk.f_3;
break;
case 24:
unk={
-1005.6632f, -478.3461f, 49.0265f 
};
unk.f_3="v_58_sol_office";
unk.f_4=unk.f_3;
break;
case 25:
unk6={
func_105(1, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (1)";
break;
case 26:
unk6={
func_105(2, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (2)";
break;
case 27:
unk6={
func_105(3, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (3)";
break;
case 28:
unk6={
func_105(4, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (4)";
break;
case 29:
unk6={
func_105(5, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (5)";
break;
case 30:
unk6={
func_105(6, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (6)";
break;
case 31:
unk6={
func_105(7, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (7)";
break;
case 32:
unk={
Global_1312228[34 /*1951*/].f_146.f_1517 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (8)";
break;
case 33:
unk6={
func_105(35, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (9)";
break;
case 34:
unk6={
func_105(36, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (10)";
break;
case 35:
unk6={
func_105(37, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (11)";
break;
case 36:
unk6={
func_105(38, false) 
};
unk={
-20.1f, -580.8f, 91.3f 
};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (12)";
break;
case 37:
unk6={
func_105(39, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (13)";
break;
case 38:
unk6={
func_105(40, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (14)";
break;
case 39:
unk6={
func_105(41, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (15)";
break;
case 40:
unk6={
func_105(42, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (16)";
break;
case 41:
unk6={
func_105(43, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (17)";
break;
case 42:
unk={
-470.3754f, -698.5207f, 51.5276f 
};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (18)";
break;
case 43:
unk={
-460.6133f, -691.5562f, 69.9067f 
};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (19)";
break;
case 44:
unk={
300.633f, -997.4288f, -99.9727f 
};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4="hei_dlc_apart_high_new (20)";
break;
case 49:
unk={
-171.3969f, 494.2671f, 134.4935f 
};
unk.f_3="apa_v_mp_stilts_b";
unk.f_4="apa_v_mp_stilts_b (1)";
break;
case 50:
unk={
339.4982f, 434.0887f, 146.2206f 
};
unk.f_3="apa_v_mp_stilts_b";
unk.f_4="apa_v_mp_stilts_b (2)";
break;
case 51:
unk={
-761.3884f, 615.7333f, 140.9805f 
};
unk.f_3="apa_v_mp_stilts_b";
unk.f_4="apa_v_mp_stilts_b (3)";
break;
case 52:
unk={
-678.1752f, 591.0076f, 142.2196f 
};
unk.f_3="apa_v_mp_stilts_b";
unk.f_4="apa_v_mp_stilts_b (4)";
break;
case 53:
unk={
120.0541f, 553.793f, 181.0943f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (5)";
break;
case 54:
unk={
-571.4039f, 655.2008f, 142.6293f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (7)";
break;
case 55:
unk={
-742.2565f, 587.6547f, 143.0577f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (8)";
break;
case 56:
unk={
-857.2222f, 685.051f, 149.6502f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (10)";
break;
case 57:
unk={
-1287.6498f, 443.2707f, 94.6919f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (12)";
break;
case 58:
unk={
374.2012f, 416.9688f, 142.5991f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4="apa_v_mp_stilts_a (13)";
break;
case 45:
unk={
-16.295849f, -684.0385f, 33.508316f 
};
unk.f_3="dt1_03_carpark";
unk.f_4="dt1_03_carpark";
break;
case 46:
unk={
341.1f, -1000f, -99.2f 
};
unk.f_3="v_apart_midspaz";
unk.f_4="v_apart_midspaz";
break;
case 47:
unk={
199.97156f, -1018.95416f, -100f 
};
unk.f_3="v_garagem_sp";
unk.f_4=unk.f_3;
break;
case 48:
unk={
-1388.0013f, -618.4197f, 30.8196f 
};
unk.f_3="v_bahama";
unk.f_4=unk.f_3;
break;
}
switch (iParam0){
case 59:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_01";
unk.f_4=unk.f_3;
break;
case 60:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_02";
unk.f_4=unk.f_3;
break;
case 61:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_03";
unk.f_4=unk.f_3;
break;
case 62:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_04";
unk.f_4=unk.f_3;
break;
case 63:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_05";
unk.f_4=unk.f_3;
break;
case 64:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_06";
unk.f_4=unk.f_3;
break;
case 65:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_07";
unk.f_4=unk.f_3;
break;
case 66:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3="apa_v_mp_h_08";
unk.f_4=unk.f_3;
break;
case 67:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_01";
unk.f_4=unk.f_3;
break;
case 68:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_02";
unk.f_4=unk.f_3;
break;
case 69:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_03";
unk.f_4=unk.f_3;
break;
case 70:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_04";
unk.f_4=unk.f_3;
break;
case 71:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_05";
unk.f_4=unk.f_3;
break;
case 72:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_06";
unk.f_4=unk.f_3;
break;
case 73:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_07";
unk.f_4=unk.f_3;
break;
case 74:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3="apa_v_mp_h_08";
unk.f_4=unk.f_3;
break;
case 75:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_01";
unk.f_4=unk.f_3;
break;
case 76:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_02";
unk.f_4=unk.f_3;
break;
case 77:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_03";
unk.f_4=unk.f_3;
break;
case 78:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_04";
unk.f_4=unk.f_3;
break;
case 79:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_05";
unk.f_4=unk.f_3;
break;
case 80:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_06";
unk.f_4=unk.f_3;
break;
case 81:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_07";
unk.f_4=unk.f_3;
break;
case 82:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3="apa_v_mp_h_08";
unk.f_4=unk.f_3;
break;
case 83:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01a_dlc";
unk.f_4=unk.f_3;
break;
case 84:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01b_dlc";
unk.f_4=unk.f_3;
break;
case 85:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01c_dlc";
unk.f_4=unk.f_3;
break;
case 86:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02a_dlc";
unk.f_4=unk.f_3;
break;
case 87:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02b_dlc";
unk.f_4=unk.f_3;
break;
case 88:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02c_dlc";
unk.f_4=unk.f_3;
break;
case 89:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03a_dlc";
unk.f_4=unk.f_3;
break;
case 90:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03b_dlc";
unk.f_4=unk.f_3;
break;
case 91:
unk6={
func_105(87, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03c_dlc";
unk.f_4=unk.f_3;
break;
case 92:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01a_dlc";
unk.f_4=unk.f_3;
break;
case 93:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01b_dlc";
unk.f_4=unk.f_3;
break;
case 94:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01c_dlc";
unk.f_4=unk.f_3;
break;
case 95:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02a_dlc";
unk.f_4=unk.f_3;
break;
case 96:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02b_dlc";
unk.f_4=unk.f_3;
break;
case 97:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02c_dlc";
unk.f_4=unk.f_3;
break;
case 98:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03a_dlc";
unk.f_4=unk.f_3;
break;
case 99:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03b_dlc";
unk.f_4=unk.f_3;
break;
case 100:
unk6={
func_105(88, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03c_dlc";
unk.f_4=unk.f_3;
break;
case 101:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01a_dlc";
unk.f_4=unk.f_3;
break;
case 102:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01b_dlc";
unk.f_4=unk.f_3;
break;
case 103:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01c_dlc";
unk.f_4=unk.f_3;
break;
case 104:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02a_dlc";
unk.f_4=unk.f_3;
break;
case 105:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02b_dlc";
unk.f_4=unk.f_3;
break;
case 106:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02c_dlc";
unk.f_4=unk.f_3;
break;
case 107:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03a_dlc";
unk.f_4=unk.f_3;
break;
case 108:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03b_dlc";
unk.f_4=unk.f_3;
break;
case 109:
unk6={
func_105(89, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03c_dlc";
unk.f_4=unk.f_3;
break;
case 110:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01a_dlc";
unk.f_4=unk.f_3;
break;
case 111:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01b_dlc";
unk.f_4=unk.f_3;
break;
case 112:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_01c_dlc";
unk.f_4=unk.f_3;
break;
case 113:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02a_dlc";
unk.f_4=unk.f_3;
break;
case 114:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02b_dlc";
unk.f_4=unk.f_3;
break;
case 115:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_02c_dlc";
unk.f_4=unk.f_3;
break;
case 116:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03a_dlc";
unk.f_4=unk.f_3;
break;
case 117:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03b_dlc";
unk.f_4=unk.f_3;
break;
case 118:
unk6={
func_105(90, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="ex_int_office_03c_dlc";
unk.f_4=unk.f_3;
break;
case 119:
unk6={
func_105(91, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="bkr_biker_dlc_int_01";
unk.f_4=unk.f_3;
break;
case 120:
unk6={
func_105(97, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="bkr_biker_dlc_int_02";
unk.f_4=unk.f_3;
break;
case 121:
unk6={
func_105(103, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 122:
unk6={
func_105(104, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 123:
unk6={
func_105(105, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 124:
unk6={
func_105(106, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 125:
unk6={
func_105(107, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 126:
unk6={
func_105(108, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 127:
unk6={
func_105(109, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 128:
unk6={
func_105(110, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 129:
unk6={
func_105(111, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 130:
unk6={
func_105(112, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 131:
unk6={
func_105(113, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 132:
unk6={
func_105(114, false) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_impexp_int_01";
unk.f_4=unk.f_3;
break;
case 133:
unk6={
func_105(103, true) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_imptexp_mod_int_01";
unk.f_4=unk.f_3;
break;
case 134:
unk6={
func_105(106, true) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_imptexp_mod_int_01";
unk.f_4=unk.f_3;
break;
case 135:
unk6={
func_105(109, true) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_imptexp_mod_int_01";
unk.f_4=unk.f_3;
break;
case 136:
unk6={
func_105(112, true) 
};
unk={
unk6 +{
1f, 0f, 0f 
}};
unk.f_3="imp_imptexp_mod_int_01";
unk.f_4=unk.f_3;
break;
case 137:
unk={
938.3077f, -3196.1116f, -100f 
};
unk.f_3="gr_grdlc_int_02";
unk.f_4=unk.f_3;
break;
case 138:
unk={
512.5f, 4852f, -62.6f 
};
unk.f_3="xm_x17dlc_int_sub";
unk.f_4=unk.f_3;
break;
case 139:
unk={
2047f, 2942f, -61.9f 
};
unk.f_3="xm_x17dlc_int_facility";
unk.f_4=unk.f_3;
break;
case 140:
unk={
-1047.5997f, -232.3503f, 38.0135f 
};
unk.f_3="v_faceoffice";
unk.f_4=unk.f_3;
break;
case 22:
unk={
1100f, -2004f, 37f 
};
unk.f_3="v_foundry";
unk.f_4=unk.f_3;
break;
case 141:
unk={
361f, 6306f, -159f 
};
unk.f_3="xm_x17dlc_int_silo_01";
unk.f_4=unk.f_3;
break;
case 142:
unk={
305f, 6298f, -160f 
};
unk.f_3="xm_x17dlc_int_silo_02";
unk.f_4=unk.f_3;
break;
case 143:
unk={
244f, 6163f, -159f 
};
unk.f_3="xm_x17dlc_int_lab";
unk.f_4=unk.f_3;
break;
case 144:
unk={
2168f, 2920f, -84f 
};
unk.f_3="xm_x17dlc_int_facility2";
unk.f_4=unk.f_3;
break;
case 145:
unk={
446f, 5922f, -158f 
};
unk.f_3="xm_x17dlc_int_bse_tun";
unk.f_4=unk.f_3;
break;
case 146:
unk={
252f, 5972f, -156f 
};
unk.f_3="xm_x17dlc_int_base_loop";
unk.f_4=unk.f_3;
break;
case 147:
unk={
682f, 5959f, -152f 
};
unk.f_3="xm_x17dlc_int_base_ent";
unk.f_4=unk.f_3;
break;
case 148:
unk={
551f, 5939f, -158f 
};
unk.f_3="xm_x17dlc_int_base";
unk.f_4=unk.f_3;
break;
case 149:
unk={
520.0001f, 4750f, -70f 
};
unk.f_3="xm_x17dlc_int_01";
unk.f_4=unk.f_3;
break;
case 150:
unk={
-1266.8022f, -3014.849f, -49.4903f 
};
unk.f_3="sm_smugdlc_int_01";
unk.f_4=unk.f_3;
break;
case 151:
unk={
974.9203f, -3000.0647f, -40.647f 
};
unk.f_3="imp_impexp_intwaremed";
unk.f_4=unk.f_3;
break;
case 152:
unk={
969.5376f, -3000.4111f, -48.647f 
};
unk.f_3="imp_impexp_int_02";
unk.f_4=unk.f_3;
break;
case 153:
unk={
1094.9966f, -3100.0117f, -39.9999f 
};
unk.f_3="ex_int_warehouse_s_dlc";
unk.f_4=unk.f_3;
break;
case 154:
unk={
1059.9949f, -3100f, -39.9999f 
};
unk.f_3="ex_int_warehouse_m_dlc";
unk.f_4=unk.f_3;
break;
case 155:
unk={
1010.0083f, -3100f, -39.9999f 
};
unk.f_3="ex_int_warehouse_l_dlc";
unk.f_4=unk.f_3;
break;
case 156:
unk={
372.6707f, 405.5235f, 144.5326f 
};
unk.f_3="apa_v_mp_stilts_a";
unk.f_4=unk.f_3;
break;
case 157:
unk={
-282.0588f, -955.17f, 85.3036f 
};
unk.f_3="hei_dlc_apart_high_new";
unk.f_4=unk.f_3;
break;
case 158:
unk={
342.7946f, -997.4225f, -99.7444f 
};
unk.f_3="v_apart_midspaz";
unk.f_4=unk.f_3;
break;
case 159:
unk={
260.3268f, -997.4298f, -100.0086f 
};
unk.f_3="v_studio_lo";
unk.f_4=unk.f_3;
break;
case 160:
unk={
108.2369f, -753.5364f, 233.1523f 
};
unk.f_3="v_fib01";
unk.f_4=unk.f_3;
break;
case 161:
unk={
135.3226f, -746.3677f, 253.1523f 
};
unk.f_3="v_fib03";
unk.f_4=unk.f_3;
break;
case 162:
unk={
108.2572f, -753.5342f, 44.7548f 
};
unk.f_3="v_office_lobby";
unk.f_4=unk.f_3;
break;
case 163:
unk={
228.6161f, -992.053f, -99.9999f 
};
unk.f_3="heist_dlc_garage_high_new";
unk.f_4=unk.f_3;
break;
case 164:
unk={
575f, 4750f, -60f 
};
unk.f_3="xm_v_apart_midspaz";
unk.f_4=unk.f_3;
break;
case 165:
unk={
600f, 4750f, -60f 
};
unk.f_3="xm_v_studio_lo";
unk.f_4=unk.f_3;
break;
case 166:
unk={
630f, 4750f, -60f 
};
unk.f_3="xm_v_garagem";
unk.f_4=unk.f_3;
break;
case 167:
unk={
1257f, 4796.7f, -39.1f 
};
unk.f_3="xm_x17dlc_int_tun_entry";
unk.f_4=unk.f_3;
break;
case 168:
unk={
694.4f, 5898.9f, -152.3f 
};
unk.f_3="xm_x17dlc_int_tun_straight";
unk.f_4=unk.f_3;
break;
case 169:
unk={
1121.8f, 5516.3f, -101.3f 
};
unk.f_3="xm_x17dlc_int_tun_straight";
unk.f_4=unk.f_3;
break;
case 170:
unk={
1279.6f, 5233.2f, -80.3f 
};
unk.f_3="xm_x17dlc_int_tun_straight";
unk.f_4=unk.f_3;
break;
case 171:
unk={
1158.6f, 5467.1f, -101.3f 
};
unk.f_3="xm_x17dlc_int_tun_slope_flat";
unk.f_4=unk.f_3;
break;
case 172:
unk={
705.9f, 5838.5f, -152.3f 
};
unk.f_3="xm_x17dlc_int_tun_slope_flat";
unk.f_4=unk.f_3;
break;
case 173:
unk={
1316.5f, 5184f, -80.3f 
};
unk.f_3="xm_x17dlc_int_tun_slope_flat";
unk.f_4=unk.f_3;
break;
case 174:
unk={
1248f, 5276.1f, -80.3f 
};
unk.f_3="xm_x17dlc_int_tun_flat_slope";
unk.f_4=unk.f_3;
break;
case 175:
unk={
1090.2f, 5559.2f, -101.3f 
};
unk.f_3="xm_x17dlc_int_tun_flat_slope";
unk.f_4=unk.f_3;
break;
case 176:
unk={
1261f, 4808.6f, -39.3f 
};
unk.f_3="xm_x17dlc_int_tun_flat_slope";
unk.f_4=unk.f_3;
break;
case 177:
unk={
721.8f, 5781.4f, -146.7f 
};
unk.f_3="xm_x17dlc_int_tun_30d_r";
unk.f_4=unk.f_3;
break;
case 178:
unk={
780.8f, 5703.4f, -136.7f 
};
unk.f_3="xm_x17dlc_int_tun_30d_r";
unk.f_4=unk.f_3;
break;
case 179:
unk={
868.1f, 5659.2f, -126.7f 
};
unk.f_3="xm_x17dlc_int_tun_30d_r";
unk.f_4=unk.f_3;
break;
case 180:
unk={
1218.2f, 5321.2f, -85.7f 
};
unk.f_3="xm_x17dlc_int_tun_30d_r";
unk.f_4=unk.f_3;
break;
case 181:
unk={
1278.5f, 4859.7f, -44.7f 
};
unk.f_3="xm_x17dlc_int_tun_30d_r";
unk.f_4=unk.f_3;
break;
case 182:
unk={
1187.2f, 5419.8f, -96.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 183:
unk={
1344.7f, 5136.4f, -75.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 184:
unk={
1363.4f, 5039.5f, -65.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 185:
unk={
1049.3f, 5602.1f, -107.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 186:
unk={
1337.8f, 4944.3f, -55.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 187:
unk={
961.5f, 5646.9f, -117.4f 
};
unk.f_3="xm_x17dlc_int_tun_30d_l";
unk.f_4=unk.f_3;
break;
case 188:
unk={
345.0041f, 4842.001f, -59.9997f 
};
unk.f_3="xm_x17dlc_int_02";
unk.f_4=unk.f_3;
break;
case 189:
unk={
279.9322f, -1337.4902f, 23.7419f 
};
unk.f_3="v_coroner";
unk.f_4=unk.f_3;
break;
case 190:
unk={
-1604.6643f, -3012.5828f, -79.9999f 
};
unk.f_3="ba_dlc_int_01_ba";
unk.f_4=unk.f_3;
break;
case 191:
case 212:
unk={
-1505.783f, -3012.5867f, -79.9999f 
};
unk.f_3="ba_dlc_int_02_ba";
unk.f_4=unk.f_3;
break;
case 192:
unk={
-630.4205f, -236.7843f, 37.057f 
};
unk.f_3="V_JEWEL2";
unk.f_4=unk.f_3;
break;
case 193:
unk={
2800f, -3800f, 100f 
};
unk.f_3="xs_x18_int_01";
unk.f_4=unk.f_3;
break;
case 194:
unk={
2800f, -3942f, 182.5f 
};
unk.f_3="xs_arena_vip";
unk.f_4=unk.f_3;
break;
case 195:
unk={
1049.6f, -3196.6f, -38.5f 
};
unk.f_3="bkr_biker_dlc_int_ware02";
unk.f_4=unk.f_3;
break;
case 223:
unk={
2920f, 4470f, -100f 
};
unk.f_3="sf_dlc_warehouse_sec";
unk.f_4=unk.f_3;
break;
case 196:
unk={
1093.6f, -3196.6f, -38.5f 
};
unk.f_3="bkr_biker_dlc_int_ware03";
unk.f_4=unk.f_3;
break;
case 197:
unk={
1009.5f, -3196.6f, -38.5f 
};
unk.f_3="bkr_biker_dlc_int_ware01";
unk.f_4=unk.f_3;
break;
case 198:
unk={
1100f, 245f, -49f 
};
unk.f_3="vw_dlc_casino_main";
unk.f_4=unk.f_3;
break;
case 199:
unk={
1380f, 200f, -50f 
};
unk.f_3="vw_dlc_casino_carpark";
unk.f_4=unk.f_3;
break;
case 200:
unk={
976.6364f, 70.29476f, 115.16413f 
};
unk.f_3="vw_dlc_casino_apart";
unk.f_4=unk.f_3;
break;
case 201:
unk={
1295f, 230f, -50f 
};
unk.f_3="vw_dlc_casino_garage";
unk.f_4=unk.f_3;
break;
case 202:
unk={
2479.3f, -273.9f, -58f 
};
unk.f_3="ch_DLC_Casino_Heist";
unk.f_4=unk.f_3;
break;
case 203:
unk={
2730f, -380f, -49f 
};
unk.f_3="ch_DLC_Arcade";
unk.f_4=unk.f_3;
break;
case 204:
unk={
2800f, -380f, -48.5f 
};
unk.f_3="ch_DLC_Plan";
unk.f_4=unk.f_3;
break;
case 205:
unk={
2497.7f, -312.8f, -69.9f 
};
unk.f_3="ch_DLC_Tunnel";
unk.f_4=unk.f_3;
break;
case 206:
unk={
2523.4f, -270f, -58.7f 
};
unk.f_3="ch_DLC_Casino_Back";
unk.f_4=unk.f_3;
break;
case 207:
unk={
2504.4f, -257.2f, -39.1f 
};
unk.f_3="ch_DLC_Casino_Hotel";
unk.f_4=unk.f_3;
break;
case 208:
unk={
2554f, -281.4f, -64.7f 
};
unk.f_3="ch_DLC_Casino_Loading";
unk.f_4=unk.f_3;
break;
case 209:
unk={
2488.3f, -267.4f, -70.6f 
};
unk.f_3="ch_DLC_Casino_Vault";
unk.f_4=unk.f_3;
break;
case 210:
unk={
2519.9f, -255.3f, -24.1f 
};
unk.f_3="ch_DLC_Casino_Utility";
unk.f_4=unk.f_3;
break;
case 211:
unk={
2572.9f, -253.4f, -64.7f 
};
unk.f_3="ch_dlc_casino_shaft";
unk.f_4=unk.f_3;
break;
case 213:
unk={
1103.5624f, -3000f, -40f 
};
unk.f_3="gr_grdlc_int_01";
unk.f_4=unk.f_3;
break;
case 214:
unk={
1210f, 1857f, -50f 
};
unk.f_3="tr_Tuner_MethLab_1";
unk.f_4=unk.f_3;
break;
case 215:
unk={
1569f, -2130f, -50f 
};
unk.f_3="tr_Tuner_MethLab_1";
unk.f_4=unk.f_3;
break;
case 216:
unk={
839f, 2176f, -50f 
};
unk.f_3="tr_Tuner_MethLab_1";
unk.f_4=unk.f_3;
break;
case 217:
unk={
982f, -143f, -50f 
};
unk.f_3="tr_Tuner_MethLab_1";
unk.f_4=unk.f_3;
break;
case 218:
unk={
-2000f, 1113.4f, 25.7f 
};
unk.f_3="tr_tuner_car_meet";
unk.f_4=unk.f_3;
break;
case 219:
unk={
-1350f, 160f, -99.2f 
};
unk.f_3="tr_tuner_mod_garage";
unk.f_4=unk.f_3;
break;
case 220:
unk={
1.1f, -705.6f, 16.1f 
};
unk.f_3="finbank";
unk.f_4=unk.f_3;
break;
case 221:
unk={
-1010f, -70f, -99.4f 
};
unk.f_3="sf_dlc_studio_sec";
unk.f_4=unk.f_3;
break;
case 222:
unk={
1550f, 250f, -50f 
};
unk.f_3="h4_dlc_int_02_h4";
unk.f_4=unk.f_3;
break;
case 224:
unk={
-935.7f, -2992.2f, 13.9f 
};
unk.f_3="v_hanger";
unk.f_4=unk.f_3;
break;
case 225:
unk={
730f, -2990f, -39f 
};
unk.f_3="imp_imptexp_mod_int_01";
unk.f_4=unk.f_3;
break;
case 226:
unk={
152.3f, -1004.4f, -97.8f 
};
unk.f_3="v_motel_mp";
unk.f_4=unk.f_3;
break;
case 227:
unk={
170f, 5190f, 10f 
};
unk.f_3="xs_x18_int_mod2";
unk.f_4=unk.f_3;
break;
case 228:
unk={
850f, -3000f, -50f 
};
unk.f_3="reh_dlc_int_04_sum2";
unk.f_4=unk.f_3;
break;
case 229:
unk={
495f, -2560f, -50f 
};
unk.f_3="xm3_DLC_INT_04_xm3";
unk.f_4=unk.f_3;
break;
case 230:
unk={
570f, -415.1f, -69.6f 
};
unk.f_3="xm3_DLC_INT_03_xm3";
unk.f_4=unk.f_3;
break;
case 231:
unk={
984.4f, -95.4f, 76.8f 
};
unk.f_3="bkr_biker_dlc_int_03";
unk.f_4=unk.f_3;
break;
default:
break;
}
return unk;
}


struct<6> func_105(int iParam0, BOOL bParam1) // Position - 0x8740{
var unk;
switch (iParam0){
case -1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 1:
unk={
-794.9184f, 339.6266f, 200.4135f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 2:
unk={
-761.0982f, 317.6259f, 169.59628f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 3:
unk={
-761.1888f, 317.6295f, 216.0503f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 4:
unk={
-795.3856f, 340.0188f, 152.7941f 
};
unk.f_3={
0f, 0f, 179.99997f 
};
break;
case 61:
unk={
-778.5056f, 332.3779f, 212.1968f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 5:
unk={
-258.1807f, -950.6853f, 70.0239f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 6:
unk={
-285.0051f, -957.6552f, 85.3035f 
};
unk.f_3={
0f, 0f, -109.99999f 
};
break;
case 7:
unk={
-1471.8821f, -530.7484f, 62.34918f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 34:
unk={
-1471.8821f, -530.7484f, 49.72156f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 62:
unk={
-1463.15f, -540.2369f, 74.2439f 
};
unk.f_3={
0f, 0f, -145f 
};
break;
case 35:
unk={
-885.3702f, -451.4775f, 119.327f 
};
unk.f_3={
0f, 0f, 27.55617f 
};
break;
case 36:
unk={
-913.0385f, -438.4284f, 114.39966f 
};
unk.f_3={
0f, 0f, -153.30931f 
};
break;
case 37:
unk={
-892.5499f, -430.4789f, 88.25368f 
};
unk.f_3={
0f, 0f, 116.9193f 
};
break;
case 38:
unk={
-35.0462f, -576.317f, 82.90739f 
};
unk.f_3={
0f, 0f, 160f 
};
break;
case 39:
unk={
-10.3788f, -590.7431f, 93.02542f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 65:
unk={
-22.2487f, -589.1461f, 80.2305f 
};
unk.f_3={
0f, 0f, 69.88f 
};
break;
case 40:
unk={
-900.6311f, -376.7462f, 78.27306f 
};
unk.f_3={
0f, 0f, 26.92611f 
};
break;
case 41:
unk={
-929.483f, -374.5104f, 102.23286f 
};
unk.f_3={
0f, 0f, -152.55307f 
};
break;
case 63:
unk={
-914.4202f, -375.8189f, 114.4743f 
};
unk.f_3={
0f, 0f, -63f 
};
break;
case 42:
unk={
-617.1647f, 64.6042f, 100.8196f 
};
unk.f_3={
0f, 0f, 180f 
};
break;
case 43:
unk={
-584.2015f, 42.7133f, 86.4187f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 64:
unk={
-609.5665f, 50.2203f, 98.3998f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 73:
unk={
-171.3969f, 494.2671f, 134.4935f 
};
unk.f_3={
0f, 0f, 11f 
};
break;
case 74:
unk={
339.4982f, 434.0887f, 146.2206f 
};
unk.f_3={
0f, 0f, -63.5f 
};
break;
case 75:
unk={
-761.3884f, 615.7333f, 140.9805f 
};
unk.f_3={
0f, 0f, -71.5f 
};
break;
case 76:
unk={
-678.1752f, 591.0076f, 142.2196f 
};
unk.f_3={
0f, 0f, 40.5f 
};
break;
case 77:
unk={
120.0541f, 553.793f, 181.0943f 
};
unk.f_3={
0f, 0f, 6f 
};
break;
case 78:
unk={
-571.4039f, 655.2008f, 142.6293f 
};
unk.f_3={
0f, 0f, -14.5f 
};
break;
case 79:
unk={
-742.2565f, 587.6547f, 143.0577f 
};
unk.f_3={
0f, 0f, -29f 
};
break;
case 80:
unk={
-857.2222f, 685.051f, 149.6502f 
};
unk.f_3={
0f, 0f, 4.5f 
};
break;
case 81:
unk={
-1287.6498f, 443.2707f, 94.6919f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 82:
unk={
374.2012f, 416.9688f, 142.6977f 
};
unk.f_3={
0f, 0f, -14f 
};
break;
case 83:
unk={
-787.7805f, 334.9232f, 186.1134f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 84:
unk={
-787.7805f, 334.9232f, 215.8384f 
};
unk.f_3={
0f, 0f, 90f 
};
break;
case 85:
unk={
-773.2258f, 322.8252f, 194.8862f 
};
unk.f_3={
0f, 0f, -90f 
};
break;
case 86:
unk={
-1573.0981f, -4085.806f, 9.7851f 
};
unk.f_3={
0f, 0f, 162f 
};
break;
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 66:
case 67:
case 68:
case 69:
unk={
342.8157f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 17:
case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 70:
case 71:
case 72:
unk={
260.3297f, -997.4288f, -100f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 87:
unk={
-1572.1869f, -570.8315f, 109.9879f 
};
unk.f_3={
0f, 0f, -54f 
};
break;
case 88:
unk={
-1383.9543f, -476.7112f, 73.507f 
};
unk.f_3={
0f, 0f, 8f 
};
break;
case 89:
unk={
-138.0029f, -629.739f, 170.2854f 
};
unk.f_3={
0f, 0f, -84f 
};
break;
case 90:
unk={
-74.8895f, -817.6883f, 244.8508f 
};
unk.f_3={
0f, 0f, 70f 
};
break;
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
unk={
1100.7644f, -3159.384f, -34.9342f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
unk={
1005.806f, -3157.6702f, -36.0897f 
};
unk.f_3={
0f, 0f, 0f 
};
break;
case 103:
if(!bParam1){
unk={
-1576.5712f, -569.7595f, 85.5f 
};
unk.f_3={
0f, 0f, 36.1f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 104:
if(!bParam1){
unk={
-1571.2538f, -566.5865f, 85.5f 
};
unk.f_3={
0f, 0f, -53.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 105:
if(!bParam1){
unk={
-1568.0984f, -571.9171f, 85.5f 
};
unk.f_3={
0f, 0f, -143.9f 
};
}else{
unk={
-1578.0225f, -576.4251f, 104.2f 
};
unk.f_3={
0f, 0f, -144.04f 
};
}
break;
case 106:
if(!bParam1){
unk={
-1384.5178f, -475.8657f, 56.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 107:
if(!bParam1){
unk={
-1384.5383f, -475.8829f, 48.1f 
};
unk.f_3={
0f, 0f, 98.7f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 108:
if(!bParam1){
unk={
-1378.9939f, -477.2481f, 56.1f 
};
unk.f_3={
0f, 0f, -81.1f 
};
}else{
unk={
-1391.245f, -473.9638f, 77.2f 
};
unk.f_3={
0f, 0f, 98.86f 
};
}
break;
case 109:
if(!bParam1){
unk={
-186.5683f, -576.4624f, 135f 
};
unk.f_3={
0f, 0f, 96.16f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 110:
if(!bParam1){
unk={
-113.886f, -564.3862f, 135f 
};
unk.f_3={
0f, 0f, 110.96f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 111:
if(!bParam1){
unk={
-134.6568f, -635.1774f, 135f 
};
unk.f_3={
0f, 0f, -9.04f 
};
}else{
unk={
-146.6167f, -596.6301f, 166f 
};
unk.f_3={
0f, 0f, -140f 
};
}
break;
case 112:
if(!bParam1){
unk={
-79.0479f, -822.6393f, 221f 
};
unk.f_3={
0f, 0f, 70f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 113:
if(!bParam1){
unk={
-70.3086f, -819.5784f, 221f 
};
unk.f_3={
0f, 0f, 160f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
case 114:
if(!bParam1){
unk={
-79.9861f, -818.425f, 221f 
};
unk.f_3={
0f, 0f, -20f 
};
}else{
unk={
-73.904f, -821.6204f, 284f 
};
unk.f_3={
0f, 0f, -110f 
};
}
break;
}
return unk;
}
BOOL func_106(int iParam0) // Position - 0x92F6{
int i;
if(iParam0==94 || iParam0==-1) return false;
if(Global_94666[iParam0 /*2*/]) return true;
for (i=0;
i < Global_91433;
i=i + 1){
if(Global_91433[i /*5*/] !=-1)if(Global_78828.f_109[Global_91433[i /*5*/] /*4*/]==iParam0) return true;
}
return false;
}
BOOL func_107(int iParam0) // Position - 0x935E{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x938A{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}
BOOL func_109() // Position - 0x939D{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_110() // Position - 0x93B7{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_111() // Position - 0x93CC{
return IS_BIT_SET(Global_78807, 9);
}
BOOL func_112() // Position - 0x93DB{
return IS_BIT_SET(Global_78807, 8);
}
BOOL func_113() // Position - 0x93EA{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@barbers", "player_idle_d", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_intro", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_enterchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_exitchair", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_a", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_b", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_c", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "misshair_shop@hair_dressers", "player_idle_d", 3)) return true;
return false;
}
BOOL func_114() // Position - 0x957F{
int i;
if(func_120()){
for (i=0;
i < 60;
i=i + 1){
if(func_115(i)) return true;
}}
return false;
}
BOOL func_115(int iParam0) // Position - 0x95AF{
return func_116(iParam0, 20, true);
}
BOOL func_116(int iParam0, int iParam1, BOOL bParam2) // Position - 0x95C0{
if(iParam0==-1) return false;
if(bParam2) return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_118()==0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_117(iParam0), -1, 0), iParam1);
else return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
return false;
}
eMPStat func_117(int iParam0) // Position - 0x9621{
switch (iParam0){
case 0:
return MP_STAT_SHOPFM_HAIRDO_01_BH;
case 1:
return MP_STAT_SHOPFM_HAIRDO_02_SC;
case 2:
return MP_STAT_SHOPFM_HAIRDO_03_V;
case 3:
return MP_STAT_SHOPFM_HAIRDO_04_SS;
case 4:
return MP_STAT_SHOPFM_HAIRDO_05_MP;
case 5:
return MP_STAT_SHOPFM_HAIRDO_06_HW;
case 6:
return MP_STAT_SHOPFM_HAIRDO_07_PB;
case 7:
return MP_STAT_SHOPFM_CLOTHES_L_01_SC;
case 8:
return MP_STAT_SHOPFM_CLOTHES_L_02_GS;
case 9:
return MP_STAT_SHOPFM_CLOTHES_L_03_DT;
case 10:
return MP_STAT_SHOPFM_CLOTHES_L_04_CS;
case 11:
return MP_STAT_SHOPFM_CLOTHES_L_05_GSD;
case 12:
return MP_STAT_SHOPFM_CLOTHES_L_06_VC;
case 13:
return MP_STAT_SHOPFM_CLOTHES_L_07_PB;
case 14:
return MP_STAT_SHOPFM_CLOTHES_M_01_SM;
case 15:
return MP_STAT_SHOPFM_CLOTHES_M_03_H;
case 16:
return MP_STAT_SHOPFM_CLOTHES_M_04_HW;
case 17:
return MP_STAT_SHOPFM_CLOTHES_M_05_GOH;
case 18:
return MP_STAT_SHOPFM_CLOTHES_H_01_BH;
case 19:
return MP_STAT_SHOPFM_CLOTHES_H_02_B;
case 20:
return MP_STAT_SHOPFM_CLOTHES_H_03_MW;
case 21:
return MP_STAT_SHOPFM_CLOTHES_A_01_VB;
case 22:
return MP_STAT_SHOPFM_TATTOO_01_HW;
case 23:
return MP_STAT_SHOPFM_TATTOO_02_SS;
case 24:
return MP_STAT_SHOPFM_TATTOO_03_PB;
case 25:
return MP_STAT_SHOPFM_TATTOO_04_VC;
case 26:
return MP_STAT_SHOPFM_TATTOO_05_ELS;
case 27:
return MP_STAT_SHOPFM_TATTOO_06_GOH;
case 28:
return MP_STAT_SHOPFM_GUN_01_DT;
case 29:
return MP_STAT_SHOPFM_GUN_02_SS;
case 30:
return MP_STAT_SHOPFM_GUN_03_HW;
case 31:
return MP_STAT_SHOPFM_GUN_04_ELS;
case 32:
return MP_STAT_SHOPFM_GUN_05_PB;
case 33:
return MP_STAT_SHOPFM_GUN_06_LS;
case 34:
return MP_STAT_SHOPFM_GUN_07_MW;
case 35:
return MP_STAT_SHOPFM_GUN_08_CS;
case 36:
return MP_STAT_SHOPFM_GUN_09_GOH;
case 37:
return MP_STAT_SHOPFM_GUN_10_VWH;
case 38:
return MP_STAT_SHOPFM_GUN_11_ID1;
case 39:
return MP_STAT_SHOPFM_CARMOD_01_AP;
case 40:
return MP_STAT_SHOPFM_CARMOD_05_ID2;
case 41:
return MP_STAT_SHOPFM_CARMOD_06_BT1;
case 42:
return MP_STAT_SHOPFM_CARMOD_07_CS1;
case 43:
return MP_STAT_SHOPFM_CARMOD_08_CS6;
case 44:
return MP_STAT_RAYPISTOL_FM_AMMO_CURRENT;
case 45:
return MP_STAT_SHOPFM_PERS_GAR;
case 46:
return MP_STAT_SHOPFM_PERS_GUN;
case 47:
return MP_STAT_SHOPFM_PERS_GUN_OSPREY;
case 48:
return MP_STAT_SHOPFM_PERS_GUN_HTRUCK;
case 49:
return MP_STAT_SHOPFM_PERS_GUN_ARENA;
case 52:
return MP_STAT_SHOPFM_PERS_GUN_ARCADE;
case 50:
return MP_STAT_SHOPFM_HAIRDO_CASINO_APT;
case 51:
return MP_STAT_SHOPFM_CLOTHES_CASINO;
case 53:
return MP_STAT_SHOPFM_PERS_GUN_SUB;
case 54:
return MP_STAT_SHOPFM_TATTOO_07_CCT;
case 55:
return MP_STAT_SHOPFM_CLOTHES_CAR_MEET;
case 56:
return MP_STAT_SHOPFM_PERS_GUN_FIXER;
case 57:
return MP_STAT_SHOPFM_CLOTHES_STUDIO;
case 58:
return MP_STAT_GBTELTIMESPLAYEDGOONPREV;
case 59:
return MP_STAT_TAMPA3_FMINI_HELDTIME;
default:
break;
}
return 14192;
}

int func_118() // Position - 0x99BA{
return Global_32163;
}
BOOL func_119() // Position - 0x99C5{
return Global_100733.f_388 > 0;
}
BOOL func_120() // Position - 0x99D6{
return Global_100733.f_387 > 0;
}
BOOL func_121(int iParam0, int iParam1) // Position - 0x99E7{
return iParam0 && iParam1 !=false;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x99F6{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}
BOOL func_123() // Position - 0x9A1E{
return Global_100720.f_1;
}
BOOL func_124() // Position - 0x9A2C{
return Global_78826;
}
BOOL func_125() // Position - 0x9A38{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_126() // Position - 0x9A62{
if(Global_43257==15) return false;
return true;
}
BOOL func_127(int iParam0) // Position - 0x9A77{
if(Global_22839 || Global_22838 || Global_22840){
if(iParam0==130){
}else{
return false;
}}
if(Global_117[iParam0 /*10*/].f_8 !=169)if(Global_20383.f_1==10)if(Global_7568==iParam0) return true;
else return false;
else return false;
return false;
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x9ADB{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_129(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}

int func_129(int iParam0) // Position - 0x9B18{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_130();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_130() // Position - 0x9B4C{
return Global_1574918;
}


void func_131() // Position - 0x9B58{
if(Global_78558==false){
Global_8260[14 /*15*/].f_4=-99;
Global_8260[4 /*15*/].f_4=-99;
if(Global_2694519){
if(func_34(14)){
func_132(2, "CELL_2" /*Internet*/, 2, "appInternet", 6, 1, 1, 0, 0);
func_132(14, "CELL_29" /*Job List*/, 7, "appMPJobListNEW", 12, 1, 1, 0, 0);
}else{
func_132(14, "CELL_29" /*Job List*/, 2, "appMPJobListNEW", 12, 1, 1, 0, 0);
}}else{
func_132(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
}}
return;
}


void func_132(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x9BE6{
TEXT_LABEL_ASSIGN_STRING(&Global_8260[iParam0 /*15*/], sParam1, 16);
Global_8260[iParam0 /*15*/].f_4=iParam2;
TEXT_LABEL_ASSIGN_STRING(&(Global_8260[iParam0 /*15*/].f_5), sParam3, 16);
Global_8260[iParam0 /*15*/].f_9=MISC::GET_HASH_KEY(sParam3);
Global_8260[iParam0 /*15*/].f_10=iParam4;
Global_8260[iParam0 /*15*/].f_11=iParam5;
Global_8260[iParam0 /*15*/].f_12=iParam6;
Global_8260[iParam0 /*15*/].f_13=iParam7;
Global_8260[iParam0 /*15*/].f_14=iParam8;
if(Global_8260[iParam0 /*15*/].f_12==0) Global_8260[iParam0 /*15*/].f_12=0;
if(Global_8260[iParam0 /*15*/].f_13==0) Global_8260[iParam0 /*15*/].f_13=0;
if(Global_8260[iParam0 /*15*/].f_14==0) Global_8260[iParam0 /*15*/].f_14=0;
return;
}


void func_133() // Position - 0x9C9C{
int i;
int num;
int num2;
for (i=0;
i < 34;
i=i + 1){
Global_8260[i /*15*/].f_4=-99;
}
if(Global_78558==false){
num=0;
while (num2 < 161){
if(func_135(num2, Global_20383)==1) num=1;
num2=num2 + 1;
}
func_132(7, "CELL_5" /*Email*/, 0, "appEmail", 4, 1, 1, 0, 0);
func_132(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
func_132(4, "CELL_23" /*Check List*/, 2, "appChecklist", 39, 1, 1, 0, 0);
if(Global_43257==15 && _IS_MISSION_REPEAT_ACTIVE(false)==false && Global_8258==0){
func_132(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=0;
Global_8259=255;
}else{
func_132(20, "CELL_32" /*Quick Save*/, 3, "appSettings", 43, 1, 1, 0, 0);
Global_20587=1;
Global_8259=42;
}
if(num==1) func_132(0, "CELL_0" /*Contacts*/, 4, "appContacts", 27, 1, 1, 0, 0);
else func_132(0, "CELL_0" /*Contacts*/, 4, "appContacts", 5, 1, 1, 0, 0);
func_132(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
func_132(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
func_132(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
if(Global_113648.f_14053.f_89==true) func_132(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
if(Global_113648.f_14053.f_88==1) func_132(16, "CELL_25" /*Sniper*/, 0, "appContacts", 40, 2, 1, 0, 0);
func_132(25, "CELL_14" /*More Apps*/, -99, "appContacts", 17, 2, 1, 0, 0);
func_132(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
func_132(11, "CELL_14" /*More Apps*/, -99, "appContacts", 8, 2, 1, 0, 0);
func_132(27, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
func_132(28, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
func_132(29, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
func_132(30, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
func_132(31, "CELL_15" /*Spare*/, -99, "appContacts", 17, 2, 1, 0, 0);
func_132(32, "CELL_15" /*Spare*/, -99, "appSettings", 17, 2, 1, 0, 0);
}else{
func_132(7, "CELL_5" /*Email*/, 0, "appMPEmail", 4, 1, 1, 0, 0);
func_132(10, "CELL_16" /*Settings*/, 5, "appSettings", 24, 1, 1, 0, 0);
func_132(1, "CELL_1" /*Texts*/, 1, "appTextMessage", 2, 1, 1, 0, 0);
func_132(3, "CELL_7" /*Snapmatic*/, 6, "appCamera", 1, 1, 1, 0, 0);
func_132(2, "CELL_2" /*Internet*/, 7, "appInternet", 6, 1, 1, 0, 0);
func_132(14, "CELL_29" /*Job List*/, 4, "appMPJobListNEW", 12, 1, 1, 0, 0);
func_132(0, "CELL_0" /*Contacts*/, 2, "appContacts", 5, 1, 1, 0, 0);
func_132(21, "CELL_37" /*Quick Join*/, 3, "AppJIPMP", 14, 1, 1, 0, 0);
if(IS_BIT_SET(Global_4542297, 4)==true) func_132(17, "CELL_28" /*Trackify*/, 8, "appTrackify", 42, 1, 1, 0, 0);
func_132(13, "CELL_35" /*Player List*/, -99, "appMPCopBackup", 39, 1, 1, 0, 0);
func_132(13, "CELL_20", -99, "appMPCopBackup", 16, 1, 1, 0, 0);
func_132(15, "CELL_18" /*Map*/, -99, "appContacts", 8, 1, 1, 0, 0);
func_132(9, "CELL_13" /*BAWSAQ*/, -99, "appContacts", 13, 2, 1, 0, 0);
func_132(5, "CELL_4" /*Sidetasks*/, -99, "appContacts", 12, 2, 1, 0, 0);
func_132(23, "CELL_15" /*Spare*/, 0, "appContacts", 17, 2, 1, 0, 0);
func_132(24, "CELL_15" /*Spare*/, 1, "appContacts", 17, 2, 1, 0, 0);
func_132(25, "CELL_15" /*Spare*/, 2, "appContacts", 17, 2, 1, 0, 0);
func_132(26, "CELL_15" /*Spare*/, 3, "appContacts", 17, 2, 1, 0, 0);
func_132(27, "CELL_15" /*Spare*/, 4, "appContacts", 17, 2, 1, 0, 0);
func_132(28, "CELL_15" /*Spare*/, 5, "appContacts", 17, 2, 1, 0, 0);
func_132(29, "CELL_15" /*Spare*/, 6, "appContacts", 17, 2, 1, 0, 0);
func_132(30, "CELL_15" /*Spare*/, 7, "appContacts", 17, 2, 1, 0, 0);
func_132(31, "CELL_15" /*Spare*/, 8, "appContacts", 17, 2, 1, 0, 0);
func_132(32, "CELL_15" /*Spare*/, 9, "appContacts", 17, 2, 1, 0, 0);
func_132(33, "CELL_15" /*Spare*/, 10, "appContacts", 17, 2, 1, 0, 0);
if(!IS_BIT_SET(Global_4542297, 4)==true)if(Global_1836102) func_132(23, "CELL_CIRCBREAK" /*VLSI Unlock*/, 8, "AppVLSI", 54, 1, 1, 0, 0);
elseif(IS_BIT_SET(Global_4542297, 20)==true) func_132(23, "CELL_SIGHTS" /*Sightseer*/, 8, "AppSettings", 59, 1, 1, 0, 0);
elseif(IS_BIT_SET(Global_4542297, 22)==true) func_132(23, "CELL_EXTRACT" /*Extraction*/, 8, "AppExtraction", 58, 1, 1, 0, 0);
elseif(IS_BIT_SET(Global_4542297, 26)==true)if(func_134()) func_132(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
else func_132(23, "CELL_SECHACK" /*SecuroServ Hack*/, 8, "AppSecuroHack", 57, 1, 1, 0, 0);
if(IS_BIT_SET(Global_4542297, 4)==false && Global_1836102==false && IS_BIT_SET(Global_4542297, 20)==false && IS_BIT_SET(Global_4542297, 22)==false && IS_BIT_SET(Global_4542297, 26)==false)if(func_134()) func_132(23, "CELL_0" /*Contacts*/, -99, "appContacts", 5, 1, 1, 0, 0);
else func_132(23, "CELL_BOSSAGE" /*SecuroServ*/, 8, "appMPBossAgency", 57, 1, 1, 0, 0);
}
return;
}
BOOL func_134() // Position - 0xA24C{
if(Global_78558)if(Global_1836499 || Global_1836500==1) return true;
return false;
}

int func_135(int iParam0, eCharacter echParam1) // Position - 0xA273{
if(echParam1 < CHAR_MICHAEL || echParam1 > CHAR_ALL_PLAYERS_CONF) return 0;
return Global_2028[iParam0 /*29*/].f_19[echParam1];
}


void func_136() // Position - 0xA29D{
return;
}