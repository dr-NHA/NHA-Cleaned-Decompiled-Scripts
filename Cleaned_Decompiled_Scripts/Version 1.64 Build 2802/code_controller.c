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
var uLocal_27=0;
int iLocal_28=0;
var uLocal_29=0;
var uLocal_30=0;
float fLocal_31=0f;
float fLocal_32=0f;
float fLocal_33=0f;
var uLocal_34=0;
var uLocal_35=0;
var uLocal_36=0;
var uLocal_37=0;
var uLocal_38=0;
int iLocal_39=0;
int iLocal_40=0;
int iLocal_41=0;
int iLocal_42=0;
var uLocal_43=0;
var uLocal_44=0;
var uLocal_45=0;
var uLocal_46=0;
var uLocal_47=0;
var uLocal_48=0;
var uLocal_49=0;
int iLocal_50=0;
int iLocal_51=0;
#endregion

void main() // Position - 0x0{
int i;
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
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
iLocal_50=HUD::GET_STANDARD_BLIP_ENUM_ID();
iLocal_51=HUD::GET_WAYPOINT_BLIP_ENUM_ID();
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50)) SCRIPT::TERMINATE_THIS_THREAD();
while (true){
if(!_CAN_ENTER_FREEROAM_STATE(0))if(Global_43805==-1) SCRIPT::TERMINATE_THIS_THREAD();
for (i=0;
i < 235;
i=i + 1){
if(Global_113648.f_8615[i]){
if(MISC::GET_GAME_TIMER() >=Global_113648.f_8615.f_236[i]){
switch (i){
case 1:
func_589();
break;
case 4:
func_587();
break;
case 5:
func_586();
break;
case 19:
func_585();
break;
case 6:
func_584();
break;
case 7:
func_583();
break;
case 8:
func_582();
break;
case 9:
func_581();
break;
case 11:
func_580();
break;
case 12:
func_579();
break;
case 13:
func_578();
break;
case 14:
func_577();
break;
case 15:
func_576();
break;
case 16:
func_575();
break;
case 17:
func_574();
break;
case 18:
func_573();
break;
case 20:
func_572();
break;
case 21:
func_571();
break;
case 23:
func_570();
break;
case 39:
func_569();
break;
case 22:
func_568();
break;
case 24:
func_567();
break;
case 25:
func_566();
break;
case 27:
func_565();
break;
case 28:
func_564();
break;
case 29:
func_563();
break;
case 30:
func_561();
break;
case 31:
func_560();
break;
case 33:
func_558();
break;
case 32:
func_507(0, true);
break;
case 160:
func_507(1, true);
break;
case 161:
func_507(2, true);
break;
case 162:
func_507(3, true);
break;
case 34:
func_486();
break;
case 35:
func_485();
break;
case 36:
func_483(0);
break;
case 37:
func_483(1);
break;
case 38:
func_483(2);
break;
case 40:
func_482();
break;
case 41:
func_481();
break;
case 42:
func_480();
break;
case 43:
func_479();
break;
case 44:
func_478();
break;
case 45:
func_443();
break;
case 46:
func_442(6, 140);
func_442(7, 140);
break;
case 47:
func_442(6, 141);
func_442(7, 141);
break;
case 54:
func_441();
break;
case 48:
func_440();
break;
case 49:
func_439();
break;
case 50:
func_438();
break;
case 51:
func_419();
break;
case 52:
func_418();
break;
case 53:
func_417();
break;
case 55:
func_416();
break;
case 56:
func_415();
break;
case 57:
func_414(true);
break;
case 58:
func_414(false);
break;
case 59:
func_412(18, true);
func_412(19, true);
break;
case 60:
func_412(15, true);
func_412(16, true);
func_412(17, true);
break;
case 61:
func_412(12, true);
func_412(13, true);
break;
case 62:
func_410("AM_H_GARAGEP" /*Garage properties are now available to purchase at ~BLIP_GARAGE_FOR_SALE~~n~These will allow storage of vehicles purchased from websites or driven into the garage.*/, 1, 0, -1, 10000, 7, 0, 0, 0);
func_412(21, true);
func_412(22, true);
func_412(23, true);
break;
case 63:
func_408();
break;
case 64:
func_407();
break;
case 65:
func_404();
break;
case 66:
func_387();
break;
case 67:
func_386();
break;
case 68:
func_385();
break;
case 69:
func_384();
break;
case 70:
func_383();
break;
case 71:
func_382();
break;
case 72:
func_380();
break;
case 73:
func_379();
break;
case 74:
func_378();
break;
case 75:
func_377();
break;
case 76:
func_376();
break;
case 77:
func_375();
break;
case 78:
func_374();
break;
case 79:
func_373();
break;
case 80:
func_359();
break;
case 81:
func_358();
AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_16_SILVERLAKE" /*Radio Mirror Park*/, "MIRRORPARK_LOCKED");
MISC::SET_BIT(&(Global_113648.f_10018.f_25), 5);
break;
case 82:
func_357();
break;
case 83:
func_356();
break;
case 84:
func_354();
break;
case 86:
func_350();
break;
case 87:
func_349();
break;
case 88:
func_348();
func_561();
break;
case 89:
func_347();
break;
case 90:
func_346(true);
break;
case 91:
func_345();
break;
case 92:
func_344();
break;
case 93:
func_343();
break;
case 94:
func_340();
break;
case 95:
func_338();
break;
case 96:
func_337();
break;
case 97:
func_336();
break;
case 98:
func_331();
break;
case 99:
func_412(20, true);
func_330(20, 5, true);
func_412(14, true);
func_330(14, 5, true);
break;
case 100:
func_329();
break;
case 101:
func_328();
break;
case 102:
func_322();
break;
case 103:
func_321();
break;
case 104:
func_320();
break;
case 105:
func_319();
break;
case 106:
func_317();
break;
case 107:
func_316();
break;
case 108:
func_314();
break;
case 109:
func_313();
break;
case 110:
func_312();
break;
case 111:
func_311();
break;
case 112:
func_305();
break;
case 113:
func_304();
break;
case 114:
func_298();
break;
case 115:
func_283();
break;
case 117:
func_282();
break;
case 118:
func_281();
break;
case 116:
func_280();
break;
case 120:
func_279();
break;
case 121:
func_277();
break;
case 122:
func_274();
break;
case 123:
func_273();
break;
case 124:
func_271();
break;
case 125:
func_270();
break;
case 126:
func_269();
break;
case 127:
func_268();
break;
case 128:
func_267();
break;
case 129:
func_266();
break;
case 130:
func_265();
break;
case 131:
func_264(45);
break;
case 133:
func_263(false);
break;
case 134:
func_263(true);
break;
case 135:
func_262(false);
break;
case 136:
func_262(true);
break;
case 137:
func_264(50);
break;
case 138:
func_264(51);
break;
case 139:
func_264(54);
break;
case 140:
func_261(false);
break;
case 141:
func_261(true);
break;
case 142:
func_260();
break;
case 143:
func_258();
break;
case 144:
func_256();
break;
case 145:
func_255();
break;
case 146:
func_254();
break;
case 147:
func_252();
break;
case 148:
func_251(10, 1);
break;
case 149:
func_250();
break;
case 150:
func_249();
break;
case 151:
func_248();
break;
case 152:
func_247();
break;
case 153:
func_235();
break;
case 157:
func_232();
break;
case 163:
func_231();
break;
case 164:
func_230();
break;
case 165:
func_229();
break;
case 166:
func_227();
break;
case 167:
func_226();
break;
case 168:
func_216();
break;
case 173:
func_215();
break;
case 169:
func_214();
break;
case 170:
func_213();
break;
case 171:
func_212();
break;
case 172:
func_211();
break;
case 174:
func_210();
break;
case 175:
func_209();
break;
case 176:
func_208();
break;
case 177:
func_207();
break;
case 178:
func_206();
break;
case 179:
func_202();
break;
case 181:
func_200();
break;
case 182:
func_199();
break;
case 183:
func_198();
break;
case 184:
func_197();
break;
case 185:
func_196();
break;
case 186:
func_195();
break;
case 187:
func_193();
break;
case 188:
func_187();
break;
case 189:
func_183();
break;
case 190:
func_182();
break;
case 191:
func_180();
break;
case 192:
func_179();
break;
case 193:
func_178();
break;
case 194:
func_177();
break;
case 195:
func_176();
break;
case 196:
func_175();
break;
case 197:
func_174();
break;
case 198:
func_169();
break;
case 199:
func_87();
break;
case 200:
func_86();
break;
case 201:
func_75();
break;
default:
switch (i){
case 202:
func_74();
break;
case 203:
func_73();
break;
case 204:
func_72();
break;
case 205:
func_71();
break;
case 206:
func_29();
break;
case 207:
func_28();
break;
case 154:
func_13(-655205392);
func_13(1266526796);
break;
case 155:
func_13(1023767);
func_13(190444893);
break;
case 156:
func_12(58, 0);
func_12(59, 0);
break;
case 159:
func_1();
break;
case 208:
func_264(68);
break;
case 209:
func_264(69);
break;
case 210:
func_264(70);
break;
case 211:
func_264(71);
break;
}
break;
}
Global_113648.f_8615[i]=false;
}}}
SYSTEM::WAIT(0);
}
return;
}


void func_1() // Position - 0xC1E{
if(!IS_BIT_SET(Global_113648.f_18576.f_382, 6)){
func_2(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0);
MISC::SET_BIT(&(Global_113648.f_18576.f_382), 6);
}
return;
}

int func_2(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xC5D{
int num;
var unk10;
int num2;
int num3;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(iParam4 < 0) return 0;
if(iParam5 < 0) return 0;
if(iParam6==76) return 0;
if(iParam7==235) return 0;
if(iParam3 < 3)if(IS_BIT_SET(iParam2, iParam3)) return 0;
if(iParam2 < 1 || iParam2 > 7) return 0;
if(Global_113648.f_7690.f_866 < 10){
num=iParam0;
num.f_3=func_10(iParam1);
num.f_4=MISC::GET_GAME_TIMER() + iParam4;
num.f_5=iParam5;
num.f_1=iParam9;
num.f_2=iParam2;
num.f_6=iParam3;
num.f_7=iParam6;
num.f_8=iParam7;
num.f_9=iParam8;
MISC::CLEAR_BIT(&(num.f_1), 0);
Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 /*10*/]={
num 
};
Global_113648.f_7690.f_866=Global_113648.f_7690.f_866 + 1;
return 1;
}else{
unk10={
func_9(iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) 
};
num2=0;
func_8(&num2);
num3=func_7(unk10, Global_113648.f_7690.f_765[num2 /*10*/]);
if(num3==2){
func_5(Global_113648.f_7690.f_765[num2 /*10*/]);
Global_113648.f_7690.f_765[num2 /*10*/]={
unk10 
};
func_4(&unk10);
return 1;
}elseif(num3==1){
if(func_3(unk10)){
func_5(Global_113648.f_7690.f_765[num2 /*10*/]);
Global_113648.f_7690.f_765[num2 /*10*/]={
unk10 
};
func_4(&unk10);
return 1;
}else{
if(!func_3(Global_113648.f_7690.f_765[num2 /*10*/])){
Global_113648.f_7690.f_765[num2 /*10*/]={
unk10 
};
func_4(&unk10);
return 1;
}
func_4(&unk10);
return 1;
}}else{
func_5(unk10);
func_4(&unk10);
return 1;
}}
return 0;
}
BOOL func_3(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0xE7C{
if(uParam0.f_8==0) return false;
return true;
}


void func_4(var uParam0) // Position - 0xE94{
var unk;
*uParam0={
unk 
};
return;
}


void func_5(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9) // Position - 0xEA6{
if(func_3(uParam0)) func_6(uParam0.f_8, 0);
return;
}


void func_6(int iParam0, int iParam1) // Position - 0xEC3{
if(iParam0==235 || iParam0==0) return;
Global_113648.f_8615[iParam0]=true;
Global_113648.f_8615.f_236[iParam0]=MISC::GET_GAME_TIMER() + iParam1;
return;
}

int func_7(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19) // Position - 0xF00{
var unk;
var unk2;
unk=uParam0.f_3;
unk2=uParam10.f_3;
if(unk > unk2) return 2;
if(unk < unk2) return 0;
return 1;
}


void func_8(var uParam0) // Position - 0xF31{
int i;
*uParam0=0;
for (i=0;
i < Global_113648.f_7690.f_866;
i=i + 1){
if(func_7(Global_113648.f_7690.f_765[i /*10*/], Global_113648.f_7690.f_765[*uParam0 /*10*/])==0) *uParam0=i;
}
return;
}


struct<10> func_9(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0xF88{
int num;
num=iParam0;
num.f_3=func_10(iParam1);
num.f_4=MISC::GET_GAME_TIMER() + iParam4;
num.f_5=iParam5;
num.f_1=iParam9;
num.f_2=iParam2;
num.f_6=iParam3;
num.f_7=iParam6;
num.f_8=iParam7;
num.f_9=iParam8;
MISC::CLEAR_BIT(&(num.f_1), 0);
return num;
}

int func_10(int iParam0) // Position - 0xFE1{
switch (iParam0){
case 0:
case 4:
return 5;
case 7:
return 4;
case 2:
return 3;
case 1:
return 2;
case 3:
return 1;
case 5:
case 6:
return 0;
}
return 7;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0x104B{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


void func_12(int iParam0, int iParam1) // Position - 0x1073{
iParam1=iParam1;
Global_44456=1;
if(Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1){
Global_47790[iParam0 /*46*/].f_1=1;
Global_47790[iParam0 /*46*/]=false;
}
return;
}

int func_13(int iParam0) // Position - 0x10B1{
int i;
int num;
num=0;
for (i=0;
i < Global_113648.f_7690.f_136;
i=i + 1){
if(Global_113648.f_7690[i /*15*/]==iParam0){
if(Global_43804 !=i){
func_27(i);
func_19(iParam0);
num=1;
}}}
for (i=0;
i < Global_113648.f_7690.f_198;
i=i + 1){
if(Global_113648.f_7690.f_137[i /*15*/]==iParam0){
func_19(iParam0);
num=1;
}}
for (i=0;
i < Global_113648.f_7690.f_650;
i=i + 1){
if(Global_113648.f_7690.f_199[i /*15*/]==iParam0){
func_18(iParam0);
num=1;
}}
for (i=0;
i < Global_113648.f_7690.f_764;
i=i + 1){
if(Global_113648.f_7690.f_651[i /*14*/]==iParam0){
func_15(i);
num=1;
}}
for (i=0;
i < Global_113648.f_7690.f_866;
i=i + 1){
if(Global_113648.f_7690.f_765[i /*10*/]==iParam0){
func_14(i);
num=1;
}}
return num;
}


void func_14(int iParam0) // Position - 0x11D8{
int i;
var unk;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_866) return;
if(Global_113648.f_7690.f_866 > 1){
for (i=iParam0;
i <=Global_113648.f_7690.f_866 - 2;
i=i + 1){
Global_113648.f_7690.f_765[i /*10*/]={
Global_113648.f_7690.f_765[i + 1 /*10*/] 
};
}}
if(Global_113648.f_7690.f_866 > 0){
Global_113648.f_7690.f_765[Global_113648.f_7690.f_866 - 1 /*10*/]={
unk 
};
Global_113648.f_7690.f_866=Global_113648.f_7690.f_866 - 1;
}
return;
}


void func_15(int iParam0) // Position - 0x1291{
int i;
var unk;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_764) return;
if(Global_113648.f_7690.f_764 > 1){
for (i=iParam0;
i <=Global_113648.f_7690.f_764 - 2;
i=i + 1){
Global_113648.f_7690.f_651[i /*14*/]={
Global_113648.f_7690.f_651[i + 1 /*14*/] 
};
}}
if(Global_113648.f_7690.f_764 > 0){
Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 - 1 /*14*/]={
unk 
};
Global_113648.f_7690.f_764=Global_113648.f_7690.f_764 - 1;
}
func_16(0);
func_16(1);
func_16(2);
return;
}


void func_16(int iParam0) // Position - 0x1359{
int i;
int num;
int j;
num=0;
if(!func_17(iParam0)) return;
for (i=0;
i < Global_113648.f_7690.f_136;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_7690[i /*15*/].f_2, iParam0))if(Global_113648.f_7690[i /*15*/].f_3 > num) num=Global_113648.f_7690[i /*15*/].f_3;
}
for (j=0;
j < Global_113648.f_7690.f_764;
j=j + 1){
if(IS_BIT_SET(Global_113648.f_7690.f_651[j /*14*/].f_2, iParam0))if(Global_113648.f_7690.f_651[j /*14*/].f_3==5) num=5;
}
Global_113648.f_7690.f_919[iParam0]=num;
return;
}
BOOL func_17(eCharacter echParam0) // Position - 0x1417{
return echParam0 < CHAR_MULTIPLAYER;
}


void func_18(int iParam0) // Position - 0x1423{
var unk;
int i;
int j;
for (i=0;
i < Global_113648.f_7690.f_650;
i=i + 1){
if(Global_113648.f_7690.f_199[i /*15*/]==iParam0){
for (j=i;
j <=Global_113648.f_7690.f_650 - 2;
j=j + 1){
Global_113648.f_7690.f_199[j /*15*/]={
Global_113648.f_7690.f_199[j + 1 /*15*/] 
};
}
Global_113648.f_7690.f_199[Global_113648.f_7690.f_650 - 1 /*15*/]={
unk 
};
Global_113648.f_7690.f_650=Global_113648.f_7690.f_650 - 1;
return;
}}
return;
}


void func_19(int iParam0) // Position - 0x14D0{
var unk;
int i;
int j;
for (i=0;
i < Global_113648.f_7690.f_198;
i=i + 1){
if(Global_113648.f_7690.f_137[i /*15*/]==iParam0){
func_20(Global_113648.f_7690.f_137[i /*15*/].f_6);
for (j=i;
j <=Global_113648.f_7690.f_198 - 2;
j=j + 1){
Global_113648.f_7690.f_137[j /*15*/]={
Global_113648.f_7690.f_137[j + 1 /*15*/] 
};
}
Global_113648.f_7690.f_137[Global_113648.f_7690.f_198 - 1 /*15*/]={
unk 
};
Global_113648.f_7690.f_198=Global_113648.f_7690.f_198 - 1;
return;
}}
return;
}

int func_20(int iParam0) // Position - 0x158C{
int num;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(func_26(iParam0, Global_20383)==1){
func_25(iParam0, Global_20383, 0);
if(func_24(iParam0, Global_20383)==0){
num=Global_20383;
func_21(iParam0, num);
}
return 1;
}else{
return 0;
}}
return 0;
}


void func_21(int iParam0, int iParam1) // Position - 0x15E2{
int num;
if(Global_117[iParam0 /*10*/].f_8 !=169){
if(iParam1 > 3){
}else{
num=iParam1;
func_23(iParam0, num, 0);
func_22(iParam0, num, 0);
}}
return;
}


void func_22(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x1617{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_24[iParam1]=iParam2;
if(echParam0 < 162) Global_113648.f_28052[echParam0 /*29*/].f_24[iParam1]=iParam2;
return;
}


void func_23(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x165C{
if(iParam1 < 0 || iParam1 > 4) return;
Global_2028[echParam0 /*29*/].f_12[iParam1]=iParam2;
if(echParam0 < 162) Global_113648.f_28052[echParam0 /*29*/].f_12[iParam1]=iParam2;
return;
}

int func_24(eCharacter echParam0, int iParam1) // Position - 0x16A1{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_24[iParam1];
}


void func_25(int iParam0, int iParam1, int iParam2) // Position - 0x16CB{
Global_2028[iParam0 /*29*/].f_19[iParam1]=iParam2;
if(iParam0 < 162) Global_113648.f_28052[iParam0 /*29*/].f_19[iParam1]=iParam2;
return;
}

int func_26(int iParam0, int iParam1) // Position - 0x16FC{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[iParam0 /*29*/].f_19[iParam1];
}


void func_27(int iParam0) // Position - 0x1726{
int i;
int num;
var unk;
if(iParam0 < 0 || iParam0 >=Global_113648.f_7690.f_136) return;
num=Global_113648.f_7690[iParam0 /*15*/].f_2;
if(Global_113648.f_7690.f_136 > 1){
for (i=iParam0;
i <=Global_113648.f_7690.f_136 - 2;
i=i + 1){
Global_113648.f_7690[i /*15*/]={
Global_113648.f_7690[i + 1 /*15*/] 
};
}}
if(Global_113648.f_7690.f_136 > 0){
Global_113648.f_7690[Global_113648.f_7690.f_136 - 1 /*15*/]={
unk 
};
Global_113648.f_7690.f_136=Global_113648.f_7690.f_136 - 1;
}
for (i=0;
i < 3;
i=i + 1){
if(IS_BIT_SET(num, i)) func_16(i);
}
return;
}


void func_28() // Position - 0x17FE{
func_412(62, true);
return;
}


void func_29() // Position - 0x180D{
eCharacter character;
int num;
character=_GET_CURRENT_PLAYER_CHARACTER();
num=_GET_PLAYER_CASH(character);
if(num > 10000) func_30(character, 129, 5000);
elseif(num >=10) func_30(character, 129, num / 10);
return;
}

int func_30(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x184F{
if(func_64(echParam0)==3) return 0;
if(func_64(echParam0)==4) return 0;
return func_31(func_64(echParam0), 0, iParam1, iParam2, false);
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3, BOOL bParam4) // Position - 0x1883{
float num;
int num2;
int num3;
int num4;
int num5;
int num6;
func_63();
if(iParam3 < 1) return 0;
num=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_62(99, 1);
func_61(joaat("SP0_MONEY_TOTAL_SPENT"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_TOTAL_SPENT"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_TOTAL_SPENT"), iParam3);
break;
}
func_45(false);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_42(5)){
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
func_61(joaat("SP0_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_ON_TATTOOS"), iParam3);
break;
}
if(func_42(1)){
num=0f;
num2=1;
}
break;
case 21:
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_ON_TAXIS"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_IN_STRIP_CLUBS"), iParam3);
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
func_61(joaat("SP0_MONEY_SPENT_PROPERTY"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_PROPERTY"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_PROPERTY"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_IN_CLOTHES"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_ON_HAIRDOS"), iParam3);
break;
}
if(func_42(0)){
num=0f;
num2=0;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_IN_BUYING_GUNS"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_61(joaat("SP0_MONEY_SPENT_CAR_MODS"), iParam3);
break;
case 1:
func_61(joaat("SP1_MONEY_SPENT_CAR_MODS"), iParam3);
break;
case 2:
func_61(joaat("SP2_MONEY_SPENT_CAR_MODS"), iParam3);
break;
}
func_41(iParam3);
break;
}
break;
}
break;
case 1:
switch (iParam0){
case 0:
func_62(95, iParam3);
break;
case 1:
func_62(97, iParam3);
break;
case 2:
func_62(96, iParam3);
break;
}
func_62(98, iParam3);
break;
}
num3=iParam0;
iParam3=SYSTEM::FLOOR(num * SYSTEM::TO_FLOAT(iParam3));
num4=0;
num5=iParam3;
if(num==0f){
func_34(num2);
return 1;
}elseif(num !=1f){
func_34(num2);
}
num6=Global_60536[num3] + iParam3;
switch (iParam1){
case 1:
if(Global_60536[num3] >=0 && iParam3 > 0)if(num6 <=0) Global_60536[num3]=2147483647;
else Global_60536[num3]=Global_60536[num3] + iParam3;
switch (iParam0){
case 0:
func_61(joaat("SP0_TOTAL_CASH_EARNED"), iParam3);
break;
case 1:
func_61(joaat("SP1_TOTAL_CASH_EARNED"), iParam3);
break;
case 2:
func_61(joaat("SP2_TOTAL_CASH_EARNED"), iParam3);
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
func_33(iParam0);
if(Global_43257==15) func_32(false);
return 1;
}


void func_32(BOOL bParam0) // Position - 0x1E82{
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


void func_33(int iParam0) // Position - 0x2104{
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


void func_34(int iParam0) // Position - 0x215E{
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
}}elseif(IS_BIT_SET(Global_113648.f_20566.f_471, iParam0) || IS_BIT_SET(Global_2359296[func_36() /*5568*/].f_681.f_10, iParam0)){
flag=true;
MISC::CLEAR_BIT(&(Global_113648.f_20566.f_471), iParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_36() /*5568*/].f_681.f_10), iParam0);
}
if(flag){
TEXT_LABEL_ASSIGN_STRING(&txdName, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED" /*You have redeemed your promotion for ~a~*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_35(iParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, true, 0, "", 0);
}
return;
}


char* func_35(int iParam0) // Position - 0x22DB{
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

int func_36() // Position - 0x23D0{
int num;
num=0;
return num;
}


void _MPCHAR_STAT_SET_INT(eMPStat empsParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x23DD{
Hash statName;
bParam4;
statName=Global_2805027[empsParam0 /*3*/][func_38(iParam2)];
if(statName !=0) STATS::STAT_SET_INT(statName, iParam1, bParam3);
return;
}

int func_38(int iParam0) // Position - 0x240D{
int num;
int num2;
num=iParam0;
if(num==-1){
num2=func_39();
if(num2 > -1){
Global_2804739=0;
num=num2;
}else{
num=0;
Global_2804739=1;
}}
return num;
}

int func_39() // Position - 0x2441{
return Global_1574918;
}


void _STAT_SET_PACKED_BOOL(int iParam0, int iParam1, int iParam2) // Position - 0x244D{
if(iParam2==-1) iParam2=func_39();
unk_0x0111091C0EE35B9C(iParam0, iParam1, iParam2);
return;
}


void func_41(int iParam0) // Position - 0x246B{
func_62(93, iParam0);
func_62(29, iParam0);
func_62(30, iParam0);
return;
}
BOOL func_42(int iParam0) // Position - 0x248B{
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
if(iParam0==8) return func_44(129, -1);
if(iParam0==9) return func_44(135, -1);
if(iParam0==10) return func_44(136, -1);
if(iParam0==11) return func_44(137, -1);
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
return IS_BIT_SET(Global_2359296[func_36() /*5568*/].f_681.f_10, iParam0);
}
int _MPCHAR_STAT_GET_INT(eMPStat empsParam0, int iParam1, int iParam2) // Position - 0x2631{
Hash statHash;
int outValue;
if(empsParam0 !=14192){
iParam2==0;
statHash=Global_2805027[empsParam0 /*3*/][func_38(iParam1)];
if(STATS::STAT_GET_INT(statHash, &outValue, -1)) return outValue;
}
return 0;
}
BOOL func_44(int iParam0, int iParam1) // Position - 0x266E{
if(iParam1==-1) iParam1=func_39();
return unk_0xD03506C6E58E4E95(iParam0, iParam1);
}

int func_45(BOOL bParam0) // Position - 0x268A{
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
func_60(27, value);
}
if(value < 200000000) return 0;
func_46(27, 1);
return 1;
}

int func_46(int iParam0, int iParam1) // Position - 0x2741{
if(iParam0 >=78) return 0;
return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1) // Position - 0x275C{
if(func_59(14) && !func_58(iParam0)) return 0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1) return 0;
if(Global_32414 !=0 && !Global_78558) return 0;
if(func_57(&Global_4542597)){
if(func_55(&Global_4542597, iParam0)) return 0;
if(func_48(&Global_4542597, iParam0)) return 1;
}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)) return 0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)) return 1;
return 0;
}
return 0;
}
BOOL func_48(var uParam0, int iParam1) // Position - 0x27F9{
int i;
var unk;
unk=78;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)) return false;
if(func_59(14) && !func_58(iParam1)) return false;
if(func_55(uParam0, iParam1)) return false;
if(func_54(uParam0) < 0f) func_53(uParam0, 0);
func_51(&unk);
i=0;
for (i=0;
i < *uParam0 - 1;
i=i + 1){
unk[i + 1]=uParam0->[i];
}
func_49(&unk, iParam1);
i=0;
for (i=0;
i < *uParam0;
i=i + 1){
uParam0->[i]=unk[i];
}
return true;
}

int func_49(var uParam0, int iParam1) // Position - 0x28AA{
int i;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)) return 0;
if(func_59(14) && !func_58(iParam1)) return 0;
if(func_55(uParam0, iParam1)) return 0;
if(func_54(uParam0) < 0f) func_53(uParam0, 0);
for (i=0;
i < *uParam0;
i=i + 1){
if(func_50(uParam0, i)){
uParam0->[i]=iParam1;
return 1;
}}
return 0;
}
BOOL func_50(var uParam0, int iParam1) // Position - 0x2925{
return uParam0->[iParam1]==78;
}


void func_51(var uParam0) // Position - 0x2936{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
func_52(uParam0, i);
}
func_53(uParam0, Global_4542596 - 0.5f);
return;
}


void func_52(var uParam0, int iParam1) // Position - 0x296A{
uParam0->[iParam1]=78;
return;
}


void func_53(var uParam0, int iParam1) // Position - 0x297A{
if(iParam1==0f) uParam0->f_80=0f;
else uParam0->f_80=iParam1;
return;
}


float func_54(var uParam0) // Position - 0x2997{
return uParam0->f_80;
}
BOOL func_55(var uParam0, int iParam1) // Position - 0x29A3{
return func_56(uParam0, iParam1) !=-1;
}

int func_56(var uParam0, int iParam1) // Position - 0x29B5{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i]==iParam1) return i;
}
return -1;
}
BOOL func_57(var uParam0) // Position - 0x29E2{
return uParam0->f_79==1;
}
BOOL func_58(int iParam0) // Position - 0x29F0{
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
BOOL func_59(int iParam0) // Position - 0x2A40{
return Global_43257==iParam0;
}
BOOL func_60(int iParam0, int iParam1) // Position - 0x2A4E{
int achievementProgress;
if(iParam0 < 0) return false;
if(iParam0 > 78) return false;
if(iParam1 <=0 || iParam1 > 100) return false;
achievementProgress=PLAYER::GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > achievementProgress) return PLAYER::SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
return false;
}


void func_61(Hash hParam0, int iParam1) // Position - 0x2A9F{
int outValue;
STATS::STAT_GET_INT(hParam0, &outValue, -1);
outValue=outValue + iParam1;
STATS::STAT_SET_INT(hParam0, outValue, true);
return;
}


void func_62(int iParam0, int iParam1) // Position - 0x2AC2{
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


void func_63() // Position - 0x2B1F{
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

int func_64(int iParam0) // Position - 0x2B94{
return Global_2028[iParam0 /*29*/].f_17;
}
int _GET_PLAYER_CASH(eCharacter echParam0) // Position - 0x2BA5{
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
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x2BFD{
func_67();
return Global_113648.f_2365.f_539.f_4321;
}


void func_67() // Position - 0x2C16{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_17(character) && !func_59(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_17(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x2D13{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x2D50{
if(func_17(character)) return func_70(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_70(eCharacter echParam0) // Position - 0x2D75{
return Global_2028[echParam0 /*29*/];
}


void func_71() // Position - 0x2D84{
eCharacter character;
int num;
character=_GET_CURRENT_PLAYER_CHARACTER();
num=_GET_PLAYER_CASH(character);
if(num > 10000) func_30(character, 128, 5000);
elseif(num >=10) func_30(character, 128, num / 10);
return;
}


void func_72() // Position - 0x2DC6{
eCharacter character;
int num;
character=_GET_CURRENT_PLAYER_CHARACTER();
num=_GET_PLAYER_CASH(character);
if(num > 10000) func_30(character, 127, 5000);
elseif(num >=10) func_30(character, 127, num / 10);
return;
}


void func_73() // Position - 0x2E08{
eCharacter character;
int num;
character=_GET_CURRENT_PLAYER_CHARACTER();
num=_GET_PLAYER_CASH(character);
if(num > 10000) func_30(character, 126, 5000);
elseif(num >=10) func_30(character, 126, num / 10);
return;
}


void func_74() // Position - 0x2E4A{
eCharacter character;
int num;
character=_GET_CURRENT_PLAYER_CHARACTER();
num=_GET_PLAYER_CASH(character);
if(num > 10000) func_30(character, 125, 5000);
elseif(num >=10) func_30(character, 125, num / 10);
return;
}


void func_75() // Position - 0x2E8C{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
switch (character){
case CHAR_MICHAEL:
func_76(0, 26, 100000);
break;
case CHAR_FRANKLIN:
func_76(1, 26, 100000);
break;
case CHAR_TREVOR:
func_76(2, 26, 100000);
break;
}
return;
}


void func_76(int iParam0, int iParam1, int iParam2) // Position - 0x2EDD{
int num;
float num2;
int num3;
num=func_84(iParam0, iParam1);
if(num==-1) return;
num2=func_79(iParam1);
if(Global_55661[iParam1 /*36*/].f_8) return;
num3=SYSTEM::CEIL(SYSTEM::TO_FLOAT(iParam2) / num2);
func_78(iParam0, num, iParam1);
func_77(iParam0, num, num3, true);
return;
}


void func_77(int iParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2F33{
int num;
int value;
int num2;
if(iParam1 < 0 || iParam1 > 9) return;
switch (iParam0){
case 0:
num=Global_113648.f_20566[iParam1];
break;
case 1:
num=Global_113648.f_20566.f_33[iParam1];
break;
case 2:
num=Global_113648.f_20566.f_66[iParam1];
break;
}
if(Global_55661[num /*36*/].f_9 <=0f) return;
value=0;
if(bParam3){
switch (iParam0){
case 0:
Global_113648.f_20566.f_22[iParam1]=Global_113648.f_20566.f_22[iParam1] + iParam2;
value=Global_113648.f_20566.f_22[iParam1];
break;
case 1:
Global_113648.f_20566.f_55[iParam1]=Global_113648.f_20566.f_55[iParam1] + iParam2;
value=Global_113648.f_20566.f_55[iParam1];
break;
case 2:
Global_113648.f_20566.f_88[iParam1]=Global_113648.f_20566.f_88[iParam1] + iParam2;
value=Global_113648.f_20566.f_88[iParam1];
break;
}}else{
switch (iParam0){
case 0:
Global_113648.f_20566.f_22[iParam1]=iParam2;
value=Global_113648.f_20566.f_22[iParam1];
break;
case 1:
Global_113648.f_20566.f_55[iParam1]=iParam2;
value=Global_113648.f_20566.f_55[iParam1];
break;
case 2:
Global_113648.f_20566.f_88[iParam1]=iParam2;
value=Global_113648.f_20566.f_88[iParam1];
break;
}}
if(Global_55661[num /*36*/].f_8){
num2=Global_55661[num /*36*/].f_35;
if(num2 > -1) STATS::STAT_SET_INT(Global_58542[num2 /*7*/].f_3[iParam0], value, true);
}
return;
}


void func_78(int iParam0, int iParam1, int iParam2) // Position - 0x3110{
if(iParam1 < 0 || iParam1 > 9) return;
switch (iParam0){
case 0:
Global_113648.f_20566[iParam1]=iParam2;
break;
case 1:
Global_113648.f_20566.f_33[iParam1]=iParam2;
break;
case 2:
Global_113648.f_20566.f_66[iParam1]=iParam2;
break;
}
return;
}


float func_79(int iParam0) // Position - 0x317D{
int num;
float num2;
num=iParam0;
num2=Global_55661[iParam0 /*36*/].f_9 * func_80(num);
return SYSTEM::TO_FLOAT(SYSTEM::FLOOR(num2 * 100f)) / 100f;
}


float func_80(int iParam0) // Position - 0x31B1{
float num;
int num2;
int i;
float num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int num9;
int num10;
float num11;
float num12;
num=1f;
switch (iParam0){
case 61:
if(Global_113648.f_9087.f_99.f_58[131]) num=0.5f;
break;
case 73:
if(func_83(25)){
num=num * 3f;
}else{
if(func_83(74) || func_83(75)) num=num * 0.95f;
if(func_83(14)) num=num * 0.98f;
if(func_83(16)) num=num * 0.98f;
if(func_83(48)) num=num * 0.98f;
if(func_83(24)) num=num * 0.98f;
if(func_83(27)) num=num * 0.5f;
}
break;
case 66:
if(func_83(49)) num=num * 0.5f;
if(func_83(10)) num=num * 0.95f;
break;
case 59:
if(func_83(93))if(!func_83(47)) num=num * 0.9f;
if(func_83(38))if(!func_83(28)) num=num * 0.9f;
if(func_83(84))if(!func_83(28)) num=num * 0.9f;
break;
case 69:
if(func_83(90))if(!func_83(14)) num=num * 0.7f;
break;
case 16:
if(func_83(28)) num=num * 2f;
break;
case 52:
if(func_83(93))if(!func_83(28)) num=num * 0.6f;
break;
case 56:
if(func_83(61))if(!func_83(49)) num=num * 0.5f;
break;
}
if(Global_113648.f_20566.f_442 < 1) return num;
num2=-1;
i=0;
for (i=0;
i < 8;
i=i + 1){
if(Global_113648.f_20566.f_443[i]==iParam0) num2=i;
}
if(num2 > -1) num=func_82(Global_113648.f_20566.f_452[num2], Global_113648.f_20566.f_461[num2]);
if(num > 1f){
num3=num - 1f;
num4=iParam0;
num5=func_81(0, num4);
num6=func_81(1, num4);
num7=func_81(2, num4);
if(num5 + num6 + num7 > 0){
num8=Global_60536[0] + Global_60536[1] + Global_60536[2];
for (i=0;
i < 10;
i=i + 1){
if(Global_113648.f_20566.f_22[i] > 0) num8=num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_11[i]);
if(Global_113648.f_20566.f_55[i] > 0) num8=num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_44[i]);
if(Global_113648.f_20566.f_88[i] > 0) num8=num8 + SYSTEM::FLOOR(Global_113648.f_20566.f_77[i]);
}
num9=700000000;
num10=1000000000;
if(num8 > num10){
num3=0f;
}elseif(num8 < num9){
num3=1f;
}else{
num11=SYSTEM::TO_FLOAT(num8 - num9);
num12=SYSTEM::TO_FLOAT(num10 - num9);
num3=num3 * (1f - (num11 / num12));
}}
num=1f + num3;
}
return num;
}

int func_81(int iParam0, int iParam1) // Position - 0x352A{
if(iParam1 < 0 || iParam1 > 9) return 0;
switch (iParam0){
case 0:
return Global_113648.f_20566.f_22[iParam1];
case 1:
return Global_113648.f_20566.f_55[iParam1];
case 2:
return Global_113648.f_20566.f_88[iParam1];
}
return 0;
}


float func_82(int iParam0, int iParam1) // Position - 0x359B{
float num;
BOOL flag;
float num2;
int num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float num9;
float num10;
num=0f;
if(iParam0 < 1) return 1f;
flag=IS_BIT_SET(iParam1, 0);
num2=SYSTEM::TO_FLOAT(iParam0);
num3=0;
if(IS_BIT_SET(iParam1, 3)) num3=num3 + 1;
if(IS_BIT_SET(iParam1, 4)) num3=num3 + 2;
if(IS_BIT_SET(iParam1, 5)) num3=num3 + 4;
if(IS_BIT_SET(iParam1, 20)) num3=num3 + 8;
num4=SYSTEM::TO_FLOAT(3 * num3);
if(IS_BIT_SET(iParam1, 2)) num4=num4 * 7f;
if(IS_BIT_SET(iParam1, 1))if(func_83(21)) return 1f;
elseif(num4 < 1f) return 1f;
num5=1f - (num2 / num4);
if(IS_BIT_SET(iParam1, 16)) num=num - 0.5f;
if(IS_BIT_SET(iParam1, 17)) num=num - 0.25f;
if(IS_BIT_SET(iParam1, 18)) num=num - 0.1f;
if(IS_BIT_SET(iParam1, 19)) num=num - 0.33f;
if(flag) num=-num;
if(!IS_BIT_SET(iParam1, 1)){
if(IS_BIT_SET(iParam1, 6)){
num6=0f;
if(IS_BIT_SET(iParam1, 8)) num6=num6 + 0.5f;
if(IS_BIT_SET(iParam1, 9)) num6=num6 + 0.25f;
if(IS_BIT_SET(iParam1, 10)) num6=num6 + 0.125f;
if(num5 < num6){
num7=num5 / num6;
if(IS_BIT_SET(iParam1, 7)){
num7=1f - num7;
num7=num7 * num7;
num7=1f - num7;
}
num=num * num7;
}}
if(IS_BIT_SET(iParam1, 11)){
num8=0f;
if(IS_BIT_SET(iParam1, 13)) num8=num8 + 0.5f;
if(IS_BIT_SET(iParam1, 14)) num8=num8 + 0.25f;
if(IS_BIT_SET(iParam1, 15)) num8=num8 + 0.125f;
num9=1f - num8;
if(num5 > num9){
num10=(num5 - num9) / num8;
if(IS_BIT_SET(iParam1, 12)) num10=num10 * num10;
num=num * (1f - num10);
}}}
num=1f + num;
return num;
}
BOOL func_83(int iParam0) // Position - 0x377B{
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}

int func_84(int iParam0, int iParam1) // Position - 0x3791{
int num;
BOOL flag;
int i;
num=-1;
flag=false;
for (i=0;
i < 10;
i=i + 1){
if(func_81(iParam0, i)==0 && !flag) num=i;
if(func_85(iParam0, i)==iParam1 && func_81(iParam0, i) > 0){
flag=true;
num=i;
}}
return num;
}

int func_85(int iParam0, int iParam1) // Position - 0x37F1{
if(iParam1 < 0 || iParam1 > 9) return 31;
switch (iParam0){
case 0:
return Global_113648.f_20566[iParam1];
case 1:
return Global_113648.f_20566.f_33[iParam1];
case 2:
return Global_113648.f_20566.f_66[iParam1];
default:
}
return 31;
}


void func_86() // Position - 0x3859{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
switch (character){
case CHAR_MICHAEL:
func_76(0, 48, 100000);
break;
case CHAR_FRANKLIN:
func_76(1, 48, 100000);
break;
case CHAR_TREVOR:
func_76(2, 48, 100000);
break;
}
return;
}


void func_87() // Position - 0x38AA{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
switch (character){
case CHAR_MICHAEL:
if(!func_168(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 37)){
func_167(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 37, true);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 37, true, 1);
}else{
func_167(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 36, true);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 36, true, 1);
}
break;
case CHAR_FRANKLIN:
if(!func_168(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 33)){
func_167(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 33, true);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 33, true, 1);
}else{
func_167(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 25, true);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 25, true, 1);
}
break;
case CHAR_TREVOR:
if(!func_168(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 40)){
func_167(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 40, true);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 40, true, 1);
}else{
func_167(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 37, true);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 37, true, 1);
}
break;
}
return;
}

int func_88(Hash hParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x39C1{
int num;
int i;
int j;
var unk;
var unk18;
int num2;
Global_78341[1 /*14*/]={
func_102(hParam0, iParam1, iParam2, -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3){
func_101(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 1, 0);
if(iParam1==12){
num=1;
if(hParam0==joaat("Player_Zero"))if(iParam2==31) num=0;
if(num==1){
unk={
func_97(hParam0, iParam2) 
};
for (i=0;
i <=14;
i=i + 1){
if(unk[i] !=-99 && i !=12 && i !=14){
if(i !=13){
func_88(hParam0, i, unk[i], true, 1);
func_167(hParam0, i, unk[i], true);
}else{
unk18={
func_89(hParam0, unk[i]) 
};
for (j=0;
j <=8;
j=j + 1){
func_88(hParam0, 14, unk18[j], true, 1);
func_167(hParam0, 14, unk18[j], true);
}}
}}}}}else{
func_101(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 1, Global_78341[1 /*14*/].f_1, 0, 1);
}
if(iParam4==1 && bParam3==true){
switch (hParam0){
case joaat("Player_Zero"):
break;
case joaat("Player_One"):
switch (iParam1){
case 3:
if(iParam2 >=176 && iParam2 <=191){
num2=227 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 3, num2, true, 0);
}elseif(iParam2 >=227 && iParam2 <=242){
num2=176 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 3, num2, true, 0);
}
break;
case 11:
if(iParam2 >=9 && iParam2 <=24){
num2=25 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 11, num2, true, 0);
}elseif(iParam2 >=25 && iParam2 <=40){
num2=9 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 11, num2, true, 0);
}
break;
case 8:
if(iParam2 >=27 && iParam2 <=42){
num2=43 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
num2=59 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
}elseif(iParam2 >=43 && iParam2 <=58){
num2=27 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
num2=59 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
}elseif(iParam2 >=59 && iParam2 <=74){
num2=27 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
num2=43 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 8, num2, true, 0);
}
break;
case 14:
if(iParam2 >=64 && iParam2 <=79){
num2=41 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 14, num2, true, 0);
}
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 4:
if(iParam2 >=81 && iParam2 <=90){
num2=94 + Global_78341[1 /*14*/].f_4;
func_88(hParam0, 4, num2, true, 0);
}
break;
case 12:
if(iParam2==2) func_88(hParam0, 14, 17, true, 0);
break;
}
break;
}}
return 1;
}
return 0;
}


struct<10> func_89(int iParam0, int iParam1) // Position - 0x3DA3{
int i;
var unk;
unk=9;
for (i=0;
i <=8;
i=i + 1){
unk[i]=-99;
}
switch (iParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 31:
func_96(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&unk, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&unk, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&unk, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&unk, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&unk, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&unk, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&unk, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&unk, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&unk, iParam0, iParam1, 10);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 31:
func_96(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&unk, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&unk, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&unk, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&unk, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&unk, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&unk, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&unk, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&unk, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&unk, iParam0, iParam1, 9);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 31:
func_96(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&unk, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&unk, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&unk, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&unk, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&unk, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&unk, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&unk, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&unk, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&unk, iParam0, iParam1, 9);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 31:
func_96(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&unk, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&unk, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&unk, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&unk, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&unk, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&unk, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&unk, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&unk, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&unk, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_96(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_96(&unk, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_96(&unk, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_96(&unk, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_96(&unk, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_96(&unk, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_96(&unk, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_96(&unk, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_96(&unk, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_96(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_96(&unk, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_96(&unk, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_96(&unk, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_96(&unk, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_96(&unk, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&unk, iParam0, iParam1, 25);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 31:
func_96(&unk, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&unk, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&unk, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&unk, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&unk, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&unk, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&unk, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&unk, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&unk, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_96(&unk, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_96(&unk, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_96(&unk, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_96(&unk, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_96(&unk, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_96(&unk, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_96(&unk, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_96(&unk, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_96(&unk, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_96(&unk, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_96(&unk, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_96(&unk, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_96(&unk, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_96(&unk, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&unk, iParam0, iParam1, 25);
break;
}
break;
}
return unk;
}


void func_90(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x46D3{
int num;
Hash itemHash;
Hash outPropVariant;
int i;
if(iParam2 !=0 && iParam2 !=-99){
uParam0->[0]=0;
uParam0->[1]=1;
uParam0->[2]=2;
uParam0->[3]=3;
uParam0->[4]=4;
uParam0->[5]=5;
uParam0->[6]=6;
uParam0->[7]=7;
uParam0->[8]=8;
num=0;
if(iParam1==joaat("Player_Zero")) num=0;
elseif(iParam1==joaat("Player_One")) num=1;
elseif(iParam1==joaat("Player_Two")) num=2;
elseif(iParam1==joaat("MP_M_Freemode_01")) num=3;
elseif(iParam1==joaat("MP_F_Freemode_01")) num=4;
FILES::GET_SHOP_PED_OUTFIT(iParam2, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_3;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(itemHash.f_1, i, &outPropVariant) && outPropVariant.f_2 !=-1)if(outPropVariant !=0 && outPropVariant !=-1 && outPropVariant !=joaat("0")) uParam0->[outPropVariant.f_2]=func_91(iParam1, outPropVariant, 14, num);
elseif(outPropVariant.f_1 !=-1) uParam0->[outPropVariant.f_2]=outPropVariant.f_1;
}}}
return;
}

int func_91(int iParam0, Hash hParam1, int iParam2, int iParam3) // Position - 0x47FD{
var unk;
Ped i;
Ped ped;
int shopPedQueryPropIndex;
int shopPedQueryComponentIndex;
if(iParam2==12){
ped=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
for (i=0;
i < ped;
i=i + 1){
PED::APPLY_PED_BLOOD_BY_ZONE(i, &unk);
if(unk.f_1==hParam1) return func_95(iParam0) + i;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
shopPedQueryPropIndex=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(hParam1);
if(shopPedQueryPropIndex !=-1) return func_94(iParam0) + shopPedQueryPropIndex;
}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_93(iParam2));
shopPedQueryComponentIndex=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(hParam1);
if(shopPedQueryComponentIndex !=-1) return func_92(iParam0, func_93(iParam2)) + shopPedQueryComponentIndex;
}
return -99;
}

int func_92(int iParam0, int iParam1) // Position - 0x48B8{
switch (iParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 0:
return 7;
case 1:
return 5;
case 2:
return 6;
case 3:
return 181;
case 4:
return 113;
case 5:
return 14;
case 6:
return 99;
case 7:
return 1;
case 8:
return 24;
case 9:
return 20;
case 10:
return 48;
case 11:
return 45;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
return 10;
case 1:
return 5;
case 2:
return 21;
case 3:
return 318;
case 4:
return 117;
case 5:
return 7;
case 6:
return 134;
case 7:
return 1;
case 8:
return 77;
case 9:
return 12;
case 10:
return 53;
case 11:
return 63;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
return 7;
case 1:
return 6;
case 2:
return 9;
case 3:
return 242;
case 4:
return 104;
case 5:
return 7;
case 6:
return 84;
case 7:
return 1;
case 8:
return 18;
case 9:
return 17;
case 10:
return 33;
case 11:
return 1;
}
break;
}
switch (iParam0){
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
return 0;
case 1:
return 26;
case 2:
return 91;
case 3:
return 16;
case 4:
return 256;
case 5:
return 9;
case 6:
return 256;
case 7:
return 92;
case 8:
return 241;
case 9:
return 46;
case 10:
return 7;
case 11:
return 237;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
return 0;
case 1:
return 26;
case 2:
return 92;
case 3:
return 16;
case 4:
return 256;
case 5:
return 9;
case 6:
return 256;
case 7:
return 55;
case 8:
return 136;
case 9:
return 36;
case 10:
return 6;
case 11:
return 256;
}
break;
}
return -99;
}

int func_93(int iParam0) // Position - 0x4C5F{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}

int func_94(int iParam0) // Position - 0x4D0F{
switch (iParam0){
case joaat("Player_Zero"):
return 113;
case joaat("Player_One"):
return 175;
case joaat("Player_Two"):
return 155;
}
switch (iParam0){
case joaat("MP_M_Freemode_01"):
return 327;
case joaat("MP_F_Freemode_01"):
return 327;
}
return -99;
}

int func_95(int iParam0) // Position - 0x4D70{
switch (iParam0){
case joaat("Player_Zero"):
return 53;
case joaat("Player_One"):
return 47;
case joaat("Player_Two"):
return 48;
}
switch (iParam0){
case joaat("MP_M_Freemode_01"):
return 26;
case joaat("MP_F_Freemode_01"):
return 28;
}
return -99;
}


void func_96(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x4DCF{
uParam0->[0]=iParam1;
uParam0->[1]=iParam2;
uParam0->[2]=iParam3;
uParam0->[3]=iParam4;
uParam0->[4]=iParam5;
uParam0->[5]=iParam6;
uParam0->[6]=iParam7;
uParam0->[7]=iParam8;
uParam0->[8]=iParam9;
return;
}
struct<17> func_97(int iParam0, int iParam1) // Position - 0x4E17{
int i;
var unk;
unk=15;
for (i=0;
i <=14;
i=i + 1){
unk[i]=-99;
}
unk.f_16=0;
switch (iParam0){
case joaat("Player_Zero"):
switch (iParam1){
case 0:
if(Global_113648.f_9087.f_99.f_58[120]) func_100(&unk, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
else func_100(&unk, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_100(&unk, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_100(&unk, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_100(&unk, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_100(&unk, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_100(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[0], Global_113648.f_2365.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_100(&unk, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_100(&unk, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_100(&unk, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_100(&unk, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_100(&unk, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_100(&unk, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&unk, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&unk, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_100(&unk, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_100(&unk, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&unk, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&unk, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_100(&unk, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&unk, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&unk, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_100(&unk, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_100(&unk, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_100(&unk, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_100(&unk, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_100(&unk, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_100(&unk, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_100(&unk, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_100(&unk, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_100(&unk, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_100(&unk, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_100(&unk, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_100(&unk, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_100(&unk, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_100(&unk, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_100(&unk, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_100(&unk, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_100(&unk, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&unk, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&unk, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&unk, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&unk, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&unk, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_100(&unk, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_100(&unk, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_100(&unk, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_100(&unk, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_100(&unk, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_100(&unk, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_100(&unk, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_100(&unk, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_100(&unk, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_98(&unk, iParam0, iParam1, 53);
break;
}
break;
case joaat("Player_One"):
switch (iParam1){
case 0:
func_100(&unk, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_100(&unk, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_100(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[1], Global_113648.f_2365.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_100(&unk, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_100(&unk, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_100(&unk, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_100(&unk, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_100(&unk, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_100(&unk, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_100(&unk, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&unk, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_100(&unk, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_100(&unk, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&unk, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&unk, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_100(&unk, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_100(&unk, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&unk, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&unk, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_100(&unk, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&unk, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&unk, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_100(&unk, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_100(&unk, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_100(&unk, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_100(&unk, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_100(&unk, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_100(&unk, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_100(&unk, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_100(&unk, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_100(&unk, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_100(&unk, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_100(&unk, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_100(&unk, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_100(&unk, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_100(&unk, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_100(&unk, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_100(&unk, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_100(&unk, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&unk, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&unk, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&unk, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&unk, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&unk, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_100(&unk, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_100(&unk, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_100(&unk, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_98(&unk, iParam0, iParam1, 47);
break;
}
break;
case joaat("Player_Two"):
switch (iParam1){
case 0:
func_100(&unk, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_100(&unk, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_100(&unk, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_100(&unk, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_100(&unk, -99, -99, Global_113648.f_2365.f_539.f_196[2], Global_113648.f_2365.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_100(&unk, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_100(&unk, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_100(&unk, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_100(&unk, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_100(&unk, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&unk, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_100(&unk, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_100(&unk, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&unk, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&unk, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_100(&unk, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_100(&unk, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&unk, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&unk, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_100(&unk, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&unk, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&unk, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_100(&unk, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_100(&unk, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_100(&unk, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_100(&unk, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_100(&unk, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_100(&unk, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_100(&unk, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_100(&unk, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_100(&unk, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_100(&unk, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_100(&unk, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_100(&unk, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_100(&unk, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_100(&unk, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_100(&unk, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_100(&unk, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_100(&unk, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&unk, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&unk, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&unk, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&unk, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&unk, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_100(&unk, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_100(&unk, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_100(&unk, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_100(&unk, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_98(&unk, iParam0, iParam1, 48);
break;
}
break;
case joaat("MP_M_Freemode_01"):
switch (iParam1){
case 0:
func_100(&unk, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_100(&unk, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_100(&unk, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_100(&unk, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_100(&unk, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_100(&unk, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_100(&unk, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_100(&unk, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_100(&unk, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_100(&unk, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_100(&unk, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_100(&unk, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_100(&unk, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_100(&unk, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_100(&unk, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_100(&unk, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_100(&unk, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_100(&unk, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_100(&unk, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_100(&unk, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_100(&unk, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_100(&unk, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_100(&unk, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_100(&unk, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_100(&unk, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_100(&unk, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_98(&unk, iParam0, iParam1, 26);
break;
}
break;
case joaat("MP_F_Freemode_01"):
switch (iParam1){
case 0:
func_100(&unk, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_100(&unk, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_100(&unk, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_100(&unk, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_100(&unk, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_100(&unk, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_100(&unk, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_100(&unk, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_100(&unk, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_100(&unk, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_100(&unk, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_100(&unk, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_100(&unk, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_100(&unk, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_100(&unk, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_100(&unk, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_100(&unk, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_100(&unk, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_100(&unk, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_100(&unk, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_100(&unk, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_100(&unk, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_100(&unk, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_100(&unk, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_100(&unk, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_100(&unk, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_100(&unk, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_100(&unk, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_98(&unk, iParam0, iParam1, 28);
break;
}
break;
}
return unk;
}


void func_98(var uParam0, int iParam1, int iParam2, int iParam3) // Position - 0x6C5F{
int num;
Hash itemHash;
Hash outComponentVariant;
var outComponent;
int i;
uParam0->[0]=0;
uParam0->[2]=-99;
uParam0->[3]=0;
uParam0->[4]=0;
uParam0->[6]=0;
uParam0->[5]=0;
uParam0->[8]=0;
uParam0->[9]=0;
uParam0->[10]=0;
uParam0->[1]=0;
uParam0->[7]=0;
uParam0->[11]=0;
uParam0->[13]=-99;
uParam0->[14]=-99;
uParam0->f_16=0;
num=0;
if(iParam1==joaat("Player_Zero")){
num=0;
uParam0->[13]=10 + (iParam2 - iParam3);
}elseif(iParam1==joaat("Player_One")){
num=1;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(iParam1==joaat("Player_Two")){
num=2;
uParam0->[13]=9 + (iParam2 - iParam3);
}elseif(iParam1==joaat("MP_M_Freemode_01")){
num=3;
}elseif(iParam1==joaat("MP_F_Freemode_01")){
num=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num, false);
PED::APPLY_PED_BLOOD_BY_ZONE(iParam2 - iParam3, &itemHash);
if(!FILES::IS_CONTENT_ITEM_LOCKED(itemHash)){
for (i=0;
i < itemHash.f_4;
i=i + 1){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(itemHash.f_1, i, &outComponentVariant)){
if(outComponentVariant !=0 && outComponentVariant !=-1 && outComponentVariant !=joaat("0")){
if(outComponentVariant.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
FILES::GET_SHOP_PED_COMPONENT(outComponentVariant, &outComponent);
if(outComponentVariant !=outComponent.f_1) uParam0->f_16=1;
}
if(outComponentVariant.f_2==10 && uParam0->f_16){
uParam0->[func_99(outComponentVariant.f_2)]=outComponentVariant;
uParam0->f_16=1;
}else{
uParam0->[func_99(outComponentVariant.f_2)]=func_91(iParam1, outComponentVariant, func_99(outComponentVariant.f_2), num);
}}elseif(outComponentVariant.f_1 !=-1){
uParam0->[func_99(outComponentVariant.f_2)]=outComponentVariant.f_1;
}}}
if(itemHash.f_3==0) uParam0->[13]=-99;
else uParam0->[13]=itemHash.f_1;
}
return;
}

int func_99(int iParam0) // Position - 0x6E49{
switch (iParam0){
case 0:
return 0;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 6:
return 6;
case 5:
return 5;
case 8:
return 8;
case 9:
return 9;
case 10:
return 10;
case 1:
return 1;
case 7:
return 7;
case 11:
return 11;
}
return 0;
}


void func_100(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13) // Position - 0x6EF9{
uParam0->[0]=iParam1;
uParam0->[2]=iParam2;
uParam0->[3]=iParam3;
uParam0->[4]=iParam4;
uParam0->[6]=iParam5;
uParam0->[5]=iParam6;
uParam0->[8]=iParam7;
uParam0->[9]=iParam8;
uParam0->[10]=iParam9;
uParam0->[1]=iParam10;
uParam0->[7]=iParam11;
uParam0->[11]=iParam12;
uParam0->[13]=iParam13;
uParam0->[14]=-99;
return;
}
BOOL func_101(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6F6A{
if(iParam0==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/][iParam3], iParam4);
}elseif(iParam0==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_4[iParam3], iParam4);
}elseif(iParam0==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_8[iParam3], iParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_12[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_16[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_20[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_24[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_28[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_32[iParam3], iParam4);
}elseif(iParam2==6){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_36[iParam3], iParam4);
}elseif(iParam2==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_40[iParam3], iParam4);
}elseif(iParam2==8){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_44[iParam3], iParam4);
}elseif(iParam2==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_48[iParam3], iParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_52[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_56[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_60[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_64[iParam3], iParam4);
}}elseif(iParam0==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_68[iParam3], iParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_72[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_76[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_80[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_84[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_88[iParam3], iParam4);
}}elseif(iParam0==7){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_92[iParam3], iParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_96[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_100[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_104[iParam3], iParam4);
}}elseif(iParam0==9){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_108[iParam3], iParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_112[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_116[iParam3], iParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_120[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_124[iParam3], iParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_128[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_132[iParam3], iParam4);
}}elseif(iParam0==13){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_136[iParam3], iParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_140[iParam3], iParam4);
}elseif(iParam2==1){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_144[iParam3], iParam4);
}elseif(iParam2==2){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_148[iParam3], iParam4);
}elseif(iParam2==3){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_152[iParam3], iParam4);
}elseif(iParam2==4){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_156[iParam3], iParam4);
}elseif(iParam2==5){
if(iParam5==1) MISC::SET_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
if(iParam6==1) MISC::CLEAR_BIT(&Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
return IS_BIT_SET(Global_113648.f_2365[iParam1 /*164*/].f_160[iParam3], iParam4);
}}
return false;
}
struct<14> func_102(Hash hParam0, int iParam1, int iParam2, int iParam3) // Position - 0x7E0D{
func_166();
if(hParam0==joaat("Player_Zero")) func_148(iParam1, iParam2);
elseif(hParam0==joaat("Player_One")) func_129(iParam1, iParam2);
elseif(hParam0==joaat("Player_Two")) func_103(iParam1, iParam2);
return Global_78341[0 /*14*/];
}


void func_103(int iParam0, int iParam1) // Position - 0x7E5F{
switch (iParam0){
case 0:
func_128(iParam1);
break;
case 2:
func_127(iParam1);
break;
case 3:
func_124(iParam1);
break;
case 4:
func_123(iParam1);
break;
case 6:
func_122(iParam1);
break;
case 5:
func_121(iParam1);
break;
case 8:
func_120(iParam1);
break;
case 9:
func_119(iParam1);
break;
case 10:
func_118(iParam1);
break;
case 1:
func_117(iParam1);
break;
case 7:
func_116(iParam1);
break;
case 11:
func_115(iParam1);
break;
case 12:
func_114(iParam1);
break;
case 13:
func_113(iParam1);
break;
case 14:
func_104(iParam1);
break;
}
return;
}


void func_104(int iParam0) // Position - 0x7F4F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E1" /*Specs Pest Shades*/, 16);
num2=1;
num3=0;
num=45;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2" /*Dix Charcoal Glasses*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_1" /*Dix Brown Glasses*/, 16);
num2=2;
num3=1;
num=50;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_2" /*Dix Black Glasses*/, 16);
num2=2;
num3=2;
num=55;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_3" /*Dix Checked Glasses*/, 16);
num2=2;
num3=3;
num=52;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_4" /*Dix White Glasses*/, 16);
num2=2;
num3=4;
num=54;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_5" /*Dix Red Glasses*/, 16);
num2=2;
num3=5;
num=54;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_6" /*Dix Maroon Glasses*/, 16);
num2=2;
num3=6;
num=55;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_7" /*Dix Yellow Glasses*/, 16);
num2=2;
num3=7;
num=55;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_8" /*Dix Spring Glasses*/, 16);
num2=2;
num3=8;
num=58;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E2_9" /*Dix Fall Glasses*/, 16);
num2=2;
num3=9;
num=58;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3" /*Tung Charcoal Shades*/, 16);
num2=3;
num3=0;
num=75;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_1" /*Tung White Shades*/, 16);
num2=3;
num3=1;
num=75;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_2" /*Tung Ash Shades*/, 16);
num2=3;
num3=2;
num=75;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_3" /*Tung Red Shades*/, 16);
num2=3;
num3=3;
num=75;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_4" /*Tung Blue Shades*/, 16);
num2=3;
num3=4;
num=75;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_5" /*Tung Black Shades*/, 16);
num2=3;
num3=5;
num=75;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_6" /*Tung Orange Tint Shades*/, 16);
num2=3;
num3=6;
num=75;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_7" /*Tung Purple Tint Shades*/, 16);
num2=3;
num3=7;
num=75;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_8" /*Tung Hornet Shades*/, 16);
num2=3;
num3=8;
num=75;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E3_9" /*Tung Two-Tone Shades*/, 16);
num2=3;
num3=9;
num=75;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_0" /*OG Black Shades*/, 16);
num2=7;
num3=0;
num=60;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_1" /*OG Ash Shades*/, 16);
num2=7;
num3=1;
num=50;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_2" /*OG Red Shades*/, 16);
num2=7;
num3=2;
num=50;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_3" /*OG Yellow Shades*/, 16);
num2=7;
num3=3;
num=59;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_4" /*OG Brown Shades*/, 16);
num2=7;
num3=4;
num=55;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_5" /*OG Gray Shades*/, 16);
num2=7;
num3=5;
num=55;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_6" /*OG Blue Shades*/, 16);
num2=7;
num3=6;
num=65;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_7" /*OG Smoke Shades*/, 16);
num2=7;
num3=7;
num=59;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_8" /*OG Orange Shades*/, 16);
num2=7;
num3=8;
num=79;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E7_9" /*OG Slate Shades*/, 16);
num2=7;
num3=9;
num=79;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_0" /*Steel Aviators*/, 16);
num2=8;
num3=0;
num=150;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_1" /*Slate Aviators*/, 16);
num2=8;
num3=1;
num=150;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_2" /*Gold Aviators*/, 16);
num2=8;
num3=2;
num=170;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_3" /*Silver Two-Tone Aviators*/, 16);
num2=8;
num3=3;
num=175;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_4" /*Aluminum Aviators*/, 16);
num2=8;
num3=4;
num=180;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_5" /*Bronze Two-Tone Aviators*/, 16);
num2=8;
num3=5;
num=185;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_6" /*Brown Two-Tone Aviators*/, 16);
num2=8;
num3=6;
num=189;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_7" /*Black Aviators*/, 16);
num2=8;
num3=7;
num=195;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_8" /*Silver Aviators*/, 16);
num2=8;
num3=8;
num=210;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E8_9" /*Smoke Aviators*/, 16);
num2=8;
num3=9;
num=215;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_0" /*Krepp Gold Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_1" /*Krepp Gray Shades*/, 16);
num2=9;
num3=1;
num=165;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_2" /*Krepp Slate Shades*/, 16);
num2=9;
num3=2;
num=169;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_3" /*Krepp Black Shades*/, 16);
num2=9;
num3=3;
num=169;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_4" /*Krepp White Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_5" /*Krepp Silver Shades*/, 16);
num2=9;
num3=5;
num=175;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_6" /*Krepp Ash Shades*/, 16);
num2=9;
num3=6;
num=175;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_7" /*Krepp Brown Shades*/, 16);
num2=9;
num3=7;
num=189;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_8" /*Krepp Beige Shades*/, 16);
num2=9;
num3=8;
num=195;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E9_9" /*Krepp Coffee Shades*/, 16);
num2=9;
num3=9;
num=195;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_0" /*Broker Black Shades*/, 16);
num2=10;
num3=0;
num=49;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_1" /*Broker Purple Shades*/, 16);
num2=10;
num3=1;
num=50;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_2" /*Broker Brown Shades*/, 16);
num2=10;
num3=2;
num=52;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_3" /*Broker Orange Shades*/, 16);
num2=10;
num3=3;
num=55;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_4" /*Broker Gray Shades*/, 16);
num2=10;
num3=4;
num=60;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_5" /*Broker Striped Shades*/, 16);
num2=10;
num3=5;
num=58;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_6" /*Broker Beige Shades*/, 16);
num2=10;
num3=6;
num=60;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_7" /*Broker Ash Shades*/, 16);
num2=10;
num3=7;
num=63;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_8" /*Broker Charcoal Shades*/, 16);
num2=10;
num3=8;
num=65;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_E10_9" /*Broker Gradient Shades*/, 16);
num2=10;
num3=9;
num=68;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H2_0" /*Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_0" /*Black Hat*/, 16);
num2=7;
num3=0;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P2_H7_1", 16);
num2=7;
num3=1;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=7;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=8;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=9;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=10;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=11;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=12;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=13;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=14;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=15;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_0" /*Hawk and Little Baseball Cap*/, 16);
num2=26;
num3=0;
num=20;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_1" /*Taco Bomb Baseball Cap*/, 16);
num2=26;
num3=1;
num=25;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_2" /*Nut House Baseball Cap*/, 16);
num2=26;
num3=2;
num=25;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_3" /*Rusty Brown's Baseball Cap*/, 16);
num2=26;
num3=3;
num=22;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_4" /*Bishop's Chicken Baseball Cap*/, 16);
num2=26;
num3=4;
num=20;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_5" /*24/7 Baseball Cap*/, 16);
num2=26;
num3=5;
num=25;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_6" /*iFruit 80s Baseball Cap*/, 16);
num2=26;
num3=6;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_7" /*Blarneys Baseball Cap*/, 16);
num2=26;
num3=7;
num=24;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_8" /*Pisswasser Baseball Cap*/, 16);
num2=26;
num3=8;
num=25;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_9" /*RON Baseball Cap*/, 16);
num2=26;
num3=9;
num=22;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_10" /*Logger Light Baseball Cap*/, 16);
num2=26;
num3=10;
num=18;
num4=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_11" /*Meteorite Baseball Cap*/, 16);
num2=26;
num3=11;
num=20;
num4=0;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_12" /*Dusche Gold Baseball Cap*/, 16);
num2=26;
num3=12;
num=24;
num4=0;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_13" /*Barracho Baseball Cap*/, 16);
num2=26;
num3=13;
num=22;
num4=0;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_14" /*Vespucci Beach Baseball Cap*/, 16);
num2=26;
num3=14;
num=25;
num4=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H26_15" /*Orang-O-Tang Baseball Cap*/, 16);
num2=26;
num3=15;
num=25;
num4=0;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
default:
func_112(num6, iParam0, 155, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_105(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, BOOL bParam7, int iParam8, int iParam9, BOOL bParam10) // Position - 0x924F{
int num;
eMPStat stat;
iParam0->f_6=0;
*iParam0=iParam9;
iParam0->f_1=iParam2 % 32;
iParam0->f_2=iParam2 / 32;
iParam0->f_3=iParam4;
iParam0->f_4=iParam5;
iParam0->f_7=iParam6;
TEXT_LABEL_ASSIGN_STRING(&(iParam0->f_8), sParam3, 16);
iParam0->f_13=iParam8;
iParam0->f_12=func_111(iParam8);
if(iParam0->f_2 >=10 && iParam0->f_5 >=0 && iParam0->f_5 < 3){
!bParam10;
iParam0->f_2=0;
}
MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL");
if(bParam7) MISC::SET_BIT(&(iParam0->f_6), 3);
if(bParam10){
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam0->f_5 >=0 && iParam0->f_5 < 3) MISC::SET_BIT(&(iParam0->f_6), 5);
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
MISC::SET_BIT(&(iParam0->f_6), 6);
if(func_59(14)) return;
if(iParam1==1)if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)) MISC::SET_BIT(&(iParam0->f_6), 7);
if(iParam1==12){
if(!func_109(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_109(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_109(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_109(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
if(!func_109(Global_2883588, 1, true, true, -1)) MISC::CLEAR_BIT(&(iParam0->f_6), 2);
if(!func_109(Global_2883588, 2, true, true, -1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(iParam0->f_6), 1);
MISC::CLEAR_BIT(&(iParam0->f_6), 0);
}}elseif(iParam0->f_5 >=0 && iParam0->f_5 < 3){
MISC::SET_BIT(&(iParam0->f_6), 0);
MISC::SET_BIT(&(iParam0->f_6), 5);
if(func_101(iParam1, iParam0->f_5, iParam0->f_2, 0, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 1);
if(func_101(iParam1, iParam0->f_5, iParam0->f_2, 1, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(!func_101(iParam1, iParam0->f_5, iParam0->f_2, 2, iParam0->f_1, 0, 0)) MISC::SET_BIT(&(iParam0->f_6), 4);
}else{
MISC::SET_BIT(&(iParam0->f_6), 0);
if(iParam1==11 || iParam1==4 || iParam1==6 || iParam1==1 || iParam1==14 || iParam1==2 || iParam1==8 || iParam1==9 || iParam1==10 || iParam1==7 || iParam1==12){
if(func_59(14)) return;
num=_MPCHAR_STAT_GET_INT(func_108(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 1);
num=_MPCHAR_STAT_GET_INT(func_107(iParam1, iParam0->f_2), Global_78338, 0);
if(IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 2);
if(func_106(iParam1, iParam0->f_2, &stat)){
num=_MPCHAR_STAT_GET_INT(stat, Global_78338, 0);
if(!IS_BIT_SET(num, iParam0->f_1)) MISC::SET_BIT(&(iParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(iParam0->f_6), 1);
MISC::SET_BIT(&(iParam0->f_6), 2);
}}
return;
}
BOOL func_106(int iParam0, int iParam1, var uParam2) // Position - 0x95F4{
*uParam2=979;
switch (iParam1){
case 0:
switch (iParam0){
case 2:
*uParam2=980;
break;
case 3:
*uParam2=1430;
break;
case 4:
*uParam2=996;
break;
case 6:
*uParam2=1004;
break;
case 8:
*uParam2=1431;
break;
case 9:
*uParam2=1439;
break;
case 10:
*uParam2=1441;
break;
case 1:
*uParam2=1012;
break;
case 7:
*uParam2=1442;
break;
case 11:
*uParam2=988;
break;
case 14:
*uParam2=1020;
break;
case 12:
*uParam2=1031;
break;
}
break;
case 1:
switch (iParam0){
case 2:
*uParam2=981;
break;
case 4:
*uParam2=997;
break;
case 6:
*uParam2=1005;
break;
case 8:
*uParam2=1432;
break;
case 9:
*uParam2=1440;
break;
case 7:
*uParam2=1443;
break;
case 11:
*uParam2=989;
break;
case 14:
*uParam2=1021;
break;
}
break;
case 2:
switch (iParam0){
case 2:
*uParam2=982;
break;
case 4:
*uParam2=998;
break;
case 6:
*uParam2=1006;
break;
case 8:
*uParam2=1433;
break;
case 7:
*uParam2=1444;
break;
case 11:
*uParam2=990;
break;
case 14:
*uParam2=1022;
break;
}
break;
case 3:
switch (iParam0){
case 4:
*uParam2=999;
break;
case 6:
*uParam2=1007;
break;
case 8:
*uParam2=1434;
break;
case 11:
*uParam2=991;
break;
case 14:
*uParam2=1023;
break;
}
break;
case 4:
switch (iParam0){
case 4:
*uParam2=1000;
break;
case 6:
*uParam2=1008;
break;
case 8:
*uParam2=1435;
break;
case 11:
*uParam2=992;
break;
case 14:
*uParam2=1024;
break;
}
break;
case 5:
switch (iParam0){
case 4:
*uParam2=1001;
break;
case 6:
*uParam2=1009;
break;
case 8:
*uParam2=1436;
break;
case 11:
*uParam2=993;
break;
case 14:
*uParam2=1025;
break;
}
break;
case 6:
switch (iParam0){
case 4:
*uParam2=1002;
break;
case 6:
*uParam2=1010;
break;
case 8:
*uParam2=1437;
break;
case 11:
*uParam2=994;
break;
case 14:
*uParam2=1026;
break;
}
break;
case 7:
switch (iParam0){
case 4:
*uParam2=1003;
break;
case 6:
*uParam2=1011;
break;
case 8:
*uParam2=1438;
break;
case 11:
*uParam2=995;
break;
case 14:
*uParam2=1027;
break;
}
break;
case 8:
switch (iParam0){
case 14:
*uParam2=1028;
break;
}
break;
case 9:
switch (iParam0){
case 14:
*uParam2=1029;
break;
}
break;
case 10:
switch (iParam0){
case 14:
*uParam2=1030;
break;
}
break;
}
return *uParam2 !=979;
}
eMPStat func_107(int iParam0, int iParam1) // Position - 0x99F9{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR;
case 3:
return MP_STAT_CLTHS_ACQUIRED_TORSO;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2;
case 10:
return MP_STAT_CLTHS_ACQUIRED_DECL;
case 1:
return MP_STAT_CLTHS_ACQUIRED_BERD;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS;
case 12:
return MP_STAT_CLTHS_ACQUIRED_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_1;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_1;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_1;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_1;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_1;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_ACQUIRED_HAIR_2;
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_2;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_2;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_ACQUIRED_TEETH_2;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_2;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_3;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_3;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_3;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_4;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_4;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_4;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_5;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_5;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_5;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_6;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_6;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_6;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_ACQUIRED_LEGS_7;
case 6:
return MP_STAT_CLTHS_ACQUIRED_FEET_7;
case 8:
return MP_STAT_CLTHS_ACQUIRED_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_ACQUIRED_JBIB_7;
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_ACQUIRED_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_ACQUIRED_JBIB;
}
eMPStat func_108(int iParam0, int iParam1) // Position - 0x9DF4{
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR;
case 3:
return MP_STAT_CLTHS_AVAILABLE_TORSO;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2;
case 10:
return MP_STAT_CLTHS_AVAILABLE_DECL;
case 1:
return MP_STAT_CLTHS_AVAILABLE_BERD;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS;
case 12:
return MP_STAT_CLTHS_AVAILABLE_OUTFIT;
}
break;
case 1:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_1;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_1;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_1;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_1;
case 9:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL2_1;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_1;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_1;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_1;
}
break;
case 2:
switch (iParam0){
case 2:
return MP_STAT_CLTHS_AVAILABLE_HAIR_2;
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_2;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_2;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_2;
case 7:
return MP_STAT_CLTHS_AVAILABLE_TEETH_2;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_2;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_2;
}
break;
case 3:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_3;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_3;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_3;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_3;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_3;
}
break;
case 4:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_4;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_4;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_4;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_4;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_4;
}
break;
case 5:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_5;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_5;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_5;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_5;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_5;
}
break;
case 6:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_6;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_6;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_6;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_6;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_6;
}
break;
case 7:
switch (iParam0){
case 4:
return MP_STAT_CLTHS_AVAILABLE_LEGS_7;
case 6:
return MP_STAT_CLTHS_AVAILABLE_FEET_7;
case 8:
return MP_STAT_CLTHS_AVAILABLE_SPECIAL_7;
case 11:
return MP_STAT_CLTHS_AVAILABLE_JBIB_7;
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_7;
}
break;
case 8:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_8;
}
break;
case 9:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_9;
}
break;
case 10:
switch (iParam0){
case 14:
return MP_STAT_CLTHS_AVAILABLE_PROPS_10;
}
break;
}
return MP_STAT_CLTHS_AVAILABLE_JBIB;
}
BOOL func_109(Hash hParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0xA1EF{
int num;
int num2;
eMPStat stat;
int num3;
num=Global_78338;
if(iParam4 !=-1) num=iParam4;
if(func_110(hParam0, iParam1, &stat, &num2, bParam2, bParam3)){
num3=_MPCHAR_STAT_GET_INT(stat, num, 0);
return IS_BIT_SET(num3, num2);
}
return false;
}
BOOL func_110(Hash hParam0, int iParam1, var uParam2, var uParam3, BOOL bParam4, BOOL bParam5) // Position - 0xA22E{
int fmMaleShopPedApparelItemIndex;
*uParam2=14192;
if(bParam4 && Global_4539485 || !bParam4 && bParam5){
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return true;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}else{
switch (iParam1){
case 1:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return true;
}
break;
case 2:
switch (hParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return true;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return true;
}
break;
}}
fmMaleShopPedApparelItemIndex=-1;
if(bParam4)if(Global_4539485) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
elseif(bParam5) fmMaleShopPedApparelItemIndex=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
else fmMaleShopPedApparelItemIndex=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(hParam0);
if(fmMaleShopPedApparelItemIndex==-1) return false;
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1761;
break;
case 1:
*uParam2=1762;
break;
case 2:
*uParam2=1763;
break;
case 3:
*uParam2=1764;
break;
case 4:
*uParam2=1765;
break;
case 5:
*uParam2=1766;
break;
case 6:
*uParam2=1773;
break;
case 7:
*uParam2=1774;
break;
case 8:
*uParam2=1775;
break;
case 9:
*uParam2=1776;
break;
case 10:
*uParam2=1777;
break;
case 11:
*uParam2=1778;
break;
case 12:
*uParam2=1779;
break;
case 13:
*uParam2=1787;
break;
case 14:
*uParam2=1788;
break;
case 15:
*uParam2=1889;
break;
case 16:
*uParam2=1890;
break;
case 17:
*uParam2=1921;
break;
case 18:
*uParam2=1935;
break;
case 19:
*uParam2=1936;
break;
case 20:
*uParam2=1937;
break;
case 21:
*uParam2=1938;
break;
case 22:
*uParam2=1939;
break;
case 23:
*uParam2=2043;
break;
case 24:
*uParam2=2044;
break;
case 25:
*uParam2=2070;
break;
case 26:
*uParam2=2071;
break;
case 27:
*uParam2=2072;
break;
case 28:
*uParam2=2073;
break;
case 29:
*uParam2=2074;
break;
case 30:
*uParam2=2075;
break;
case 31:
*uParam2=2076;
break;
case 32:
*uParam2=2077;
break;
case 33:
*uParam2=2078;
break;
case 34:
*uParam2=2079;
break;
case 35:
*uParam2=2326;
break;
case 36:
*uParam2=2327;
break;
case 37:
*uParam2=2391;
break;
case 38:
*uParam2=2392;
break;
case 39:
*uParam2=2393;
break;
case 40:
*uParam2=2394;
break;
case 41:
*uParam2=2453;
break;
case 42:
*uParam2=2454;
break;
case 43:
*uParam2=2455;
break;
case 44:
*uParam2=2456;
break;
case 45:
*uParam2=2457;
break;
case 46:
*uParam2=2458;
break;
case 47:
*uParam2=2459;
break;
case 48:
*uParam2=2460;
break;
case 49:
*uParam2=2461;
break;
case 50:
*uParam2=2462;
break;
case 51:
*uParam2=2592;
break;
case 52:
*uParam2=2593;
break;
case 53:
*uParam2=2594;
break;
case 54:
*uParam2=2595;
break;
case 55:
*uParam2=2596;
break;
case 56:
*uParam2=2597;
break;
case 57:
*uParam2=2598;
break;
case 58:
*uParam2=2599;
break;
case 59:
*uParam2=2600;
break;
case 60:
*uParam2=2601;
break;
case 61:
*uParam2=2602;
break;
case 62:
*uParam2=3199;
break;
case 63:
*uParam2=3200;
break;
case 64:
*uParam2=3201;
break;
case 65:
*uParam2=3202;
break;
case 66:
*uParam2=3203;
break;
case 67:
*uParam2=3204;
break;
case 68:
*uParam2=3672;
break;
case 69:
*uParam2=3673;
break;
case 70:
*uParam2=3674;
break;
case 71:
*uParam2=3675;
break;
case 72:
*uParam2=3676;
break;
case 73:
*uParam2=3677;
break;
case 74:
*uParam2=3678;
break;
case 75:
*uParam2=3679;
break;
case 76:
*uParam2=3680;
break;
case 77:
*uParam2=3681;
break;
case 78:
*uParam2=3795;
break;
case 79:
*uParam2=3796;
break;
case 80:
*uParam2=3797;
break;
case 81:
*uParam2=3798;
break;
case 82:
*uParam2=3799;
break;
case 83:
*uParam2=3800;
break;
case 84:
*uParam2=3801;
break;
case 85:
*uParam2=3802;
break;
case 86:
*uParam2=3905;
break;
case 87:
*uParam2=3906;
break;
case 88:
*uParam2=3907;
break;
case 89:
*uParam2=5340;
break;
case 90:
*uParam2=5341;
break;
case 91:
*uParam2=5342;
break;
case 92:
*uParam2=5343;
break;
case 93:
*uParam2=5344;
break;
case 94:
*uParam2=5345;
break;
case 95:
*uParam2=5346;
break;
case 96:
*uParam2=5347;
break;
case 97:
*uParam2=5348;
break;
case 98:
*uParam2=5349;
break;
case 99:
*uParam2=5350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5351;
break;
case 101:
*uParam2=5397;
break;
case 102:
*uParam2=5398;
break;
case 103:
*uParam2=5399;
break;
case 104:
*uParam2=5400;
break;
case 105:
*uParam2=5401;
break;
case 106:
*uParam2=5402;
break;
case 107:
*uParam2=5403;
break;
case 108:
*uParam2=5404;
break;
case 109:
*uParam2=5405;
break;
case 110:
*uParam2=5406;
break;
case 111:
*uParam2=5407;
break;
case 112:
*uParam2=5408;
break;
case 113:
*uParam2=5409;
break;
case 114:
*uParam2=5410;
break;
case 115:
*uParam2=5411;
break;
case 116:
*uParam2=5412;
break;
case 117:
*uParam2=5413;
break;
case 118:
*uParam2=5414;
break;
case 119:
*uParam2=5415;
break;
case 120:
*uParam2=5416;
break;
case 121:
*uParam2=5417;
break;
case 122:
*uParam2=5418;
break;
case 123:
*uParam2=5419;
break;
case 124:
*uParam2=6125;
break;
case 125:
*uParam2=6126;
break;
case 126:
*uParam2=6127;
break;
case 127:
*uParam2=6128;
break;
case 128:
*uParam2=6129;
break;
case 129:
*uParam2=6130;
break;
case 130:
*uParam2=6131;
break;
case 131:
*uParam2=6132;
break;
case 132:
*uParam2=6133;
break;
case 133:
*uParam2=6134;
break;
case 134:
*uParam2=6135;
break;
case 135:
*uParam2=6136;
break;
case 136:
*uParam2=6137;
break;
case 137:
*uParam2=6138;
break;
case 138:
*uParam2=6139;
break;
case 139:
*uParam2=6438;
break;
case 140:
*uParam2=6439;
break;
case 141:
*uParam2=6440;
break;
case 142:
*uParam2=6441;
break;
case 143:
*uParam2=6442;
break;
case 144:
*uParam2=6443;
break;
case 145:
*uParam2=6444;
break;
case 146:
*uParam2=6445;
break;
case 147:
*uParam2=6446;
break;
case 148:
*uParam2=6447;
break;
case 149:
*uParam2=6448;
break;
case 150:
*uParam2=6449;
break;
case 151:
*uParam2=6450;
break;
case 152:
*uParam2=6451;
break;
case 153:
*uParam2=6452;
break;
case 154:
*uParam2=7269;
break;
case 155:
*uParam2=7270;
break;
case 156:
*uParam2=7271;
break;
case 157:
*uParam2=7272;
break;
case 158:
*uParam2=7273;
break;
case 159:
*uParam2=7274;
break;
case 160:
*uParam2=7275;
break;
case 161:
*uParam2=7882;
break;
case 162:
*uParam2=7883;
break;
case 163:
*uParam2=7884;
break;
case 164:
*uParam2=7885;
break;
case 165:
*uParam2=7886;
break;
case 166:
*uParam2=7887;
break;
case 167:
*uParam2=7888;
break;
case 168:
*uParam2=7889;
break;
case 169:
*uParam2=7890;
break;
case 170:
*uParam2=7891;
break;
case 171:
*uParam2=7892;
break;
case 172:
*uParam2=7893;
break;
case 173:
*uParam2=7894;
break;
case 174:
*uParam2=7895;
break;
case 175:
*uParam2=7896;
break;
case 176:
*uParam2=8302;
break;
case 177:
*uParam2=8303;
break;
case 178:
*uParam2=8304;
break;
case 179:
*uParam2=8305;
break;
case 180:
*uParam2=8306;
break;
case 181:
*uParam2=8307;
break;
case 182:
*uParam2=8308;
break;
case 183:
*uParam2=8309;
break;
case 184:
*uParam2=8310;
break;
case 185:
*uParam2=8311;
break;
case 186:
*uParam2=8312;
break;
case 187:
*uParam2=8313;
break;
case 188:
*uParam2=8314;
break;
case 189:
*uParam2=8315;
break;
case 190:
*uParam2=8316;
break;
case 191:
*uParam2=8317;
break;
case 192:
*uParam2=8318;
break;
case 193:
*uParam2=8319;
break;
case 194:
*uParam2=8320;
break;
case 195:
*uParam2=8321;
break;
case 196:
*uParam2=8322;
break;
case 197:
*uParam2=8323;
break;
case 198:
*uParam2=8324;
break;
case 199:
*uParam2=8325;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8326;
break;
case 201:
*uParam2=8941;
break;
case 202:
*uParam2=8942;
break;
case 203:
*uParam2=8943;
break;
case 204:
*uParam2=8944;
break;
case 205:
*uParam2=8945;
break;
case 206:
*uParam2=9424;
break;
case 207:
*uParam2=9425;
break;
case 208:
*uParam2=9426;
break;
case 209:
*uParam2=9427;
break;
case 210:
*uParam2=9428;
break;
case 211:
*uParam2=9429;
break;
case 212:
*uParam2=9430;
break;
case 213:
*uParam2=9431;
break;
case 214:
*uParam2=9432;
break;
case 215:
*uParam2=9433;
break;
case 216:
*uParam2=9434;
break;
case 217:
*uParam2=9435;
break;
case 218:
*uParam2=9436;
break;
case 219:
*uParam2=9437;
break;
case 220:
*uParam2=9438;
break;
case 221:
*uParam2=9439;
break;
case 222:
*uParam2=9440;
break;
case 223:
*uParam2=9441;
break;
case 224:
*uParam2=9442;
break;
case 225:
*uParam2=9443;
break;
case 226:
*uParam2=9444;
break;
case 227:
*uParam2=9445;
break;
case 228:
*uParam2=9446;
break;
case 229:
*uParam2=9447;
break;
case 230:
*uParam2=9448;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10303;
break;
case 232:
*uParam2=10304;
break;
case 233:
*uParam2=10305;
break;
case 234:
*uParam2=10306;
break;
case 235:
*uParam2=10307;
break;
case 236:
*uParam2=10308;
break;
case 237:
*uParam2=10309;
break;
case 238:
*uParam2=10310;
break;
case 239:
*uParam2=10311;
break;
case 240:
*uParam2=10312;
break;
case 241:
*uParam2=10313;
break;
case 242:
*uParam2=10314;
break;
case 243:
*uParam2=10315;
break;
case 244:
*uParam2=10316;
break;
case 245:
*uParam2=10317;
break;
case 246:
*uParam2=10318;
break;
case 247:
*uParam2=10319;
break;
case 248:
*uParam2=10320;
break;
case 249:
*uParam2=10321;
break;
case 250:
*uParam2=10322;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10419;
break;
case 252:
*uParam2=10420;
break;
case 253:
*uParam2=10421;
break;
case 254:
*uParam2=10422;
break;
case 255:
*uParam2=10423;
break;
case 256:
*uParam2=10424;
break;
case 257:
*uParam2=10425;
break;
case 258:
*uParam2=10426;
break;
case 259:
*uParam2=10427;
break;
case 260:
*uParam2=10428;
break;
case 261:
*uParam2=11845;
break;
case 262:
*uParam2=11846;
break;
case 263:
*uParam2=11847;
break;
case 264:
*uParam2=11848;
break;
case 265:
*uParam2=11849;
break;
case 266:
*uParam2=11850;
break;
case 267:
*uParam2=11851;
break;
case 268:
*uParam2=11852;
break;
case 269:
*uParam2=11853;
break;
case 270:
*uParam2=11854;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11876;
break;
case 272:
*uParam2=11877;
break;
case 273:
*uParam2=11878;
break;
case 274:
*uParam2=11879;
break;
case 275:
*uParam2=11880;
break;
case 276:
*uParam2=11881;
break;
case 277:
*uParam2=11882;
break;
case 278:
*uParam2=11883;
break;
case 279:
*uParam2=11884;
break;
case 280:
*uParam2=11885;
break;
case 281:
*uParam2=11886;
break;
case 282:
*uParam2=11887;
break;
}
break;
case 2:
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 0:
*uParam2=1767;
break;
case 1:
*uParam2=1768;
break;
case 2:
*uParam2=1769;
break;
case 3:
*uParam2=1770;
break;
case 4:
*uParam2=1771;
break;
case 5:
*uParam2=1772;
break;
case 6:
*uParam2=1780;
break;
case 7:
*uParam2=1781;
break;
case 8:
*uParam2=1782;
break;
case 9:
*uParam2=1783;
break;
case 10:
*uParam2=1784;
break;
case 11:
*uParam2=1785;
break;
case 12:
*uParam2=1786;
break;
case 13:
*uParam2=1789;
break;
case 14:
*uParam2=1790;
break;
case 15:
*uParam2=1891;
break;
case 16:
*uParam2=1892;
break;
case 17:
*uParam2=1922;
break;
case 18:
*uParam2=1940;
break;
case 19:
*uParam2=1941;
break;
case 20:
*uParam2=1942;
break;
case 21:
*uParam2=1943;
break;
case 22:
*uParam2=1944;
break;
case 23:
*uParam2=2045;
break;
case 24:
*uParam2=2046;
break;
case 25:
*uParam2=2080;
break;
case 26:
*uParam2=2081;
break;
case 27:
*uParam2=2082;
break;
case 28:
*uParam2=2083;
break;
case 29:
*uParam2=2084;
break;
case 30:
*uParam2=2085;
break;
case 31:
*uParam2=2086;
break;
case 32:
*uParam2=2087;
break;
case 33:
*uParam2=2088;
break;
case 34:
*uParam2=2089;
break;
case 35:
*uParam2=2328;
break;
case 36:
*uParam2=2329;
break;
case 37:
*uParam2=2395;
break;
case 38:
*uParam2=2396;
break;
case 39:
*uParam2=2397;
break;
case 40:
*uParam2=2398;
break;
case 41:
*uParam2=2463;
break;
case 42:
*uParam2=2464;
break;
case 43:
*uParam2=2465;
break;
case 44:
*uParam2=2466;
break;
case 45:
*uParam2=2467;
break;
case 46:
*uParam2=2468;
break;
case 47:
*uParam2=2469;
break;
case 48:
*uParam2=2470;
break;
case 49:
*uParam2=2471;
break;
case 50:
*uParam2=2472;
break;
case 51:
*uParam2=2603;
break;
case 52:
*uParam2=2604;
break;
case 53:
*uParam2=2605;
break;
case 54:
*uParam2=2606;
break;
case 55:
*uParam2=2607;
break;
case 56:
*uParam2=2608;
break;
case 57:
*uParam2=2609;
break;
case 58:
*uParam2=2610;
break;
case 59:
*uParam2=2611;
break;
case 60:
*uParam2=2612;
break;
case 61:
*uParam2=2613;
break;
case 62:
*uParam2=3205;
break;
case 63:
*uParam2=3206;
break;
case 64:
*uParam2=3207;
break;
case 65:
*uParam2=3208;
break;
case 66:
*uParam2=3209;
break;
case 67:
*uParam2=3210;
break;
case 68:
*uParam2=3682;
break;
case 69:
*uParam2=3683;
break;
case 70:
*uParam2=3684;
break;
case 71:
*uParam2=3685;
break;
case 72:
*uParam2=3686;
break;
case 73:
*uParam2=3687;
break;
case 74:
*uParam2=3688;
break;
case 75:
*uParam2=3689;
break;
case 76:
*uParam2=3690;
break;
case 77:
*uParam2=3691;
break;
case 78:
*uParam2=3803;
break;
case 79:
*uParam2=3804;
break;
case 80:
*uParam2=3805;
break;
case 81:
*uParam2=3806;
break;
case 82:
*uParam2=3807;
break;
case 83:
*uParam2=3808;
break;
case 84:
*uParam2=3809;
break;
case 85:
*uParam2=3810;
break;
case 86:
*uParam2=3908;
break;
case 87:
*uParam2=3909;
break;
case 88:
*uParam2=3910;
break;
case 89:
*uParam2=5352;
break;
case 90:
*uParam2=5353;
break;
case 91:
*uParam2=5354;
break;
case 92:
*uParam2=5355;
break;
case 93:
*uParam2=5356;
break;
case 94:
*uParam2=5357;
break;
case 95:
*uParam2=5358;
break;
case 96:
*uParam2=5359;
break;
case 97:
*uParam2=5360;
break;
case 98:
*uParam2=5361;
break;
case 99:
*uParam2=5362;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 100:
*uParam2=5363;
break;
case 101:
*uParam2=5420;
break;
case 102:
*uParam2=5421;
break;
case 103:
*uParam2=5422;
break;
case 104:
*uParam2=5423;
break;
case 105:
*uParam2=5424;
break;
case 106:
*uParam2=5425;
break;
case 107:
*uParam2=5426;
break;
case 108:
*uParam2=5427;
break;
case 109:
*uParam2=5428;
break;
case 110:
*uParam2=5429;
break;
case 111:
*uParam2=5430;
break;
case 112:
*uParam2=5431;
break;
case 113:
*uParam2=5432;
break;
case 114:
*uParam2=5433;
break;
case 115:
*uParam2=5434;
break;
case 116:
*uParam2=5435;
break;
case 117:
*uParam2=5436;
break;
case 118:
*uParam2=5437;
break;
case 119:
*uParam2=5438;
break;
case 120:
*uParam2=5439;
break;
case 121:
*uParam2=5440;
break;
case 122:
*uParam2=5441;
break;
case 123:
*uParam2=5442;
break;
case 124:
*uParam2=6140;
break;
case 125:
*uParam2=6141;
break;
case 126:
*uParam2=6142;
break;
case 127:
*uParam2=6143;
break;
case 128:
*uParam2=6144;
break;
case 129:
*uParam2=6145;
break;
case 130:
*uParam2=6146;
break;
case 131:
*uParam2=6147;
break;
case 132:
*uParam2=6148;
break;
case 133:
*uParam2=6149;
break;
case 134:
*uParam2=6150;
break;
case 135:
*uParam2=6151;
break;
case 136:
*uParam2=6152;
break;
case 137:
*uParam2=6153;
break;
case 138:
*uParam2=6154;
break;
case 139:
*uParam2=6453;
break;
case 140:
*uParam2=6454;
break;
case 141:
*uParam2=6455;
break;
case 142:
*uParam2=6456;
break;
case 143:
*uParam2=6457;
break;
case 144:
*uParam2=6458;
break;
case 145:
*uParam2=6459;
break;
case 146:
*uParam2=6460;
break;
case 147:
*uParam2=6461;
break;
case 148:
*uParam2=6462;
break;
case 149:
*uParam2=6463;
break;
case 150:
*uParam2=6464;
break;
case 151:
*uParam2=6465;
break;
case 152:
*uParam2=6466;
break;
case 153:
*uParam2=6467;
break;
case 154:
*uParam2=7276;
break;
case 155:
*uParam2=7277;
break;
case 156:
*uParam2=7278;
break;
case 157:
*uParam2=7279;
break;
case 158:
*uParam2=7280;
break;
case 159:
*uParam2=7281;
break;
case 160:
*uParam2=7282;
break;
case 161:
*uParam2=7897;
break;
case 162:
*uParam2=7898;
break;
case 163:
*uParam2=7899;
break;
case 164:
*uParam2=7900;
break;
case 165:
*uParam2=7901;
break;
case 166:
*uParam2=7902;
break;
case 167:
*uParam2=7903;
break;
case 168:
*uParam2=7904;
break;
case 169:
*uParam2=7905;
break;
case 170:
*uParam2=7906;
break;
case 171:
*uParam2=7907;
break;
case 172:
*uParam2=7908;
break;
case 173:
*uParam2=7909;
break;
case 174:
*uParam2=7910;
break;
case 175:
*uParam2=7911;
break;
case 176:
*uParam2=8327;
break;
case 177:
*uParam2=8328;
break;
case 178:
*uParam2=8329;
break;
case 179:
*uParam2=8330;
break;
case 180:
*uParam2=8331;
break;
case 181:
*uParam2=8332;
break;
case 182:
*uParam2=8333;
break;
case 183:
*uParam2=8334;
break;
case 184:
*uParam2=8335;
break;
case 185:
*uParam2=8336;
break;
case 186:
*uParam2=8337;
break;
case 187:
*uParam2=8338;
break;
case 188:
*uParam2=8339;
break;
case 189:
*uParam2=8340;
break;
case 190:
*uParam2=8341;
break;
case 191:
*uParam2=8342;
break;
case 192:
*uParam2=8343;
break;
case 193:
*uParam2=8344;
break;
case 194:
*uParam2=8345;
break;
case 195:
*uParam2=8346;
break;
case 196:
*uParam2=8347;
break;
case 197:
*uParam2=8348;
break;
case 198:
*uParam2=8349;
break;
case 199:
*uParam2=8350;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 200:
*uParam2=8351;
break;
case 201:
*uParam2=8946;
break;
case 202:
*uParam2=8947;
break;
case 203:
*uParam2=8948;
break;
case 204:
*uParam2=8949;
break;
case 205:
*uParam2=8950;
break;
case 206:
*uParam2=9449;
break;
case 207:
*uParam2=9450;
break;
case 208:
*uParam2=9451;
break;
case 209:
*uParam2=9452;
break;
case 210:
*uParam2=9453;
break;
case 211:
*uParam2=9454;
break;
case 212:
*uParam2=9455;
break;
case 213:
*uParam2=9456;
break;
case 214:
*uParam2=9457;
break;
case 215:
*uParam2=9458;
break;
case 216:
*uParam2=9459;
break;
case 217:
*uParam2=9460;
break;
case 218:
*uParam2=9461;
break;
case 219:
*uParam2=9462;
break;
case 220:
*uParam2=9463;
break;
case 221:
*uParam2=9464;
break;
case 222:
*uParam2=9465;
break;
case 223:
*uParam2=9466;
break;
case 224:
*uParam2=9467;
break;
case 225:
*uParam2=9468;
break;
case 226:
*uParam2=9469;
break;
case 227:
*uParam2=9470;
break;
case 228:
*uParam2=9471;
break;
case 229:
*uParam2=9472;
break;
case 230:
*uParam2=9473;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 231:
*uParam2=10323;
break;
case 232:
*uParam2=10324;
break;
case 233:
*uParam2=10325;
break;
case 234:
*uParam2=10326;
break;
case 235:
*uParam2=10327;
break;
case 236:
*uParam2=10328;
break;
case 237:
*uParam2=10329;
break;
case 238:
*uParam2=10330;
break;
case 239:
*uParam2=10331;
break;
case 240:
*uParam2=10332;
break;
case 241:
*uParam2=10333;
break;
case 242:
*uParam2=10334;
break;
case 243:
*uParam2=10335;
break;
case 244:
*uParam2=10336;
break;
case 245:
*uParam2=10337;
break;
case 246:
*uParam2=10338;
break;
case 247:
*uParam2=10339;
break;
case 248:
*uParam2=10340;
break;
case 249:
*uParam2=10341;
break;
case 250:
*uParam2=10342;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 251:
*uParam2=10429;
break;
case 252:
*uParam2=10430;
break;
case 253:
*uParam2=10431;
break;
case 254:
*uParam2=10432;
break;
case 255:
*uParam2=10433;
break;
case 256:
*uParam2=10434;
break;
case 257:
*uParam2=10435;
break;
case 258:
*uParam2=10436;
break;
case 259:
*uParam2=10437;
break;
case 260:
*uParam2=10438;
break;
case 261:
*uParam2=11855;
break;
case 262:
*uParam2=11856;
break;
case 263:
*uParam2=11857;
break;
case 264:
*uParam2=11858;
break;
case 265:
*uParam2=11859;
break;
case 266:
*uParam2=11860;
break;
case 267:
*uParam2=11861;
break;
case 268:
*uParam2=11862;
break;
case 269:
*uParam2=11863;
break;
case 270:
*uParam2=11864;
break;
}
switch (SYSTEM::FLOOR(SYSTEM::TO_FLOAT(fmMaleShopPedApparelItemIndex) / 32f)){
case 271:
*uParam2=11888;
break;
case 272:
*uParam2=11889;
break;
case 273:
*uParam2=11890;
break;
case 274:
*uParam2=11891;
break;
case 275:
*uParam2=11892;
break;
case 276:
*uParam2=11893;
break;
case 277:
*uParam2=11894;
break;
case 278:
*uParam2=11895;
break;
case 279:
*uParam2=11896;
break;
case 280:
*uParam2=11897;
break;
case 281:
*uParam2=11898;
break;
case 282:
*uParam2=11899;
break;
}
break;
}
*uParam3=fmMaleShopPedApparelItemIndex % 32;
return *uParam2 !=14192;
}

int func_111(int iParam0) // Position - 0xCB27{
switch (iParam0){
case -1:
return 0;
case 0:
return 0;
case 1:
return 1;
case 2:
return 2;
case 3:
return 3;
case 4:
return 4;
case 5:
return 5;
case 6:
return 6;
case 7:
return 7;
case 8:
return 8;
case 9:
return 0;
case 10:
return 1;
case 11:
return 0;
case 12:
return 0;
case 13:
return 0;
}
return 0;
}


void func_112(int iParam0, int iParam1, int iParam2, Hash hParam3) // Position - 0xCBFB{
int num;
int num2;
Hash hash;
Ped ped;
Ped ped2;
Hash outProp;
int num3;
int componentId;
int num4;
Hash outComponent;
int componentId2;
int num5;
num=iParam1 - iParam2;
num=num;
if(num < 0) return;
num2=Global_78341[0 /*14*/].f_5;
if(iParam0==12){
ped=iParam1 - iParam2;
if(ped >=0){
ped2=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(num2, false);
if(ped2 > ped){
PED::APPLY_PED_BLOOD_BY_ZONE(ped, &hash);
Global_2883588=hash.f_1;
Global_2883589=hash;
func_105(&Global_78341[0 /*14*/], iParam0, iParam1, &(hash.f_7), 0, 0, hash.f_2, false, -1, 2, true);
return;
}}}elseif(iParam0==13){
func_105(&Global_78341[0 /*14*/], iParam0, iParam1, "NO_LABEL", 0, 0, 0, true, -1, 2, true);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&outProp);
componentId=iParam1 - iParam2;
if(componentId >=0){
num4=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, true, -1, -1);
if(num4 > componentId){
FILES::GET_SHOP_PED_QUERY_PROP(componentId, &outProp);
if(outProp.f_6==0) num3=9;
elseif(outProp.f_6==1) num3=10;
elseif(outProp.f_6==2) num3=2;
elseif(outProp.f_6==3) num3=3;
elseif(outProp.f_6==4) num3=4;
elseif(outProp.f_6==5) num3=5;
elseif(outProp.f_6==6) num3=6;
elseif(outProp.f_6==7) num3=7;
elseif(outProp.f_6==8) num3=8;
else num3=-1;
Global_2883588=outProp.f_1;
Global_2883589=outProp;
func_105(&Global_78341[0 /*14*/], iParam0, iParam1, &(outProp.f_9), outProp.f_3, outProp.f_4, outProp.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outProp.f_1, joaat("OUTFIT_ONLY"), 0), num3, 2, outProp.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&outComponent);
if(hParam3 !=-1 && Global_78539){
FILES::GET_SHOP_PED_COMPONENT(hParam3, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_105(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}
componentId2=iParam1 - iParam2;
if(componentId2 >=0){
num5=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(num2, 10, -1, false, -1, func_93(iParam0));
if(num5 > componentId2){
FILES::GET_SHOP_PED_QUERY_COMPONENT(componentId2, &outComponent);
Global_2883588=outComponent.f_1;
Global_2883589=outComponent;
func_105(&Global_78341[0 /*14*/], iParam0, iParam1, &(outComponent.f_9), outComponent.f_3, outComponent.f_4, outComponent.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(outComponent.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, outComponent.f_1 !=0);
return;
}}}
return;
}


void func_113(int iParam0) // Position - 0xCE82{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 9, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_114(int iParam0) // Position - 0xCFD9{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_0" /*White T-Shirt, Sweatpants*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_5" /*Dock Worker*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_6" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_7" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_8" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_9", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_10" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_13" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_14" /*Underwear*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_15" /*Security*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_16" /*Toilet*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_17" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_18" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_19" /*Pink Ladies Sweats*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_20" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_21" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_22" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_23" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_24" /*Hunting*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_25" /*White T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_26" /*Denim Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_27" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_28" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=119;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_29" /*Blue Suit*/, 16);
num2=0;
num3=0;
num=99;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_30" /*Brown Plaid Suit*/, 16);
num2=0;
num3=0;
num=129;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_44" /*Burgundy Cheap Suit*/, 16);
num2=0;
num3=0;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_45" /*Murky Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=120;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_46" /*Mint Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=139;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_47" /*Green Plaid Cheap Suit*/, 16);
num2=0;
num3=0;
num=149;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_48" /*Blue-Gray Cheap Suit*/, 16);
num2=0;
num3=0;
num=145;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_49" /*Caramel Cheap Suit*/, 16);
num2=0;
num3=0;
num=140;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_50" /*Mocha Cheap Suit*/, 16);
num2=0;
num3=0;
num=135;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_31" /*Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_32" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_33" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_34" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_35" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_36" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_37" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_38" /*Red T-Shirt, Cargo Pants*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_39" /*Amethyst Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_40" /*White T-Shirt, Camo Pants*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_41" /*Moto-X*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_42" /*White Tank Top, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_43" /*White T-Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P2_12" /*Stealth*/, 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 48, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_115(int iParam0) // Position - 0xD4E7{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 1, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_116(int iParam0) // Position - 0xD55C{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 1, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_117(int iParam0) // Position - 0xD5D0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_1_0" /*Beard 1*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_2_0" /*Stubble*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_3_0" /*Big Mustache*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_4_0" /*Handlebar*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P2_5_0" /*The Gerry*/, 16);
num2=5;
num3=0;
break;
default:
func_112(num6, iParam0, 6, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_118(int iParam0) // Position - 0xD6B7{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=9;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=6;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
default:
func_112(num6, iParam0, 33, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_119(int iParam0) // Position - 0xDA1A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=6;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=6;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=6;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=6;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=6;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=6;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=7;
num3=0;
num=270;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=7;
num3=1;
num=270;
break;
default:
func_112(num6, iParam0, 17, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_120(int iParam0) // Position - 0xDC2B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_0" /*Black Digital Watch*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P2_0_1" /*White Digital Watch*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 18, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_121(int iParam0) // Position - 0xDE5B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 7, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_122(int iParam0) // Position - 0xDF6B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_0" /*Black Chukka Boots*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_1" /*Snakeskin Chukka Boots*/, 16);
num2=0;
num3=1;
num=22;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_2" /*Gray Chukka Boots*/, 16);
num2=0;
num3=2;
num=45;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_3" /*Brown Chukka Boots*/, 16);
num2=0;
num3=3;
num=65;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_4" /*Crocodile Skin Boots*/, 16);
num2=0;
num3=4;
num=58;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_5" /*Cowboy Boots*/, 16);
num2=0;
num3=5;
num=72;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_6" /*Yellow Reptile Skin Boots*/, 16);
num2=0;
num3=6;
num=68;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_0_7" /*Reptile Skin Boots*/, 16);
num2=0;
num3=7;
num=60;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_5_0" /*Work Boots*/, 16);
num2=5;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_8_0" /*Dressy Shoes*/, 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_0" /*Black Leather Loafers*/, 16);
num2=9;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_1" /*Gray Leather Loafers*/, 16);
num2=9;
num3=1;
num=680;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_2" /*Cream Leather Loafers*/, 16);
num2=9;
num3=2;
num=650;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_3" /*Brown Leather Loafers*/, 16);
num2=9;
num3=3;
num=670;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_4" /*White Leather Loafers*/, 16);
num2=9;
num3=4;
num=700;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_5" /*Russet Leather Loafers*/, 16);
num2=9;
num3=5;
num=680;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_6" /*White Snakeskin Loafers*/, 16);
num2=9;
num3=6;
num=720;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_7" /*Rattlesnake Loafers*/, 16);
num2=9;
num3=7;
num=740;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_8" /*Brown Snakeskin Loafers*/, 16);
num2=9;
num3=8;
num=760;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_9" /*Zebra Two-Tone Loafers*/, 16);
num2=9;
num3=9;
num=780;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_10" /*Pale Reptile Loafers*/, 16);
num2=9;
num3=10;
num=750;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_9_11" /*Tan Alligator Loafers*/, 16);
num2=9;
num3=11;
num=700;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_10_0" /*Chestnut Boots*/, 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P2_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
default:
func_112(num6, iParam0, 84, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_123(int iParam0) // Position - 0xE90A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_0" /*Blue Jeans*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_1" /*Dirty Blue Jeans*/, 16);
num2=0;
num3=1;
num=95;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_2" /*Navy Jeans*/, 16);
num2=0;
num3=2;
num=129;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_0_3" /*Faded Jeans*/, 16);
num2=0;
num3=3;
num=115;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_0" /*Black Golf Pants*/, 16);
num2=11;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_1" /*Russet Plaid Golf Pants*/, 16);
num2=11;
num3=1;
num=750;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_2" /*White Golf Pants*/, 16);
num2=11;
num3=2;
num=650;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_3" /*Maroon Golf Pants*/, 16);
num2=11;
num3=3;
num=850;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_4" /*Lobster Golf Pants*/, 16);
num2=11;
num3=4;
num=850;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_5" /*Stone Plaid Golf Pants*/, 16);
num2=11;
num3=5;
num=750;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_6" /*Pink Plaid Golf Pants*/, 16);
num2=11;
num3=6;
num=690;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_7" /*Mint Plaid Golf Pants*/, 16);
num2=11;
num3=7;
num=820;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_8" /*Brown Plaid Golf Pants*/, 16);
num2=11;
num3=8;
num=650;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_9" /*Pale Blue Plaid Golf Pants*/, 16);
num2=11;
num3=9;
num=690;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_10" /*Beige Plaid Golf Pants*/, 16);
num2=11;
num3=10;
num=690;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_11_11" /*Aqua Plaid Golf Pants*/, 16);
num2=11;
num3=11;
num=820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_14_0" /*Black Cargo Pants*/, 16);
num2=14;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_15_0" /*White Shorts*/, 16);
num2=15;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_16_0" /*Pink Sweatpants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_0" /*Brown Work Pants*/, 16);
num2=17;
num3=0;
num=58;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_1" /*Charcoal Work Pants*/, 16);
num2=17;
num3=1;
num=68;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_2" /*Gray Work Pants*/, 16);
num2=17;
num3=2;
num=65;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_3" /*Tan Work Pants*/, 16);
num2=17;
num3=3;
num=60;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_4" /*Blue Work Pants*/, 16);
num2=17;
num3=4;
num=65;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_5" /*Ash Work Pants*/, 16);
num2=17;
num3=5;
num=63;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_6" /*White Work Pants*/, 16);
num2=17;
num3=6;
num=60;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_17_7" /*Beige Work Pants*/, 16);
num2=17;
num3=7;
num=58;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_0" /*Tan Cargo Pants*/, 16);
num2=18;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_1" /*Cream Cargo Pants*/, 16);
num2=18;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_2" /*Silver Cargo Pants*/, 16);
num2=18;
num3=2;
num=99;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_3" /*Gray Cargo Pants*/, 16);
num2=18;
num3=3;
num=105;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_4" /*Charcoal Cargo Pants*/, 16);
num2=18;
num3=4;
num=110;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_5" /*Green Cargo Pants*/, 16);
num2=18;
num3=5;
num=110;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_6" /*White Cargo Pants*/, 16);
num2=18;
num3=6;
num=99;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_7" /*Urban Camo Cargo Pants*/, 16);
num2=18;
num3=7;
num=110;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_8" /*Desert Camo Cargo Pants*/, 16);
num2=18;
num3=8;
num=110;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_9" /*Field Camo Cargo Pants*/, 16);
num2=18;
num3=9;
num=105;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_18_10" /*Forest Camo Cargo Pants*/, 16);
num2=18;
num3=10;
num=105;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_0" /*Black Shorts*/, 16);
num2=19;
num3=0;
num=15;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_1" /*Pale Blue Shorts*/, 16);
num2=19;
num3=1;
num=15;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_2" /*Orange Shorts*/, 16);
num2=19;
num3=2;
num=15;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_3" /*Blue Shorts*/, 16);
num2=19;
num3=3;
num=15;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_4" /*Slate Shorts*/, 16);
num2=19;
num3=4;
num=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_5" /*Green Shorts*/, 16);
num2=19;
num3=5;
num=15;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_6" /*Crimson Shorts*/, 16);
num2=19;
num3=6;
num=15;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_19_7" /*Pale Blue Stripe Shorts*/, 16);
num2=19;
num3=7;
num=15;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_0" /*Gray Pants*/, 16);
num2=20;
num3=0;
num=600;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_1" /*Khaki Pants*/, 16);
num2=20;
num3=1;
num=600;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_2" /*Charcoal Pants*/, 16);
num2=20;
num3=2;
num=600;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_3" /*Cream Pants*/, 16);
num2=20;
num3=3;
num=600;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_4" /*Stone Pants*/, 16);
num2=20;
num3=4;
num=600;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_5" /*Black Pants*/, 16);
num2=20;
num3=5;
num=600;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_6" /*Ash Pants*/, 16);
num2=20;
num3=6;
num=600;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_7" /*Beige Pants*/, 16);
num2=20;
num3=7;
num=600;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_20_8" /*Brown Pants*/, 16);
num2=20;
num3=8;
num=600;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_0" /*Beige Cheap Pants*/, 16);
num2=21;
num3=0;
num=80;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_1" /*Blue Cheap Pants*/, 16);
num2=21;
num3=1;
num=80;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_2" /*Brown Plaid Cheap Pants*/, 16);
num2=21;
num3=2;
num=80;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_3" /*Burgundy Cheap Pants*/, 16);
num2=21;
num3=3;
num=80;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_4" /*Murky Plaid Cheap Pants*/, 16);
num2=21;
num3=4;
num=80;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_5" /*Mint Plaid Cheap Pants*/, 16);
num2=21;
num3=5;
num=80;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_6" /*Green Plaid Cheap Pants*/, 16);
num2=21;
num3=6;
num=80;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_7" /*Blue-Gray Cheap Pants*/, 16);
num2=21;
num3=7;
num=80;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_8" /*Caramel Cheap Pants*/, 16);
num2=21;
num3=8;
num=80;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_21_9" /*Mocha Cheap Pants*/, 16);
num2=21;
num3=9;
num=80;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_0" /*White Briefs*/, 16);
num2=22;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_1" /*Green Briefs*/, 16);
num2=22;
num3=1;
num=12;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_2" /*Gray Briefs*/, 16);
num2=22;
num3=2;
num=12;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_3" /*Leopardskin Briefs*/, 16);
num2=22;
num3=3;
num=22;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_4" /*Impotent Rage Briefs*/, 16);
num2=22;
num3=4;
num=18;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_5" /*Pink Leopardskin Briefs*/, 16);
num2=22;
num3=5;
num=20;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_6" /*Space Monkey Briefs 1*/, 16);
num2=22;
num3=6;
num=30;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_7" /*Space Monkey Briefs 2*/, 16);
num2=22;
num3=7;
num=30;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_8" /*Space Monkey Briefs 3*/, 16);
num2=22;
num3=8;
num=30;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_22_9" /*Space Monkey Briefs 4*/, 16);
num2=22;
num3=9;
num=30;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_23_0" /*Sweatpants*/, 16);
num2=23;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P2_24_0" /*Brown Tuxedo Pants*/, 16);
num2=24;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=1;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=2;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=3;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=4;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=5;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=6;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=7;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=8;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=9;
break;
default:
func_112(num6, iParam0, 104, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_124(int iParam0) // Position - 0xF47D{
if(iParam0 < 136) func_126(iParam0);
else func_125(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_112(3, iParam0, 242, -1);
return;
}


void func_125(int iParam0) // Position - 0xF4B2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_0" /*Peyton Blue Blouson*/, 16);
num2=21;
num3=0;
num=32;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_1" /*Overlooked Red Blouson*/, 16);
num2=21;
num3=1;
num=39;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_2" /*Natural Blouson*/, 16);
num2=21;
num3=2;
num=40;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_3" /*Sky Blue Blouson*/, 16);
num2=21;
num3=3;
num=42;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_4" /*Deep Green Blouson*/, 16);
num2=21;
num3=4;
num=45;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_5" /*Champagne Driver Blouson*/, 16);
num2=21;
num3=5;
num=48;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_6" /*Snakeskin Blouson*/, 16);
num2=21;
num3=6;
num=52;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_21_7" /*Desert Brown Blouson*/, 16);
num2=21;
num3=7;
num=55;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_0" /*Black Striped Leather Jacket*/, 16);
num2=22;
num3=0;
num=390;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=390;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=560;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_3" /*Red Leather Jacket*/, 16);
num2=22;
num3=3;
num=390;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_4" /*White Leather Jacket*/, 16);
num2=22;
num3=4;
num=390;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_5" /*Blue Leather Jacket*/, 16);
num2=22;
num3=5;
num=390;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_6" /*Lonewolf Leather Jacket*/, 16);
num2=22;
num3=6;
num=560;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_7" /*Brown Leather Jacket*/, 16);
num2=22;
num3=7;
num=390;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_8" /*Gray Striped Leather Jacket*/, 16);
num2=22;
num3=8;
num=390;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_9" /*Gray Banded Leather Jacket*/, 16);
num2=22;
num3=9;
num=390;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_10" /*Russet Leather Jacket*/, 16);
num2=22;
num3=10;
num=390;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_22_11" /*Brown Suede Jacket*/, 16);
num2=22;
num3=11;
num=3950;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_0" /*Brown Shooting Vest*/, 16);
num2=23;
num3=0;
num=150;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_1" /*Woodland Shooting Vest*/, 16);
num2=23;
num3=1;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_2" /*Taupe Shooting Vest*/, 16);
num2=23;
num3=2;
num=150;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_3" /*Brown Woven Shooting Vest*/, 16);
num2=23;
num3=3;
num=150;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_4" /*Field Shooting Vest*/, 16);
num2=23;
num3=4;
num=160;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_23_5" /*Forest Shooting Vest*/, 16);
num2=23;
num3=5;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_0" /*Yellow Tank Top*/, 16);
num2=24;
num3=0;
num=19;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_1" /*Blue Birds Tank Top*/, 16);
num2=24;
num3=1;
num=20;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_2" /*Orange Pattern Tank Top*/, 16);
num2=24;
num3=2;
num=19;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_3" /*Blue Stars Tank Top*/, 16);
num2=24;
num3=3;
num=22;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_4" /*Aqua Pattern Tank Top*/, 16);
num2=24;
num3=4;
num=20;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_5" /*Degenatron Tank Top*/, 16);
num2=24;
num3=5;
num=28;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_6" /*Taco Libre Tank Top*/, 16);
num2=24;
num3=6;
num=28;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_7" /*Pussycat Tank Top*/, 16);
num2=24;
num3=7;
num=25;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_8" /*Lemon Pattern Tank Top*/, 16);
num2=24;
num3=8;
num=22;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_9" /*Charcoal Tank Top*/, 16);
num2=24;
num3=9;
num=19;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_10" /*Off-White Tank Top*/, 16);
num2=24;
num3=10;
num=22;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_11" /*Banded Tank Top*/, 16);
num2=24;
num3=11;
num=19;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_12" /*Orange Tank Top*/, 16);
num2=24;
num3=12;
num=20;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_13" /*Camo Tank Top*/, 16);
num2=24;
num3=13;
num=25;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_14" /*Indigo Tank Top*/, 16);
num2=24;
num3=14;
num=20;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_24_15" /*Liberty Cocks Tank Top*/, 16);
num2=24;
num3=15;
num=28;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_0" /*Blue Two-Tone Shirt*/, 16);
num2=25;
num3=0;
num=35;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_1" /*Circles Shirt*/, 16);
num2=25;
num3=1;
num=40;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_2" /*Gray Two-Tone Shirt*/, 16);
num2=25;
num3=2;
num=45;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_3" /*Mustard Shirt*/, 16);
num2=25;
num3=3;
num=45;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_4" /*Blue Checkered Shirt*/, 16);
num2=25;
num3=4;
num=49;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_5" /*Floral Shirt*/, 16);
num2=25;
num3=5;
num=820;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_6" /*Beige Shirt*/, 16);
num2=25;
num3=6;
num=790;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_7" /*Lavender Shirt*/, 16);
num2=25;
num3=7;
num=820;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_8" /*Black Shirt*/, 16);
num2=25;
num3=8;
num=929;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_9" /*Monogrammed Shirt*/, 16);
num2=25;
num3=9;
num=40;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_10" /*Paisley Shirt*/, 16);
num2=25;
num3=10;
num=850;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_25_11" /*Camel Shirt*/, 16);
num2=25;
num3=11;
num=790;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_0" /*Beige Tight Jacket*/, 16);
num2=26;
num3=0;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_1" /*Blue Tight Jacket*/, 16);
num2=26;
num3=1;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_2" /*Brown Plaid Tight Jacket*/, 16);
num2=26;
num3=2;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_3" /*Burgundy Tight Jacket*/, 16);
num2=26;
num3=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_4" /*Murky Plaid Tight Jacket*/, 16);
num2=26;
num3=4;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_5" /*Mint Plaid Tight Jacket*/, 16);
num2=26;
num3=5;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_6" /*Green Plaid Tight Jacket*/, 16);
num2=26;
num3=6;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_7" /*Blue-Gray Tight Jacket*/, 16);
num2=26;
num3=7;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_8" /*Caramel Tight Jacket*/, 16);
num2=26;
num3=8;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_26_9" /*Mocha Tight Jacket*/, 16);
num2=26;
num3=9;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_0" /*Gray Jacket*/, 16);
num2=27;
num3=0;
num=2200;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_1" /*Oatmeal Jacket*/, 16);
num2=27;
num3=1;
num=2500;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_2" /*Charcoal Jacket*/, 16);
num2=27;
num3=2;
num=2500;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_3" /*Off-White Jacket*/, 16);
num2=27;
num3=3;
num=2200;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_4" /*Cream Jacket*/, 16);
num2=27;
num3=4;
num=2500;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_5" /*Black Jacket*/, 16);
num2=27;
num3=5;
num=2500;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_27_6" /*Ash Jacket*/, 16);
num2=27;
num3=6;
num=2200;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_0" /*Dark Gray Sweater*/, 16);
num2=28;
num3=0;
num=1100;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_1" /*Pale Gray Sweater*/, 16);
num2=28;
num3=1;
num=1200;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_2" /*Taupe Sweater*/, 16);
num2=28;
num3=2;
num=1220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_3" /*Pale Blue Sweater*/, 16);
num2=28;
num3=3;
num=1250;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_4" /*Tangerine Sweater*/, 16);
num2=28;
num3=4;
num=1300;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_5" /*Quarry Brown Sweater*/, 16);
num2=28;
num3=5;
num=1360;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_6" /*Dark Chevrons Sweater*/, 16);
num2=28;
num3=6;
num=35;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_7" /*Zingy Chevrons Sweater*/, 16);
num2=28;
num3=7;
num=38;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_8" /*Rainbow Field Sweater*/, 16);
num2=28;
num3=8;
num=40;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_9" /*Dark Field Sweater*/, 16);
num2=28;
num3=9;
num=42;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_10" /*Animal Strip Sweater*/, 16);
num2=28;
num3=10;
num=50;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_11" /*Bill Brown Sweater*/, 16);
num2=28;
num3=11;
num=45;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_12" /*Mint Argyle Sweater*/, 16);
num2=28;
num3=12;
num=45;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_13" /*Gray Argyle Sweater*/, 16);
num2=28;
num3=13;
num=44;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_14" /*Grape Eighties Sweater*/, 16);
num2=28;
num3=14;
num=46;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_28_15" /*Geometric Eighties Sweater*/, 16);
num2=28;
num3=15;
num=52;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_0" /*Black Jacket*/, 16);
num2=29;
num3=0;
num=3200;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_1" /*All Black Jacket*/, 16);
num2=29;
num3=1;
num=3200;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_2" /*White Jacket*/, 16);
num2=29;
num3=2;
num=2550;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_3" /*Cream Jacket*/, 16);
num2=29;
num3=3;
num=2750;
break;
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_4" /*Oatmeal Jacket*/, 16);
num2=29;
num3=4;
num=2590;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_5" /*Blue-Gray Jacket*/, 16);
num2=29;
num3=5;
num=2750;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_6" /*Beige Jacket*/, 16);
num2=29;
num3=6;
num=2550;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_7" /*Off-White Jacket*/, 16);
num2=29;
num3=7;
num=2590;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_8" /*Gray Suit Jacket*/, 16);
num2=29;
num3=8;
num=2720;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_29_9" /*Ash Suit Jacket*/, 16);
num2=29;
num3=9;
num=2750;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_0" /*Gray Blazer*/, 16);
num2=30;
num3=0;
num=3250;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_1" /*Beige Blazer*/, 16);
num2=30;
num3=1;
num=2950;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_2" /*Black Blazer*/, 16);
num2=30;
num3=2;
num=3100;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_3" /*Brown Blazer*/, 16);
num2=30;
num3=3;
num=3150;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_4" /*Navy Blazer*/, 16);
num2=30;
num3=4;
num=3240;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_5" /*Navy Pinstripe Blazer*/, 16);
num2=30;
num3=5;
num=3350;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_6" /*Blue-Gray Pinstripe Blazer*/, 16);
num2=30;
num3=6;
num=3400;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_30_7" /*Brown Pinstripe Blazer*/, 16);
num2=30;
num3=7;
num=3280;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_31_0" /*Tuxedo Jacket*/, 16);
num2=31;
num3=0;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_126(int iParam0) // Position - 0x100B7{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_0" /*White T-Shirt*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_1" /*Yellow T-Shirt*/, 16);
num2=0;
num3=1;
num=25;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_2" /*Dusche Gold T-Shirt*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_3" /*Charcoal T-Shirt*/, 16);
num2=0;
num3=3;
num=15;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_4" /*Cerveza Barracho T-Shirt*/, 16);
num2=0;
num3=4;
num=25;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_5" /*Liberty City Wrath T-Shirt*/, 16);
num2=0;
num3=5;
num=25;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_6" /*Pump & Run T-Shirt*/, 16);
num2=0;
num3=6;
num=22;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_7" /*Atomic T-Shirt*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_8" /*LS Nuclear Power T-Shirt*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_9" /*Zancudo T-Shirt*/, 16);
num2=0;
num3=9;
num=20;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_10" /*West Coast Classics T-Shirt*/, 16);
num2=0;
num3=10;
num=24;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_11" /*BC Talk Radio T-Shirt*/, 16);
num2=0;
num3=11;
num=26;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_12" /*Animal Ark T-Shirt*/, 16);
num2=0;
num3=12;
num=28;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_13" /*Rimmers T-Shirt*/, 16);
num2=0;
num3=13;
num=29;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_14" /*Paperclips T-Shirt*/, 16);
num2=0;
num3=14;
num=22;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_0_15" /*Pop's Pills T-Shirt*/, 16);
num2=0;
num3=15;
num=20;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_0" /*Los Santos Tank Top*/, 16);
num2=3;
num3=0;
num=35;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_1" /*Del Perro Pier Tank Top*/, 16);
num2=3;
num3=1;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_2" /*San Andreas Tank Top*/, 16);
num2=3;
num3=2;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_3" /*Love Fist Tank Top*/, 16);
num2=3;
num3=3;
num=38;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_4" /*Space Monkey Tank Top 1*/, 16);
num2=3;
num3=4;
num=40;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_5" /*Space Monkey Tank Top 2*/, 16);
num2=3;
num3=5;
num=40;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_6" /*Space Monkey Tank Top 3*/, 16);
num2=3;
num3=6;
num=40;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_7" /*Space Monkey Tank Top 4*/, 16);
num2=3;
num3=7;
num=40;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_3_8" /*Space Monkey Tank Top 5*/, 16);
num2=3;
num3=8;
num=40;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_0" /*Rearwall Black Down Jacket*/, 16);
num2=4;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_1" /*Crevis Green Down Jacket*/, 16);
num2=4;
num3=1;
num=500;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_2" /*Rearwall Fluoro Down Jacket*/, 16);
num2=4;
num3=2;
num=560;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_3" /*Rearwall Coffee Down Jacket*/, 16);
num2=4;
num3=3;
num=600;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_4tu" /*Crevis Yellow Down Jacket*/, 16);
num2=4;
num3=4;
num=650;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_5tu" /*Eris Yellow Down Jacket*/, 16);
num2=4;
num3=5;
num=500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_6tu" /*Crevis Red Down Jacket*/, 16);
num2=4;
num3=6;
num=560;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_7" /*Rearwall Red Down Jacket*/, 16);
num2=4;
num3=7;
num=500;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_8" /*Crevis Blue Down Jacket*/, 16);
num2=4;
num3=8;
num=650;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_9" /*Eris Gray Down Jacket*/, 16);
num2=4;
num3=9;
num=540;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_10" /*Eris Red Down Jacket*/, 16);
num2=4;
num3=10;
num=690;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_11" /*Eris Olive Down Jacket*/, 16);
num2=4;
num3=11;
num=560;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_12" /*Eris Aqua Down Jacket*/, 16);
num2=4;
num3=12;
num=590;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_13" /*Eris Blue Down Jacket*/, 16);
num2=4;
num3=13;
num=690;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_14" /*Crevis Gray Down Jacket*/, 16);
num2=4;
num3=14;
num=540;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_4_15" /*Eris Tan Down Jacket*/, 16);
num2=4;
num3=15;
num=500;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
flag=true;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
flag=true;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
flag=true;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
flag=true;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_0" /*Red Floral Polo Shirt*/, 16);
num2=11;
num3=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_1" /*Amethyst Polo Shirt*/, 16);
num2=11;
num3=1;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_2" /*Turquoise Striped Polo Shirt*/, 16);
num2=11;
num3=2;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_3" /*Pink Striped Polo Shirt*/, 16);
num2=11;
num3=3;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_4" /*Mustard Polo Shirt*/, 16);
num2=11;
num3=4;
num=22;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_5" /*Orange Polo Shirt*/, 16);
num2=11;
num3=5;
num=350;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_6" /*Topaz Striped Polo Shirt*/, 16);
num2=11;
num3=6;
num=27;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_7" /*Mint Polo Shirt*/, 16);
num2=11;
num3=7;
num=370;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_8" /*Navy Striped Polo Shirt*/, 16);
num2=11;
num3=8;
num=25;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_9" /*Green Striped Polo Shirt*/, 16);
num2=11;
num3=9;
num=22;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_10" /*Turquoise Two-Tone Polo Shirt*/, 16);
num2=11;
num3=10;
num=25;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_11" /*Brown Polo Shirt*/, 16);
num2=11;
num3=11;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_12" /*Pink Polo Shirt*/, 16);
num2=11;
num3=12;
num=22;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_13" /*Green Polo Shirt*/, 16);
num2=11;
num3=13;
num=27;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_14" /*Aqua Polo Shirt*/, 16);
num2=11;
num3=14;
num=25;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_11_15" /*Brown Striped Polo Shirt*/, 16);
num2=11;
num3=15;
num=27;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
num5=1;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_0" /*Mint Floral Dress*/, 16);
num2=13;
num3=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_1" /*Pink Dress*/, 16);
num2=13;
num3=1;
num=39;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_2" /*White Floral Dress*/, 16);
num2=13;
num3=2;
num=42;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_3" /*Purple Zebra Dress*/, 16);
num2=13;
num3=3;
num=49;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_4" /*Cream Dress*/, 16);
num2=13;
num3=4;
num=35;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_5" /*Space Monkey Dress 1*/, 16);
num2=13;
num3=5;
num=50;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_6" /*Space Monkey Dress 2*/, 16);
num2=13;
num3=6;
num=50;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_13_7" /*Space Monkey Dress 3*/, 16);
num2=13;
num3=7;
num=50;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_0" /*Black Hoodie*/, 16);
num2=14;
num3=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_1" /*Silver Hoodie*/, 16);
num2=14;
num3=1;
num=88;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_2" /*Ammu-Nation Camo Hoodie*/, 16);
num2=14;
num3=2;
num=60;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_3" /*LSGC Urban Hoodie*/, 16);
num2=14;
num3=3;
num=80;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_4" /*LSGC Gray Hoodie*/, 16);
num2=14;
num3=4;
num=70;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_5" /*Ammu-Nation A Hoodie*/, 16);
num2=14;
num3=5;
num=80;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_6" /*Blauser Hoodie*/, 16);
num2=14;
num3=6;
num=70;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_7" /*LSGC Forest Hoodie*/, 16);
num2=14;
num3=7;
num=90;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_8" /*Penetrators Hoodie*/, 16);
num2=14;
num3=8;
num=95;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_9" /*Crevis Fluorescent Hoodie*/, 16);
num2=14;
num3=9;
num=105;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_10" /*Blue Hoodie*/, 16);
num2=14;
num3=10;
num=95;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_11" /*Green Hoodie*/, 16);
num2=14;
num3=11;
num=110;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_12" /*LS Jardineros Hoodie*/, 16);
num2=14;
num3=12;
num=98;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_13" /*Ash 18 Hoodie*/, 16);
num2=14;
num3=13;
num=88;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_14" /*Red Mist XI Hoodie*/, 16);
num2=14;
num3=14;
num=98;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_14_15" /*Eris Charcoal Hoodie*/, 16);
num2=14;
num3=15;
num=110;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_15_0" /*Tennis Shirt*/, 16);
num2=15;
num3=0;
flag=true;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_16_0" /*Bare Chest*/, 16);
num2=16;
num3=0;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_17_0" /*Pink Jacket*/, 16);
num2=17;
num3=0;
flag=true;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_0" /*Blue Denim Jacket*/, 16);
num2=18;
num3=0;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_1" /*Black Denim Jacket*/, 16);
num2=18;
num3=1;
num=520;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_2" /*Gray Denim Jacket*/, 16);
num2=18;
num3=2;
num=490;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_3" /*Brown Denim Jacket*/, 16);
num2=18;
num3=3;
num=450;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_4" /*Faded Denim Jacket*/, 16);
num2=18;
num3=4;
num=420;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_18_5" /*Ash Denim Jacket*/, 16);
num2=18;
num3=5;
num=420;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_0" /*Denim Shirt*/, 16);
num2=19;
num3=0;
num=85;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_1" /*Faded Denim Shirt*/, 16);
num2=19;
num3=1;
num=85;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_2" /*Black Shirt*/, 16);
num2=19;
num3=2;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_3" /*Gray Check Shirt*/, 16);
num2=19;
num3=3;
num=68;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_4" /*Brown Check Shirt*/, 16);
num2=19;
num3=4;
num=68;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_5" /*Red Check Shirt*/, 16);
num2=19;
num3=5;
num=78;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_6" /*Brown Shirt*/, 16);
num2=19;
num3=6;
num=85;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_7" /*Khaki Shirt*/, 16);
num2=19;
num3=7;
num=68;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_8" /*Red Plaid Shirt*/, 16);
num2=19;
num3=8;
num=75;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_9" /*Brown Plaid Shirt*/, 16);
num2=19;
num3=9;
num=75;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_10" /*Green Check Shirt*/, 16);
num2=19;
num3=10;
num=78;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_11" /*Maroon Check Shirt*/, 16);
num2=19;
num3=11;
num=75;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_12" /*Gray Shirt*/, 16);
num2=19;
num3=12;
num=75;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_13" /*Blue Check Shirt*/, 16);
num2=19;
num3=13;
num=75;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_14" /*Blue Two-Tone Shirt*/, 16);
num2=19;
num3=14;
num=78;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_19_15" /*Navy Shirt*/, 16);
num2=19;
num3=15;
num=78;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_0" /*Burgundy Bowling Shirt*/, 16);
num2=20;
num3=0;
num=40;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_1" /*Purple Bowling Shirt*/, 16);
num2=20;
num3=1;
num=32;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_2" /*Crimson Bowling Shirt*/, 16);
num2=20;
num3=2;
num=32;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_3" /*Tan Bowling Shirt*/, 16);
num2=20;
num3=3;
num=32;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_4" /*Flames Bowling Shirt*/, 16);
num2=20;
num3=4;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_5" /*Skull Bowling Shirt*/, 16);
num2=20;
num3=5;
num=38;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_6" /*Pale Blue Bowling Shirt*/, 16);
num2=20;
num3=6;
num=35;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_7" /*Scarab Bowling Shirt*/, 16);
num2=20;
num3=7;
num=38;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_8" /*Cream Bowling Shirt*/, 16);
num2=20;
num3=8;
num=29;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_9" /*Cube Bowling Shirt*/, 16);
num2=20;
num3=9;
num=32;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_10" /*Beige Bowling Shirt*/, 16);
num2=20;
num3=10;
num=29;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_11" /*Blue Bowling Shirt*/, 16);
num2=20;
num3=11;
num=35;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_12" /*Yellow Bowling Shirt*/, 16);
num2=20;
num3=12;
num=32;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_13" /*Pink Bowling Shirt*/, 16);
num2=20;
num3=13;
num=35;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_14" /*White Bowling Shirt*/, 16);
num2=20;
num3=14;
num=32;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P2_20_15" /*Black Bowling Shirt*/, 16);
num2=20;
num3=15;
num=40;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_127(int iParam0) // Position - 0x10FC5{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_0" /*Trailer Cut*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_0_1" /*Frozen*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_1_0" /*Clean Razor*/, 16);
num2=1;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_2_0" /*Randal*/, 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_3_0" /*Side Shed*/, 16);
num2=3;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_4_0" /*Grown Out*/, 16);
num2=4;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_5_0" /*Mullet*/, 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_6_0" /*Shaved 2*/, 16);
num2=6;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P2_7_0" /*Swept Back*/, 16);
num2=7;
num3=0;
break;
default:
func_112(num6, iParam0, 9, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_128(int iParam0) // Position - 0x110F2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_112(num6, iParam0, 7, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_129(int iParam0, int iParam1) // Position - 0x111F0{
switch (iParam0){
case 0:
func_147(iParam1);
break;
case 2:
func_146(iParam1);
break;
case 3:
func_142(iParam1);
break;
case 4:
func_141(iParam1);
break;
case 6:
func_140(iParam1);
break;
case 5:
func_139(iParam1);
break;
case 8:
func_138(iParam1);
break;
case 9:
func_137(iParam1);
break;
case 10:
func_136(iParam1);
break;
case 1:
func_135(iParam1);
break;
case 7:
func_134(iParam1);
break;
case 11:
func_133(iParam1);
break;
case 12:
func_132(iParam1);
break;
case 13:
func_131(iParam1);
break;
case 14:
func_130(iParam1);
break;
}
return;
}


void func_130(int iParam0) // Position - 0x112E0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_0" /*De Koch Diamond Studs*/, 16);
num2=1;
num3=0;
num=4590;
num4=2;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_1" /*De Koch Obsidian Studs*/, 16);
num2=1;
num3=1;
num=4100;
num4=2;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_2" /*De Koch Sapphire Studs*/, 16);
num2=1;
num3=2;
num=3850;
num4=2;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_3" /*De Koch Opal Studs*/, 16);
num2=1;
num3=3;
num=1850;
num4=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_4" /*De Koch Platinum Studs*/, 16);
num2=1;
num3=4;
num=5250;
num4=2;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_5" /*De Koch Garnet Studs*/, 16);
num2=1;
num3=5;
num=2700;
num4=2;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_6" /*De Koch Jasper Studs*/, 16);
num2=1;
num3=6;
num=3100;
num4=2;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA1_7" /*De Koch Aquamarine Studs*/, 16);
num2=1;
num3=7;
num=5050;
num4=2;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_0" /*Vankhov Diamond Studs*/, 16);
num2=2;
num3=0;
num=2500;
num4=2;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_1" /*Vankhov Emerald Studs*/, 16);
num2=2;
num3=1;
num=1950;
num4=2;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_2" /*Vankhov Quartz Studs*/, 16);
num2=2;
num3=2;
num=3900;
num4=2;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_3" /*Vankhov Obsidian Studs*/, 16);
num2=2;
num3=3;
num=3550;
num4=2;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_4" /*Vankhov Platinum Studs*/, 16);
num2=2;
num3=4;
num=4500;
num4=2;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_5" /*Vankhov Agate Studs*/, 16);
num2=2;
num3=5;
num=2700;
num4=2;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_6" /*Vankhov Jade Studs*/, 16);
num2=2;
num3=6;
num=3100;
num4=2;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_EA2_7" /*Vankhov Onyx Studs*/, 16);
num2=2;
num3=7;
num=2950;
num4=2;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_0" /*Orange Tint Contour Shades*/, 16);
num2=1;
num3=0;
num=75;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_1" /*Slate Contour Shades*/, 16);
num2=1;
num3=1;
num=75;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_2" /*Gray Contour Shades*/, 16);
num2=1;
num3=2;
num=75;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_3" /*Brown Contour Shades*/, 16);
num2=1;
num3=3;
num=75;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_4" /*Burgundy Contour Shades*/, 16);
num2=1;
num3=4;
num=75;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_5" /*Chocolate Contour Shades*/, 16);
num2=1;
num3=5;
num=75;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_6" /*Black Contour Shades*/, 16);
num2=1;
num3=6;
num=75;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_7" /*Purple Tint Contour Shades*/, 16);
num2=1;
num3=7;
num=75;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_8" /*Blue-Gray Contour Shades*/, 16);
num2=1;
num3=8;
num=75;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E1_9" /*White Contour Shades*/, 16);
num2=1;
num3=9;
num=75;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E2" /*Swimming Goggles*/, 16);
num2=2;
num3=0;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E3" /*Racer Shades*/, 16);
num2=3;
num3=0;
num=110;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_0" /*Stank Slate Shades*/, 16);
num2=4;
num3=0;
num=120;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_1" /*Broker Ash Shades*/, 16);
num2=4;
num3=1;
num=128;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_2" /*Broker Chocolate Shades*/, 16);
num2=4;
num3=2;
num=130;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_3" /*Stank Black Shades*/, 16);
num2=4;
num3=3;
num=140;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_4" /*Broker Black Shades*/, 16);
num2=4;
num3=4;
num=145;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_5" /*Stank Green Tint Shades*/, 16);
num2=4;
num3=5;
num=135;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E4_6" /*Stank Blue Tint Shades*/, 16);
num2=4;
num3=6;
num=138;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_0" /*Black Aviator Shades*/, 16);
num2=5;
num3=0;
num=110;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_1" /*White Aviator Shades*/, 16);
num2=5;
num3=1;
num=112;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_2" /*Brown Aviator Shades*/, 16);
num2=5;
num3=2;
num=115;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_3" /*Gray Aviator Shades*/, 16);
num2=5;
num3=3;
num=118;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_4" /*Two-Tone Aviator Shades*/, 16);
num2=5;
num3=4;
num=120;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_5" /*Bone Aviator Shades*/, 16);
num2=5;
num3=5;
num=125;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_6" /*Red Aviator Shades*/, 16);
num2=5;
num3=6;
num=128;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_7" /*Silver Aviator Shades*/, 16);
num2=5;
num3=7;
num=138;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_8" /*Charcoal Aviator Shades*/, 16);
num2=5;
num3=8;
num=140;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E5_9" /*Gold Aviator Shades*/, 16);
num2=5;
num3=9;
num=155;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_0" /*Tinted Aviator Glasses*/, 16);
num2=6;
num3=0;
num=55;
num4=10;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_1" /*Silver Aviator Glasses*/, 16);
num2=6;
num3=1;
num=55;
num4=10;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_2" /*Sepia Aviator Glasses*/, 16);
num2=6;
num3=2;
num=58;
num4=10;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_3" /*Blue Aviator Glasses*/, 16);
num2=6;
num3=3;
num=58;
num4=10;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_4" /*Yellow Aviator Glasses*/, 16);
num2=6;
num3=4;
num=60;
num4=10;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_5" /*Gray Aviator Glasses*/, 16);
num2=6;
num3=5;
num=62;
num4=10;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_6" /*Black Aviator Glasses*/, 16);
num2=6;
num3=6;
num=65;
num4=10;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_7" /*Slate Aviator Glasses*/, 16);
num2=6;
num3=7;
num=68;
num4=10;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_8" /*Smoke Aviator Glasses*/, 16);
num2=6;
num3=8;
num=68;
num4=10;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E6_9" /*Gold Aviator Glasses*/, 16);
num2=6;
num3=9;
num=72;
num4=10;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_0" /*Suburban Black Shades*/, 16);
num2=7;
num3=0;
num=145;
num4=10;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_1" /*Suburban Teal Shades*/, 16);
num2=7;
num3=1;
num=149;
num4=10;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_2" /*Suburban Tortoiseshell Shades*/, 16);
num2=7;
num3=2;
num=139;
num4=10;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_3" /*Suburban Orange Shades*/, 16);
num2=7;
num3=3;
num=149;
num4=10;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_4" /*Fuque White Shades*/, 16);
num2=7;
num3=4;
num=135;
num4=10;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_5" /*Fuque Camo Shades*/, 16);
num2=7;
num3=5;
num=138;
num4=10;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_6" /*Fuque Yellow Shades*/, 16);
num2=7;
num3=6;
num=140;
num4=10;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_7" /*Fuque Burgundy Shades*/, 16);
num2=7;
num3=7;
num=145;
num4=10;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_8" /*Fuque Funky Shades*/, 16);
num2=7;
num3=8;
num=159;
num4=10;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E7_9" /*Fuque Squared Shades*/, 16);
num2=7;
num3=9;
num=155;
num4=10;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_0" /*Gold T-Bone Shades*/, 16);
num2=8;
num3=0;
num=198;
num4=10;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_1" /*Silver T-Bone Shades*/, 16);
num2=8;
num3=1;
num=210;
num4=10;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_2" /*Two-Tone T-Bone Shades*/, 16);
num2=8;
num3=2;
num=185;
num4=10;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_3" /*Green T-Bone Shades*/, 16);
num2=8;
num3=3;
num=220;
num4=10;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_4" /*Brown T-Bone Shades*/, 16);
num2=8;
num3=4;
num=190;
num4=10;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_5" /*Peach T-Bone Shades*/, 16);
num2=8;
num3=5;
num=200;
num4=10;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_6" /*Gray T-Bone Shades*/, 16);
num2=8;
num3=6;
num=208;
num4=10;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E8_7" /*Orange T-Bone Shades*/, 16);
num2=8;
num3=7;
num=210;
num4=10;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_0" /*Yellow Mono Shades*/, 16);
num2=9;
num3=0;
num=165;
num4=10;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_1" /*Gray Mono Shades*/, 16);
num2=9;
num3=1;
num=185;
num4=10;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_2" /*Hornet Mono Shades*/, 16);
num2=9;
num3=2;
num=190;
num4=10;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_3" /*Copper Mono Shades*/, 16);
num2=9;
num3=3;
num=178;
num4=10;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_4" /*Blue Mono Shades*/, 16);
num2=9;
num3=4;
num=180;
num4=10;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_5" /*Sepia Mono Shades*/, 16);
num2=9;
num3=5;
num=168;
num4=10;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_6" /*White Mono Shades*/, 16);
num2=9;
num3=6;
num=170;
num4=10;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_7" /*Orange Tint Mono Shades*/, 16);
num2=9;
num3=7;
num=175;
num4=10;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_8" /*Blue Tint Mono Shades*/, 16);
num2=9;
num3=8;
num=170;
num4=10;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E9_9" /*Smoke Mono Shades*/, 16);
num2=9;
num3=9;
num=178;
num4=10;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_0" /*Gold Triptych Shades*/, 16);
num2=10;
num3=0;
num=140;
num4=10;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_1" /*Gray Triptych Shades*/, 16);
num2=10;
num3=1;
num=145;
num4=10;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_2" /*Silver Triptych Shades*/, 16);
num2=10;
num3=2;
num=150;
num4=10;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_3" /*Two-Tone Triptych Shades*/, 16);
num2=10;
num3=3;
num=165;
num4=10;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_4" /*Copper Triptych Shades*/, 16);
num2=10;
num3=4;
num=168;
num4=10;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_5" /*Black Triptych Shades*/, 16);
num2=10;
num3=5;
num=178;
num4=10;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_E10_6" /*White Triptych Shades*/, 16);
num2=10;
num3=6;
num=160;
num4=10;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num=100;
num4=10;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H0_0" /*Hockey Mask*/, 16);
num2=0;
num3=0;
num=320;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H3_0" /*Gray Flat Cap*/, 16);
num2=3;
num3=0;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=7;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=8;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=8;
num3=0;
num=270;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=8;
num3=1;
num=270;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=9;
num3=0;
num=200;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=9;
num3=1;
num=200;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=10;
num3=0;
num=350;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=10;
num3=1;
num=350;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=11;
num3=0;
num=450;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=12;
num3=0;
num=500;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=12;
num3=1;
num=500;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=13;
num3=0;
num=50;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=13;
num3=1;
num=50;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=14;
num3=0;
num=99;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=14;
num3=1;
num=99;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=14;
num3=2;
num=99;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=16;
num3=0;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=16;
num3=1;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=16;
num3=2;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=16;
num3=3;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=16;
num3=4;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=16;
num3=5;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=16;
num3=6;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=16;
num3=7;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=16;
num3=8;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=16;
num3=9;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=16;
num3=10;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=16;
num3=11;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=16;
num3=12;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=16;
num3=13;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=16;
num3=14;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=16;
num3=15;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=1;
num4=0;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=2;
num4=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=3;
num4=0;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=4;
num4=0;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=5;
num4=0;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
num4=0;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_0" /*Toe Shoes Fitted Cap*/, 16);
num2=19;
num3=0;
num=30;
num4=0;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_1" /*Yeti Fitted Cap*/, 16);
num2=19;
num3=1;
num=30;
num4=0;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_2" /*OG Fitted Cap*/, 16);
num2=19;
num3=2;
num=32;
num4=0;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_3" /*Magnetics Fitted Cap*/, 16);
num2=19;
num3=3;
num=35;
num4=0;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_4" /*LS Red Fitted Cap*/, 16);
num2=19;
num3=4;
num=38;
num4=0;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_5" /*Los Santos Charcoal Fitted Cap*/, 16);
num2=19;
num3=5;
num=42;
num4=0;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_6" /*Stank Fitted Cap*/, 16);
num2=19;
num3=6;
num=42;
num4=0;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_7" /*Los Santos Gray Fitted Cap*/, 16);
num2=19;
num3=7;
num=40;
num4=0;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_8" /*Perseus Fitted Cap*/, 16);
num2=19;
num3=8;
num=45;
num4=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_9" /*Feud Slate Fitted Cap*/, 16);
num2=19;
num3=9;
num=48;
num4=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_10" /*Feud Black Fitted Cap*/, 16);
num2=19;
num3=10;
num=25;
num4=0;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_11" /*LS Black Fitted Cap*/, 16);
num2=19;
num3=11;
num=25;
num4=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_12" /*LS Corkers Fitted Cap*/, 16);
num2=19;
num3=12;
num=28;
num4=0;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_13" /*LS White Fitted Cap*/, 16);
num2=19;
num3=13;
num=28;
num4=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_14" /*Feud Green Fitted Cap*/, 16);
num2=19;
num3=14;
num=30;
num4=0;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H19_15" /*LS Olive Fitted Cap*/, 16);
num2=19;
num3=15;
num=35;
num4=0;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
num4=0;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
default:
func_112(num6, iParam0, 175, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_131(int iParam0) // Position - 0x127D1{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 9, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_132(int iParam0) // Position - 0x12922{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_0" /*Blue Shirt, Jeans*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_2" /*White Tuxedo*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_4" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_7" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_11" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_12" /*Fireman*/, 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_13" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_15" /*Black Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_16" /*Skydiving*/, 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_17" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_18" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_19" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_20" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_21" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_22" /*Ash Hoodie, Sweatpants*/, 16);
num2=0;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_23" /*Yellow Check Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_24" /*Gray Plaid Suit*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_25" /*Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_26" /*Track Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_27" /*Off-White Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_28" /*Gray Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_29" /*Ash Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_30" /*Charcoal Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_31" /*Tan Plaid 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4650;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_32" /*Slate 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_33" /*Ash 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5000;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_34" /*Stone 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_35" /*Oatmeal 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=4750;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_36" /*Navy Plaid Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_37" /*Off-White 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5200;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_38" /*Red Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_39" /*Gray Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_40" /*Navy 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_41" /*Russet Piped 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_42" /*Green 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_43" /*Beige 3 Piece Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_47" /*Underwear*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_48" /*LS Black Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_49" /*Gray Hoodie, Jeans*/, 16);
num2=0;
num3=0;
num=3000;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_10" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_50" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_51" /*U.R. Jersey, Fatigues*/, 16);
num2=0;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_52" /*U.R. OG Tee, Bike Leathers*/, 16);
num2=0;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_53" /*Uptown Riders Longsleeve, Camos*/, 16);
num2=0;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P1_54" /*U.R. Jacket, Baggies*/, 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 47, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_133(int iParam0) // Position - 0x12E2D{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_0", 16);
num2=2;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_1", 16);
num2=2;
num3=1;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_2", 16);
num2=2;
num3=2;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_1_3", 16);
num2=2;
num3=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=3;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=3;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=3;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=3;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=3;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=3;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=3;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=3;
num3=7;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=3;
num3=8;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=3;
num3=9;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=3;
num3=10;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=3;
num3=11;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=3;
num3=12;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=3;
num3=13;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=3;
num3=14;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=3;
num3=15;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_0" /*Silver Plaid Vest*/, 16);
num2=4;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_1" /*Ash Vest*/, 16);
num2=4;
num3=1;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_2" /*Navy Vest*/, 16);
num2=4;
num3=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_3" /*Colorful Plaid Vest*/, 16);
num2=4;
num3=3;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_4" /*Beige Vest*/, 16);
num2=4;
num3=4;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_5" /*Black Vest*/, 16);
num2=4;
num3=5;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_6" /*Gray Plaid Vest*/, 16);
num2=4;
num3=6;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_7" /*Jade Plaid Vest*/, 16);
num2=4;
num3=7;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_8" /*Beige Plaid Vest*/, 16);
num2=4;
num3=8;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_9" /*Brown Plaid Vest*/, 16);
num2=4;
num3=9;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_10" /*Brown Vest*/, 16);
num2=4;
num3=10;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_11" /*White Plaid Vest*/, 16);
num2=4;
num3=11;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_12" /*Pearl Plaid Vest*/, 16);
num2=4;
num3=12;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_13" /*Warm Gray Vest*/, 16);
num2=4;
num3=13;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_14" /*Topaz Vest*/, 16);
num2=4;
num3=14;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_3_15" /*Plum Vest*/, 16);
num2=4;
num3=15;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_5_0" /*White Shirt*/, 16);
num2=5;
num3=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_0" /*White Shirt*/, 16);
num2=6;
num3=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_6_1" /*Two-Tone Shirt*/, 16);
num2=6;
num3=1;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_7_0" /*Charcoal Hoodie*/, 16);
num2=7;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_8_0" /*White T-Shirt*/, 16);
num2=8;
num3=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_9_0" /*Blue Shirt*/, 16);
num2=9;
num3=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_0" /*White T-Shirt*/, 16);
num2=10;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_1" /*Crevis T-Shirt*/, 16);
num2=10;
num3=1;
num=48;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_2" /*Yeti T-Shirt*/, 16);
num2=10;
num3=2;
num=35;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_3" /*Sweatbox T-Shirt*/, 16);
num2=10;
num3=3;
num=32;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_4" /*Trey Baker T-Shirt*/, 16);
num2=10;
num3=4;
num=35;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_5" /*Black T-Shirt*/, 16);
num2=10;
num3=5;
num=48;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_6" /*Fruntalot T-Shirt*/, 16);
num2=10;
num3=6;
num=52;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_7" /*Kingz of Los Santos T-Shirt*/, 16);
num2=10;
num3=7;
num=38;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_8" /*Ten Off The Chain T-Shirt*/, 16);
num2=10;
num3=8;
num=42;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_9" /*Gray T-Shirt*/, 16);
num2=10;
num3=9;
num=38;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_10" /*Green T-Shirt*/, 16);
num2=10;
num3=10;
num=35;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_11" /*Camo T-Shirt*/, 16);
num2=10;
num3=11;
num=48;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_12" /*Yeti Rainbow T-Shirt*/, 16);
num2=10;
num3=12;
num=42;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_13" /*Feud Banded T-Shirt*/, 16);
num2=10;
num3=13;
num=45;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_14" /*Yogarishima T-Shirt*/, 16);
num2=10;
num3=14;
num=45;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P1_10_15" /*Feud Gray T-Shirt*/, 16);
num2=10;
num3=15;
num=49;
break;
default:
func_112(num6, iParam0, 63, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_134(int iParam0) // Position - 0x1349B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 1, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_135(int iParam0) // Position - 0x1350F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_1_0" /*Full Van Dyke*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_2_0" /*Methodical*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_3_0" /*Full Spartan*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P1_4_0" /*Stubble*/, 16);
num2=4;
num3=0;
break;
default:
func_112(num6, iParam0, 5, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_136(int iParam0) // Position - 0x135DF{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=5;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=2;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=4;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=5;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=6;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=1;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=2;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=3;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=5;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=6;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=7;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=8;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=9;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=10;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=11;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=12;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=13;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=14;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=15;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=1;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=3;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=4;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=5;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=6;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
default:
func_112(num6, iParam0, 53, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_137(int iParam0) // Position - 0x13B0F{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=5;
num3=0;
num=125;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=5;
num3=1;
num=150;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=5;
num3=2;
num=175;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=5;
num3=3;
num=85;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=5;
num3=4;
num=150;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=5;
num3=5;
num=175;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
default:
func_112(num6, iParam0, 12, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_138(int iParam0) // Position - 0x13CA6{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_9_0" /*Bandana*/, 16);
num2=9;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_0" /*Silver Tie*/, 16);
num2=11;
num3=0;
num=195;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_1" /*Gold Tie*/, 16);
num2=11;
num3=1;
num=195;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_2" /*Cream Tie*/, 16);
num2=11;
num3=2;
num=195;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_3" /*Blue Diamond Tie*/, 16);
num2=11;
num3=3;
num=250;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_4" /*Blue Spotted Tie*/, 16);
num2=11;
num3=4;
num=250;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_5" /*White Spotted Tie*/, 16);
num2=11;
num3=5;
num=250;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_6" /*Dark Gray Tie*/, 16);
num2=11;
num3=6;
num=195;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_7" /*Gray Striped Tie*/, 16);
num2=11;
num3=7;
num=250;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_8" /*Silver Striped Tie*/, 16);
num2=11;
num3=8;
num=250;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_9" /*Red Striped Tie*/, 16);
num2=11;
num3=9;
num=250;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_10" /*Bronze Striped Tie*/, 16);
num2=11;
num3=10;
num=250;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_11" /*White Diamond Tie*/, 16);
num2=11;
num3=11;
num=195;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_11_12" /*Black Diamond Tie*/, 16);
num2=11;
num3=12;
num=250;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=15;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=15;
num3=1;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=15;
num3=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=15;
num3=3;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=15;
num3=4;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=15;
num3=5;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=15;
num3=6;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=15;
num3=7;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=15;
num3=8;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=15;
num3=9;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=15;
num3=10;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=15;
num3=11;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=15;
num3=12;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=15;
num3=13;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=15;
num3=14;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=15;
num3=15;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=16;
num3=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=16;
num3=1;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=16;
num3=2;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=16;
num3=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=16;
num3=4;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=16;
num3=5;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=16;
num3=6;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=16;
num3=7;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=16;
num3=8;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=16;
num3=9;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=16;
num3=10;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=16;
num3=11;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=16;
num3=12;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=16;
num3=13;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=16;
num3=14;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=16;
num3=15;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_0" /*Purple Tie*/, 16);
num2=17;
num3=0;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_1" /*Cream Tie*/, 16);
num2=17;
num3=1;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_2" /*Beige Tie*/, 16);
num2=17;
num3=2;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_3" /*Ash Tie*/, 16);
num2=17;
num3=3;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_4" /*White Diamond Tie*/, 16);
num2=17;
num3=4;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_5" /*Gray Diamond Tie*/, 16);
num2=17;
num3=5;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_6" /*Beige Striped Tie*/, 16);
num2=17;
num3=6;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_7" /*Red Striped Tie*/, 16);
num2=17;
num3=7;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_8" /*Russet Wool Tie*/, 16);
num2=17;
num3=8;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_9" /*Gray Striped Tie*/, 16);
num2=17;
num3=9;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_10" /*Gray Wool Tie*/, 16);
num2=17;
num3=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_11" /*Off-White Tie*/, 16);
num2=17;
num3=11;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_12" /*Blue Diamond Tie*/, 16);
num2=17;
num3=12;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_13" /*Brown Wool Tie*/, 16);
num2=17;
num3=13;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_14" /*Gray Textured Tie*/, 16);
num2=17;
num3=14;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P1_15_15" /*Amethyst Tie*/, 16);
num2=17;
num3=15;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
break;
default:
func_112(num6, iParam0, 77, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_139(int iParam0) // Position - 0x144A5{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 7, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_140(int iParam0) // Position - 0x145B5{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_0" /*White Athletic Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_1" /*All White Athletic Shoes*/, 16);
num2=0;
num3=1;
num=80;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_2" /*Charcoal Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=2;
num=80;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_3" /*Yellow Athletic Shoes*/, 16);
num2=0;
num3=3;
num=89;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_4" /*Gray Athletic Shoes*/, 16);
num2=0;
num3=4;
num=45;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_5" /*Black Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=5;
num=35;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_6" /*Gray Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=6;
num=89;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_7" /*Lemon Accent Athletic Shoes*/, 16);
num2=0;
num3=7;
num=95;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_8" /*Two-Tone Athletic Shoes*/, 16);
num2=0;
num3=8;
num=115;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_9" /*Cyan Athletic Shoes*/, 16);
num2=0;
num3=9;
num=40;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_10" /*Cyan Accent Athletic Shoes*/, 16);
num2=0;
num3=10;
num=145;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_00_11" /*Fluorescent Athletic Shoes*/, 16);
num2=0;
num3=11;
num=145;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_01_0" /*Work Boots*/, 16);
num2=1;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=1;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_0" /*Desert Round-Toe Boots*/, 16);
num2=6;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_1" /*Coffee Round-Toe Boots*/, 16);
num2=6;
num3=1;
num=180;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_2" /*Chocolate Round-Toe Boots*/, 16);
num2=6;
num3=2;
num=80;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_3" /*Gray Round-Toe Boots*/, 16);
num2=6;
num3=3;
num=200;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_4" /*Slate Round-Toe Boots*/, 16);
num2=6;
num3=4;
num=220;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_06_5" /*Copper Round-Toe Boots*/, 16);
num2=6;
num3=5;
num=235;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_0" /*Gray Snake Shoes*/, 16);
num2=8;
num3=0;
num=870;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_1" /*Black Shoes*/, 16);
num2=8;
num3=1;
num=870;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_2" /*White Snake Shoes*/, 16);
num2=8;
num3=2;
num=870;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_3" /*Gray Crocodile Shoes*/, 16);
num2=8;
num3=3;
num=1275;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_4" /*Alligator Shoes*/, 16);
num2=8;
num3=4;
num=1275;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_5" /*Brown Crocodile Shoes*/, 16);
num2=8;
num3=5;
num=1275;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_6" /*Rattlesnake Shoes*/, 16);
num2=8;
num3=6;
num=1275;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_7" /*Gray Python Shoes*/, 16);
num2=8;
num3=7;
num=1275;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_08_8" /*Two-Tone Crocodile Shoes*/, 16);
num2=8;
num3=8;
num=1275;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_10_0" /*Black Brogues*/, 16);
num2=10;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_0" /*Two-Tone Sneakers*/, 16);
num2=11;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_1" /*Orange Sneakers*/, 16);
num2=11;
num3=1;
num=50;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_2" /*Black Sneakers*/, 16);
num2=11;
num3=2;
num=50;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_3" /*Desert Green Sneakers*/, 16);
num2=11;
num3=3;
num=50;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_4" /*Mint Sneakers*/, 16);
num2=11;
num3=4;
num=50;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_5" /*Freeway Sneakers*/, 16);
num2=11;
num3=5;
num=50;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_6" /*Animal Fashion Sneakers*/, 16);
num2=11;
num3=6;
num=50;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_7" /*Feud Classic Sneakers*/, 16);
num2=11;
num3=7;
num=50;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_8" /*Cacao Blend Sneakers*/, 16);
num2=11;
num3=8;
num=50;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_9" /*Magnetics Sneakers*/, 16);
num2=11;
num3=9;
num=50;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_10" /*Blue Sneakers*/, 16);
num2=11;
num3=10;
num=50;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_11" /*White Sneakers*/, 16);
num2=11;
num3=11;
num=50;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_12" /*Winter Camo Sneakers*/, 16);
num2=11;
num3=12;
num=50;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_13" /*Forest Camo Sneakers*/, 16);
num2=11;
num3=13;
num=50;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_14" /*Soft Seas Sneakers*/, 16);
num2=11;
num3=14;
num=50;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_11_15" /*Latte Sneakers*/, 16);
num2=11;
num3=15;
num=50;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_0" /*White Skate Sneakers*/, 16);
num2=12;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_1" /*Green Skate Sneakers*/, 16);
num2=12;
num3=1;
num=25;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_2" /*Two-Tone Skate Sneakers*/, 16);
num2=12;
num3=2;
num=20;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_3" /*Black Skate Sneakers*/, 16);
num2=12;
num3=3;
num=24;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_4" /*Blue Skate Sneakers*/, 16);
num2=12;
num3=4;
num=25;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_5" /*Orange Accent Skate Sneakers*/, 16);
num2=12;
num3=5;
num=27;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_6" /*Red Skate Sneakers*/, 16);
num2=12;
num3=6;
num=29;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_7" /*Orange Skate Sneakers*/, 16);
num2=12;
num3=7;
num=27;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_8" /*Mocha Skate Sneakers*/, 16);
num2=12;
num3=8;
num=25;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_9" /*Black Skate Sneakers*/, 16);
num2=12;
num3=9;
num=30;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_10" /*Fresh Skate Sneakers*/, 16);
num2=12;
num3=10;
num=28;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_12_11" /*Green Skate Sneakers*/, 16);
num2=12;
num3=11;
num=30;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_13_0" /*Black Oxfords*/, 16);
num2=13;
num3=0;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_0" /*Gray Skate Shoes*/, 16);
num2=14;
num3=0;
num=155;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_1" /*White Skate Shoes*/, 16);
num2=14;
num3=1;
num=155;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_2" /*Chestnut Skate Shoes*/, 16);
num2=14;
num3=2;
num=165;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_3" /*Jade Accent Skate Shoes*/, 16);
num2=14;
num3=3;
num=170;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_4" /*Two-Tone Skate Shoes*/, 16);
num2=14;
num3=4;
num=160;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_5" /*Red Piped Skate Shoes*/, 16);
num2=14;
num3=5;
num=165;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_6" /*Red Skate Shoes*/, 16);
num2=14;
num3=6;
num=170;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_14_7" /*Beige Skate Shoes*/, 16);
num2=14;
num3=7;
num=160;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_0" /*Black Leather Loafers*/, 16);
num2=16;
num3=0;
num=720;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_1" /*Gray Leather Loafers*/, 16);
num2=16;
num3=1;
num=680;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_2" /*Cream Leather Loafers*/, 16);
num2=16;
num3=2;
num=650;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_3" /*Brown Leather Loafers*/, 16);
num2=16;
num3=3;
num=670;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_4" /*White Leather Loafers*/, 16);
num2=16;
num3=4;
num=700;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_5" /*Russet Leather Loafers*/, 16);
num2=16;
num3=5;
num=680;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_6" /*White Snakeskin Loafers*/, 16);
num2=16;
num3=6;
num=720;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_7" /*Rattlesnake Loafers*/, 16);
num2=16;
num3=7;
num=740;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_8" /*Brown Snakeskin Loafers*/, 16);
num2=16;
num3=8;
num=760;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_9" /*Zebra Two-Tone Loafers*/, 16);
num2=16;
num3=9;
num=780;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_10" /*Pale Reptile Loafers*/, 16);
num2=16;
num3=10;
num=750;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_16_11" /*Tan Alligator Loafers*/, 16);
num2=16;
num3=11;
num=700;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_0" /*All Black Oxfords*/, 16);
num2=17;
num3=0;
num=790;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_1" /*Chocolate Oxfords*/, 16);
num2=17;
num3=1;
num=750;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_2" /*Chestnut Oxfords*/, 16);
num2=17;
num3=2;
num=860;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_3" /*Tan Oxfords*/, 16);
num2=17;
num3=3;
num=750;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_4" /*White Oxfords*/, 16);
num2=17;
num3=4;
num=790;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_5" /*Ash Oxfords*/, 16);
num2=17;
num3=5;
num=840;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_6" /*Gray Two-Tone Oxfords*/, 16);
num2=17;
num3=6;
num=820;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_7" /*Beige Oxfords*/, 16);
num2=17;
num3=7;
num=800;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_8" /*Topaz Oxfords*/, 16);
num2=17;
num3=8;
num=850;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_9" /*Black Oxfords*/, 16);
num2=17;
num3=9;
num=870;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_10" /*Lime Oxfords*/, 16);
num2=17;
num3=10;
num=720;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_11" /*Hawthorn Oxfords*/, 16);
num2=17;
num3=11;
num=740;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_12" /*Coffee Oxfords*/, 16);
num2=17;
num3=12;
num=800;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_13" /*Gray Oxfords*/, 16);
num2=17;
num3=13;
num=750;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_14" /*Cream Oxfords*/, 16);
num2=17;
num3=14;
num=770;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_17_15" /*Navy Oxfords*/, 16);
num2=17;
num3=15;
num=860;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_0" /*Black Slip-Ons*/, 16);
num2=18;
num3=0;
num=850;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_1" /*Red Slip-Ons*/, 16);
num2=18;
num3=1;
num=800;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_2" /*Brown Slip-Ons*/, 16);
num2=18;
num3=2;
num=780;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_3" /*Green Stripe Slip-Ons*/, 16);
num2=18;
num3=3;
num=890;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_4" /*Green Slip-Ons*/, 16);
num2=18;
num3=4;
num=820;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_5" /*Copper Slip-Ons*/, 16);
num2=18;
num3=5;
num=840;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=18;
num3=6;
num=870;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_7" /*Navy Slip-Ons*/, 16);
num2=18;
num3=7;
num=930;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_8" /*Blue Slip-Ons*/, 16);
num2=18;
num3=8;
num=880;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_9" /*Beige Slip-Ons*/, 16);
num2=18;
num3=9;
num=900;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_10" /*White Slip-Ons*/, 16);
num2=18;
num3=10;
num=920;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_11" /*Tan Slip-Ons*/, 16);
num2=18;
num3=11;
num=970;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=18;
num3=12;
num=990;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_13" /*Two-Tone Slip-Ons*/, 16);
num2=18;
num3=13;
num=960;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=18;
num3=14;
num=980;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_18_15" /*Gray Slip-Ons*/, 16);
num2=18;
num3=15;
num=950;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_0" /*Brown Wingtips*/, 16);
num2=19;
num3=0;
num=110;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_1" /*Navy Wingtips*/, 16);
num2=19;
num3=1;
num=115;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_2" /*Coffee Wingtips*/, 16);
num2=19;
num3=2;
num=120;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_3" /*Burgundy Wingtips*/, 16);
num2=19;
num3=3;
num=110;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_4" /*Blue Wingtips*/, 16);
num2=19;
num3=4;
num=125;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_5" /*Woodland Camo Wingtips*/, 16);
num2=19;
num3=5;
num=128;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_6" /*Black Wingtips*/, 16);
num2=19;
num3=6;
num=135;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_7" /*Tan Wingtips*/, 16);
num2=19;
num3=7;
num=130;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_8" /*Purple Wingtips*/, 16);
num2=19;
num3=8;
num=145;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_9" /*Brown Wingtips*/, 16);
num2=19;
num3=9;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_10" /*Chocolate Wingtips*/, 16);
num2=19;
num3=10;
num=120;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_11" /*Green Wingtips*/, 16);
num2=19;
num3=11;
num=150;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_12" /*Ash Wingtips*/, 16);
num2=19;
num3=12;
num=125;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_13" /*Olive Wingtips*/, 16);
num2=19;
num3=13;
num=120;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_14" /*Two-Tone Wingtips*/, 16);
num2=19;
num3=14;
num=130;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P1_19_15" /*Yellow Wingtips*/, 16);
num2=19;
num3=15;
num=110;
break;
default:
func_112(num6, iParam0, 134, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_141(int iParam0) // Position - 0x154E0{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_0" /*Cream Cargo Shorts*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_1" /*Sand Cargo Shorts*/, 16);
num2=0;
num3=1;
num=32;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_2" /*Navy Cargo Shorts*/, 16);
num2=0;
num3=2;
num=38;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_0_3" /*Olive Cargo Shorts*/, 16);
num2=0;
num3=3;
num=44;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_2_0" /*Black Tuxedo Pants*/, 16);
num2=2;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_0" /*Gray Golf Pants*/, 16);
num2=6;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_1" /*Cream Golf Pants*/, 16);
num2=6;
num3=1;
num=690;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_2" /*Tan Plaid Golf Pants*/, 16);
num2=6;
num3=2;
num=720;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_3" /*Tartan Golf Pants*/, 16);
num2=6;
num3=3;
num=850;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=6;
num3=4;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_5" /*Dark Plaid Golf Pants*/, 16);
num2=6;
num3=5;
num=740;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_6" /*Brown Plaid Golf Pants*/, 16);
num2=6;
num3=6;
num=750;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_6_7" /*Slate Golf Pants*/, 16);
num2=6;
num3=7;
num=790;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
flag=true;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_0" /*Slate Baggy Jeans*/, 16);
num2=8;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_1" /*Blue Baggy Jeans*/, 16);
num2=8;
num3=1;
num=145;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_2" /*Gray Baggy Jeans*/, 16);
num2=8;
num3=2;
num=140;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_3" /*Pale Blue Baggy Jeans*/, 16);
num2=8;
num3=3;
num=148;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_4" /*Black Baggy Jeans*/, 16);
num2=8;
num3=4;
num=150;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_5" /*Blue-Green Baggy Jeans*/, 16);
num2=8;
num3=5;
num=154;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_8_6" /*Faded Baggy Jeans*/, 16);
num2=8;
num3=6;
num=158;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_0" /*Beige Chinos*/, 16);
num2=11;
num3=0;
num=820;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_1" /*Olive Chinos*/, 16);
num2=11;
num3=1;
num=820;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_2" /*Black Chinos*/, 16);
num2=11;
num3=2;
num=850;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_3" /*Off-White Chinos*/, 16);
num2=11;
num3=3;
num=850;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_4" /*Gray Chinos*/, 16);
num2=11;
num3=4;
num=920;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_11_5" /*Navy Chinos*/, 16);
num2=11;
num3=5;
num=950;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_0" /*Silver Sweatpants*/, 16);
num2=13;
num3=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_1" /*Gray Sweatpants*/, 16);
num2=13;
num3=1;
num=45;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_2" /*Topaz Sweatpants*/, 16);
num2=13;
num3=2;
num=48;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_3" /*Ash Sweatpants*/, 16);
num2=13;
num3=3;
num=45;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_4" /*Slate Sweatpants*/, 16);
num2=13;
num3=4;
num=48;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_5" /*Olive Sweatpants*/, 16);
num2=13;
num3=5;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_6" /*Jade Sweatpants*/, 16);
num2=13;
num3=6;
num=55;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_7" /*Dark Green Sweatpants*/, 16);
num2=13;
num3=7;
num=58;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_8" /*Teal Sweatpants*/, 16);
num2=13;
num3=8;
num=60;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_9" /*Brown Sweatpants*/, 16);
num2=13;
num3=9;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_10" /*Kingz Green Sweatpants*/, 16);
num2=13;
num3=10;
num=62;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_13_11" /*Gray Stripe Sweatpants*/, 16);
num2=13;
num3=11;
num=65;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_14_0" /*White Shorts*/, 16);
num2=14;
num3=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_0" /*Gray Plaid Pants*/, 16);
num2=15;
num3=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_1" /*Silver Plaid Pants*/, 16);
num2=15;
num3=1;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_2" /*Charcoal Plaid Pants*/, 16);
num2=15;
num3=2;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_3" /*Tan Plaid Pants*/, 16);
num2=15;
num3=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_4" /*Charcoal Pants*/, 16);
num2=15;
num3=4;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_5" /*Ash Pants*/, 16);
num2=15;
num3=5;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_6" /*Beige Pants*/, 16);
num2=15;
num3=6;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_7" /*Cream Pants*/, 16);
num2=15;
num3=7;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_8" /*Navy Plaid Pants*/, 16);
num2=15;
num3=8;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_9" /*Off-White Pants*/, 16);
num2=15;
num3=9;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_10" /*White Pants*/, 16);
num2=15;
num3=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_11" /*Subtle Blue Pants*/, 16);
num2=15;
num3=11;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_12" /*Navy Pants*/, 16);
num2=15;
num3=12;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_13" /*Rust Pants*/, 16);
num2=15;
num3=13;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_14" /*Green Pants*/, 16);
num2=15;
num3=14;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_15_15" /*Tan Pants*/, 16);
num2=15;
num3=15;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_16_0" /*Combat Pants*/, 16);
num2=16;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=16;
num3=1;
flag=true;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_0" /*White Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_1" /*Gray Boxers*/, 16);
num2=18;
num3=1;
num=160;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_2" /*Black Boxers*/, 16);
num2=18;
num3=2;
num=180;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_3" /*Kings Ash Boxers*/, 16);
num2=18;
num3=3;
num=180;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_4" /*Feud Green Boxers*/, 16);
num2=18;
num3=4;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_18_5" /*Feud White Boxers*/, 16);
num2=18;
num3=5;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_19_0" /*Black Tuxedo Pants*/, 16);
num2=19;
num3=0;
flag=true;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_0" /*Indigo Jeans*/, 16);
num2=20;
num3=0;
num=118;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_1" /*Black Jeans*/, 16);
num2=20;
num3=1;
num=120;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_2" /*Gray Faded Jeans*/, 16);
num2=20;
num3=2;
num=128;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_3" /*Navy Jeans*/, 16);
num2=20;
num3=3;
num=128;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_4" /*Brown Jeans*/, 16);
num2=20;
num3=4;
num=130;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_5" /*Blue Jeans*/, 16);
num2=20;
num3=5;
num=145;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_6" /*Olive Jeans*/, 16);
num2=20;
num3=6;
num=138;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_7" /*Black Faded Jeans*/, 16);
num2=20;
num3=7;
num=132;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_20_8" /*Coffee Jeans*/, 16);
num2=20;
num3=8;
num=148;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_0" /*Indigo Skinny Jeans*/, 16);
num2=21;
num3=0;
num=118;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_1" /*Black Skinny Jeans*/, 16);
num2=21;
num3=1;
num=118;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_2" /*Aqua Skinny Jeans*/, 16);
num2=21;
num3=2;
num=118;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_3" /*Brown Skinny Jeans*/, 16);
num2=21;
num3=3;
num=129;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_4" /*Blue Skinny Jeans*/, 16);
num2=21;
num3=4;
num=135;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_5" /*Red Skinny Jeans*/, 16);
num2=21;
num3=5;
num=135;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_6" /*Gray Skinny Jeans*/, 16);
num2=21;
num3=6;
num=118;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_7" /*Green Skinny Jeans*/, 16);
num2=21;
num3=7;
num=118;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_21_8" /*Coffee Skinny Jeans*/, 16);
num2=21;
num3=8;
num=118;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_0" /*LS Panic Charcoal Shorts*/, 16);
num2=22;
num3=0;
num=55;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_1" /*LS Panic Yellow Shorts*/, 16);
num2=22;
num3=1;
num=55;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_2" /*Prolaps White Shorts*/, 16);
num2=22;
num3=2;
num=59;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_3" /*Prolaps Blue Shorts*/, 16);
num2=22;
num3=3;
num=59;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_4" /*LC Salamanders Red Shorts*/, 16);
num2=22;
num3=4;
num=65;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_5" /*LC Salamanders Green Shorts*/, 16);
num2=22;
num3=5;
num=65;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_6" /*LS Shrimps Gray Shorts*/, 16);
num2=22;
num3=6;
num=69;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_7" /*LS Shrimps White Shorts*/, 16);
num2=22;
num3=7;
num=69;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_8" /*LOB Gray Shorts*/, 16);
num2=22;
num3=8;
num=75;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_9" /*LOB Blue Shorts*/, 16);
num2=22;
num3=9;
num=75;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_10" /*LOB Green Shorts*/, 16);
num2=22;
num3=10;
num=65;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_11" /*LOB Tan Shorts*/, 16);
num2=22;
num3=11;
num=65;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_12" /*LOB Orange Shorts*/, 16);
num2=22;
num3=12;
num=65;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_22_13" /*LOB Pale Blue Shorts*/, 16);
num2=22;
num3=13;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_0" /*Broker White Shorts*/, 16);
num2=23;
num3=0;
num=38;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_1" /*Broker Black Shorts*/, 16);
num2=23;
num3=1;
num=38;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_2" /*Broker Gray Shorts*/, 16);
num2=23;
num3=2;
num=28;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_3" /*Broker Navy Shorts*/, 16);
num2=23;
num3=3;
num=34;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_4" /*Broker Green Shorts*/, 16);
num2=23;
num3=4;
num=36;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P1_23_5" /*Broker Brown Shorts*/, 16);
num2=23;
num3=5;
num=32;
break;
default:
func_112(num6, iParam0, 117, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_142(int iParam0) // Position - 0x1619D{
if(iParam0 < 107) func_145(iParam0);
elseif(iParam0 < 227) func_144(iParam0);
else func_143(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_112(3, iParam0, 318, -1);
return;
}


void func_143(int iParam0) // Position - 0x161E3{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=23;
num3=0;
num5=3;
break;
case 228:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=23;
num3=1;
num5=3;
break;
case 229:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=23;
num3=2;
num5=3;
break;
case 230:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=23;
num3=3;
num5=3;
break;
case 231:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=23;
num3=4;
num5=3;
break;
case 232:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=23;
num3=5;
num5=3;
break;
case 233:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=23;
num3=6;
num5=3;
break;
case 234:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=23;
num3=7;
num5=3;
break;
case 235:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=23;
num3=8;
num5=3;
break;
case 236:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=23;
num3=9;
num5=3;
break;
case 237:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=23;
num3=10;
num5=3;
break;
case 238:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=23;
num3=11;
num5=3;
break;
case 239:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=23;
num3=12;
num5=3;
break;
case 240:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=23;
num3=13;
num5=3;
break;
case 241:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=23;
num3=14;
num5=3;
break;
case 242:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=23;
num3=15;
num5=3;
break;
case 243:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_0" /*Navy Plaid Vest*/, 16);
num2=24;
num3=0;
num=2200;
num5=3;
break;
case 244:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_1" /*Gray Plaid Vest*/, 16);
num2=24;
num3=1;
num=2200;
num5=3;
break;
case 245:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_2" /*Silver Plaid Vest*/, 16);
num2=24;
num3=2;
num=2200;
num5=3;
break;
case 246:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_3" /*Charcoal Vest*/, 16);
num2=24;
num3=3;
num=2200;
num5=3;
break;
case 247:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_4" /*Plum Plaid Vest*/, 16);
num2=24;
num3=4;
num=2200;
num5=3;
break;
case 248:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_5" /*All Ash Vest*/, 16);
num2=24;
num3=5;
num=2200;
num5=3;
break;
case 249:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_6" /*Silverback Vest*/, 16);
num2=24;
num3=6;
num=2200;
num5=3;
break;
case 250:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_7" /*Gray Subtle Plaid Vest*/, 16);
num2=24;
num3=7;
num=2200;
num5=3;
break;
case 251:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_8" /*Green Plaid Vest*/, 16);
num2=24;
num3=8;
num=2200;
num5=3;
break;
case 252:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_9" /*Ash Plaid Vest*/, 16);
num2=24;
num3=9;
num=2200;
num5=3;
break;
case 253:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_10" /*Stone Plaid Vest*/, 16);
num2=24;
num3=10;
num=2200;
num5=3;
break;
case 254:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_11" /*Charcoal Plaid Vest*/, 16);
num2=24;
num3=11;
num=2200;
num5=3;
break;
case 255:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_12" /*White Vest*/, 16);
num2=24;
num3=12;
num=2200;
num5=3;
break;
case 256:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_13" /*Gray Vest*/, 16);
num2=24;
num3=13;
num=2200;
num5=3;
break;
case 257:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_14" /*Silver Light Plaid Vest*/, 16);
num2=24;
num3=14;
num=2200;
num5=3;
break;
case 258:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_24_15" /*All Silver Vest*/, 16);
num2=24;
num3=15;
num=2200;
num5=3;
break;
case 259:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_25_0" /*Gray Tuxedo Jacket*/, 16);
num2=25;
num3=0;
flag=true;
num5=3;
break;
case 260:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num5=1;
break;
case 261:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_0" /*Brown Shooting Vest*/, 16);
num2=27;
num3=0;
num=150;
break;
case 262:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_1" /*Woodland Shooting Vest*/, 16);
num2=27;
num3=1;
num=160;
break;
case 263:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_2" /*Taupe Shooting Vest*/, 16);
num2=27;
num3=2;
num=150;
break;
case 264:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_3" /*Brown Woven Shooting Vest*/, 16);
num2=27;
num3=3;
num=150;
break;
case 265:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_4" /*Field Shooting Vest*/, 16);
num2=27;
num3=4;
num=160;
break;
case 266:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_27_5" /*Forest Shooting Vest*/, 16);
num2=27;
num3=5;
num=160;
break;
case 267:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_0" /*Silver Hoodie*/, 16);
num2=28;
num3=0;
num=88;
break;
case 268:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=28;
num3=1;
num=60;
break;
case 269:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_2" /*LSGC Gray Hoodie*/, 16);
num2=28;
num3=2;
num=70;
break;
case 270:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_3" /*LSGC Urban Hoodie*/, 16);
num2=28;
num3=3;
num=80;
break;
case 271:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_4" /*LSGC Forest Hoodie*/, 16);
num2=28;
num3=4;
num=90;
break;
case 272:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_5" /*Ammu-Nation A Hoodie*/, 16);
num2=28;
num3=5;
num=80;
break;
case 273:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_6" /*Blauser Hoodie*/, 16);
num2=28;
num3=6;
num=70;
break;
case 274:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_7" /*Penetrators Orange Hoodie*/, 16);
num2=28;
num3=7;
num=95;
break;
case 275:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=28;
num3=8;
num=105;
break;
case 276:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_9" /*Blue Hoodie*/, 16);
num2=28;
num3=9;
num=95;
break;
case 277:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_10" /*Green Hoodie*/, 16);
num2=28;
num3=10;
num=110;
break;
case 278:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_11" /*LS Jardineros Hoodie*/, 16);
num2=28;
num3=11;
num=98;
break;
case 279:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_12" /*Ash 18 Hoodie*/, 16);
num2=28;
num3=12;
num=88;
break;
case 280:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_13" /*Red Mist XI Hoodie*/, 16);
num2=28;
num3=13;
num=98;
break;
case 281:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_14" /*Eris Charcoal Hoodie*/, 16);
num2=28;
num3=14;
num=110;
break;
case 282:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_28_15" /*OG Hoodie*/, 16);
num2=28;
num3=15;
num=98;
break;
case 283:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_0" /*White V Neck T-Shirt*/, 16);
num2=29;
num3=0;
num=250;
break;
case 284:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_1" /*Ash V Neck T-Shirt*/, 16);
num2=29;
num3=1;
num=270;
break;
case 285:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_2" /*Black V Neck T-Shirt*/, 16);
num2=29;
num3=2;
num=280;
break;
case 286:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_3" /*Brown V Neck T-Shirt*/, 16);
num2=29;
num3=3;
num=275;
break;
case 287:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_4" /*Olive V Neck T-Shirt*/, 16);
num2=29;
num3=4;
num=290;
break;
case 288:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_5" /*Corkers V Neck T-Shirt*/, 16);
num2=29;
num3=5;
num=35;
break;
case 289:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_6" /*Feud V Neck T-Shirt*/, 16);
num2=29;
num3=6;
num=35;
break;
case 290:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_7" /*Magnetics V Neck T-Shirt*/, 16);
num2=29;
num3=7;
num=35;
break;
case 291:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_8" /*Mint V Neck T-Shirt*/, 16);
num2=29;
num3=8;
num=295;
break;
case 292:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_9" /*Harsh Souls V Neck T-Shirt*/, 16);
num2=29;
num3=9;
num=35;
break;
case 293:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_10" /*Trey Baker V Neck T-Shirt*/, 16);
num2=29;
num3=10;
num=35;
break;
case 294:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_11" /*Fuque V Neck T-Shirt*/, 16);
num2=29;
num3=11;
num=35;
break;
case 295:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_29_12" /*Fellowship V Neck T-Shirt*/, 16);
num2=29;
num3=12;
break;
case 296:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_0" /*Green Cardigan*/, 16);
num2=30;
num3=0;
num=1750;
break;
case 297:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_1" /*Gray Cardigan*/, 16);
num2=30;
num3=1;
num=1920;
break;
case 298:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_2" /*Slate Cardigan*/, 16);
num2=30;
num3=2;
num=1890;
break;
case 299:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_3" /*Blue Cardigan*/, 16);
num2=30;
num3=3;
num=1850;
break;
case 300:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_4" /*Red Cardigan*/, 16);
num2=30;
num3=4;
num=1750;
break;
case 301:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_5" /*Charcoal Cardigan*/, 16);
num2=30;
num3=5;
num=1990;
break;
case 302:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_6" /*White Cardigan*/, 16);
num2=30;
num3=6;
num=1820;
break;
case 303:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_7" /*Silver Cardigan*/, 16);
num2=30;
num3=7;
num=1990;
break;
case 304:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_8" /*Pale Blue Cardigan*/, 16);
num2=30;
num3=8;
num=1920;
break;
case 305:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_9" /*Aqua Cardigan*/, 16);
num2=30;
num3=9;
num=1850;
break;
case 306:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_10" /*Gray Two-Tone Cardigan*/, 16);
num2=30;
num3=10;
num=1990;
break;
case 307:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_11" /*Pink Cardigan*/, 16);
num2=30;
num3=11;
num=1790;
break;
case 308:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_30_12" /*Yellow Cardigan*/, 16);
num2=30;
num3=12;
num=1790;
break;
case 309:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_0" /*LS Panic Gray Jersey*/, 16);
num2=31;
num3=0;
num=69;
break;
case 310:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_1" /*LS Panic Yellow Jersey*/, 16);
num2=31;
num3=1;
num=75;
break;
case 311:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_2" /*Penetrators White Jersey*/, 16);
num2=31;
num3=2;
num=75;
break;
case 312:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_3" /*Penetrators Blue Jersey*/, 16);
num2=31;
num3=3;
num=79;
break;
case 313:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_4" /*LC Salamanders Red Jersey*/, 16);
num2=31;
num3=4;
num=79;
break;
case 314:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_5" /*LC Salamanders Green Jersey*/, 16);
num2=31;
num3=5;
num=89;
break;
case 315:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_6" /*LS Shrimps Gray Jersey*/, 16);
num2=31;
num3=6;
num=85;
break;
case 316:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_7" /*LS Shrimps White Jersey*/, 16);
num2=31;
num3=7;
num=85;
break;
case 317:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_31_8" /*Uptown Riders Jersey*/, 16);
num2=31;
num3=8;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_144(int iParam0) // Position - 0x16C88{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_0" /*Snake A Jacket*/, 16);
num2=12;
num3=0;
num=195;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_1" /*Eagle 69 Jacket*/, 16);
num2=12;
num3=1;
num=420;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_2" /*LS Corkers 33 Jacket*/, 16);
num2=12;
num3=2;
num=390;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_3" /*LSP 41 Jacket*/, 16);
num2=12;
num3=3;
num=450;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_4" /*LS Corkers E Jacket*/, 16);
num2=12;
num3=4;
num=400;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_5" /*LS Squeezers Jacket*/, 16);
num2=12;
num3=5;
num=390;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_6" /*The Feud 69 Jacket*/, 16);
num2=12;
num3=6;
num=570;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_7" /*LS Pounders Jacket*/, 16);
num2=12;
num3=7;
num=390;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_8" /*SA Jacket*/, 16);
num2=12;
num3=8;
num=470;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_9" /*Redwood A Jacket*/, 16);
num2=12;
num3=9;
num=390;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_10" /*Uptown Riders Jacket*/, 16);
num2=12;
num3=10;
num=520;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_11" /*The Feud Black Jacket*/, 16);
num2=12;
num3=11;
num=490;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_12" /*Yeti Jacket*/, 16);
num2=12;
num3=12;
num=490;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_13" /*LSP 71 Jacket*/, 16);
num2=12;
num3=13;
num=590;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_14" /*Dust Devils Jacket*/, 16);
num2=12;
num3=14;
num=560;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_12_15" /*SA 56 Jacket*/, 16);
num2=12;
num3=15;
num=520;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_0" /*Gray Hoodie*/, 16);
num2=13;
num3=0;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_1" /*Kingz of Los Santos Hoodie*/, 16);
num2=13;
num3=1;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_2" /*LS Black Hoodie*/, 16);
num2=13;
num3=2;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_3" /*Dark Blue Hoodie*/, 16);
num2=13;
num3=3;
num=90;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_4" /*LS Mustard Hoodie*/, 16);
num2=13;
num3=4;
num=85;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_5" /*Crevis Hoodie*/, 16);
num2=13;
num3=5;
num=45;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_6" /*Dust Devils Hoodie*/, 16);
num2=13;
num3=6;
num=90;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_7" /*Feud Olive Hoodie*/, 16);
num2=13;
num3=7;
num=47;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_8" /*Eris Hoodie*/, 16);
num2=13;
num3=8;
num=45;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_9" /*Hinterland Hoodie*/, 16);
num2=13;
num3=9;
num=48;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_10" /*Feud Mint Hoodie*/, 16);
num2=13;
num3=10;
num=45;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_11" /*Penetrators Gray Hoodie*/, 16);
num2=13;
num3=11;
num=85;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_12" /*Ash Hoodie*/, 16);
num2=13;
num3=12;
num=45;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_13" /*Rearwall Hoodie*/, 16);
num2=13;
num3=13;
num=47;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_14" /*Trey Baker Hoodie*/, 16);
num2=13;
num3=14;
num=45;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_13_15" /*Feud Camo Hoodie*/, 16);
num2=13;
num3=15;
num=48;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_0" /*Gray Jacket*/, 16);
num2=14;
num3=0;
num=290;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_1" /*Charcoal Jacket*/, 16);
num2=14;
num3=1;
num=290;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_2" /*Silver Jacket*/, 16);
num2=14;
num3=2;
num=290;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_3" /*Olive Jacket*/, 16);
num2=14;
num3=3;
num=290;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_4" /*Brown Jacket*/, 16);
num2=14;
num3=4;
num=290;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_5" /*Desert Sand Jacket*/, 16);
num2=14;
num3=5;
num=290;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_6" /*Field Camo Jacket*/, 16);
num2=14;
num3=6;
num=65;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_14_7" /*Desert Camo Jacket*/, 16);
num2=14;
num3=7;
num=65;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_0" /*White T-Shirt*/, 16);
num2=15;
num3=0;
num=200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_1" /*Gray T-Shirt*/, 16);
num2=15;
num3=1;
num=220;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_2" /*Slate T-Shirt*/, 16);
num2=15;
num3=2;
num=220;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_3" /*Jade T-Shirt*/, 16);
num2=15;
num3=3;
num=240;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_4" /*100% T-Shirt*/, 16);
num2=15;
num3=4;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_5" /*Navy T-Shirt*/, 16);
num2=15;
num3=5;
num=250;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_6" /*Black T-Shirt*/, 16);
num2=15;
num3=6;
num=260;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_7" /*LC Wrath T-Shirt*/, 16);
num2=15;
num3=7;
num=40;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_8" /*LOB T-Shirt*/, 16);
num2=15;
num3=8;
num=50;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_9" /*UCLS Bookworms T-Shirt*/, 16);
num2=15;
num3=9;
num=45;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_10" /*Los Santos Red T-Shirt*/, 16);
num2=15;
num3=10;
num=40;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_15_11" /*Queensbury Boxing T-Shirt*/, 16);
num2=15;
num3=11;
num=55;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_16_0" /*Black Shirt*/, 16);
num2=16;
num3=0;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_0" /*Blue Jacket*/, 16);
num2=17;
num3=0;
num=40;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_1" /*OG Slate Jacket*/, 16);
num2=17;
num3=1;
num=50;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_2" /*OG White Jacket*/, 16);
num2=17;
num3=2;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_3" /*Corkers Green Jacket*/, 16);
num2=17;
num3=3;
num=50;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_4" /*Deep Gray Jacket*/, 16);
num2=17;
num3=4;
num=50;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_5" /*Kingz Banded Jacket*/, 16);
num2=17;
num3=5;
num=50;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_6" /*Stank Forest Camo Jacket*/, 16);
num2=17;
num3=6;
num=50;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_7" /*Trey Baker Camo Jacket*/, 16);
num2=17;
num3=7;
num=50;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_8" /*Coffee Jacket*/, 16);
num2=17;
num3=8;
num=50;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_9" /*Plain Coffee Jacket*/, 16);
num2=17;
num3=9;
num=50;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_10" /*Fruntalot Green Jacket*/, 16);
num2=17;
num3=10;
num=50;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_11" /*Mocha Jacket*/, 16);
num2=17;
num3=11;
num=50;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_12" /*Brown Jacket*/, 16);
num2=17;
num3=12;
num=50;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_13" /*LS Snake Weave Jacket*/, 16);
num2=17;
num3=13;
num=50;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_14" /*Feud Animal Print Jacket*/, 16);
num2=17;
num3=14;
num=50;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_17_15" /*Fruntalot Techno Jacket*/, 16);
num2=17;
num3=15;
num=50;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_0" /*Gray Plaid Jacket*/, 16);
num2=18;
num3=0;
num5=3;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_1" /*Ash Plaid Jacket*/, 16);
num2=18;
num3=1;
num5=3;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_2" /*Charcoal Plaid Jacket*/, 16);
num2=18;
num3=2;
num5=3;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_3" /*Tan Plaid Jacket*/, 16);
num2=18;
num3=3;
num5=3;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_4" /*Slate Jacket*/, 16);
num2=18;
num3=4;
num5=3;
break;
case 181:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_5" /*Silver Jacket*/, 16);
num2=18;
num3=5;
num5=3;
break;
case 182:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_6" /*Stone Jacket*/, 16);
num2=18;
num3=6;
num5=3;
break;
case 183:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_7" /*Cream Jacket*/, 16);
num2=18;
num3=7;
num5=3;
break;
case 184:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_8" /*Navy Plaid Piped Jacket*/, 16);
num2=18;
num3=8;
num5=3;
break;
case 185:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_9" /*Off-White Jacket*/, 16);
num2=18;
num3=9;
num5=3;
break;
case 186:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_10" /*Red Piped Jacket*/, 16);
num2=18;
num3=10;
num5=3;
break;
case 187:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_11" /*Gray Piped Jacket*/, 16);
num2=18;
num3=11;
num5=3;
break;
case 188:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_12" /*Navy Jacket*/, 16);
num2=18;
num3=12;
num5=3;
break;
case 189:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_13" /*Russet Piped Jacket*/, 16);
num2=18;
num3=13;
num5=3;
break;
case 190:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_14" /*Green Jacket*/, 16);
num2=18;
num3=14;
num5=3;
break;
case 191:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_18_15" /*Beige Jacket*/, 16);
num2=18;
num3=15;
num5=3;
break;
case 192:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_0" /*Blue Striped Shirt*/, 16);
num2=19;
num3=0;
num=480;
num5=3;
break;
case 193:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_1" /*Beige Striped Shirt*/, 16);
num2=19;
num3=1;
num=440;
num5=3;
break;
case 194:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_2" /*Gray Shirt*/, 16);
num2=19;
num3=2;
num=440;
num5=3;
break;
case 195:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_3" /*Slate Shirt*/, 16);
num2=19;
num3=3;
num=520;
num5=3;
break;
case 196:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_4" /*Green Shirt*/, 16);
num2=19;
num3=4;
num=440;
num5=3;
break;
case 197:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_5" /*Picnic Plaid Shirt*/, 16);
num2=19;
num3=5;
num=440;
num5=3;
break;
case 198:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_6" /*White Shirt*/, 16);
num2=19;
num3=6;
num=480;
num5=3;
break;
case 199:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_7" /*Light Green Plaid Shirt*/, 16);
num2=19;
num3=7;
num=480;
num5=3;
break;
case 200:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_8" /*Pink Striped Shirt*/, 16);
num2=19;
num3=8;
num=480;
num5=3;
break;
case 201:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_9" /*Country Check Shirt*/, 16);
num2=19;
num3=9;
num=480;
num5=3;
break;
case 202:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_10" /*Off-White Striped Shirt*/, 16);
num2=19;
num3=10;
num=480;
num5=3;
break;
case 203:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_11" /*Russet Striped Shirt*/, 16);
num2=19;
num3=11;
num=480;
num5=3;
break;
case 204:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_12" /*Sea Green Plaid Shirt*/, 16);
num2=19;
num3=12;
num=520;
num5=3;
break;
case 205:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_13" /*Navy Shirt*/, 16);
num2=19;
num3=13;
num=520;
num5=3;
break;
case 206:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_14" /*Brown Check Shirt*/, 16);
num2=19;
num3=14;
num=520;
num5=3;
break;
case 207:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_19_15" /*Sand Check Shirt*/, 16);
num2=19;
num3=15;
num=440;
num5=3;
break;
case 208:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
num5=4;
break;
case 209:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_0" /*Black Jacket*/, 16);
num2=21;
num3=0;
num=220;
break;
case 210:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_1" /*Sand Jacket*/, 16);
num2=21;
num3=1;
num=200;
break;
case 211:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_2" /*Teal Jacket*/, 16);
num2=21;
num3=2;
num=240;
break;
case 212:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_3" /*Gray Jacket*/, 16);
num2=21;
num3=3;
num=240;
break;
case 213:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_4" /*Gray Three-Way Jacket*/, 16);
num2=21;
num3=4;
num=260;
break;
case 214:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_5" /*Red Accent Jacket*/, 16);
num2=21;
num3=5;
num=275;
break;
case 215:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_6" /*Aqua Accent Jacket*/, 16);
num2=21;
num3=6;
num=275;
break;
case 216:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_7" /*Brown Two-Tone Jacket*/, 16);
num2=21;
num3=7;
num=280;
break;
case 217:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_8" /*White Jacket*/, 16);
num2=21;
num3=8;
num=280;
break;
case 218:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_9" /*Tan Two-Tone Jacket*/, 16);
num2=21;
num3=9;
num=280;
break;
case 219:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_10" /*Red Jacket*/, 16);
num2=21;
num3=10;
num=280;
break;
case 220:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_11" /*Olive Two-Tone Jacket*/, 16);
num2=21;
num3=11;
num=280;
break;
case 221:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_12" /*Three-Way Jacket*/, 16);
num2=21;
num3=12;
num=280;
break;
case 222:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_21_13" /*Ash Two-Tone Jacket*/, 16);
num2=21;
num3=13;
num=280;
break;
case 223:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_0" /*Navy Peacoat*/, 16);
num2=22;
num3=0;
num=3100;
num5=3;
break;
case 224:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_1" /*Gray Peacoat*/, 16);
num2=22;
num3=1;
num=2800;
num5=3;
break;
case 225:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_2" /*Brown Peacoat*/, 16);
num2=22;
num3=2;
num=2500;
num5=3;
break;
case 226:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_22_3" /*Black Peacoat*/, 16);
num2=22;
num3=3;
num=3000;
num5=3;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_145(int iParam0) // Position - 0x17A77{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_0" /*White Tank Top*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_1" /*Black Tank Top*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_2" /*Gray Tank Top*/, 16);
num2=0;
num3=2;
num=180;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_3" /*Feud Green Tank Top*/, 16);
num2=0;
num3=3;
num=22;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_4" /*Fruntalot Jade Tank Top*/, 16);
num2=0;
num3=4;
num=20;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_5" /*Fruntalot Brown Tank Top*/, 16);
num2=0;
num3=5;
num=18;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_6" /*Broker Blue Tank Top*/, 16);
num2=0;
num3=6;
num=19;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_7" /*Kingz Green Tank Top*/, 16);
num2=0;
num3=7;
num=22;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_8" /*Broker Gray Tank Top*/, 16);
num2=0;
num3=8;
num=20;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_9" /*Harsh Souls Tank Top*/, 16);
num2=0;
num3=9;
num=19;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_10" /*Sweatbox Tank Top*/, 16);
num2=0;
num3=10;
num=19;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_11" /*White Ringer Tank Top*/, 16);
num2=0;
num3=11;
num=18;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_12" /*Rearwall Tank Top*/, 16);
num2=0;
num3=12;
num=20;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_13" /*Feud 3 Tank Top*/, 16);
num2=0;
num3=13;
num=22;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_14" /*Kingz Charcoal Tank Top*/, 16);
num2=0;
num3=14;
num=19;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_0_15" /*Feud White Tank Top*/, 16);
num2=0;
num3=15;
num=22;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num5=4;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
flag=true;
num5=4;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=2;
flag=true;
num5=4;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=3;
flag=true;
num5=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=4;
flag=true;
num5=4;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=5;
flag=true;
num5=4;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_2_0" /*White Tuxedo Jacket*/, 16);
num2=2;
num3=0;
flag=true;
num5=3;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num5=1;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_0" /*White OG T-Shirt*/, 16);
num2=4;
num3=0;
num=20;
num5=2;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_1" /*Black OG T-Shirt*/, 16);
num2=4;
num3=1;
num=22;
num5=2;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_2" /*Ash OG T-Shirt*/, 16);
num2=4;
num3=2;
num=20;
num5=2;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_3" /*LC Swingers OG T-Shirt*/, 16);
num2=4;
num3=3;
num=25;
num5=2;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_4" /*Corkers Red OG T-Shirt*/, 16);
num2=4;
num3=4;
num=23;
num5=2;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_5" /*Corkers Green OG T-Shirt*/, 16);
num2=4;
num3=5;
num=25;
num5=2;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_6" /*Uptown Riders OG T-Shirt*/, 16);
num2=4;
num3=6;
num=28;
num5=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_7" /*Feud White OG T-Shirt*/, 16);
num2=4;
num3=7;
num=26;
num5=2;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_8" /*Salamanders OG T-Shirt*/, 16);
num2=4;
num3=8;
num=24;
num5=2;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_9" /*LC Rampage OG T-Shirt*/, 16);
num2=4;
num3=9;
num=27;
num5=2;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_10" /*Dust Devils OG T-Shirt*/, 16);
num2=4;
num3=10;
num=29;
num5=2;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_11" /*LS Gray OG T-Shirt*/, 16);
num2=4;
num3=11;
num=28;
num5=2;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_12" /*Los Santos Black OG T-Shirt*/, 16);
num2=4;
num3=12;
num=25;
num5=2;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_13" /*Los Santos White OG T-Shirt*/, 16);
num2=4;
num3=13;
num=22;
num5=2;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_14" /*Pounders OG T-Shirt*/, 16);
num2=4;
num3=14;
num=27;
num5=2;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_4_15" /*Feud Black OG T-Shirt*/, 16);
num2=4;
num3=15;
num=29;
num5=2;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num5=4;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_0" /*Pine Striped Sweater*/, 16);
num2=6;
num3=0;
num5=3;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_1" /*Yellow Sweater*/, 16);
num2=6;
num3=1;
num=1270;
num5=3;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_2" /*Blue Sweater*/, 16);
num2=6;
num3=2;
num=1270;
num5=3;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_3" /*Sand Striped Sweater*/, 16);
num2=6;
num3=3;
num=1270;
num5=3;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_4" /*Silver Sweater*/, 16);
num2=6;
num3=4;
num=1090;
num5=3;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_5" /*Gray Sweater*/, 16);
num2=6;
num3=5;
num=1090;
num5=3;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_6" /*Navy Argyle Sweater*/, 16);
num2=6;
num3=6;
num=1120;
num5=3;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_7" /*Sand Sweater*/, 16);
num2=6;
num3=7;
num=1120;
num5=3;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_8" /*Salmon Pink Sweater*/, 16);
num2=6;
num3=8;
num=1290;
num5=3;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_9" /*Turquoise Sweater*/, 16);
num2=6;
num3=9;
num=1290;
num5=3;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_10" /*Green Sweater*/, 16);
num2=6;
num3=10;
num=1320;
num5=3;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_11" /*Amethyst Sweater*/, 16);
num2=6;
num3=11;
num=1320;
num5=3;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_12" /*Yellow Argyle Sweater*/, 16);
num2=6;
num3=12;
num=1590;
num5=3;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_13" /*Gray Two-Tone Sweater*/, 16);
num2=6;
num3=13;
num=1590;
num5=3;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_14" /*Sand Argyle Sweater*/, 16);
num2=6;
num3=14;
num=1590;
num5=3;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_6_15" /*Charcoal Sweater*/, 16);
num2=6;
num3=15;
num=1320;
num5=3;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_0" /*Ash Shirt*/, 16);
num2=7;
num3=0;
num=98;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_1" /*Gray Shirt*/, 16);
num2=7;
num3=1;
num=98;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_2" /*Black Shirt*/, 16);
num2=7;
num3=2;
num=110;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_3" /*Silver Shirt*/, 16);
num2=7;
num3=3;
num=110;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_4" /*White Shirt*/, 16);
num2=7;
num3=4;
num=118;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_5" /*Olive Shirt*/, 16);
num2=7;
num3=5;
num=120;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_6" /*Navy Shirt*/, 16);
num2=7;
num3=6;
num=120;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_7" /*Red Shirt*/, 16);
num2=7;
num3=7;
num=129;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_8" /*Tan Check Shirt*/, 16);
num2=7;
num3=8;
num=125;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_9" /*Beige Gingham Shirt*/, 16);
num2=7;
num3=9;
num=125;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_10" /*Gray Gingham Shirt*/, 16);
num2=7;
num3=10;
num=129;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_11" /*Gray Check Shirt*/, 16);
num2=7;
num3=11;
num=129;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_12" /*Blue Shirt*/, 16);
num2=7;
num3=12;
num=135;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_13" /*Off-White Shirt*/, 16);
num2=7;
num3=13;
num=139;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_14" /*Pastel Check Shirt*/, 16);
num2=7;
num3=14;
num=145;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_7_15" /*Fruity Check Shirt*/, 16);
num2=7;
num3=15;
num=145;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_0" /*Blue Shirt*/, 16);
num2=8;
num3=0;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_1" /*Yellow Check Shirt*/, 16);
num2=8;
num3=1;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_2" /*Off-White Striped Shirt*/, 16);
num2=8;
num3=2;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_3" /*Off-White Shirt*/, 16);
num2=8;
num3=3;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_4" /*Red Check Shirt*/, 16);
num2=8;
num3=4;
num=30;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_5" /*Charcoal Shirt*/, 16);
num2=8;
num3=5;
num=38;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_6" /*Blue Check Shirt*/, 16);
num2=8;
num3=6;
num=32;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_7" /*Gingham Shirt*/, 16);
num2=8;
num3=7;
num=30;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_8" /*Aqua Check Shirt*/, 16);
num2=8;
num3=8;
num=33;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_9" /*Orange Shirt*/, 16);
num2=8;
num3=9;
num=35;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_10" /*Mint Check Shirt*/, 16);
num2=8;
num3=10;
num=35;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_11" /*Dark Gray Check Shirt*/, 16);
num2=8;
num3=11;
num=38;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_12" /*Purple Check Shirt*/, 16);
num2=8;
num3=12;
num=33;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_13" /*Olive Shirt*/, 16);
num2=8;
num3=13;
num=35;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_14" /*Cream Shirt*/, 16);
num2=8;
num3=14;
num=38;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_8_15" /*Fruity Check Shirt*/, 16);
num2=8;
num3=15;
num=32;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_0" /*White Longsleeve*/, 16);
num2=11;
num3=0;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_1" /*Gray Longsleeve*/, 16);
num2=11;
num3=1;
num=59;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_2" /*Black Longsleeve*/, 16);
num2=11;
num3=2;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_3" /*Ten Off Yellow Longsleeve*/, 16);
num2=11;
num3=3;
num=25;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_4" /*Kingz Of Los Santos Longsleeve*/, 16);
num2=11;
num3=4;
num=29;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_5" /*Yeti Rainbow Longsleeve*/, 16);
num2=11;
num3=5;
num=27;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_6" /*Ten Off Red Longsleeve*/, 16);
num2=11;
num3=6;
num=25;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_7" /*Trey Baker Longsleeve*/, 16);
num2=11;
num3=7;
num=27;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_8" /*Stank Striped Longsleeve*/, 16);
num2=11;
num3=8;
num=28;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_9" /*Feud Olive Longsleeve*/, 16);
num2=11;
num3=9;
num=30;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_10" /*Yeti Gray Longsleeve*/, 16);
num2=11;
num3=10;
num=29;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_11" /*Yogarishima Longsleeve*/, 16);
num2=11;
num3=11;
num=27;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_12" /*Yeti Camo Longsleeve*/, 16);
num2=11;
num3=12;
num=29;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_13" /*Crevis White Longsleeve*/, 16);
num2=11;
num3=13;
num=32;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_14" /*Yeti Blue Longsleeve*/, 16);
num2=11;
num3=14;
num=30;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P1_11_15" /*Uptown Ryders Longsleeve*/, 16);
num2=11;
num3=15;
num=28;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_146(int iParam0) // Position - 0x186C2{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_0" /*Fade*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_1" /*Triple Rails*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_2" /*Side Shaded*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_3" /*Wavy Siderows*/, 16);
num2=0;
num3=3;
num5=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_4" /*Snakes*/, 16);
num2=0;
num3=4;
num5=3;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_5" /*Tramlines*/, 16);
num2=0;
num3=5;
num5=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_6" /*The King Fresh*/, 16);
num2=0;
num3=6;
num5=3;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_7" /*Star Kutz*/, 16);
num2=0;
num3=7;
num5=3;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_8" /*Tigerized*/, 16);
num2=0;
num3=8;
num5=3;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_9" /*Abstraction*/, 16);
num2=0;
num3=9;
num5=3;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_10" /*Shutters*/, 16);
num2=0;
num3=10;
num5=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_11" /*Berms*/, 16);
num2=0;
num3=11;
num5=3;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_12" /*Mellowplex*/, 16);
num2=0;
num3=12;
num5=3;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_13" /*The Feud*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_14" /*Business on Top*/, 16);
num2=0;
num3=14;
num5=3;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_0_15" /*Wild Palm*/, 16);
num2=0;
num3=15;
num5=3;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_1_0" /*Lo Fro*/, 16);
num2=1;
num3=0;
num5=3;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_2_0" /*Blowout*/, 16);
num2=2;
num3=0;
num5=3;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_3_0" /*Cornrows*/, 16);
num2=3;
num3=0;
num5=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P1_4_0" /*Shape-up*/, 16);
num2=4;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 21, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_147(int iParam0) // Position - 0x1893B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=9;
break;
default:
func_112(num6, iParam0, 10, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_148(int iParam0, int iParam1) // Position - 0x18A81{
switch (iParam0){
case 0:
func_165(iParam1);
break;
case 2:
func_164(iParam1);
break;
case 3:
func_161(iParam1);
break;
case 4:
func_160(iParam1);
break;
case 6:
func_159(iParam1);
break;
case 5:
func_158(iParam1);
break;
case 8:
func_157(iParam1);
break;
case 9:
func_156(iParam1);
break;
case 10:
func_155(iParam1);
break;
case 1:
func_154(iParam1);
break;
case 7:
func_153(iParam1);
break;
case 11:
func_152(iParam1);
break;
case 12:
func_151(iParam1);
break;
case 13:
func_150(iParam1);
break;
case 14:
func_149(iParam1);
break;
}
return;
}


void func_149(int iParam0) // Position - 0x18B71{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=14;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=-1;
num3=0;
num=0;
num4=8;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H1" /*Blue Baseball Cap*/, 16);
num2=1;
num3=0;
num4=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H2" /*White Hockey Mask*/, 16);
num2=2;
num3=0;
num=320;
num4=11;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
num4=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
num4=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
num4=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
num4=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
num4=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
num4=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
num4=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
num4=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
num4=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
num4=0;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
num4=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
num4=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
num4=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
num4=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=6;
num4=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=7;
num4=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_H12" /*Black Knitted Hat*/, 16);
num2=12;
num3=0;
num4=0;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
num4=0;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_0" /*Green Monster Mask*/, 16);
num2=14;
num3=0;
num=270;
num4=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H8_1" /*Red Monster Mask*/, 16);
num2=14;
num3=1;
num=270;
num4=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_0" /*Pig Mask*/, 16);
num2=15;
num3=0;
num=200;
num4=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H9_1" /*Dark Pig Mask*/, 16);
num2=15;
num3=1;
num=200;
num4=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_0" /*Silver Skull Mask*/, 16);
num2=16;
num3=0;
num=350;
num4=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H10_1" /*Bone Skull Mask*/, 16);
num2=16;
num3=1;
num=350;
num4=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H11_0" /*Space Monkey Mask*/, 16);
num2=17;
num3=0;
num=450;
num4=0;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_0" /*White Hockey Mask*/, 16);
num2=18;
num3=0;
num=500;
num4=0;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H12_1" /*Red Hockey Mask*/, 16);
num2=18;
num3=1;
num=500;
num4=0;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_0" /*Ape Mask*/, 16);
num2=19;
num3=0;
num=50;
num4=0;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H13_1" /*Dark Ape Mask*/, 16);
num2=19;
num3=1;
num=50;
num4=0;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_0" /*Carnival Orange Mask*/, 16);
num2=20;
num3=0;
num=99;
num4=0;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_1" /*Carnival White Mask*/, 16);
num2=20;
num3=1;
num=99;
num4=0;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P1_H14_2" /*Carnival Blue Mask*/, 16);
num2=20;
num3=2;
num=99;
num4=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
num4=0;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
num4=0;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
num4=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=1;
num4=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=2;
num4=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=3;
num4=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=4;
num4=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=5;
num4=0;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
num4=0;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
num4=0;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
num4=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
num4=0;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=28;
num3=0;
num4=0;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E0" /*Black-Rimmed Glasses*/, 16);
num2=0;
num3=0;
num=45;
num4=10;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
num4=10;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
num4=10;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E3" /*Copper Sports Shades*/, 16);
num2=3;
num3=0;
num=55;
num4=10;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4" /*Enema Brown Glasses*/, 16);
num2=4;
num3=0;
num=58;
num4=10;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_1" /*Enema Gray Glasses*/, 16);
num2=4;
num3=1;
num=56;
num4=10;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_2" /*Enema Black Glasses*/, 16);
num2=4;
num3=2;
num=60;
num4=10;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_3" /*Enema Tortoiseshell Glasses*/, 16);
num2=4;
num3=3;
num=65;
num4=10;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_4" /*Enema Coffee Glasses*/, 16);
num2=4;
num3=4;
num=62;
num4=10;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_5" /*Enema Walnut Glasses*/, 16);
num2=4;
num3=5;
num=65;
num4=10;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_6" /*Enema Silver Accent Glasses*/, 16);
num2=4;
num3=6;
num=68;
num4=10;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E4_7" /*Enema Smoke Glasses*/, 16);
num2=4;
num3=7;
num=68;
num4=10;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5" /*Farshtunken Gold Aviators*/, 16);
num2=5;
num3=0;
num=65;
num4=10;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_1" /*Farshtunken Purple Aviators*/, 16);
num2=5;
num3=1;
num=69;
num4=10;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_2" /*Farshtunken Silver Aviators*/, 16);
num2=5;
num3=2;
num=72;
num4=10;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_3" /*Farshtunken Gray Aviators*/, 16);
num2=5;
num3=3;
num=70;
num4=10;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_4" /*Farshtunken Blue Aviators*/, 16);
num2=5;
num3=4;
num=74;
num4=10;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_5" /*Farshtunken Tinted Aviators*/, 16);
num2=5;
num3=5;
num=78;
num4=10;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_6" /*Farshtunken Steel Aviators*/, 16);
num2=5;
num3=6;
num=82;
num4=10;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_7" /*Farshtunken Sepia Aviators*/, 16);
num2=5;
num3=7;
num=85;
num4=10;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_8" /*Farshtunken Black Aviators*/, 16);
num2=5;
num3=8;
num=85;
num4=10;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E5_9" /*Farshtunken Smoke Aviators*/, 16);
num2=5;
num3=9;
num4=10;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6" /*Tung Charcoal Shades*/, 16);
num2=6;
num3=0;
num=69;
num4=10;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_1" /*Tung Ash Shades*/, 16);
num2=6;
num3=1;
num=69;
num4=10;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_2" /*Tung Gray Shades*/, 16);
num2=6;
num3=2;
num=69;
num4=10;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_3" /*Tung Red Shades*/, 16);
num2=6;
num3=3;
num=69;
num4=10;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_4" /*Tung Blue Shades*/, 16);
num2=6;
num3=4;
num=69;
num4=10;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_5" /*Tung Yellow Shades*/, 16);
num2=6;
num3=5;
num=69;
num4=10;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_6" /*Tung Black Shades*/, 16);
num2=6;
num3=6;
num=69;
num4=10;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_7" /*Tung Rosy Shades*/, 16);
num2=6;
num3=7;
num=69;
num4=10;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_8" /*Tung Hornet Shades*/, 16);
num2=6;
num3=8;
num=69;
num4=10;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E6_9" /*Tung Two-Tone Shades*/, 16);
num2=6;
num3=9;
num=69;
num4=10;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E7" /*Swimming Goggles*/, 16);
num2=7;
num3=0;
num4=10;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8" /*Rimmers Azure Aviators*/, 16);
num2=8;
num3=0;
num=170;
num4=10;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_1" /*Rimmers Smoke Aviators*/, 16);
num2=8;
num3=1;
num=175;
num4=10;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_2" /*Rimmers Yellow Aviators*/, 16);
num2=8;
num3=2;
num=180;
num4=10;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_3" /*Rimmers Topaz Aviators*/, 16);
num2=8;
num3=3;
num=185;
num4=10;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_4" /*Rimmers Tinted Aviators*/, 16);
num2=8;
num3=4;
num=189;
num4=10;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_5" /*Rimmers Steel Aviators*/, 16);
num2=8;
num3=5;
num=195;
num4=10;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_6" /*Rimmers Indigo Aviators*/, 16);
num2=8;
num3=6;
num=235;
num4=10;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_7" /*Rimmers Chocolate Aviators*/, 16);
num2=8;
num3=7;
num=245;
num4=10;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_8" /*Rimmers Sepia Aviators*/, 16);
num2=8;
num3=8;
num=250;
num4=10;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_9" /*Rimmers Slate Aviators*/, 16);
num2=8;
num3=9;
num=275;
num4=10;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_10" /*Rimmers Gold Aviators*/, 16);
num2=8;
num3=10;
num=280;
num4=10;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E8_11" /*Rimmers Blue Aviators*/, 16);
num2=8;
num3=11;
num=295;
num4=10;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9" /*Hawaiian Snow Black Shades*/, 16);
num2=9;
num3=0;
num=179;
num4=10;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_1" /*Hawaiian Snow Charcoal Shades*/, 16);
num2=9;
num3=1;
num=159;
num4=10;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_2" /*Hawaiian Snow Ash Shades*/, 16);
num2=9;
num3=2;
num=165;
num4=10;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_3" /*Hawaiian Snow Gray Shades*/, 16);
num2=9;
num3=3;
num=155;
num4=10;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_4" /*Hawaiian Snow Tan Shades*/, 16);
num2=9;
num3=4;
num=175;
num4=10;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_5" /*Hawaiian Snow Tortoiseshell Shades*/, 16);
num2=9;
num3=5;
num=185;
num4=10;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_6" /*Hawaiian Snow Walnut Shades*/, 16);
num2=9;
num3=6;
num=189;
num4=10;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "PROPS_P0_E9_7" /*Hawaiian Snow Marbled Shades*/, 16);
num2=9;
num3=7;
num=225;
num4=10;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
num=100;
num4=10;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
num4=2;
break;
default:
func_112(num6, iParam0, 113, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_150(int iParam0) // Position - 0x198FB{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=13;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 10, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_151(int iParam0) // Position - 0x19A75{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=12;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_0" /*Gray Suit*/, 16);
num2=0;
num3=0;
flag=true;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_1" /*Firefighter*/, 16);
num2=0;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_4" /*Janitor*/, 16);
num2=0;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_7" /*Highway Patrol*/, 16);
num2=0;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_8" /*Golf*/, 16);
num2=0;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_9" /*Bed*/, 16);
num2=0;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_12" /*Tennis*/, 16);
num2=0;
num3=0;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_14" /*Scuba Land*/, 16);
num2=0;
num3=0;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_18" /*Triathlon*/, 16);
num2=0;
num3=0;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_19" /*Security*/, 16);
num2=0;
num3=0;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_20" /*Exterminator*/, 16);
num2=0;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_22" /*Tuxedo*/, 16);
num2=0;
num3=0;
num=10000;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_23" /*Ludendorff*/, 16);
num2=0;
num3=0;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_24" /*Rappel Gear*/, 16);
num2=0;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_26" /*Blue Boiler Suit*/, 16);
num2=0;
num3=0;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_28" /*Navy Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_29" /*Gray Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_30" /*Green Boiler Suit*/, 16);
num2=0;
num3=0;
num=105;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_31" /*Prologue*/, 16);
num2=0;
num3=0;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_32" /*Spec Ops*/, 16);
num2=0;
num3=0;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_33" /*Denim Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_34" /*Slate Suit*/, 16);
num2=0;
num3=0;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_35" /*Leather Jacket, Jeans*/, 16);
num2=0;
num3=0;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_11" /*Epsilon Robes*/, 16);
num2=0;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_36" /*Charcoal Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_37" /*Pale Blue Shirt, Gray Pants*/, 16);
num2=0;
num3=0;
num=840;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_38" /*Jewel Heist Suit*/, 16);
num2=0;
num3=0;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_39" /*Polo Shirt, Beach Shorts*/, 16);
num2=0;
num3=0;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_40" /*Polo Shirt, Suit Pants*/, 16);
num2=0;
num3=0;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_41" /*Shirt, Shorts*/, 16);
num2=0;
num3=0;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_42" /*Polo Shirt, Jeans*/, 16);
num2=0;
num3=0;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_43" /*Topaz Suit*/, 16);
num2=0;
num3=0;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_44" /*Pale Blue Suit*/, 16);
num2=0;
num3=0;
num=3900;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_45" /*Off-White Suit*/, 16);
num2=0;
num3=0;
num=4000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_46" /*Olive Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_47" /*Cream Suit*/, 16);
num2=0;
num3=0;
num=4600;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_48" /*Navy Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_49" /*Beige Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_50" /*Smoke Suit*/, 16);
num2=0;
num3=0;
num=4400;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_51" /*Blue-Gray Suit*/, 16);
num2=0;
num3=0;
num=4900;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_52" /*Ash Suit*/, 16);
num2=0;
num3=0;
num=5500;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_53" /*Sand Suit*/, 16);
num2=0;
num3=0;
num=4500;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_54" /*Black Suit*/, 16);
num2=0;
num3=0;
num=5900;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_55" /*Moto X*/, 16);
num2=0;
num3=0;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "OUTFIT_P0_17" /*Stealth*/, 16);
num2=0;
num3=0;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 53, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_152(int iParam0) // Position - 0x19FEC{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=11;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_0" /*Ash T-Shirt*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_1" /*White T-Shirt*/, 16);
num2=2;
num3=1;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_2" /*Gray T-Shirt*/, 16);
num2=2;
num3=2;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_3" /*Charcoal T-Shirt*/, 16);
num2=2;
num3=3;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_4" /*Green T-Shirt*/, 16);
num2=2;
num3=4;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_02_5" /*Blue T-Shirt*/, 16);
num2=2;
num3=5;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_0" /*Charcoal Henley*/, 16);
num2=3;
num3=0;
num=390;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_1" /*Gray Henley*/, 16);
num2=3;
num3=1;
num=390;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_2" /*Black Henley*/, 16);
num2=3;
num3=2;
num=420;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_3" /*Beige Henley*/, 16);
num2=3;
num3=3;
num=420;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_4" /*Brown Henley*/, 16);
num2=3;
num3=4;
num=490;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_5" /*Navy Henley*/, 16);
num2=3;
num3=5;
num=490;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_6" /*Navy Striped Henley*/, 16);
num2=3;
num3=6;
num=540;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_7" /*Gray Striped Henley*/, 16);
num2=3;
num3=7;
num=540;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_8" /*Gray Wool Henley*/, 16);
num2=3;
num3=8;
num=550;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_03_9" /*Charcoal Striped Henley*/, 16);
num2=3;
num3=9;
num=540;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_0" /*Charcoal V Neck*/, 16);
num2=4;
num3=0;
num=850;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_1" /*Beige V Neck*/, 16);
num2=4;
num3=1;
num=850;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_2" /*Black V Neck*/, 16);
num2=4;
num3=2;
num=890;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_3" /*Olive V Neck*/, 16);
num2=4;
num3=3;
num=890;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_4" /*Gray V Neck*/, 16);
num2=4;
num3=4;
num=920;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_5" /*Brown V Neck*/, 16);
num2=4;
num3=5;
num=920;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_6" /*Black Striped V Neck*/, 16);
num2=4;
num3=6;
num=950;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_7" /*Gray Diamond V Neck*/, 16);
num2=4;
num3=7;
num=980;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_8" /*Brown Striped V Neck*/, 16);
num2=4;
num3=8;
num=1050;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_04_9" /*Silver Diamond V Neck*/, 16);
num2=4;
num3=9;
num=1100;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_0" /*Black Vest, White Shirt*/, 16);
num2=5;
num3=0;
num=1890;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_1" /*Black Vest, Black Shirt*/, 16);
num2=5;
num3=1;
num=1820;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_2" /*Black Vest, Gray Shirt*/, 16);
num2=5;
num3=2;
num=1820;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_3" /*Black Vest, Blue Shirt*/, 16);
num2=5;
num3=3;
num=1850;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_4" /*Black Vest, Pink Shirt*/, 16);
num2=5;
num3=4;
num=1850;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_5" /*Ash Vest, White Shirt*/, 16);
num2=5;
num3=5;
num=1900;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_6" /*Ash Vest, Black Shirt*/, 16);
num2=5;
num3=6;
num=1920;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_7" /*Ash Vest, Gray Shirt*/, 16);
num2=5;
num3=7;
num=1980;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_8" /*Ash Vest, Blue Shirt*/, 16);
num2=5;
num3=8;
num=2100;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_9" /*Ash Vest, Pink Shirt*/, 16);
num2=5;
num3=9;
num=2120;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_10" /*Blue Vest, White Shirt*/, 16);
num2=5;
num3=10;
num=2000;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_11" /*Blue Vest, Black Shirt*/, 16);
num2=5;
num3=11;
num=2200;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_12" /*Blue Vest, Gray Shirt*/, 16);
num2=5;
num3=12;
num=2280;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_13" /*Blue Vest, Blue Shirt*/, 16);
num2=5;
num3=13;
num=2300;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_14" /*Blue Vest, Pink Shirt*/, 16);
num2=5;
num3=14;
num=2350;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_05_15" /*Stone Vest, White Shirt*/, 16);
num2=5;
num3=15;
num=2280;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "JBIB_P0_06_0" /*Bare Chest*/, 16);
num2=6;
num3=0;
break;
default:
func_112(num6, iParam0, 45, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_153(int iParam0) // Position - 0x1A516{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=7;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
default:
func_112(num6, iParam0, 1, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_154(int iParam0) // Position - 0x1A58A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=1;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_0_0" /*Clean Shave*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_1_0" /*Stubbled*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_2_0" /*Long Stubbled*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_3_0" /*Full Goatee*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "BERD_P0_4_0" /*Full Beard*/, 16);
num2=4;
num3=0;
break;
default:
func_112(num6, iParam0, 5, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_155(int iParam0) // Position - 0x1A65A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=10;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=1;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=2;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=3;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=4;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=5;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=6;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=7;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=1;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=2;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=3;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=4;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=5;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=1;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=2;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=3;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=4;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=5;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=6;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=2;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=3;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=4;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=5;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=6;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=7;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_8" /*Del Perro Pier T-Shirt*/, 16);
num2=10;
num3=8;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_9" /*Los Santos T-Shirt*/, 16);
num2=10;
num3=9;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_10" /*Sharkies Bites T-Shirt*/, 16);
num2=10;
num3=10;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_11" /*Muscle Peach T-Shirt*/, 16);
num2=10;
num3=11;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_12" /*Coral Reefers T-Shirt*/, 16);
num2=10;
num3=12;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_13" /*SmokeBomb T-Shirt*/, 16);
num2=10;
num3=13;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_14" /*The Big Puffa T-Shirt*/, 16);
num2=10;
num3=14;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "DECL_P0_10_15" /*Lob-Star T-Shirt*/, 16);
num2=10;
num3=15;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
break;
default:
func_112(num6, iParam0, 48, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_156(int iParam0) // Position - 0x1AB32{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=9;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=1;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_0" /*Red Wrestler Mask*/, 16);
num2=8;
num3=0;
num=125;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_1" /*Green Wrestler Mask*/, 16);
num2=8;
num3=1;
num=150;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_2" /*Patriot Wrestler Mask*/, 16);
num2=8;
num3=2;
num=175;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_3" /*Domino Wrestler Mask*/, 16);
num2=8;
num3=3;
num=85;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_4" /*Gray Wrestler Mask*/, 16);
num2=8;
num3=4;
num=150;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC2_P0_08_5" /*Phoenix Wrestler Mask*/, 16);
num2=8;
num3=5;
num=175;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=1;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 20, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_157(int iParam0) // Position - 0x1AD9B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=8;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_10" /*Watch and Bracelet*/, 16);
num2=10;
num3=0;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "SPEC_P0_16" /*Leather Watch*/, 16);
num2=16;
num3=0;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=20;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=21;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=22;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=23;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 24, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_158(int iParam0) // Position - 0x1B071{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=5;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=2;
flag=true;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=3;
flag=true;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=4;
flag=true;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
default:
func_112(num6, iParam0, 14, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_159(int iParam0) // Position - 0x1B23A{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=6;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_0" /*Black Leather Shoes*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_1" /*Brown Leather Shoes*/, 16);
num2=0;
num3=1;
num=665;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_2" /*Charcoal Leather Shoes*/, 16);
num2=0;
num3=2;
num=620;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_3" /*Gray Leather Shoes*/, 16);
num2=0;
num3=3;
num=540;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_4" /*Sand Leather Shoes*/, 16);
num2=0;
num3=4;
num=580;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_0_5" /*Blue Suede Shoes*/, 16);
num2=0;
num3=5;
num=650;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=7;
num3=0;
flag=true;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_13_0" /*Dress Loafers*/, 16);
num2=13;
num3=0;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_0" /*Ash Skate Shoes*/, 16);
num2=15;
num3=0;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_1" /*Black Skate Shoes*/, 16);
num2=15;
num3=1;
num=64;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_2" /*White Skate Shoes*/, 16);
num2=15;
num3=2;
num=56;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_3" /*Red Skate Shoes*/, 16);
num2=15;
num3=3;
num=69;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_4" /*Plaid Skate Shoes*/, 16);
num2=15;
num3=4;
num=59;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_5" /*Striped Skate Shoes*/, 16);
num2=15;
num3=5;
num=62;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_6" /*Coffee Skate Shoes*/, 16);
num2=15;
num3=6;
num=74;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_7" /*Camo Skate Shoes*/, 16);
num2=15;
num3=7;
num=68;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_8" /*Tropical Skate Shoes*/, 16);
num2=15;
num3=8;
num=72;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_15_9" /*Green Skate Shoes*/, 16);
num2=15;
num3=9;
num=70;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_0" /*Chocolate Boat Shoes*/, 16);
num2=16;
num3=0;
num=48;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_1" /*Teal Boat Shoes*/, 16);
num2=16;
num3=1;
num=48;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_2" /*Black Boat Shoes*/, 16);
num2=16;
num3=2;
num=55;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_3" /*Chestnut Boat Shoes*/, 16);
num2=16;
num3=3;
num=75;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_4" /*Tan Boat Shoes*/, 16);
num2=16;
num3=4;
num=65;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_5" /*Gray Boat Shoes*/, 16);
num2=16;
num3=5;
num=68;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_6" /*Red Boat Shoes*/, 16);
num2=16;
num3=6;
num=58;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_16_7" /*Slate Boat Shoes*/, 16);
num2=16;
num3=7;
num=68;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_0" /*All Black Oxfords*/, 16);
num2=18;
num3=0;
num=790;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_1" /*Chocolate Oxfords*/, 16);
num2=18;
num3=1;
num=750;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_2" /*Chestnut Oxfords*/, 16);
num2=18;
num3=2;
num=860;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_3" /*Tan Oxfords*/, 16);
num2=18;
num3=3;
num=750;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_4" /*White Oxfords*/, 16);
num2=18;
num3=4;
num=790;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_5" /*Ash Oxfords*/, 16);
num2=18;
num3=5;
num=840;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_6" /*Gray Two-Tone Oxfords*/, 16);
num2=18;
num3=6;
num=820;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_7" /*Beige Oxfords*/, 16);
num2=18;
num3=7;
num=800;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_8" /*Topaz Oxfords*/, 16);
num2=18;
num3=8;
num=850;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_9" /*Black Oxfords*/, 16);
num2=18;
num3=9;
num=870;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_10" /*Lime Oxfords*/, 16);
num2=18;
num3=10;
num=720;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_11" /*Hawthorn Oxfords*/, 16);
num2=18;
num3=11;
num=740;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_12" /*Coffee Oxfords*/, 16);
num2=18;
num3=12;
num=800;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_13" /*Gray Oxfords*/, 16);
num2=18;
num3=13;
num=750;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_14" /*Cream Oxfords*/, 16);
num2=18;
num3=14;
num=770;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_18_15" /*Navy Oxfords*/, 16);
num2=18;
num3=15;
num=860;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_0" /*Black Slip-Ons*/, 16);
num2=19;
num3=0;
num=850;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_1" /*Red Slip-Ons*/, 16);
num2=19;
num3=1;
num=800;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_2" /*Brown Slip-Ons*/, 16);
num2=19;
num3=2;
num=780;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_3" /*Green Stripe Slip-Ons*/, 16);
num2=19;
num3=3;
num=890;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_4" /*Green Slip-Ons*/, 16);
num2=19;
num3=4;
num=820;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_5" /*Copper Slip-Ons*/, 16);
num2=19;
num3=5;
num=840;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_6" /*Copper Two-Tone Slip-Ons*/, 16);
num2=19;
num3=6;
num=870;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_7" /*Navy Slip-Ons*/, 16);
num2=19;
num3=7;
num=930;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_8" /*Blue Slip-Ons*/, 16);
num2=19;
num3=8;
num=880;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_9" /*Beige Slip-Ons*/, 16);
num2=19;
num3=9;
num=900;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_10" /*White Slip-Ons*/, 16);
num2=19;
num3=10;
num=920;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_11" /*Tan Slip-Ons*/, 16);
num2=19;
num3=11;
num=970;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_12" /*Black Snakeskin Slip-Ons*/, 16);
num2=19;
num3=12;
num=990;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_13" /*Two-Tone Slip-Ons*/, 16);
num2=19;
num3=13;
num=960;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_14" /*Brown Snakeskin Slip-Ons*/, 16);
num2=19;
num3=14;
num=980;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_19_15" /*Gray Slip-Ons*/, 16);
num2=19;
num3=15;
num=950;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_0" /*Brown Wingtips*/, 16);
num2=20;
num3=0;
num=110;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_1" /*Navy Wingtips*/, 16);
num2=20;
num3=1;
num=115;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_2" /*Coffee Wingtips*/, 16);
num2=20;
num3=2;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_3" /*Burgundy Wingtips*/, 16);
num2=20;
num3=3;
num=110;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_4" /*Blue Wingtips*/, 16);
num2=20;
num3=4;
num=125;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_5" /*Woodland Camo Wingtips*/, 16);
num2=20;
num3=5;
num=128;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_6" /*Black Wingtips*/, 16);
num2=20;
num3=6;
num=135;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_7" /*Tan Wingtips*/, 16);
num2=20;
num3=7;
num=130;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_8" /*Purple Wingtips*/, 16);
num2=20;
num3=8;
num=145;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_9" /*Brown Wingtips*/, 16);
num2=20;
num3=9;
num=110;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_10" /*Chocolate Wingtips*/, 16);
num2=20;
num3=10;
num=120;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_11" /*Green Wingtips*/, 16);
num2=20;
num3=11;
num=150;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_12" /*Ash Wingtips*/, 16);
num2=20;
num3=12;
num=125;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_13" /*Olive Wingtips*/, 16);
num2=20;
num3=13;
num=120;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_14" /*Two-Tone Wingtips*/, 16);
num2=20;
num3=14;
num=130;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_20_15" /*Yellow Wingtips*/, 16);
num2=20;
num3=15;
num=110;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_0" /*Black Leather Loafers*/, 16);
num2=21;
num3=0;
num=720;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_1" /*Gray Leather Loafers*/, 16);
num2=21;
num3=1;
num=680;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_2" /*Cream Leather Loafers*/, 16);
num2=21;
num3=2;
num=650;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_3" /*Brown Leather Loafers*/, 16);
num2=21;
num3=3;
num=670;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_4" /*White Leather Loafers*/, 16);
num2=21;
num3=4;
num=700;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_5" /*Russet Leather Loafers*/, 16);
num2=21;
num3=5;
num=680;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_6" /*White Snakeskin Loafers*/, 16);
num2=21;
num3=6;
num=720;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_7" /*Rattlesnake Loafers*/, 16);
num2=21;
num3=7;
num=740;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_8" /*Brown Snakeskin Loafers*/, 16);
num2=21;
num3=8;
num=760;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_9" /*Zebra Two-Tone Loafers*/, 16);
num2=21;
num3=9;
num=780;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_10" /*Pale Reptile Loafers*/, 16);
num2=21;
num3=10;
num=750;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "FEET_P0_21_11" /*Tan Alligator Loafers*/, 16);
num2=21;
num3=11;
num=700;
break;
default:
func_112(num6, iParam0, 99, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_160(int iParam0) // Position - 0x1BD8E{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=4;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_0" /*Gray Pants*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_2" /*Charcoal Pants*/, 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_3" /*Slate Pants*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_4" /*Topaz Pants*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_5" /*Pale Blue Pants*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_6" /*Cream Pants*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_7" /*Olive Pants*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_8" /*Off-White Pants*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_9" /*Navy Pants*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_10" /*Beige Pants*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_11" /*Smoke Pants*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_12" /*Blue-Gray Pants*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_13" /*Ash Pants*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_14" /*Sand Pants*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_0_15" /*Black Pants*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
flag=true;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_0" /*Off-White Chinos*/, 16);
num2=7;
num3=0;
num=115;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_1" /*Camel Chinos*/, 16);
num2=7;
num3=1;
num=115;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_2" /*Ash Chinos*/, 16);
num2=7;
num3=2;
num=128;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_3" /*Olive Chinos*/, 16);
num2=7;
num3=3;
num=118;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_4" /*Brown Chinos*/, 16);
num2=7;
num3=4;
num=125;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_5" /*Black Chinos*/, 16);
num2=7;
num3=5;
num=128;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_6" /*Charcoal Chinos*/, 16);
num2=7;
num3=6;
num=128;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_7_7" /*White Chinos*/, 16);
num2=7;
num3=7;
num=125;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=8;
num3=0;
flag=true;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=1;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=2;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=3;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=4;
flag=true;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=5;
flag=true;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_0" /*Cream Cargo Shorts*/, 16);
num2=13;
num3=0;
num=68;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_1" /*Khaki Cargo Shorts*/, 16);
num2=13;
num3=1;
num=68;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_2" /*Camo Cargo Shorts*/, 16);
num2=13;
num3=2;
num=68;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_3" /*Gray Cargo Shorts*/, 16);
num2=13;
num3=3;
num=68;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_13_4" /*White Cargo Shorts*/, 16);
num2=13;
num3=4;
num=68;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=14;
num3=0;
flag=true;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_0" /*Gray Golf Pants*/, 16);
num2=15;
num3=0;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_1" /*Cream Golf Pants*/, 16);
num2=15;
num3=1;
num=550;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_2" /*Brown Golf Pants*/, 16);
num2=15;
num3=2;
num=650;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_3" /*Tartan Golf Pants*/, 16);
num2=15;
num3=3;
num=875;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_4" /*Charcoal Plaid Golf Pants*/, 16);
num2=15;
num3=4;
num=820;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_5" /*Green Plaid Golf Pants*/, 16);
num2=15;
num3=5;
num=720;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_6" /*Brown Plaid Golf Pants*/, 16);
num2=15;
num3=6;
num=750;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_15_7" /*Slate Golf Pants*/, 16);
num2=15;
num3=7;
num=850;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_0" /*Beige Shorts*/, 16);
num2=16;
num3=0;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_1" /*Yellow Shorts*/, 16);
num2=16;
num3=1;
num=48;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_2" /*Blue Shorts*/, 16);
num2=16;
num3=2;
num=48;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_3" /*Brown Leafy Shorts*/, 16);
num2=16;
num3=3;
num=38;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_4" /*Tropical Shorts*/, 16);
num2=16;
num3=4;
num=38;
break;
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_5" /*Aqua Vintage Shorts*/, 16);
num2=16;
num3=5;
num=42;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_6" /*Bright Two-Tone Shorts*/, 16);
num2=16;
num3=6;
num=58;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_7" /*Red Floral Shorts*/, 16);
num2=16;
num3=7;
num=46;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_8" /*Navy Floral Shorts*/, 16);
num2=16;
num3=8;
num=46;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_9" /*Blue Floral Shorts*/, 16);
num2=16;
num3=9;
num=46;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_10" /*Orange Shorts*/, 16);
num2=16;
num3=10;
num=68;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_11" /*White Striped Shorts*/, 16);
num2=16;
num3=11;
num=58;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_12" /*Charcoal Shorts*/, 16);
num2=16;
num3=12;
num=50;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_13" /*Gray Shorts*/, 16);
num2=16;
num3=13;
num=68;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_14" /*Candy Surf Shorts*/, 16);
num2=16;
num3=14;
num=68;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_16_15" /*Undersea Shorts*/, 16);
num2=16;
num3=15;
num=42;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=17;
num3=0;
flag=true;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_0" /*White Striped Boxers*/, 16);
num2=18;
num3=0;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_1" /*Blue Boxers*/, 16);
num2=18;
num3=1;
num=250;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_2" /*Ash Boxers*/, 16);
num2=18;
num3=2;
num=250;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_3" /*Blue Striped Boxers*/, 16);
num2=18;
num3=3;
num=290;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_4" /*White Boxers*/, 16);
num2=18;
num3=4;
num=270;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_5" /*Charcoal Boxers*/, 16);
num2=18;
num3=5;
num=270;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_6" /*Red Heart Boxers*/, 16);
num2=18;
num3=6;
num=15;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_18_7" /*Blue Heart Boxers*/, 16);
num2=18;
num3=7;
num=12;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=19;
num3=0;
flag=true;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_0" /*Blue Casual Jeans*/, 16);
num2=20;
num3=0;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_1" /*Black Casual Jeans*/, 16);
num2=20;
num3=1;
num=118;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_20_2" /*Faded Casual Jeans*/, 16);
num2=20;
num3=2;
num=110;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_0" /*Tan Pants*/, 16);
num2=21;
num3=0;
num=88;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_1" /*Charcoal Pants*/, 16);
num2=21;
num3=1;
num=95;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_2" /*Brown Pants*/, 16);
num2=21;
num3=2;
num=95;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_21_3" /*Ash Pants*/, 16);
num2=21;
num3=3;
num=98;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_22_0" /*Smart Jeans*/, 16);
num2=22;
num3=0;
num=140;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_0" /*White Tennis Shorts*/, 16);
num2=23;
num3=0;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_1" /*Lobon Tennis Shorts*/, 16);
num2=23;
num3=1;
num=150;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_23_2" /*Plaid Tennis Shorts*/, 16);
num2=23;
num3=2;
num=130;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=24;
num3=0;
flag=true;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=25;
num3=0;
flag=true;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=26;
num3=0;
flag=true;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_27_0" /*Beige Shorts, Bare Feet*/, 16);
num2=27;
num3=0;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_0" /*Pale Blue Bermudas*/, 16);
num2=28;
num3=0;
num=45;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_1" /*Beige Bermudas*/, 16);
num2=28;
num3=1;
num=48;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_2" /*Cream Bermudas*/, 16);
num2=28;
num3=2;
num=48;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_3" /*Olive Bermudas*/, 16);
num2=28;
num3=3;
num=52;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_4" /*Blue Bermudas*/, 16);
num2=28;
num3=4;
num=52;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_5" /*Off-White Bermudas*/, 16);
num2=28;
num3=5;
num=55;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_6" /*Gray Bermudas*/, 16);
num2=28;
num3=6;
num=55;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_7" /*Charcoal Bermudas*/, 16);
num2=28;
num3=7;
num=55;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_8" /*Pink Bermudas*/, 16);
num2=28;
num3=8;
num=58;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_9" /*Beige Plaid Bermudas*/, 16);
num2=28;
num3=9;
num=58;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_10" /*Pastel Plaid Bermudas*/, 16);
num2=28;
num3=10;
num=60;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_11" /*Orange Plaid Bermudas*/, 16);
num2=28;
num3=11;
num=60;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_12" /*Gray Plaid Bermudas*/, 16);
num2=28;
num3=12;
num=62;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_13" /*Blue Striped Bermudas*/, 16);
num2=28;
num3=13;
num=62;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_14" /*Murky Plaid Bermudas*/, 16);
num2=28;
num3=14;
num=65;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "LEGS_P0_28_15" /*Pastel Check Bermudas*/, 16);
num2=28;
num3=15;
num=65;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=29;
num3=0;
break;
default:
func_112(num6, iParam0, 113, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_161(int iParam0) // Position - 0x1CC23{
if(iParam0 < 60) func_163(iParam0);
else func_162(iParam0);
if(Global_78341[0 /*14*/].f_2==-1) func_112(3, iParam0, 181, -1);
return;
}


void func_162(int iParam0) // Position - 0x1CC58{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=9;
num3=0;
flag=true;
break;
case 61:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=10;
num3=0;
flag=true;
break;
case 62:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=11;
num3=0;
flag=true;
break;
case 63:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=0;
flag=true;
break;
case 64:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=1;
flag=true;
break;
case 65:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=2;
flag=true;
break;
case 66:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=3;
flag=true;
break;
case 67:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=4;
flag=true;
break;
case 68:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=12;
num3=5;
flag=true;
break;
case 69:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=13;
num3=0;
flag=true;
break;
case 70:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_0" /*Rearwall Black Gilet*/, 16);
num2=14;
num3=0;
num=120;
break;
case 71:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_1" /*Fruntalot Red Gilet*/, 16);
num2=14;
num3=1;
num=120;
break;
case 72:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_2" /*Yeti Blue Gilet*/, 16);
num2=14;
num3=2;
num=120;
break;
case 73:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_3" /*Rearwall Brown Gilet*/, 16);
num2=14;
num3=3;
num=120;
break;
case 74:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_4" /*Rearwall Orange Gilet*/, 16);
num2=14;
num3=4;
num=120;
break;
case 75:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_14_5" /*Rearwall Green Gilet*/, 16);
num2=14;
num3=5;
num=120;
break;
case 76:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=15;
num3=0;
flag=true;
break;
case 77:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_0" /*Purple Golf Shirt*/, 16);
num2=16;
num3=0;
break;
case 78:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_1" /*Orange Golf Shirt*/, 16);
num2=16;
num3=1;
num=20;
break;
case 79:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_2" /*Burgundy Golf Shirt*/, 16);
num2=16;
num3=2;
num=24;
break;
case 80:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_3" /*Yellow Golf Shirt*/, 16);
num2=16;
num3=3;
num=22;
break;
case 81:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_4" /*Blue Golf Shirt*/, 16);
num2=16;
num3=4;
num=25;
break;
case 82:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_5" /*Mint Golf Shirt*/, 16);
num2=16;
num3=5;
num=25;
break;
case 83:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_6" /*Brown Golf Shirt*/, 16);
num2=16;
num3=6;
num=22;
break;
case 84:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_16_7" /*Crimson Golf Shirt*/, 16);
num2=16;
num3=7;
num=27;
break;
case 85:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_0" /*Blue-Gray Polo Shirt*/, 16);
num2=17;
num3=0;
break;
case 86:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_1" /*Olive Polo Shirt*/, 16);
num2=17;
num3=1;
break;
case 87:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_2" /*Red Polo Shirt*/, 16);
num2=17;
num3=2;
break;
case 88:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_3" /*Black Polo Shirt*/, 16);
num2=17;
num3=3;
num=48;
break;
case 89:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_4" /*White Polo Shirt*/, 16);
num2=17;
num3=4;
num=40;
break;
case 90:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_17_5" /*Blue Polo Shirt*/, 16);
num2=17;
num3=5;
num=45;
break;
case 91:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=18;
num3=0;
flag=true;
break;
case 92:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_0" /*Off-White Tank Top*/, 16);
num2=19;
num3=0;
break;
case 93:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_1" /*White Tank Top*/, 16);
num2=19;
num3=1;
num=190;
break;
case 94:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_2" /*Ash Tank Top*/, 16);
num2=19;
num3=2;
num=190;
break;
case 95:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_3" /*Gray Tank Top*/, 16);
num2=19;
num3=3;
num=190;
break;
case 96:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_19_4" /*Black Tank Top*/, 16);
num2=19;
num3=4;
num=210;
break;
case 97:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_0" /*Blue Denim Shirt*/, 16);
num2=20;
num3=0;
break;
case 98:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_1" /*Deep Black Shirt*/, 16);
num2=20;
num3=1;
num=115;
break;
case 99:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_2" /*Russet Shirt*/, 16);
num2=20;
num3=2;
num=55;
break;
case 100:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_3" /*Green Cord Shirt*/, 16);
num2=20;
num3=3;
num=110;
break;
case 101:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_4" /*Gray Shirt*/, 16);
num2=20;
num3=4;
num=99;
break;
case 102:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_5" /*Fresh Check Shirt*/, 16);
num2=20;
num3=5;
num=49;
break;
case 103:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_6" /*Southern Plaid Shirt*/, 16);
num2=20;
num3=6;
num=120;
break;
case 104:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_7" /*Sunrise Yellow Shirt*/, 16);
num2=20;
num3=7;
num=45;
break;
case 105:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_8" /*White Shirt*/, 16);
num2=20;
num3=8;
num=115;
break;
case 106:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_9" /*Stone Shirt*/, 16);
num2=20;
num3=9;
num=105;
break;
case 107:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_10" /*Earth Plaid Shirt*/, 16);
num2=20;
num3=10;
num=90;
break;
case 108:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_11" /*Green Check Shirt*/, 16);
num2=20;
num3=11;
num=95;
break;
case 109:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_12" /*Country Plaid Shirt*/, 16);
num2=20;
num3=12;
num=39;
break;
case 110:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_13" /*Orange Tight Check Shirt*/, 16);
num2=20;
num3=13;
num=95;
break;
case 111:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_14" /*Bright Blue Plaid Shirt*/, 16);
num2=20;
num3=14;
num=35;
break;
case 112:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_20_15" /*Blue Check Shirt*/, 16);
num2=20;
num3=15;
num=95;
break;
case 113:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_0" /*Gray Hoodie*/, 16);
num2=21;
num3=0;
num=88;
break;
case 114:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_1" /*Ammu-Nation Camo Hoodie*/, 16);
num2=21;
num3=1;
num=60;
break;
case 115:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_2" /*LSGC Gray Hoodie*/, 16);
num2=21;
num3=2;
num=70;
break;
case 116:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_3" /*LSGC Urban Hoodie*/, 16);
num2=21;
num3=3;
num=80;
break;
case 117:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_4" /*LSGC Forest Hoodie*/, 16);
num2=21;
num3=4;
num=90;
break;
case 118:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_5" /*Ammu-Nation A Hoodie*/, 16);
num2=21;
num3=5;
num=80;
break;
case 119:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_6" /*Blauser Hoodie*/, 16);
num2=21;
num3=6;
num=70;
break;
case 120:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_7" /*Penetrators Orange Hoodie*/, 16);
num2=21;
num3=7;
num=95;
break;
case 121:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_8" /*Crevis Fluorescent Hoodie*/, 16);
num2=21;
num3=8;
num=105;
break;
case 122:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_9" /*Blue Hoodie*/, 16);
num2=21;
num3=9;
num=95;
break;
case 123:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_10" /*Green Hoodie*/, 16);
num2=21;
num3=10;
num=110;
break;
case 124:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_11" /*LS Jardineros Hoodie*/, 16);
num2=21;
num3=11;
num=98;
break;
case 125:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_12" /*Ash 18 Hoodie*/, 16);
num2=21;
num3=12;
num=88;
break;
case 126:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_13" /*Red Mist XI Hoodie*/, 16);
num2=21;
num3=13;
num=98;
break;
case 127:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_14" /*Eris Charcoal Hoodie*/, 16);
num2=21;
num3=14;
num=110;
break;
case 128:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_21_15" /*OG Hoodie*/, 16);
num2=21;
num3=15;
num=98;
break;
case 129:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_0" /*Distressed Leather Jacket*/, 16);
num2=22;
num3=0;
break;
case 130:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_1" /*Black Leather Jacket*/, 16);
num2=22;
num3=1;
num=4950;
break;
case 131:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_2" /*Chestnut Leather Jacket*/, 16);
num2=22;
num3=2;
num=4195;
break;
case 132:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_3" /*Oxblood Leather Jacket*/, 16);
num2=22;
num3=3;
num=3195;
break;
case 133:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_4" /*Vintage Black Leather Jacket*/, 16);
num2=22;
num3=4;
num=2950;
break;
case 134:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_22_5" /*Brown Leather Jacket*/, 16);
num2=22;
num3=5;
num=3950;
break;
case 135:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_0" /*Silver Sports Coat*/, 16);
num2=23;
num3=0;
num=3200;
break;
case 136:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_1" /*Gray-Green Sports Coat*/, 16);
num2=23;
num3=1;
num=3200;
break;
case 137:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_2" /*Slate Sports Coat*/, 16);
num2=23;
num3=2;
num=3200;
break;
case 138:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_3" /*Gray Sports Coat*/, 16);
num2=23;
num3=3;
num=3200;
break;
case 139:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_4" /*Blue Sports Coat*/, 16);
num2=23;
num3=4;
num=3200;
break;
case 140:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_5" /*Pale Blue Sports Coat*/, 16);
num2=23;
num3=5;
num=3200;
break;
case 141:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_6" /*White Sports Coat*/, 16);
num2=23;
num3=6;
num=3200;
break;
case 142:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_7" /*Warm Gray Sports Coat*/, 16);
num2=23;
num3=7;
num=3200;
break;
case 143:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_8" /*Cream Sports Coat*/, 16);
num2=23;
num3=8;
num=3200;
break;
case 144:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_9" /*Midnight Blue Sports Coat*/, 16);
num2=23;
num3=9;
num=3200;
break;
case 145:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_10" /*Off-White Sports Coat*/, 16);
num2=23;
num3=10;
num=3200;
break;
case 146:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_11" /*Charcoal Wool Sports Coat*/, 16);
num2=23;
num3=11;
num=3200;
break;
case 147:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_12" /*Charcoal Sports Coat*/, 16);
num2=23;
num3=12;
num=3200;
break;
case 148:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_13" /*Ash Plaid Sports Coat*/, 16);
num2=23;
num3=13;
num=3200;
break;
case 149:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_14" /*Beige Sports Coat*/, 16);
num2=23;
num3=14;
num=3200;
break;
case 150:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_23_15" /*Brown Sports Coat*/, 16);
num2=23;
num3=15;
num=3200;
break;
case 151:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_0" /*Charcoal Sweater*/, 16);
num2=24;
num3=0;
num=1350;
break;
case 152:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_1" /*Gray Sweater*/, 16);
num2=24;
num3=1;
num=1400;
break;
case 153:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_2" /*Beige Sweater*/, 16);
num2=24;
num3=2;
num=1200;
break;
case 154:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_3" /*Red Sweater*/, 16);
num2=24;
num3=3;
num=1250;
break;
case 155:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_4" /*Pale Blue Sweater*/, 16);
num2=24;
num3=4;
num=1350;
break;
case 156:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_5" /*Pale Amethyst Sweater*/, 16);
num2=24;
num3=5;
num=1300;
break;
case 157:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_6" /*Blue Sweater*/, 16);
num2=24;
num3=6;
num=1380;
break;
case 158:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_7" /*Pale Jade Sweater*/, 16);
num2=24;
num3=7;
num=1340;
break;
case 159:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_8" /*Orange Sweater*/, 16);
num2=24;
num3=8;
num=1380;
break;
case 160:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_24_9" /*Lemon Sweater*/, 16);
num2=24;
num3=9;
num=1250;
break;
case 161:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_0" /*Pale Blue Shirt*/, 16);
num2=25;
num3=0;
num=840;
break;
case 162:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_1" /*Pink Shirt*/, 16);
num2=25;
num3=1;
num=840;
break;
case 163:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_2" /*White Shirt*/, 16);
num2=25;
num3=2;
num=840;
break;
case 164:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_3" /*Gray Shirt*/, 16);
num2=25;
num3=3;
num=840;
break;
case 165:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_4" /*Charcoal Shirt*/, 16);
num2=25;
num3=4;
num=840;
break;
case 166:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_5" /*Blue Shirt*/, 16);
num2=25;
num3=5;
num=840;
break;
case 167:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_6" /*Topaz Shirt*/, 16);
num2=25;
num3=6;
num=840;
break;
case 168:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_25_7" /*Black Shirt*/, 16);
num2=25;
num3=7;
num=840;
break;
case 169:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_26_0" /*Bare Chested*/, 16);
num2=26;
num3=0;
break;
case 170:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=27;
num3=0;
flag=true;
break;
case 171:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_0" /*Eris White Sweater Vest*/, 16);
num2=28;
num3=0;
break;
case 172:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_1" /*Lobon Sweater Vest*/, 16);
num2=28;
num3=1;
num=130;
break;
case 173:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_28_2" /*Eris Blue Sweater Vest*/, 16);
num2=28;
num3=2;
num=110;
break;
case 174:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_29_0", 16);
num2=29;
num3=0;
flag=true;
break;
case 175:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_0" /*Gray Jacket*/, 16);
num2=30;
num3=0;
num=290;
break;
case 176:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_30_1" /*Black Jacket*/, 16);
num2=30;
num3=1;
num=320;
break;
case 177:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_0" /*Red Check Winter Shirt*/, 16);
num2=31;
num3=0;
num=59;
break;
case 178:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_1" /*Blue Check Winter Shirt*/, 16);
num2=31;
num3=1;
num=55;
break;
case 179:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_2" /*Black Winter Shirt*/, 16);
num2=31;
num3=2;
num=59;
break;
case 180:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_31_3" /*Brown Check Winter Shirt*/, 16);
num2=31;
num3=3;
num=49;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_163(int iParam0) // Position - 0x1D9F8{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=3;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_0" /*Gray Jacket*/, 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_2" /*Charcoal Jacket*/, 16);
num2=0;
num3=2;
num=3500;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_3" /*Slate Jacket*/, 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_4" /*Topaz Jacket*/, 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_5" /*Pale Blue Jacket*/, 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_6" /*Cream Jacket*/, 16);
num2=0;
num3=6;
break;
case 7:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_7" /*Olive Jacket*/, 16);
num2=0;
num3=7;
break;
case 8:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_8" /*Off-White Jacket*/, 16);
num2=0;
num3=8;
break;
case 9:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_9" /*Navy Jacket*/, 16);
num2=0;
num3=9;
break;
case 10:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_10" /*Beige Jacket*/, 16);
num2=0;
num3=10;
break;
case 11:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_11" /*Smoke Jacket*/, 16);
num2=0;
num3=11;
break;
case 12:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_12" /*Blue-Gray Jacket*/, 16);
num2=0;
num3=12;
break;
case 13:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_13" /*Ash Jacket*/, 16);
num2=0;
num3=13;
break;
case 14:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_14" /*Sand Jacket*/, 16);
num2=0;
num3=14;
break;
case 15:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_0_15" /*Black Jacket*/, 16);
num2=0;
num3=15;
break;
case 16:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=1;
num3=0;
flag=true;
break;
case 17:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=0;
num=20;
break;
case 18:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=1;
num=18;
break;
case 19:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=2;
num=22;
break;
case 20:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=2;
num3=3;
num=25;
break;
case 21:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_4" /*Suburban Yellow T-Shirt*/, 16);
num2=2;
num3=4;
num=19;
break;
case 22:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_5" /*Rearwall Slate T-Shirt*/, 16);
num2=2;
num3=5;
num=20;
break;
case 23:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_6" /*Rearwall Blue T-Shirt*/, 16);
num2=2;
num3=6;
num=22;
break;
case 24:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_7" /*Rearwall Gray T-Shirt*/, 16);
num2=2;
num3=7;
num=18;
break;
case 25:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_8" /*Suburban Navy T-Shirt*/, 16);
num2=2;
num3=8;
num=39;
break;
case 26:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_9" /*Suburban Russet T-Shirt*/, 16);
num2=2;
num3=9;
num=32;
break;
case 27:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_10" /*Suburban Orange T-Shirt*/, 16);
num2=2;
num3=10;
num=35;
break;
case 28:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_11" /*Suburban Gray T-Shirt*/, 16);
num2=2;
num3=11;
num=35;
break;
case 29:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_12" /*White T-Shirt*/, 16);
num2=2;
num3=12;
num=210;
break;
case 30:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_13" /*Forest Green T-Shirt*/, 16);
num2=2;
num3=13;
num=250;
break;
case 31:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_14" /*Pale Blue T-Shirt*/, 16);
num2=2;
num3=14;
num=290;
break;
case 32:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_2_15" /*Ash T-Shirt*/, 16);
num2=2;
num3=15;
num=310;
break;
case 33:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=0;
flag=true;
break;
case 34:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=3;
num3=1;
flag=true;
break;
case 35:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=4;
num3=0;
flag=true;
break;
case 36:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
flag=true;
break;
case 37:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=6;
num3=0;
flag=true;
break;
case 38:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_0" /*Brown Shooting Vest*/, 16);
num2=7;
num3=0;
num=150;
break;
case 39:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_1" /*Woodland Shooting Vest*/, 16);
num2=7;
num3=1;
num=160;
break;
case 40:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_2" /*Taupe Shooting Vest*/, 16);
num2=7;
num3=2;
num=150;
break;
case 41:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_3" /*Brown Woven Shooting Vest*/, 16);
num2=7;
num3=3;
num=150;
break;
case 42:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_4" /*Field Shooting Vest*/, 16);
num2=7;
num3=4;
num=160;
break;
case 43:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_7_5" /*Forest Shooting Vest*/, 16);
num2=7;
num3=5;
num=160;
break;
case 44:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_0" /*Blue-Gray Shirt*/, 16);
num2=8;
num3=0;
break;
case 45:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_1" /*White Shirt*/, 16);
num2=8;
num3=1;
num=52;
break;
case 46:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_2" /*Camel Shirt*/, 16);
num2=8;
num3=2;
num=52;
break;
case 47:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_3" /*Black Shirt*/, 16);
num2=8;
num3=3;
num=55;
break;
case 48:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_4" /*Citrus Hawaiian Shirt*/, 16);
num2=8;
num3=4;
num=55;
break;
case 49:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_5" /*Orange Grove Shirt*/, 16);
num2=8;
num3=5;
num=58;
break;
case 50:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_6" /*Parrot Print Shirt*/, 16);
num2=8;
num3=6;
num=58;
break;
case 51:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_7" /*Blue Geometric Shirt*/, 16);
num2=8;
num3=7;
num=62;
break;
case 52:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_8" /*Gray Patterned Shirt*/, 16);
num2=8;
num3=8;
num=65;
break;
case 53:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_9" /*Peach Patterned Shirt*/, 16);
num2=8;
num3=9;
num=65;
break;
case 54:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_10" /*Tropical Shirt*/, 16);
num2=8;
num3=10;
num=68;
break;
case 55:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_11" /*Navy Floral Shirt*/, 16);
num2=8;
num3=11;
num=68;
break;
case 56:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_12" /*Lime Plaid Shirt*/, 16);
num2=8;
num3=12;
num=55;
break;
case 57:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_13" /*Brown Patterned Shirt*/, 16);
num2=8;
num3=13;
num=62;
break;
case 58:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_14" /*Vintage Hawaiian Shirt*/, 16);
num2=8;
num3=14;
num=58;
break;
case 59:
TEXT_LABEL_ASSIGN_STRING(&unk, "TORSO_P0_8_15" /*Blue Plaid Shirt*/, 16);
num2=8;
num3=15;
num=58;
break;
default:
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_164(int iParam0) // Position - 0x1E084{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=2;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_0_0" /*Lexington*/, 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_1_0" /*The Wood*/, 16);
num2=1;
num3=0;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_2_0" /*Clippered Cut*/, 16);
num2=2;
num3=0;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_3_0" /*Grown Out*/, 16);
num2=3;
num3=0;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "HAIR_P0_4_0" /*Slicker*/, 16);
num2=4;
num3=0;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=5;
num3=0;
break;
default:
func_112(num6, iParam0, 6, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_165(int iParam0) // Position - 0x1E16B{
BOOL flag;
int num;
var unk;
int num2;
int num3;
int num4;
int num5;
int num6;
flag=false;
num=10;
num2=0;
num3=0;
num4=-1;
num5=2;
num6=0;
Global_78341[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=0;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=1;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=2;
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=3;
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=4;
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=5;
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(&unk, "NO_LABEL", 16);
num2=0;
num3=6;
break;
default:
func_112(num6, iParam0, 7, -1);
return;
}
func_105(&Global_78341[0 /*14*/], num6, iParam0, &unk, num2, num3, num, flag, num4, num5, false);
return;
}


void func_166() // Position - 0x1E269{
Global_78341[0 /*14*/].f_1=-1;
Global_78341[0 /*14*/].f_2=-1;
Global_78341[0 /*14*/].f_5=-1;
Global_78341[0 /*14*/].f_3=-1;
Global_78341[0 /*14*/].f_4=-1;
Global_78341[0 /*14*/].f_7=0;
Global_78341[0 /*14*/].f_6=0;
Global_78341[0 /*14*/].f_13=-1;
Global_78341[0 /*14*/].f_12=0;
Global_78341[0 /*14*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_78341[0 /*14*/].f_8), "NO_LABEL", 16);
return;
}

int func_167(Hash hParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x1E2E2{
Global_78341[1 /*14*/]={
func_102(hParam0, iParam1, iParam2, -1) 
};
if(IS_BIT_SET(Global_78341[1 /*14*/].f_6, 0) && !IS_BIT_SET(Global_78341[1 /*14*/].f_6, 6)){
if(bParam3) func_101(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 1, 0);
else func_101(iParam1, Global_78341[1 /*14*/].f_5, Global_78341[1 /*14*/].f_2, 0, Global_78341[1 /*14*/].f_1, 0, 1);
return 1;
}
return 0;
}
BOOL func_168(Hash hParam0, int iParam1, int iParam2) // Position - 0x1E378{
Global_78341[1 /*14*/]={
func_102(hParam0, iParam1, iParam2, -1) 
};
return IS_BIT_SET(Global_78341[1 /*14*/].f_6, 2);
}


void func_169() // Position - 0x1E3A0{
int address;
address=0;
MISC::SET_BIT(&address, 0);
MISC::SET_BIT(&address, 19);
MISC::SET_BIT(&address, 20);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 10);
MISC::SET_BIT(&address, 7);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 12);
MISC::SET_BIT(&address, 13);
MISC::SET_BIT(&address, 14);
MISC::SET_BIT(&address, 15);
func_171(33, address, false);
func_170(2);
return;
}


void func_170(int iParam0) // Position - 0x1E40E{
Global_60533=iParam0;
return;
}


void func_171(int iParam0, int iParam1, BOOL bParam2) // Position - 0x1E41B{
int num;
int i;
int num2;
int num3;
num=-1;
i=0;
num2=-1;
for (i=0;
i < 8;
i=i + 1){
if(Global_113648.f_20566.f_452[i] > 0)if(Global_113648.f_20566.f_443[i]==iParam0) num=i;
else num2=i;
}
if(num !=-1 || num2==-1) return;
num3=0;
if(IS_BIT_SET(iParam1, 3)) num3=num3 + 1;
if(IS_BIT_SET(iParam1, 4)) num3=num3 + 2;
if(IS_BIT_SET(iParam1, 5)) num3=num3 + 4;
if(IS_BIT_SET(iParam1, 20)) num3=num3 + 8;
if(num3==0 && !IS_BIT_SET(iParam1, 1)) return;
num3=num3 * 3;
if(IS_BIT_SET(iParam1, 2)) num3=num3 * 7;
Global_113648.f_20566.f_442=Global_113648.f_20566.f_442 + 1;
Global_113648.f_20566.f_461[num2]=iParam1;
Global_113648.f_20566.f_443[num2]=iParam0;
Global_113648.f_20566.f_452[num2]=num3;
if(!bParam2)if(!func_173(54)) func_410("AM_H_STOCKS" /*Actions in the world may have an impact on company stock values. Take advantage of likely changes in stock prices to generate extra capital.*/, 1, 0, 40000, 10000, 7, 0, 139, 0);
func_172(iParam0, false);
return;
}


void func_172(int iParam0, BOOL bParam1) // Position - 0x1E555{
float num;
float num2;
int i;
if(Global_55661[iParam0 /*36*/].f_8) return;
num=Global_55661[iParam0 /*36*/].f_9;
if(!bParam1) num=func_79(iParam0);
if(num==0f) return;
Global_55661[iParam0 /*36*/].f_14[Global_55661[iParam0 /*36*/].f_13]=num;
if(num > Global_55661[iParam0 /*36*/].f_31) Global_55661[iParam0 /*36*/].f_31=num;
if(num < Global_55661[iParam0 /*36*/].f_32) Global_55661[iParam0 /*36*/].f_32=num;
Global_55661[iParam0 /*36*/].f_13=Global_55661[iParam0 /*36*/].f_13 + 1;
if(Global_55661[iParam0 /*36*/].f_13 >=16) Global_55661[iParam0 /*36*/].f_13=0;
num2=0f;
for (i=0;
i < 16;
i=i + 1){
num2=num2 + Global_55661[iParam0 /*36*/].f_14[i];
}
num2=num2 / SYSTEM::TO_FLOAT(16);
Global_55661[iParam0 /*36*/].f_33=num - num2;
Global_55661[iParam0 /*36*/].f_34=(Global_55661[iParam0 /*36*/].f_33 / num2) * 100f;
return;
}
BOOL func_173(int iParam0) // Position - 0x1E661{
int num;
int i;
num=iParam0;
for (i=0;
num > 31;
i=i + 1){
num=num - 32;
}
if(i < 3) return IS_BIT_SET(Global_113648.f_20412.f_150[i], num);
return false;
}


void func_174() // Position - 0x1E6A1{
int address;
address=0;
MISC::SET_BIT(&address, 0);
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 3);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 9);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 13);
func_171(49, address, false);
func_170(2);
return;
}


void func_175() // Position - 0x1E6F6{
int address;
address=0;
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 20);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 12);
MISC::SET_BIT(&address, 13);
MISC::SET_BIT(&address, 14);
MISC::SET_BIT(&address, 15);
func_171(36, address, false);
func_170(2);
return;
}


void func_176() // Position - 0x1E747{
int address;
address=0;
MISC::SET_BIT(&address, 17);
MISC::SET_BIT(&address, 3);
MISC::SET_BIT(&address, 4);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 13);
MISC::SET_BIT(&address, 14);
MISC::SET_BIT(&address, 12);
func_171(12, address, false);
address=0;
MISC::SET_BIT(&address, 0);
MISC::SET_BIT(&address, 17);
MISC::SET_BIT(&address, 4);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 7);
MISC::SET_BIT(&address, 9);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 13);
MISC::SET_BIT(&address, 12);
func_171(15, address, false);
func_170(2);
return;
}


void func_177() // Position - 0x1E7F4{
int address;
address=0;
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 17);
MISC::SET_BIT(&address, 3);
MISC::SET_BIT(&address, 4);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 10);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 15);
MISC::SET_BIT(&address, 12);
func_171(65, address, false);
address=0;
MISC::SET_BIT(&address, 0);
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 3);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 10);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 13);
func_171(40, address, false);
func_170(2);
return;
}


void func_178() // Position - 0x1E8A1{
int address;
address=0;
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 20);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 10);
MISC::SET_BIT(&address, 7);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 12);
MISC::SET_BIT(&address, 13);
func_171(79, address, false);
address=0;
MISC::SET_BIT(&address, 0);
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 3);
MISC::SET_BIT(&address, 4);
MISC::SET_BIT(&address, 5);
MISC::SET_BIT(&address, 6);
MISC::SET_BIT(&address, 10);
MISC::SET_BIT(&address, 7);
MISC::SET_BIT(&address, 11);
MISC::SET_BIT(&address, 12);
MISC::SET_BIT(&address, 13);
func_171(43, address, false);
func_170(2);
return;
}


void func_179() // Position - 0x1E956{
int address;
address=0;
MISC::SET_BIT(&address, 1);
MISC::SET_BIT(&address, 16);
MISC::SET_BIT(&address, 17);
func_171(61, address, true);
Global_55661[61 /*36*/].f_9=Global_55661[61 /*36*/].f_9 * 0.544f;
func_170(1);
return;
}


void func_180() // Position - 0x1E99E{
func_181(3);
func_181(22);
func_181(25);
func_181(26);
func_181(27);
func_181(28);
func_181(29);
func_181(30);
func_181(31);
func_181(32);
func_181(33);
func_181(34);
func_181(35);
func_181(36);
func_181(37);
func_181(38);
func_181(39);
func_181(40);
func_181(41);
func_181(42);
func_181(43);
func_181(52);
func_181(53);
func_181(54);
func_181(55);
func_181(56);
return;
}


void func_181(int iParam0) // Position - 0x1EA41{
MISC::CLEAR_BIT(&Global_113648.f_18576[iParam0 /*6*/], 0);
MISC::CLEAR_BIT(&Global_113648.f_18576[iParam0 /*6*/], 1);
MISC::CLEAR_BIT(&Global_113648.f_18576[iParam0 /*6*/], 2);
return;
}


void func_182() // Position - 0x1EA79{
func_181(0);
func_181(1);
func_181(2);
func_181(9);
func_181(10);
func_181(11);
func_181(12);
func_181(13);
func_181(14);
func_181(15);
func_181(16);
func_181(21);
return;
}


void func_183() // Position - 0x1EAC6{
PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
switch (Global_113648.f_24981){
case 2:
MISC::SET_BIT(&(Global_113648.f_24981.f_1), 2);
if(SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_185(88, 0)) < 43681f) MISC::SET_BIT(&(Global_113648.f_24981.f_3), 2);
break;
case 3:
MISC::SET_BIT(&(Global_113648.f_24981.f_1), 3);
if(SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_185(89, 0)) < 43681f) MISC::SET_BIT(&(Global_113648.f_24981.f_3), 3);
break;
case 4:
MISC::SET_BIT(&(Global_113648.f_24981.f_1), 4);
if(SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_185(90, 0)) < 43681f) MISC::SET_BIT(&(Global_113648.f_24981.f_3), 4);
break;
}
func_184();
return;
}

int func_184() // Position - 0x1EBAB{
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(Global_100720.f_8)if(Global_100720.f_10 > 0) return 0;
elseif(Global_100720.f_10 > 1) return 0;
Global_100720.f_10=Global_100720.f_10 + 1;
return 1;
}


Vector3 func__185(int iParam0, int iParam1) // Position - 0x1EBF6{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return 0f, 0f, 0f;
return Global_32543[num /*23*/][iParam1 /*3*/];
}
Vector3 _GET_PLAYER_COORDS(Player plParam0) // Position - 0x1EC34{
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(plParam0), false);
}


void func_187() // Position - 0x1EC47{
func_251(104, 1);
func_188(CHAR_TOW_TONYA, CHAR_FRANKLIN, true);
return;
}


void func_188(eCharacter echParam0, eCharacter echParam1, BOOL bParam2) // Position - 0x1EC5E{
int num;
Global_8939=echParam0;
if(Global_117[echParam0 /*10*/].f_8 !=169){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(echParam1==4){
func_23(echParam0, 0, 1);
func_23(echParam0, 1, 1);
func_23(echParam0, 2, 1);
func_22(echParam0, 0, 1);
func_22(echParam0, 1, 1);
func_22(echParam0, 2, 1);
}else{
if(func_191(echParam0, echParam1)==1 && func_24(echParam0, echParam1)==1) bParam2=false;
num=echParam1;
func_23(echParam0, num, 1);
func_22(echParam0, num, 1);
if(echParam0==CHAR_SESSANTA && !Global_2793044.f_6891) bParam2=false;
if(echParam0==CHAR_ISLDJ4 && !Global_2793044.f_6890) bParam2=false;
if(echParam0==CHAR_KDJ && !Global_2793044.f_6890) bParam2=false;
}
if(bParam2){
if(!Global_78558){
if(echParam1 !=4){
if(Global_20383 !=echParam1){
Global_8912[echParam1 /*4*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8929[echParam1]=1;
Global_8934[echParam1]=echParam0;
}elseif(echParam0==Global_20383){
}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_189();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_189();
}}else{
Global_8863[1 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8863[1 /*6*/].f_5=echParam1;
func_189();
}}}
return;
}


void func_189() // Position - 0x1EDD6{
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
struct<4> _GET_CHARACTER_NAME(eCharacter character) // Position - 0x1EE51{
return Global_2028[character /*29*/].f_3;
}

int func_191(eCharacter echParam0, int iParam1) // Position - 0x1EE64{
if(iParam1 < 0 || iParam1 > 4) return 0;
return Global_2028[echParam0 /*29*/].f_12[iParam1];
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x1EE8E{
if(func_59(14)){
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


void func_193() // Position - 0x1EF30{
func_194(1794975438, 1, 2, 103, 360000, 10000, -1, 188, -1, 0, 1);
return;
}

int func_194(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x1EF53{
int num;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(iParam4 < 0) return 0;
if(iParam5 < 0) return 0;
if(iParam6==76) return 0;
if(iParam7==235) return 0;
if(iParam3 < 3)if(IS_BIT_SET(iParam2, iParam3)) return 0;
if(iParam2 < 1 || iParam2 > 7) return 0;
if(Global_113648.f_7690.f_764 < 8){
num=iParam0;
num.f_3=func_10(iParam1);
num.f_4=MISC::GET_GAME_TIMER() + iParam4;
num.f_5=iParam5;
num.f_1=iParam9;
num.f_2=iParam2;
num.f_6=iParam3;
num.f_7=iParam6;
num.f_8=iParam7;
num.f_9=iParam8;
num.f_10=-1;
num.f_11=-1;
num.f_13=iParam10;
MISC::CLEAR_BIT(&(num.f_1), 0);
Global_113648.f_7690.f_651[Global_113648.f_7690.f_764 /*14*/]={
num 
};
Global_113648.f_7690.f_764=Global_113648.f_7690.f_764 + 1;
func_16(CHAR_MICHAEL);
func_16(1);
func_16(2);
return 1;
}
return 0;
}


void func_195() // Position - 0x1F06B{
func_251(103, 1);
func_188(CHAR_TOW_TONYA, CHAR_FRANKLIN, true);
return;
}


void func_196() // Position - 0x1F082{
func_194(969002696, 1, 2, 103, 360000, 10000, 66, 186, -1, 0, 1);
return;
}


void func_197() // Position - 0x1F0A5{
func_251(102, 1);
return;
}


void func_198() // Position - 0x1F0B4{
func_194(-1444331296, 1, 2, 50, 120000, 10000, -1, 184, -1, 0, 1);
return;
}


void func_199() // Position - 0x1F0D7{
func_251(83, 1);
func_188(CHAR_LS_TOURIST_BOARD, CHAR_FRANKLIN, true);
return;
}


void func_200() // Position - 0x1F0EE{
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()) func_2(-1871231456, 6, 2, 99, 30000, 10000, -1, 182, -1, 0);
return;
}
BOOL _IS_EXCLUSIVE_CONTENT_UNLOCKED() // Position - 0x1F116{
int profileSetting;
if(Global_152523==2) return true;
elseif(Global_152523==3) return false;
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(unk_0x8BD41D5945F5762B()){
if(NETWORK::NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN()){
STATS::STAT_GET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), &profileSetting, -1);
MISC::SET_BIT(&profileSetting, 2);
MISC::SET_BIT(&profileSetting, 4);
MISC::SET_BIT(&profileSetting, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("SP_UNLOCK_EXCLUS_CONTENT"), profileSetting, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
profileSetting=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&profileSetting, 0);
STATS::SET_HAS_SPECIALEDITION_CONTENT(profileSetting);
}
return true;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID())if(IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)) return true;
return false;
}


void func_202() // Position - 0x1F1CE{
func_251(107, 1);
func_203(286, 0, 0);
return;
}


void func_203(int iParam0, int iParam1, int iParam2) // Position - 0x1F1E6{
BOOL flag;
iParam0 < 0;
if(iParam0==321 || iParam0 > 321){}else{
_STAT_SET_PACKED_BOOL(891 + iParam0, 1, -1);
}
flag=true;
if(Global_113648.f_10196[iParam0 /*12*/].f_5==1){
if(Global_113648.f_10196[iParam0 /*12*/].f_6==11 || Global_113648.f_10196[iParam0 /*12*/].f_6==12) flag=false;
}else{
Global_113648.f_10196[iParam0 /*12*/].f_5=1;
Global_113648.f_10196[iParam0 /*12*/].f_10=iParam1;
Global_113648.f_10196[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_0"), 50, 0);
if(iParam0==286) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_1"), 50, 0);
if(iParam0==299) STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_HIDDEN_PACKAGES_3"), 50, 0);
}
if(flag) func_204();
return;
}


void func_204() // Position - 0x1F2CC{
int num;
float num2;
float num3;
float num4;
float num5;
float num6;
float num7;
float num8;
float value;
int value2;
num=0;
Global_113384=0;
Global_113385=0;
Global_113386=0;
Global_113387=0;
Global_113388=0;
Global_113389=0;
Global_113390=0;
num2=0f;
num3=0f;
num4=0f;
num5=0f;
num6=0f;
num7=0f;
num8=0f;
value=Global_113648.f_10196.f_3853;
Global_113648.f_10196.f_3853=0f;
while (num < 321){
if(Global_113648.f_10196[num /*12*/].f_5==1){
switch (Global_113648.f_10196[num /*12*/].f_6){
case 1:
Global_113384=Global_113384 + 1;
num2=num2 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 3:
Global_113385=Global_113385 + 1;
num3=num3 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 5:
Global_113386=Global_113386 + 1;
num4=num4 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 7:
Global_113387=Global_113387 + 1;
num5=num5 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 9:
Global_113388=Global_113388 + 1;
num6=num6 + (Global_113648.f_10196[num /*12*/].f_4 * 4f);
break;
case 11:
Global_113389=Global_113389 + 1;
num7=num7 + Global_113648.f_10196[num /*12*/].f_4;
break;
case 13:
Global_113390=Global_113390 + 1;
num8=num8 + Global_113648.f_10196[num /*12*/].f_4;
break;
default:
break;
}}
num=num + 1;
}
if(Global_113367 > 0)if(Global_113384==Global_113367) num2=55f;
if(Global_113368 > 0)if(Global_113385==Global_113368) num3=10f;
if(Global_113369 > 0)if(Global_113386==Global_113369) num4=0f;
if(Global_113370 > 0)if(Global_113387==Global_113370) num5=10f;
if(Global_113371 > 0){
if(Global_113388==Global_113371 || (Global_113371 * 10) / Global_113388 < 41 || Global_113388 > Global_113374 || Global_113388==Global_113374){
if(!IS_BIT_SET(Global_113648.f_10196.f_3856, 14)){
if(Global_113388==Global_113371){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("NUM_RNDEVENTS_COMPLETED"), Global_113371, 0);
MISC::SET_BIT(&(Global_113648.f_10196.f_3856), 14);
}}
num6=5f;
}}
if(Global_113372 > 0)if(Global_113389==Global_113372) num7=15f;
if(Global_113373 > 0)if(Global_113390==Global_113373) num8=5f;
Global_113648.f_10196.f_3853=num2 + num3 + num4 + num5 + num6 + num7 + num8;
if(Global_113388 > Global_113374 || Global_113388==Global_113374) value2=Global_113374;
else value2=Global_113388;
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_COMPLETED"), Global_113384, true);
STATS::STAT_SET_INT(joaat("NUM_MISSIONS_AVAILABLE"), Global_113367, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_COMPLETED"), Global_113385, true);
STATS::STAT_SET_INT(joaat("NUM_MINIGAMES_AVAILABLE"), Global_113368, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_COMPLETED"), Global_113386, true);
STATS::STAT_SET_INT(joaat("NUM_ODDJOBS_AVAILABLE"), Global_113369, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_COMPLETED"), Global_113387, true);
STATS::STAT_SET_INT(joaat("NUM_RNDPEOPLE_AVAILABLE"), Global_113370, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_COMPLETED"), value2, true);
STATS::STAT_SET_INT(joaat("NUM_RNDEVENTS_AVAILABLE"), Global_113374, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_COMPLETED"), Global_113390 + Global_113389, true);
STATS::STAT_SET_INT(joaat("NUM_MISC_AVAILABLE"), Global_113373 + Global_113372, true);
Global_113391=(Global_113384 * 100) / Global_113367;
Global_113393=((Global_113386 + Global_113385) * 100) / (Global_113369 + Global_113368);
Global_113392=((Global_113387 + value2) * 100) / (Global_113370 + Global_113374);
Global_113394=((Global_113389 + Global_113390) * 100) / (Global_113372 + Global_113373);
STATS::STAT_SET_FLOAT(joaat("TOTAL_PROGRESS_MADE"), Global_113648.f_10196.f_3853, true);
STATS::STAT_SET_INT(joaat("PERCENT_STORY_MISSIONS"), Global_113391, true);
STATS::STAT_SET_INT(joaat("PERCENT_AMBIENT_MISSIONS"), Global_113392, true);
STATS::STAT_SET_INT(joaat("PERCENT_ODDJOBS"), Global_113393, true);
if(value > 0f && SYSTEM::FLOOR(value) < SYSTEM::FLOOR(Global_113648.f_10196.f_3853)) func_60(13, SYSTEM::FLOOR(Global_113648.f_10196.f_3853));
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78558){
if(func_205()==2==false && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()) Global_113382=0;
if(!Global_63362) func_184();
}}}
return;
}

int func_205() // Position - 0x1F78A{
return Global_32163;
}


void func_206() // Position - 0x1F795{
func_251(100, 1);
return;
}


void func_207() // Position - 0x1F7A4{
func_2(-1674789340, 1, 4, 64, 60000, 10000, -1, 178, -1, 0);
return;
}


void func_208() // Position - 0x1F7C6{
func_251(105, 1);
return;
}


void func_209() // Position - 0x1F7D5{
func_251(99, 1);
return;
}


void func_210() // Position - 0x1F7E4{
func_194(-1134717682, 1, 4, 54, 1920000, 10000, -1, 175, -1, 0, 1);
return;
}


void func_211() // Position - 0x1F807{
func_251(97, 1);
return;
}


void func_212() // Position - 0x1F816{
func_194(-1159983966, 1, 2, 52, 200000, 10000, -1, 172, -1, 0, 1);
func_214();
return;
}


void func_213() // Position - 0x1F83D{
func_251(96, 1);
return;
}


void func_214() // Position - 0x1F84C{
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 10, true, 1);
return;
}


void func_215() // Position - 0x1F863{
func_251(92, 1);
func_251(93, 1);
func_412(37, true);
return;
}


void func_216() // Position - 0x1F880{
func_217(8);
func_203(287, 0, 0);
func_251(106, 1);
return;
}


void func_217(int iParam0) // Position - 0x1F89E{
if(iParam0==63 || iParam0==-1) return;
func_218(iParam0);
MISC::SET_BIT(&Global_113648.f_18576[iParam0 /*6*/], 0);
return;
}


void func_218(int iParam0) // Position - 0x1F8D1{
switch (iParam0){
case 30:
func_219(22, 1, false, true, 0);
break;
case 15:
func_412(37, false);
break;
default:
break;
}
return;
}


void func_219(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1F906{
if(iParam0 !=198){
if(Global_78558) Global_42791.f_227[iParam0]=iParam1;
else Global_113648.f_7263.f_227[iParam0]=iParam1;
Global_39797[iParam0]=bParam2;
Global_39996[iParam0]=1;
func_222(iParam0, bParam3, iParam4, false);
func_220(iParam0, iParam1);
}
return;
}


void func_220(int iParam0, int iParam1) // Position - 0x1F95E{
switch (iParam0){
case 12:
if(iParam1==0) AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
else AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
break;
case 71:
if(iParam1 !=1) unk_0x14D7CA14E183F034("HEIST_SWEATSHOP_ZONES", 0, 0);
else unk_0x14D7CA14E183F034("HEIST_SWEATSHOP_ZONES", 1, 0);
break;
case 65:
if(iParam1==1) func_221(0, false);
else func_221(0, true);
break;
case 6:
if(iParam1==1) AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
else AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
break;
case 174:
if(iParam1==2) unk_0x2FF31AAA6E87720B("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
}
break;
}
return;
}


void func_221(int iParam0, BOOL bParam1) // Position - 0x1FA47{
if(bParam1) MISC::SET_BIT(&Global_112286, iParam0);
else MISC::CLEAR_BIT(&Global_112286, iParam0);
Global_112285=1;
return;
}
BOOL func_222(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x1FA70{
BOOL flag;
int num;
int num2;
Vector3 vector;
Object rayfireMapObject;
BOOL flag2;
Interior interiorAtCoordsWithType;
Global_1925773=1;
flag=false;
vector.f_4=3;
vector.f_8=3;
vector.f_64=3;
vector.f_75=3;
vector.f_91=3;
func_225(&vector, iParam0);
if(func_223()) num=Global_113648.f_7263.f_227[iParam0];
else num=Global_42791.f_227[iParam0];
num2=Global_40195[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1925773=1;
}else{
flag2=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39797[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), vector, true) < 200f){
flag2=false;
Global_1925773=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
flag2=false;
Global_1925773=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5){
flag2=false;
Global_1925773=1;
}
if(flag2){
switch (vector.f_3){
case 0:
if(num==2){
}else{
if(vector.f_4[num] !=0) ENTITY::REMOVE_MODEL_HIDE(vector, 10f, vector.f_4[num], false);
if(vector.f_4[num2] !=0) ENTITY::CREATE_MODEL_HIDE(vector, 10f, vector.f_4[num2], true);
Global_41391[iParam0]=1;
}
flag=true;
break;
case 1:
if(num==0){
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/])){
if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])){
STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/])){
if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])){
STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])){
STREAMING::REQUEST_IPL(&vector.f_8[0 /*8*/]);
Global_1925773=1;
}
}
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(vector.f_34))){
STREAMING::REQUEST_IPL(&(vector.f_34));
Global_1925773=1;
}
}}elseif(num==1){
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY(""))if(STREAMING::IS_IPL_ACTIVE(&(vector.f_34))) STREAMING::REMOVE_IPL(&(vector.f_34));
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])) STREAMING::REQUEST_IPL(&vector.f_8[1 /*8*/]);
}elseif(num==2){
if(MISC::GET_HASH_KEY(&(vector.f_34)) !=MISC::GET_HASH_KEY(""))if(STREAMING::IS_IPL_ACTIVE(&(vector.f_34))) STREAMING::REMOVE_IPL(&(vector.f_34));
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[0 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(STREAMING::IS_IPL_ACTIVE(&vector.f_8[1 /*8*/])) STREAMING::REMOVE_IPL(&vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))if(!STREAMING::IS_IPL_ACTIVE(&vector.f_8[2 /*8*/])) STREAMING::REQUEST_IPL(&vector.f_8[2 /*8*/]);
}
Global_41192[iParam0]=1;
Global_41391[iParam0]=1;
flag=true;
break;
case 2:
interiorAtCoordsWithType=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(vector, &(vector.f_42));
if(interiorAtCoordsWithType !=0){
if(MISC::GET_HASH_KEY(&(vector.f_50)) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &(vector.f_50))) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &(vector.f_50));
if(num==0){
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
}
elseif(num==1){
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY(&vector.f_8[num /*8*/]))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
}
elseif(num==2){
if(MISC::GET_HASH_KEY(&vector.f_8[0 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[0 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[0 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[1 /*8*/]) !=MISC::GET_HASH_KEY(""))if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[1 /*8*/])) INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[1 /*8*/]);
if(MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&vector.f_8[2 /*8*/]) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES"))if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(interiorAtCoordsWithType, &vector.f_8[2 /*8*/])) INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(interiorAtCoordsWithType, &vector.f_8[2 /*8*/]);
}
if(bParam1) INTERIOR::REFRESH_INTERIOR(interiorAtCoordsWithType);
}
Global_41391[iParam0]=1;
Global_41192[iParam0]=1;
flag=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f){
rayfireMapObject=OBJECT::GET_RAYFIRE_MAP_OBJECT(vector, 25f, &vector.f_8[0 /*8*/]);
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(rayfireMapObject)){
if(num==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 3);
Global_41391[iParam0]=1;
flag=true;
}elseif(num==1){
if(OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=7 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(rayfireMapObject, 10);
Global_41391[iParam0]=1;
flag=true;
}}elseif(num==2){
flag=true;
}
}}
break;
case 4:
if(num==0){
ENTITY::REMOVE_MODEL_SWAP(vector, 50f, vector.f_4[1], vector.f_4[0], false);
MISC::CLEAR_BIT(&Global_39543[iParam0 / 32], iParam0 % 32);
}elseif(num==1){
ENTITY::CREATE_MODEL_SWAP(vector, 50f, vector.f_4[0], vector.f_4[1], true);
MISC::SET_BIT(&Global_39543[iParam0 / 32], iParam0 % 32);
}
flag=true;
break;
}
if(flag){
Global_39996[iParam0]=0;
Global_40195[iParam0]=num;
if(!func_223()){
if(!Global_40792[iParam0]){
Global_40792[iParam0]=true;
Global_40991=Global_40991 + 1;
}}}}}
return flag;
}
BOOL func_223() // Position - 0x203C0{
if(func_205()==-1 || func_205()==999 && !func_224()==0) return true;
return false;
}

int func_224() // Position - 0x203F0{
return Global_32164;
}

int func_225(var uParam0, int iParam1) // Position - 0x203FB{
int i;
for (i=0;
i < 3;
i=i + 1){
uParam0->f_4[i]=0;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[i /*8*/], "", 32);
uParam0->f_64[i]=0;
uParam0->f_75[i]=0;
uParam0->f_91[i]=0;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "", 32);
uParam0->f_58={
0f, 0f, 0f 
};
uParam0->f_61={
0f, 0f, 0f 
};
uParam0->f_68={
0f, 0f, 0f 
};
uParam0->f_71={
0f, 0f, 0f 
};
uParam0->f_74=0f;
uParam0->f_79={
0f, 0f, 0f 
};
uParam0->f_82={
0f, 0f, 0f 
};
uParam0->f_85={
0f, 0f, 0f 
};
uParam0->f_88={
0f, 0f, 0f 
};
switch (iParam1){
case 3:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TRV1_Trail_start", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TRV1_Trail_end", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 4:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS3_05_water_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_05_water_grp2", 32);
*uParam0={
-24.685f, 3032.92f, 40.331f 
};
break;
case 0:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "gasstation_ipl_group1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasstation_ipl_group2", 32);
*uParam0={
-93.4f, 6410.9f, 36.8f 
};
break;
case 1:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_Smash2_startimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_Smash2_endimap", 32);
*uParam0={
890.3647f, -2367.289f, 28.10582f 
};
break;
case 2:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DES_StiltHouse_imapstart", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_StiltHouse_imapend", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020.5f, 663.41f, 154.75f 
};
uParam0->f_58={
-1018.91345f, 603.2904f, 105.66109f 
};
uParam0->f_61={
-1038.9135f, 639.2904f, 135.66109f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bnkheist_apt_norm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bnkheist_apt_dest_vfx", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_jb700_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 8:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_entityXF_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 9:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_cheetah_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 10:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "prop_ztype_covered", 32);
*uParam0={
490.8999f, -1334.068f, 28.3298f 
};
break;
case 11:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cargoship", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "sunkcargoship", 32);
uParam0->f_68={
-162.89182f, -2365.7693f, 0f 
};
uParam0->f_71={
190.75f, 31.25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ship_occ_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "smboat", 32);
break;
case 15:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "gasparticle_grp2", 32);
*uParam0={
-95.2f, 6411.3f, 31.5f 
};
break;
case 16:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_02_cf_offmission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission1", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 17:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission2", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 18:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission3", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 19:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS1_02_cf_onmission4", 32);
*uParam0={
-146.3837f, 6161.5f, 30.2062f 
};
break;
case 20:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jetstealtunnel", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
801.7f, -1810.8f, 23.3f 
};
break;
case 21:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Jetsteal_ipl_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jetsteal_ipl_grp2", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787.3967f, -1808.8584f, 29.8532f 
};
uParam0->f_58={
814f, -1750f, 20f 
};
uParam0->f_61={
790f, -1899f, 35f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
uParam0->f_64[2]=0;
break;
case 22:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "BH1_47_JoshHse_UnBurnt", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_REQUEST", 32);
*uParam0={
163.4f, -745.7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FBI_colPLUG", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 28:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FBI_repair", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_lod");
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178.534f, -668.835f, 37.2113f 
};
break;
case 32:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIB_heist_lights", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 33:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIB_heist_dmg", 32);
*uParam0={
136.004f, -749.287f, 153.302f 
};
break;
case 34:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_rubble", 32);
*uParam0={
74.29f, -736.05f, 46.76f 
};
break;
case 35:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "FIBlobbyfake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FIBlobby", 32);
*uParam0={
105.4557f, -745.4835f, 44.7548f 
};
break;
case 36:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_HC_REMOVE", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670.3f, 41.9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50.2f, 3743.9f, 40.9f 
};
uParam0->f_79={
16.9757f, 3614.3074f, 30.0677f 
};
uParam0->f_82={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_85={
16.9757f, 3614.3074f, 30.0677f 
};
uParam0->f_88={
145.2451f, 3748.912f, 49.6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkA_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkA_grp2", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 39:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerA_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
50.2f, 3743.9f, 40.9f 
};
break;
case 40:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkB_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkB_grp2", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 41:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerB_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
106.7f, 3732.1f, 40.8f 
};
break;
case 42:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkC_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkC_grp2", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerC_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
72.7f, 3695.4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkD_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkD_grp2", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 45:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerD_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
43.8f, 3699.7f, 41.3f 
};
break;
case 46:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "trailerparkE_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "trailerparkE_grp2", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 47:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_trailerE_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
28.5f, 3668f, 40.4f 
};
break;
case 48:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_34), "des_methtrailer", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "methtrailer_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "methtrailer_grp2", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
uParam0->f_68={
31.134f, 3738.783f, 39.062f 
};
uParam0->f_71={
13.6f, 20f, 8.9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "occl_meth_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
29.4838f, 3735.593f, 38.688f 
};
break;
case 50:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_startimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_endimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450.5955f, 4959.929f, 44.2575f 
};
uParam0->f_79={
2383.7556f, 4929.9883f, 39.52461f 
};
uParam0->f_82={
2505.7556f, 5023.9883f, 67.52461f 
};
break;
case 55:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhs_start_occl", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhs_end_occl", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
2450.5955f, 4959.929f, 44.2575f 
};
break;
case 51:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farm", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444.8f, 4976.4f, 50.5f 
};
break;
case 52:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farm_props", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 53:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "des_farmhouse", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "des_farmhouse", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 54:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "farmint_cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "farmint", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
2447.9f, 4973.4f, 47.7f 
};
break;
case 56:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "tankerexp_grp0", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp3", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 57:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp1", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 58:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "tankerexp_grp2", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 59:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DES_tankerexp", 32);
*uParam0={
1676.4154f, -1626.3705f, 111.4848f 
};
break;
case 60:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "dockcrane1", 32);
*uParam0={
889.3f, -2910.9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CanyonRvrShallow", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CanyonRvrDeep", 32);
*uParam0={
-1600.6194f, 4443.4565f, 0.725f 
};
break;
case 62:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Garage_door_locked", 32);
*uParam0={
966.1f, -114.8f, 75.2f 
};
break;
case 63:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ch1_02_closed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ch1_02_open", 32);
*uParam0={
-3086.4285f, 339.2523f, 6.3717f 
};
break;
case 64:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ferris_finale_Anim", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-1675.1783f, -1143.6046f, 12.0175f 
};
break;
case 65:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "railing_start", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "railing_end", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 66:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "canyonriver01", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "canyonriver01_traincrash", 32);
*uParam0={
-532.1309f, 4526.187f, 88.7955f 
};
break;
case 67:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_05_WOFFM", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_05_FIB2_Mission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "DT1_05_WOFFM", 32);
*uParam0={
131.29f, -631.22f, 261.85f 
};
break;
case 68:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "coronertrash", 32);
*uParam0={
233.9f, -1355f, 30.3f 
};
break;
case 69:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Coroner_Int_off", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Coroner_Int_on", 32);
*uParam0={
234.4f, -1355.6f, 40.5f 
};
break;
case 70:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "id2_14_pre_no_int", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 71:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_during2", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 72:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_on_fire", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "id2_14_post_no_int", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 73:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "id2_14_during_door", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 74:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "burnt_switch_off", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
716.84f, -962.05f, 31.59f 
};
break;
case 75:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_Default", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "RC12B_Destroyed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 76:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "RC12B_HospitalInterior", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 105:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SM_15_BldGRAF1", 32);
*uParam0={
330.4596f, -584.8196f, 42.3174f 
};
break;
case 106:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861.28f, 2402.11f, 58.53f 
};
break;
case 107:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FruitBB", 32);
*uParam0={
-1327.46f, -274.82f, 54.25f 
};
break;
case 108:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697.32f, 3162.18f, 58.1f 
};
break;
case 109:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119.12f, 3058.21f, 53.25f 
};
break;
case 110:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ap1_03_bbrd_dcl", 32);
*uParam0={
-804.25f, -2276.88f, 23.59f 
};
break;
case 111:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_02_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_02_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 112:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "HW1_Emissive_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "HW1_Emissive_NewBill", 32);
*uParam0={
296.5f, 173.3f, 100.4f 
};
break;
case 77:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
480.9554f, -1321.2096f, 28.2037f 
};
uParam0->f_85={
508.3f, -1299.3f, 39.4f 
};
uParam0->f_88={
459.9f, -1363.2f, 21.4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "TrevorsTrailer", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "TrevorsTrailerTrash", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case 79:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "scafstartimap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "scafendimap", 32);
*uParam0={
-1088.6f, -1650.6f, 6.4f 
};
break;
case 80:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chop_props", 32);
*uParam0={
-13.83f, -1455.45f, 31.81f 
};
break;
case 113:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "AP1_04_TriAf01", 32);
*uParam0={
-1277.6292f, -2030.913f, 1.2823f 
};
break;
case 114:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS2_06_TriAf02", 32);
*uParam0={
2384.9692f, 4277.5825f, 30.379f 
};
break;
case 115:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS4_04_TriAf03", 32);
*uParam0={
1577.8813f, 3836.1074f, 30.7717f 
};
break;
case 87:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_21_prop_lift_on", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-180.5771f, -1016.9276f, 28.2893f 
};
break;
case 88:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "jewel2fake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "post_hiest_unload", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "bh1_16_refurb", 32);
*uParam0={
-630.4205f, -236.7843f, 37.057f 
};
uParam0->f_79={
-623.6868f - 11f, -231.93504f - 11f, 40.307034f - 3.25f 
};
uParam0->f_82={
-623.6868f + 11f, -231.93504f + 11f, 40.307034f + 3.25f 
};
break;
case 89:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "bh1_16_doors_shut", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "refit_unload", 32);
*uParam0={
-583.1606f, -282.3967f, 35.394f 
};
break;
case 90:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "v_tunnel_hole_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "v_tunnel_hole", 32);
*uParam0={
-14.651f, -604.3639f, 25.1823f 
};
break;
case 91:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "cs5_4_trains", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2773.6099f, 2835.3274f, 35.1903f 
};
break;
case 94:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "airfield", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
1743.6821f, 3286.2512f, 40.0875f 
};
break;
case 95:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222.9f, 1877.9f, 79.9f 
};
uParam0->f_58={
1206.8f, 1803f, 43.9f 
};
uParam0->f_61={
1329f, 2060.4f, 143.9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_01_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44.02f 
};
break;
case 103:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_17_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "DT1_17_NewBill", 32);
*uParam0={
391.81f, -962.71f, 41.97f 
};
break;
case 102:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SC1_14_OldBill", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SC1_14_NewBill", 32);
*uParam0={
424.2f, -1944.31f, 33.09f 
};
break;
case 92:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_01_track", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2626.3743f, 2949.869f, 39.1409f 
};
break;
case 93:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "ld_rail_02_track", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
2626.3743f, 2949.869f, 39.1409f 
};
break;
case 118:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_M_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 116:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_D_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_D_Moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 117:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_S_items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_S_items_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 119:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_L_Items", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_L_Moved", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 120:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_M_items_swap", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808.033f, 172.1309f, 75.7406f 
};
break;
case 122:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_FameShame", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802.0311f, 172.9131f, 75.7408f 
};
break;
case 121:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_JewelHeist", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 123:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Michael_premier", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 124:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_plane_ticket", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 170:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "burgershot_yoga", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813.3f, 177.5f, 75.76f 
};
break;
case 171:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_Scuba", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810.5301f, 187.7868f, 71.4786f 
};
break;
case 125:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_Michael_bed_tidy", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_Michael_bed_Messy", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811.2679f, 179.3344f, 75.7408f 
};
break;
case 164:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Jewel_Gasmasks", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 165:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency _Overalls", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 166:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_53_Agency_Blueprint", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 167:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_KitBag", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 168:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Body_Armour", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 169:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_35_Fireman", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707.2563f, -965.147f, 29.4179f 
};
break;
case 126:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 127:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 128:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Trevor_Helmet2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 129:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 130:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 131:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_24_Trevor_Briefcase2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 132:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay1", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 133:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay3", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 134:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_26_Michael_Stay2", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973.8053f, 3818.5547f, 32.4363f 
};
break;
case 179:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shutter_open", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "shutter_closed", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30.8793f, -1088.3356f, 25.4221f 
};
uParam0->f_68={
-29.3f, -1086.35f, 25.57f 
};
uParam0->f_71={
5.5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "csr_beforeMission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "csr_afterMissionA", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "csr_afterMissionB", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 175:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_68={
-49.21f, -1090.28f, 25.42f 
};
uParam0->f_71={
2.5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_68={
-49.28f, -1092.66f, 25.42f 
};
uParam0->f_71={
3f, 1f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 177:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_68={
-53.07f, -1096.73f, 25.5f 
};
uParam0->f_71={
1f, 3f, 2f 
};
uParam0->f_74=-45f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 178:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "carshowroom_broken", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 173:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "shr_int", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59.7936f, -1098.784f, 27.2612f 
};
break;
case 180:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Shutter", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "", 32);
*uParam0={
23.9346f, -669.7552f, 30.8853f 
};
break;
case 181:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Hospitaldoorsanim", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "Hospitaldoorsfixed", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300.9423f, -586.1784f, 42.2919f 
};
break;
case 135:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_clean_apt", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_A", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 136:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_B", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 137:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_mess_C", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 138:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_sextoys_a", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 139:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_wade_shit", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 140:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_wade_sofa_A", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 141:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "layer_debra_pic", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 142:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_torture", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 143:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_sofa_A", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_sofa_B", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 144:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "layer_whiskey", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 145:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "swap_mrJam_A", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_B", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 146:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "swap_mrJam_C", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157.1294f, -1523.0276f, 9.6327f 
};
break;
case 147:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "vb_30_emissive", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150.0391f, -1521.761f, 9.6331f 
};
break;
case 148:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150.0391f, -1521.761f, 9.6331f 
};
break;
case 149:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "sheriff_cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
1856.0288f, 3682.9983f, 33.2675f 
};
break;
case 150:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "CS1_16_Sheriff_Cap", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-440.5073f, 6018.766f, 30.49f 
};
break;
case 151:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.3857f, 793.0532f 
};
break;
case 152:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487.31f, 5588.3857f, 793.0532f 
};
break;
case 153:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "V_57_FranklinStuff", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Franklin_LEFT", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 154:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_GangBandana", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 155:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_57_Safari", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13.9623f, -1440.6136f, 30.1015f 
};
break;
case 172:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "V_19_Trevor_Mess", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96.4811f, -1291.2944f, 28.2688f 
};
break;
case 182:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
139.57953f, -3092.9624f, 8.64631f 
};
uParam0->f_79={
{
8.64631f, -3092.9624f, 139.57953f 
}
-{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_82={
{
8.64631f, -3092.9624f, 139.57953f 
}
+{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_85={
{
8.64631f, -3092.9624f, 139.57953f 
}
-{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_88={
{
8.64631f, -3092.9624f, 139.57953f 
}
+{
4.1875f, 24f, 33.3125f 
}};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
203.77838f, -3131.767f, 7.041344f 
};
uParam0->f_79={
{
7.041344f, -3131.767f, 203.77838f 
}
-{
2.5625f, 2.75f, 4.875f 
}};
uParam0->f_82={
{
7.041344f, -3131.767f, 203.77838f 
}
+{
2.5625f, 2.75f, 4.875f 
}};
break;
case 184:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
144.77055f, -2982.6594f, 7.952507f 
};
uParam0->f_79={
{
7.952507f, -2982.6594f, 144.77055f 
}
-{
3.125f, 3.4375f, 5.3125f 
}};
uParam0->f_82={
{
7.952507f, -2982.6594f, 144.77055f 
}
+{
3.125f, 3.4375f, 5.3125f 
}};
break;
case 185:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1154.9647f, -1520.9827f, 9.132731f 
};
uParam0->f_79={
-1154.9647f, -1520.9827f, 9.132731f 
};
uParam0->f_82={
-1158.9647f, -1524.9827f, 11.632731f 
};
break;
case 187:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1052.2039f, 371.9537f, 67.914f 
};
uParam0->f_79={
-1052.2039f, 371.9537f, 67.914f 
};
uParam0->f_82={
-1048.0645f, 368.0221f, 70.9128f 
};
break;
case 186:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
1954.9836f, 3792.991f, 30.3086f 
};
uParam0->f_79={
1954.9836f, 3792.991f, 30.3086f 
};
uParam0->f_82={
1983.45f, 3830.78f, 36.2726f 
};
break;
case 188:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=1;
*uParam0={
-1122.2018f, 48.5724f, 51.4652f 
};
uParam0->f_79={
-1122.2018f, 48.5724f, 51.4652f 
};
uParam0->f_82={
-1076.2333f, 92.1041f, 60.0617f 
};
break;
case 81:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KorizTempWalls", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-2199.1377f, 223.4648f, 181.1118f 
};
break;
case 82:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "mic3_chopper_debris", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
-2242.7847f, 263.4779f, 173.6154f 
};
break;
case 83:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "chemgrill_grp1", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
3832.9f, 3665.5f, -23.4f 
};
break;
case 84:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Plane_crash_trench", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
uParam0->f_33=0;
*uParam0={
2814.7f, 4758.5f, 47.9f 
};
break;
case 85:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "golfflags", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-1096.5055f, 4.5754f, 49.8103f 
};
break;
case 86:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "yogagame", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
-781.6566f, 186.8937f, 71.8352f 
};
break;
case 189:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "Carwash_with_spinners", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55.7f, -1391.3f, 30.5f 
};
break;
case 190:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "KT_CarWash", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700.091f, -933.641f, 20.308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096.3812f, -836.17f, 36.6755f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449.6558f, -980.1375f, 42.6918f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363.0175f, -1598.0793f, 35.9502f 
};
uParam0->f_85={
*uParam0 -{
25f, 25f, 15f 
}};
uParam0->f_88={
*uParam0 +{
25f, 25f, 15f 
}};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "CS3_07_MPGates", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "", 32);
*uParam0={
-1601.4241f, 2808.2126f, 16.2598f 
};
break;
case 97:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "DT1_03_Gr_Closed", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "", 32);
*uParam0={
23.7318f, -647.2123f, 37.9549f 
};
break;
case 98:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "FINBANK", 32);
*uParam0={
12.9689f, -648.4698f, 9.7693f 
};
break;
case 99:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "PAPER1_RCM_ALT", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "PAPER1_RCM", 32);
*uParam0={
-1459.1273f, 486.1281f, 115.2016f 
};
break;
case 100:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "SP1_10_fake_interior", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "SP1_10_real_interior", 32);
*uParam0={
-248.4916f, -2010.509f, 34.5743f 
};
break;
case 101:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "facelobbyfake", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "facelobby", 32);
*uParam0={
-1081.3467f, -263.1502f, 38.7152f 
};
break;
case 195:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "atriumglstatic", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "atriumglmission", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[2 /*8*/], "atriumglcut", 32);
*uParam0={
136.1795f, -750.701f, 262.0516f 
};
break;
case 197:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "racetrack01", 32);
*uParam0={
2096f, 3168.7f, 42.9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "showhome_only", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 157:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_unpacking", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 158:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "franklin_settled", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 163:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tshirt", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 159:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "bong_and_wine", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 161:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_flyer", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 162:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "progress_tux", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 160:
uParam0->f_3=2;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "locked", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "unlocked", 32);
TEXT_LABEL_ASSIGN_STRING(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7.0256f, 537.3075f, 175.0281f 
};
break;
case 96:
uParam0->f_3=1;
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[0 /*8*/], "", 32);
TEXT_LABEL_ASSIGN_STRING(&uParam0->f_8[1 /*8*/], "chophillskennel", 32);
*uParam0={
19.0568f, 536.4818f, 169.6277f 
};
break;
}
return 1;
}


void func_226() // Position - 0x23B95{
func_251(85, 1);
return;
}


void func_227() // Position - 0x23BA4{
if(func_228(5) && func_228(6)) func_194(1800466587, 1, 2, 49, 1920000, 10000, -1, 167, -1, 0, 1);
return;
}
BOOL func_228(int iParam0) // Position - 0x23BD9{
if(iParam0==63 || iParam0==-1) return false;
return IS_BIT_SET(Global_113648.f_18576[iParam0 /*6*/], 3);
}


void func_229() // Position - 0x23C04{
func_251(84, 1);
return;
}


void func_230() // Position - 0x23C13{
func_194(483349085, 1, 2, 49, 120000, 10000, -1, 165, -1, 0, 1);
return;
}


void func_231() // Position - 0x23C36{
func_251(110, 1);
return;
}


void func_232() // Position - 0x23C45{
if(func_234()) func_233(1, 97, 500000, false, false);
return;
}


void func_233(int iParam0, int iParam1, int iParam2, BOOL bParam3, BOOL bParam4) // Position - 0x23C61{
int outValue;
Hash statHash;
if(func_64(iParam0)==3) return;
if(func_64(iParam0)==4) return;
func_31(func_64(iParam0), 1, iParam1, iParam2, false);
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
BOOL func_234() // Position - 0x23D33{
if(DLC::IS_DLC_PRESENT(-65181770)) return true;
return false;
}


void func_235() // Position - 0x23D4C{
int num;
int num2;
int num3;
int num4;
BOOL flag;
int num5;
int num6;
int num7;
if(func_246(43)){
Global_113648.f_9087.f_99.f_58[81]=true;
num=Global_78828.f_12526[22 /*2*/];
num2=Global_78828.f_12526[22 /*2*/].f_1;
num3=num;
num4=-1;
flag=false;
while (num3 <=num2 && !flag){
if(Global_78828.f_6825[num3 /*3*/]==531432813){
num4=Global_78828.f_6825[num3 /*3*/].f_2;
num5=Global_78828.f_109[num4 /*4*/];
if(num5==128){
Global_113648.f_9087.f_2[22 /*3*/].f_1=num3;
flag=true;
}}
num3=num3 + 1;
}
num6=func_245(43);
num7=func_244(43);
func_239(num6);
func_236(Global_91433[num7 /*5*/]);
}
return;
}


void func_236(int iParam0) // Position - 0x23E17{
int num;
if(iParam0==-1) return;
num=func_238(iParam0);
if(num==-1) return;
func_237(num);
return;
}


void func_237(int iParam0) // Position - 0x23E3F{
Global_91433[iParam0 /*5*/]=-1;
Global_91433[iParam0 /*5*/].f_1=0;
Global_91433[iParam0 /*5*/].f_2=-1;
Global_91433[iParam0 /*5*/].f_3=-1;
Global_91433[iParam0 /*5*/].f_4=0;
return;
}

int func_238(int iParam0) // Position - 0x23E7C{
int i;
i=0;
for (i=0;
i < 7;
i=i + 1){
if(Global_91433[i /*5*/]==iParam0) return i;
}
return -1;
}


void func_239(int iParam0) // Position - 0x23EAC{
if(Global_97611 || func_243(0) && Global_97612==iParam0) return;
if(iParam0 < 0 || iParam0 > 7) return;
if(!Global_97614[iParam0 /*17*/]) return;
if(Global_97614[iParam0 /*17*/].f_9 !=263) func_242(Global_97614[iParam0 /*17*/].f_9, false, false);
func_240(iParam0);
return;
}


void func_240(int iParam0) // Position - 0x23F1E{
if(IS_BIT_SET(Global_97614[iParam0 /*17*/].f_10.f_1, 6))if(Global_96527 !=4 && Global_96527 !=5) func_241(Global_97614[iParam0 /*17*/].f_5);
if(IS_BIT_SET(Global_97614[iParam0 /*17*/].f_10.f_1, 7))if(Global_96527 !=4 && Global_96527 !=5) func_241(Global_97614[iParam0 /*17*/].f_5);
Global_97614[iParam0 /*17*/].f_1=0;
Global_97614[iParam0 /*17*/].f_3=-1;
Global_97614[iParam0 /*17*/].f_4=6;
Global_97614[iParam0 /*17*/].f_5=-1;
Global_97614[iParam0 /*17*/].f_6=-1;
Global_97614[iParam0 /*17*/].f_7=-1;
if(Global_97614[iParam0 /*17*/]){
if(Global_97614[iParam0 /*17*/].f_9 !=263){
Global_97614[iParam0 /*17*/].f_9 < 0 || Global_97614[iParam0 /*17*/].f_9 >=263;
func_242(Global_97614[iParam0 /*17*/].f_9, false, false);
}
Global_97614[iParam0 /*17*/].f_9=263;
}
Global_97614[iParam0 /*17*/]=false;
Global_97614[iParam0 /*17*/].f_8=-1;
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 0);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 1);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 2);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 3);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 6);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 7);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 8);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 9);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 10);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 11);
MISC::CLEAR_BIT(&(Global_97614[iParam0 /*17*/].f_10.f_1), 12);
return;
}


void func_241(int iParam0) // Position - 0x24101{
if(iParam0 >=94) return;
if(Global_96528 !=-1){
if(Global_96528 !=iParam0) return;
Global_96528=-1;
Global_96527=0;
Global_96529=0;
}
return;
}


void func_242(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24136{
int num;
BOOL flag;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(!bParam2){
flag=IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
if(flag==bParam1) return;
}
if(bParam1 !=IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 0);
MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 15);
}
if(!IS_BIT_SET(Global_32543[num /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
HUD::REMOVE_BLIP(&(Global_32543[num /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
}}
return;
}
BOOL func_243(int iParam0) // Position - 0x24236{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}

int func_244(int iParam0) // Position - 0x24258{
int i;
for (i=0;
i < 7;
i=i + 1){
if(Global_91433[i /*5*/] !=-1)if(Global_78828.f_109[Global_91433[i /*5*/] /*4*/]==iParam0) return i;
}
return -1;
}

int func_245(int iParam0) // Position - 0x24299{
int i;
for (i=0;
i < 8;
i=i + 1){
if(Global_97614[i /*17*/].f_5==iParam0) return i;
}
return -1;
}
BOOL func_246(int iParam0) // Position - 0x242C9{
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


void func_247() // Position - 0x24331{
ENTITY::REMOVE_MODEL_HIDE(-18.3539f, -1438.7838f, 31.305f, 3f, joaat("v_ilev_frnkwarddr1"), false);
ENTITY::REMOVE_MODEL_HIDE(-18.3594f, -1438.1329f, 31.305f, 3f, joaat("v_ilev_frnkwarddr2"), false);
return;
}


void func_248() // Position - 0x2436D{
if(!IS_BIT_SET(Global_113648.f_7690.f_923, 3)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 3);
elseif(!IS_BIT_SET(Global_113648.f_7690.f_923, 4)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 4);
elseif(!IS_BIT_SET(Global_113648.f_7690.f_923, 5)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 5);
return;
}


void func_249() // Position - 0x243D8{
if(!IS_BIT_SET(Global_113648.f_7690.f_923, 0)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 0);
elseif(!IS_BIT_SET(Global_113648.f_7690.f_923, 1)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 1);
elseif(!IS_BIT_SET(Global_113648.f_7690.f_923, 2)) MISC::SET_BIT(&(Global_113648.f_7690.f_923), 2);
return;
}


void func_250() // Position - 0x24443{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(func_17(character)){
switch (character){
case CHAR_MICHAEL:
func_31(0, 1, 38, 60000, false);
func_188(CHAR_ANTONIA, CHAR_MICHAEL, false);
break;
case CHAR_FRANKLIN:
func_31(1, 1, 38, 60000, false);
func_188(CHAR_ANTONIA, CHAR_FRANKLIN, false);
break;
case CHAR_TREVOR:
func_31(2, 1, 38, 60000, false);
func_188(CHAR_ANTONIA, CHAR_TREVOR, false);
break;
}}
func_13(-1199050901);
func_13(1082655975);
func_13(-2100435596);
return;
}


void func_251(int iParam0, int iParam1) // Position - 0x244DC{
if(iParam0==146 || iParam0==-1) return;
if(Global_113648.f_9087.f_99.f_58[iParam0]==iParam1) return;
Global_113648.f_9087.f_99.f_58[iParam0]=iParam1;
return;
}


void func_252() // Position - 0x24521{
int num;
num=func_253(1801771084);
if(num !=-1) Global_113648.f_7690[num /*15*/].f_4=MISC::GET_GAME_TIMER() + 100000;
num=func_253(-1716308760);
if(num !=-1) Global_113648.f_7690[num /*15*/].f_4=MISC::GET_GAME_TIMER() + 100000;
func_384();
return;
}

int func_253(int iParam0) // Position - 0x2457B{
int i;
for (i=0;
i < Global_113648.f_7690.f_136;
i=i + 1){
if(Global_113648.f_7690[i /*15*/]==iParam0) return i;
}
return -1;
}


void func_254() // Position - 0x245B3{
func_194(341684477, 1, 7, 45, 30000, 5000, -1, 0, -1, 0, 1);
return;
}


void func_255() // Position - 0x245D4{
int num;
num=func_253(1635046052);
if(num !=-1){
Global_113648.f_7690.f_913=1;
Global_113648.f_7690.f_914=0;
Global_113648.f_7690.f_911=1635046052;
func_251(79, 1);
}
func_13(1635046052);
return;
}


void func_256() // Position - 0x24623{
if(func_257(59)) func_194(1328556918, 0, 2, 0, 6000, 6000, -1, 142, -1, 262148, 1);
return;
}
BOOL func_257(int iParam0) // Position - 0x24650{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}


void func_258() // Position - 0x2467C{
if(func_257(9)) func_259(-1074970768, 0, 1, 31, 3, 6000, 6000, -1, -1, 142, -1, 1060);
return;
}

int func_259(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11) // Position - 0x246AA{
int num;
int i;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(iParam5 < 0) return 0;
if(iParam6 < 0) return 0;
if(iParam8==76) return 0;
if(iParam9==235) return 0;
if(iParam3 < 3)if(IS_BIT_SET(iParam2, iParam3)) return 0;
if(iParam4 < 3)if(iParam4 !=iParam3) return 0;
if(iParam2 < 1 || iParam2 > 7) return 0;
if(Global_113648.f_7690.f_136 < 9){
num=iParam0;
if(Global_113648.f_7690.f_911==num) Global_113648.f_7690.f_911=-1;
num.f_3=func_10(iParam1);
num.f_1=iParam11;
num.f_2=iParam2;
num.f_4=MISC::GET_GAME_TIMER() + iParam5;
num.f_5=iParam6;
num.f_6=iParam3;
num.f_14=iParam4;
num.f_10=iParam7;
num.f_11=-1;
num.f_7=iParam8;
num.f_8=iParam9;
num.f_9=iParam10;
MISC::CLEAR_BIT(&(num.f_1), 1);
MISC::CLEAR_BIT(&(num.f_1), 0);
if(iParam7 !=-1) MISC::SET_BIT(&(num.f_1), 11);
elseif(iParam1==0) MISC::SET_BIT(&(num.f_1), 10);
Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/]={
num 
};
Global_113648.f_7690.f_136=Global_113648.f_7690.f_136 + 1;
for (i=0;
i < 3;
i=i + 1){
if(IS_BIT_SET(iParam2, i)) func_16(i);
}
return 1;
}
return 0;
}


void func_260() // Position - 0x24824{
func_251(51, 1);
return;
}


void func_261(BOOL bParam0) // Position - 0x24833{
TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", bParam0);
if(bParam0) MISC::SET_BIT(&(Global_113648.f_10018.f_25), 2);
else MISC::CLEAR_BIT(&(Global_113648.f_10018.f_25), 2);
return;
}


void func_262(BOOL bParam0) // Position - 0x24869{
func_242(109, bParam0, false);
return;
}


void func_263(BOOL bParam0) // Position - 0x2487A{
func_242(97, bParam0, false);
return;
}


void func_264(int iParam0) // Position - 0x2488B{
int offset;
int i;
offset=iParam0;
for (i=0;
offset > 31;
i=i + 1){
offset=offset - 32;
}
if(i < 3) MISC::SET_BIT(&Global_113648.f_20412.f_150[i], offset);
return;
}


void func_265() // Position - 0x248CD{
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 3, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 12, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 4, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 11, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 14, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 15, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 17, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 23, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 24, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 5, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 1, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 4, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 8, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 10, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 8, 9, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 3, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 2, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 7, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 11, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 13, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 8, true, 1);
return;
}


void func_266() // Position - 0x24A10{
func_259(466185907, 1, 2, 14, 3, 200000, 180000, -1, -1, 0, -1, 0);
func_259(185453884, 1, 4, 14, 3, 350000, 180000, -1, -1, 0, -1, 0);
return;
}


void func_267() // Position - 0x24A50{
Global_43809[12]=MISC::GET_GAME_TIMER() + 120000;
return;
}


void func_268() // Position - 0x24A68{
Global_43809[15]=MISC::GET_GAME_TIMER() + 120000;
return;
}


void func_269() // Position - 0x24A80{
Global_43809[14]=MISC::GET_GAME_TIMER() + 120000;
return;
}


void func_270() // Position - 0x24A98{
Global_43809[17]=MISC::GET_GAME_TIMER() + 120000;
return;
}


void func_271() // Position - 0x24AB0{
if(!func_272(42))if(func_257(44)) func_251(42, 1);
elseif(func_257(40)) func_251(42, 1);
return;
}
BOOL func_272(int iParam0) // Position - 0x24AE5{
if(iParam0==146 || iParam0==-1) return false;
return Global_113648.f_9087.f_99.f_58[iParam0];
}


void func_273() // Position - 0x24B12{
func_251(75, 1);
return;
}


void func_274() // Position - 0x24B21{
if(_GET_CURRENT_PLAYER_CHARACTER()==CHAR_FRANKLIN)if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) func_275(4, PLAYER::PLAYER_PED_ID());
return;
}


void func_275(int iParam0, Ped pedParam1) // Position - 0x24B46{
int i;
Ped ped;
BOOL flag;
if(!ENTITY::DOES_ENTITY_EXIST(pedParam1)) return;
if(func_276(iParam0, pedParam1)) return;
if(Global_41953[iParam0 /*31*/].f_24 < 5){
Global_41953[iParam0 /*31*/].f_25[Global_41953[iParam0 /*31*/].f_24]=pedParam1;
Global_41953[iParam0 /*31*/].f_24=Global_41953[iParam0 /*31*/].f_24 + 1;
}else{
flag=false;
for (i=0;
i < 5;
i=i + 1){
ped=Global_41953[iParam0 /*31*/].f_25[i];
if(!ENTITY::DOES_ENTITY_EXIST(ped) || PED::IS_PED_INJURED(ped)){
Global_41953[iParam0 /*31*/].f_25[i]=pedParam1;
flag=true;
i=6;
}}
!flag;
}
return;
}
BOOL func_276(int iParam0, Ped pedParam1) // Position - 0x24BF8{
int i;
for (i=0;
i < Global_41953[iParam0 /*31*/].f_24;
i=i + 1){
if(pedParam1==Global_41953[iParam0 /*31*/].f_25[i]) return true;
}
return false;
}


void func_277() // Position - 0x24C31{
int num;
int num2;
if(!func_257(74) || !func_257(75)){
if(func_257(60)){
num=func_253(-749738207);
if(num !=-1){
num2=MISC::GET_GAME_TIMER() + 20000;
if(Global_113648.f_7690[num /*15*/].f_4 > num2) Global_113648.f_7690[num /*15*/].f_4=num2;
}
num=func_278(1269300253);
if(num !=-1){
num2=MISC::GET_GAME_TIMER() + 20000;
if(Global_113648.f_7690.f_651[num /*14*/].f_4 > num2) Global_113648.f_7690.f_651[num /*14*/].f_4=num2;
}}}
return;
}

int func_278(int iParam0) // Position - 0x24CD5{
int i;
for (i=0;
i < Global_113648.f_7690.f_764;
i=i + 1){
if(Global_113648.f_7690.f_651[i /*14*/]==iParam0) return i;
}
return -1;
}


void func_279() // Position - 0x24D11{
int num;
int num2;
if(!func_257(83)){
if(func_257(79)){
num=func_278(2073240496);
if(num !=-1){
num2=MISC::GET_GAME_TIMER() + 25000;
if(Global_113648.f_7690.f_651[num /*14*/].f_4 > num2) Global_113648.f_7690.f_651[num /*14*/].f_4=num2;
}}}
return;
}


void func_280() // Position - 0x24D6D{
int num;
int num2;
if(!func_257(51)){
if(func_257(22)){
if(func_257(60)){
num=func_253(-464957327);
if(num !=-1){
num2=MISC::GET_GAME_TIMER() + 25000;
if(Global_113648.f_7690[num /*15*/].f_4 > num2) Global_113648.f_7690[num /*15*/].f_4=num2;
}}}}
return;
}


void func_281() // Position - 0x24DCC{
func_251(15, 1);
return;
}


void func_282() // Position - 0x24DDB{
int num;
MISC::CLEAR_AREA(689.6588f, -962.4214f, 22.4975f, 25f, true, false, false, false);
if(!func_257(88)){
if(!func_246(88)){
num=func_278(-270587643);
if(num !=-1){
func_13(-270587643);
func_251(15, 1);
}}}
return;
}


void func_283() // Position - 0x24E35{
if(!func_173(22)){
func_289(22, true, false);
func_289(23, true, false);
func_289(24, true, false);
func_289(25, true, false);
func_289(26, true, false);
func_289(27, true, false);
func_288(43);
func_284(43);
func_410("AM_H_TATTOO" /*Tattoo parlors now available at ~BLIP_TATTOO~ Visit the parlor for some new ink.*/, 1, 3000, -1, 10000, 7, 0, 0, 0);
func_410("AM_H_SHOUT" /*Press ~INPUT_CONTEXT~ to interact with pedestrians.*/, 0, 20000, -1, 10000, 7, 0, 0, 0);
func_264(22);
}
return;
}


void func_284(int iParam0) // Position - 0x24EB1{
func_287(iParam0, true, false);
func_286(iParam0, true);
func_285(iParam0, true);
return;
}


void func_285(int iParam0, BOOL bParam1) // Position - 0x24ECF{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(bParam1==IS_BIT_SET(Global_32543[num /*23*/].f_11, 4)) return;
if(bParam1) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 4);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 4);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
return;
}


void func_286(int iParam0, BOOL bParam1) // Position - 0x24F52{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(bParam1==IS_BIT_SET(Global_32543[num /*23*/].f_11, 5)) return;
if(bParam1) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 5);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 5);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
return;
}


void func_287(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x24FD5{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(bParam1==IS_BIT_SET(Global_32543[num /*23*/].f_11, 6)) return;
if(bParam1) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 6);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 6);
if(bParam2) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 11);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 11);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
return;
}


void func_288(int iParam0) // Position - 0x2507E{
int num;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(IS_BIT_SET(Global_32543[num /*23*/].f_11, 9)) return;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 9);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
return;
}


void func_289(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x250F6{
if(bParam1){
if(!func_297(iParam0, 0, false)){
if(bParam2 && Global_100733.f_18[iParam0]){
if(func_296(iParam0)==3 && !func_295(iParam0)){
func_294(iParam0);
func_293(iParam0, 0, false);
func_291(iParam0, 1, false);
func_290(iParam0);
}else{
func_293(iParam0, 1, false);
func_290(iParam0);
}}else{
func_293(iParam0, 0, false);
func_291(iParam0, 1, false);
func_290(iParam0);
}}else{
func_291(iParam0, 1, false);
func_290(iParam0);
}}elseif(func_297(iParam0, 0, false)){
func_291(iParam0, 0, false);
func_291(iParam0, 1, false);
func_290(iParam0);
}
return;
}


void func_290(int iParam0) // Position - 0x251B5{
Global_100733.f_202[iParam0]=1;
Global_100733.f_201=1;
return;
}


void func_291(int iParam0, int iParam1, BOOL bParam2) // Position - 0x251CF{
int address;
if(iParam0==-1) return;
if(bParam2){
MISC::CLEAR_BIT(&Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_205()==0){
address=_MPCHAR_STAT_GET_INT(func_292(iParam0), -1, 0);
MISC::CLEAR_BIT(&address, iParam1);
_MPCHAR_STAT_SET_INT(func_292(iParam0), address, -1, true, false);
}}else{
MISC::CLEAR_BIT(&Global_113648.f_668[iParam0], iParam1);
}
return;
}
eMPStat func_292(int iParam0) // Position - 0x25241{
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


void func_293(int iParam0, int iParam1, BOOL bParam2) // Position - 0x255DA{
int address;
if(iParam0==-1) return;
if(bParam2){
MISC::SET_BIT(&Global_100733.f_1407[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_205()==0){
address=_MPCHAR_STAT_GET_INT(func_292(iParam0), -1, 0);
MISC::SET_BIT(&address, iParam1);
_MPCHAR_STAT_SET_INT(func_292(iParam0), address, -1, true, false);
}}else{
MISC::SET_BIT(&Global_113648.f_668[iParam0], iParam1);
}
return;
}


void func_294(int iParam0) // Position - 0x2564C{
if(Global_100733.f_18[iParam0]){
func_293(iParam0, 10, true);
func_293(iParam0, 19, true);
}
return;
}
BOOL func_295(int iParam0) // Position - 0x25673{
return func_297(iParam0, 5, true);
}

int func_296(int iParam0) // Position - 0x25683{
switch (iParam0){
case -1:
return 6;
case 0:
return 0;
case 1:
return 0;
case 2:
return 0;
case 3:
return 0;
case 4:
return 0;
case 5:
return 0;
case 6:
return 0;
case 50:
return 0;
case 7:
return 1;
case 8:
return 1;
case 9:
return 1;
case 10:
return 1;
case 11:
return 1;
case 12:
return 1;
case 13:
return 1;
case 14:
return 1;
case 15:
return 1;
case 16:
return 1;
case 17:
return 1;
case 18:
return 1;
case 19:
return 1;
case 20:
return 1;
case 21:
return 1;
case 22:
return 2;
case 23:
return 2;
case 24:
return 2;
case 25:
return 2;
case 26:
return 2;
case 27:
return 2;
case 28:
return 3;
case 29:
return 3;
case 30:
return 3;
case 31:
return 3;
case 32:
return 3;
case 33:
return 3;
case 34:
return 3;
case 35:
return 3;
case 36:
return 3;
case 37:
return 3;
case 38:
return 3;
case 39:
return 4;
case 40:
return 4;
case 41:
return 4;
case 42:
return 4;
case 43:
return 4;
case 44:
return 4;
case 45:
return 5;
case 46:
return 3;
case 47:
return 3;
case 48:
return 3;
case 49:
return 3;
case 52:
return 3;
case 51:
return 1;
case 53:
return 3;
case 54:
return 2;
case 55:
return 1;
case 56:
return 3;
case 57:
return 1;
case 58:
return 3;
case 59:
return 3;
}
return 6;
}
BOOL func_297(int iParam0, int iParam1, BOOL bParam2) // Position - 0x259AC{
if(iParam0==-1) return false;
if(bParam2) return IS_BIT_SET(Global_100733.f_1407[iParam0], iParam1);
elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(func_205()==0) return IS_BIT_SET(_MPCHAR_STAT_GET_INT(func_292(iParam0), -1, 0), iParam1);
else return IS_BIT_SET(Global_113648.f_668[iParam0], iParam1);
return false;
}


void func_298() // Position - 0x25A0D{
func_300(1);
func_299(false);
func_251(60, 1);
return;
}


void func_299(BOOL bParam0) // Position - 0x25A26{
int i;
int zoneId;
if(!bParam0==Global_38594){
i=0;
for (i=0;
i < 263;
i=i + 1){
MISC::SET_BIT(&(Global_32543[i /*23*/].f_11), 18);
}
if(Global_32540==1) Global_32541=1;
Global_32540=1;
}
Global_38594=bParam0;
HUD::SET_MINIMAP_IN_PROLOGUE(bParam0);
zoneId=unk_0xFA70BE9307EC9D4A("PrLog");
ZONE::SET_ZONE_ENABLED(zoneId, bParam0);
return;
}


void func_300(int iParam0) // Position - 0x25A8A{
Vector3 entityCoords;
int num;
float waterHeight;
int num2;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_302(1);
PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
if(iParam0==1){
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
num2=0;
entityCoords.f_2=entityCoords.f_2 + 1.5f;
num=WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(entityCoords, 1, &waterHeight);
if(num==1) num2=1;
elseif(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) num2=1;
if(num2==1){
entityCoords.f_2=waterHeight + 10f;
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), entityCoords, true, false, false, true);
}elseif(num==2){
}}
func_301(1);
}
return;
}


void func_301(int iParam0) // Position - 0x25B2A{
BOOL flag;
Entity entityAttachedTo;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iParam0==1){
MISC::SET_BIT(&(Global_100681.f_20), 15);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
}else{
if(!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()))if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())) ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
if(!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())) ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
}}elseif(IS_BIT_SET(Global_100681.f_20, 15)){
flag=false;
if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
entityAttachedTo=ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(entityAttachedTo)){
if(!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(entityAttachedTo))){
ENTITY::FREEZE_ENTITY_POSITION(entityAttachedTo, false);
flag=true;
}}}
if(!flag) ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
MISC::CLEAR_BIT(&(Global_100681.f_20), 15);
}}
return;
}


void func_302(int iParam0) // Position - 0x25C0E{
Vector3 entityCoords;
if(iParam0==1){
if(!IS_BIT_SET(Global_100681.f_20, 19)){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), true);
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
MISC::CLEAR_AREA(entityCoords, 100f, true, false, false, false);
MISC::SET_BIT(&(Global_100681.f_20), 19);
}}elseif(IS_BIT_SET(Global_100681.f_20, 19)){
func_303();
MISC::CLEAR_BIT(&(Global_100681.f_20), 19);
}
return;
}


void func_303() // Position - 0x25CD5{
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
PED::SET_PED_GRAVITY(PLAYER::PLAYER_PED_ID(), true);
}
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), true);
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), false, false, false, false, false, false, false, false);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
}
return;
}


void func_304() // Position - 0x25D59{
func_13(-128912482);
func_13(-131238069);
func_13(-330732224);
if(func_272(28) && func_272(29)) func_251(36, 1);
return;
}


void func_305() // Position - 0x25D9A{
func_13(2095586439);
func_13(1608868018);
func_13(1134611425);
func_13(187813079);
func_13(-39544602);
func_13(-997367701);
func_306("AM_H_GAUNT_R" /*Gauntlets are required before attempting the heist. Check your email for locations.*/, 1);
func_251(29, 1);
if(func_272(28)) func_251(36, 1);
return;
}


void func_306(char* sParam0, int iParam1) // Position - 0x25DFE{
int i;
int j;
if(Global_112288 && iParam1)if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &Global_113648.f_20412[i /*16*/])){
for (j=i;
j <=Global_113648.f_20412.f_145 - 2;
j=j + 1){
func_309(j, j + 1);
}
func_308(Global_113648.f_20412.f_145 - 1);
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 - 1;
func_307();
return;
}}
return;
}


void func_307() // Position - 0x25EAB{
int i;
for (i=0;
i < 3;
i=i + 1){
Global_113648.f_20412.f_146[i]=0;
}
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 0))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[0]) Global_113648.f_20412.f_146[0]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 1))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[1]) Global_113648.f_20412.f_146[1]=Global_113648.f_20412[i /*16*/].f_12;
if(IS_BIT_SET(Global_113648.f_20412[i /*16*/].f_11, 2))if(Global_113648.f_20412[i /*16*/].f_12 > Global_113648.f_20412.f_146[2]) Global_113648.f_20412.f_146[2]=Global_113648.f_20412[i /*16*/].f_12;
}
return;
}


void func_308(int iParam0) // Position - 0x25FC2{
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[iParam0 /*16*/], "", 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[iParam0 /*16*/].f_4), "", 16);
Global_113648.f_20412[iParam0 /*16*/].f_8=0;
Global_113648.f_20412[iParam0 /*16*/].f_9=0;
Global_113648.f_20412[iParam0 /*16*/].f_11=0;
Global_113648.f_20412[iParam0 /*16*/].f_10=-1;
Global_113648.f_20412[iParam0 /*16*/].f_12=0;
Global_113648.f_20412[iParam0 /*16*/].f_13=0;
Global_113648.f_20412[iParam0 /*16*/].f_14=0;
Global_113648.f_20412[iParam0 /*16*/].f_15=0;
return;
}


void func_309(int iParam0, int iParam1) // Position - 0x2605C{
Global_113648.f_20412[iParam0 /*16*/]={
Global_113648.f_20412[iParam1 /*16*/] 
};
Global_113648.f_20412[iParam0 /*16*/].f_4={
Global_113648.f_20412[iParam1 /*16*/].f_4 
};
Global_113648.f_20412[iParam0 /*16*/].f_8=Global_113648.f_20412[iParam1 /*16*/].f_8;
Global_113648.f_20412[iParam0 /*16*/].f_10=Global_113648.f_20412[iParam1 /*16*/].f_10;
Global_113648.f_20412[iParam0 /*16*/].f_9=Global_113648.f_20412[iParam1 /*16*/].f_9;
Global_113648.f_20412[iParam0 /*16*/].f_11=Global_113648.f_20412[iParam1 /*16*/].f_11;
Global_113648.f_20412[iParam0 /*16*/].f_12=Global_113648.f_20412[iParam1 /*16*/].f_12;
Global_113648.f_20412[iParam0 /*16*/].f_13=Global_113648.f_20412[iParam1 /*16*/].f_13;
Global_113648.f_20412[iParam0 /*16*/].f_14=Global_113648.f_20412[iParam1 /*16*/].f_14;
Global_113648.f_20412[iParam0 /*16*/].f_15=Global_113648.f_20412[iParam1 /*16*/].f_15;
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0x2616C{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_311() // Position - 0x2617F{
func_13(-1631047976);
func_13(962970051);
func_13(-1323797481);
func_306("AM_H_GAUNT_R" /*Gauntlets are required before attempting the heist. Check your email for locations.*/, 1);
return;
}


void func_312() // Position - 0x261AE{
func_13(-1980743701);
func_13(1567521709);
func_13(-1687842043);
func_306("AM_H_GAUNT_R" /*Gauntlets are required before attempting the heist. Check your email for locations.*/, 1);
return;
}


void func_313() // Position - 0x261DD{
func_13(-553769964);
func_13(-1434443191);
func_13(-2032593637);
func_13(-458789713);
func_13(321648831);
func_13(312697495);
func_251(28, 1);
if(func_272(29)) func_251(36, 1);
return;
}


void func_314() // Position - 0x26238{
if(func_257(79)){
if(func_257(83)){
func_315(-128912482, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1028);
func_315(-131238069, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1028);
func_315(-330732224, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1028);
}else{
func_315(-128912482, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-131238069, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-330732224, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
}}elseif(func_257(83)){
func_315(-128912482, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-131238069, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-330732224, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
}else{
func_315(-128912482, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-131238069, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 113, 1024);
func_315(-330732224, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 113, 1024);
}
return;
}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12) // Position - 0x263FC{
int num;
int address;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(iParam8 < 0) return 0;
if(iParam9 < 0) return 0;
if(iParam10==76) return 0;
if(iParam11==235) return 0;
if(iParam6==iParam5) return 0;
if(iParam5 !=144 && iParam5 !=0 && iParam5 !=1 && iParam5 !=2) return 0;
if(Global_113648.f_7690.f_136 < 9){
num=iParam0;
num.f_10=iParam1;
num.f_11=iParam2;
num.f_9=iParam3;
if(Global_113648.f_7690.f_911==num) Global_113648.f_7690.f_911=-1;
num.f_3=func_10(iParam4);
num.f_5=iParam9;
num.f_4=MISC::GET_GAME_TIMER() + iParam8;
num.f_1=iParam12;
address=0;
MISC::SET_BIT(&address, iParam5);
num.f_2=address;
num.f_6=iParam6;
num.f_14=iParam7;
num.f_7=iParam10;
num.f_8=iParam11;
MISC::SET_BIT(&(num.f_1), 0);
MISC::SET_BIT(&(num.f_1), 13);
MISC::CLEAR_BIT(&(num.f_1), 1);
if(iParam4==0) MISC::SET_BIT(&(num.f_1), 10);
Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/]={
num 
};
Global_113648.f_7690.f_136=Global_113648.f_7690.f_136 + 1;
func_16(iParam5);
return 1;
}
return 0;
}


void func_316() // Position - 0x26559{
if(func_257(79)){
if(Global_113648.f_9087.f_99.f_58[34]){
func_315(187813079, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(-39544602, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(-997367701, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
}else{
func_315(187813079, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}}elseif(Global_113648.f_9087.f_99.f_58[34]){
func_315(187813079, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}else{
func_315(187813079, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}
return;
}


void func_317() // Position - 0x2672F{
int num;
num=0;
if(func_257(80)) num=num + 1;
if(func_257(81)) num=num + 1;
if(func_257(82)) num=num + 1;
if(num==1){
func_318(-1980743701, 0, 0, 12, 3, 6000, 6000, -1, 110, 0, 1024);
func_318(1567521709, 0, 1, 12, 3, 6000, 6000, -1, 110, 0, 1024);
func_318(-1687842043, 0, 2, 12, 3, 6000, 6000, -1, 110, 0, 1024);
}elseif(num==2){
func_318(-1631047976, 0, 0, 12, 3, 6000, 6000, -1, 111, 0, 1024);
func_318(962970051, 0, 1, 12, 3, 6000, 6000, -1, 111, 0, 1024);
func_318(-1323797481, 0, 2, 12, 3, 6000, 6000, -1, 111, 0, 1024);
}elseif(num==3){
if(func_257(78)){
func_315(2095586439, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(1608868018, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(1134611425, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
}else{
func_315(2095586439, 1679209251, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(1608868018, 1679209251, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(1134611425, 1679209251, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}
func_13(1694883968);
}
return;
}

int func_318(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10) // Position - 0x26909{
int num;
int address;
if(_IS_MISSION_REPEAT_ACTIVE(false)) return 0;
if(iParam5 < 0) return 0;
if(iParam6 < 0) return 0;
if(iParam7==76) return 0;
if(iParam8==235) return 0;
if(iParam3==iParam2) return 0;
if(iParam2 !=144 && iParam2 !=0 && iParam2 !=1 && iParam2 !=2) return 0;
if(Global_113648.f_7690.f_136 < 9){
num=iParam0;
if(Global_113648.f_7690.f_911==num) Global_113648.f_7690.f_911=-1;
num.f_3=func_10(iParam1);
num.f_5=iParam6;
num.f_4=MISC::GET_GAME_TIMER() + iParam5;
num.f_1=iParam10;
address=0;
MISC::SET_BIT(&address, iParam2);
num.f_2=address;
num.f_6=iParam3;
num.f_14=iParam4;
num.f_10=-1;
num.f_11=-1;
num.f_7=iParam7;
num.f_8=iParam8;
num.f_9=iParam9;
MISC::SET_BIT(&(num.f_1), 0);
MISC::CLEAR_BIT(&(num.f_1), 1);
if(iParam1==0) MISC::SET_BIT(&(num.f_1), 10);
Global_113648.f_7690[Global_113648.f_7690.f_136 /*15*/]={
num 
};
Global_113648.f_7690.f_136=Global_113648.f_7690.f_136 + 1;
func_16(iParam2);
return 1;
}
return 0;
}


void func_319() // Position - 0x26A5A{
if(func_257(83)){
if(Global_113648.f_9087.f_99.f_58[34]){
func_315(-458789713, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(321648831, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(312697495, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
}else{
func_315(-458789713, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}}elseif(Global_113648.f_9087.f_99.f_58[34]){
func_315(-458789713, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}else{
func_315(-458789713, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}
return;
}


void func_320() // Position - 0x26C30{
if(func_257(80) && func_257(81) && func_257(82)){
func_315(-553769964, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(-1434443191, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(-2032593637, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
}else{
func_315(-553769964, -268883259, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(-1434443191, -268883259, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(-2032593637, -268883259, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}
return;
}


void func_321() // Position - 0x26D26{
func_251(30, 1);
Global_97598=1;
return;
}


void func_322() // Position - 0x26D3A{
int num;
int num2;
num=func_325(4, 4);
if(num !=0 && num !=15 && func_324(num)==2){
num2=60000;
switch (func_323(num)){
case 2:
func_2(692693384, 1, 7, 12, num2, 10000, -1, 103, -1, 4);
break;
case 1:
func_2(1209844154, 1, 7, 12, num2, 10000, -1, 103, -1, 4);
break;
case 0:
func_2(-1144971313, 1, 7, 12, num2, 10000, -1, 103, -1, 4);
break;
}}else{
!_IS_MISSION_REPEAT_ACTIVE(false);
}
return;
}

int func_323(int iParam0) // Position - 0x26DE8{
return Global_113648.f_1.f_73[iParam0 /*3*/];
}

int func_324(int iParam0) // Position - 0x26DFC{
return Global_96556[iParam0 /*5*/];
}

int func_325(int iParam0, int iParam1) // Position - 0x26E0C{
int num;
num=func_326(func_327(iParam0));
if(num < 0) return 15;
if(num >=10) return 15;
return Global_113648.f_1.f_12[num /*6*/][iParam1];
}

int func_326(int iParam0) // Position - 0x26E4D{
if(iParam0==13 || iParam0==-1) return 0;
return Global_113648.f_9087.f_99.f_205[iParam0];
}

int func_327(int iParam0) // Position - 0x26E7A{
switch (iParam0){
case 0:
return 7;
case 1:
return 8;
case 2:
return 9;
case 3:
return 10;
case 4:
return 11;
}
return -1;
}


void func_328() // Position - 0x26ECF{
switch (func_326(7)){
case 1:
break;
case 2:
func_88(_GET_CHARACTER_MODEL(CHAR_MICHAEL), 12, 31, true, 1);
func_88(_GET_CHARACTER_MODEL(CHAR_FRANKLIN), 12, 22, true, 1);
break;
}
return;
}


void func_329() // Position - 0x26F11{
if(HUD::DOES_BLIP_EXIST(Global_77348.f_208[14])){
HUD::SET_BLIP_FLASHES(Global_77348.f_208[14], true);
HUD::SET_BLIP_FLASH_TIMER(Global_77348.f_208[14], 10000);
}
func_410("AM_H_LHNGR" /*Trevor has taken ownership of The Lost's Sandy Shores Airfield. This location contains storage for planes at ~HUD_COLOUR_TREVOR~~BLIP_HANGAR~~s~ and helicopters at ~HUD_COLOUR_TREVOR~~BLIP_HELIPAD~*/, 2, 1000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_330(int iParam0, int iParam1, BOOL bParam2) // Position - 0x26F5E{
if(iParam0==-1) return;
if(bParam2) MISC::SET_BIT(&Global_113648.f_32751[iParam0], iParam1);
else MISC::CLEAR_BIT(&Global_113648.f_32751[iParam0], iParam1);
return;
}


void func_331() // Position - 0x26F99{
func_332(2, true);
return;
}


void func_332(int iParam0, BOOL bParam1) // Position - 0x26FA7{
int iconType;
char* txdName;
MISC::SET_BIT(&(Global_113648.f_1.f_116), iParam0);
switch (iParam0){
case 10:
MISC::SET_BIT(&(Global_113648.f_1.f_119), 14);
break;
case 13:
MISC::SET_BIT(&(Global_113648.f_1.f_119), 16);
break;
case 12:
MISC::SET_BIT(&(Global_113648.f_1.f_119), 15);
break;
case 11:
MISC::SET_BIT(&(Global_113648.f_1.f_119), 17);
break;
}
if(!bParam1){
iconType=0;
switch (func_324(iParam0)){
case 1:
iconType=6;
break;
case 3:
iconType=4;
break;
case 2:
iconType=5;
break;
}
txdName=func_334(iParam0);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U" /*Heist crew member ~a~ unlocked.*/);
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_334(iParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(txdName, txdName, false, iconType, "", 0);
if(!func_173(45)) func_410("AM_H_CREWU" /*Throughout the game you may meet contacts who can help on heists. This will give you extra crew members to pick from.*/, 2, 0, 20000, 10000, func_333(), 0, 131, 0);
}
return;
}

int func_333() // Position - 0x270A4{
func_67();
switch (Global_113648.f_2365.f_539.f_4321){
case CHAR_MICHAEL:
return 1;
case CHAR_FRANKLIN:
return 2;
case CHAR_TREVOR:
return 4;
}
return 0;
}


char* func_334(int iParam0) // Position - 0x270EA{
return func_335(iParam0);
}


char* func_335(int iParam0) // Position - 0x270F8{
switch (iParam0){
case 1:
return "HC_N_GUS" /*Gustavo Mota*/;
case 2:
return "HC_N_KAR" /*Karl Abolaji*/;
case 10:
return "HC_N_PAC" /*Packie McReary*/;
case 11:
return "HC_N_CHE" /*Chef*/;
case 3:
return "HC_N_HUG" /*Hugh Welsh*/;
case 4:
return "HC_N_NOR" /*Norm Richards*/;
case 5:
return "HC_N_DAR" /*Daryl Johns*/;
case 6:
return "HC_N_PAI" /*Paige Harris*/;
case 7:
return "HC_N_CHR" /*Christian Feltz*/;
case 12:
return "HC_N_RIC" /*Rickie Lukens*/;
case 8:
return "HC_N_EDD" /*Eddie Toh*/;
case 13:
return "HC_N_TAL" /*Taliana Martinez*/;
case 9:
return "HC_N_KRM" /*Karim Denz*/;
}
return "ERROR!";
}


void func_336() // Position - 0x271DB{
func_332(3, true);
return;
}


void func_337() // Position - 0x271E9{
func_332(5, true);
return;
}


void func_338() // Position - 0x271F7{
func_412(57, true);
func_339(57);
func_251(109, 1);
return;
}


void func_339(int iParam0) // Position - 0x27213{
if(iParam0==-1) return;
Global_77348[iParam0]=0;
Global_77348.f_69[iParam0]=0;
return;
}


void func_340() // Position - 0x27238{
func_288(158);
func_288(159);
func_242(158, true, false);
func_242(159, true, false);
func_342(158, 5);
func_342(159, 5);
func_341(158);
func_341(159);
return;
}


void func_341(int iParam0) // Position - 0x27276{
func_287(iParam0, false, false);
func_286(iParam0, true);
func_285(iParam0, true);
return;
}


void func_342(int iParam0, int iParam1) // Position - 0x27294{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(Global_32543[num /*23*/].f_16==iParam1) return;
Global_32543[num /*23*/].f_16=iParam1;
switch (iParam1){
case 1:
Global_32543[num /*23*/].f_12[0]=40;
break;
case 3:
Global_32543[num /*23*/].f_12[0]=60;
break;
}
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
return;
}


void func_343() // Position - 0x27331{
func_288(156);
func_288(157);
func_242(156, true, false);
func_242(157, true, false);
func_342(156, 5);
func_342(157, 5);
return;
}


void func_344() // Position - 0x27363{
func_288(161);
func_288(160);
func_242(161, true, false);
func_242(160, true, false);
return;
}


void func_345() // Position - 0x27387{
int outValue;
var outValue2;
if(!_IS_MISSION_REPEAT_ACTIVE(false)){
STATS::STAT_GET_FLOAT(joaat("SP0_DIST_RUNNING"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2355[0]=outValue2;
STATS::STAT_GET_INT(joaat("SP0_UNARMED_HITS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2359[0]=outValue;
STATS::STAT_GET_INT(joaat("SP0_NUMBER_NEAR_MISS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2363[0]=outValue;
STATS::STAT_GET_FLOAT(joaat("SP0_DIST_WALK_ST"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2367[0]=outValue2;
STATS::STAT_GET_INT(joaat("SP0_KILLS_STEALTH"), &outValue, -1);
Global_113648.f_2365.f_539.f_2371[0]=outValue;
STATS::STAT_GET_INT(joaat("SP0_HITS_MISSION"), &outValue, -1);
Global_113648.f_2365.f_539.f_2375[0]=outValue;
STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &outValue, -1);
Global_113648.f_2365.f_539.f_2379[0]=outValue - Global_113648.f_2365.f_539.f_2375[0];
STATS::STAT_GET_FLOAT(joaat("SP1_DIST_RUNNING"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2355[1]=outValue2;
STATS::STAT_GET_INT(joaat("SP1_UNARMED_HITS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2359[1]=outValue;
STATS::STAT_GET_INT(joaat("SP1_NUMBER_NEAR_MISS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2363[1]=outValue;
STATS::STAT_GET_FLOAT(joaat("SP1_DIST_WALK_ST"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2367[1]=outValue2;
STATS::STAT_GET_INT(joaat("SP1_KILLS_STEALTH"), &outValue, -1);
Global_113648.f_2365.f_539.f_2371[1]=outValue;
STATS::STAT_GET_INT(joaat("SP1_HITS_MISSION"), &outValue, -1);
Global_113648.f_2365.f_539.f_2375[1]=outValue;
STATS::STAT_GET_INT(joaat("SP0_HITS_PEDS_VEHICLES"), &outValue, -1);
Global_113648.f_2365.f_539.f_2379[1]=outValue - Global_113648.f_2365.f_539.f_2375[1];
STATS::STAT_GET_FLOAT(joaat("SP2_DIST_RUNNING"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2355[2]=outValue2;
STATS::STAT_GET_INT(joaat("SP2_UNARMED_HITS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2359[2]=outValue;
STATS::STAT_GET_INT(joaat("SP2_NUMBER_NEAR_MISS"), &outValue, -1);
Global_113648.f_2365.f_539.f_2363[2]=outValue;
STATS::STAT_GET_FLOAT(joaat("SP2_DIST_WALK_ST"), &outValue2, -1);
Global_113648.f_2365.f_539.f_2367[2]=outValue2;
STATS::STAT_GET_INT(joaat("SP2_KILLS_STEALTH"), &outValue, -1);
Global_113648.f_2365.f_539.f_2371[2]=outValue;
STATS::STAT_GET_INT(joaat("SP2_HITS_MISSION"), &outValue, -1);
Global_113648.f_2365.f_539.f_2375[2]=outValue;
STATS::STAT_GET_INT(joaat("SP2_HITS_PEDS_VEHICLES"), &outValue, -1);
Global_113648.f_2365.f_539.f_2379[2]=outValue - Global_113648.f_2365.f_539.f_2375[2];
}
return;
}


void func_346(BOOL bParam0) // Position - 0x27656{
func_63();
if(!Global_113648.f_20566.f_232 && func_83(53)){
Global_60536[0]=4000;
Global_113648.f_20566.f_233[0 /*69*/]=0;
Global_113648.f_20566.f_233[0 /*69*/].f_1=0;
Global_60536[1]=4000;
Global_113648.f_20566.f_233[1 /*69*/]=0;
Global_113648.f_20566.f_233[1 /*69*/].f_1=0;
Global_60536[2]=4000;
Global_113648.f_20566.f_233[2 /*69*/]=0;
Global_113648.f_20566.f_233[2 /*69*/].f_1=0;
func_33(2);
func_33(0);
func_33(1);
func_31(2, 1, 36, 22300, false);
func_31(2, 0, 13, 678, false);
func_31(2, 1, 36, 45200, false);
func_31(2, 0, 6, 200, false);
func_31(2, 0, 4, 12, false);
func_31(2, 0, 4, 14, false);
func_31(2, 0, 8, 280, false);
func_31(2, 1, 36, 30200, false);
func_31(2, 0, 13, 185, false);
func_31(1, 0, 5, 45, false);
func_31(1, 0, 10, 400, false);
func_31(1, 0, 11, 19, false);
func_31(1, 0, 7, 149, false);
func_31(1, 0, 4, 19, false);
func_31(0, 0, 4, 19, false);
func_31(0, 0, 7, 2313, false);
func_31(0, 0, 5, 20, false);
func_31(0, 0, 9, 5633, false);
func_31(0, 0, 12, 700, false);
STATS::STAT_SET_INT(joaat("SP0_MONEY_TOTAL_SPENT"), 0, true);
STATS::STAT_SET_INT(joaat("SP1_MONEY_TOTAL_SPENT"), 0, true);
STATS::STAT_SET_INT(joaat("SP2_MONEY_TOTAL_SPENT"), 0, true);
Global_60536[2]=10666;
Global_60536[0]=3085;
Global_60536[1]=1178;
Global_113648.f_20566.f_232=1;
}
if(bParam0){
Global_60536[2]=108654;
Global_60536[0]=7860;
Global_60536[1]=78;
}
func_33(2);
func_33(0);
func_33(1);
return;
}


void func_347() // Position - 0x27853{
func_13(-2116452823);
func_13(1880611494);
func_251(41, 1);
return;
}


void func_348() // Position - 0x27876{
func_289(7, true, false);
func_289(8, true, false);
func_289(9, true, false);
func_289(10, true, false);
func_289(11, true, false);
func_289(12, true, false);
func_289(13, true, false);
func_289(14, true, false);
func_289(15, true, false);
func_289(16, true, false);
func_289(17, true, false);
func_289(18, true, false);
func_289(19, true, false);
func_289(20, true, false);
func_284(26);
return;
}


void func_349() // Position - 0x278F3{
func_233(2, 36, 62680, false, false);
return;
}


void func_350() // Position - 0x27908{
func_351(CHAR_FRANKLIN, true);
func_251(11, 1);
return;
}

int func_351(eCharacter echParam0, BOOL bParam1) // Position - 0x2791E{
if(!func_353() && func_17(echParam0)){
if(!func_352(echParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_98159.f_45=echParam0;
Global_98159.f_46=0;
Global_98159.f_44=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(bParam1) PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
}
return 1;
}}
return 0;
}
BOOL func_352(eCharacter echParam0) // Position - 0x27991{
func_67();
return echParam0==Global_113648.f_2365.f_539.f_4321;
}
BOOL func_353() // Position - 0x279AD{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}


void func_354() // Position - 0x279C9{
if(func_355(0) >=22000) func_30(0, 35, 22000);
else func_30(0, 35, func_355(0));
return;
}

int func_355(int iParam0) // Position - 0x279F7{
return Global_60536[iParam0];
}


void func_356() // Position - 0x27A06{
if(func_355(0) >=9500) func_30(0, 34, 9500);
else func_30(0, 34, func_355(0));
return;
}


void func_357() // Position - 0x27A34{
int num;
if(func_355(0) >=7500){
func_30(0, 33, 5000);
}else{
num=SYSTEM::ROUND((float)func_355(0) * 0.8f);
if(num > 5000) num=5000;
func_30(0, 33, num);
}
return;
}


void func_358() // Position - 0x27A7E{
int num;
if(func_355(0) >=5500){
func_30(0, 34, 3000);
}else{
num=SYSTEM::ROUND((float)func_355(0) * 0.8f);
if(num > 3000) num=3000;
func_30(0, 34, num);
}
return;
}


void func_359() // Position - 0x27AC8{
int num;
int num2;
int num3;
num=Global_113648.f_1.f_126[4 /*23*/].f_2[0];
if(num==0) num=12000000;
num2=Global_113648.f_1.f_126[4 /*23*/].f_2[1];
if(num2==0) num2=12000000;
num3=Global_113648.f_1.f_126[4 /*23*/].f_2[2];
if(num3==0) num3=12000000;
if(func_372(7)) func_364(7, false);
elseif(!func_363(7)) func_360(7, false);
if(func_372(8)) func_364(8, false);
elseif(!func_363(8)) func_360(8, false);
if(func_272(136)){
func_31(0, 1, 32, SYSTEM::ROUND((float)num + ((float)num3 / 2f)), false);
func_31(1, 1, 32, SYSTEM::ROUND((float)num2 + ((float)num3 / 2f)), false);
}elseif(func_272(135)){
func_31(1, 1, 32, num2, false);
func_31(2, 1, 32, num3, false);
}else{
func_31(0, 1, 32, num, false);
func_31(1, 1, 32, num2, false);
func_31(2, 1, 32, num3, false);
}
return;
}


void func_360(int iParam0, BOOL bParam1) // Position - 0x27BF0{
func_361(iParam0, bParam1);
return;
}


void func_361(int iParam0, BOOL bParam1) // Position - 0x27C00{
Global_44456=1;
if(!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1){
Global_47790[iParam0 /*46*/]=true;
func_364(iParam0, bParam1);
}else{
func_362(iParam0);
func_361(iParam0, bParam1);
}
return;
}


void func_362(int iParam0) // Position - 0x27C47{
Global_47790[iParam0 /*46*/]=false;
Global_47790[iParam0 /*46*/].f_31=0;
Global_47790[iParam0 /*46*/].f_42=0;
Global_47790[iParam0 /*46*/].f_45=0;
Global_47790[iParam0 /*46*/].f_43=0;
Global_47790[iParam0 /*46*/].f_1=0;
return;
}
BOOL func_363(int iParam0) // Position - 0x27C89{
return Global_47790[iParam0 /*46*/].f_1;
}


void func_364(int iParam0, BOOL bParam1) // Position - 0x27C9A{
int num;
int num2;
int num3;
int i;
if(!Global_47790[iParam0 /*46*/] && !Global_47790[iParam0 /*46*/].f_1) return;
if(Global_47790[iParam0 /*46*/].f_31==Global_47790[iParam0 /*46*/].f_30){
num=Global_47790[iParam0 /*46*/].f_42 - 1;
if(num < 0) return;
if(Global_44465[Global_47790[iParam0 /*46*/].f_32[num] /*12*/].f_4==0) Global_47790[iParam0 /*46*/].f_1=1;
return;
}
if(Global_47790[iParam0 /*46*/].f_1) return;
num2=Global_47790[iParam0 /*46*/].f_8[Global_47790[iParam0 /*46*/].f_31];
Global_47790[iParam0 /*46*/].f_31=Global_47790[iParam0 /*46*/].f_31 + 1;
func_371(iParam0, num2);
Global_47790[iParam0 /*46*/].f_45=Global_44465[num2 /*12*/].f_10;
Global_47790[iParam0 /*46*/].f_43=Global_44465[num2 /*12*/].f_11;
num3=Global_47790[iParam0 /*46*/].f_2;
func_365(Global_44465[num2 /*12*/].f_3, iParam0, false, false, bParam1);
for (i=0;
i < num3;
i=i + 1){
if(Global_47790[iParam0 /*46*/].f_3[i] !=Global_44465[num2 /*12*/].f_2 && Global_47790[iParam0 /*46*/].f_3[i] !=Global_44465[num2 /*12*/].f_3) func_365(Global_47790[iParam0 /*46*/].f_3[i], iParam0, false, false, bParam1);
}
if(Global_47790[iParam0 /*46*/].f_31==Global_47790[iParam0 /*46*/].f_30){
if(Global_44465[Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42 - 1] /*12*/].f_4==0){
Global_47790[iParam0 /*46*/].f_1=1;
return;
}}
return;
}


void func_365(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4) // Position - 0x27E36{
int num;
int num2;
int num3;
var unk;
int num4;
int num5;
BOOL i;
BOOL j;
int num6;
int k;
int num7;
int num8;
if(!iParam0 < 3) return;
num=-1;
TEXT_LABEL_ASSIGN_STRING(&unk, "UNSET", 64);
if(!bParam2){
num4=Global_47790[iParam1 /*46*/].f_42 - 1;
if(num4 < 0) return;
num5=Global_47790[iParam1 /*46*/].f_32[num4];
num3=num5;
unk={
func_370(Global_44465[num5 /*12*/].f_1) 
};
if(Global_44465[num5 /*12*/].f_2==iParam0 && !Global_44465[num5 /*12*/].f_3==iParam0) return;
num2=Global_44465[num5 /*12*/].f_2;
num=Global_53403[iParam0 /*120*/];
for (i=false;
num >=16;
i=true){
num=num - 16;
}
if(i){
if(!Global_53403[iParam0 /*120*/].f_69[num]){
switch (iParam0){
case 0:
Global_44457=Global_44457 - 1;
if(Global_44457 < 0) Global_44457=0;
break;
case 1:
Global_44458=Global_44458 - 1;
if(Global_44458 < 0) Global_44458=0;
break;
case 2:
Global_44459=Global_44459 - 1;
if(Global_44459 < 0) Global_44459=0;
break;
}}}
Global_53403[iParam0 /*120*/].f_18[num]=iParam1;
Global_53403[iParam0 /*120*/].f_1[num]=num4;
Global_53403[iParam0 /*120*/].f_35[num]=0;
Global_53403[iParam0 /*120*/].f_86[num]=0;
Global_53403[iParam0 /*120*/].f_69[num]=false;
Global_53403[iParam0 /*120*/]=Global_53403[iParam0 /*120*/] + 1;
}else{
num=Global_53403[iParam0 /*120*/];
for (j=false;
num >=16;
j=true){
num=num - 16;
}
if(j){
if(!Global_53403[iParam0 /*120*/].f_69[num]){
switch (iParam0){
case 0:
Global_44457=Global_44457 - 1;
if(Global_44457 < 0) Global_44457=0;
break;
case 1:
Global_44458=Global_44458 - 1;
if(Global_44458 < 0) Global_44458=0;
break;
case 2:
Global_44459=Global_44459 - 1;
if(Global_44459 < 0) Global_44459=0;
break;
}}}
num6=-1;
k=0;
for (k=0;
k < 7;
k=k + 1){
if(Global_53765[k /*203*/].f_1==iParam1 && Global_53765[k /*203*/].f_9 > 0) num6=k;
}
if(num6==-1) return;
Global_53403[iParam0 /*120*/].f_18[num]=Global_53765[num6 /*203*/].f_1;
Global_53403[iParam0 /*120*/].f_1[num]=Global_53765[num6 /*203*/].f_9 - 1;
Global_53403[iParam0 /*120*/].f_35[num]=0;
Global_53403[iParam0 /*120*/].f_86[num]=1;
Global_53403[iParam0 /*120*/].f_69[num]=false;
Global_53403[iParam0 /*120*/]=Global_53403[iParam0 /*120*/] + 1;
num7=Global_53403[iParam0 /*120*/].f_1[num];
num8=Global_53765[num6 /*203*/].f_10[num7 /*48*/];
num3=num8;
num2=Global_44465[num8 /*12*/].f_2;
if(Global_53765[num6 /*203*/].f_10[Global_53765[num6 /*203*/].f_9 - 1 /*48*/].f_1) TEXT_LABEL_COPY(&unk,{
Global_53765[num6 /*203*/].f_10[Global_53765[num6 /*203*/].f_9 - 1 /*48*/].f_2 
}
, 16);
else unk={
func_370(Global_44465[num8 /*12*/].f_1) 
};
}
if(!bParam4){
if(!Global_53403[iParam0 /*120*/].f_69[num] && !bParam3){
switch (iParam0){
case 0:
func_366(0, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
case 1:
if(num3==249) func_366(CHAR_FRANKLIN, num2, num3, "PW_FEED_EM_1" /*You've been nominated to take part in Southern San Andreas' premier amateur photography competition in the wildlife sector. You'll join hundreds of other young, talented...*/, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
else func_366(CHAR_FRANKLIN, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
case 2:
func_366(CHAR_TREVOR, num2, num3, &unk, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
}}}
return;
}


void func_366(eCharacter echParam0, int iParam1, int iParam2, const char* sParam3, const char* sParam4, const char* sParam5, const char* sParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11, const char* sParam12, const char* sParam13) // Position - 0x2820C{
eCharacter character;
BOOL flag;
var txdName;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return;
character=_GET_CURRENT_PLAYER_CHARACTER();
flag=false;
TEXT_LABEL_ASSIGN_STRING(&txdName, func_369(iParam1, &flag), 64);
if(character==echParam0){
switch (iParam2){
case 72:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1" /*Dear Mr. De Santa, please find below your weekly income from owned properties:~n~*/);
break;
case 73:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3" /*Dear Mr. Clinton, please find below your weekly income from owned properties:~n~*/);
break;
case 74:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2" /*Dear Mr. Philips, please find below your weekly income from owned properties:~n~*/);
break;
default:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam12)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam13)) HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
break;
}
if(flag) func_367(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&txdName, &txdName, false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
else func_367(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iParam1)), 0));
switch (Global_20383){
case 0:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Michael", 24);
Global_44457=Global_44457 + 1;
if(Global_44457 > 16) Global_44457=16;
break;
case 2:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Trevor", 24);
Global_44459=Global_44459 + 1;
if(Global_44459 > 16) Global_44459=16;
break;
case 1:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Franklin", 24);
Global_44458=Global_44458 + 1;
if(Global_44458 > 16) Global_44458=16;
break;
default:
TEXT_LABEL_ASSIGN_STRING(&Global_20372, "Phone_SoundSet_Default", 24);
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20372, true);
}
return;
}


void func_367(int iParam0) // Position - 0x283F4{
Global_44460[Global_44464]=iParam0;
Global_22783=1;
Global_22782=iParam0;
Global_44464=Global_44464 + 1;
if(Global_44464==3) Global_44464=0;
return;
}
char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x28422{
switch (iParam0){
case 0:
return "EMSTR_0" /*Mike*/;
case 3:
return "EMSTR_3" /*Jimmy*/;
case 1:
return "EMSTR_6" /*Franklin*/;
case 2:
return "EMSTR_9" /*Trevor*/;
case 4:
return "EMSTR_12" /*Marnie*/;
case 5:
return "EMSTR_29" /*Epsilon Store*/;
case 6:
return "EMSTR_36" /*Maude*/;
case 7:
return "EMSTR_39" /*Lester*/;
case 8:
return "EMSTR_52" /*Maze Bank*/;
case 9:
return "EMSTR_55" /*Fleeca*/;
case 10:
return "EMSTR_58" /*Bank of Liberty*/;
case 11:
return "EMSTR_78" /*Legendary Motorsport Sales*/;
case 12:
return "EMSTR_81" /*Elitas Sales*/;
case 13:
return "EMSTR_84" /*Cache & Carry*/;
case 14:
return "EMSTR_87" /*Dock Tease*/;
case 15:
return "EMSTR_106" /*LSC*/;
case 16:
return "EMSTR_114" /*AMMU-NATION*/;
case 17:
return "EMSTR_142" /*Christian Feltz*/;
case 18:
return "EMSTR_145" /*Paige Harris*/;
case 19:
return "EMSTR_152" /*Los Santos Tourist Info*/;
case 20:
return "EMSTR_157" /*Rickie Luckens*/;
case 21:
return "EMSTR_163" /*Minotaur Property Management*/;
case 22:
return "EMSTR_182" /*Saeeda Kadam*/;
case 23:
return "EMSTR_187" /*Vanilla Unicorn*/;
case 24:
return "EMSTR_190" /*Dr Isiah Friedlander*/;
case 25:
return "EMSTR_206" /*TRACEYHEARTSTEALER*/;
case 26:
return "EMSTR_219" /*Dave Norton*/;
case 27:
return "EMSTR_226" /*Amanda De Santa*/;
case 28:
return "EMSTR_233" /*Donald Percival*/;
case 29:
return "EMSTR_242" /*Ron*/;
case 30:
return "EMSTR_249" /*Tanisha Marks*/;
case 31:
return "EMSTR_262" /*Denise*/;
case 32:
return "EMSTR_269" /*Lamar Davis*/;
case 33:
return "EMSTR_319" /*Brad*/;
case 34:
return "EMSTR_340" /*Patricia Madrazo*/;
case 35:
return "EMSTR_348" /*Eileen Haworth*/;
case 36:
return "EMSTR_182" /*Saeeda Kadam*/;
case 37:
return "EMSTR_357" /*Gray Nicholson*/;
case 38:
return "EMSTR_360" /*Nigel*/;
case 39:
return "EMSTR_369" /*Hookies*/;
case 40:
return "EMSTR_376" /*Towing Impound*/;
case 41:
return "EMSTR_379" /*Downtown Cab Co,*/;
case 42:
return "EMSTR_382" /*McKenzie Field Hangar*/;
case 43:
return "EMSTR_384" /*Sonar Collections Dock*/;
case 44:
return "EMSTR_387" /*Los Santos Customs*/;
case 45:
return "EMSTR_390" /*Cinema Doppler*/;
case 46:
return "EMSTR_393" /*Ten Cent Theater*/;
case 47:
return "EMSTR_396" /*Tivoli Cinema*/;
case 48:
return "EMSTR_399" /*Los Santos Golf Club*/;
case 49:
return "EMSTR_402" /*Car Scrap Yard*/;
case 50:
return "EMSTR_405" /*Smoke on the Water*/;
case 51:
return "EMSTR_408" /*Tequi-la-la*/;
case 52:
return "EMSTR_411" /*Pitchers*/;
case 53:
return "EMSTR_414" /*The Hen House*/;
case 54:
return "EMSTR_465" /*Pedal & Metal Sales*/;
case 55:
return "EMSTR_468" /*SSA Super Autos Sales*/;
case 56:
return "EMSTR_489" /*Hush Smush*/;
case 57:
return "EMSTR_492" /*foxymama21*/;
case 58:
return "EMSTR_495" /*Altarego12*/;
case 59:
return "EMSTR_498" /*BadKitty11*/;
case 60:
return "EMSTR_501" /*7yearbitch*/;
case 61:
return "EMSTR_504" /*Froggy69*/;
case 62:
return "EMSTR_507" /*Misscuddles*/;
case 63:
return "EMSTR_640" /*Offroad Events*/;
case 64:
return "EMSTR_643" /*Dock Tease*/;
case 65:
return "EMSTR_652" /*Brother Adrian*/;
default:
}
return "NULL";
}
const 

char* func_369(int iParam0, var uParam1) // Position - 0x2878D{
*uParam1=1;
switch (iParam0){
case 0:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[0 /*29*/].f_7));
case 1:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[1 /*29*/].f_7));
case 2:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[2 /*29*/].f_7));
case 7:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[12 /*29*/].f_7));
case 4:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[60 /*29*/].f_7));
case 6:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[62 /*29*/].f_7));
case 3:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[14 /*29*/].f_7));
case 16:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[97 /*29*/].f_7));
case 19:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[99 /*29*/].f_7));
case 15:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[96 /*29*/].f_7));
case 63:
return "CHAR_CARSITE2";
case 64:
return "CHAR_BOATSITE";
case 8:
return "CHAR_BANK_MAZE";
case 9:
return "CHAR_BANK_FLEECA";
case 10:
return "CHAR_BANK_BOL";
case 21:
return "CHAR_MINOTAUR";
case 25:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[15 /*29*/].f_7));
case 26:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[30 /*29*/].f_7));
case 27:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[17 /*29*/].f_7));
case 29:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[20 /*29*/].f_7));
case 30:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[43 /*29*/].f_7));
case 31:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[44 /*29*/].f_7));
case 32:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[19 /*29*/].f_7));
case 34:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[40 /*29*/].f_7));
case 36:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION("CELL_E_381" /*CHAR_SAEEDA*/);
case 38:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[64 /*29*/].f_7));
case 5:
return "CHAR_EPSILON";
case 13:
return "CHAR_MILSITE";
case 11:
return "CHAR_CARSITE";
case 14:
return "CHAR_BOATSITE";
case 12:
return "CHAR_PLANESITE";
case 24:
return "CHAR_DR_FRIEDLANDER";
case 55:
return "CHAR_CARSITE2";
case 54:
return "CHAR_BIKESITE";
case 39:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[122 /*29*/].f_7));
case 40:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[125 /*29*/].f_7));
case 41:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[113 /*29*/].f_7));
case 42:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[126 /*29*/].f_7));
case 43:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[127 /*29*/].f_7));
case 44:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[124 /*29*/].f_7));
case 45:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[114 /*29*/].f_7));
case 46:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[115 /*29*/].f_7));
case 47:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[116 /*29*/].f_7));
case 48:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[123 /*29*/].f_7));
case 49:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[117 /*29*/].f_7));
case 50:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[118 /*29*/].f_7));
case 51:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[119 /*29*/].f_7));
case 52:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[120 /*29*/].f_7));
case 53:
return HUD::GET_FILENAME_FOR_AUDIO_CONVERSATION(&(Global_2028[121 /*29*/].f_7));
default:
}
*uParam1=0;
return "ERROR!";
}
struct<16> func_370(int iParam0) // Position - 0x28B58{
var unk;
var unk17;
if(iParam0 > -1){
TEXT_LABEL_ASSIGN_STRING(&unk, "EMSTR_", 64);
TEXT_LABEL_APPEND_INT(&unk, iParam0, 64);
return unk;
}
TEXT_LABEL_ASSIGN_STRING(&unk17, "FAIL", 64);
return unk17;
}

int func_371(int iParam0, int iParam1) // Position - 0x28B89{
if(Global_47790[iParam0 /*46*/].f_42 >=9) return 0;
Global_47790[iParam0 /*46*/].f_32[Global_47790[iParam0 /*46*/].f_42]=iParam1;
Global_47790[iParam0 /*46*/].f_42=Global_47790[iParam0 /*46*/].f_42 + 1;
return 1;
}
BOOL func_372(int iParam0) // Position - 0x28BCE{
return Global_47790[iParam0 /*46*/];
}


void func_373() // Position - 0x28BDD{
func_2(801347631, 1, 7, 12, 1000, 1000, -1, 80, -1, 0);
return;
}


void func_374() // Position - 0x28BFE{
int num;
num=Global_113648.f_1.f_126[3 /*23*/].f_2[1];
if(num==0) num=200000;
func_31(1, 1, 96, num, false);
return;
}


void func_375() // Position - 0x28C30{
if(func_372(7)) func_364(7, false);
elseif(!func_363(7)) func_360(7, false);
func_6(78, 0);
return;
}


void func_376() // Position - 0x28C5F{
int num;
int num2;
int num3;
num=Global_113648.f_1.f_126[2 /*23*/].f_2[0];
if(num==0) num=325000;
num2=Global_113648.f_1.f_126[2 /*23*/].f_2[1];
if(num2==0) num2=325000;
num3=Global_113648.f_1.f_126[2 /*23*/].f_2[2];
if(num3==0) num3=325000;
func_31(0, 1, 96, num, false);
func_31(1, 1, 96, num2, false);
func_31(2, 1, 96, num3, false);
return;
}


void func_377() // Position - 0x28CE5{
int num;
int num2;
num=Global_113648.f_1.f_126[0 /*23*/].f_2[0];
if(num==0) num=83100;
num2=Global_113648.f_1.f_126[0 /*23*/].f_2[1];
if(num2==0) num2=28000;
func_31(0, 1, 32, num, false);
func_31(1, 1, 32, num2, false);
func_6(74, 60000);
func_13(1595158098);
func_13(-420969532);
func_6(128, 0);
return;
}


void func_378() // Position - 0x28D65{
if(func_372(7)) func_364(7, false);
elseif(!func_363(7)) func_360(7, false);
if(func_372(6)) func_364(6, false);
elseif(!func_363(6)) func_360(6, false);
return;
}


void func_379() // Position - 0x28DAD{
func_332(11, false);
return;
}


void func_380() // Position - 0x28DBC{
if(!func_381(12)){
func_188(CHAR_RICKIE, CHAR_MICHAEL, false);
func_332(12, false);
}
return;
}
BOOL func_381(int iParam0) // Position - 0x28DDD{
return IS_BIT_SET(Global_113648.f_1.f_116, iParam0);
}


void func_382() // Position - 0x28DF0{
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), true);
func_251(68, 1);
return;
}


void func_383() // Position - 0x28E13{
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
func_251(67, 1);
return;
}


void func_384() // Position - 0x28E36{
func_188(CHAR_PATRICIA, CHAR_TREVOR, true);
return;
}


void func_385() // Position - 0x28E46{
func_188(CHAR_MARTIN, CHAR_TREVOR, true);
return;
}


void func_386() // Position - 0x28E56{
func_188(CHAR_MARTIN, CHAR_MICHAEL, true);
return;
}


void func_387() // Position - 0x28E66{
func_388(19, 2, true);
func_188(19, 2, true);
return;
}


void func_388(int iParam0, int iParam1, BOOL bParam2) // Position - 0x28E7E{
int num;
if(func_403(iParam1, iParam0, &num)){
func_401(iParam1, iParam0, 1);
func_400(iParam1, iParam0, 50);
if(bParam2) func_390(iParam0, iParam1, 5f * 60f);
func_389(num, 0);
MISC::SET_BIT(&(Global_113648.f_18105.f_175[num /*19*/].f_18), 1);
Global_96416=Global_96416 + 1;
}
return;
}


void func_389(int iParam0, int iParam1) // Position - 0x28EE2{
if(iParam0 < 9){
Global_96537[iParam0 /*2*/]=iParam1;
if(iParam1==0) Global_96537[iParam0 /*2*/].f_1=0;
}
return;
}


void func_390(int iParam0, int iParam1, float fParam2) // Position - 0x28F0F{
int num;
int num2;
int num3;
float num4;
num=func_397(iParam0);
num2=func_397(iParam1);
num3=func_396(num, num2);
if(num3 < 9){
num4=0f;
if(func_395(&(Global_113648.f_18105.f_175[num3 /*19*/].f_5))) num4=func_393(&(Global_113648.f_18105.f_175[num3 /*19*/].f_5));
func_391(&(Global_113648.f_18105.f_175[num3 /*19*/].f_5), num4 + fParam2);
}
return;
}


void func_391(int* piParam0, float fParam1) // Position - 0x28F81{
piParam0->f_1=func_392(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


float func_392(BOOL bParam0) // Position - 0x28FAC{
float num;
float num2;
int networkTime;
float num3;
float num4;
if(bParam0){
num=SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
num2=num / 1000f;
return num2;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
networkTime=NETWORK::GET_NETWORK_TIME();
num3=SYSTEM::TO_FLOAT(networkTime);
num4=num3 / 1000f;
return num4;
}
return SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f;
}


float func_393(int* piParam0) // Position - 0x29004{
if(func_395(piParam0))if(func_394(piParam0)) return piParam0->f_2;
else return func_392(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
return piParam0->f_1;
}
BOOL func_394(int* piParam0) // Position - 0x29040{
return IS_BIT_SET(*piParam0, 2);
}
BOOL func_395(int* piParam0) // Position - 0x2904D{
return IS_BIT_SET(*piParam0, 1);
}

int func_396(int iParam0, int iParam1) // Position - 0x2905A{
int num;
if(iParam0 !=0 && iParam0 !=1 && iParam0 !=2){
if(iParam1==0 || iParam1==1 || iParam1==2){
num=iParam1;
iParam1=iParam0;
iParam0=num;
}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 10;
case 1:
return 0;
case 2:
return 2;
case 3:
return 10;
case 4:
return 5;
case 5:
return 8;
default:
return 10;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
case 1:
return 10;
case 2:
return 1;
case 3:
return 3;
case 4:
return 6;
case 5:
return 10;
default:
return 10;
}
break;
case 2:
switch (iParam1){
case 0:
return 2;
case 1:
return 1;
case 2:
return 10;
case 3:
return 4;
case 4:
return 7;
case 5:
return 10;
default:
return 10;
}
break;
}
return 10;
}

int func_397(int iParam0) // Position - 0x291E4{
if(iParam0==145) return 7;
if(iParam0 < func_399()) return func_398(iParam0);
if(iParam0==144) return 7;
if(iParam0==func_399()) return 6;
if(iParam0==191) return 6;
return 6;
}

int func_398(int iParam0) // Position - 0x2923C{
return Global_2028[iParam0 /*29*/].f_11;
}

int func_399() // Position - 0x2924D{
if(Global_32163==0 || Global_32163==2) return 190;
return 161;
}


void func_400(int iParam0, int iParam1, int iParam2) // Position - 0x2926F{
int num;
int num2;
int num3;
num=func_397(iParam0);
num2=func_397(iParam1);
num3=func_396(num, num2);
Global_113648.f_18105.f_175[num3 /*19*/].f_17=iParam2;
if(Global_113648.f_18105.f_175[num3 /*19*/].f_17 < 0) Global_113648.f_18105.f_175[num3 /*19*/].f_17=0;
if(Global_113648.f_18105.f_175[num3 /*19*/].f_17 > 100) Global_113648.f_18105.f_175[num3 /*19*/].f_17=100;
return;
}


void func_401(int iParam0, int iParam1, int iParam2) // Position - 0x292EA{
int num;
int num2;
int num3;
num=func_397(iParam0);
num2=func_397(iParam1);
num3=func_396(num, num2);
if(num3 !=10){
func_402(&(Global_113648.f_18105.f_175[num3 /*19*/].f_5));
Global_113648.f_18105.f_175[num3 /*19*/].f_8=iParam2;
}
return;
}


void func_402(int* piParam0) // Position - 0x29337{
func_391(piParam0, 0f);
return;
}
BOOL func_403(int iParam0, int iParam1, var uParam2) // Position - 0x29346{
int num;
int num2;
num=func_397(iParam0);
num2=func_397(iParam1);
if(num !=7 && num2 !=7){
*uParam2=func_396(num, num2);
if(*uParam2 !=10) return true;
}
*uParam2=10;
return false;
}


void func_404() // Position - 0x2938B{
int num;
num=82;
if(func_406(82) && func_405(82)){
HUD::SET_BLIP_FLASHES(Global_32543[num /*23*/].f_19, true);
HUD::SET_BLIP_FLASH_TIMER(Global_32543[num /*23*/].f_19, 10000);
}
return;
}
BOOL func_405(int iParam0) // Position - 0x293C9{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}
BOOL func_406(int iParam0) // Position - 0x29405{
int num;
BOOL flag;
BOOL flag2;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
flag=IS_BIT_SET(Global_32543[num /*23*/].f_11, 0);
flag2=IS_BIT_SET(Global_32543[num /*23*/].f_11, 15);
if(flag && flag2) return true;
return false;
}


void func_407() // Position - 0x29460{
Blip firstBlipInfoId;
firstBlipInfoId=HUD::GET_FIRST_BLIP_INFO_ID(BLIP_RANDOM_CHARACTER);
if(HUD::DOES_BLIP_EXIST(firstBlipInfoId)){
HUD::SET_BLIP_FLASHES(firstBlipInfoId, true);
HUD::SET_BLIP_FLASH_TIMER(firstBlipInfoId, 10000);
}
return;
}


void func_408() // Position - 0x29489{
int i;
for (i=243;
i <=262;
i=i + 1){
if(func_409(i) && !HUD::IS_RADAR_HIDDEN() && !MISC::IS_FRONTEND_FADING()){
HUD::SET_BLIP_FLASHES(Global_32543[i /*23*/].f_19, true);
HUD::SET_BLIP_FLASH_TIMER(Global_32543[i /*23*/].f_19, 10000);
}}
return;
}
BOOL func_409(int iParam0) // Position - 0x294E1{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
if(HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19))if(HUD::IS_BLIP_ON_MINIMAP(Global_32543[num /*23*/].f_19)) return true;
return false;
}


void func_410(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8) // Position - 0x29535{
func_411(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
return;
}


void func_411(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9) // Position - 0x29556{
int i;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")) return;
if(iParam3 < 0) return;
if(iParam5 < 500 && iParam5 !=-1) return;
if(iParam4 < 0 && iParam4 !=-1) return;
if(iParam6 < 1 || iParam6 > 7) return;
if(iParam7==235) return;
if(iParam8==235) return;
for (i=0;
i < Global_113648.f_20412.f_145;
i=i + 1){
if(MISC::ARE_STRINGS_EQUAL(&Global_113648.f_20412[i /*16*/], sParam0)) return;
}
if(Global_113648.f_20412.f_145 < 9){
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/], sParam0, 16);
TEXT_LABEL_ASSIGN_STRING(&(Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_4), sParam1, 16);
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_8=MISC::GET_GAME_TIMER() + iParam3;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_9=iParam5;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_11=iParam6;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_12=iParam2;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_13=iParam7;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_14=iParam8;
Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_15=iParam9;
if(iParam4 !=-1) Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=MISC::GET_GAME_TIMER() + iParam3 + iParam4;
else Global_113648.f_20412[Global_113648.f_20412.f_145 /*16*/].f_10=-1;
Global_113648.f_20412.f_145=Global_113648.f_20412.f_145 + 1;
func_307();
}
return;
}


void func_412(int iParam0, BOOL bParam1) // Position - 0x29729{
if(iParam0==-1) return;
if(bParam1){
if(!func_413(iParam0, 0)){
func_330(iParam0, 1, false);
func_330(iParam0, 2, false);
func_330(iParam0, 3, false);
func_330(iParam0, 4, false);
func_330(iParam0, 0, true);
Global_77348[iParam0]=1;
}}else{
func_330(iParam0, 0, false);
}
return;
}
BOOL func_413(int iParam0, int iParam1) // Position - 0x29786{
if(iParam0==-1) return false;
return IS_BIT_SET(Global_113648.f_32751[iParam0], iParam1);
}


void func_414(BOOL bParam0) // Position - 0x297A6{
if(bParam0){
TEXT_LABEL_ASSIGN_STRING(&Global_112704, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_112698=1;
}else{
TEXT_LABEL_ASSIGN_STRING(&Global_112704, "NULL", 24);
Global_112698=0;
}
return;
}


void func_415() // Position - 0x297D2{
func_13(-375893868);
func_13(-658009473);
func_251(50, 1);
return;
}


void func_416() // Position - 0x297F5{
func_13(546458037);
if(!_IS_MISSION_REPEAT_ACTIVE(false)) func_410("AM_H_CHOP" /*Chop is now at Franklin's house. Franklin can interact with Chop at ~BLIP_CHOP~*/, 0, 3000, -1, 10000, 2, 0, 0, 0);
func_251(63, 1);
if(!func_272(126)){
func_242(138, true, false);
func_288(138);
func_284(138);
func_219(80, 1, false, true, 0);
}else{
func_242(139, true, false);
func_341(139);
func_288(139);
}
return;
}


void func_417() // Position - 0x2986A{
func_13(-651018670);
func_13(-236506853);
func_251(14, 1);
return;
}


void func_418() // Position - 0x2988D{
if(!func_272(48)) func_251(48, 1);
return;
}


void func_419() // Position - 0x298A6{
if(!func_272(48)){
func_251(48, 1);
if(_GET_CURRENT_PLAYER_CHARACTER() !=CHAR_FRANKLIN) func_420(CHAR_LESTER, 1, "ASS1_MIS" /*I've got an opportunity for you. Meet me at Del Perro pier.*/, 1, 0, 0, 0, 0, false, 0, 1);
}
func_13(1323596299);
func_13(-1205448796);
return;
}

int func_420(eCharacter echParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, BOOL bParam8, int iParam9, int iParam10) // Position - 0x298EF{
int num;
char* str;
int num2;
char* str2;
int num3;
char* str3;
char* str4;
MISC::CLEAR_BIT(&Global_8253, 10);
num=0;
str="NULL";
num2=-99;
str2="NULL";
num3=0;
str3="NULL";
str4="NULL";
if(func_421(echParam0, sParam2, iParam3, num, str, str2, num2, iParam4, iParam5, iParam6, bParam8, iParam9, iParam10, num3, str3, str4, iParam1)==1){
if(bParam8==true){
Global_8960=iParam7;
Global_8863[3 /*6*/]={
_GET_CHARACTER_NAME(echParam0) 
};
Global_8940=echParam0;
MISC::SET_BIT(&Global_8253, 1);
MISC::SET_BIT(&Global_8253, 7);
}
return 1;
}
return 0;
}

int func_421(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, BOOL bParam10, int iParam11, int iParam12, int iParam13, char* sParam14, char* sParam15, int iParam16) // Position - 0x2997B{
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
if(func_437()==0){
func_435();
return 0;
}
func_434(Global_22792);
TEXT_LABEL_ASSIGN_STRING(&Global_113648.f_14143[Global_22792 /*104*/], sParam1, 64);
Global_113648.f_14143[Global_22792 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113648.f_14143[Global_22792 /*104*/].f_24=iParam2;
}
Global_113648.f_14143[Global_22792 /*104*/].f_25=iParam7;
Global_113648.f_14143[Global_22792 /*104*/].f_26=iParam8;
Global_113648.f_14143[Global_22792 /*104*/].f_29=iParam9;
Global_113648.f_14143[Global_22792 /*104*/].f_30=iParam12;
Global_113648.f_14143[Global_22792 /*104*/].f_31=iParam11;
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
func_433(0);
func_433(2);
func_433(1);
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
func_433(0);
Global_8959=0;
break;
case CHAR_FRANKLIN:
func_433(1);
Global_8959=1;
break;
case CHAR_TREVOR:
func_433(2);
Global_8959=2;
break;
case CHAR_MULTIPLAYER:
func_433(3);
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
if(!Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==1)if(!func_432()) AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20372, true);
}
if(!Global_20585){
if(Global_20383.f_1==6){
func_431(Global_20364, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_428(1);
func_431(Global_20364, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20363), -1082130432, -1082130432, -1082130432);
}}
if(Global_1977527 !=-1 && iParam0==Global_1977527) flag=true;
func_422(iParam0, sParam1, flag, func_427(PLAYER::PLAYER_ID()));
return 1;
}


void func_422(int iParam0, char* sParam1, BOOL bParam2, Any anParam3) // Position - 0x29E56{
if(!func_423()) return;
MONEY::NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, anParam3, Global_1977511.f_7, Global_1977511.f_8, Global_1977511.f_9, Global_1977511.f_10, Global_1977511.f_11, Global_1977511.f_12, Global_1977511.f_13);
if(bParam2) Global_1977527=-1;
return;
}
BOOL func_423() // Position - 0x29EB3{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_424(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_424(Player plParam0) // Position - 0x29F16{
return func_425(plParam0, 20);
}
BOOL func_425(Player plParam0, int iParam1) // Position - 0x29F26{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Player _INVALID_PLAYER_INDEX() // Position - 0x29F3E{
return -1;
}
Any func_427(Player plParam0) // Position - 0x29F47{
return Global_1853910[plParam0 /*862*/].f_205.f_6;
}


void func_428(int iParam0) // Position - 0x29F5C{
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
if(func_59(14)){
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
func_430(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2694519)if(num==14) func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22793), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==7){
if(Global_78558){
value2=0;
value2=Global_4541031;
for (k=0;
k < 12;
k=k + 1){
if(Global_4541032[k /*104*/].f_24 !=0)if(Global_4541032[k /*104*/].f_28==0)if(Global_4541032[k /*104*/].f_99[Global_20383]==1) value2=value2 + 1;
}
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value2), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
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
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value3), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}}elseif(num==14){
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22788), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}elseif(num==20){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&Global_8260[num /*15*/]);
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
func_430(&Global_8260[num /*15*/]);
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
func_430(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(value5);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==8){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(num==23 && MISC::ARE_STRINGS_EQUAL(&Global_8260[num /*15*/], "CELL_BENWEB" /*Benny's*/) && IS_BIT_SET(Global_8254, 6)){
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Global_20364, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(i);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8260[num /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&Global_8260[num /*15*/]);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8260[num /*15*/].f_10==57 && num==23){
value6=0;
value6=Global_1890001.f_1;
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(value6), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}else{
func_429(Global_20364, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(i), SYSTEM::TO_FLOAT(Global_8260[num /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &Global_8260[num /*15*/], 0, 0, 0, 0);
}
Global_8822[i]=1;
}}}
num=num + 1;
}}}
return;
}


void func_429(Player plParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, const char* sParam7, const char* sParam8, const char* sParam9, const char* sParam10, const char* sParam11) // Position - 0x2A4F6{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
if(fParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
if(fParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
if(fParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)) func_430(sParam7);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)) func_430(sParam8);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)) func_430(sParam9);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)) func_430(sParam10);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)) func_430(sParam11);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}


void func_430(const char* sParam0) // Position - 0x2A5A9{
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
return;
}


void func_431(Player plParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x2A5BB{
NETWORK::NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(plParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(iParam3 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam3));
if(iParam4 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam4));
if(iParam5 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam5));
if(iParam6 !=-1f) GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(iParam6));
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
return;
}
BOOL func_432() // Position - 0x2A61E{
return Global_1575060;
}


void func_433(int iParam0) // Position - 0x2A62A{
var unk;
var unk2;
unk=Global_113648.f_14053[iParam0 /*20*/].f_8;
unk=unk;
unk2=unk2;
return;
}


void func_434(int iParam0) // Position - 0x2A649{
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


void func_435() // Position - 0x2A6DB{
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
if(!func_436(Global_113648.f_14143[num3 /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=num3;
num3=num3 + 1;
}
Global_113648.f_14143[Global_22792 /*104*/].f_24=1;
return;
}
BOOL func_436(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11) // Position - 0x2A7A6{
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

int func_437() // Position - 0x2A891{
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
if(Global_113648.f_14143[i /*104*/].f_24==0 || Global_113648.f_14143[i /*104*/].f_24==1)if(!func_436(Global_113648.f_14143[i /*104*/].f_18, Global_113648.f_14143[Global_22792 /*104*/].f_18)) Global_22792=i;
Global_113648.f_14143[i /*104*/].f_24==2;
i=i + 1;
}
if(Global_22792==34) return 0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[0]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[1]=0;
Global_113648.f_14143[Global_22792 /*104*/].f_99[2]=0;
return 1;
}


void func_438() // Position - 0x2A9F9{
func_194(1323596299, 1, 2, 12, 15000, 5000, -1, 51, -1, 0, 1);
func_194(-1205448796, 1, 5, 1, 15000, 5000, -1, 51, -1, 0, 1);
func_13(1635608802);
return;
}


void func_439() // Position - 0x2AA3E{
func_13(-2014002000);
func_13(-314546970);
func_13(-1306479777);
func_13(-1652588035);
func_13(-125167689);
func_251(47, 1);
return;
}


void func_440() // Position - 0x2AA7F{
func_13(-444489072);
func_13(154402960);
func_21(23, 2);
func_20(23);
func_251(44, 1);
return;
}


void func_441() // Position - 0x2AAB0{
func_13(1269300253);
func_13(-749738207);
func_251(23, 1);
return;
}


void func_442(int iParam0, int iParam1) // Position - 0x2AAD3{
Global_95687[iParam0]=iParam1;
return;
}


void func_443() // Position - 0x2AAE5{
eCharacter character;
int i;
func_251(126, 1);
func_446(6, true);
func_445(6, true);
func_446(5, false);
func_412(4, true);
func_412(5, true);
if(func_444(157) !=1) func_219(156, 1, false, true, 0);
func_219(159, 1, false, true, 0);
func_219(160, 1, false, true, 0);
func_219(96, 1, false, true, 0);
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))if(func_17(character))if(character==CHAR_FRANKLIN) func_275(12, PLAYER::PLAYER_PED_ID());
func_445(5, false);
func_412(2, false);
func_412(3, false);
func_219(153, 1, false, true, 0);
func_219(155, 0, false, true, 0);
func_219(154, 0, false, true, 0);
func_219(80, 0, false, true, 0);
if(!func_272(63)){
func_13(546458037);
func_13(1674644829);
if(!_IS_MISSION_REPEAT_ACTIVE(false)){
func_410("AM_H_CHOP" /*Chop is now at Franklin's house. Franklin can interact with Chop at ~BLIP_CHOP~*/, 0, 3000, -1, 10000, 2, 0, 0, 0);
func_194(1674644829, 1, 2, 19, 10000, 10000, -1, 0, -1, 524288, 1);
}
func_251(63, 1);
}
func_242(138, false, false);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("chop"))==0) func_242(139, true, false);
for (i=0;
i < 4;
i=i + 1){
Global_113648.f_18535.f_24[1 /*5*/][i]=1;
}
Global_113648.f_20120.f_264=1;
if(!_IS_MISSION_REPEAT_ACTIVE(false)) func_410("AM_H_HILLS" /*Franklin has been moved into a new house in Vinewood Hills at ~BLIP_SAFEHOUSE~ This location can now be used to save progress and change clothes.*/, 2, 3000, -1, 10000, 2, 0, 0, 0);
return;
}

int func_444(int iParam0) // Position - 0x2AC6F{
if(iParam0 !=198)if(Global_78558) return Global_42791.f_227[iParam0];
else return Global_113648.f_7263.f_227[iParam0];
return 0;
}


void func_445(int iParam0, BOOL bParam1) // Position - 0x2ACA5{
if(iParam0==10) return;
if(bParam1) MISC::SET_BIT(&Global_113648.f_7231[iParam0], 1);
else MISC::CLEAR_BIT(&Global_113648.f_7231[iParam0], 1);
if(Global_95719[iParam0 /*10*/].f_7 !=263) func_287(Global_95719[iParam0 /*10*/].f_7, IS_BIT_SET(Global_113648.f_7231[iParam0], 1), false);
return;
}


void func_446(int iParam0, BOOL bParam1) // Position - 0x2AD0B{
if(iParam0==10) return;
if(bParam1) MISC::SET_BIT(&Global_113648.f_7231[iParam0], 0);
else MISC::CLEAR_BIT(&Global_113648.f_7231[iParam0], 0);
MISC::SET_SAVE_HOUSE(Global_95719[iParam0 /*10*/].f_8, bParam1, true);
func_474(iParam0);
func_472(iParam0, false);
func_470(iParam0);
func_447(iParam0);
return;
}


void func_447(int iParam0) // Position - 0x2AD6F{
if(iParam0==10) return;
switch (iParam0){
case 0:
MISC::SET_BIT(&Global_38617[38 / 32], 38 % 32);
func_448(38, 0);
MISC::SET_BIT(&Global_38617[41 / 32], 41 % 32);
func_448(41, 0);
MISC::SET_BIT(&Global_38617[43 / 32], 43 % 32);
func_448(43, 0);
MISC::SET_BIT(&Global_38617[42 / 32], 42 % 32);
func_448(42, 0);
MISC::SET_BIT(&Global_38617[44 / 32], 44 % 32);
func_448(44, 0);
break;
case 1:
MISC::SET_BIT(&Global_38617[51 / 32], 51 % 32);
func_448(51, 0);
break;
case 2:
MISC::SET_BIT(&Global_38617[51 / 32], 51 % 32);
func_448(51, 0);
break;
case 3:
MISC::SET_BIT(&Global_38617[53 / 32], 53 % 32);
func_448(53, 0);
break;
case 4:
MISC::SET_BIT(&Global_38617[81 / 32], 81 % 32);
func_448(81, 0);
MISC::SET_BIT(&Global_38617[82 / 32], 82 % 32);
func_448(82, 0);
break;
case 5:
MISC::SET_BIT(&Global_38617[47 / 32], 47 % 32);
func_448(47, 0);
MISC::SET_BIT(&Global_38617[50 / 32], 50 % 32);
func_448(50, 0);
break;
case 6:
MISC::SET_BIT(&Global_38617[50 / 32], 50 % 32);
func_448(50, 0);
break;
}
return;
}


void func_448(int iParam0, int iParam1) // Position - 0x2AEFF{
int num;
if(iParam0 !=226){
if(Global_78558) num=Global_42791[iParam0];
else num=Global_113648.f_7263[iParam0];
if(num !=iParam1 || IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32)){
if(iParam1==4 || iParam1==3 || iParam1==5 || iParam1==6 || iParam1==2){
MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_39089[iParam0]=iParam1;
}elseif(Global_78558){
Global_42791[iParam0]=iParam1;
}else{
Global_113648.f_7263[iParam0]=iParam1;
}
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
func_450(iParam0);
if(IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32)) func_449(iParam0);
}}
return;
}


void func_449(int iParam0) // Position - 0x2AFEC{
if(!IS_BIT_SET(Global_39560.f_228[iParam0 / 32], iParam0 % 23)){
MISC::SET_BIT(&Global_39560.f_228[iParam0 / 32], iParam0 % 23);
Global_39560[Global_39560.f_227]=iParam0;
Global_39560.f_227=Global_39560.f_227 + 1;
}
return;
}


void func_450(int iParam0) // Position - 0x2B037{
Vector3 vector;
BOOL flag;
BOOL flag2;
int num;
float distanceBetweenCoords;
Interior interior;
Interior interiorAtCoords;
BOOL flag3;
Interior interiorFromEntity;
Interior interiorAtCoords2;
if(!func_223()) return;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return;
vector={
func_469(iParam0) 
};
if(IS_BIT_SET(vector.f_4, 2)) func_455(iParam0, &vector);
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5))if(CUTSCENE::IS_CUTSCENE_PLAYING()) return;
flag=false;
flag2=false;
distanceBetweenCoords=MISC::GET_DISTANCE_BETWEEN_COORDS(vector, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0]==2 && distanceBetweenCoords > 210f){
MISC::CLEAR_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_38635[iParam0]=0;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("startup_positioning"))==0){
if(IS_BIT_SET(Global_38862[iParam0 / 32], iParam0 % 32)){
if(distanceBetweenCoords < 25f){
if(Global_100733.f_385==0)if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) Global_100733.f_385=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
interior=Global_100733.f_385;
interiorAtCoords=INTERIOR::GET_INTERIOR_AT_COORDS(vector);
if(interior==interiorAtCoords && interior !=0){
MISC::SET_BIT(&Global_38626[iParam0 / 32], iParam0 % 32);
Global_39089[iParam0]=3;
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
}}
MISC::CLEAR_BIT(&Global_38862[iParam0 / 32], iParam0 % 32);
}}
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32)){
num=Global_39089[iParam0];
}elseif(IS_BIT_SET(vector.f_4, 0)){
if(Global_113648.f_9087) num=func_452(iParam0);
else num=0;
if(func_59(14)) num=0;
}elseif(IS_BIT_SET(vector.f_4, 1) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("ambient_solomon"))==0){
if(func_451()) num=0;
else num=1;
}else{
num=Global_113648.f_7263[iParam0];
}
if(Global_39316[iParam0] !=num) flag=true;
if(IS_BIT_SET(Global_38617[iParam0 / 32], iParam0 % 32))if(!IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) || Global_38635[iParam0]==0 && Global_39089[iParam0] !=2) flag=true;
if(flag){
if(!Global_38616){
}else{
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(vector.f_5)) OBJECT::ADD_DOOR_TO_SYSTEM(vector.f_5, vector.f_3, vector, false, false, false);
switch (num){
case 1:
if(IS_BIT_SET(vector.f_4, 3)){
flag3=true;
}elseif(distanceBetweenCoords > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(vector.f_5)) <=0.015f){
interiorFromEntity=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
interiorAtCoords2=INTERIOR::GET_INTERIOR_AT_COORDS(vector);
if(interiorFromEntity !=interiorAtCoords2 || interiorFromEntity==0) flag3=true;
}
if(flag3){
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
}
break;
case 4:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 2:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 0:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, true);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 3:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, 0, false, true);
flag2=true;
break;
case 5:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
case 6:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
default:
if(vector.f_6 !=0f) OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(vector.f_5, vector.f_6, false, false);
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(vector.f_5, num, false, true);
flag2=true;
break;
}}
if(flag2){
MISC::CLEAR_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
Global_39316[iParam0]=num;
}}
if(IS_BIT_SET(Global_38626[iParam0 / 32], iParam0 % 32) && Global_39089[iParam0] !=2){
MISC::SET_BIT(&Global_38617[iParam0 / 32], iParam0 % 32);
func_449(iParam0);
if(Global_38635[iParam0] < 2) Global_38635[iParam0]=Global_38635[iParam0] + 1;
}
return;
}
BOOL func_451() // Position - 0x2B4FC{
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)) return false;
switch (_GET_CURRENT_PLAYER_CHARACTER()){
case CHAR_MICHAEL:
if(Global_113648.f_9087.f_99.f_58[65]) return true;
break;
case CHAR_FRANKLIN:
if(Global_113648.f_9087.f_99.f_58[66]) return true;
break;
case CHAR_TREVOR:
if(Global_113648.f_9087.f_99.f_58[65]) return true;
break;
}
return false;
}

int func_452(int iParam0) // Position - 0x2B57B{
eCharacter character;
character=_GET_CURRENT_PLAYER_CHARACTER();
if(func_453(iParam0)) return 1;
if(iParam0==49){
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[5], 0) || IS_BIT_SET(Global_113648.f_7231[6], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[5], character)) return 0;
}
switch (iParam0){
case 38:
case 39:
case 40:
case 41:
case 42:
case 43:
case 44:
case 45:
case 46:
if(character==CHAR_MICHAEL)if(IS_BIT_SET(Global_113648.f_7231[0], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[0], character))if(iParam0 !=40) return 0;
else return 1;
break;
case 47:
case 48:
case 49:
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[5], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[5], character)) return 0;
break;
case 50:
if(character==CHAR_FRANKLIN)if(IS_BIT_SET(Global_113648.f_7231[6], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[6], character)) return 0;
break;
case 51:
case 52:
if(character==CHAR_TREVOR){
if(IS_BIT_SET(Global_113648.f_7231[2], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[2], character)) return 0;
}elseif(character==CHAR_MICHAEL){
if(IS_BIT_SET(Global_113648.f_7231[1], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[1], character)) return 0;
}
break;
case 53:
if(character==CHAR_TREVOR)if(IS_BIT_SET(Global_113648.f_7231[3], 0)) return 0;
if(func_17(character))if(IS_BIT_SET(Global_95708[3], character)) return 0;
break;
default:
return 0;
}
return 1;
}
BOOL func_453(int iParam0) // Position - 0x2B7A3{
Hash entityModel;
if(iParam0==40 || iParam0==49 || iParam0==52){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)){
entityModel=ENTITY::GET_ENTITY_MODEL(func_454(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
switch (entityModel){
case joaat("utillitruck"):
case joaat("monster"):
return true;
}}}}
return false;
}
Vehicle func_454(Vehicle veParam0) // Position - 0x2B80F{
return veParam0;
}


void func_455(int iParam0, var uParam1) // Position - 0x2B819{
int num;
int num2;
if(!IS_BIT_SET(uParam1->f_4, 2)) return;
num=func_458();
num2=func_457(num);
switch (iParam0){
case 133:
case 134:
case 201:
case 202:
if(func_456(iParam0)){
if(num2 < 19){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=19){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 199:
case 200:
case 203:
case 204:
if(func_456(iParam0)){
if(num2 < 18){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=18){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 141:
case 142:
if(func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0 && !Global_113648.f_9087.f_99.f_58[4]){
if(num2 < 21){
if(num2 >=7){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(!Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(Global_113648.f_9087.f_99.f_58[4]){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_heist"))==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("jewelry_setup1"))==0){
if(num2 >=21){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}}
break;
case 145:
case 146:
case 143:
case 144:
if(func_456(iParam0)){
if(num2 < 20){
if(num2 >=9){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}}elseif(num2 >=20){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(num2 < 9){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 147:
case 148:
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
if(!func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet"))==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}elseif(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("assassin_valet")) > 0){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 158:
case 159:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 160:
case 161:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("omega2"))==0){
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 70:
case 71:
case 72:
if(!func_456(iParam0) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[26 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}else{
return;
}
break;
case 101:
case 102:
case 103:
case 104:
if(!func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[43 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 190:
case 191:
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 193:
if(!func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[93 /*34*/].f_6) > 0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 198:
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 80:
if(!func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[8 /*34*/].f_6)==0 && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[10 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 205:
case 206:
if(!func_456(iParam0)){
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[47 /*34*/].f_6)==0){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}else{
return;
}
break;
case 207:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[70 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 208:
case 209:
case 211:
case 210:
case 212:
case 213:
case 214:
case 215:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[48 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 99:
case 100:
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Global_91469[39 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}}
break;
case 216:
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 217:
case 218:
if(!func_456(iParam0)){
Global_113648.f_7263[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
case 219:
case 220:
case 221:
case 222:
if(func_456(iParam0)){
Global_113648.f_7263[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113648.f_7263[iParam0], true, true);
}
break;
}
return;
}
BOOL func_456(int iParam0) // Position - 0x2C1B2{
var unk;
int doorState;
unk={
func_469(iParam0) 
};
doorState=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(unk.f_5);
return doorState==1 || doorState==4 || doorState==2;
}

int func_457(int iParam0) // Position - 0x2C1E6{
return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}

int func_458() // Position - 0x2C1F9{
var unk;
func_468(&unk, CLOCK::GET_CLOCK_SECONDS());
func_467(&unk, CLOCK::GET_CLOCK_MINUTES());
func_466(&unk, CLOCK::GET_CLOCK_HOURS());
func_461(&unk, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_460(&unk, CLOCK::GET_CLOCK_MONTH());
func_459(&unk, CLOCK::GET_CLOCK_YEAR());
return unk;
}


void func_459(var uParam0, int iParam1) // Position - 0x2C23F{
if(iParam1 <=0) return;
if(iParam1 > 2043 || iParam1 < 1979) return;
*uParam0=*uParam0 - *uParam0 & 2080374784;
if(iParam1 < 2011){
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(2011 - iParam1, 26);
*uParam0=*uParam0 | -2147483648;
}else{
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1 - 2011, 26);
*uParam0=*uParam0 - *uParam0 & -2147483648;
}
return;
}


void func_460(var uParam0, int iParam1) // Position - 0x2C2C5{
if(iParam1 < 0 || iParam1 > 11) return;
*uParam0=*uParam0 - *uParam0 & 15;
*uParam0=*uParam0 || iParam1;
return;
}


void func_461(var uParam0, int iParam1) // Position - 0x2C2F8{
int num;
int num2;
num=func_465(*uParam0);
num2=func_463(*uParam0);
if(iParam1 < 1 || iParam1 > func_462(num, num2)) return;
*uParam0=*uParam0 - *uParam0 & 496;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4);
return;
}

int func_462(int iParam0, int iParam1) // Position - 0x2C349{
if(iParam1 < 0) iParam1=0;
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
case 3:
case 5:
case 8:
case 10:
return 30;
case 1:
if(iParam1 % 4==0)if(iParam1 % 100 !=0) return 29;
elseif(iParam1 % 400==0) return 29;
return 28;
}
return 30;
}

int func_463(int iParam0) // Position - 0x2C3EB{
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * IS_BIT_SET(iParam0, 31) ? -1 :
1) + 2011;
}


var func__464(BOOL bParam0, var uParam1, var uParam2) // Position - 0x2C40D{
if(bParam0) return uParam1;
return uParam2;
}

int func_465(int iParam0) // Position - 0x2C424{
return iParam0 & 15;
}


void func_466(var uParam0, int iParam1) // Position - 0x2C431{
if(iParam1 < 0 || iParam1 > 24) return;
*uParam0=*uParam0 - *uParam0 & 15872;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9);
return;
}


void func_467(var uParam0, int iParam1) // Position - 0x2C46B{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 1032192;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14);
return;
}


void func_468(var uParam0, int iParam1) // Position - 0x2C4A6{
if(iParam1 < 0 || iParam1 >=60) return;
*uParam0=*uParam0 - *uParam0 & 66060288;
*uParam0=*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20);
return;
}


struct<7> func_469(int iParam0) // Position - 0x2C4E2{
var unk;
switch (iParam0){
case 0:
unk.f_3=joaat("v_ilev_bs_door");
unk={
133f, -1711f, 29f 
};
unk.f_5=1804701345;
break;
case 1:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-1287.8568f, -1115.7416f, 7.1401f 
};
unk.f_5=1403601067;
break;
case 2:
unk.f_3=joaat("v_ilev_bs_door");
unk={
1932.9518f, 3725.1536f, 32.9944f 
};
unk.f_5=-2031139496;
break;
case 3:
unk.f_3=joaat("v_ilev_bs_door");
unk={
1207.8732f, -470.063f, 66.358f 
};
unk.f_5=1796834809;
break;
case 4:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-29.8692f, -148.1571f, 57.2265f 
};
unk.f_5=96153298;
break;
case 5:
unk.f_3=joaat("v_ilev_bs_door");
unk={
-280.7851f, 6232.7817f, 31.8455f 
};
unk.f_5=-281080954;
break;
case 6:
unk.f_3=joaat("v_ilev_hd_door_l");
unk={
-824f, -187f, 38f 
};
unk={
-823.2001f, -187.0831f, 37.819f 
};
unk.f_5=183249434;
break;
case 7:
unk.f_3=joaat("v_ilev_hd_door_r");
unk={
-823f, -188f, 38f 
};
unk={
-822.4442f, -188.3924f, 37.819f 
};
unk.f_5=758345384;
break;
case 8:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
82.3186f, -1392.7518f, 29.5261f 
};
unk.f_5=-1069262641;
break;
case 9:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
82.3186f, -1390.4758f, 29.5261f 
};
unk.f_5=1968521986;
break;
case 10:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
1686.9832f, 4821.7407f, 42.2131f 
};
unk.f_5=-2143706301;
break;
case 11:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
1687.2817f, 4819.4844f, 42.2131f 
};
unk.f_5=-1403421822;
break;
case 12:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
418.637f, -806.457f, 29.6396f 
};
unk.f_5=-1950137670;
break;
case 13:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
418.637f, -808.733f, 29.6396f 
};
unk.f_5=1226259807;
break;
case 14:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-1096.6613f, 2705.4458f, 19.2578f 
};
unk.f_5=1090833557;
break;
case 15:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-1094.9652f, 2706.9636f, 19.2578f 
};
unk.f_5=897332612;
break;
case 16:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
1196.825f, 2703.221f, 38.3726f 
};
unk.f_5=1095946640;
break;
case 17:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
1199.101f, 2703.221f, 38.3726f 
};
unk.f_5=801975945;
break;
case 18:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-818.7642f, -1079.5444f, 11.4781f 
};
unk.f_5=-167996547;
break;
case 19:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-816.7932f, -1078.4065f, 11.4781f 
};
unk.f_5=-1935818563;
break;
case 20:
unk.f_3=joaat("v_ilev_cs_door01");
unk={
-0.0564f, 6517.461f, 32.0278f 
};
unk.f_5=1891185217;
break;
case 21:
unk.f_3=joaat("v_ilev_cs_door01_r");
unk={
-1.7253f, 6515.9136f, 32.0278f 
};
unk.f_5=1236591681;
break;
case 22:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
-1201.4349f, -776.8566f, 17.9918f 
};
unk.f_5=1980808685;
break;
case 23:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
617.2458f, 2751.0222f, 42.7578f 
};
unk.f_5=1352749757;
break;
case 24:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
127.8201f, -211.8274f, 55.2275f 
};
unk.f_5=-566554453;
break;
case 25:
unk.f_3=joaat("v_ilev_clothmiddoor");
unk={
-3167.75f, 1055.5358f, 21.5329f 
};
unk.f_5=1284749450;
break;
case 26:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-716.6754f, -155.42f, 37.6749f 
};
unk.f_5=261851994;
break;
case 27:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-715.6154f, -157.2561f, 37.6749f 
};
unk.f_5=217646625;
break;
case 28:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-157.0924f, -306.4413f, 39.994f 
};
unk.f_5=1801139578;
break;
case 29:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-156.4022f, -304.4366f, 39.994f 
};
unk.f_5=-2123275866;
break;
case 30:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-1454.7819f, -231.7927f, 50.0565f 
};
unk.f_5=1312689981;
break;
case 31:
unk.f_3=joaat("v_ilev_ch_glassdoor");
unk={
-1456.2007f, -233.3682f, 50.0565f 
};
unk.f_5=-595055661;
break;
case 32:
unk.f_3=joaat("v_ilev_ta_door");
unk={
321.81f, 178.36f, 103.68f 
};
unk.f_5=-265260897;
break;
case 33:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1859.89f, 3749.79f, 33.18f 
};
unk.f_5=-1284867488;
break;
case 34:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
-289.1752f, 6199.1123f, 31.637f 
};
unk.f_5=302307081;
break;
case 35:
unk.f_3=joaat("v_ilev_ta_door");
unk={
-1155.4541f, -1424.0079f, 5.0461f 
};
unk.f_5=-681886015;
break;
case 36:
unk.f_3=joaat("v_ilev_ta_door");
unk={
1321.2856f, -1650.5967f, 52.3663f 
};
unk.f_5=-2086556500;
break;
case 37:
unk.f_3=joaat("v_ilev_ta_door");
unk={
-3167.7888f, 1074.7668f, 20.9209f 
};
unk.f_5=-1496386696;
break;
case 38:
unk.f_3=joaat("v_ilev_mm_doorm_l");
unk={
-817f, 179f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-2097039789;
break;
case 39:
unk.f_3=joaat("v_ilev_mm_doorm_r");
unk={
-816f, 178f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-2127416656;
break;
case 40:
unk.f_3=joaat("prop_ld_garaged_01");
unk={
-815f, 186f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1986583853;
unk.f_6=6.5f;
break;
case 41:
unk.f_3=joaat("prop_bh1_48_backdoor_l");
unk={
-797f, 177f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=776026812;
break;
case 42:
unk.f_3=joaat("prop_bh1_48_backdoor_r");
unk={
-795f, 178f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=698422331;
break;
case 43:
unk.f_3=joaat("prop_bh1_48_backdoor_l");
unk={
-793f, 181f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=535076355;
break;
case 44:
unk.f_3=joaat("prop_bh1_48_backdoor_r");
unk={
-794f, 183f, 73f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=474675599;
break;
case 45:
unk.f_3=joaat("prop_bh1_48_gate_1");
unk={
-849f, 179f, 70f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1978427516;
break;
case 46:
unk.f_3=joaat("v_ilev_mm_windowwc");
unk={
-802.7333f, 167.5041f, 77.5824f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1700375831;
break;
case 47:
unk.f_3=joaat("v_ilev_fa_frontdoor");
unk={
-14f, -1441f, 31f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=613961892;
break;
case 48:
unk.f_3=joaat("v_ilev_fh_frntdoor");
unk={
-15f, -1427f, 31f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-272570634;
break;
case 49:
unk.f_3=joaat("prop_sc1_21_g_door_01");
unk={
-25.28f, -1431.06f, 30.84f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1040675994;
break;
case 50:
unk.f_3=joaat("v_ilev_fh_frontdoor");
unk={
7.52f, 539.53f, 176.18f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=1201219326;
break;
case 51:
unk.f_3=joaat("v_ilev_trevtraildr");
unk={
1973f, 3815f, 34f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=joaat("DOORHASH_T_TRAILER_CS");
break;
case 52:
unk.f_3=joaat("prop_cs4_10_tr_gd_01");
unk={
1972.7874f, 3824.5537f, 32.5831f 
};
unk.f_5=1113956670;
unk.f_6=12f;
break;
case 53:
unk.f_3=joaat("v_ilev_trev_doorfront");
unk={
-1150f, -1521f, 11f 
};
MISC::SET_BIT(&(unk.f_4), 0);
unk.f_5=-1361617046;
break;
}
switch (iParam0){
case 54:
unk.f_3=joaat("prop_com_ls_door_01");
unk={
-1145.9f, -1991.14f, 14.18f 
};
unk.f_5=-1871080926;
unk.f_6=25f;
break;
case 55:
unk.f_3=joaat("prop_id2_11_gdoor");
unk={
723.12f, -1088.83f, 23.28f 
};
unk.f_5=1168079979;
unk.f_6=25f;
break;
case 56:
unk.f_3=joaat("prop_com_ls_door_01");
unk={
-356.09f, -134.77f, 40.01f 
};
unk.f_5=1206354175;
unk.f_6=25f;
break;
case 57:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
108.8502f, 6617.8765f, 32.673f 
};
unk.f_5=-1038180727;
unk.f_6=25f;
break;
case 58:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
114.3206f, 6623.226f, 32.7161f 
};
unk.f_5=1200466273;
unk.f_6=25f;
break;
case 59:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
1182.3054f, 2645.2422f, 38.807f 
};
unk.f_5=1391004277;
unk.f_6=25f;
break;
case 60:
unk.f_3=joaat("v_ilev_carmod3door");
unk={
1174.6542f, 2645.2422f, 38.6826f 
};
unk.f_5=-459199009;
unk.f_6=25f;
break;
case 225:
unk.f_3=joaat("lr_prop_supermod_door_01");
unk={
-205.7007f, -1310.6917f, 30.2957f 
};
unk.f_5=-288764223;
unk.f_6=25f;
break;
case 61:
unk.f_3=joaat("v_ilev_janitor_frontdoor");
unk={
-107.5401f, -9.0258f, 70.6696f 
};
unk.f_5=-252283844;
break;
case 62:
unk.f_3=joaat("v_ilev_ss_door8");
unk={
717f, -975f, 25f 
};
unk.f_5=-826072862;
break;
case 63:
unk.f_3=joaat("v_ilev_ss_door7");
unk={
719f, -975f, 25f 
};
unk.f_5=763780711;
break;
case 64:
unk.f_3=joaat("v_ilev_ss_door02");
unk={
709.9813f, -963.5311f, 30.5453f 
};
unk.f_5=-874851305;
break;
case 65:
unk.f_3=joaat("v_ilev_ss_door03");
unk={
709.9894f, -960.6675f, 30.5453f 
};
unk.f_5=-1480820165;
break;
case 66:
unk.f_3=joaat("v_ilev_store_door");
unk={
707.8046f, -962.4564f, 30.5453f 
};
unk.f_5=949391213;
break;
case 67:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1393f, 3599f, 35f 
};
unk.f_5=212192855;
break;
case 68:
unk.f_3=joaat("v_ilev_ml_door1");
unk={
1395f, 3600f, 35f 
};
unk.f_5=-126474752;
break;
case 69:
unk.f_3=joaat("v_ilev_ss_door04");
unk={
1387f, 3614f, 39f 
};
unk.f_5=1765671336;
break;
case 70:
unk.f_3=joaat("prop_ron_door_01");
unk={
1083.5471f, -1975.4354f, 31.6222f 
};
unk.f_5=792295685;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 71:
unk.f_3=joaat("prop_ron_door_01");
unk={
1065.237f, -2006.0791f, 32.2329f 
};
unk.f_5=563273144;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 72:
unk.f_3=joaat("prop_ron_door_01");
unk={
1085.3069f, -2018.5613f, 41.6289f 
};
unk.f_5=-726993043;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 73:
unk.f_3=joaat("v_ilev_bank4door02");
unk={
-111f, 6464f, 32f 
};
unk.f_5=178228075;
break;
case 74:
unk.f_3=joaat("v_ilev_bank4door01");
unk={
-110f, 6462f, 32f 
};
unk.f_5=1852297978;
break;
case 75:
unk.f_3=joaat("v_ilev_lester_doorfront");
unk={
1274f, -1721f, 55f 
};
unk.f_5=-565026078;
break;
case 76:
unk.f_3=joaat("v_ilev_lester_doorveranda");
unk={
1271.89f, -1707.57f, 53.79f 
};
unk.f_5=1646172266;
break;
case 77:
unk.f_3=joaat("v_ilev_lester_doorveranda");
unk={
1270.77f, -1708.1f, 53.75f 
};
unk.f_5=204467342;
break;
case 78:
unk.f_3=joaat("v_ilev_deviantfrontdoor");
unk={
-127.5f, -1456.18f, 37.94f 
};
unk.f_5=2047070410;
break;
case 79:
unk.f_3=joaat("prop_com_gar_door_01");
unk={
483.56f, -1316.08f, 32.18f 
};
unk.f_5=1417775309;
break;
case 80:
unk.f_3=joaat("v_ilev_cs_door");
unk={
483f, -1312f, 29f 
};
unk.f_5=-106474626;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 81:
unk.f_3=joaat("prop_strip_door_01");
unk={
128f, -1299f, 29f 
};
unk.f_5=1840510598;
break;
case 82:
unk.f_3=joaat("prop_magenta_door");
unk={
96f, -1285f, 29f 
};
unk.f_5=1382825971;
break;
case 83:
unk.f_3=joaat("prop_motel_door_09");
unk={
549f, -1773f, 34f 
};
unk.f_5=232536303;
break;
case 84:
unk.f_3=joaat("v_ilev_gangsafedoor");
unk={
974f, -1839f, 36f 
};
unk.f_5=1267246609;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 85:
unk.f_3=joaat("v_ilev_gangsafedoor");
unk={
977f, -105f, 75f 
};
unk.f_5=-1900237971;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 86:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1391f, 1163f, 114f 
};
unk.f_5=2077901353;
break;
case 87:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1391f, 1161f, 114f 
};
unk.f_5=-2102079126;
break;
case 88:
unk.f_3=joaat("prop_cs6_03_door_l");
unk={
1396f, 1143f, 115f 
};
unk.f_5=-1905793212;
break;
case 89:
unk.f_3=joaat("prop_cs6_03_door_r");
unk={
1396f, 1141f, 115f 
};
unk.f_5=-1797032505;
break;
case 90:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1409f, 1146f, 114f 
};
unk.f_5=-62235167;
break;
case 91:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1409f, 1148f, 114f 
};
unk.f_5=-1727188163;
break;
case 92:
unk.f_3=joaat("v_ilev_ra_door1_l");
unk={
1408f, 1159f, 114f 
};
unk.f_5=-562748873;
break;
case 93:
unk.f_3=joaat("v_ilev_ra_door1_r");
unk={
1408f, 1161f, 114f 
};
unk.f_5=1976429759;
break;
case 94:
unk.f_3=joaat("prop_gar_door_01");
unk={
-1067f, -1666f, 5f 
};
unk.f_5=1341041543;
break;
case 95:
unk.f_3=joaat("prop_gar_door_02");
unk={
-1065f, -1669f, 5f 
};
unk.f_5=-1631467220;
break;
case 96:
unk.f_3=joaat("prop_map_door_01");
unk={
-1104.66f, -1638.48f, 4.68f 
};
unk.f_5=-1788473129;
break;
case 97:
unk.f_3=joaat("v_ilev_fib_door1");
unk={
-31.72f, -1101.85f, 26.57f 
};
unk.f_5=-1831288286;
break;
case 98:
unk.f_3=joaat("v_ilev_tort_door");
unk={
134.4f, -2204.1f, 7.52f 
};
unk.f_5=963876966;
break;
case 99:
unk.f_3=joaat("v_ilev_bl_shutter2");
unk={
3628f, 3747f, 28f 
};
unk.f_5=1773088812;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 100:
unk.f_3=joaat("v_ilev_bl_shutter2");
unk={
3621f, 3752f, 28f 
};
unk.f_5=-1332101528;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 101:
unk.f_3=joaat("v_ilev_rc_door3_l");
unk={
-608.73f, -1610.32f, 27.16f 
};
unk.f_5=-1811763714;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 102:
unk.f_3=joaat("v_ilev_rc_door3_r");
unk={
-611.32f, -1610.09f, 27.16f 
};
unk.f_5=1608500665;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 103:
unk.f_3=joaat("v_ilev_rc_door3_l");
unk={
-592.94f, -1631.58f, 27.16f 
};
unk.f_5=-1456048340;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 104:
unk.f_3=joaat("v_ilev_rc_door3_r");
unk={
-592.71f, -1628.99f, 27.16f 
};
unk.f_5=943854909;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 105:
unk.f_3=joaat("v_ilev_ss_door04");
unk={
1991f, 3053f, 47f 
};
unk.f_5=-89065356;
break;
case 106:
unk.f_3=joaat("v_ilev_fh_door4");
unk={
1988.3529f, 3054.411f, 47.3204f 
};
unk.f_5=-925491840;
break;
case 107:
unk.f_3=joaat("prop_epsilon_door_l");
unk={
-700.17f, 47.31f, 44.3f 
};
unk.f_5=1999872275;
break;
case 108:
unk.f_3=joaat("prop_epsilon_door_r");
unk={
-697.94f, 48.35f, 44.3f 
};
unk.f_5=1999872275;
break;
case 109:
unk.f_3=joaat("v_ilev_epsstoredoor");
unk={
241.3574f, 361.0488f, 105.8963f 
};
unk.f_5=1538555582;
break;
case 110:
unk.f_3=joaat("prop_ch2_09c_garage_door");
unk={
-689.11f, 506.97f, 110.64f 
};
unk.f_5=-961994186;
break;
case 111:
unk.f_3=joaat("v_ilev_door_orangesolid");
unk={
-1055.96f, -236.43f, 44.17f 
};
unk.f_5=-1772472848;
break;
case 112:
unk.f_3=joaat("prop_magenta_door");
unk={
29f, 3661f, 41f 
};
unk.f_5=-46374650;
break;
case 113:
unk.f_3=joaat("prop_cs4_05_tdoor");
unk={
32f, 3667f, 41f 
};
unk.f_5=-358302761;
break;
case 114:
unk.f_3=joaat("v_ilev_housedoor1");
unk={
87f, -1959f, 21f 
};
unk.f_5=-1237936041;
break;
case 115:
unk.f_3=joaat("v_ilev_fh_frntdoor");
unk={
0f, -1823f, 30f 
};
unk.f_5=1487374207;
break;
case 116:
unk.f_3=joaat("p_cut_door_03");
unk={
23.34f, -1897.6f, 23.05f 
};
unk.f_5=-199126299;
break;
case 117:
unk.f_3=joaat("p_cut_door_02");
unk={
524.2f, 3081.14f, 41.16f 
};
unk.f_5=-897071863;
break;
case 118:
unk.f_3=joaat("v_ilev_po_door");
unk={
-1910.58f, -576.01f, 19.25f 
};
unk.f_5=-864465775;
break;
case 119:
unk.f_3=joaat("prop_ss1_10_door_l");
unk={
-720.39f, 256.86f, 80.29f 
};
unk.f_5=-208439480;
break;
case 120:
unk.f_3=joaat("prop_ss1_10_door_r");
unk={
-718.42f, 257.79f, 80.29f 
};
unk.f_5=-1001088805;
break;
case 121:
unk.f_3=joaat("v_ilev_fibl_door02");
unk={
106.38f, -742.7f, 46.18f 
};
unk.f_5=756894459;
break;
case 122:
unk.f_3=joaat("v_ilev_fibl_door01");
unk={
105.76f, -746.65f, 46.18f 
};
unk.f_5=476981677;
break;
case 123:
unk.f_3=joaat("v_ilev_ct_door01");
unk={
-2343.53f, 3265.37f, 32.96f 
};
unk.f_5=2081647379;
break;
case 124:
unk.f_3=joaat("v_ilev_ct_door01");
unk={
-2342.23f, 3267.62f, 32.96f 
};
unk.f_5=2081647379;
break;
case 125:
unk.f_3=joaat("ap1_02_door_l");
unk={
-1041.9326f, -2748.1675f, 22.0308f 
};
unk.f_5=169965357;
break;
case 126:
unk.f_3=joaat("ap1_02_door_r");
unk={
-1044.8408f, -2746.4888f, 22.0308f 
};
unk.f_5=311232516;
break;
case 128:
unk.f_3=joaat("v_ilev_fb_doorshortl");
unk={
-1045.1199f, -232.004f, 39.4379f 
};
unk.f_5=-1563127729;
break;
case 129:
unk.f_3=joaat("v_ilev_fb_doorshortr");
unk={
-1046.5161f, -229.3581f, 39.4379f 
};
unk.f_5=759145763;
break;
case 130:
unk.f_3=joaat("v_ilev_fb_door01");
unk={
-1083.6201f, -260.4167f, 38.1867f 
};
unk.f_5=-84399179;
break;
case 131:
unk.f_3=joaat("v_ilev_fb_door02");
unk={
-1080.9744f, -259.0204f, 38.1867f 
};
unk.f_5=-461898059;
break;
case 127:
unk.f_3=joaat("v_ilev_gtdoor");
unk={
-1042.57f, -240.6f, 38.11f 
};
unk.f_5=1259065971;
break;
case 132:
unk.f_3=joaat("prop_damdoor_01");
unk={
1385.2578f, -2079.9495f, 52.7638f 
};
unk.f_5=-884051216;
break;
case 133:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
1656.57f, 4849.66f, 42.35f 
};
unk.f_5=243782214;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 134:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
1656.25f, 4852.24f, 42.35f 
};
unk.f_5=714115627;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 135:
unk.f_3=joaat("prop_sec_barrier_ld_01a");
unk={
-1051.4019f, -474.6847f, 36.6199f 
};
unk.f_5=1668106976;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 136:
unk.f_3=joaat("prop_sec_barrier_ld_01a");
unk={
-1049.2853f, -476.6376f, 36.7584f 
};
unk.f_5=1382347031;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 137:
unk.f_3=joaat("prop_sec_barrier_ld_02a");
unk={
-1210.9567f, -580.8765f, 27.2373f 
};
unk.f_5=-966790948;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 138:
unk.f_3=joaat("prop_sec_barrier_ld_02a");
unk={
-1212.4453f, -578.4401f, 27.2373f 
};
unk.f_5=-2068750132;
MISC::SET_BIT(&(unk.f_4), 1);
break;
case 139:
unk.f_3=joaat("v_ilev_roc_door4");
unk={
-565.1712f, 276.6259f, 83.2863f 
};
unk.f_5=-1716533184;
break;
case 140:
unk.f_3=joaat("v_ilev_roc_door4");
unk={
-561.2863f, 293.5043f, 87.7771f 
};
unk.f_5=2146505927;
break;
case 141:
unk.f_3=joaat("p_jewel_door_l");
unk={
-631.96f, -236.33f, 38.21f 
};
unk.f_5=1874948872;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 142:
unk.f_3=joaat("p_jewel_door_r1");
unk={
-630.43f, -238.44f, 38.21f 
};
unk.f_5=-1965020851;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 145:
unk.f_3=joaat("prop_ld_bankdoors_01");
unk={
231.62f, 216.23f, 106.4f 
};
unk.f_5=1951546856;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 146:
unk.f_3=joaat("prop_ld_bankdoors_01");
unk={
232.72f, 213.88f, 106.4f 
};
unk.f_5=-431382051;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 143:
unk.f_3=joaat("hei_prop_hei_bankdoor_new");
unk={
258.32f, 203.84f, 106.43f 
};
unk.f_5=-293975210;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 144:
unk.f_3=joaat("hei_prop_hei_bankdoor_new");
unk={
260.76f, 202.95f, 106.43f 
};
unk.f_5=-785215289;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 148:
unk.f_3=joaat("hei_v_ilev_bk_gate_pris");
unk={
256.31f, 220.66f, 106.43f 
};
unk.f_5=-366143778;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 147:
unk.f_3=joaat("v_ilev_bk_door");
unk={
266.36f, 217.57f, 110.43f 
};
unk.f_5=440819155;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 149:
unk.f_3=joaat("v_ilev_shrf2door");
unk={
-442.66f, 6015.2217f, 31.8663f 
};
unk.f_5=-588495243;
break;
case 150:
unk.f_3=joaat("v_ilev_shrf2door");
unk={
-444.4985f, 6017.06f, 31.8663f 
};
unk.f_5=1815504139;
break;
case 151:
unk.f_3=joaat("v_ilev_shrfdoor");
unk={
1855.6848f, 3683.9302f, 34.5928f 
};
unk.f_5=1344911780;
break;
case 152:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1223.35f, -172.41f, 39.98f 
};
unk.f_5=-320891223;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 153:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1220.93f, -173.68f, 39.98f 
};
unk.f_5=1511747875;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 154:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1211.99f, -190.57f, 39.98f 
};
unk.f_5=-1517722103;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 155:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1213.26f, -192.98f, 39.98f 
};
unk.f_5=-1093199712;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 156:
unk.f_3=joaat("prop_bhhotel_door_l");
unk={
-1217.77f, -201.54f, 39.98f 
};
unk.f_5=1902048492;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 157:
unk.f_3=joaat("prop_bhhotel_door_r");
unk={
-1219.04f, -203.95f, 39.98f 
};
unk.f_5=-444768985;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 158:
unk.f_3=joaat("prop_ch3_04_door_01l");
unk={
2514.32f, -317.34f, 93.32f 
};
unk.f_5=404057594;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 159:
unk.f_3=joaat("prop_ch3_04_door_01r");
unk={
2512.42f, -319.26f, 93.32f 
};
unk.f_5=-1417472813;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 160:
unk.f_3=joaat("prop_ch3_01_trlrdoor_l");
unk={
2333.23f, 2574.97f, 47.03f 
};
unk.f_5=-1376084479;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 161:
unk.f_3=joaat("prop_ch3_01_trlrdoor_r");
unk={
2329.65f, 2576.64f, 47.03f 
};
unk.f_5=457472151;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 162:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
16.1279f, -1114.6055f, 29.9469f 
};
unk.f_5=1071759151;
break;
case 163:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
18.572f, -1115.4951f, 29.9469f 
};
unk.f_5=-2119023917;
break;
case 165:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
1698.1763f, 3751.5056f, 34.8553f 
};
unk.f_5=-1488490473;
break;
case 166:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
1699.9371f, 3753.4202f, 34.8553f 
};
unk.f_5=-511187813;
break;
case 167:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
244.7274f, -44.0791f, 70.91f 
};
unk.f_5=-248569395;
break;
case 168:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
243.8379f, -46.5232f, 70.91f 
};
unk.f_5=989443413;
break;
case 169:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
845.3624f, -1024.5391f, 28.3448f 
};
unk.f_5=2022251829;
break;
case 170:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
842.7684f, -1024.5391f, 23.3448f 
};
unk.f_5=649820567;
break;
case 171:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-326.1122f, 6075.2695f, 31.6047f 
};
unk.f_5=537455378;
break;
case 172:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-324.273f, 6077.109f, 31.6047f 
};
unk.f_5=1121431731;
break;
case 173:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-665.2424f, -944.3256f, 21.9792f 
};
unk.f_5=-1437380438;
break;
case 174:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-662.6414f, -944.3256f, 21.9792f 
};
unk.f_5=-946336965;
break;
case 175:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-1313.8259f, -389.1259f, 36.8457f 
};
unk.f_5=1893144650;
break;
case 176:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-1314.465f, -391.6472f, 36.8457f 
};
unk.f_5=435841678;
break;
case 177:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-1114.0089f, 2689.77f, 18.7041f 
};
unk.f_5=948508314;
break;
case 178:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-1112.0708f, 2691.5046f, 18.7041f 
};
unk.f_5=-1796714665;
break;
case 179:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
-3164.8452f, 1081.3917f, 20.9887f 
};
unk.f_5=-1155247245;
break;
case 180:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
-3163.8115f, 1083.7784f, 20.9887f 
};
unk.f_5=782482084;
break;
case 181:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
2570.9045f, 303.3556f, 108.8848f 
};
unk.f_5=-1194470801;
break;
case 182:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
2568.3037f, 303.3556f, 108.8848f 
};
unk.f_5=-2129698061;
break;
case 183:
unk.f_3=joaat("v_ilev_gc_door04");
unk={
813.1779f, -2148.2695f, 29.7689f 
};
unk.f_5=1071759151;
break;
case 184:
unk.f_3=joaat("v_ilev_gc_door03");
unk={
810.5769f, -2148.2695f, 29.7689f 
};
unk.f_5=-2119023917;
break;
case 164:
unk.f_3=joaat("v_ilev_gc_door01");
unk={
6.8179f, -1098.2095f, 29.9469f 
};
unk.f_5=1487704245;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 185:
unk.f_3=joaat("v_ilev_gc_door01");
unk={
827.5342f, -2160.4927f, 29.7688f 
};
unk.f_5=1529812051;
MISC::SET_BIT(&(unk.f_4), 3);
break;
case 186:
unk.f_3=joaat("prop_lrggate_01c_l");
unk={
-1107.01f, 289.38f, 64.76f 
};
unk.f_5=904342475;
break;
case 187:
unk.f_3=joaat("prop_lrggate_01c_r");
unk={
-1101.62f, 290.36f, 64.76f 
};
unk.f_5=-795418380;
break;
case 188:
unk.f_3=joaat("prop_lrggate_01c_l");
unk={
-1138.64f, 300.82f, 67.18f 
};
unk.f_5=-1502457334;
break;
case 189:
unk.f_3=joaat("prop_lrggate_01c_r");
unk={
-1137.05f, 295.59f, 67.18f 
};
unk.f_5=-1994188940;
break;
case 190:
unk.f_3=joaat("v_ilev_bl_doorel_l");
unk={
-2053.16f, 3239.49f, 30.5f 
};
unk.f_5=-621770121;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 191:
unk.f_3=joaat("v_ilev_bl_doorel_r");
unk={
-2054.39f, 3237.23f, 30.5f 
};
unk.f_5=1018580481;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 192:
unk.f_3=joaat("v_ilev_cbankcountdoor01");
unk={
-108.91f, 6469.11f, 31.91f 
};
unk.f_5=421926217;
break;
case 193:
unk.f_3=joaat("prop_fnclink_03gate5");
unk={
-182.91f, 6168.37f, 32.14f 
};
unk.f_5=-1331552374;
MISC::SET_BIT(&(unk.f_4), 2);
break;
}
switch (iParam0){
case 196:
unk.f_3=joaat("v_ilev_csr_door_l");
unk={
-59.89f, -1092.95f, 26.88f 
};
unk.f_5=-293141277;
break;
case 197:
unk.f_3=joaat("v_ilev_csr_door_r");
unk={
-60.55f, -1094.75f, 26.89f 
};
unk.f_5=506750037;
break;
case 194:
unk.f_3=joaat("v_ilev_csr_door_l");
unk={
-39.13f, -1108.22f, 26.72f 
};
unk.f_5=1496005418;
break;
case 195:
unk.f_3=joaat("v_ilev_csr_door_r");
unk={
-37.33f, -1108.87f, 26.72f 
};
unk.f_5=-1863079210;
break;
case 198:
unk.f_3=joaat("prop_ron_door_01");
unk={
1943.73f, 3803.63f, 32.31f 
};
unk.f_5=-2018911784;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 199:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
316.39f, -276.49f, 54.52f 
};
unk.f_5=-93934272;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 200:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
313.96f, -275.6f, 54.52f 
};
unk.f_5=667682830;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 201:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
-2965.71f, 484.22f, 16.05f 
};
unk.f_5=1876735830;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 202:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
-2965.82f, 481.63f, 16.05f 
};
unk.f_5=-2112857171;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 205:
unk.f_3=joaat("v_ilev_abbmaindoor");
unk={
962.1f, -2183.83f, 31.06f 
};
unk.f_5=2046930518;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 206:
unk.f_3=joaat("v_ilev_abbmaindoor2");
unk={
961.79f, -2187.08f, 31.06f 
};
unk.f_5=1208502884;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 207:
unk.f_3=joaat("prop_ch3_04_door_02");
unk={
2508.43f, -336.63f, 115.76f 
};
unk.f_5=1986432421;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 208:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2255.19f, 322.26f, 184.93f 
};
unk.f_5=-722798986;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 209:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2254.06f, 319.7f, 184.93f 
};
unk.f_5=204301578;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 210:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2301.13f, 336.91f, 184.93f 
};
unk.f_5=-320140460;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 211:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2298.57f, 338.05f, 184.93f 
};
unk.f_5=65222916;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 212:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2222.32f, 305.86f, 184.93f 
};
unk.f_5=-920027322;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 213:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2221.19f, 303.3f, 184.93f 
};
unk.f_5=-58432001;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 214:
unk.f_3=joaat("prop_ch1_07_door_01l");
unk={
-2280.6f, 265.43f, 184.93f 
};
unk.f_5=-2007378629;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 215:
unk.f_3=joaat("prop_ch1_07_door_01r");
unk={
-2278.04f, 266.57f, 184.93f 
};
unk.f_5=418772613;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 216:
unk.f_3=joaat("prop_gar_door_04");
unk={
778.31f, -1867.49f, 30.66f 
};
unk.f_5=1679064921;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 217:
unk.f_3=joaat("prop_gate_tep_01_l");
unk={
-721.35f, 91.01f, 56.68f 
};
unk.f_5=412198396;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 218:
unk.f_3=joaat("prop_gate_tep_01_r");
unk={
-728.84f, 88.64f, 56.68f 
};
unk.f_5=-1053755588;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 219:
unk.f_3=joaat("prop_artgallery_02_dr");
unk={
-2287.62f, 363.9f, 174.93f 
};
unk.f_5=-53446139;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 220:
unk.f_3=joaat("prop_artgallery_02_dl");
unk={
-2289.78f, 362.91f, 174.93f 
};
unk.f_5=1333960556;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 221:
unk.f_3=joaat("prop_artgallery_02_dr");
unk={
-2289.86f, 362.88f, 174.93f 
};
unk.f_5=-41786493;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 222:
unk.f_3=joaat("prop_artgallery_02_dl");
unk={
-2292.01f, 361.89f, 174.93f 
};
unk.f_5=1750120734;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 223:
unk.f_3=joaat("prop_fnclink_07gate1");
unk={
1803.94f, 3929.01f, 33.72f 
};
unk.f_5=1661506222;
break;
case 203:
unk.f_3=joaat("v_ilev_genbankdoor2");
unk={
-348.81f, -47.26f, 49.39f 
};
unk.f_5=-2116116146;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 204:
unk.f_3=joaat("v_ilev_genbankdoor1");
unk={
-351.26f, -46.41f, 49.39f 
};
unk.f_5=-74083138;
MISC::SET_BIT(&(unk.f_4), 2);
break;
case 224:
unk.f_3=joaat("prop_abat_slide");
unk={
962.9084f, -2105.8137f, 34.6432f 
};
unk.f_5=-1670085357;
break;
}
return unk;
}


void func_470(int iParam0) // Position - 0x2F0EB{
if(iParam0==10) return;
switch (iParam0){
case 0:
case 1:
if(func_471(1)){
MISC::SET_SAVE_HOUSE(Global_95719[1 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[0 /*10*/].f_8, func_471(0), false);
}elseif(func_471(0)){
MISC::SET_SAVE_HOUSE(Global_95719[0 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[1 /*10*/].f_8, func_471(1), false);
}
break;
case 2:
case 3:
case 4:
if(func_471(3)){
MISC::SET_SAVE_HOUSE(Global_95719[3 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[4 /*10*/].f_8, func_471(4), false);
MISC::SET_SAVE_HOUSE(Global_95719[2 /*10*/].f_8, func_471(2), false);
}elseif(func_471(4)){
MISC::SET_SAVE_HOUSE(Global_95719[4 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[3 /*10*/].f_8, func_471(3), false);
MISC::SET_SAVE_HOUSE(Global_95719[2 /*10*/].f_8, func_471(2), false);
}elseif(func_471(2)){
MISC::SET_SAVE_HOUSE(Global_95719[2 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[3 /*10*/].f_8, func_471(3), false);
MISC::SET_SAVE_HOUSE(Global_95719[4 /*10*/].f_8, func_471(4), false);
}
break;
case 5:
case 6:
if(func_471(6)){
MISC::SET_SAVE_HOUSE(Global_95719[6 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[5 /*10*/].f_8, func_471(5), false);
}elseif(func_471(5)){
MISC::SET_SAVE_HOUSE(Global_95719[5 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95719[6 /*10*/].f_8, func_471(6), false);
}
break;
}
return;
}
BOOL func_471(int iParam0) // Position - 0x2F2A2{
return IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
}


void func_472(int iParam0, BOOL bParam1) // Position - 0x2F2B7{
int i;
int num;
int num2;
var unk;
BOOL toggle;
if(iParam0==10) return;
toggle=IS_BIT_SET(Global_113648.f_7231[iParam0], 0);
if(iParam0==5 && IS_BIT_SET(Global_113648.f_7231[6], 0)) toggle=true;
for (i=0;
i < 3;
i=i + 1){
num=0;
TEXT_LABEL_ASSIGN_STRING(&unk, "", 32);
num2=10;
while (func_473(i, num, &unk, &num2)){
if(num2==iParam0){
if(toggle)if(bParam1) OBJECT::CLEAR_GARAGE(MISC::GET_HASH_KEY(&unk), false);
OBJECT::ENABLE_SAVING_IN_GARAGE(MISC::GET_HASH_KEY(&unk), toggle);
}
num=num + 1;
}}
return;
}
BOOL func_473(int iParam0, int iParam1, char* sParam2, var uParam3) // Position - 0x2F356{
TEXT_LABEL_ASSIGN_STRING(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Michael - Beverly Hills", 32);
*uParam3=0;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=1;
return true;
}
break;
case 1:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Aunt", 32);
*uParam3=5;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Franklin - Hills", 32);
*uParam3=6;
return true;
}
break;
case 2:
if(iParam1==0){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Countryside", 32);
*uParam3=2;
return true;
}elseif(iParam1==1){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - City", 32);
*uParam3=3;
return true;
}elseif(iParam1==2){
TEXT_LABEL_ASSIGN_STRING(sParam2, "Trevor - Stripclub", 32);
*uParam3=4;
return true;
}
break;
}
return false;
}


void func_474(int iParam0) // Position - 0x2F42E{
BOOL flag;
if(iParam0==10) return;
if(Global_95719[iParam0 /*10*/].f_7==263) return;
flag=false;
if(IS_BIT_SET(Global_113648.f_7231[iParam0], 0))if(Global_95719[iParam0 /*10*/].f_9 !=_GET_CURRENT_PLAYER_CHARACTER_0()) flag=true;
elseif(!func_475(iParam0)) flag=true;
if(iParam0==5)if(func_471(6)) flag=false;
if(func_243(14)) flag=false;
func_242(Global_95719[iParam0 /*10*/].f_7, flag, false);
return;
}
BOOL func_475(int iParam0) // Position - 0x2F4B8{
int i;
var interiorType;
Interior interiorAtCoordsWithType;
if(Global_100733.f_385==0) return false;
if(iParam0==10){
for (i=0;
i < 10;
i=i + 1){
if(func_475(i)) return true;
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_476(iParam0, &interiorType);
interiorAtCoordsWithType=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95719[iParam0 /*10*/].f_3, &interiorType);
if(interiorAtCoordsWithType !=0 && Global_100733.f_385==interiorAtCoordsWithType) return true;
}
return false;
}
BOOL func_476(int iParam0, char* sParam1) // Position - 0x2F53D{
TEXT_LABEL_ASSIGN_STRING(sParam1, "", 32);
switch (iParam0){
case 0:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_michael", 32);
break;
case 5:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklins", 32);
break;
case 6:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_franklinshouse", 32);
break;
case 2:
case 1:
if(STREAMING::IS_IPL_ACTIVE("TrevorsTrailer")) TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trailer", 32);
elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy")) TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTIDY", 32);
elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash")) TEXT_LABEL_ASSIGN_STRING(sParam1, "V_TrailerTRASH", 32);
break;
case 3:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_trevors", 32);
break;
case 4:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_strip3", 32);
break;
case 8:
case 7:
case 9:
TEXT_LABEL_ASSIGN_STRING(sParam1, "v_psycheoffice", 32);
break;
}
return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}
eCharacter _GET_CURRENT_PLAYER_CHARACTER_0() // Position - 0x2F61D{
func_67();
return Global_113648.f_2365.f_539.f_4321;
}


void func_478() // Position - 0x2F636{
func_251(118, 1);
func_412(3, true);
return;
}


void func_479() // Position - 0x2F64B{
func_251(9, 1);
return;
}


void func_480() // Position - 0x2F65A{
func_194(866793964, 1, 2, 19, 60000, 10000, 2, 44, -1, 262144, 1);
return;
}


void func_481() // Position - 0x2F680{
func_13(-1982006572);
func_13(-1501908698);
func_251(62, 1);
func_194(-899711929, 1, 2, 19, 800000, 20000, -1, 0, -1, 0, 1);
return;
}


void func_482() // Position - 0x2F6BD{
func_360(40, true);
func_360(48, true);
func_360(58, true);
func_360(71, true);
return;
}


void func_483(int iParam0) // Position - 0x2F6E1{
func_484(iParam0);
return;
}


void func_484(int iParam0) // Position - 0x2F6EF{
int i;
for (i=0;
i < 12;
i=i + 1){
Global_113648.f_2365.f_539[iParam0 /*65*/].f_13[i]=0;
Global_113648.f_2365.f_539[iParam0 /*65*/][i]=0;
}
for (i=0;
i < 9;
i=i + 1){
Global_113648.f_2365.f_539[iParam0 /*65*/].f_39[i]=-1;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_49[i]=-1;
}
switch (iParam0){
case 0:
Global_113648.f_2365.f_539[iParam0 /*65*/].f_59=0;
break;
case 1:
Global_113648.f_2365.f_539[1 /*65*/].f_13[3]=8;
Global_113648.f_2365.f_539[1 /*65*/].f_13[4]=8;
Global_113648.f_2365.f_539[1 /*65*/].f_13[6]=6;
Global_113648.f_2365.f_539[1 /*65*/].f_13[8]=14;
Global_113648.f_2365.f_539[1 /*65*/].f_13[2]=0;
Global_113648.f_2365.f_539[1 /*65*/][2]=0;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_59=0;
break;
case 2:
Global_113648.f_2365.f_539[2 /*65*/].f_13[3]=0;
Global_113648.f_2365.f_539[2 /*65*/].f_13[4]=23;
Global_113648.f_2365.f_539[2 /*65*/].f_13[6]=10;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_59=0;
break;
}
Global_113648.f_2365.f_539[iParam0 /*65*/].f_60=-99;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_61=2;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_62=0;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_63=-99;
Global_113648.f_2365.f_539[iParam0 /*65*/].f_64=1;
Global_100406[0 /*65*/]={
Global_113648.f_2365.f_539[0 /*65*/] 
};
Global_100406[1 /*65*/]={
Global_113648.f_2365.f_539[1 /*65*/] 
};
Global_100406[2 /*65*/]={
Global_113648.f_2365.f_539[2 /*65*/] 
};
return;
}


void func_485() // Position - 0x2F919{
func_410("AM_H_SHOOT" /*The Shooting Range is available at ~BLIP_SHOOTINGRANGE_GUNSHOP~*/, 2, 3000, 60000, 10000, 7, 0, 0, 0);
return;
}


void func_486() // Position - 0x2F938{
eCharacter i;
func_288(48);
func_506(48, true);
func_505(0, 11, true);
func_289(28, true, false);
func_289(29, true, false);
func_289(30, true, false);
func_289(31, true, false);
func_289(32, true, false);
func_289(33, true, false);
func_289(34, true, false);
func_289(35, true, false);
func_289(36, true, false);
func_289(37, true, false);
func_289(38, true, false);
for (i=CHAR_MICHAEL;
i < CHAR_MULTIPLAYER;
i=i + 1){
func_487(i, joaat("WEAPON_ASSAULTRIFLE"), true, true);
func_487(i, joaat("WEAPON_GRENADE"), true, true);
func_487(i, joaat("WEAPON_PISTOL"), true, true);
func_487(i, joaat("WEAPON_MICROSMG"), true, true);
func_487(i, joaat("WEAPON_SMG"), true, true);
func_487(i, joaat("WEAPON_KNIFE"), true, true);
}
return;
}


void func_487(eCharacter echParam0, int iParam1, BOOL bParam2, BOOL bParam3) // Position - 0x2FA0D{
int address;
int num;
int offset;
if(func_17(echParam0)){
address=func_504(echParam0, iParam1);
num=func_502(iParam1);
offset=func_501(num);
if(bParam2) MISC::SET_BIT(&address, offset);
else MISC::CLEAR_BIT(&address, offset);
func_499(echParam0, iParam1, address);
if(bParam3) func_488(echParam0, iParam1);
}
return;
}


void func_488(eCharacter echParam0, int iParam1) // Position - 0x2FA67{
int num;
int i;
num=0;
for (i=func_496(iParam1, num);
i !=0;
i=func_496(iParam1, num)){
func_489(echParam0, iParam1, i, true);
num=num + 1;
}
return;
}


void func_489(eCharacter echParam0, int iParam1, int iParam2, BOOL bParam3) // Position - 0x2FAA0{
int address;
int num;
int offset;
if(func_17(echParam0)){
address=func_495(echParam0, iParam1, iParam2);
num=func_493(iParam2, iParam1);
offset=func_492(num);
if(bParam3) MISC::SET_BIT(&address, offset);
else MISC::CLEAR_BIT(&address, offset);
func_490(echParam0, iParam1, iParam2, address);
}
return;
}


void func_490(eCharacter echParam0, int iParam1, int iParam2, int iParam3) // Position - 0x2FAF3{
int num;
int num2;
num=func_493(iParam2, iParam1);
num2=func_491(num);
switch (num2){
case 0:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_0"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_0"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_0"), iParam3, true);
break;
}
break;
case 1:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_1"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_1"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_1"), iParam3, true);
break;
}
break;
case 2:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_2"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_2"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_2"), iParam3, true);
break;
}
break;
case 3:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_3"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_3"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_3"), iParam3, true);
break;
}
break;
case 4:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_4"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_4"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_4"), iParam3, true);
break;
}
break;
case 5:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_5"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_5"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_5"), iParam3, true);
break;
}
break;
case 6:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_6"), iParam3, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_6"), iParam3, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_6"), iParam3, true);
break;
}
break;
default:
break;
}
return;
}

int func_491(int iParam0) // Position - 0x2FD55{
return iParam0 / 32;
}

int func_492(int iParam0) // Position - 0x2FD62{
return iParam0 % 32;
}

int func_493(int iParam0, int iParam1) // Position - 0x2FD6F{
return func_494(iParam0, iParam1);
}

int func_494(int iParam0, int iParam1) // Position - 0x2FD7F{
switch (iParam1){
case joaat("WEAPON_PISTOL"):
switch (iParam0){
case joaat("COMPONENT_PISTOL_CLIP_01"):
return 1;
case joaat("COMPONENT_PISTOL_CLIP_02"):
return 2;
case joaat("COMPONENT_AT_PI_FLSH"):
return 3;
case joaat("COMPONENT_AT_PI_SUPP_02"):
return 4;
case joaat("COMPONENT_PISTOL_VARMOD_LUXE"):
return 175;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 211;
}
break;
case joaat("WEAPON_COMBATPISTOL"):
switch (iParam0){
case joaat("COMPONENT_COMBATPISTOL_CLIP_01"):
return 5;
case joaat("COMPONENT_COMBATPISTOL_CLIP_02"):
return 6;
case joaat("COMPONENT_AT_PI_FLSH"):
return 7;
case joaat("COMPONENT_AT_PI_SUPP"):
return 8;
case joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER"):
return 186;
}
break;
case joaat("WEAPON_APPISTOL"):
switch (iParam0){
case joaat("COMPONENT_APPISTOL_CLIP_01"):
return 11;
case joaat("COMPONENT_APPISTOL_CLIP_02"):
return 12;
case joaat("COMPONENT_AT_PI_FLSH"):
return 13;
case joaat("COMPONENT_AT_PI_SUPP"):
return 14;
case joaat("COMPONENT_APPISTOL_VARMOD_LUXE"):
return 164;
case joaat("COMPONENT_APPISTOL_VARMOD_SECURITY"):
return 569;
}
break;
case joaat("WEAPON_MICROSMG"):
switch (iParam0){
case joaat("COMPONENT_MICROSMG_CLIP_01"):
return 15;
case joaat("COMPONENT_MICROSMG_CLIP_02"):
return 16;
case joaat("COMPONENT_AT_PI_FLSH"):
return 17;
case joaat("COMPONENT_AT_SCOPE_MACRO"):
return 18;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 19;
case joaat("COMPONENT_MICROSMG_VARMOD_LUXE"):
return 174;
case joaat("COMPONENT_MICROSMG_VARMOD_SECURITY"):
return 570;
case -1566778158:
return 602;
}
break;
case joaat("WEAPON_SMG"):
switch (iParam0){
case joaat("COMPONENT_SMG_CLIP_01"):
return 22;
case joaat("COMPONENT_SMG_CLIP_02"):
return 23;
case joaat("COMPONENT_SMG_CLIP_03"):
return 207;
case joaat("COMPONENT_AT_AR_FLSH"):
return 24;
case joaat("COMPONENT_AT_SCOPE_MACRO_02"):
return 25;
case joaat("COMPONENT_AT_PI_SUPP"):
return 26;
case joaat("COMPONENT_SMG_VARMOD_LUXE"):
return 179;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 212;
}
break;
case joaat("WEAPON_ASSAULTRIFLE"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTRIFLE_CLIP_01"):
return 27;
case joaat("COMPONENT_ASSAULTRIFLE_CLIP_02"):
return 28;
case joaat("COMPONENT_ASSAULTRIFLE_CLIP_03"):
return 201;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 29;
case joaat("COMPONENT_AT_AR_FLSH"):
return 30;
case joaat("COMPONENT_AT_SCOPE_MACRO"):
return 31;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 32;
case joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE"):
return 165;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 213;
}
break;
case joaat("WEAPON_CARBINERIFLE"):
switch (iParam0){
case joaat("COMPONENT_CARBINERIFLE_CLIP_01"):
return 33;
case joaat("COMPONENT_CARBINERIFLE_CLIP_02"):
return 34;
case joaat("COMPONENT_CARBINERIFLE_CLIP_03"):
return 202;
case joaat("COMPONENT_AT_RAILCOVER_01"):
return 35;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 36;
case joaat("COMPONENT_AT_AR_FLSH"):
return 37;
case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
return 38;
case joaat("COMPONENT_AT_AR_SUPP"):
return 39;
case joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE"):
return 168;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 214;
}
break;
case joaat("WEAPON_ADVANCEDRIFLE"):
switch (iParam0){
case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01"):
return 44;
case joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02"):
return 45;
case joaat("COMPONENT_AT_AR_FLSH"):
return 47;
case joaat("COMPONENT_AT_SCOPE_SMALL"):
return 48;
case joaat("COMPONENT_AT_AR_SUPP"):
return 49;
case joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE"):
return 163;
}
break;
case joaat("WEAPON_MG"):
switch (iParam0){
case joaat("COMPONENT_MG_CLIP_01"):
return 50;
case joaat("COMPONENT_MG_CLIP_02"):
return 51;
case joaat("COMPONENT_AT_SCOPE_SMALL_02"):
return 52;
case joaat("COMPONENT_MG_VARMOD_LOWRIDER"):
return 187;
}
break;
case joaat("WEAPON_COMBATMG"):
switch (iParam0){
case joaat("COMPONENT_COMBATMG_CLIP_01"):
return 53;
case joaat("COMPONENT_COMBATMG_CLIP_02"):
return 54;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 55;
case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
return 56;
case joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER"):
return 188;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 215;
}
break;
case joaat("WEAPON_PUMPSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_AT_SR_SUPP"):
return 59;
case joaat("COMPONENT_AT_AR_FLSH"):
return 60;
case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER"):
return 193;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 389;
case joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY"):
return 571;
case 330905451:
return 603;
}
break;
case joaat("WEAPON_ASSAULTSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01"):
return 64;
case joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02"):
return 65;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 66;
case joaat("COMPONENT_AT_AR_FLSH"):
return 67;
case joaat("COMPONENT_AT_AR_SUPP"):
return 68;
}
break;
case joaat("WEAPON_SNIPERRIFLE"):
switch (iParam0){
case joaat("COMPONENT_SNIPERRIFLE_CLIP_01"):
return 69;
case joaat("COMPONENT_AT_SCOPE_LARGE"):
return 70;
case joaat("COMPONENT_AT_SCOPE_MAX"):
return 71;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 72;
case joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE"):
return 180;
}
break;
case joaat("WEAPON_HEAVYSNIPER"):
switch (iParam0){
case joaat("COMPONENT_HEAVYSNIPER_CLIP_01"):
return 76;
case joaat("COMPONENT_AT_SCOPE_MAX"):
return 77;
case joaat("COMPONENT_AT_SCOPE_LARGE"):
return 82;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 216;
}
break;
case joaat("WEAPON_GRENADELAUNCHER"):
switch (iParam0){
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 78;
case joaat("COMPONENT_AT_AR_FLSH"):
return 79;
case joaat("COMPONENT_AT_SCOPE_SMALL"):
return 80;
}
break;
case joaat("WEAPON_MINIGUN"):
switch (iParam0){
case joaat("COMPONENT_MINIGUN_CLIP_01"):
return 81;
}
break;
case joaat("WEAPON_ASSAULTSMG"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTSMG_CLIP_01"):
return 83;
case joaat("COMPONENT_ASSAULTSMG_CLIP_02"):
return 84;
case joaat("COMPONENT_AT_AR_FLSH"):
return 85;
case joaat("COMPONENT_AT_SCOPE_MACRO"):
return 86;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 87;
case joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER"):
return 189;
}
break;
case joaat("WEAPON_BULLPUPSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 88;
case joaat("COMPONENT_AT_AR_FLSH"):
return 89;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 90;
}
break;
case joaat("WEAPON_PISTOL50"):
switch (iParam0){
case joaat("COMPONENT_PISTOL50_CLIP_01"):
return 91;
case joaat("COMPONENT_PISTOL50_CLIP_02"):
return 92;
case joaat("COMPONENT_AT_PI_FLSH"):
return 93;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 94;
case joaat("COMPONENT_PISTOL50_VARMOD_LUXE"):
return 176;
}
break;
case joaat("WEAPON_ASSAULTSNIPER"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTSNIPER_CLIP_01"):
return 95;
case joaat("COMPONENT_AT_SCOPE_LARGE"):
return 96;
case joaat("COMPONENT_AT_SCOPE_MAX"):
return 97;
case joaat("COMPONENT_AT_AR_SUPP"):
return 98;
}
break;
case joaat("WEAPON_ASSAULTMG"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTMG_CLIP_01"):
return 105;
case joaat("COMPONENT_ASSAULTMG_CLIP_02"):
return 106;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 107;
case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
return 108;
}
break;
case joaat("WEAPON_PROGRAMMABLEAR"):
switch (iParam0){
case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_01"):
return 109;
case joaat("COMPONENT_PROGRAMMABLEAR_CLIP_02"):
return 110;
}
break;
case joaat("WEAPON_SPECIALCARBINE"):
switch (iParam0){
case joaat("COMPONENT_SPECIALCARBINE_CLIP_01"):
return 111;
case joaat("COMPONENT_SPECIALCARBINE_CLIP_02"):
return 112;
case joaat("COMPONENT_SPECIALCARBINE_CLIP_03"):
return 208;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 113;
case joaat("COMPONENT_AT_AR_FLSH"):
return 114;
case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
return 115;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 116;
case joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER"):
return 190;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 390;
}
break;
case joaat("WEAPON_SNSPISTOL"):
switch (iParam0){
case joaat("COMPONENT_SNSPISTOL_CLIP_01"):
return 117;
case joaat("COMPONENT_SNSPISTOL_CLIP_02"):
return 118;
case joaat("COMPONENT_AT_PI_FLSH"):
return 119;
case joaat("COMPONENT_AT_PI_SUPP"):
return 120;
case joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER"):
return 191;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 391;
}
break;
case joaat("WEAPON_HEAVYPISTOL"):
switch (iParam0){
case joaat("COMPONENT_HEAVYPISTOL_CLIP_01"):
return 121;
case joaat("COMPONENT_HEAVYPISTOL_CLIP_02"):
return 122;
case joaat("COMPONENT_AT_PI_FLSH"):
return 123;
case joaat("COMPONENT_AT_PI_SUPP"):
return 124;
case joaat("COMPONENT_HEAVYPISTOL_VARMOD_LUXE"):
return 171;
}
break;
case joaat("WEAPON_BULLPUPRIFLE"):
switch (iParam0){
case joaat("COMPONENT_BULLPUPRIFLE_CLIP_01"):
return 131;
case joaat("COMPONENT_BULLPUPRIFLE_CLIP_02"):
return 132;
case joaat("COMPONENT_AT_AR_FLSH"):
return 127;
case joaat("COMPONENT_AT_AR_SUPP"):
return 128;
case joaat("COMPONENT_AT_SCOPE_SMALL"):
return 129;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 130;
case joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW"):
return 192;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 394;
}
break;
case joaat("WEAPON_GUSENBERG"):
switch (iParam0){
case joaat("COMPONENT_GUSENBERG_CLIP_01"):
return 125;
case joaat("COMPONENT_GUSENBERG_CLIP_02"):
return 126;
}
break;
case joaat("WEAPON_VINTAGEPISTOL"):
switch (iParam0){
case joaat("COMPONENT_VINTAGEPISTOL_CLIP_01"):
return 133;
case joaat("COMPONENT_VINTAGEPISTOL_CLIP_02"):
return 134;
case joaat("COMPONENT_AT_PI_SUPP"):
return 136;
}
break;
case joaat("WEAPON_HEAVYSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_01"):
return 137;
case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_02"):
return 140;
case joaat("COMPONENT_HEAVYSHOTGUN_CLIP_03"):
return 205;
case joaat("COMPONENT_AT_AR_FLSH"):
return 145;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 146;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 147;
}
break;
case joaat("WEAPON_MARKSMANRIFLE"):
switch (iParam0){
case joaat("COMPONENT_MARKSMANRIFLE_CLIP_01"):
return 138;
case joaat("COMPONENT_MARKSMANRIFLE_CLIP_02"):
return 139;
case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM"):
return 141;
case joaat("COMPONENT_AT_AR_FLSH"):
return 142;
case joaat("COMPONENT_AT_AR_SUPP"):
return 143;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 144;
case joaat("COMPONENT_MARKSMANRIFLE_VARMOD_LUXE"):
return 172;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 392;
}
break;
case joaat("WEAPON_COMBATPDW"):
switch (iParam0){
case joaat("COMPONENT_COMBATPDW_CLIP_01"):
return 149;
case joaat("COMPONENT_COMBATPDW_CLIP_02"):
return 150;
case joaat("COMPONENT_COMBATPDW_CLIP_03"):
return 203;
case joaat("COMPONENT_AT_AR_FLSH"):
return 151;
case joaat("COMPONENT_AT_SCOPE_SMALL"):
return 152;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 153;
}
break;
case joaat("WEAPON_SAWNOFFSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE"):
return 178;
}
break;
case joaat("WEAPON_MARKSMANPISTOL"):
switch (iParam0){
case joaat("COMPONENT_MARKSMANPISTOL_CLIP_01"):
return 148;
}
break;
case joaat("WEAPON_KNUCKLE"):
switch (iParam0){
case joaat("COMPONENT_KNUCKLE_VARMOD_PIMP"):
return 154;
case joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS"):
return 155;
case joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR"):
return 156;
case joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND"):
return 157;
case joaat("COMPONENT_KNUCKLE_VARMOD_HATE"):
return 158;
case joaat("COMPONENT_KNUCKLE_VARMOD_LOVE"):
return 159;
case joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER"):
return 160;
case joaat("COMPONENT_KNUCKLE_VARMOD_KING"):
return 161;
case joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS"):
return 162;
}
break;
case joaat("WEAPON_MACHINEPISTOL"):
switch (iParam0){
case joaat("COMPONENT_MACHINEPISTOL_CLIP_01"):
return 184;
case joaat("COMPONENT_MACHINEPISTOL_CLIP_02"):
return 185;
case joaat("COMPONENT_MACHINEPISTOL_CLIP_03"):
return 206;
case joaat("COMPONENT_AT_PI_SUPP"):
return 183;
}
break;
case joaat("WEAPON_SWITCHBLADE"):
switch (iParam0){
case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1"):
return 194;
case joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2"):
return 195;
}
break;
case joaat("WEAPON_REVOLVER"):
switch (iParam0){
case joaat("COMPONENT_REVOLVER_CLIP_01"):
return 196;
case joaat("COMPONENT_REVOLVER_VARMOD_BOSS"):
return 197;
case joaat("COMPONENT_REVOLVER_VARMOD_GOON"):
return 198;
case joaat("COMPONENT_GUNRUN_MK2_UPGRADE"):
return 393;
}
break;
case joaat("WEAPON_COMPACTRIFLE"):
switch (iParam0){
case joaat("COMPONENT_COMPACTRIFLE_CLIP_01"):
return 199;
case joaat("COMPONENT_COMPACTRIFLE_CLIP_02"):
return 200;
case joaat("COMPONENT_COMPACTRIFLE_CLIP_03"):
return 204;
}
break;
case joaat("WEAPON_MINISMG"):
switch (iParam0){
case joaat("COMPONENT_MINISMG_CLIP_01"):
return 209;
case joaat("COMPONENT_MINISMG_CLIP_02"):
return 210;
}
break;
case joaat("WEAPON_PISTOL_MK2"):
switch (iParam0){
case joaat("COMPONENT_PISTOL_MK2_CLIP_01"):
return 217;
case joaat("COMPONENT_PISTOL_MK2_CLIP_02"):
return 218;
case joaat("COMPONENT_PISTOL_MK2_CLIP_FMJ"):
return 219;
case joaat("COMPONENT_PISTOL_MK2_CLIP_HOLLOWPOINT"):
return 220;
case joaat("COMPONENT_PISTOL_MK2_CLIP_INCENDIARY"):
return 221;
case joaat("COMPONENT_PISTOL_MK2_CLIP_TRACER"):
return 222;
case joaat("COMPONENT_AT_PI_FLSH_02"):
return 223;
case joaat("COMPONENT_AT_PI_RAIL"):
return 224;
case joaat("COMPONENT_AT_PI_SUPP_02"):
return 225;
case joaat("COMPONENT_AT_PI_COMP"):
return 226;
case joaat("COMPONENT_PISTOL_MK2_CAMO"):
return 367;
case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
return 368;
case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
return 369;
case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
return 370;
case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
return 371;
case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
return 372;
case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
return 373;
case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
return 374;
case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
return 375;
case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
return 376;
case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
return 377;
case 1141184690:
return 601;
}
break;
case joaat("WEAPON_SMG_MK2"):
switch (iParam0){
case joaat("COMPONENT_SMG_MK2_CLIP_01"):
return 227;
case joaat("COMPONENT_SMG_MK2_CLIP_02"):
return 228;
case joaat("COMPONENT_SMG_MK2_CLIP_FMJ"):
return 229;
case joaat("COMPONENT_SMG_MK2_CLIP_HOLLOWPOINT"):
return 230;
case joaat("COMPONENT_SMG_MK2_CLIP_INCENDIARY"):
return 231;
case joaat("COMPONENT_SMG_MK2_CLIP_TRACER"):
return 232;
case joaat("COMPONENT_AT_AR_FLSH"):
return 233;
case joaat("COMPONENT_AT_SIGHTS_SMG"):
return 234;
case joaat("COMPONENT_AT_SCOPE_MACRO_02_SMG_MK2"):
return 235;
case joaat("COMPONENT_AT_SCOPE_SMALL_SMG_MK2"):
return 236;
case joaat("COMPONENT_AT_PI_SUPP"):
return 237;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 238;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 239;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 240;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 241;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 242;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 243;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 244;
case joaat("COMPONENT_AT_SB_BARREL_01"):
return 245;
case joaat("COMPONENT_AT_SB_BARREL_02"):
return 246;
case joaat("COMPONENT_SMG_MK2_CAMO"):
return 378;
case joaat("COMPONENT_SMG_MK2_CAMO_02"):
return 379;
case joaat("COMPONENT_SMG_MK2_CAMO_03"):
return 380;
case joaat("COMPONENT_SMG_MK2_CAMO_04"):
return 381;
case joaat("COMPONENT_SMG_MK2_CAMO_05"):
return 382;
case joaat("COMPONENT_SMG_MK2_CAMO_06"):
return 383;
case joaat("COMPONENT_SMG_MK2_CAMO_07"):
return 384;
case joaat("COMPONENT_SMG_MK2_CAMO_08"):
return 385;
case joaat("COMPONENT_SMG_MK2_CAMO_09"):
return 386;
case joaat("COMPONENT_SMG_MK2_CAMO_10"):
return 387;
case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
return 388;
}
break;
case joaat("WEAPON_HEAVYSNIPER_MK2"):
switch (iParam0){
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_01"):
return 247;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_02"):
return 248;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_ARMORPIERCING"):
return 249;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_EXPLOSIVE"):
return 250;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_FMJ"):
return 251;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CLIP_INCENDIARY"):
return 252;
case joaat("COMPONENT_AT_SCOPE_LARGE_MK2"):
return 253;
case joaat("COMPONENT_AT_SCOPE_MAX"):
return 254;
case joaat("COMPONENT_AT_SCOPE_NV"):
return 255;
case joaat("COMPONENT_AT_SCOPE_THERMAL"):
return 256;
case joaat("COMPONENT_AT_SR_SUPP_03"):
return 257;
case joaat("COMPONENT_AT_MUZZLE_08"):
return 258;
case joaat("COMPONENT_AT_MUZZLE_09"):
return 259;
case joaat("COMPONENT_AT_SR_BARREL_01"):
return 260;
case joaat("COMPONENT_AT_SR_BARREL_02"):
return 261;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
return 356;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
return 357;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
return 358;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
return 359;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
return 360;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
return 361;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
return 362;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
return 363;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
return 364;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
return 365;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
return 366;
}
break;
case joaat("WEAPON_COMBATMG_MK2"):
switch (iParam0){
case joaat("COMPONENT_COMBATMG_MK2_CLIP_01"):
return 262;
case joaat("COMPONENT_COMBATMG_MK2_CLIP_02"):
return 263;
case joaat("COMPONENT_COMBATMG_MK2_CLIP_ARMORPIERCING"):
return 264;
case joaat("COMPONENT_COMBATMG_MK2_CLIP_FMJ"):
return 265;
case joaat("COMPONENT_COMBATMG_MK2_CLIP_INCENDIARY"):
return 266;
case joaat("COMPONENT_COMBATMG_MK2_CLIP_TRACER"):
return 267;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 268;
case joaat("COMPONENT_AT_SIGHTS"):
return 269;
case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
return 270;
case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
return 271;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 272;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 273;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 274;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 275;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 276;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 277;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 278;
case joaat("COMPONENT_AT_MG_BARREL_01"):
return 279;
case joaat("COMPONENT_AT_MG_BARREL_02"):
return 280;
case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
return 345;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
return 346;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
return 347;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
return 348;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
return 349;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
return 350;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
return 351;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
return 352;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
return 353;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
return 354;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
return 355;
}
break;
case joaat("WEAPON_ASSAULTRIFLE_MK2"):
switch (iParam0){
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_01"):
return 281;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_02"):
return 282;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_ARMORPIERCING"):
return 283;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_FMJ"):
return 284;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_INCENDIARY"):
return 285;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CLIP_TRACER"):
return 286;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 287;
case joaat("COMPONENT_AT_AR_FLSH"):
return 288;
case joaat("COMPONENT_AT_SIGHTS"):
return 289;
case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
return 290;
case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
return 291;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 292;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 293;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 294;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 295;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 296;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 297;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 298;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 299;
case joaat("COMPONENT_AT_AR_BARREL_01"):
return 300;
case joaat("COMPONENT_AT_AR_BARREL_02"):
return 301;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
return 323;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
return 324;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
return 325;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
return 326;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
return 327;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
return 328;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
return 329;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
return 330;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
return 331;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
return 332;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
return 333;
}
break;
case joaat("WEAPON_CARBINERIFLE_MK2"):
switch (iParam0){
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_01"):
return 302;
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_02"):
return 303;
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_ARMORPIERCING"):
return 304;
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_FMJ"):
return 305;
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_INCENDIARY"):
return 306;
case joaat("COMPONENT_CARBINERIFLE_MK2_CLIP_TRACER"):
return 307;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 308;
case joaat("COMPONENT_AT_AR_FLSH"):
return 309;
case joaat("COMPONENT_AT_SIGHTS"):
return 310;
case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
return 311;
case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
return 312;
case joaat("COMPONENT_AT_AR_SUPP"):
return 313;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 314;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 315;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 316;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 317;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 318;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 319;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 320;
case joaat("COMPONENT_AT_CR_BARREL_01"):
return 321;
case joaat("COMPONENT_AT_CR_BARREL_02"):
return 322;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
return 334;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
return 335;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
return 336;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
return 337;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
return 338;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
return 339;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
return 340;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
return 341;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
return 342;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
return 343;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
return 344;
}
break;
case joaat("WEAPON_PUMPSHOTGUN_MK2"):
switch (iParam0){
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_01"):
return 395;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_ARMORPIERCING"):
return 396;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_EXPLOSIVE"):
return 397;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_HOLLOWPOINT"):
return 398;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CLIP_INCENDIARY"):
return 399;
case joaat("COMPONENT_AT_AR_FLSH"):
return 400;
case joaat("COMPONENT_AT_SIGHTS"):
return 401;
case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
return 402;
case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
return 403;
case joaat("COMPONENT_AT_SR_SUPP_03"):
return 404;
case joaat("COMPONENT_AT_MUZZLE_08"):
return 405;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
return 488;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
return 489;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
return 490;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
return 491;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
return 492;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
return 493;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
return 494;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
return 495;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
return 496;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
return 497;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
return 498;
}
break;
case joaat("WEAPON_SPECIALCARBINE_MK2"):
switch (iParam0){
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_01"):
return 406;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_02"):
return 407;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_ARMORPIERCING"):
return 408;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_FMJ"):
return 409;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_INCENDIARY"):
return 410;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CLIP_TRACER"):
return 411;
case joaat("COMPONENT_AT_AR_FLSH"):
return 412;
case joaat("COMPONENT_AT_SIGHTS"):
return 413;
case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
return 414;
case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
return 415;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 416;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 417;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 418;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 419;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 420;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 421;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 422;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 423;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 424;
case joaat("COMPONENT_AT_SC_BARREL_01"):
return 425;
case joaat("COMPONENT_AT_SC_BARREL_02"):
return 426;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
return 532;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
return 533;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
return 534;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
return 535;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
return 536;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
return 537;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
return 538;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
return 539;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
return 540;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
return 541;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
return 542;
}
break;
case joaat("WEAPON_SNSPISTOL_MK2"):
switch (iParam0){
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_01"):
return 427;
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_02"):
return 428;
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_FMJ"):
return 429;
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_HOLLOWPOINT"):
return 430;
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_INCENDIARY"):
return 431;
case joaat("COMPONENT_SNSPISTOL_MK2_CLIP_TRACER"):
return 432;
case joaat("COMPONENT_AT_PI_FLSH_03"):
return 433;
case joaat("COMPONENT_AT_PI_RAIL_02"):
return 434;
case joaat("COMPONENT_AT_PI_SUPP_02"):
return 435;
case joaat("COMPONENT_AT_PI_COMP_02"):
return 436;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
return 510;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
return 511;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
return 512;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
return 513;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
return 514;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
return 515;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
return 516;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
return 517;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
return 518;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
return 519;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
return 520;
}
break;
case joaat("WEAPON_MARKSMANRIFLE_MK2"):
switch (iParam0){
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_01"):
return 437;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_02"):
return 438;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_ARMORPIERCING"):
return 439;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_FMJ"):
return 440;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_INCENDIARY"):
return 441;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CLIP_TRACER"):
return 442;
case joaat("COMPONENT_AT_AR_FLSH"):
return 443;
case joaat("COMPONENT_AT_SIGHTS"):
return 444;
case joaat("COMPONENT_AT_SCOPE_MEDIUM_MK2"):
return 445;
case joaat("COMPONENT_AT_SCOPE_LARGE_FIXED_ZOOM_MK2"):
return 446;
case joaat("COMPONENT_AT_AR_SUPP"):
return 447;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 448;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 449;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 450;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 451;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 452;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 453;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 454;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 455;
case joaat("COMPONENT_AT_MRFL_BARREL_01"):
return 456;
case joaat("COMPONENT_AT_MRFL_BARREL_02"):
return 457;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
return 521;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
return 522;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
return 523;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
return 524;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
return 525;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
return 526;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
return 527;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
return 528;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
return 529;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
return 530;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
return 531;
}
break;
case joaat("WEAPON_REVOLVER_MK2"):
switch (iParam0){
case joaat("COMPONENT_REVOLVER_MK2_CLIP_01"):
return 458;
case joaat("COMPONENT_REVOLVER_MK2_CLIP_FMJ"):
return 459;
case joaat("COMPONENT_REVOLVER_MK2_CLIP_HOLLOWPOINT"):
return 460;
case joaat("COMPONENT_REVOLVER_MK2_CLIP_INCENDIARY"):
return 461;
case joaat("COMPONENT_REVOLVER_MK2_CLIP_TRACER"):
return 462;
case joaat("COMPONENT_AT_SIGHTS"):
return 463;
case joaat("COMPONENT_AT_SCOPE_MACRO_MK2"):
return 464;
case joaat("COMPONENT_AT_PI_FLSH"):
return 465;
case joaat("COMPONENT_AT_PI_COMP_03"):
return 466;
case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
return 499;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
return 500;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
return 501;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
return 502;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
return 503;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
return 504;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
return 505;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
return 506;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
return 507;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
return 508;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
return 509;
}
break;
case joaat("WEAPON_BULLPUPRIFLE_MK2"):
switch (iParam0){
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_01"):
return 467;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_02"):
return 468;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_ARMORPIERCING"):
return 469;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_FMJ"):
return 470;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_INCENDIARY"):
return 471;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CLIP_TRACER"):
return 472;
case joaat("COMPONENT_AT_AR_FLSH"):
return 473;
case joaat("COMPONENT_AT_SIGHTS"):
return 474;
case joaat("COMPONENT_AT_SCOPE_MACRO_02_MK2"):
return 475;
case joaat("COMPONENT_AT_SCOPE_SMALL_MK2"):
return 476;
case joaat("COMPONENT_AT_BP_BARREL_01"):
return 477;
case joaat("COMPONENT_AT_BP_BARREL_02"):
return 478;
case joaat("COMPONENT_AT_AR_SUPP"):
return 479;
case joaat("COMPONENT_AT_MUZZLE_01"):
return 480;
case joaat("COMPONENT_AT_MUZZLE_02"):
return 481;
case joaat("COMPONENT_AT_MUZZLE_03"):
return 482;
case joaat("COMPONENT_AT_MUZZLE_04"):
return 483;
case joaat("COMPONENT_AT_MUZZLE_05"):
return 484;
case joaat("COMPONENT_AT_MUZZLE_06"):
return 485;
case joaat("COMPONENT_AT_MUZZLE_07"):
return 486;
case joaat("COMPONENT_AT_AR_AFGRIP_02"):
return 487;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
return 543;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
return 544;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
return 545;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
return 546;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
return 547;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
return 548;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
return 549;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
return 550;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
return 551;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
return 552;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
return 553;
}
break;
case joaat("WEAPON_RAYPISTOL"):
switch (iParam0){
case joaat("COMPONENT_RAYPISTOL_VARMOD_XMAS18"):
return 554;
}
break;
case joaat("WEAPON_CERAMICPISTOL"):
switch (iParam0){
case joaat("COMPONENT_CERAMICPISTOL_CLIP_01"):
return 555;
case joaat("COMPONENT_CERAMICPISTOL_CLIP_02"):
return 556;
case joaat("COMPONENT_CERAMICPISTOL_SUPP"):
return 557;
}
break;
case joaat("WEAPON_COMBATSHOTGUN"):
switch (iParam0){
case joaat("COMPONENT_COMBATSHOTGUN_CLIP_01"):
return 559;
case joaat("COMPONENT_AT_AR_FLSH"):
return 560;
case joaat("COMPONENT_AT_AR_SUPP"):
return 561;
}
break;
case joaat("WEAPON_MILITARYRIFLE"):
switch (iParam0){
case joaat("COMPONENT_MILITARYRIFLE_CLIP_01"):
return 562;
case joaat("COMPONENT_MILITARYRIFLE_CLIP_02"):
return 563;
case joaat("COMPONENT_MILITARYRIFLE_SIGHT_01"):
return 564;
case joaat("COMPONENT_AT_SCOPE_SMALL"):
return 565;
case joaat("COMPONENT_AT_AR_FLSH"):
return 566;
case joaat("COMPONENT_AT_AR_SUPP"):
return 567;
}
break;
case joaat("WEAPON_GADGETPISTOL"):
switch (iParam0){
case joaat("COMPONENT_GADGETPISTOL_CLIP_01"):
return 558;
}
break;
case joaat("WEAPON_HEAVYRIFLE"):
switch (iParam0){
case joaat("COMPONENT_HEAVYRIFLE_CLIP_01"):
return 99;
case joaat("COMPONENT_HEAVYRIFLE_CLIP_02"):
return 100;
case joaat("COMPONENT_HEAVYRIFLE_CAMO1"):
return 568;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 101;
case joaat("COMPONENT_AT_AR_FLSH"):
return 102;
case joaat("COMPONENT_AT_SCOPE_MEDIUM"):
return 103;
case joaat("COMPONENT_AT_AR_SUPP"):
return 104;
case joaat("COMPONENT_HEAVYRIFLE_SIGHT_01"):
return 572;
}
break;
case joaat("WEAPON_TACTICALRIFLE"):
switch (iParam0){
case joaat("COMPONENT_TACTICALRIFLE_CLIP_01"):
return 573;
case joaat("COMPONENT_TACTICALRIFLE_CLIP_02"):
return 574;
case joaat("COMPONENT_AT_AR_FLSH_REH"):
return 575;
case joaat("COMPONENT_AT_AR_SUPP_02"):
return 576;
case joaat("COMPONENT_AT_AR_AFGRIP"):
return 577;
}
break;
case 465894841:
switch (iParam0){
case 375646046:
return 578;
case 503494624:
return 579;
}
break;
case -22923932:
switch (iParam0){
case 1130760338:
return 580;
}
break;
case joaat("WEAPON_BAT"):
switch (iParam0){
case 716207715:
return 581;
case 446271089:
return 583;
case 1045616099:
return 584;
case 1336277129:
return 585;
case -513369076:
return 586;
case -447700000:
return 587;
case -149207179:
return 588;
case 166784288:
return 589;
case 2068729789:
return 590;
case 1761389338:
return 591;
}
break;
case joaat("WEAPON_KNIFE"):
switch (iParam0){
case 370527443:
return 582;
case 1109907117:
return 592;
case 2055456612:
return 593;
case 1690606566:
return 594;
case -1633316949:
return 595;
case -1461476313:
return 596;
case -1770422457:
return 597;
case -2059739958:
return 598;
case -1280001599:
return 599;
case -922885037:
return 600;
}
break;
}
return 0;
}

int func_495(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x32250{
var outValue;
int num;
int num2;
num=func_493(iParam2, iParam1);
num2=func_491(num);
switch (num2){
case 0:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_0"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_0"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_0"), &outValue, -1);
break;
}
break;
case 1:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_1"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_1"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_1"), &outValue, -1);
break;
}
break;
case 2:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_2"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_2"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_2"), &outValue, -1);
break;
}
break;
case 3:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_3"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_3"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_3"), &outValue, -1);
break;
}
break;
case 4:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_4"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_4"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_4"), &outValue, -1);
break;
}
break;
case 5:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_5"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_5"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_5"), &outValue, -1);
break;
}
break;
case 6:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_ADDON_UNLOCK_6"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_ADDON_UNLOCK_6"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_ADDON_UNLOCK_6"), &outValue, -1);
break;
}
break;
default:
break;
}
return outValue;
}

int func_496(int iParam0, int iParam1) // Position - 0x324B4{
int num;
int dlcWeaponIndex;
int i;
int num2;
var unk;
var ComponentDataPtr;
num=0;
switch (iParam0){
case joaat("WEAPON_PISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_PISTOL_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_PISTOL_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_PI_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_PISTOL_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_COMBATPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_COMBATPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_COMBATPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 4:
num=joaat("COMPONENT_COMBATPISTOL_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_APPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_APPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_APPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 4:
num=joaat("COMPONENT_APPISTOL_VARMOD_LUXE");
break;
case 5:
num=joaat("COMPONENT_APPISTOL_VARMOD_SECURITY");
break;
}
break;
case joaat("WEAPON_MICROSMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MICROSMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MICROSMG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_MICROSMG_VARMOD_LUXE");
break;
case 6:
num=joaat("COMPONENT_MICROSMG_VARMOD_SECURITY");
break;
}
break;
case joaat("WEAPON_SMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_SMG_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_SMG_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_SMG_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 5:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
case 6:
num=joaat("COMPONENT_AT_SCOPE_MACRO_02");
break;
case 7:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 8:
num=joaat("COMPONENT_SMG_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_ASSAULTRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_ASSAULTRIFLE_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 5:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 6:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 7:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 8:
num=joaat("COMPONENT_ASSAULTRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_CARBINERIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_CARBINERIFLE_CLIP_03");
break;
case 4:
num=joaat("COMPONENT_AT_RAILCOVER_01");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 6:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 7:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 8:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 9:
num=joaat("COMPONENT_CARBINERIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_ADVANCEDRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ADVANCEDRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ADVANCEDRIFLE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 5:
num=joaat("COMPONENT_ADVANCEDRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_MG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_SMALL_02");
break;
case 3:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 4:
num=joaat("COMPONENT_MG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_COMBATMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_COMBATMG_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_COMBATMG_CLIP_02");
break;
case 3:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 5:
num=joaat("COMPONENT_COMBATMG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_PUMPSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_SR_SUPP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_PUMPSHOTGUN_VARMOD_LOWRIDER");
break;
case 3:
num=joaat("COMPONENT_PUMPSHOTGUN_VARMOD_SECURITY");
break;
case 4:
num=330905451;
break;
}
break;
case joaat("WEAPON_ASSAULTSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ASSAULTSHOTGUN_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
}
break;
case joaat("WEAPON_SNIPERRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SNIPERRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_AT_SCOPE_LARGE");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_MAX");
break;
case 3:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 4:
num=joaat("COMPONENT_SNIPERRIFLE_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_HEAVYSNIPER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_GUNRUN_MK2_UPGRADE");
break;
case 1:
num=joaat("COMPONENT_HEAVYSNIPER_CLIP_01");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_LARGE");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MAX");
break;
}
break;
case joaat("WEAPON_GRENADELAUNCHER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
}
break;
case joaat("WEAPON_MINIGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MINIGUN_CLIP_01");
break;
}
break;
case joaat("WEAPON_ASSAULTSMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_ASSAULTSMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_ASSAULTSMG_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_MACRO");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 5:
num=joaat("COMPONENT_ASSAULTSMG_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_BULLPUPSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 1:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 2:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
}
break;
case joaat("WEAPON_PISTOL50"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_PISTOL50_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_PISTOL50_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_PI_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 4:
num=joaat("COMPONENT_PISTOL50_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_COMBATPDW"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_COMBATPDW_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_COMBATPDW_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_COMBATPDW_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
}
break;
case joaat("WEAPON_SAWNOFFSHOTGUN"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SAWNOFFSHOTGUN_VARMOD_LUXE");
break;
}
break;
case joaat("WEAPON_BULLPUPRIFLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_BULLPUPRIFLE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_BULLPUPRIFLE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 3:
num=joaat("COMPONENT_AT_SCOPE_SMALL");
break;
case 4:
num=joaat("COMPONENT_AT_AR_SUPP");
break;
case 5:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 6:
num=joaat("COMPONENT_BULLPUPRIFLE_VARMOD_LOW");
break;
}
break;
case joaat("WEAPON_SNSPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SNSPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_SNSPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_SNSPISTOL_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_SPECIALCARBINE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_SPECIALCARBINE_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_AR_FLSH");
break;
case 4:
num=joaat("COMPONENT_AT_SCOPE_MEDIUM");
break;
case 5:
num=joaat("COMPONENT_AT_AR_SUPP_02");
break;
case 6:
num=joaat("COMPONENT_AT_AR_AFGRIP");
break;
case 7:
num=joaat("COMPONENT_SPECIALCARBINE_VARMOD_LOWRIDER");
break;
}
break;
case joaat("WEAPON_KNUCKLE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_KNUCKLE_VARMOD_PIMP");
break;
case 1:
num=joaat("COMPONENT_KNUCKLE_VARMOD_BALLAS");
break;
case 2:
num=joaat("COMPONENT_KNUCKLE_VARMOD_DOLLAR");
break;
case 3:
num=joaat("COMPONENT_KNUCKLE_VARMOD_DIAMOND");
break;
case 4:
num=joaat("COMPONENT_KNUCKLE_VARMOD_HATE");
break;
case 5:
num=joaat("COMPONENT_KNUCKLE_VARMOD_LOVE");
break;
case 6:
num=joaat("COMPONENT_KNUCKLE_VARMOD_PLAYER");
break;
case 7:
num=joaat("COMPONENT_KNUCKLE_VARMOD_KING");
break;
case 8:
num=joaat("COMPONENT_KNUCKLE_VARMOD_VAGOS");
break;
}
break;
case joaat("WEAPON_MACHINEPISTOL"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_02");
break;
case 2:
num=joaat("COMPONENT_MACHINEPISTOL_CLIP_03");
break;
case 3:
num=joaat("COMPONENT_AT_PI_SUPP");
break;
}
break;
case joaat("WEAPON_SWITCHBLADE"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR1");
break;
case 1:
num=joaat("COMPONENT_SWITCHBLADE_VARMOD_VAR2");
break;
}
break;
case joaat("WEAPON_REVOLVER"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_REVOLVER_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_REVOLVER_VARMOD_BOSS");
break;
case 2:
num=joaat("COMPONENT_REVOLVER_VARMOD_GOON");
break;
}
break;
case joaat("WEAPON_MINISMG"):
switch (iParam1){
case 0:
num=joaat("COMPONENT_MINISMG_CLIP_01");
break;
case 1:
num=joaat("COMPONENT_MINISMG_CLIP_02");
break;
}
break;
case joaat("WEAPON_BAT"):
switch (iParam1){
case 0:
num=716207715;
break;
case 1:
num=446271089;
break;
case 2:
num=1045616099;
break;
case 3:
num=1336277129;
break;
case 4:
num=-513369076;
break;
case 5:
num=-447700000;
break;
case 6:
num=-149207179;
break;
case 7:
num=166784288;
break;
case 8:
num=2068729789;
break;
case 9:
num=1761389338;
break;
}
break;
default:
if(iParam0 !=0){
dlcWeaponIndex=func_498(iParam0, &unk);
if(dlcWeaponIndex !=-1){
for (i=0;
i < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(dlcWeaponIndex);
i=i + 1){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(dlcWeaponIndex, i, &ComponentDataPtr)){
if(!func_497(ComponentDataPtr.f_3)){
if(num2==iParam1) return ComponentDataPtr.f_3;
num2=num2 + 1;
}
}}}}
break;
}
return num;
}
BOOL func_497(int iParam0) // Position - 0x33115{
switch (iParam0){
case joaat("COMPONENT_PISTOL_MK2_CAMO_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_02_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_03_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_04_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_05_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_06_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_07_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_08_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_09_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_10_SLIDE"):
case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10_SLIDE"):
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01_SLIDE"):
case 1011473080:
return true;
}
return false;
}

int func_498(int iParam0, Any* panParam1) // Position - 0x331B6{
int i;
int numDlcWeapons;
numDlcWeapons=FILES::GET_NUM_DLC_WEAPONS();
for (i=0;
i < numDlcWeapons;
i=i + 1){
if(FILES::GET_DLC_WEAPON_DATA(i, panParam1))if(panParam1->f_1==iParam0) return i;
}
return -1;
}


void func_499(eCharacter echParam0, int iParam1, int iParam2) // Position - 0x331F1{
int num;
int num2;
num=func_502(iParam1);
num2=func_500(num);
switch (num2){
case 0:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_0"), iParam2, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_0"), iParam2, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_0"), iParam2, true);
break;
}
break;
case 1:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_1"), iParam2, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_1"), iParam2, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_1"), iParam2, true);
break;
}
break;
case 2:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_SET_INT(joaat("SP0_WEAP_UNLOCK_2"), iParam2, true);
break;
case CHAR_FRANKLIN:
STATS::STAT_SET_INT(joaat("SP1_WEAP_UNLOCK_2"), iParam2, true);
break;
case CHAR_TREVOR:
STATS::STAT_SET_INT(joaat("SP2_WEAP_UNLOCK_2"), iParam2, true);
break;
}
break;
default:
break;
}
return;
}

int func_500(int iParam0) // Position - 0x33309{
return iParam0 / 32;
}

int func_501(int iParam0) // Position - 0x33316{
return iParam0 % 32;
}

int func_502(int iParam0) // Position - 0x33323{
return func_503(iParam0);
}

int func_503(int iParam0) // Position - 0x33331{
switch (iParam0){
case joaat("WEAPON_UNARMED"):
return 0;
case joaat("WEAPON_PISTOL"):
return 1;
case joaat("WEAPON_COMBATPISTOL"):
return 2;
case joaat("WEAPON_APPISTOL"):
return 3;
case joaat("WEAPON_PISTOL50"):
return 4;
case joaat("WEAPON_SMG"):
return 5;
case joaat("WEAPON_ASSAULTSMG"):
return 6;
case joaat("WEAPON_MICROSMG"):
return 7;
case joaat("WEAPON_ASSAULTRIFLE"):
return 8;
case joaat("WEAPON_CARBINERIFLE"):
return 9;
case joaat("WEAPON_ADVANCEDRIFLE"):
return 11;
case joaat("WEAPON_MG"):
return 12;
case joaat("WEAPON_COMBATMG"):
return 13;
case joaat("WEAPON_ASSAULTMG"):
return 14;
case joaat("WEAPON_STICKYBOMB"):
return 15;
case joaat("WEAPON_GRENADE"):
return 16;
case joaat("WEAPON_SMOKEGRENADE"):
return 17;
case joaat("WEAPON_REMOTESNIPER"):
return 18;
case joaat("WEAPON_ASSAULTSNIPER"):
return 19;
case joaat("WEAPON_SNIPERRIFLE"):
return 20;
case joaat("WEAPON_HEAVYSNIPER"):
return 21;
case joaat("WEAPON_PUMPSHOTGUN"):
return 22;
case joaat("WEAPON_BULLPUPSHOTGUN"):
return 23;
case joaat("WEAPON_ASSAULTSHOTGUN"):
return 24;
case joaat("WEAPON_SAWNOFFSHOTGUN"):
return 25;
case joaat("WEAPON_GRENADELAUNCHER"):
return 26;
case joaat("WEAPON_RPG"):
return 27;
case joaat("WEAPON_MINIGUN"):
return 28;
case joaat("WEAPON_LOUDHAILER"):
return 29;
case joaat("WEAPON_PROGRAMMABLEAR"):
return 30;
case joaat("WEAPON_STUNGUN"):
return 31;
case joaat("WEAPON_RUBBERGUN"):
return 32;
case joaat("GADGET_PARACHUTE"):
return 33;
case joaat("WEAPON_KNIFE"):
return 34;
case joaat("WEAPON_NIGHTSTICK"):
return 35;
case joaat("WEAPON_HAMMER"):
return 36;
case joaat("WEAPON_BAT"):
return 37;
case joaat("WEAPON_CROWBAR"):
return 38;
case joaat("WEAPON_GOLFCLUB"):
return 39;
case joaat("WEAPON_GRENADELAUNCHER_SMOKE"):
return 40;
case joaat("WEAPON_MOLOTOV"):
return 41;
case joaat("WEAPON_FIREEXTINGUISHER"):
return 42;
case joaat("WEAPON_PETROLCAN"):
return 43;
case joaat("WEAPON_DIGISCANNER"):
return 44;
case joaat("WEAPON_BOTTLE"):
return 45;
case joaat("WEAPON_SPECIALCARBINE"):
return 46;
case joaat("WEAPON_SNSPISTOL"):
return 47;
case joaat("WEAPON_HEAVYPISTOL"):
return 49;
case joaat("WEAPON_BULLPUPRIFLE"):
return 48;
case joaat("WEAPON_GUSENBERG"):
return 50;
case joaat("WEAPON_DAGGER"):
return 51;
case joaat("WEAPON_VINTAGEPISTOL"):
return 52;
case joaat("WEAPON_FLAREGUN"):
return 57;
case joaat("WEAPON_MUSKET"):
return 53;
case joaat("WEAPON_FIREWORK"):
return 54;
case joaat("WEAPON_MARKSMANRIFLE"):
return 56;
case joaat("WEAPON_HEAVYSHOTGUN"):
return 55;
case joaat("WEAPON_PROXMINE"):
return 60;
case joaat("WEAPON_HOMINGLAUNCHER"):
return 61;
case joaat("WEAPON_HATCHET"):
return 58;
case joaat("WEAPON_RAILGUN"):
return 59;
case joaat("WEAPON_COMBATPDW"):
return 64;
case joaat("WEAPON_KNUCKLE"):
return 62;
case joaat("WEAPON_MARKSMANPISTOL"):
return 63;
case joaat("WEAPON_MACHETE"):
return 65;
case joaat("WEAPON_MACHINEPISTOL"):
return 68;
case joaat("WEAPON_DBSHOTGUN"):
return 66;
case joaat("WEAPON_COMPACTRIFLE"):
return 67;
case joaat("WEAPON_FLASHLIGHT"):
return 69;
case joaat("WEAPON_REVOLVER"):
return 70;
case joaat("WEAPON_SWITCHBLADE"):
return 71;
case joaat("WEAPON_AUTOSHOTGUN"):
return 72;
case joaat("WEAPON_MINISMG"):
return 73;
case joaat("WEAPON_COMPACTLAUNCHER"):
return 74;
case joaat("WEAPON_BATTLEAXE"):
return 75;
case joaat("WEAPON_PIPEBOMB"):
return 76;
case joaat("WEAPON_POOLCUE"):
return 77;
case joaat("WEAPON_WRENCH"):
return 78;
case joaat("WEAPON_ASSAULTRIFLE_MK2"):
return 8;
case joaat("WEAPON_CARBINERIFLE_MK2"):
return 9;
case joaat("WEAPON_COMBATMG_MK2"):
return 13;
case joaat("WEAPON_HEAVYSNIPER_MK2"):
return 21;
case joaat("WEAPON_PISTOL_MK2"):
return 1;
case joaat("WEAPON_SMG_MK2"):
return 5;
case joaat("WEAPON_PUMPSHOTGUN_MK2"):
return 22;
case joaat("WEAPON_SPECIALCARBINE_MK2"):
return 46;
case joaat("WEAPON_SNSPISTOL_MK2"):
return 47;
case joaat("WEAPON_MARKSMANRIFLE_MK2"):
return 56;
case joaat("WEAPON_REVOLVER_MK2"):
return 70;
case joaat("WEAPON_BULLPUPRIFLE_MK2"):
return 48;
case joaat("WEAPON_DOUBLEACTION"):
return 79;
case joaat("WEAPON_STONE_HATCHET"):
return 80;
case joaat("WEAPON_RAYPISTOL"):
return 81;
case joaat("WEAPON_RAYCARBINE"):
return 82;
case joaat("WEAPON_RAYMINIGUN"):
return 83;
case joaat("WEAPON_NAVYREVOLVER"):
return 84;
case joaat("WEAPON_CERAMICPISTOL"):
return 85;
case joaat("WEAPON_COMBATSHOTGUN"):
return 86;
case joaat("WEAPON_MILITARYRIFLE"):
return 88;
case joaat("WEAPON_GADGETPISTOL"):
return 87;
case joaat("WEAPON_HEAVYRIFLE"):
return 10;
case joaat("WEAPON_EMPLAUNCHER"):
return 89;
case joaat("WEAPON_FERTILIZERCAN"):
return 90;
case joaat("WEAPON_STUNGUN_MP"):
return 91;
case joaat("WEAPON_METALDETECTOR"):
return 92;
case joaat("WEAPON_TACTICALRIFLE"):
return 93;
case joaat("WEAPON_PRECISIONRIFLE"):
return 94;
case 465894841:
return 95;
case 1703483498:
return 96;
case -22923932:
return 97;
}
return 0;
}

int func_504(eCharacter echParam0, int iParam1) // Position - 0x3393B{
var outValue;
int num;
int num2;
num=func_502(iParam1);
num2=func_500(num);
switch (num2){
case 0:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_UNLOCK_0"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_UNLOCK_0"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_UNLOCK_0"), &outValue, -1);
break;
}
break;
case 1:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_UNLOCK_1"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_UNLOCK_1"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_UNLOCK_1"), &outValue, -1);
break;
}
break;
case 2:
switch (echParam0){
case CHAR_MICHAEL:
STATS::STAT_GET_INT(joaat("SP0_WEAP_UNLOCK_2"), &outValue, -1);
break;
case CHAR_FRANKLIN:
STATS::STAT_GET_INT(joaat("SP1_WEAP_UNLOCK_2"), &outValue, -1);
break;
case CHAR_TREVOR:
STATS::STAT_GET_INT(joaat("SP2_WEAP_UNLOCK_2"), &outValue, -1);
break;
}
break;
default:
break;
}
return outValue;
}


void func_505(int iParam0, int iParam1, BOOL bParam2) // Position - 0x33A55{
BOOL flag;
if(iParam0==11 || iParam0==-1) return;
if(iParam1 < 0 || iParam1 >=32) return;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
if(flag==bParam2) return;
if(bParam2) MISC::SET_BIT(&Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
else MISC::CLEAR_BIT(&Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return;
}


void func_506(int iParam0, BOOL bParam1) // Position - 0x33AD7{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(bParam1 !=IS_BIT_SET(Global_32543[num /*23*/].f_11, 13)) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 18);
if(bParam1) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 13);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 13);
return;
}


void func_507(int iParam0, BOOL bParam1) // Position - 0x33B4B{
int i;
if(bParam1){
func_289(39, true, false);
func_289(40, true, false);
func_289(41, true, false);
func_289(42, true, false);
func_289(43, true, false);
}
func_508(1, iParam0, 0);
func_508(2, iParam0, 1);
func_508(3, iParam0, 2);
func_508(4, iParam0, 3);
func_508(103, iParam0, 3);
func_508(5, iParam0, 0);
func_508(6, iParam0, 0);
func_508(7, iParam0, 0);
func_508(8, iParam0, 0);
func_508(9, iParam0, 0);
func_508(10, iParam0, 0);
func_508(11, iParam0, 0);
func_508(12, iParam0, 0);
func_508(13, iParam0, 0);
func_508(14, iParam0, 2);
func_508(15, iParam0, 3);
func_508(16, iParam0, 3);
func_508(17, iParam0, 0);
func_508(18, iParam0, 1);
func_508(19, iParam0, 2);
func_508(20, iParam0, 2);
func_508(101, iParam0, 3);
func_508(102, iParam0, 3);
func_508(21, iParam0, 0);
func_508(22, iParam0, 1);
func_508(23, iParam0, 2);
func_508(24, iParam0, 3);
func_508(25, iParam0, 0);
func_508(26, iParam0, 1);
func_508(27, iParam0, 2);
func_508(28, iParam0, 3);
func_508(29, iParam0, 0);
func_508(30, iParam0, 0);
func_508(31, iParam0, 1);
func_508(32, iParam0, 2);
func_508(33, iParam0, 3);
func_508(34, iParam0, 0);
func_508(35, iParam0, 0);
func_508(36, iParam0, 0);
func_508(37, iParam0, 0);
func_508(38, iParam0, 0);
func_508(39, iParam0, 0);
func_508(40, iParam0, 0);
func_508(41, iParam0, 0);
func_508(42, iParam0, 0);
func_508(43, iParam0, 0);
func_508(44, iParam0, 2);
func_508(45, iParam0, 3);
func_508(99, iParam0, 1);
func_508(46, iParam0, 1);
func_508(55, iParam0, 0);
func_508(60, iParam0, 0);
func_508(59, iParam0, 1);
func_508(58, iParam0, 1);
func_508(56, iParam0, 2);
func_508(57, iParam0, 3);
func_508(47, iParam0, 0);
func_508(48, iParam0, 1);
func_508(49, iParam0, 2);
func_508(50, iParam0, 3);
func_508(51, iParam0, 0);
func_508(52, iParam0, 1);
func_508(53, iParam0, 2);
func_508(54, iParam0, 3);
func_508(106, iParam0, 3);
func_508(61, iParam0, 0);
func_508(62, iParam0, 1);
func_508(63, iParam0, 1);
func_508(64, iParam0, 2);
func_508(65, iParam0, 2);
func_508(66, iParam0, 0);
func_508(67, iParam0, 1);
func_508(68, iParam0, 2);
func_508(69, iParam0, 3);
func_508(70, iParam0, 3);
func_508(71, iParam0, 3);
func_508(72, iParam0, 0);
func_508(73, iParam0, 0);
func_508(74, iParam0, 1);
func_508(75, iParam0, 2);
func_508(76, iParam0, 3);
func_508(77, iParam0, 0);
func_508(78, iParam0, 1);
func_508(79, iParam0, 2);
func_508(80, iParam0, 3);
func_508(100, iParam0, 3);
func_508(81, iParam0, 0);
func_508(82, iParam0, 1);
func_508(83, iParam0, 2);
func_508(84, iParam0, 3);
func_508(105, iParam0, 3);
func_508(85, iParam0, 0);
func_508(86, iParam0, 0);
func_508(87, iParam0, 0);
func_508(88, iParam0, 0);
func_508(104, iParam0, 0);
func_508(91, iParam0, 0);
func_508(92, iParam0, 1);
func_508(93, iParam0, 2);
func_508(94, iParam0, 3);
func_508(95, iParam0, 0);
func_508(96, iParam0, 1);
func_508(97, iParam0, 2);
func_508(98, iParam0, 3);
if(iParam0 >=3){
for (i=0;
i < 90;
i=i + 1){
func_508(i, iParam0, 3);
}}
return;
}


void func_508(int iParam0, int iParam1, int iParam2) // Position - 0x33F43{
int i;
if(iParam1 >=iParam2){
if(!IS_BIT_SET(Global_113648.f_2365.f_539.f_2241[iParam0 / 32], iParam0 % 32)){
for (i=0;
i < Global_113648.f_20120;
i=i + 1){
Global_113648.f_20120[i /*43*/].f_42=1;
}
MISC::SET_BIT(&Global_113648.f_2365.f_539.f_2241[iParam0 / 32], iParam0 % 32);
if(iParam2==0) func_509(0, iParam0, "", 0, 0, 2);
}}
return;
}


void func_509(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x33FC6{
int i;
int num;
int num2;
int num3;
int num4;
int num5;
int num6;
int num7;
int num8;
int j;
int num9;
int num10;
int num11;
int offset;
if(func_557(iParam0) && func_518(iParam1, -1, 0, -1)){
if(iParam5==8 && iParam4==2) iParam3=iParam3 - 20;
if(iParam5==15 && iParam3 > 21 && !func_517(iParam0)) iParam3=iParam3 - 21;
if(iParam0==joaat("oppressor2"))if(iParam5==23)if(iParam3 > 2) iParam3=iParam3 - 26;
elseif(iParam0==joaat("strikeforce"))if(iParam5==18)if(iParam3 > 2) iParam3=iParam3 - 26;
if(iParam5==58 && iParam4==2)if(MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG" /*Low Grip Tires*/))if(func_516(iParam0) && func_513(PLAYER::PLAYER_ID()))if(!func_44(31778, -1)) _STAT_SET_PACKED_BOOL(31778, 1, -1);
}
if(iParam1==-1){
if(!func_557(iParam0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==0){
for (i=0;
i < 306;
i=i + 1){
num=i * 3;
num2=func_512(MISC::GET_HASH_KEY(sParam2));
if(num2 !=-1) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_2691[num + (num2 / 32)], num2 % 32);
}}else{
num3=func_511(iParam0);
if(num3 !=-1){
num4=num3 * 3;
num5=func_512(MISC::GET_HASH_KEY(sParam2));
if(num5 !=-1) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_2691[num4 + (num5 / 32)], num5 % 32);
}
num6=func_510(iParam0, iParam3, iParam4, iParam5);
if(num6 > 0) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_3610[num6 / 32], num6 % 32);
}}
return;
}elseif(func_518(iParam1, -1, 0, -1) || iParam1==-1){
num7=func_510(iParam0, iParam3, iParam4, iParam5);
if(num7 > 0) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_3610[num7 / 32], num7 % 32);
}}elseif(func_557(iParam0) && func_518(iParam1, -1, 0, -1)){
num8=func_510(iParam0, iParam3, iParam4, iParam5);
if(num8 > 0) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_3610[num8 / 32], num8 % 32);
}
if(iParam0==0){
for (j=0;
j < 306;
j=j + 1){
if(func_518(iParam1, -1, 0, -1)){
num9=(j * 4) + (iParam1 / 32);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_47[num9], iParam1 % 32);
else MISC::SET_BIT(&Global_113648.f_668.f_89[num9], iParam1 % 32);
}}}elseif(func_518(iParam1, -1, 0, -1)){
num10=func_511(iParam0);
if(num10 !=-1){
num11=(num10 * 4) + (iParam1 / 32);
offset=iParam1 % 32;
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==joaat("avarus") || iParam0==joaat("chimera") || iParam0==joaat("esskey") && iParam1==1 || iParam1==72 || iParam1==66 && iParam0==joaat("esskey")) offset=offset - 1;
if(iParam0==joaat("specter2") && iParam1==21 || iParam1==72) offset=offset - 1;
if(iParam0==joaat("trailerlarge") && iParam1==85) offset=offset + 1;
if(iParam0==joaat("bombushka") && iParam1==21) offset=offset - 1;
if(offset >=0) MISC::SET_BIT(&Global_2359296[func_36() /*5568*/].f_681.f_47[num11], offset);
}else{
MISC::SET_BIT(&Global_113648.f_668.f_89[num11], offset);
}}}
return;
}

int func_510(int iParam0, int iParam1, int iParam2, int iParam3) // Position - 0x343CA{
int num;
num=0;
if(iParam0==joaat("btype2")){
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==85 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 51;
}
if(iParam0==joaat("lurcher")){
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==85 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
}else{
num=num + 49;
}
if(iParam0==joaat("faction2")){
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==75 && iParam1 >=2 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==74 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==76 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 268;
}
if(iParam0==joaat("buccaneer2")){
if(iParam3==82 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==76 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==75 && iParam1 >=2 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 11;
if(iParam3==62 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==74 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
}else{
num=num + 319;
}
if(iParam0==joaat("chino2")){
if(iParam3==82 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==76 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==75 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==62 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==74 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 315;
}
if(iParam0==joaat("moonbeam2")){
if(iParam3==6 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==76 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==75 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==68 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==69 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==62 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==74 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 308;
}
if(iParam0==joaat("primo2")){
if(iParam3==80 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==81 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==82 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==76 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==77 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==75 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==62 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==74 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
}else{
num=num + 309;
}
if(iParam0==joaat("voodoo")){
if(iParam3==79 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==81 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==82 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==6 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==76 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==75 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==91 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==91 && iParam2==0 || iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==92 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==70 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==62 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==74 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 326;
}
if(iParam0==joaat("faction")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("buccaneer")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("chino")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("moonbeam")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("primo")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("voodoo2")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("sultan")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("banshee")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
}else{
num=num + 17;
}
if(iParam0==joaat("banshee2")){
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==65){
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}}
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 8;
}else{
num=num + 114;
}
if(iParam0==joaat("sultanrs")){
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==91 && iParam2==2 && iParam1 >=1 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==65){
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}}
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 14;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 221;
}
if(iParam0==joaat("btype3")){
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==93 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==94 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 16;
}
if(iParam0==joaat("faction")){
if(iParam3==61 && iParam1==1) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("sabregt")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("tornado")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("tornado2")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("tornado3")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("virgo3")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("minivan")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("slamvan")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("faction3")){
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==65){
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}}
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
}else{
num=num + 272;
}
if(iParam0==joaat("minivan2")){
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
}else{
num=num + 281;
}
if(iParam0==joaat("sabregt2")){
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==0 || iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==62 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 234;
}
if(iParam0==joaat("slamvan3")){
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==62 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
}else{
num=num + 315;
}
if(iParam0==joaat("tornado5")){
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==91 && iParam2==3 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
}else{
num=num + 382;
}
if(iParam0==joaat("virgo2")){
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(Global_262145.f_12045){
if(iParam3==65 && iParam1 >=1 && iParam1 <=45) return num + iParam1;
num=num + 46;
}else{
if(iParam3==65 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 46;
}
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==92 && iParam2==0 && iParam1 >=0 && iParam1 <=48) return num + iParam1;
num=num + 49;
}else{
num=num + 290;
}
if(iParam0==joaat("avarus")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("chimera")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("daemon2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("zombiea")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("zombieb")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("sanctus")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("wolfsbane")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=28) return num + iParam1;
num=num + 29;
}else{
num=num + 29;
}
if(iParam0==joaat("blazer4")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("youga2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 20;
}
if(iParam0==joaat("fcr2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
}else{
num=num + 59;
}
if(iParam0==joaat("diablous2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 19;
}
if(iParam0==joaat("nightblade")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("faggio3")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("faggio")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("defiler")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("esskey")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("hakuchou2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("manchez")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("vortex")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 13;
}
if(iParam0==joaat("apc")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("halftrack")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("dune3")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("tampa3")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("nightshark")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("trailersmall2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("oppressor")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("insurgent3")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("technical3")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("ardent")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("specter2")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==67 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==68 && iParam2==0 && iParam1==1) return num + iParam1;
num=num + 2;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 116;
}
if(iParam0==joaat("comet3")){
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==91 && iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==68 && iParam2==0 && iParam1==6) return num + iParam1;
num=num + 7;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 200;
}
if(iParam0==joaat("elegy")){
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==91 && iParam2==1 && iParam1==1) return num + iParam1;
num=num + 2;
if(iParam3==91 && iParam2==2 && iParam1 >=0 && iParam1 <=67) return num + iParam1;
num=num + 68;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==68 && iParam2==0 && iParam1==7) return num + iParam1;
num=num + 8;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 3;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 252;
}
if(iParam0==joaat("italigtb2")){
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==67 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
}else{
num=num + 122;
}
if(iParam0==joaat("nero2")){
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==67 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==92 && iParam2==0 && iParam1 >=1 && iParam1 <=48) return num + iParam1;
num=num + 49;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==81 && iParam2==0 && iParam1==1) return num + iParam1;
num=num + 2;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
}else{
num=num + 105;
}
if(iParam0==joaat("starling")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("nokota")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("rogue")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("molotok")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("bombushka")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("tula")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("hunter")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("seabreeze")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("alphaz1")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("havok")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("retinue")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("microlight")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("visione")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 9;
}
if(iParam0==joaat("comet4")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("barrage")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("avenger")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("gb200")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 53;
}
if(iParam0==joaat("fagaloa")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 65;
}
if(iParam0==joaat("michelli")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 58;
}
if(iParam0==joaat("ellie")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 27;
}
if(iParam0==joaat("issi3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 114;
}
if(iParam0==joaat("tezeract")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 43;
}
if(iParam0==joaat("flashgt")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 56;
}
if(iParam0==joaat("caracara")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("cheburek")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 62;
}
if(iParam0==joaat("dominator3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=19) return num + iParam1;
num=num + 20;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 115;
}
if(iParam0==joaat("tyrant")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 12;
}
if(iParam0==joaat("taipan")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
}else{
num=num + 47;
}
if(iParam0==joaat("entity2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
}else{
num=num + 26;
}
if(iParam0==joaat("hotring")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=31) return num + iParam1;
num=num + 32;
}else{
num=num + 32;
}
if(iParam0==joaat("jester3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 77;
}
if(iParam0==joaat("stafford")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
}else{
num=num + 8;
}
if(iParam0==joaat("speedo4")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 31;
}
if(iParam0==joaat("mule4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 32;
}
if(iParam0==joaat("pounder2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 35;
}
if(iParam0==joaat("swinger")){
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 55;
}
if(iParam0==joaat("patriot2")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 43;
}
if(iParam0==joaat("oppressor2")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 39;
}
if(iParam0==joaat("menacer")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 22;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 115;
}
if(iParam0==joaat("freecrawler")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 61;
}
if(iParam0==joaat("scramjet")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("strikeforce")){
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
}else{
num=num + 30;
}
if(iParam0==joaat("patriot")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("prairie")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 11;
}
if(iParam0==joaat("clique")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 43;
}
if(iParam0==joaat("deveste")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 48;
}
if(iParam0==joaat("deviant")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 66;
}
if(iParam0==joaat("impaler")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 39;
}
if(iParam0==joaat("schlagen")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 86;
}
if(iParam0==joaat("toros")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 96;
}
if(iParam0==joaat("vamos")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 67;
}
if(iParam0==joaat("tulip")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 45;
}
if(iParam0==joaat("impaler2")){
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==59 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 75;
}
if(iParam0==joaat("italigto")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
}else{
num=num + 77;
}
if(iParam0==joaat("dominator4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 71;
}
if(iParam0==joaat("scarab")){
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 90;
}
if(iParam0==joaat("cerberus")){
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 76;
}
if(iParam0==joaat("cerberus2")){
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 80;
}
if(iParam0==joaat("bruiser")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 69;
}
if(iParam0==joaat("monster3")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
}else{
num=num + 46;
}
if(iParam0==joaat("slamvan4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 59;
}
if(iParam0==joaat("imperator")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 79;
}
if(iParam0==joaat("zr380")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 63;
}
if(iParam0==joaat("issi4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 123;
}
if(iParam0==joaat("deathbike")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 23;
}
if(iParam0==joaat("brutus")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 70;
}
if(iParam0==joaat("zr3802")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 86;
}
if(iParam0==joaat("dominator5")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 69;
}
if(iParam0==joaat("deathbike2")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 40;
}
if(iParam0==joaat("issi6")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 98;
}
if(iParam0==joaat("zr3803")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 63;
}
if(iParam0==joaat("dominator6")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 71;
}
if(iParam0==joaat("deathbike3")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 14;
}
if(iParam0==joaat("rcbandito")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
}else{
num=num + 39;
}
if(iParam0==joaat("monster5")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 55;
}
if(iParam0==joaat("scarab2")){
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 108;
}
if(iParam0==joaat("impaler3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 50;
}
if(iParam0==joaat("impaler4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
}else{
num=num + 69;
}
if(iParam0==joaat("brutus3")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 72;
}
if(iParam0==joaat("monster4")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 62;
}
if(iParam0==joaat("bruiser2")){
if(iParam3==45 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 73;
}
if(iParam0==joaat("bruiser3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
}else{
num=num + 75;
}
if(iParam0==joaat("issi5")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 129;
}
if(iParam0==joaat("cerberus3")){
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 76;
}
if(iParam0==joaat("slamvan5")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
}else{
num=num + 66;
}
if(iParam0==joaat("imperator2")){
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 68;
}
if(iParam0==joaat("imperator3")){
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 69;
}
if(iParam0==joaat("brutus2")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 68;
}
if(iParam0==joaat("scarab3")){
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 90;
}
if(iParam0==joaat("slamvan6")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==78 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 59;
}
if(iParam0==joaat("caracara2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 58;
}
if(iParam0==joaat("drafter")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 71;
}
if(iParam0==joaat("dynasty")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 81;
}
if(iParam0==joaat("gauntlet3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 87;
}
if(iParam0==joaat("gauntlet4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 86;
}
if(iParam0==joaat("hellion")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 94;
}
if(iParam0==joaat("issi7")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 65;
}
if(iParam0==joaat("krieger")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 37;
}
if(iParam0==joaat("locust")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 70;
}
if(iParam0==joaat("nebula")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 61;
}
if(iParam0==joaat("neo")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 87;
}
if(iParam0==joaat("novak")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 53;
}
if(iParam0==joaat("s80")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 32;
}
if(iParam0==joaat("thrax")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 80;
}
if(iParam0==joaat("zion3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 78;
}
if(iParam0==joaat("zorrusso")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 38;
}
if(iParam0==joaat("emerus")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=23) return num + iParam1;
num=num + 24;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 72;
}
if(iParam0==joaat("peyote")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("peyote2")){
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
}else{
num=num + 57;
}
if(iParam0==joaat("rrocket")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 16;
}
if(iParam0==joaat("jugular")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 54;
}
if(iParam0==joaat("paragon")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 71;
}
if(iParam0==joaat("paragon2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 71;
}
if(iParam0==joaat("rebla")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 94;
}
if(iParam0==joaat("imorgon")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=24) return num + iParam1;
num=num + 25;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 125;
}
if(iParam0==joaat("asbo")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 93;
}
if(iParam0==joaat("sugoi")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 100;
}
if(iParam0==joaat("komoda")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=24) return num + iParam1;
num=num + 25;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 115;
}
if(iParam0==joaat("zhaba")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=30) return num + iParam1;
num=num + 31;
}else{
num=num + 87;
}
if(iParam0==joaat("vstr")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 83;
}
if(iParam0==joaat("everon")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 81;
}
if(iParam0==joaat("sultan2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 102;
}
if(iParam0==joaat("kanjo")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
}else{
num=num + 275;
}
if(iParam0==joaat("outlaw")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 21;
}
if(iParam0==joaat("formula")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 47;
}
if(iParam0==joaat("stryder")){
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 23;
}
if(iParam0==joaat("jb7002")){
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 5;
}
if(iParam0==joaat("vagrant")){
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=30) return num + iParam1;
num=num + 31;
}else{
num=num + 60;
}
if(iParam0==joaat("retinue2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==25 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 64;
}
if(iParam0==joaat("yosemite2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==51 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 71;
}
if(iParam0==joaat("furia")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 84;
}
if(iParam0==joaat("formula2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 39;
}
if(iParam0==joaat("minitank")){
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 15;
}
if(iParam0==joaat("gauntlet5")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=17) return num + iParam1;
num=num + 18;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=22 && iParam1 <=23) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==59 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==54 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
}else{
num=num + 207;
}
if(iParam0==joaat("manana2")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==79 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==65 && iParam2==0 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 22;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==62 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
}else{
num=num + 204;
}
if(iParam0==joaat("manana")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("yosemite")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("dukes3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==59 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=26) return num + iParam1;
num=num + 27;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
}else{
num=num + 114;
}
if(iParam0==joaat("club")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==54 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=22 && iParam1 <=27) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
}else{
num=num + 85;
}
if(iParam0==joaat("youga3")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==43 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==24 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==7 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==91 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==66 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
}else{
num=num + 182;
}
if(iParam0==joaat("peyote3")){
if(iParam3==91 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==65 && iParam2==0 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 22;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==45 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==62 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 207;
}
if(iParam0==joaat("glendale2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==75 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==91 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==65 && iParam2==0 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 22;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==72 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==73 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==62 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==63 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
}else{
num=num + 207;
}
if(iParam0==joaat("yosemite3")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==43 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==7 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==74 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==84 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
if(iParam3==65 && iParam2==0 && iParam1 >=1 && iParam1 <=21) return num + iParam1;
num=num + 22;
if(iParam3==90 && iParam2==1 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==69 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==70 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==71 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==83 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==51 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==80 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==81 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==82 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==76 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==77 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==68 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
}else{
num=num + 264;
}
if(iParam0==joaat("seminole2")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==43 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
}else{
num=num + 75;
}
if(iParam0==joaat("penumbra2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=22) return num + iParam1;
num=num + 23;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==19 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 145;
}
if(iParam0==joaat("glendale")){
if(iParam3==61 && iParam1==0) return num + iParam1;
num=num + 1;
}else{
num=num + 1;
}
if(iParam0==joaat("landstalker2")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
}else{
num=num + 62;
}
if(iParam0==joaat("coquette4")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==54 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 60;
}
if(iParam0==joaat("openwheel1")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 28;
}
if(iParam0==joaat("openwheel2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 57;
}
if(iParam0==joaat("tigon")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 51;
}
if(iParam0==joaat("brioso2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==52 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 61;
}
if(iParam0==joaat("manchez2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 45;
}
if(iParam0==joaat("seasparrow2")){
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
}else{
num=num + 3;
}
if(iParam0==joaat("slamtruck")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==95 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=18) return num + iParam1;
num=num + 19;
}else{
num=num + 59;
}
if(iParam0==joaat("italirsx")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 112;
}
if(iParam0==joaat("toreador")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==36 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 58;
}
if(iParam0==joaat("winky")){
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==14 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==7 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=29) return num + iParam1;
num=num + 30;
}else{
num=num + 86;
}
if(iParam0==joaat("weevil")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
if(iParam3==39 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=1) return num + iParam1;
num=num + 2;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==15 && iParam2==0 && iParam1 >=22 && iParam1 <=27) return num + iParam1;
num=num + 7;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
}else{
num=num + 117;
}
if(iParam0==joaat("squaddie")){
if(iParam3==6 && iParam2==0 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=13) return num + iParam1;
num=num + 14;
if(iParam3==8 && iParam2==2 && iParam1 >=1 && iParam1 <=8) return num + iParam1;
num=num + 9;
if(iParam3==44 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=5) return num + iParam1;
num=num + 6;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=19) return num + iParam1;
num=num + 20;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=14) return num + iParam1;
num=num + 15;
if(iParam3==32 && iParam2==0 && iParam1 >=1 && iParam1 <=7) return num + iParam1;
num=num + 8;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=16) return num + iParam1;
num=num + 17;
if(iParam3==40 && iParam2==0 && iParam1 >=1 && iParam1 <=9) return num + iParam1;
num=num + 10;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 159;
}
if(iParam0==joaat("veto")){
if(iParam3==8 && iParam2==1 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
}else{
num=num + 55;
}
if(iParam0==joaat("alkonost")){
if(iParam3==18 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=10) return num + iParam1;
num=num + 11;
}else{
num=num + 19;
}
if(iParam0==joaat("annihilator2")){
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 24;
}
if(iParam0==joaat("veto2")){
if(iParam3==46 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==23 && iParam2==0 && iParam1 >=1 && iParam1 <=12) return num + iParam1;
num=num + 13;
if(iParam3==15 && iParam2==0 && iParam1 >=1 && iParam1 <=4) return num + iParam1;
num=num + 5;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=30) return num + iParam1;
num=num + 31;
}else{
num=num + 69;
}
if(iParam0==joaat("verus")){
if(iParam3==41 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==12 && iParam2==0 && iParam1 >=1 && iParam1 <=3) return num + iParam1;
num=num + 4;
if(iParam3==9 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==7 && iParam2==0 && iParam1 >=1 && iParam1 <=2) return num + iParam1;
num=num + 3;
if(iParam3==26 && iParam2==0 && iParam1 >=1 && iParam1 <=6) return num + iParam1;
num=num + 7;
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=20) return num + iParam1;
num=num + 21;
}else{
num=num + 42;
}
if(iParam0==joaat("kuruma")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=15) return num + iParam1;
num=num + 16;
}else{
num=num + 16;
}
if(iParam0==joaat("hermes")){
if(iParam3==85 && iParam2==0 && iParam1 >=1 && iParam1 <=11) return num + iParam1;
num=num + 12;
}else{
num=num + 12;
}
num > 20000;
return 0;
}

int func_511(int iParam0) // Position - 0x4B690{
switch (iParam0){
case joaat("adder"):
return 0;
case joaat("akuma"):
return 1;
case joaat("asea"):
return 2;
case joaat("asterope"):
return 3;
case joaat("bagger"):
return 4;
case joaat("baller"):
return 5;
case joaat("banshee"):
case joaat("banshee2"):
return 6;
case joaat("bati"):
return 7;
case joaat("bati2"):
return 8;
case joaat("bfinjection"):
return 9;
case joaat("bison"):
return 10;
case joaat("bison2"):
return 11;
case joaat("bison3"):
return 12;
case joaat("bjxl"):
return 13;
case joaat("btype"):
return 14;
case joaat("blazer"):
return 15;
case joaat("blazer2"):
return 15;
case joaat("blazer3"):
return 15;
case joaat("blista"):
return 16;
case joaat("bobcatxl"):
return 17;
case joaat("bodhi2"):
return 18;
case joaat("boxville"):
return 19;
case joaat("boxville2"):
return 20;
case joaat("boxville3"):
return 21;
case joaat("buccaneer"):
case joaat("buccaneer2"):
return 22;
case joaat("buffalo"):
return 23;
case joaat("buffalo2"):
return 24;
case joaat("bullet"):
return 25;
case joaat("burrito"):
return 26;
case joaat("paradise"):
return 27;
case joaat("bifta"):
return 28;
case joaat("kalahari"):
return 29;
case joaat("carbonizzare"):
return 30;
case joaat("carbonrs"):
return 31;
case joaat("cavalcade"):
return 32;
case joaat("cavalcade2"):
return 33;
case joaat("cheetah"):
return 34;
case joaat("cogcabrio"):
return 35;
case joaat("comet2"):
return 36;
case joaat("coquette"):
case joaat("coquette2"):
return 37;
case joaat("daemon"):
return 38;
case joaat("dilettante"):
return 39;
case joaat("dominator"):
return 40;
case joaat("double"):
return 41;
case joaat("dubsta"):
return 42;
case joaat("dubsta2"):
return 43;
case joaat("elegy2"):
return 44;
case joaat("emperor"):
return 45;
case joaat("emperor2"):
return 46;
case joaat("emperor3"):
return 47;
case joaat("entityxf"):
return 48;
case joaat("exemplar"):
return 49;
case joaat("f620"):
return 50;
case joaat("faggio2"):
return 51;
case joaat("felon"):
return 52;
case joaat("felon2"):
return 53;
case joaat("feltzer2"):
return 54;
case joaat("fq2"):
return 55;
case joaat("fugitive"):
return 56;
case joaat("fusilade"):
return 57;
case joaat("futo"):
return 58;
case joaat("gauntlet"):
return 59;
case joaat("gburrito"):
return 60;
case joaat("granger"):
return 61;
case joaat("gresley"):
return 62;
case joaat("habanero"):
return 63;
case joaat("hexer"):
return 64;
case joaat("hotknife"):
return 65;
case joaat("infernus"):
return 66;
case joaat("ingot"):
return 67;
case joaat("intruder"):
return 68;
case joaat("issi2"):
return 69;
case joaat("jackal"):
return 70;
case joaat("jb700"):
return 71;
case joaat("khamelion"):
return 72;
case joaat("landstalker"):
return 73;
case joaat("lguard"):
return 74;
case joaat("manana"):
return 75;
case joaat("mesa"):
return 76;
case joaat("minivan"):
case joaat("minivan2"):
return 77;
case joaat("monroe"):
return 78;
case joaat("nemesis"):
return 79;
case joaat("ninef"):
return 80;
case joaat("ninef2"):
return 81;
case joaat("oracle"):
return 82;
case joaat("oracle2"):
return 83;
case joaat("patriot"):
return 84;
case joaat("pcj"):
return 85;
case joaat("penumbra"):
return 86;
case joaat("peyote"):
return 87;
case joaat("phoenix"):
return 88;
case joaat("prairie"):
return 89;
case joaat("pranger"):
return 90;
case joaat("premier"):
return 91;
case joaat("primo"):
case joaat("primo2"):
return 92;
case joaat("radi"):
return 93;
case joaat("rancherxl"):
return 94;
case joaat("rancherxl2"):
return 95;
case joaat("rapidgt"):
return 96;
case joaat("rapidgt2"):
return 97;
case joaat("ratloader"):
return 98;
case joaat("rebel"):
return 99;
case joaat("rebel2"):
return 100;
case joaat("regina"):
return 101;
case joaat("rocoto"):
return 102;
case joaat("ruffian"):
return 103;
case joaat("ruiner"):
return 104;
case joaat("rumpo"):
return 105;
case joaat("sabregt"):
case joaat("sabregt2"):
return 106;
case joaat("sadler"):
return 107;
case joaat("sanchez"):
return 108;
case joaat("sandking"):
return 109;
case joaat("sandking2"):
return 110;
case joaat("schafter2"):
return 111;
case joaat("schwarzer"):
return 112;
case joaat("seminole"):
return 113;
case joaat("sentinel"):
return 114;
case joaat("sentinel2"):
return 115;
case joaat("serrano"):
return 116;
case joaat("speedo"):
return 117;
case joaat("speedo2"):
return 118;
case joaat("stanier"):
return 119;
case joaat("stinger"):
return 120;
case joaat("stingergt"):
return 121;
case joaat("stratum"):
return 122;
case joaat("stretch"):
return 123;
case joaat("sultan"):
case joaat("sultanrs"):
return 124;
case joaat("superd"):
return 125;
case joaat("surano"):
return 126;
case joaat("surge"):
return 127;
case joaat("tailgater"):
return 128;
case joaat("jester"):
return 129;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
case joaat("tornado4"):
case joaat("tornado5"):
return 133;
case joaat("vacca"):
return 134;
case joaat("vader"):
return 135;
case joaat("vigero"):
return 136;
case joaat("voltic"):
return 137;
case joaat("voodoo2"):
case joaat("voodoo"):
return 138;
case joaat("washington"):
return 139;
case joaat("youga"):
return 140;
case joaat("zion"):
return 141;
case joaat("zion2"):
return 142;
case joaat("ztype"):
return 143;
case joaat("massacro"):
return 144;
case joaat("turismor"):
return 145;
case joaat("zentorno"):
return 146;
case joaat("huntley"):
return 147;
case joaat("alpha"):
return 148;
case joaat("cruiser"):
return 149;
case joaat("surfer"):
return 150;
case joaat("faction"):
case joaat("faction2"):
return 151;
case joaat("chino"):
case joaat("chino2"):
return 152;
case joaat("moonbeam"):
case joaat("moonbeam2"):
return 153;
case joaat("btype2"):
return 154;
case joaat("lurcher"):
return 155;
case joaat("btype3"):
return 156;
case joaat("faction3"):
return 157;
case joaat("slamvan"):
case joaat("slamvan2"):
case joaat("slamvan3"):
return 158;
case joaat("virgo2"):
return 159;
case joaat("virgo3"):
return 160;
case joaat("bestiagts"):
return 161;
case joaat("brickade"):
return 162;
case joaat("fmj"):
return 163;
case joaat("nimbus"):
return 164;
case joaat("pfister811"):
return 165;
case joaat("prototipo"):
return 166;
case joaat("rumpo3"):
return 167;
case joaat("seven70"):
return 168;
case joaat("tug"):
return 169;
case joaat("volatus"):
return 170;
case joaat("windsor2"):
return 171;
case joaat("xls"):
return 172;
case joaat("xls2"):
return 173;
case joaat("reaper"):
return 174;
case joaat("le7b"):
return 175;
}
switch (iParam0){
case joaat("buffalo3"):
return 176;
case joaat("dominator2"):
return 177;
case joaat("gauntlet2"):
return 178;
case joaat("stalion2"):
return 179;
case joaat("omnis"):
return 180;
case joaat("tropos"):
return 181;
case joaat("brioso"):
return 182;
case joaat("trophytruck"):
return 183;
case joaat("trophytruck2"):
return 184;
case joaat("contender"):
return 185;
case joaat("cliffhanger"):
return 186;
case joaat("bf400"):
return 187;
case joaat("tyrus"):
return 188;
case joaat("rallytruck"):
return 189;
case joaat("tampa2"):
return 190;
case joaat("gargoyle"):
return 191;
case joaat("lynx"):
return 192;
case joaat("sheava"):
return 193;
case joaat("avarus"):
return 194;
case joaat("chimera"):
return 195;
case joaat("daemon2"):
return 196;
case joaat("defiler"):
return 197;
case joaat("esskey"):
return 198;
case joaat("nightblade"):
return 199;
case joaat("ratbike"):
return 200;
case joaat("zombiea"):
return 202;
case joaat("zombieb"):
return 203;
case joaat("shotaro"):
return 204;
case joaat("raptor"):
return 205;
case joaat("hakuchou2"):
return 206;
case joaat("blazer4"):
return 207;
case joaat("sanctus"):
return 208;
case joaat("vortex"):
return 209;
case joaat("manchez"):
return 210;
case joaat("tornado6"):
return 211;
case joaat("youga2"):
return 212;
case joaat("wolfsbane"):
return 213;
case joaat("faggio3"):
return 214;
case joaat("faggio"):
return 215;
case joaat("dune5"):
return 216;
case joaat("phantom2"):
return 217;
case joaat("technical2"):
return 218;
case joaat("blazer5"):
return 219;
case joaat("boxville5"):
return 220;
case joaat("wastelander"):
return 221;
case joaat("ruiner2"):
return 222;
case joaat("voltic2"):
return 223;
case joaat("penetrator"):
return 224;
case joaat("tempesta"):
return 225;
case joaat("italigtb2"):
return 226;
case joaat("nero2"):
return 227;
case joaat("diablous2"):
return 228;
case joaat("fcr2"):
return 229;
case joaat("elegy"):
return 230;
case joaat("comet3"):
return 232;
case joaat("specter2"):
return 232;
case joaat("nero"):
return 233;
case joaat("italigtb"):
return 234;
case joaat("fcr"):
return 235;
case joaat("specter"):
return 236;
case joaat("diablous"):
return 237;
case joaat("infernus2"):
return 238;
case joaat("gp1"):
return 239;
case joaat("ruston"):
return 240;
case joaat("turismo2"):
return 241;
case joaat("cheetah2"):
return 242;
case joaat("torero"):
return 243;
case joaat("vagner"):
return 244;
case joaat("xa21"):
return 245;
case joaat("nightshark"):
return 246;
case joaat("ardent"):
return 247;
case joaat("tampa3"):
return 248;
case joaat("apc"):
return 249;
case joaat("dune3"):
return 250;
case joaat("halftrack"):
return 251;
case joaat("oppressor"):
return 252;
case joaat("trailersmall2"):
return 253;
case joaat("insurgent3"):
return 254;
case joaat("technical3"):
return 255;
case joaat("hauler2"):
return 256;
case joaat("phantom3"):
return 257;
case joaat("trailerlarge"):
return 258;
case joaat("lazer"):
return 259;
case joaat("microlight"):
return 260;
case joaat("mogul"):
return 261;
case joaat("rogue"):
return 262;
case joaat("starling"):
return 263;
case joaat("seabreeze"):
return 264;
case joaat("tula"):
return 265;
case joaat("pyro"):
return 266;
case joaat("molotok"):
return 267;
case joaat("nokota"):
return 268;
case joaat("bombushka"):
return 269;
case joaat("hunter"):
return 270;
case joaat("havok"):
return 271;
case joaat("howard"):
return 272;
case joaat("alphaz1"):
return 273;
case joaat("cyclone"):
return 274;
case joaat("visione"):
return 275;
case joaat("vigilante"):
return 276;
case joaat("retinue"):
return 277;
case joaat("rapidgt3"):
return 278;
case joaat("deluxo"):
return 277;
case joaat("stromberg"):
return 278;
case joaat("riot2"):
return 279;
case joaat("chernobog"):
return 280;
case joaat("khanjali"):
return 281;
case joaat("akula"):
return 282;
case joaat("thruster"):
return 283;
case joaat("avenger"):
return 284;
case joaat("barrage"):
return 285;
case joaat("volatol"):
return 286;
case joaat("comet4"):
return 287;
case joaat("neon"):
return 288;
case joaat("streiter"):
return 289;
case joaat("sentinel3"):
return 290;
case joaat("yosemite"):
return 291;
case joaat("hustler"):
return 292;
case joaat("riata"):
return 293;
case joaat("revolter"):
return 294;
case joaat("hermes"):
return 295;
case joaat("comet5"):
return 296;
case joaat("z190"):
return 297;
case joaat("viseris"):
return 298;
case joaat("kamacho"):
return 299;
case joaat("autarch"):
return 300;
case joaat("pariah"):
return 301;
case joaat("raiden"):
return 302;
case joaat("sc1"):
return 303;
case joaat("gt500"):
return 304;
case joaat("savestra"):
return 305;
}
return -1;
}

int func_512(Hash hParam0) // Position - 0x4C7F7{
switch (hParam0){
case joaat("CMOD_TYR_10"):
case joaat("CMOD_SMOKE_10"):
return 0;
case joaat("CMOD_TYR_11"):
case joaat("CMOD_SMOKE_11"):
return 1;
case joaat("HORN_CLAS1"):
case joaat("CMOD_SMOKE_4"):
return 2;
case joaat("HORN_CLAS2"):
case joaat("CMOD_SMOKE_5"):
return 3;
case joaat("HORN_CLAS3"):
case joaat("CMOD_SMOKE_6"):
return 4;
case joaat("HORN_CLAS4"):
case joaat("CMOD_SMOKE_7"):
return 5;
case joaat("HORN_CLAS5"):
return 6;
case joaat("HORN_CLAS6"):
case joaat("CMOD_SMOKE_3"):
return 7;
case joaat("HORN_CLAS7"):
case joaat("CMOD_SMOKE_8"):
return 8;
case joaat("HORN_CNOTE_C0"):
return 9;
case joaat("HORN_CNOTE_D0"):
return 10;
case joaat("HORN_CNOTE_E0"):
return 11;
case joaat("HORN_CNOTE_F0"):
return 12;
case joaat("HORN_CNOTE_G0"):
return 13;
case joaat("HORN_CNOTE_A0"):
return 14;
case joaat("HORN_CNOTE_B0"):
return 15;
case joaat("HORN_CNOTE_C1"):
return 16;
case joaat("CMOD_WIN_5"):
return 17;
case joaat("CMOD_TYR_12"):
case joaat("CMOD_SMOKE_12"):
return 18;
case joaat("CMOD_TYR_13"):
case joaat("CMOD_SMOKE_13"):
return 19;
case joaat("HORN_HIPS1"):
return 20;
case joaat("HORN_HIPS2"):
return 22;
case joaat("HORN_HIPS3"):
return 22;
case joaat("HORN_HIPS4"):
return 23;
case joaat("HORN_INDI_1"):
return 24;
case joaat("HORN_INDI_2"):
return 25;
case joaat("HORN_INDI_3"):
return 26;
case joaat("HORN_INDI_4"):
return 27;
case joaat("CMOD_TYR_PAT"):
return 28;
case joaat("HORN_LUXE1"):
return 29;
case joaat("HORN_LUXE2"):
return 30;
case joaat("HORN_LUXE3"):
return 31;
case joaat("HORN_LOWRDER1"):
return 32;
case joaat("HORN_LOWRDER2"):
return 33;
case joaat("HORN_HWEEN1"):
return 34;
case joaat("HORN_HWEEN2"):
return 35;
case joaat("HORN_XM15_1"):
return 36;
case joaat("HORN_XM15_2"):
return 37;
case joaat("HORN_XM15_3"):
return 38;
}
return -1;
}
BOOL func_513(Player plParam0) // Position - 0x4CA5D{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_514(Global_2657589[plParam0 /*466*/].f_321.f_7)==23;
return false;
}

int func_514(int iParam0) // Position - 0x4CAA4{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 4:
case 5:
case 6:
case 7:
case 8:
case 9:
case 10:
case 11:
case 12:
case 13:
case 14:
case 15:
case 16:
case 17:
case 18:
case 19:
case 20:
case 21:
return 0;
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
return 1;
case 22:
case 23:
case 24:
case 25:
case 26:
case 27:
case 28:
case 29:
case 30:
case 31:
case 32:
case 33:
case 34:
case 35:
case 36:
case 37:
case 38:
case 39:
case 40:
case 41:
return 2;
case 43:
case 42:
case 44:
case 45:
case 46:
case 47:
case 48:
case 49:
case 50:
case 51:
case 52:
case 53:
case 54:
case 55:
case 56:
case 57:
case 58:
case 59:
case 98:
case 99:
case 100:
case 112:
case 113:
case 114:
case 115:
case 119:
case 116:
case 118:
case 120:
case 121:
case 126:
case 127:
case 134:
case 135:
case 136:
case 137:
case 138:
case 139:
case 140:
case 141:
case 142:
case 143:
case 144:
return 3;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case 79:
case 80:
return 4;
case 81:
return 5;
case 82:
return 6;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
case 88:
return 8;
case 89:
case 90:
case 91:
case 92:
case 93:
case 94:
case 95:
case 96:
case 97:
return 9;
case 101:
return 10;
case 102:
case 103:
case 104:
case 105:
case 106:
case 107:
case 108:
case 109:
case 110:
case 111:
return 11;
case 117:
return 12;
case 122:
return 13;
case 123:
return 14;
case 124:
return 15;
case 125:
return 16;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
case 145:
return 18;
case 146:
return 19;
case 147:
return 20;
case 148:
return 21;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
case 154:
return 23;
case 155:
case 156:
case 157:
case 158:
return 24;
case 159:
return 25;
case 160:
return 26;
case 161:
return 27;
}
return -1;
}
BOOL _NETWORK_IS_PLAYER_VALID(Player player, BOOL bIsPlaying, BOOL bUnk) // Position - 0x4CF58{
Player player;
player=player;
if(player !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)){
if(bIsPlaying)if(!PLAYER::IS_PLAYER_PLAYING(player)) return false;
if(bUnk)if(player==Global_2672505.f_3) return Global_2672505.f_2;
elseif(Global_2657589[player /*466*/] !=4) return false;
return true;
}}
return false;
}
BOOL func_516(int iParam0) // Position - 0x4CFB8{
switch (iParam0){
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
return true;
default:
}
return false;
}
BOOL func_517(int iParam0) // Position - 0x4D032{
switch (iParam0){
case joaat("club"):
case joaat("gauntlet5"):
case joaat("weevil"):
case joaat("zr350"):
case joaat("remus"):
case joaat("dominator7"):
case joaat("tailgater2"):
case joaat("previon"):
case joaat("rt3000"):
return true;
default:
}
return false;
}
BOOL func_518(int iParam0, int iParam1, Vehicle veParam2, int iParam3) // Position - 0x4D07C{
Hash entityModel;
if(func_556(iParam1, iParam3)) return true;
if(func_555()) return true;
if(func_554(iParam1, iParam3) && func_552(PLAYER::PLAYER_ID())) return true;
if(iParam0==-1) return true;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return IS_BIT_SET(Global_113648.f_2365.f_539.f_2241[iParam0 / 32], iParam0 % 32);
}else{
if(ENTITY::DOES_ENTITY_EXIST(veParam2) && !ENTITY::IS_ENTITY_DEAD(veParam2, false)) entityModel=ENTITY::GET_ENTITY_MODEL(veParam2);
if(func_551(iParam1, iParam3))if(entityModel==joaat("phantom3") || entityModel==joaat("hauler2")) return true;
elseif(entityModel==joaat("trailerlarge"))if(iParam0==85 || iParam0==86 || iParam0==87) return true;
if(func_550(iParam1, iParam3))if(entityModel==-1576586413 || entityModel==1384502824) return true;
if(func_549(iParam1, iParam3))if(entityModel==joaat("avenger")) return true;
if(func_548(iParam1, iParam3))if(entityModel==joaat("oppressor2")) return true;
if(func_547(iParam1, iParam3)) return true;
if(func_546(iParam1, iParam3))if(entityModel==joaat("vigilante"))if(iParam0==85 || iParam0==86) return true;
switch (entityModel){
case joaat("monster3"):
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
case joaat("issi4"):
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("dominator"):
case joaat("dominator2"):
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
case joaat("slamvan4"):
case joaat("imperator"):
case joaat("zr380"):
case joaat("cerberus"):
case joaat("scarab"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("zr3802"):
case joaat("zr3803"):
case joaat("cerberus2"):
case joaat("scarab2"):
case joaat("brutus2"):
case joaat("cerberus3"):
case joaat("scarab3"):
case joaat("brutus3"):
case joaat("slamvan5"):
case joaat("slamvan6"):
case joaat("monster4"):
case joaat("monster5"):
case joaat("issi5"):
case joaat("issi6"):
case joaat("rcbandito"):
return true;
}
if(iParam0==85 || iParam0==86 || iParam0==87 || iParam0==88)if(func_524(veParam2) || func_523(entityModel)) return true;
if(iParam0==77 || iParam0==78)if(entityModel==joaat("thruster")) return true;
if(iParam0==1 || iParam0==2 || iParam0==3)if(entityModel==joaat("oppressor2")) return true;
if(iParam0==72 || iParam0==73 || iParam0==74 || iParam0==75)if(entityModel==joaat("barrage") || func_523(entityModel)) return true;
if(iParam0==21 || iParam0==22 || iParam0==23)if(func_523(entityModel)) return true;
elseif(iParam0==95 || iParam0==96)if(func_523(entityModel) || func_522(entityModel)) return true;
if(iParam0==17 || iParam0==18 || iParam0==19 || iParam0==20 || iParam0==62 || iParam0==63 || iParam0==64)if(func_523(entityModel)) return true;
}
if(func_205()==0) return func_519(iParam0, -1);
return true;
}
BOOL func_519(int iParam0, int iParam1) // Position - 0x4D482{
int num;
int num2;
num=func_520(iParam0, iParam1);
num2=iParam0;
return IS_BIT_SET(num, func_501(num2));
}

int func_520(int iParam0, int iParam1) // Position - 0x4D4A1{
int num;
num=_MPCHAR_STAT_GET_INT(func_521(iParam0), iParam1, 0);
return num;
}
eMPStat func_521(int iParam0) // Position - 0x4D4BA{
int num;
int num2;
num=iParam0;
num2=func_500(num);
if(func_205()==0 || func_224()==0 || func_205()==999 && func_224()==999){
switch (num2){
case 0:
return MP_STAT_CHAR_FM_CARMOD_1_UNLCK;
case 1:
return MP_STAT_CHAR_FM_CARMOD_2_UNLCK;
case 2:
return MP_STAT_CHAR_FM_CARMOD_3_UNLCK;
case 3:
return MP_STAT_CHAR_FM_CARMOD_4_UNLCK;
case 4:
return MP_STAT_CHAR_FM_CARMOD_5_UNLCK;
case 5:
return MP_STAT_CHAR_FM_CARMOD_6_UNLCK;
case 6:
return MP_STAT_CHAR_FM_CARMOD_7_UNLCK;
}}
return 14192;
}
BOOL func_522(Hash hParam0) // Position - 0x4D574{
switch (hParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("greenwood"):
case joaat("omnisegt"):
case 669204833:
case 1076201208:
return 1;
}
return 0;
}
BOOL func_523(Hash hParam0) // Position - 0x4D5C7{
if(hParam0==joaat("mule4") || hParam0==joaat("pounder2") || hParam0==joaat("speedo4") || hParam0==joaat("terbyte")) return 1;
return 0;
}
BOOL func_524(Vehicle veParam0) // Position - 0x4D609{
if(!ENTITY::DOES_ENTITY_EXIST(veParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false) || ENTITY::IS_ENTITY_DEAD(veParam0, false)) return false;
if(VEHICLE::IS_THIS_MODEL_A_BICYCLE(ENTITY::GET_ENTITY_MODEL(veParam0))) return false;
if(func_534(veParam0, false)) return true;
if(func_532(PLAYER::PLAYER_ID()) && !func_530(ENTITY::GET_ENTITY_MODEL(veParam0)) || VEHICLE::IS_VEHICLE_MODEL(veParam0, joaat("thruster"))) return false;
if(DECORATOR::DECOR_EXIST_ON(veParam0, "Player_Vehicle"))if(DECORATOR::DECOR_GET_INT(veParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID()))if(!func_525(veParam0)) return true;
return false;
}
BOOL func_525(Vehicle veParam0) // Position - 0x4D6BA{
Hash entityModel;
if(ENTITY::DOES_ENTITY_EXIST(veParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(veParam0, false)){
entityModel=ENTITY::GET_ENTITY_MODEL(veParam0);
if(VEHICLE::IS_BIG_VEHICLE(veParam0) && !func_527(veParam0) || func_526(entityModel)) return true;
switch (entityModel){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return true;
}}
return false;
}
BOOL func_526(Hash hParam0) // Position - 0x4D731{
switch (hParam0){
case joaat("mule"):
case joaat("mule2"):
case joaat("mule3"):
case joaat("brickade"):
case joaat("dune"):
case joaat("boxville"):
case joaat("boxville2"):
case joaat("boxville3"):
case joaat("boxville4"):
case joaat("boxville5"):
return true;
default:
}
return false;
}
BOOL func_527(Vehicle veParam0) // Position - 0x4D781{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("halftrack"):
case joaat("phantom3"):
case joaat("hauler2"):
case joaat("trailerlarge"):
case joaat("trailersmall2"):
case joaat("bruiser"):
case joaat("scarab"):
case joaat("scarab2"):
case joaat("scarab3"):
case joaat("bruiser2"):
case joaat("bruiser3"):
return true;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_529(PLAYER::PLAYER_ID())) return true;
break;
case joaat("minitank"):
case joaat("burrito2"):
return true;
case -1576586413:
if(func_528(PLAYER::PLAYER_ID())) return true;
break;
case -1627077503:
return true;
}
return false;
}
BOOL func_528(Player plParam0) // Position - 0x4D849{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_514(Global_2657589[plParam0 /*466*/].f_321.f_7)==26;
return false;
}
BOOL func_529(Player plParam0) // Position - 0x4D890{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_514(Global_2657589[plParam0 /*466*/].f_321.f_7)==13;
return false;
}
BOOL func_530(Hash hParam0) // Position - 0x4D8D7{
if(hParam0==joaat("oppressor2")) return false;
if(!func_531(PLAYER::PLAYER_ID()) && hParam0 !=joaat("thruster") && hParam0 !=joaat("avenger")) return false;
return true;
}
BOOL func_531(Player plParam0) // Position - 0x4D918{
if(plParam0 !=_INVALID_PLAYER_INDEX()) return IS_BIT_SET(Global_1853910[plParam0 /*862*/].f_267.f_307, 2);
return false;
}
BOOL func_532(Player plParam0) // Position - 0x4D93E{
if(plParam0==_INVALID_PLAYER_INDEX()) return false;
if(func_533(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return true;
return false;
}
BOOL func_533(Player plParam0) // Position - 0x4D977{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_514(Global_2657589[plParam0 /*466*/].f_321.f_7)==9;
return false;
}
BOOL func_534(Vehicle veParam0, BOOL bParam1) // Position - 0x4D9BE{
switch (ENTITY::GET_ENTITY_MODEL(veParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_536(ENTITY::GET_ENTITY_MODEL(veParam0), 0))if(Global_2793044.f_304==veParam0) return true;
elseif(func_535(veParam0) !=-1 && !bParam1) return true;
break;
}
return false;
}

int func_535(Vehicle veParam0) // Position - 0x4DA19{
int i;
if(ENTITY::DOES_ENTITY_EXIST(veParam0)){
for (i=0;
i < 32;
i=i + 1){
if(Global_2672505.f_220[i]==veParam0) return i;
}}
return -1;
}
BOOL func_536(Hash hParam0, int iParam1) // Position - 0x4DA52{
if(iParam1==0)if(func_545(hParam0, 0)) return true;
switch (hParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_544();
case joaat("sabregt"):
if(Global_262145.f_14734) return func_543();
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14735) return func_543();
break;
case joaat("virgo3"):
if(Global_262145.f_14733) return func_543();
break;
case joaat("minivan"):
if(Global_262145.f_14736) return func_543();
break;
case joaat("slamvan"):
if(Global_262145.f_14738) return func_543();
break;
case joaat("sultan"):
case joaat("banshee"):
return func_542();
case joaat("comet2"):
if(Global_262145.f_19141) return func_541();
break;
case joaat("diablous"):
if(Global_262145.f_19143) return func_541();
break;
case joaat("fcr"):
if(Global_262145.f_19147) return func_541();
break;
case joaat("elegy2"):
if(Global_262145.f_19144) return func_541();
break;
case joaat("nero"):
if(Global_262145.f_19151) return func_541();
break;
case joaat("italigtb"):
if(Global_262145.f_19149) return func_541();
break;
case joaat("specter"):
if(Global_262145.f_19154) return func_541();
break;
case joaat("technical"):
if(Global_262145.f_21100) return func_540();
break;
case joaat("insurgent"):
if(Global_262145.f_21101) return func_540();
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_539();
case joaat("glendale"):
if(func_539() || func_538()) return true;
break;
case joaat("impaler"):
return func_539();
case joaat("issi3"):
return func_539();
case joaat("gargoyle"):
return func_539();
case joaat("dominator"):
return func_539();
case joaat("dominator2"):
return func_539();
case joaat("imperator"):
return func_539();
case joaat("imperator2"):
return func_539();
case joaat("imperator3"):
return func_539();
case joaat("deathbike"):
return func_539();
case joaat("deathbike2"):
return func_539();
case joaat("deathbike3"):
return func_539();
case joaat("impaler2"):
case joaat("brutus"):
case joaat("bruiser"):
case joaat("slamvan4"):
case joaat("issi4"):
case joaat("monster3"):
case joaat("scarab"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("zr380"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
return func_539();
case joaat("youga2"):
if(Global_262145.f_29332) return func_538();
break;
case joaat("gauntlet3"):
if(Global_262145.f_29682) return func_538();
break;
case joaat("manana"):
if(Global_262145.f_29331) return func_538();
break;
case joaat("peyote"):
if(Global_262145.f_29681) return func_538();
break;
case joaat("yosemite"):
if(Global_262145.f_29680) return func_538();
break;
}
switch (hParam0){
case joaat("tenf"):
if(*Global_262145.f_33139) return func_537();
break;
case joaat("weevil"):
if(*Global_262145.f_33138) return func_537();
break;
case joaat("brioso2"):
if(*Global_262145.f_33131) return func_537();
break;
case joaat("sentinel3"):
if(*Global_262145.f_33140) return func_537();
break;
}
return false;
}
BOOL func_537() // Position - 0x4DED1{
return DLC::IS_DLC_PRESENT(joaat("mpsum2"));
}
BOOL func_538() // Position - 0x4DEE2{
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}
BOOL func_539() // Position - 0x4DEF3{
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}
BOOL func_540() // Position - 0x4DF04{
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}
BOOL func_541() // Position - 0x4DF15{
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}
BOOL func_542() // Position - 0x4DF26{
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}
BOOL func_543() // Position - 0x4DF37{
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}
BOOL func_544() // Position - 0x4DF48{
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}
BOOL func_545(Hash hParam0, int iParam1) // Position - 0x4DF59{
switch (hParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return true;
case joaat("tenf2"):
case joaat("weevil2"):
case joaat("brioso3"):
case joaat("sentinel4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("sabregt2"):
if(!Global_262145.f_14734) return false;
else return true;
break;
case joaat("tornado5"):
if(!Global_262145.f_14735) return false;
else return true;
break;
case joaat("virgo2"):
if(!Global_262145.f_14733) return false;
else return true;
break;
case joaat("minivan2"):
if(!Global_262145.f_14736) return false;
else return true;
break;
case joaat("slamvan3"):
if(!Global_262145.f_14738) return false;
else return true;
break;
case joaat("faction3"):
if(!Global_262145.f_14737) return false;
else return true;
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("comet3"):
if(Global_262145.f_19141){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("diablous2"):
if(Global_262145.f_19143){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("fcr2"):
if(Global_262145.f_19147){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("elegy"):
if(Global_262145.f_19144){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("nero2"):
if(Global_262145.f_19151){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("italigtb2"):
if(Global_262145.f_19149){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("specter2"):
if(Global_262145.f_19154){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("technical3"):
if(Global_262145.f_21100){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("insurgent3"):
if(Global_262145.f_21101){
if(iParam1 & 1 !=0) return false;
return true;
}
return false;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0) return false;
return true;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return true;
}
return false;
}
BOOL func_546(int iParam0, int iParam1) // Position - 0x4E338{
if(iParam0==45)if(iParam1==10) return true;
return false;
}
BOOL func_547(int iParam0, int iParam1) // Position - 0x4E353{
if(iParam0==45)if(iParam1==12) return true;
return false;
}
BOOL func_548(int iParam0, int iParam1) // Position - 0x4E36E{
if(iParam0==45)if(iParam1==16) return true;
return false;
}
BOOL func_549(int iParam0, int iParam1) // Position - 0x4E389{
if(iParam0==45)if(iParam1==14) return true;
return false;
}
BOOL func_550(int iParam0, int iParam1) // Position - 0x4E3A4{
if(iParam0==45)if(iParam1==21) return true;
return false;
}
BOOL func_551(int iParam0, int iParam1) // Position - 0x4E3BF{
if(iParam0==45)if(iParam1==11) return true;
return false;
}

int func_552(Player plParam0) // Position - 0x4E3DA{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(func_553(plParam0) && Global_2657589[plParam0 /*466*/].f_321.f_10==plParam0) return 1;
return 0;
}
BOOL func_553(Player plParam0) // Position - 0x4E40F{
if(plParam0 !=_INVALID_PLAYER_INDEX())if(_NETWORK_IS_PLAYER_VALID(plParam0, true, true))if(Global_2657589[plParam0 /*466*/].f_321.f_7 !=-1) return func_514(Global_2657589[plParam0 /*466*/].f_321.f_7)==22;
return false;
}

int func_554(int iParam0, int iParam1) // Position - 0x4E456{
if(iParam0==45)if(iParam1==19) return 1;
return 0;
}
BOOL func_555() // Position - 0x4E471{
return IS_BIT_SET(Global_104164, 10);
}
BOOL func_556(int iParam0, int iParam1) // Position - 0x4E480{
if(iParam0==45){
switch (iParam1){
case 1:
case 2:
case 3:
return true;
default:
}}
return false;
}
BOOL func_557(int iParam0) // Position - 0x4E4AD{
switch (iParam0){
case joaat("gb200"):
case joaat("issi3"):
case joaat("fagaloa"):
case joaat("ellie"):
case joaat("michelli"):
case joaat("flashgt"):
case joaat("hotring"):
case joaat("tezeract"):
case joaat("tyrant"):
case joaat("dominator3"):
case joaat("taipan"):
case joaat("entity2"):
case joaat("jester3"):
case joaat("cheburek"):
case joaat("caracara"):
case joaat("seasparrow"):
case joaat("mule4"):
case joaat("speedo4"):
case joaat("pounder2"):
case joaat("swinger"):
case joaat("patriot2"):
case joaat("oppressor2"):
case joaat("menacer"):
case joaat("freecrawler"):
case joaat("stafford"):
case joaat("scramjet"):
case joaat("terbyte"):
case joaat("strikeforce"):
case joaat("clique"):
case joaat("deveste"):
case joaat("deviant"):
case joaat("impaler"):
case joaat("scarab"):
case joaat("schlagen"):
case joaat("toros"):
case joaat("vamos"):
case joaat("tulip"):
case joaat("monster3"):
case joaat("impaler2"):
case joaat("bruiser"):
case joaat("cerberus"):
case joaat("dominator4"):
case joaat("imperator"):
case joaat("issi4"):
case joaat("italigto"):
case joaat("deathbike"):
case joaat("slamvan4"):
case joaat("brutus"):
case joaat("imperator2"):
case joaat("imperator3"):
case joaat("deathbike2"):
case joaat("deathbike3"):
case joaat("impaler3"):
case joaat("brutus2"):
case joaat("bruiser2"):
case joaat("slamvan5"):
case joaat("issi5"):
case joaat("monster4"):
case joaat("scarab2"):
case joaat("cerberus2"):
case joaat("dominator5"):
case joaat("zr3802"):
case joaat("impaler4"):
case joaat("brutus3"):
case joaat("bruiser3"):
case joaat("slamvan6"):
case joaat("issi6"):
case joaat("monster5"):
case joaat("scarab3"):
case joaat("cerberus3"):
case joaat("dominator6"):
case joaat("zr3803"):
case joaat("zr380"):
case joaat("rcbandito"):
case joaat("caracara2"):
case joaat("drafter"):
case joaat("dynasty"):
case joaat("gauntlet3"):
case joaat("gauntlet4"):
case joaat("hellion"):
case joaat("issi7"):
case joaat("krieger"):
case joaat("locust"):
case joaat("nebula"):
case joaat("neo"):
case joaat("novak"):
case joaat("s80"):
case joaat("thrax"):
case joaat("zion3"):
case joaat("zorrusso"):
case joaat("emerus"):
case joaat("peyote2"):
case joaat("rrocket"):
case joaat("jugular"):
case joaat("paragon"):
case joaat("paragon2"):
case joaat("asbo"):
case joaat("kanjo"):
case joaat("formula"):
case joaat("imorgon"):
case joaat("komoda"):
case joaat("manana2"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
case joaat("peyote3"):
case joaat("club"):
case joaat("glendale2"):
case joaat("penumbra2"):
case joaat("landstalker2"):
case joaat("seminole2"):
case joaat("tigon"):
case joaat("openwheel1"):
case joaat("openwheel2"):
case joaat("coquette4"):
case joaat("dukes3"):
case joaat("rebla"):
case joaat("sugoi"):
case joaat("youga3"):
case joaat("zhaba"):
case joaat("vstr"):
case joaat("everon"):
case joaat("sultan2"):
case joaat("jb7002"):
case joaat("outlaw"):
case joaat("stryder"):
case joaat("firetruk"):
case joaat("burrito2"):
case joaat("boxville"):
case joaat("stockade"):
case joaat("lguard"):
case joaat("blazer2"):
case joaat("vagrant"):
case joaat("formula2"):
case joaat("furia"):
case joaat("yosemite2"):
case joaat("retinue2"):
case joaat("minitank"):
case joaat("manchez2"):
case joaat("brioso2"):
case joaat("winky"):
case joaat("verus"):
case joaat("alkonost"):
case joaat("avisa"):
case joaat("longfin"):
case joaat("patrolboat"):
case joaat("seasparrow2"):
case joaat("seasparrow3"):
case joaat("slamtruck"):
case joaat("vetir"):
case joaat("kosatka"):
case joaat("italirsx"):
case joaat("toreador"):
case joaat("weevil"):
case joaat("dinghy5"):
case joaat("annihilator2"):
case joaat("squaddie"):
case joaat("veto"):
case joaat("veto2"):
case joaat("calico"):
case joaat("comet6"):
case joaat("cypher"):
case joaat("dominator7"):
case joaat("jester4"):
case joaat("remus"):
case joaat("vectre"):
case joaat("zr350"):
case joaat("warrener2"):
case joaat("rt3000"):
case joaat("futo2"):
case joaat("tailgater2"):
case joaat("sultan3"):
case joaat("dominator8"):
case joaat("euros"):
case joaat("growler"):
case joaat("previon"):
case joaat("astron"):
case joaat("baller7"):
case joaat("buffalo4"):
case joaat("comet7"):
case joaat("deity"):
case joaat("granger2"):
case joaat("ignus"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case joaat("youga4"):
case joaat("zeno"):
case joaat("cinquemila"):
case joaat("reever"):
case joaat("shinobi"):
case joaat("iwagen"):
return true;
}
switch (iParam0){
case joaat("brioso3"):
case joaat("corsita"):
case joaat("draugur"):
case joaat("greenwood"):
case joaat("kanjosj"):
case joaat("lm87"):
case joaat("postlude"):
case joaat("rhinehart"):
case joaat("sm722"):
case joaat("tenf"):
case joaat("tenf2"):
case joaat("torero2"):
case joaat("vigero2"):
case joaat("weevil2"):
case joaat("ruiner4"):
case joaat("sentinel4"):
case joaat("omnisegt"):
case 1384502824:
case -1576586413:
case -1249788006:
case -1386336041:
case -1035489563:
case -1627077503:
case 1748565021:
case 2100457220:
case 996383885:
case -131348178:
case 268758436:
case 1076201208:
case 669204833:
case 1550581940:
case -1933242328:
case -461850249:
return true;
}
return false;
}


void func_558() // Position - 0x4EA12{
func_289(21, true, false);
func_290(21);
func_559();
return;
}


void func_559() // Position - 0x4EA2C{
func_167(joaat("Player_Zero"), 14, 31, true);
func_167(joaat("Player_Zero"), 14, 32, true);
func_167(joaat("Player_Zero"), 14, 33, true);
func_167(joaat("Player_Zero"), 14, 34, true);
func_167(joaat("Player_Zero"), 14, 35, true);
func_167(joaat("Player_Zero"), 14, 36, true);
func_167(joaat("Player_Zero"), 14, 37, true);
func_167(joaat("Player_Zero"), 14, 38, true);
func_167(joaat("Player_Zero"), 14, 39, true);
func_167(joaat("Player_Zero"), 14, 40, true);
func_167(joaat("Player_Zero"), 14, 41, true);
func_167(joaat("Player_Zero"), 14, 42, true);
func_167(joaat("Player_Zero"), 14, 43, true);
func_167(joaat("Player_Zero"), 14, 44, true);
func_167(joaat("Player_Zero"), 9, 9, true);
func_167(joaat("Player_Zero"), 9, 10, true);
func_167(joaat("Player_Zero"), 9, 11, true);
func_167(joaat("Player_Zero"), 9, 12, true);
func_167(joaat("Player_Zero"), 9, 13, true);
func_167(joaat("Player_Zero"), 9, 14, true);
func_167(joaat("Player_One"), 14, 26, true);
func_167(joaat("Player_One"), 14, 27, true);
func_167(joaat("Player_One"), 14, 28, true);
func_167(joaat("Player_One"), 14, 29, true);
func_167(joaat("Player_One"), 14, 30, true);
func_167(joaat("Player_One"), 14, 31, true);
func_167(joaat("Player_One"), 14, 32, true);
func_167(joaat("Player_One"), 14, 33, true);
func_167(joaat("Player_One"), 14, 34, true);
func_167(joaat("Player_One"), 14, 35, true);
func_167(joaat("Player_One"), 14, 36, true);
func_167(joaat("Player_One"), 14, 37, true);
func_167(joaat("Player_One"), 14, 38, true);
func_167(joaat("Player_One"), 14, 39, true);
func_167(joaat("Player_One"), 9, 5, true);
func_167(joaat("Player_One"), 9, 6, true);
func_167(joaat("Player_One"), 9, 7, true);
func_167(joaat("Player_One"), 9, 8, true);
func_167(joaat("Player_One"), 9, 9, true);
func_167(joaat("Player_One"), 9, 10, true);
func_167(joaat("Player_Two"), 14, 49, true);
func_167(joaat("Player_Two"), 14, 50, true);
func_167(joaat("Player_Two"), 14, 51, true);
func_167(joaat("Player_Two"), 14, 52, true);
func_167(joaat("Player_Two"), 14, 53, true);
func_167(joaat("Player_Two"), 14, 54, true);
func_167(joaat("Player_Two"), 14, 55, true);
func_167(joaat("Player_Two"), 14, 56, true);
func_167(joaat("Player_Two"), 14, 57, true);
func_167(joaat("Player_Two"), 14, 58, true);
func_167(joaat("Player_Two"), 14, 59, true);
func_167(joaat("Player_Two"), 14, 60, true);
func_167(joaat("Player_Two"), 9, 9, true);
func_167(joaat("Player_Two"), 9, 10, true);
func_167(joaat("Player_Two"), 9, 11, true);
func_167(joaat("Player_Two"), 9, 12, true);
func_167(joaat("Player_Two"), 9, 13, true);
func_167(joaat("Player_Two"), 9, 14, true);
func_167(joaat("Player_Two"), 9, 15, true);
func_167(joaat("Player_Two"), 9, 16, true);
return;
}


void func_560() // Position - 0x4ED7C{
func_289(0, true, false);
func_289(1, true, false);
func_289(2, true, false);
func_289(3, true, false);
func_289(4, true, false);
func_289(5, true, false);
func_289(6, true, false);
return;
}


void func_561() // Position - 0x4EDB5{
func_562(30, true);
return;
}


void func_562(int iParam0, BOOL bParam1) // Position - 0x4EDC4{
int offset;
offset=iParam0;
if(offset < 31){
if(bParam1) MISC::SET_BIT(&(Global_113648.f_24997), offset);
else MISC::CLEAR_BIT(&(Global_113648.f_24997), offset);
}else{
offset=offset - 31;
if(bParam1) MISC::SET_BIT(&(Global_113648.f_24997.f_1), offset);
else MISC::CLEAR_BIT(&(Global_113648.f_24997.f_1), offset);
}
return;
}


void func_563() // Position - 0x4EE29{
func_562(13, true);
return;
}


void func_564() // Position - 0x4EE38{
func_562(32, true);
return;
}


void func_565() // Position - 0x4EE47{
func_562(23, true);
func_562(15, true);
func_562(29, true);
func_562(24, true);
func_562(17, true);
func_562(11, true);
func_562(16, true);
func_562(18, true);
func_562(12, true);
func_562(27, true);
func_562(19, true);
func_562(28, true);
func_562(22, true);
func_562(21, true);
func_562(14, true);
func_562(7, true);
func_562(3, true);
func_562(30, false);
return;
}


void func_566() // Position - 0x4EECB{
return;
}


void func_567() // Position - 0x4EED3{
func_251(74, 1);
func_562(0, true);
func_562(1, true);
func_562(26, true);
func_562(2, true);
func_562(4, true);
func_562(9, true);
func_562(5, true);
func_562(6, true);
func_562(10, true);
func_562(8, true);
func_562(20, true);
func_562(25, true);
func_562(31, true);
return;
}


void func_568() // Position - 0x4EF37{
func_242(68, true, false);
func_242(96, true, false);
func_242(97, true, false);
func_242(98, true, false);
func_242(99, true, false);
func_242(100, true, false);
func_242(101, true, false);
func_242(102, true, false);
func_242(103, true, false);
func_505(0, 2, true);
func_505(0, 13, true);
func_410("AM_H_SWTCH5" /*Hobbies and Pastimes are available.~n~~BLIP_GUN_SHOP~ Ammu-Nation ~n~~BLIP_STRIP_CLUB~ Strip Club ~n~~BLIP_CINEMA~ Cinema ~n~~BLIP_FAIRGROUND~ Fairground ~n~~BLIP_GOLF~ Golf ~n~~BLIP_TENNIS~ Tennis*/, 2, 3000, -1, 10000, 7, 0, 0, 0);
func_288(68);
func_288(96);
func_13(-1900821691);
func_13(-1845612607);
return;
}


void func_569() // Position - 0x4EFCA{
func_410("AM_H_CRCE" /*Stock Car Races are now available at ~BLIP_RACE_LAND~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
func_505(0, 19, true);
func_288(65);
func_242(65, true, false);
func_284(65);
return;
}


void func_570() // Position - 0x4F002{
if(_IS_EXCLUSIVE_CONTENT_UNLOCKED()){
if(func_272(136)) func_569();
else func_194(1139718847, 6, 4, 20, 120000, 30000, -1, 39, -1, 0, 1);
Global_113648.f_25075.f_10=1;
}
return;
}


void func_571() // Position - 0x4F046{
func_288(110);
func_288(111);
func_242(110, true, false);
func_242(111, true, false);
func_505(0, 18, true);
func_284(110);
return;
}


void func_572() // Position - 0x4F078{
func_288(107);
func_242(107, true, false);
func_505(0, 17, true);
func_219(113, 1, 0, true, 0);
func_284(107);
func_410("AM_H_FOU" /*Triathlon event now available at ~BLIP_TRIATHLON~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_573() // Position - 0x4F0BA{
func_505(0, 14, true);
return;
}


void func_574() // Position - 0x4F0CA{
func_505(0, 12, true);
func_251(56, 1);
return;
}


void func_575() // Position - 0x4F0E1{
func_505(0, 10, true);
func_288(95);
func_242(95, true, false);
BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_stunts");
func_284(95);
func_410("AM_H_STNTP" /*Stunt Plane time trials now available at ~BLIP_RACE_AIR~*/, 1, 3000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_576() // Position - 0x4F121{
func_288(94);
func_242(94, true, false);
func_505(0, 9, true);
return;
}


void func_577() // Position - 0x4F13F{
func_410("AM_H_SRAC" /*Franklin can take part in Street Races throughout San Andreas at ~BLIP_RACE_LAND~ These races are only available between 20:00 and 05:00.*/, 0, 3000, -1, 10000, 2, 0, 0, 0);
return;
}


void func_578() // Position - 0x4F15B{
func_505(0, 8, true);
MISC::SET_BIT(&(Global_113648.f_24981.f_1), 0);
MISC::SET_BIT(&(Global_113648.f_24981.f_1), 1);
if(SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_185(87, 0)) < 43681f) MISC::SET_BIT(&(Global_113648.f_24981.f_3), 1);
if(SYSTEM::VDIST2(_GET_PLAYER_COORDS(PLAYER::PLAYER_ID()), func_185(86, 0)) < 43681f) MISC::SET_BIT(&(Global_113648.f_24981.f_3), 0);
return;
}


void func_579() // Position - 0x4F1DB{
func_505(0, 7, true);
Global_113648.f_24978=0;
MISC::SET_BIT(&(Global_113648.f_24978.f_2), 0);
MISC::SET_BIT(&(Global_113648.f_24978.f_2), 1);
MISC::SET_BIT(&(Global_113648.f_24978.f_2), 2);
MISC::SET_BIT(&(Global_113648.f_24978.f_2), 3);
return;
}


void func_580() // Position - 0x4F22A{
func_13(1440910066);
func_13(2063740346);
func_13(957098437);
func_579();
func_410("AM_H_SEAR" /*Sea Races are now available at ~BLIP_RACE_SEA~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_581() // Position - 0x4F268{
func_288(76);
func_505(0, 5, true);
func_242(76, true, false);
func_284(76);
func_410("AM_H_PLTSC" /*Flight School now available at ~BLIP_FLIGHT_SCHOOL~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_582() // Position - 0x4F29F{
func_288(70);
func_505(0, 4, true);
func_251(69, 1);
func_242(70, true, false);
func_284(70);
func_410("AM_H_OFFRR" /*Offroad Races now available at ~BLIP_OFF_ROAD_RACING~*/, 0, 3000, -1, 10000, 4, 0, 0, 0);
return;
}


void func_583() // Position - 0x4F2DD{
func_242(69, true, false);
func_88(_GET_CHARACTER_MODEL(CHAR_TREVOR), 12, 20, true, 1);
func_505(0, 3, true);
func_284(69);
func_288(69);
func_410("AM_H_HUNT" /*Hunting now available at ~BLIP_HUNTING~ for Trevor only. The hunting outfit has been added to Trevor's wardrobe.*/, 0, 3000, -1, 10000, 4, 0, 0, 0);
return;
}


void func_584() // Position - 0x4F323{
func_242(68, true, false);
func_505(0, 2, true);
func_284(68);
func_288(68);
func_410("AM_H_GOLF" /*Golf now available at ~BLIP_GOLF~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
return;
}


void func_585() // Position - 0x4F35A{
func_505(0, 15, true);
func_505(0, 16, true);
func_284(105);
func_284(106);
func_288(105);
func_288(106);
return;
}


void func_586() // Position - 0x4F38A{
func_288(67);
func_242(67, true, false);
func_505(0, 1, true);
func_251(73, 1);
func_284(67);
func_288(67);
return;
}


void func_587() // Position - 0x4F3BA{
int num;
func_242(125, true, false);
func_242(126, true, false);
func_242(127, true, false);
func_242(128, true, false);
func_242(129, true, false);
func_242(130, true, false);
func_242(131, true, false);
func_242(132, true, false);
func_242(133, true, false);
func_242(134, true, false);
func_242(135, true, false);
func_242(136, true, false);
func_242(137, true, false);
num=125;
if(IS_BIT_SET(Global_113648.f_18969.f_1, 125 - num)) func_588(125, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 126 - num)) func_588(126, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 127 - num)) func_588(127, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 128 - num)) func_588(128, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 129 - num)) func_588(129, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 130 - num)) func_588(130, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 131 - num)) func_588(131, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 132 - num)) func_588(132, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 133 - num)) func_588(133, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 134 - num)) func_588(134, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 135 - num)) func_588(135, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 136 - num)) func_588(136, true);
if(IS_BIT_SET(Global_113648.f_18969.f_1, 137 - num)) func_588(137, true);
func_505(0, 0, 1);
func_284(125);
func_288(125);
func_410("AM_H_BASEJ" /*Parachuting now available at ~BLIP_BASE_JUMP~*/, 0, 3000, -1, 10000, 7, 0, 0, 0);
func_194(-1783809705, 1, 2, 52, 200000, 10000, 64, 170, -1, 0, 1);
return;
}


void func_588(int iParam0, BOOL bParam1) // Position - 0x4F5B5{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return;
if(bParam1==IS_BIT_SET(Global_32543[num /*23*/].f_11, 20)) return;
if(bParam1) MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 20);
else MISC::CLEAR_BIT(&(Global_32543[num /*23*/].f_11), 20);
if(Global_32540==1) Global_32541=1;
Global_32540=1;
MISC::SET_BIT(&(Global_32543[num /*23*/].f_11), 20);
return;
}


void func_589() // Position - 0x4F63B{
func_288(112);
func_288(113);
func_288(114);
func_242(112, 1, false);
func_242(113, true, false);
func_242(114, true, false);
func_251(53, 1);
return;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x4F674{
return func_591(iParam0, Global_43257);
}
BOOL func_591(int iParam0, int iParam1) // Position - 0x4F685{
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