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
char* sLocal_20=NULL;
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

void __EntryFunction__(){
int iVar0;
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
fLocal_14=0,001f;
iLocal_17=-1;
sLocal_20="NULL";
fLocal_21=0f;
fLocal_25=-0,0375f;
fLocal_26=0,17f;
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
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(50)){
SCRIPT::TERMINATE_THIS_THREAD();
}
while (true){
if(!func_584(0)){
if(Global_43600==-1){
SCRIPT::TERMINATE_THIS_THREAD();
}}
iVar0=0;
while (iVar0 < 235){
if(Global_113386.f_8613[iVar0]){
if(MISC::GET_GAME_TIMER() >=Global_113386.f_8613.f_236[iVar0]){
switch (iVar0){
case 1:
func_583();
break;
case 4:
func_581();
break;
case 5:
func_580();
break;
case 19:
func_579();
break;
case 6:
func_578();
break;
case 7:
func_577();
break;
case 8:
func_576();
break;
case 9:
func_575();
break;
case 11:
func_574();
break;
case 12:
func_573();
break;
case 13:
func_572();
break;
case 14:
func_571();
break;
case 15:
func_570();
break;
case 16:
func_569();
break;
case 17:
func_568();
break;
case 18:
func_567();
break;
case 20:
func_566();
break;
case 21:
func_565();
break;
case 23:
func_564();
break;
case 39:
func_563();
break;
case 22:
func_562();
break;
case 24:
func_561();
break;
case 25:
func_560();
break;
case 27:
func_559();
break;
case 28:
func_558();
break;
case 29:
func_557();
break;
case 30:
func_555();
break;
case 31:
func_554();
break;
case 33:
func_552();
break;
case 32:
func_507(0, 1);
break;
case 160:
func_507(1, 1);
break;
case 161:
func_507(2, 1);
break;
case 162:
func_507(3, 1);
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
func_414(1);
break;
case 58:
func_414(0);
break;
case 59:
func_412(18, 1);
func_412(19, 1);
break;
case 60:
func_412(15, 1);
func_412(16, 1);
func_412(17, 1);
break;
case 61:
func_412(12, 1);
func_412(13, 1);
break;
case 62:
func_410("AM_H_GARAGEP", 1, 0, -1, 10000, 7, 0, 0, 0);
func_412(21, 1);
func_412(22, 1);
func_412(23, 1);
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
case joaat("mpsv_lp0_31"):
func_373();
break;
case 80:
func_359();
break;
case 81:
func_358();
AUDIO::UNLOCK_RADIO_STATION_TRACK_LIST("RADIO_16_SILVERLAKE", "MIRRORPARK_LOCKED");
MISC::SET_BIT(&(Global_113386.f_10016.f_25), 5);
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
func_555();
break;
case 89:
func_347();
break;
case 90:
func_346(1);
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
func_412(20, 1);
func_330(20, 5, 1);
func_412(14, 1);
func_330(14, 5, 1);
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
func_263(0);
break;
case 134:
func_263(1);
break;
case 135:
func_262(0);
break;
case 136:
func_262(1);
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
func_261(0);
break;
case 141:
func_261(1);
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
switch (iVar0){
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
Global_113386.f_8613[iVar0]=0;
}}
iVar0++;
}
SYSTEM::WAIT(0);
}}


void func_1(){
if(!MISC::IS_BIT_SET(Global_113386.f_18574.f_382, 6)){
func_2(-1067764575, 6, 2, 144, 1000, 5000, -1, 0, -1, 0);
MISC::SET_BIT(&(Global_113386.f_18574.f_382), 6);
}}

int func_2(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
struct<10> Var0;
struct<10> Var10;
int iVar20;
int iVar21;
if(func_11(0)){
return 0;
}
if(iParam4 < 0){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6==76){
return 0;
}
if(iParam7==235){
return 0;
}
if(bParam3 < 3){
if(MISC::IS_BIT_SET(iParam2, bParam3)){
return 0;
}}
if(iParam2 < 1 || iParam2 > 7){
return 0;
}
if(Global_113386.f_7688.f_866 < 10){
Var0.f_0=iParam0;
Var0.f_3=func_10(iParam1);
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam4);
Var0.f_5=iParam5;
Var0.f_1=iParam9;
Var0.f_2=iParam2;
Var0.f_6=bParam3;
Var0.f_7=iParam6;
Var0.f_8=iParam7;
Var0.f_9=iParam8;
MISC::CLEAR_BIT(&(Var0.f_1), false);
Global_113386.f_7688.f_765[Global_113386.f_7688.f_866 /*10*/]={
Var0 
};
Global_113386.f_7688.f_866++;
return 1;
}else{
Var10={
func_9(iParam0, iParam1, iParam2, bParam3, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9) 
};
iVar20=0;
func_8(&iVar20);
iVar21=func_7(Var10, Global_113386.f_7688.f_765[iVar20 /*10*/]);
if(iVar21==2){
func_5(Global_113386.f_7688.f_765[iVar20 /*10*/]);
Global_113386.f_7688.f_765[iVar20 /*10*/]={
Var10 
};
func_4(&Var10);
return 1;
}elseif(iVar21==1){
if(func_3(Var10)){
func_5(Global_113386.f_7688.f_765[iVar20 /*10*/]);
Global_113386.f_7688.f_765[iVar20 /*10*/]={
Var10 
};
func_4(&Var10);
return 1;
}else{
if(!func_3(Global_113386.f_7688.f_765[iVar20 /*10*/])){
Global_113386.f_7688.f_765[iVar20 /*10*/]={
Var10 
};
func_4(&Var10);
return 1;
}
func_4(&Var10);
return 1;
}}else{
func_5(Var10);
func_4(&Var10);
return 1;
}}
return 0;
}

int func_3(struct<9> Param0, var uParam9){
if(Param0.f_8==0){
return 0;
}
return 1;
}


void func_4(var uParam0){
struct<10> Var0;
*uParam0={
Var0 
};
}


void func_5(struct<10> Param0){
if(func_3(Param0)){
func_6(Param0.f_8, 0);
}}


void func_6(int iParam0, int iParam1){
if(iParam0==235 || iParam0==0){
return;
}
Global_113386.f_8613[iParam0]=1;
Global_113386.f_8613.f_236[iParam0]=(MISC::GET_GAME_TIMER() + iParam1);
}

int func_7(struct<4> Param0, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, struct<4> Param10, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19){
int iVar0;
int iVar1;
iVar0=Param0.f_3;
iVar1=Param10.f_3;
if(iVar0 > iVar1){
return 2;
}
if(iVar0 < iVar1){
return 0;
}
return 1;
}


void func_8(int iParam0){
int iVar0;
*iParam0=0;
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_866){
if(func_7(Global_113386.f_7688.f_765[iVar0 /*10*/], Global_113386.f_7688.f_765[*iParam0 /*10*/])==0){
*iParam0=iVar0;
}
iVar0++;
}}


struct<10> func_9(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, var uParam8, var uParam9){
struct<10> Var0;
Var0.f_0=uParam0;
Var0.f_3=func_10(iParam1);
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam4);
Var0.f_5=iParam5;
Var0.f_1=uParam9;
Var0.f_2=iParam2;
Var0.f_6=bParam3;
Var0.f_7=iParam6;
Var0.f_8=iParam7;
Var0.f_9=uParam8;
MISC::CLEAR_BIT(&(Var0.f_1), false);
return Var0;
}

int func_10(int iParam0){
switch (iParam0){
case 0:
case 4:
return 5;
break;
case 7:
return 4;
break;
case 2:
return 3;
break;
case 1:
return 2;
break;
case 3:
return 1;
break;
case 5:
case 6:
return 0;
break;
}
return 7;
}

int func_11(bool bParam0){
if(!bParam0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("benchmark")) > 0){
return 1;
}
return MISC::IS_BIT_SET(Global_78567, 0);
}


void func_12(int iParam0, int iParam1){
iParam1=iParam1;
Global_44248=1;
if(Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1){
Global_47582[iParam0 /*46*/].f_1=1;
Global_47582[iParam0 /*46*/]=0;
}}

int func_13(int iParam0){
int iVar0;
int iVar1;
iVar1=0;
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_136){
if(Global_113386.f_7688[iVar0 /*15*/]==iParam0){
if(Global_43599 !=iVar0){
func_27(iVar0);
func_19(iParam0);
iVar1=1;
}}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_198){
if(Global_113386.f_7688.f_137[iVar0 /*15*/]==iParam0){
func_19(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_650){
if(Global_113386.f_7688.f_199[iVar0 /*15*/]==iParam0){
func_18(iParam0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_764){
if(Global_113386.f_7688.f_651[iVar0 /*14*/]==iParam0){
func_15(iVar0);
iVar1=1;
}
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_866){
if(Global_113386.f_7688.f_765[iVar0 /*10*/]==iParam0){
func_14(iVar0);
iVar1=1;
}
iVar0++;
}
return iVar1;
}


void func_14(int iParam0){
int iVar0;
struct<10> Var1;
if(iParam0 < 0 || iParam0 >=Global_113386.f_7688.f_866){
return;
}
if(Global_113386.f_7688.f_866 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113386.f_7688.f_866 - 2)){
Global_113386.f_7688.f_765[iVar0 /*10*/]={
Global_113386.f_7688.f_765[iVar0 + 1 /*10*/] 
};
iVar0++;
}}
if(Global_113386.f_7688.f_866 > 0){
Global_113386.f_7688.f_765[(Global_113386.f_7688.f_866 - 1) /*10*/]={
Var1 
};
Global_113386.f_7688.f_866=(Global_113386.f_7688.f_866 - 1);
}}


void func_15(int iParam0){
int iVar0;
struct<14> Var1;
if(iParam0 < 0 || iParam0 >=Global_113386.f_7688.f_764){
return;
}
if(Global_113386.f_7688.f_764 > 1){
iVar0=iParam0;
while (iVar0 <=(Global_113386.f_7688.f_764 - 2)){
Global_113386.f_7688.f_651[iVar0 /*14*/]={
Global_113386.f_7688.f_651[iVar0 + 1 /*14*/] 
};
iVar0++;
}}
if(Global_113386.f_7688.f_764 > 0){
Global_113386.f_7688.f_651[(Global_113386.f_7688.f_764 - 1) /*14*/]={
Var1 
};
Global_113386.f_7688.f_764=(Global_113386.f_7688.f_764 - 1);
}
func_16(0);
func_16(1);
func_16(2);
}


void func_16(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(!func_17(bParam0)){
return;
}
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_136){
if(MISC::IS_BIT_SET(Global_113386.f_7688[iVar0 /*15*/].f_2, bParam0)){
if(Global_113386.f_7688[iVar0 /*15*/].f_3 > iVar1){
iVar1=Global_113386.f_7688[iVar0 /*15*/].f_3;
}}
iVar0++;
}
iVar2=0;
while (iVar2 < Global_113386.f_7688.f_764){
if(MISC::IS_BIT_SET(Global_113386.f_7688.f_651[iVar2 /*14*/].f_2, bParam0)){
if(Global_113386.f_7688.f_651[iVar2 /*14*/].f_3==5){
iVar1=5;
}}
iVar2++;
}
Global_113386.f_7688.f_919[bParam0]=iVar1;
}


bool func_17(bool bParam0){
return bParam0 < 3;
}


void func_18(int iParam0){
struct<15> Var0;
int iVar15;
int iVar16;
iVar15=0;
while (iVar15 < Global_113386.f_7688.f_650){
if(Global_113386.f_7688.f_199[iVar15 /*15*/]==iParam0){
iVar16=iVar15;
while (iVar16 <=(Global_113386.f_7688.f_650 - 2)){
Global_113386.f_7688.f_199[iVar16 /*15*/]={
Global_113386.f_7688.f_199[iVar16 + 1 /*15*/] 
};
iVar16++;
}
Global_113386.f_7688.f_199[(Global_113386.f_7688.f_650 - 1) /*15*/]={
Var0 
};
Global_113386.f_7688.f_650=(Global_113386.f_7688.f_650 - 1);
return;
}
iVar15++;
}}


void func_19(int iParam0){
struct<15> Var0;
int iVar15;
int iVar16;
iVar15=0;
while (iVar15 < Global_113386.f_7688.f_198){
if(Global_113386.f_7688.f_137[iVar15 /*15*/]==iParam0){
func_20(Global_113386.f_7688.f_137[iVar15 /*15*/].f_6);
iVar16=iVar15;
while (iVar16 <=(Global_113386.f_7688.f_198 - 2)){
Global_113386.f_7688.f_137[iVar16 /*15*/]={
Global_113386.f_7688.f_137[iVar16 + 1 /*15*/] 
};
iVar16++;
}
Global_113386.f_7688.f_137[(Global_113386.f_7688.f_198 - 1) /*15*/]={
Var0 
};
Global_113386.f_7688.f_198=(Global_113386.f_7688.f_198 - 1);
return;
}
iVar15++;
}}

int func_20(int iParam0){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=166){
if(func_26(iParam0, Global_20266)==1){
func_25(iParam0, Global_20266, 0);
if(func_24(iParam0, Global_20266)==0){
iVar0=Global_20266;
func_21(iParam0, iVar0);
}
return 1;
}else{
return 0;
}}
return 0;
}


void func_21(int iParam0, int iParam1){
int iVar0;
if(Global_117[iParam0 /*10*/].f_8 !=166){
if(iParam1 > 3){
}else{
iVar0=iParam1;
func_23(iParam0, iVar0, 0);
func_22(iParam0, iVar0, 0);
}}}


void func_22(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_1998[iParam0 /*29*/].f_24[iParam1]=iParam2;
if(iParam0 < 162){
Global_113386.f_28050[iParam0 /*29*/].f_24[iParam1]=iParam2;
}}


void func_23(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 4){
return;
}
Global_1998[iParam0 /*29*/].f_12[iParam1]=iParam2;
if(iParam0 < 162){
Global_113386.f_28050[iParam0 /*29*/].f_12[iParam1]=iParam2;
}}

int func_24(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_1998[iParam0 /*29*/].f_24[iParam1];
}


void func_25(int iParam0, int iParam1, int iParam2){
Global_1998[iParam0 /*29*/].f_19[iParam1]=iParam2;
if(iParam0 < 162){
Global_113386.f_28050[iParam0 /*29*/].f_19[iParam1]=iParam2;
}}

int func_26(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_1998[iParam0 /*29*/].f_19[iParam1];
}


void func_27(int iParam0){
bool bVar0;
var uVar1;
struct<15> Var2;
if(iParam0 < 0 || iParam0 >=Global_113386.f_7688.f_136){
return;
}
uVar1=Global_113386.f_7688[iParam0 /*15*/].f_2;
if(Global_113386.f_7688.f_136 > 1){
bVar0=iParam0;
while (bVar0 <=(Global_113386.f_7688.f_136 - 2)){
Global_113386.f_7688[bVar0 /*15*/]={
Global_113386.f_7688[bVar0 + 1 /*15*/] 
};
bVar0++;
}}
if(Global_113386.f_7688.f_136 > 0){
Global_113386.f_7688[(Global_113386.f_7688.f_136 - 1) /*15*/]={
Var2 
};
Global_113386.f_7688.f_136=(Global_113386.f_7688.f_136 - 1);
}
bVar0=false;
while (bVar0 < 3){
if(MISC::IS_BIT_SET(uVar1, bVar0)){
func_16(bVar0);
}
bVar0++;
}}


void func_28(){
func_412(62, 1);
}


void func_29(){
int iVar0;
int iVar1;
iVar0=func_66();
iVar1=func_65(iVar0);
if(iVar1 > 10000){
func_30(iVar0, 129, 5000);
}elseif(iVar1 >=10){
func_30(iVar0, 129, (iVar1 / 10));
}}

int func_30(int iParam0, int iParam1, int iParam2){
if(func_64(iParam0)==3){
return 0;
}
if(func_64(iParam0)==4){
return 0;
}
return func_31(func_64(iParam0), 0, iParam1, iParam2, 0);
}

int func_31(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4){
float fVar0;
bool bVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
func_63();
if(iParam3 < 1){
return 0;
}
fVar0=1f;
switch (iParam1){
case 0:
switch (iParam0){
case 0:
func_62(99, 1);
func_61(joaat("sp0_money_total_spent"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_total_spent"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_total_spent"), iParam3);
break;
}
func_45(0);
switch (iParam2){
case 127:
case 129:
case 125:
case 126:
case 128:
if(func_42(5)){
fVar0=0,9f;
bVar1=5;
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
func_61(joaat("sp0_money_spent_on_tattoos"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_on_tattoos"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_on_tattoos"), iParam3);
break;
}
if(func_42(1)){
fVar0=0f;
bVar1=true;
}
break;
case 21:
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_on_taxis"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_on_taxis"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_on_taxis"), iParam3);
break;
}
break;
case 25:
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_in_strip_clubs"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_in_strip_clubs"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_in_strip_clubs"), iParam3);
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
func_61(joaat("sp0_money_spent_property"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_property"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_property"), iParam3);
break;
}
break;
default:
switch (SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()){
case joaat("clothes_shop_sp"):
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_in_clothes"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_in_clothes"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_in_clothes"), iParam3);
break;
}
break;
case joaat("hairdo_shop_sp"):
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_on_hairdos"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_on_hairdos"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_on_hairdos"), iParam3);
break;
}
if(func_42(0)){
fVar0=0f;
bVar1=false;
}
break;
case joaat("gunclub_shop"):
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_in_buying_guns"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_in_buying_guns"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_in_buying_guns"), iParam3);
break;
}
break;
case joaat("carmod_shop"):
switch (iParam0){
case 0:
func_61(joaat("sp0_money_spent_car_mods"), iParam3);
break;
case 1:
func_61(joaat("sp1_money_spent_car_mods"), iParam3);
break;
case 2:
func_61(joaat("sp2_money_spent_car_mods"), iParam3);
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
iVar2=iParam0;
iParam3=SYSTEM::FLOOR((fVar0 * SYSTEM::TO_FLOAT(iParam3)));
iVar3=0;
iVar4=iParam3;
if(fVar0==0f){
func_34(bVar1);
return 1;
}elseif(fVar0 !=1f){
func_34(bVar1);
}
iVar5=(Global_60328[iVar2] + iParam3);
switch (iParam1){
case 1:
if(Global_60328[iVar2] >=0 && iParam3 > 0){
if(iVar5 <=0){
Global_60328[iVar2]=2147483647;
}else{
Global_60328[iVar2]=(Global_60328[iVar2] + iParam3);
}}
switch (iParam0){
case 0:
func_61(joaat("sp0_total_cash_earned"), iParam3);
break;
case 1:
func_61(joaat("sp1_total_cash_earned"), iParam3);
break;
case 2:
func_61(joaat("sp2_total_cash_earned"), iParam3);
break;
}
break;
case 0:
if(!bParam4){
if((Global_60328[iVar2] - iParam3) < 0){
return 0;
}}
iVar3=Global_60328[iVar2];
Global_60328[iVar2]=(Global_60328[iVar2] - iParam3);
if(bParam4){
iVar4=iVar3;
}
break;
}
if(iParam2==1){
if(iVar4 > 20){
}}else{
Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/]=iParam1;
Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_1=iParam2;
Global_113386.f_20564.f_233[iVar2 /*69*/].f_2[Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 /*6*/].f_2=iParam3;
Global_113386.f_20564.f_233[iVar2 /*69*/]++;
Global_113386.f_20564.f_233[iVar2 /*69*/].f_1++;
if(Global_113386.f_20564.f_233[iVar2 /*69*/].f_1 > 10){
Global_113386.f_20564.f_233[iVar2 /*69*/].f_1=0;
}}
func_33(iParam0);
if(Global_43052==15){
func_32(0);
}
return 1;
}


void func_32(bool bParam0){
int iVar0;
int iVar1;
iVar0=0;
iVar1=0;
iVar0=0;
while (iVar0 < 3){
iVar1=0;
while (iVar1 < 11){
Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_3=Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/];
Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_4=Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_1;
Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_5=Global_113386.f_20564.f_233[iVar0 /*69*/].f_2[iVar1 /*6*/].f_2;
iVar1++;
}
iVar0++;
}
iVar0=0;
while (iVar0 < 10){
Global_60336[iVar0 /*3*/][0]=Global_113386.f_20564[iVar0];
Global_60336.f_31[iVar0 /*3*/][0]=Global_113386.f_20564.f_11[iVar0];
Global_60336.f_62[iVar0 /*3*/][0]=Global_113386.f_20564.f_22[iVar0];
Global_60336.f_93[iVar0 /*3*/][0]=Global_113386.f_20564.f_33[iVar0];
Global_60336.f_124[iVar0 /*3*/][0]=Global_113386.f_20564.f_44[iVar0];
Global_60336.f_155[iVar0 /*3*/][0]=Global_113386.f_20564.f_55[iVar0];
Global_60336.f_186[iVar0 /*3*/][0]=Global_113386.f_20564.f_66[iVar0];
Global_60336.f_217[iVar0 /*3*/][0]=Global_113386.f_20564.f_77[iVar0];
Global_60336.f_248[iVar0 /*3*/][0]=Global_113386.f_20564.f_88[iVar0];
if(!bParam0){
Global_60336[iVar0 /*3*/][1]=Global_113386.f_20564[iVar0];
Global_60336.f_31[iVar0 /*3*/][1]=Global_113386.f_20564.f_11[iVar0];
Global_60336.f_62[iVar0 /*3*/][1]=Global_113386.f_20564.f_22[iVar0];
Global_60336.f_93[iVar0 /*3*/][1]=Global_113386.f_20564.f_33[iVar0];
Global_60336.f_124[iVar0 /*3*/][1]=Global_113386.f_20564.f_44[iVar0];
Global_60336.f_155[iVar0 /*3*/][1]=Global_113386.f_20564.f_55[iVar0];
Global_60336.f_186[iVar0 /*3*/][1]=Global_113386.f_20564.f_66[iVar0];
Global_60336.f_217[iVar0 /*3*/][1]=Global_113386.f_20564.f_77[iVar0];
Global_60336.f_248[iVar0 /*3*/][1]=Global_113386.f_20564.f_88[iVar0];
}
iVar0++;
}}


void func_33(int iParam0){
int iVar0;
iVar0=Global_60328[iParam0];
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_total_cash"), iVar0, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_total_cash"), iVar0, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_total_cash"), iVar0, true);
break;
}}


void func_34(bool bParam0){
bool bVar0;
char cVar1[64];
if(bParam0==8){
func_40(129, 0, -1);
return;
}
if(bParam0==9){
func_40(135, 0, -1);
return;
}
if(bParam0==10){
func_40(136, 0, -1);
return;
}
if(bParam0==11){
func_40(137, 0, -1);
return;
}
if(bParam0==12){
func_37(8272, 0, -1, 1, 0);
return;
}
if(bParam0==13){
func_37(8273, 0, -1, 1, 0);
return;
}
if(bParam0==14){
func_37(8274, 0, -1, 1, 0);
return;
}
if(bParam0==15){
func_37(8275, 0, -1, 1, 0);
return;
}
if(bParam0==16){
func_37(8276, 0, -1, 1, 0);
return;
}
if(bParam0==17){
func_37(8277, 0, -1, 1, 0);
return;
}
bVar0=false;
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(MISC::IS_BIT_SET(Global_113386.f_20564.f_471, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
}}elseif(MISC::IS_BIT_SET(Global_113386.f_20564.f_471, bParam0) || MISC::IS_BIT_SET(Global_2359296[func_36() /*5567*/].f_681.f_10, bParam0)){
bVar0=true;
MISC::CLEAR_BIT(&(Global_113386.f_20564.f_471), bParam0);
MISC::CLEAR_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_10), bParam0);
}
if(bVar0){
StringCopy(&cVar1, "CHAR_LIFEINVADER", 64);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("COUP_RED");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_35(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar1, &cVar1, true, 0, "", 0);
}}


char* func_35(bool bParam0){
switch (bParam0){
case 0:
return "COUP_HAIRC";
case 1:
return "COUP_TATTOO";
case 2:
return "COUP_WARSTOCK";
case 3:
return "COUP_MOSPORT";
case 4:
return "COUP_ELITAS";
case 5:
return "COUP_MEDSPENS";
case 6:
return "COUP_SPRUNK";
case 7:
return "COUP_RESPRAY";
case 8:
return "COUP_XMAS2017";
case 9:
return "COUP_CAR_XMAS2018";
case 10:
return "COUP_HELI_XMAS2018";
case 11:
return "COUP_CAR2_XMAS2018";
case 12:
return "COUP_CAS_ELITAS";
case 13:
return "COUP_CAS_DOCKTEASE";
case 14:
return "COUP_CAS_MOSPORT";
case 15:
return "COUP_CAS_SSASA";
case 16:
return "COUP_CAS_WARSTOCK";
case 17:
return "COUP_CAS_PANDM";
break;
default:
break;
}
return "";
}

int func_36(){
int iVar0;
iVar0=0;
return iVar0;
}


void func_37(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
if(bParam4){}
iVar0=Global_2826809[iParam0 /*3*/][func_38(iParam2)];
if(iVar0 !=0){
STATS::STAT_SET_INT(iVar0, iParam1, bParam3);
}}

int func_38(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
if(iVar0==-1){
iVar1=func_39();
if(iVar1 > -1){
Global_2826521=0;
iVar0=iVar1;
}else{
iVar0=0;
Global_2826521=1;
}}
return iVar0;
}

int func_39(){
return Global_1574918;
}


void func_40(int iParam0, bool bParam1, int iParam2){
if(iParam2==-1){
iParam2=func_39();
}
STATS::_SET_PACKED_STAT_BOOL(iParam0, bParam1, iParam2);
}


void func_41(int iParam0){
func_62(93, iParam0);
func_62(29, iParam0);
func_62(30, iParam0);
}

int func_42(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
if(iParam0==8){
return func_44(129, -1);
}
if(iParam0==9){
return func_44(135, -1);
}
if(iParam0==10){
return func_44(136, -1);
}
if(iParam0==11){
return func_44(137, -1);
}
if(iParam0==12){
iVar0=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar1=func_43(8272, -1, 0);
if(iVar1==0 || iVar0 >=iVar1){
return 0;
}
return 1;
}
if(iParam0==13){
iVar2=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar3=func_43(8273, -1, 0);
if(iVar3==0 || iVar2 >=iVar3){
return 0;
}
return 1;
}
if(iParam0==14){
iVar4=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar5=func_43(8274, -1, 0);
if(iVar5==0 || iVar4 >=iVar5){
return 0;
}
return 1;
}
if(iParam0==15){
iVar6=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar7=func_43(8275, -1, 0);
if(iVar7==0 || iVar6 >=iVar7){
return 0;
}
return 1;
}
if(iParam0==16){
iVar8=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar9=func_43(8276, -1, 0);
if(iVar9==0 || iVar8 >=iVar9){
return 0;
}
return 1;
}
if(iParam0==17){
iVar10=NETWORK::GET_CLOUD_TIME_AS_INT();
iVar11=func_43(8277, -1, 0);
if(iVar11==0 || iVar10 >=iVar11){
return 0;
}
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113386.f_20564.f_471, iParam0);
}
return MISC::IS_BIT_SET(Global_2359296[func_36() /*5567*/].f_681.f_10, iParam0);
}

int func_43(int iParam0, int iParam1, int iParam2){
int iVar0;
var uVar1;
if(iParam0 !=13122){
if(iParam2==0){
}
iVar0=Global_2826809[iParam0 /*3*/][func_38(iParam1)];
if(STATS::STAT_GET_INT(iVar0, &uVar1, -1)){
return uVar1;
}}
return 0;
}


bool func_44(int iParam0, int iParam1){
if(iParam1==-1){
iParam1=func_39();
}
return STATS::_GET_PACKED_STAT_BOOL(iParam0, iParam1);
}

int func_45(bool bParam0){
int iVar0;
int iVar1;
int iVar2;
iVar1=0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(27)){
return 0;
}
if(STATS::STAT_GET_INT(joaat("sp0_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp1_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(STATS::STAT_GET_INT(joaat("sp2_money_total_spent"), &iVar0, -1)){
iVar1=(iVar1 + iVar0);
}
if(bParam0){}
iVar2=0;
STATS::STAT_GET_INT(joaat("num_cash_spent"), &iVar2, -1);
if(iVar1 > 0 && (iVar2 / 2000000) !=(iVar1 / 2000000)){
STATS::STAT_SET_INT(joaat("num_cash_spent"), iVar1, true);
func_60(27, iVar1);
}
if(iVar1 < 200000000){
return 0;
}
func_46(27, 1);
return 1;
}

int func_46(int iParam0, int iParam1){
if(iParam0 >=78){
return 0;
}
return func_47(iParam0, iParam1);
}

int func_47(int iParam0, int iParam1){
if(func_59(14) && !func_58(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0) && iParam1==1){
return 0;
}
if(Global_32209 !=0 && !Global_78319){
return 0;
}
if(func_57(&Global_4541529)){
if(func_55(&Global_4541529, iParam0)){
return 0;
}
if(func_48(&Global_4541529, iParam0)){
return 1;
}}else{
if(!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0)){
return 0;
}
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0)){
return 1;
}
return 0;
}
return 0;
}

int func_48(var uParam0, int iParam1){
int iVar0;
var uVar1[78];
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_59(14) && !func_58(iParam1)){
return 0;
}
if(func_55(uParam0, iParam1)){
return 0;
}
if(func_54(uParam0) < 0f){
func_53(uParam0, 0);
}
func_51(&uVar1);
iVar0=0;
iVar0=0;
while (iVar0 < (*uParam0 - 1)){
uVar1[iVar0 + 1]=(*uParam0)[iVar0];
iVar0++;
}
func_49(&uVar1, iParam1);
iVar0=0;
iVar0=0;
while (iVar0 < *uParam0){
(*uParam0)[iVar0]=uVar1[iVar0];
iVar0++;
}
return 1;
}

int func_49(var uParam0, int iParam1){
int iVar0;
if(PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam1)){
return 0;
}
if(func_59(14) && !func_58(iParam1)){
return 0;
}
if(func_55(uParam0, iParam1)){
return 0;
}
if(func_54(uParam0) < 0f){
func_53(uParam0, 0);
}
iVar0=0;
while (iVar0 < *uParam0){
if(func_50(uParam0, iVar0)){
(*uParam0)[iVar0]=iParam1;
return 1;
}
iVar0++;
}
return 0;
}


bool func_50(var uParam0, int iParam1){
return (*uParam0)[iParam1]==78;
}


void func_51(var uParam0){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
func_52(uParam0, iVar0);
iVar0++;
}
func_53(uParam0, (Global_4541528 - 0,5f));
}


void func_52(var uParam0, int iParam1){
(*uParam0)[iParam1]=78;
}


void func_53(var uParam0, float fParam1){
if(fParam1==0f){
uParam0->f_80=0f;
}else{
uParam0->f_80=fParam1;
}}


float func_54(var uParam0){
return uParam0->f_80;
}


bool func_55(var uParam0, int iParam1){
return func_56(uParam0, iParam1) !=-1;
}

int func_56(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < *uParam0){
if((*uParam0)[iVar0]==iParam1){
return iVar0;
}
iVar0++;
}
return -1;
}


bool func_57(var uParam0){
return uParam0->f_79==1;
}

int func_58(int iParam0){
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
return 1;
default:
}
return 0;
}


bool func_59(int iParam0){
return Global_43052==iParam0;
}

int func_60(int iParam0, int iParam1){
int iVar0;
if(iParam0 < 0){
return 0;
}
if(iParam0 > 78){
return 0;
}
if(iParam1 <=0 || iParam1 > 100){
return 0;
}
iVar0=PLAYER::_GET_ACHIEVEMENT_PROGRESS(iParam0);
if(iParam1 > iVar0){
return PLAYER::_SET_ACHIEVEMENT_PROGRESS(iParam0, iParam1);
}
return 0;
}


void func_61(int iParam0, int iParam1){
int iVar0;
STATS::STAT_GET_INT(iParam0, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(iParam0, iVar0, true);
}


void func_62(int iParam0, int iParam1){
int iVar0;
if(iParam1 < 1){
return;
}
if(Global_58896[iParam0 /*7*/].f_2){
return;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return;
}
if(Global_58896[iParam0 /*7*/]){
STATS::STAT_GET_INT(Global_58896[iParam0 /*7*/].f_1, &iVar0, -1);
iVar0=(iVar0 + iParam1);
STATS::STAT_SET_INT(Global_58896[iParam0 /*7*/].f_1, iVar0, true);
}}


void func_63(){
int iVar0;
if(NETWORK::NETWORK_IS_SIGNED_IN()){
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &iVar0, -1);
if(!Global_60328[0]==iVar0){
Global_60328[0]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &iVar0, -1);
if(!Global_60328[1]==iVar0){
Global_60328[1]=iVar0;
}
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &iVar0, -1);
if(!Global_60328[2]==iVar0){
Global_60328[2]=iVar0;
}}}

int func_64(int iParam0){
return Global_1998[iParam0 /*29*/].f_17;
}

int func_65(int iParam0){
var uVar0;
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_total_cash"), &uVar0, -1);
return uVar0;
case 1:
STATS::STAT_GET_INT(joaat("sp1_total_cash"), &uVar0, -1);
return uVar0;
case 2:
STATS::STAT_GET_INT(joaat("sp2_total_cash"), &uVar0, -1);
return uVar0;
default:
}
return 0;
}

int func_66(){
func_67();
return Global_113386.f_2363.f_539.f_4321;
}


void func_67(){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(func_69(Global_113386.f_2363.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
iVar0=func_68(PLAYER::PLAYER_PED_ID());
if(func_17(iVar0) && (!func_59(14) || Global_112337)){
if(Global_113386.f_2363.f_539.f_4321 !=iVar0 && func_17(Global_113386.f_2363.f_539.f_4321)){
Global_113386.f_2363.f_539.f_4322=Global_113386.f_2363.f_539.f_4321;
}
Global_113386.f_2363.f_539.f_4323=iVar0;
Global_113386.f_2363.f_539.f_4321=iVar0;
return;
}}else{
if(Global_113386.f_2363.f_539.f_4321 !=145){
Global_113386.f_2363.f_539.f_4323=Global_113386.f_2363.f_539.f_4321;
}
return;
}}
Global_113386.f_2363.f_539.f_4321=145;
}

int func_68(int iParam0){
int iVar0;
int iVar1;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar1=ENTITY::GET_ENTITY_MODEL(iParam0);
iVar0=0;
while (iVar0 <=2){
if(func_69(iVar0)==iVar1){
return iVar0;
}
iVar0++;
}}
return 145;
}

int func_69(int iParam0){
if(func_17(iParam0)){
return func_70(iParam0);
}elseif(iParam0 !=145){}
return 0;
}


var func__70(int iParam0){
return Global_1998[iParam0 /*29*/];
}


void func_71(){
int iVar0;
int iVar1;
iVar0=func_66();
iVar1=func_65(iVar0);
if(iVar1 > 10000){
func_30(iVar0, 128, 5000);
}elseif(iVar1 >=10){
func_30(iVar0, 128, (iVar1 / 10));
}}


void func_72(){
int iVar0;
int iVar1;
iVar0=func_66();
iVar1=func_65(iVar0);
if(iVar1 > 10000){
func_30(iVar0, 127, 5000);
}elseif(iVar1 >=10){
func_30(iVar0, 127, (iVar1 / 10));
}}


void func_73(){
int iVar0;
int iVar1;
iVar0=func_66();
iVar1=func_65(iVar0);
if(iVar1 > 10000){
func_30(iVar0, 126, 5000);
}elseif(iVar1 >=10){
func_30(iVar0, 126, (iVar1 / 10));
}}


void func_74(){
int iVar0;
int iVar1;
iVar0=func_66();
iVar1=func_65(iVar0);
if(iVar1 > 10000){
func_30(iVar0, 125, 5000);
}elseif(iVar1 >=10){
func_30(iVar0, 125, (iVar1 / 10));
}}


void func_75(){
int iVar0;
iVar0=func_66();
switch (iVar0){
case 0:
func_76(0, 26, 100000);
break;
case 1:
func_76(1, 26, 100000);
break;
case 2:
func_76(2, 26, 100000);
break;
}}


void func_76(int iParam0, int iParam1, int iParam2){
int iVar0;
float fVar1;
int iVar2;
iVar0=func_84(iParam0, iParam1);
if(iVar0==-1){
return;
}
fVar1=func_79(iParam1);
if(Global_55453[iParam1 /*36*/].f_8){
return;
}
iVar2=SYSTEM::CEIL((SYSTEM::TO_FLOAT(iParam2) / fVar1));
func_78(iParam0, iVar0, iParam1);
func_77(iParam0, iVar0, iVar2, 1);
}


void func_77(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(iParam1 < 0 || iParam1 > 9){
return;
}
switch (iParam0){
case 0:
iVar0=Global_113386.f_20564[iParam1];
break;
case 1:
iVar0=Global_113386.f_20564.f_33[iParam1];
break;
case 2:
iVar0=Global_113386.f_20564.f_66[iParam1];
break;
}
if(Global_55453[iVar0 /*36*/].f_9 <=0f){
return;
}
iVar1=0;
if(bParam3){
switch (iParam0){
case 0:
Global_113386.f_20564.f_22[iParam1]=(Global_113386.f_20564.f_22[iParam1] + iParam2);
iVar1=Global_113386.f_20564.f_22[iParam1];
break;
case 1:
Global_113386.f_20564.f_55[iParam1]=(Global_113386.f_20564.f_55[iParam1] + iParam2);
iVar1=Global_113386.f_20564.f_55[iParam1];
break;
case 2:
Global_113386.f_20564.f_88[iParam1]=(Global_113386.f_20564.f_88[iParam1] + iParam2);
iVar1=Global_113386.f_20564.f_88[iParam1];
break;
}}else{
switch (iParam0){
case 0:
Global_113386.f_20564.f_22[iParam1]=iParam2;
iVar1=Global_113386.f_20564.f_22[iParam1];
break;
case 1:
Global_113386.f_20564.f_55[iParam1]=iParam2;
iVar1=Global_113386.f_20564.f_55[iParam1];
break;
case 2:
Global_113386.f_20564.f_88[iParam1]=iParam2;
iVar1=Global_113386.f_20564.f_88[iParam1];
break;
}}
if(Global_55453[iVar0 /*36*/].f_8){
iVar2=Global_55453[iVar0 /*36*/].f_35;
if(iVar2 > -1){
STATS::STAT_SET_INT(Global_58334[iVar2 /*7*/].f_3[iParam0], iVar1, true);
}}
return;
}


void func_78(int iParam0, int iParam1, int iParam2){
if(iParam1 < 0 || iParam1 > 9){
return;
}
switch (iParam0){
case 0:
Global_113386.f_20564[iParam1]=iParam2;
break;
case 1:
Global_113386.f_20564.f_33[iParam1]=iParam2;
break;
case 2:
Global_113386.f_20564.f_66[iParam1]=iParam2;
break;
}
return;
}


float func_79(int iParam0){
int iVar0;
float fVar1;
iVar0=iParam0;
fVar1=(Global_55453[iParam0 /*36*/].f_9 * func_80(iVar0));
return (SYSTEM::TO_FLOAT(SYSTEM::FLOOR((fVar1 * 100f))) / 100f);
}


float func_80(int iParam0){
float fVar0;
int iVar1;
int iVar2;
float fVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
float fVar11;
float fVar12;
fVar0=1f;
switch (iParam0){
case 61:
if(Global_113386.f_9085.f_99.f_58[131]){
fVar0=0,5f;
}
break;
case 73:
if(func_83(25)){
fVar0=(fVar0 * 3f);
}else{
if(func_83(74) || func_83(75)){
fVar0=(fVar0 * 0,95f);
}
if(func_83(14)){
fVar0=(fVar0 * 0,98f);
}
if(func_83(16)){
fVar0=(fVar0 * 0,98f);
}
if(func_83(48)){
fVar0=(fVar0 * 0,98f);
}
if(func_83(24)){
fVar0=(fVar0 * 0,98f);
}
if(func_83(27)){
fVar0=(fVar0 * 0,5f);
}}
break;
case 66:
if(func_83(49)){
fVar0=(fVar0 * 0,5f);
}
if(func_83(10)){
fVar0=(fVar0 * 0,95f);
}
break;
case 59:
if(func_83(93)){
if(!func_83(47)){
fVar0=(fVar0 * 0,9f);
}}
if(func_83(38)){
if(!func_83(28)){
fVar0=(fVar0 * 0,9f);
}}
if(func_83(84)){
if(!func_83(28)){
fVar0=(fVar0 * 0,9f);
}}
break;
case 69:
if(func_83(90)){
if(!func_83(14)){
fVar0=(fVar0 * 0,7f);
}}
break;
case 16:
if(func_83(28)){
fVar0=(fVar0 * 2f);
}
break;
case 52:
if(func_83(93)){
if(!func_83(28)){
fVar0=(fVar0 * 0,6f);
}}
break;
case 56:
if(func_83(61)){
if(!func_83(49)){
fVar0=(fVar0 * 0,5f);
}}
break;
}
if(Global_113386.f_20564.f_442 < 1){
return fVar0;
}
iVar1=-1;
iVar2=0;
iVar2=0;
while (iVar2 < 8){
if(Global_113386.f_20564.f_443[iVar2]==iParam0){
iVar1=iVar2;
}
iVar2++;
}
if(iVar1 > -1){
fVar0=func_82(Global_113386.f_20564.f_452[iVar1], Global_113386.f_20564.f_461[iVar1]);
}
if(fVar0 > 1f){
fVar3=(fVar0 - 1f);
iVar4=iParam0;
iVar5=func_81(0, iVar4);
iVar6=func_81(1, iVar4);
iVar7=func_81(2, iVar4);
if(((iVar5 + iVar6) + iVar7) > 0){
iVar8=((Global_60328[0] + Global_60328[1]) + Global_60328[2]);
iVar2=0;
while (iVar2 < 10){
if(Global_113386.f_20564.f_22[iVar2] > 0){
iVar8=(iVar8 + SYSTEM::FLOOR(Global_113386.f_20564.f_11[iVar2]));
}
if(Global_113386.f_20564.f_55[iVar2] > 0){
iVar8=(iVar8 + SYSTEM::FLOOR(Global_113386.f_20564.f_44[iVar2]));
}
if(Global_113386.f_20564.f_88[iVar2] > 0){
iVar8=(iVar8 + SYSTEM::FLOOR(Global_113386.f_20564.f_77[iVar2]));
}
iVar2++;
}
iVar9=700000000;
iVar10=1000000000;
if(iVar8 > iVar10){
fVar3=0f;
}elseif(iVar8 < iVar9){
fVar3=1f;
}else{
fVar11=SYSTEM::TO_FLOAT((iVar8 - iVar9));
fVar12=SYSTEM::TO_FLOAT((iVar10 - iVar9));
fVar3=(fVar3 * (1f - (fVar11 / fVar12)));
}}
fVar0=(1f + fVar3);
}
return fVar0;
}

int func_81(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 9){
return 0;
}
switch (iParam0){
case 0:
return Global_113386.f_20564.f_22[iParam1];
break;
case 1:
return Global_113386.f_20564.f_55[iParam1];
break;
case 2:
return Global_113386.f_20564.f_88[iParam1];
break;
}
return 0;
}


float func_82(int iParam0, var uParam1){
float fVar0;
bool bVar1;
float fVar2;
int iVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
float fVar9;
float fVar10;
fVar0=0f;
if(iParam0 < 1){
return 1f;
}
bVar1=MISC::IS_BIT_SET(uParam1, 0);
fVar2=SYSTEM::TO_FLOAT(iParam0);
iVar3=0;
if(MISC::IS_BIT_SET(uParam1, 3)){
iVar3++;
}
if(MISC::IS_BIT_SET(uParam1, 4)){
iVar3 +=2;
}
if(MISC::IS_BIT_SET(uParam1, 5)){
iVar3 +=4;
}
if(MISC::IS_BIT_SET(uParam1, 20)){
iVar3 +=8;
}
fVar4=SYSTEM::TO_FLOAT((3 * iVar3));
if(MISC::IS_BIT_SET(uParam1, 2)){
fVar4=(fVar4 * 7f);
}
if(MISC::IS_BIT_SET(uParam1, 1)){
if(func_83(21)){
return 1f;
}}elseif(fVar4 < 1f){
return 1f;
}
fVar5=(1f - (fVar2 / fVar4));
if(MISC::IS_BIT_SET(uParam1, 16)){
fVar0=(fVar0 - 0,5f);
}
if(MISC::IS_BIT_SET(uParam1, 17)){
fVar0=(fVar0 - 0,25f);
}
if(MISC::IS_BIT_SET(uParam1, 18)){
fVar0=(fVar0 - 0,1f);
}
if(MISC::IS_BIT_SET(uParam1, 19)){
fVar0=(fVar0 - 0,33f);
}
if(bVar1){
fVar0=-fVar0;
}
if(!MISC::IS_BIT_SET(uParam1, 1)){
if(MISC::IS_BIT_SET(uParam1, 6)){
fVar6=0f;
if(MISC::IS_BIT_SET(uParam1, 8)){
fVar6=(fVar6 + 0,5f);
}
if(MISC::IS_BIT_SET(uParam1, 9)){
fVar6=(fVar6 + 0,25f);
}
if(MISC::IS_BIT_SET(uParam1, 10)){
fVar6=(fVar6 + 0,125f);
}
if(fVar5 < fVar6){
fVar7=(fVar5 / fVar6);
if(MISC::IS_BIT_SET(uParam1, 7)){
fVar7=(1f - fVar7);
fVar7=(fVar7 * fVar7);
fVar7=(1f - fVar7);
}
fVar0=(fVar0 * fVar7);
}}
if(MISC::IS_BIT_SET(uParam1, 11)){
fVar8=0f;
if(MISC::IS_BIT_SET(uParam1, 13)){
fVar8=(fVar8 + 0,5f);
}
if(MISC::IS_BIT_SET(uParam1, 14)){
fVar8=(fVar8 + 0,25f);
}
if(MISC::IS_BIT_SET(uParam1, 15)){
fVar8=(fVar8 + 0,125f);
}
fVar9=(1f - fVar8);
if(fVar5 > fVar9){
fVar10=((fVar5 - fVar9) / fVar8);
if(MISC::IS_BIT_SET(uParam1, 12)){
fVar10=(fVar10 * fVar10);
}
fVar0=(fVar0 * (1f - fVar10));
}}}
fVar0=(1f + fVar0);
return fVar0;
}


bool func_83(int iParam0){
return Global_113386.f_9085.f_330[iParam0 /*6*/];
}

int func_84(int iParam0, int iParam1){
int iVar0;
bool bVar1;
int iVar2;
iVar0=-1;
bVar1=false;
iVar2=0;
while (iVar2 < 10){
if(func_81(iParam0, iVar2)==0 && !bVar1){
iVar0=iVar2;
}
if(func_85(iParam0, iVar2)==iParam1 && func_81(iParam0, iVar2) > 0){
bVar1=true;
iVar0=iVar2;
}
iVar2++;
}
return iVar0;
}

int func_85(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 9){
return 31;
}
switch (iParam0){
case 0:
return Global_113386.f_20564[iParam1];
case 1:
return Global_113386.f_20564.f_33[iParam1];
case 2:
return Global_113386.f_20564.f_66[iParam1];
default:
}
return 31;
}


void func_86(){
int iVar0;
iVar0=func_66();
switch (iVar0){
case 0:
func_76(0, 48, 100000);
break;
case 1:
func_76(1, 48, 100000);
break;
case 2:
func_76(2, 48, 100000);
break;
}}


void func_87(){
int iVar0;
iVar0=func_66();
switch (iVar0){
case 0:
if(!func_168(func_69(0), 12, 37)){
func_167(func_69(0), 12, 37, 1);
func_88(func_69(0), 12, 37, 1, 1);
}else{
func_167(func_69(0), 12, 36, 1);
func_88(func_69(0), 12, 36, 1, 1);
}
break;
case 1:
if(!func_168(func_69(1), 12, 33)){
func_167(func_69(1), 12, 33, 1);
func_88(func_69(1), 12, 33, 1, 1);
}else{
func_167(func_69(1), 12, 25, 1);
func_88(func_69(1), 12, 25, 1, 1);
}
break;
case 2:
if(!func_168(func_69(2), 12, 40)){
func_167(func_69(2), 12, 40, 1);
func_88(func_69(2), 12, 40, 1, 1);
}else{
func_167(func_69(2), 12, 37, 1);
func_88(func_69(2), 12, 37, 1, 1);
}
break;
}}

int func_88(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
int iVar0;
int iVar1;
int iVar2;
var uVar3;
var uVar20;
int iVar30;
Global_78130[1 /*14*/]={
func_102(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 6)){
if(bParam3){
func_101(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 1, 0);
if(iParam1==12){
iVar0=1;
if(iParam0==joaat("player_zero")){
if(iParam2==31){
iVar0=0;
}}
if(iVar0==1){
uVar3={
func_97(iParam0, iParam2) 
};
iVar1=0;
while (iVar1 <=14){
if((uVar3[iVar1] !=-99 && iVar1 !=12) && iVar1 !=14){
if(iVar1 !=13){
func_88(iParam0, iVar1, uVar3[iVar1], 1, 1);
func_167(iParam0, iVar1, uVar3[iVar1], 1);
}else{
uVar20={
func_89(iParam0, uVar3[iVar1]) 
};
iVar2=0;
while (iVar2 <=8){
func_88(iParam0, 14, uVar20[iVar2], 1, 1);
func_167(iParam0, 14, uVar20[iVar2], 1);
iVar2++;
}}
}
iVar1++;
}}}}else{
func_101(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 1, Global_78130[1 /*14*/].f_1, 0, 1);
}
if(iParam4==1 && bParam3==1){
switch (iParam0){
case joaat("player_zero"):
break;
case joaat("player_one"):
switch (iParam1){
case 3:
if(iParam2 >=176 && iParam2 <=191){
iVar30=(227 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 3, iVar30, 1, 0);
}elseif(iParam2 >=227 && iParam2 <=242){
iVar30=(176 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 3, iVar30, 1, 0);
}
break;
case 11:
if(iParam2 >=9 && iParam2 <=24){
iVar30=(25 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 11, iVar30, 1, 0);
}elseif(iParam2 >=25 && iParam2 <=40){
iVar30=(9 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 11, iVar30, 1, 0);
}
break;
case 8:
if(iParam2 >=27 && iParam2 <=42){
iVar30=(43 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
iVar30=(59 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
}elseif(iParam2 >=43 && iParam2 <=58){
iVar30=(27 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
iVar30=(59 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
}elseif(iParam2 >=59 && iParam2 <=74){
iVar30=(27 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
iVar30=(43 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 8, iVar30, 1, 0);
}
break;
case 14:
if(iParam2 >=64 && iParam2 <=79){
iVar30=(41 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 14, iVar30, 1, 0);
}
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 4:
if(iParam2 >=81 && iParam2 <=90){
iVar30=(94 + Global_78130[1 /*14*/].f_4);
func_88(iParam0, 4, iVar30, 1, 0);
}
break;
case 12:
if(iParam2==2){
func_88(iParam0, 14, 17, 1, 0);
}
break;
}
break;
}}
return 1;
}
return 0;
}


struct<10> func_89(int iParam0, int iParam1){
int iVar0;
struct<10> Var1;
Var1=9;
iVar0=0;
while (iVar0 <=8){
Var1[iVar0]=-99;
iVar0++;
}
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 31:
func_96(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&Var1, 19, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&Var1, 14, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&Var1, 18, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&Var1, 0, 59, 112, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&Var1, 0, 60, 112, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&Var1, 0, 60, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&Var1, 55, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&Var1, 0, 1, 112, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&Var1, iParam0, iParam1, 10);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 31:
func_96(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&Var1, 10, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&Var1, 0, 82, 158, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&Var1, 0, 1, 158, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&Var1, 41, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&Var1, 40, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&Var1, 41, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&Var1, 0, 95, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&Var1, 69, 95, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 31:
func_96(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&Var1, 11, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&Var1, 17, 90, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&Var1, 15, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&Var1, 0, 88, 154, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&Var1, 0, 1, 154, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&Var1, 16, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&Var1, 0, 123, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&Var1, 69, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&Var1, iParam0, iParam1, 9);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 31:
func_96(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&Var1, 129, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&Var1, 90, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&Var1, 23, 251, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&Var1, 36, 262, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&Var1, 88, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&Var1, 125, 175, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&Var1, 44, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&Var1, 52, 189, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&Var1, 0, 261, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_96(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_96(&Var1, 0, 243, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_96(&Var1, 0, 212, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_96(&Var1, 64, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 14:
func_96(&Var1, 61, 207, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_96(&Var1, 0, 291, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_96(&Var1, 0, 208, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_96(&Var1, 0, 229, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_96(&Var1, 36, 249, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_96(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_96(&Var1, 0, 174, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_96(&Var1, 35, 180, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_96(&Var1, 36, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_96(&Var1, 0, 259, 2, 3, 4, 5, 6, 7, 8);
break;
case 24:
func_96(&Var1, 35, 1, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&Var1, iParam0, iParam1, 25);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 31:
func_96(&Var1, 0, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 0:
func_96(&Var1, 35, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 1:
func_96(&Var1, 36, 178, 2, 3, 4, 5, 6, 7, 8);
break;
case 2:
func_96(&Var1, 53, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 3:
func_96(&Var1, 38, 170, 2, 3, 4, 5, 6, 7, 8);
break;
case 4:
func_96(&Var1, 37, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 5:
func_96(&Var1, 113, 203, 2, 3, 4, 5, 6, 7, 8);
break;
case 6:
func_96(&Var1, 114, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 7:
func_96(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 8:
func_96(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 9:
func_96(&Var1, 0, 199, 2, 3, 4, 5, 6, 7, 8);
break;
case 10:
func_96(&Var1, 0, 182, 2, 3, 4, 5, 6, 7, 8);
break;
case 11:
func_96(&Var1, 0, 233, 2, 3, 4, 5, 6, 7, 8);
break;
case 12:
func_96(&Var1, 107, 167, 2, 3, 4, 5, 6, 7, 8);
break;
case 13:
func_96(&Var1, 109, 170, 2, 3, 4, 5, 323, 7, 8);
break;
case 14:
func_96(&Var1, 119, 237, 2, 3, 4, 5, 6, 7, 8);
break;
case 15:
func_96(&Var1, 0, 221, 2, 3, 4, 5, 6, 7, 8);
break;
case 16:
func_96(&Var1, 114, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 17:
func_96(&Var1, 35, 268, 2, 3, 4, 5, 6, 7, 8);
break;
case 18:
func_96(&Var1, 0, 266, 2, 3, 4, 5, 6, 7, 8);
break;
case 19:
func_96(&Var1, 42, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 20:
func_96(&Var1, 76, 1, 2, 3, 4, 5, 6, 7, 8);
break;
case 21:
func_96(&Var1, 39, 235, 2, 3, 4, 5, 6, 7, 8);
break;
case 22:
func_96(&Var1, 41, 183, 2, 3, 4, 5, 6, 7, 8);
break;
case 23:
func_96(&Var1, 111, 194, 2, 3, 4, 5, 6, 7, 8);
break;
default:
func_90(&Var1, iParam0, iParam1, 25);
break;
}
break;
}
return Var1;
}


void func_90(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<4> Var1;
struct<3> Var16;
int iVar19;
if(iParam2 !=0 && iParam2 !=-99){
(*iParam0)[0]=0;
(*iParam0)[1]=1;
(*iParam0)[2]=2;
(*iParam0)[3]=3;
(*iParam0)[4]=4;
(*iParam0)[5]=5;
(*iParam0)[6]=6;
(*iParam0)[7]=7;
(*iParam0)[8]=8;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
}elseif(iParam1==joaat("player_one")){
iVar0=1;
}elseif(iParam1==joaat("player_two")){
iVar0=2;
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::GET_SHOP_PED_OUTFIT(iParam2, &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar19=0;
while (iVar19 < Var1.f_3){
if(FILES::GET_SHOP_PED_OUTFIT_PROP_VARIANT(Var1.f_1, iVar19, &Var16) && Var16.f_2 !=-1){
if((Var16.f_0 !=0 && Var16.f_0 !=-1) && Var16.f_0 !=joaat("0")){
(*iParam0)[Var16.f_2]=func_91(iParam1, Var16.f_0, 14, iVar0);
}elseif(Var16.f_1 !=-1){
(*iParam0)[Var16.f_2]=Var16.f_1;
}}
iVar19++;
}}}}

int func_91(int iParam0, int iParam1, int iParam2, int iParam3){
struct<2> Var0;
int iVar15;
int iVar16;
int iVar17;
int iVar18;
if(iParam2==12){
iVar16=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iParam3, false);
iVar15=0;
while (iVar15 < iVar16){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar15, &Var0);
if(Var0.f_1==iParam1){
return (func_95(iParam0) + iVar15);
}
iVar15++;
}}elseif(iParam2==13){}elseif(iParam2==14){
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, true, -1, -1);
iVar17=FILES::GET_SHOP_PED_QUERY_PROP_INDEX(iParam1);
if(iVar17 !=-1){
return (func_94(iParam0) + iVar17);
}}else{
FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iParam3, 10, -1, false, -1, func_93(iParam2));
iVar18=FILES::GET_SHOP_PED_QUERY_COMPONENT_INDEX(iParam1);
if(iVar18 !=-1){
return (func_92(iParam0, func_93(iParam2)) + iVar18);
}}
return -99;
}

int func_92(int iParam0, int iParam1){
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 5;
break;
case 2:
return 6;
break;
case 3:
return 181;
break;
case 4:
return 113;
break;
case 5:
return 14;
break;
case 6:
return 99;
break;
case 7:
return 1;
break;
case 8:
return 24;
break;
case 9:
return 20;
break;
case 10:
return 48;
break;
case 11:
return 45;
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 5;
break;
case 2:
return 21;
break;
case 3:
return 318;
break;
case 4:
return 117;
break;
case 5:
return 7;
break;
case 6:
return 134;
break;
case 7:
return 1;
break;
case 8:
return 77;
break;
case 9:
return 12;
break;
case 10:
return 53;
break;
case 11:
return 63;
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
return 7;
break;
case 1:
return 6;
break;
case 2:
return 9;
break;
case 3:
return 242;
break;
case 4:
return 104;
break;
case 5:
return 7;
break;
case 6:
return 84;
break;
case 7:
return 1;
break;
case 8:
return 18;
break;
case 9:
return 17;
break;
case 10:
return 33;
break;
case 11:
return 1;
break;
}
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 91;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 92;
break;
case 8:
return 241;
break;
case 9:
return 46;
break;
case 10:
return 7;
break;
case 11:
return 237;
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 26;
break;
case 2:
return 92;
break;
case 3:
return 16;
break;
case 4:
return 256;
break;
case 5:
return 9;
break;
case 6:
return 256;
break;
case 7:
return 55;
break;
case 8:
return 136;
break;
case 9:
return 36;
break;
case 10:
return 6;
break;
case 11:
return 256;
break;
}
break;
}
return -99;
}

int func_93(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}

int func_94(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 113;
break;
case joaat("player_one"):
return 175;
break;
case joaat("player_two"):
return 155;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 327;
break;
case joaat("mp_f_freemode_01"):
return 327;
break;
}
return -99;
}

int func_95(int iParam0){
switch (iParam0){
case joaat("player_zero"):
return 53;
break;
case joaat("player_one"):
return 47;
break;
case joaat("player_two"):
return 48;
break;
}
switch (iParam0){
case joaat("mp_m_freemode_01"):
return 26;
break;
case joaat("mp_f_freemode_01"):
return 28;
break;
}
return -99;
}


void func_96(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9){
(*iParam0)[0]=iParam1;
(*iParam0)[1]=iParam2;
(*iParam0)[2]=iParam3;
(*iParam0)[3]=iParam4;
(*iParam0)[4]=iParam5;
(*iParam0)[5]=iParam6;
(*iParam0)[6]=iParam7;
(*iParam0)[7]=iParam8;
(*iParam0)[8]=iParam9;
}
struct<17> func_97(int iParam0, int iParam1){
int iVar0;
struct<17> Var1;
Var1=15;
iVar0=0;
while (iVar0 <=14){
Var1[iVar0]=-99;
iVar0++;
}
Var1.f_16=0;
switch (iParam0){
case joaat("player_zero"):
switch (iParam1){
case 0:
if(Global_113386.f_9085.f_99.f_58[120]){
func_100(&Var1, -99, -99, 1, 1, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}else{
func_100(&Var1, -99, -99, 0, 0, 0, 0, 0, 0, 0, -99, 0, 0, 31);
}
break;
case 1:
func_100(&Var1, -99, -99, 16, 16, 6, 1, 1, 0, 1, -99, 0, 0, 0);
break;
case 2:
func_100(&Var1, -99, -99, 36, 21, 6, 1, 5, 0, 0, -99, 0, 0, 8);
break;
case 3:
func_100(&Var1, -99, -99, 65, 36, 6, 0, 2, 0, 0, -99, 0, 0, 31);
break;
case 4:
func_100(&Var1, -99, -99, 61, 32, 6, 0, 0, 7, 3, -99, 0, 0, 2);
break;
case 5:
func_100(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[0], Global_113386.f_2363.f_539.f_200[0], 6, 3, 0, 0, 0, -99, 0, 0, 3);
break;
case 6:
func_100(&Var1, -99, -99, 92, 72, 7, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_100(&Var1, -99, -99, 85, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 8:
func_100(&Var1, -99, -99, 170, 80, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_100(&Var1, -99, -99, 171, 89, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 4);
break;
case 11:
func_100(&Var1, -99, -99, 33, 18, 17, 10, 4, 8, 0, -99, 0, 0, 5);
break;
case 12:
func_100(&Var1, -99, -99, 35, 20, 9, 10, 23, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&Var1, -99, -99, 69, 40, 13, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&Var1, -99, -99, 62, 33, 38, 0, 8, 0, 0, -99, 0, 0, 6);
break;
case 15:
func_100(&Var1, -99, -99, 63, 34, 6, 10, 0, 0, 4, -99, 0, 0, 31);
break;
case 16:
func_100(&Var1, -99, -99, 174, 93, 18, 0, 18, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&Var1, -99, -99, 76, 46, 6, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&Var1, -99, -99, 35, 20, 9, 10, 0, 4, 0, -99, 0, 0, 7);
break;
case 19:
func_100(&Var1, -99, -99, 64, 35, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&Var1, -99, -99, 66, 37, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&Var1, -99, -99, 67, 38, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_100(&Var1, -99, -99, 68, 39, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_100(&Var1, -99, -99, 177, 94, 19, 9, 0, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_100(&Var1, -99, -99, 35, 20, 9, 10, 4, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_100(&Var1, -99, -99, 97, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_100(&Var1, -99, -99, 3, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_100(&Var1, -99, -99, 129, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_100(&Var1, -99, -99, 170, 80, 6, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_100(&Var1, -99, -99, 2, 2, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_100(&Var1, -99, -99, 161, 3, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_100(&Var1, -99, -99, 3, 3, 0, 12, 0, 0, 0, -99, 0, 1, 31);
break;
case 32:
func_100(&Var1, -99, -99, 85, 55, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_100(&Var1, -99, -99, 86, 4, 20, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_100(&Var1, -99, -99, 44, 97, 6, 0, 0, 0, 0, -99, 0, 2, 31);
break;
case 35:
func_100(&Var1, -99, -99, 85, 81, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_100(&Var1, -99, -99, 4, 4, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_100(&Var1, -99, -99, 5, 5, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_100(&Var1, -99, -99, 6, 6, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&Var1, -99, -99, 7, 7, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&Var1, -99, -99, 8, 8, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&Var1, -99, -99, 9, 9, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&Var1, -99, -99, 10, 10, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&Var1, -99, -99, 11, 11, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_100(&Var1, -99, -99, 12, 12, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_100(&Var1, -99, -99, 13, 13, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 46:
func_100(&Var1, -99, -99, 14, 14, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_100(&Var1, -99, -99, 15, 15, 0, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 48:
func_100(&Var1, -99, -99, 91, 71, 14, 13, 0, 0, 0, -99, 0, 0, 31);
break;
case 49:
func_100(&Var1, -99, -99, 35, 20, 9, 10, 0, 0, 0, -99, 0, 0, 31);
break;
case 50:
func_100(&Var1, -99, -99, 33, 18, 8, 10, 3, 8, 0, -99, 0, 0, 9);
break;
case 51:
func_100(&Var1, -99, -99, 169, 95, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 52:
func_100(&Var1, -99, -99, 169, 72, 6, 0, 0, 0, 0, -99, 0, 0, 31);
break;
default:
func_98(&Var1, iParam0, iParam1, 53);
break;
}
break;
case joaat("player_one"):
switch (iParam1){
case 0:
func_100(&Var1, -99, -99, 73, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_100(&Var1, -99, -99, 22, 10, 64, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 2:
func_100(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[1], Global_113386.f_2363.f_539.f_200[1], 17, 2, 26, 0, 0, -99, 0, 45, 31);
break;
case 3:
func_100(&Var1, -99, -99, 23, 11, 13, 5, 2, 4, 0, -99, 0, 0, 1);
break;
case 4:
func_100(&Var1, -99, -99, 23, 11, 34, 5, 26, 0, 0, -99, 0, 0, 2);
break;
case 5:
func_100(&Var1, -99, 20, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 6:
func_100(&Var1, -99, -99, 40, 13, 14, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 7:
func_100(&Var1, -99, -99, 90, 32, 17, 1, 8, 0, 1, -99, 0, 0, 3);
break;
case 8:
func_100(&Var1, -99, -99, 17, 5, 12, 0, 26, 0, 2, -99, 0, 0, 5);
break;
case 9:
func_100(&Var1, -99, -99, 16, 4, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&Var1, -99, -99, 208, 71, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_100(&Var1, -99, -99, 259, 10, 35, 0, 24, 0, 0, -99, 0, 43, 31);
break;
case 12:
func_100(&Var1, -99, -99, 18, 6, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&Var1, -99, -99, 19, 7, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&Var1, -99, -99, 20, 8, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_100(&Var1, -99, -99, 21, 9, 12, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_100(&Var1, -99, -99, 135, 40, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&Var1, -99, -99, 74, 24, 52, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&Var1, -99, -99, 176, 53, 26, 5, 26, 0, 0, -99, 0, 41, 31);
break;
case 19:
func_100(&Var1, -99, -99, 125, 24, 18, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&Var1, -99, -99, 162, 24, 36, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&Var1, -99, -99, 75, 24, 36, 0, 26, 0, 0, -99, 0, 0, 4);
break;
case 22:
func_100(&Var1, -99, -99, 227, 53, 25, 0, 27, 0, 0, -99, 0, 25, 31);
break;
case 23:
func_100(&Var1, -99, -99, 228, 54, 25, 0, 28, 0, 0, -99, 0, 26, 31);
break;
case 24:
func_100(&Var1, -99, -99, 229, 55, 25, 0, 29, 0, 0, -99, 0, 27, 31);
break;
case 25:
func_100(&Var1, -99, -99, 230, 56, 25, 0, 30, 0, 0, -99, 0, 28, 31);
break;
case 26:
func_100(&Var1, -99, -99, 231, 57, 25, 0, 31, 0, 0, -99, 0, 29, 31);
break;
case 27:
func_100(&Var1, -99, -99, 232, 58, 25, 0, 32, 0, 0, -99, 0, 30, 31);
break;
case 28:
func_100(&Var1, -99, -99, 233, 59, 25, 0, 33, 0, 0, -99, 0, 31, 31);
break;
case 29:
func_100(&Var1, -99, -99, 234, 60, 25, 0, 34, 0, 0, -99, 0, 32, 31);
break;
case 30:
func_100(&Var1, -99, -99, 235, 61, 25, 0, 35, 0, 0, -99, 0, 33, 31);
break;
case 31:
func_100(&Var1, -99, -99, 236, 62, 25, 0, 36, 0, 0, -99, 0, 34, 31);
break;
case 32:
func_100(&Var1, -99, -99, 237, 63, 25, 0, 37, 0, 0, -99, 0, 35, 31);
break;
case 33:
func_100(&Var1, -99, -99, 238, 64, 25, 0, 38, 0, 0, -99, 0, 36, 31);
break;
case 34:
func_100(&Var1, -99, -99, 239, 65, 25, 0, 39, 0, 0, -99, 0, 37, 31);
break;
case 35:
func_100(&Var1, -99, -99, 240, 66, 25, 0, 40, 0, 0, -99, 0, 38, 31);
break;
case 36:
func_100(&Var1, -99, -99, 241, 67, 25, 0, 41, 0, 0, -99, 0, 39, 31);
break;
case 37:
func_100(&Var1, -99, -99, 242, 68, 25, 0, 42, 0, 0, -99, 0, 40, 31);
break;
case 38:
func_100(&Var1, -99, -99, 260, 72, 17, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&Var1, -99, -99, 125, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&Var1, -99, -99, 123, 24, 0, 0, 26, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&Var1, -99, -99, 159, 69, 17, 5, 26, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&Var1, -99, -99, 89, 22, 15, 6, 26, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&Var1, -99, -99, 317, 69, 17, 0, 0, 0, 51, -99, 0, 0, 6);
break;
case 44:
func_100(&Var1, -99, -99, 30, 23, 16, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 45:
func_100(&Var1, -99, -99, 106, 70, 17, 5, 26, 0, 0, -99, 0, 0, 8);
break;
case 46:
func_100(&Var1, -99, -99, 117, 24, 20, 5, 26, 0, 52, -99, 0, 0, 31);
break;
default:
func_98(&Var1, iParam0, iParam1, 47);
break;
}
break;
case joaat("player_two"):
switch (iParam1){
case 0:
func_100(&Var1, -99, -99, 0, 91, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 1:
func_100(&Var1, -99, -99, 17, 5, 8, 2, 3, 0, 0, -99, 0, 0, 8);
break;
case 2:
func_100(&Var1, -99, -99, 43, 8, 12, 3, 5, 0, 0, -99, 0, 0, 1);
break;
case 3:
func_100(&Var1, -99, -99, 50, 14, 8, 0, 15, 6, 3, -99, 0, 0, 2);
break;
case 4:
func_100(&Var1, -99, -99, Global_113386.f_2363.f_539.f_196[2], Global_113386.f_2363.f_539.f_200[2], 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 5:
func_100(&Var1, -99, -99, 95, 33, 8, 0, 15, 0, 0, -99, 0, 0, 6);
break;
case 6:
func_100(&Var1, -99, -99, 49, 13, 10, 4, 6, 0, 0, -99, 0, 0, 3);
break;
case 7:
func_100(&Var1, -99, -99, 49, 13, 14, 4, 15, 0, 0, -99, 0, 0, 4);
break;
case 8:
func_100(&Var1, -99, -99, 79, 32, 8, 5, 7, 0, 0, -99, 0, 0, 31);
break;
case 9:
func_100(&Var1, -99, -99, 53, 17, 11, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 10:
func_100(&Var1, -99, -99, 96, 81, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 11:
func_100(&Var1, -99, -99, 51, 15, 33, 0, 8, 0, 0, -99, 0, 0, 5);
break;
case 12:
func_100(&Var1, -99, -99, 0, 93, 29, 0, 13, 0, 0, -99, 0, 0, 31);
break;
case 13:
func_100(&Var1, -99, -99, 52, 16, 30, 5, 15, 0, 0, -99, 0, 0, 31);
break;
case 14:
func_100(&Var1, -99, -99, 241, 92, 16, 0, 12, 0, 0, -99, 0, 0, 31);
break;
case 15:
func_100(&Var1, -99, -99, 97, 34, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 16:
func_100(&Var1, -99, -99, 44, 9, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 17:
func_100(&Var1, -99, -99, 45, 10, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 18:
func_100(&Var1, -99, -99, 46, 11, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 19:
func_100(&Var1, -99, -99, 47, 12, 12, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 20:
func_100(&Var1, -99, -99, 161, 53, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 21:
func_100(&Var1, -99, -99, 0, 44, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 22:
func_100(&Var1, -99, -99, 98, 0, 28, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 23:
func_100(&Var1, -99, -99, 27, 0, 31, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 24:
func_100(&Var1, -99, -99, 190, 71, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 25:
func_100(&Var1, -99, -99, 191, 72, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 26:
func_100(&Var1, -99, -99, 192, 73, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 27:
func_100(&Var1, -99, -99, 193, 74, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 28:
func_100(&Var1, -99, -99, 194, 75, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 29:
func_100(&Var1, -99, -99, 195, 76, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 30:
func_100(&Var1, -99, -99, 196, 77, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 31:
func_100(&Var1, -99, -99, 197, 78, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 32:
func_100(&Var1, -99, -99, 198, 79, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 33:
func_100(&Var1, -99, -99, 199, 80, 8, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 34:
func_100(&Var1, -99, -99, 200, 62, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 35:
func_100(&Var1, -99, -99, 201, 63, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 36:
func_100(&Var1, -99, -99, 202, 64, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 37:
func_100(&Var1, -99, -99, 203, 65, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 38:
func_100(&Var1, -99, -99, 204, 66, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 39:
func_100(&Var1, -99, -99, 205, 67, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 40:
func_100(&Var1, -99, -99, 206, 68, 16, 0, 15, 0, 0, -99, 0, 0, 31);
break;
case 41:
func_100(&Var1, -99, -99, 2, 43, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 42:
func_100(&Var1, -99, -99, 55, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 43:
func_100(&Var1, -99, -99, 0, 52, 8, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 44:
func_100(&Var1, -99, -99, 70, 30, 32, 6, 15, 0, 0, -99, 0, 0, 31);
break;
case 45:
func_100(&Var1, -99, -99, 19, 91, 28, 0, 0, 0, 0, -99, 0, 0, 7);
break;
case 46:
func_100(&Var1, -99, -99, 0, 0, 28, 0, 0, 0, 0, -99, 0, 0, 31);
break;
case 47:
func_100(&Var1, -99, -99, 79, 32, 8, 5, 15, 0, 0, -99, 0, 0, 31);
break;
default:
func_98(&Var1, iParam0, iParam1, 48);
break;
}
break;
case joaat("mp_m_freemode_01"):
switch (iParam1){
case 0:
func_100(&Var1, -99, -99, 0, 0, 10, -99, 0, -99, -99, 0, 0, 0, 31);
break;
case 1:
func_100(&Var1, -99, -99, 1, 127, 38, -99, 2, 0, 0, 0, 0, 62, 0);
break;
case 2:
func_100(&Var1, -99, -99, 0, 248, 45, -99, 240, 0, 0, 0, 0, 144, 1);
break;
case 3:
func_100(&Var1, -99, -99, 4, 31, 25, -99, 240, 0, 0, 0, 0, 231, 2);
break;
case 4:
func_100(&Var1, -99, -99, 1, 66, 10, -99, 21, 0, 0, 0, 0, 123, 3);
break;
case 5:
func_100(&Var1, -99, -99, 1, 93, 141, -99, 3, 0, 0, 0, 0, 114, 4);
break;
case 6:
func_100(&Var1, -99, -99, 1, 116, 113, -99, 7, 0, 0, 0, 0, 113, 5);
break;
case 7:
func_100(&Var1, -99, -99, 1, 61, 136, -99, 27, 0, 0, 0, 0, 61, 6);
break;
case 8:
func_100(&Var1, -99, -99, 0, 112, 10, -99, 240, 0, 0, 0, 0, 8, 7);
break;
case 9:
func_100(&Var1, -99, -99, 4, 131, 24, -99, 240, 0, 0, 0, 0, 223, 8);
break;
case 10:
func_100(&Var1, -99, -99, 1, 209, 188, -99, 208, 0, 0, 0, 0, 64, 9);
break;
case 11:
func_100(&Var1, -99, -99, 1, 209, 160, -99, 211, 0, 0, 0, 43, 157, 10);
break;
case 12:
func_100(&Var1, -99, -99, 1, 162, 174, -99, 201, 0, 0, 0, 0, 158, 11);
break;
case 13:
func_100(&Var1, -99, -99, 1, 4, 240, -99, 34, 0, 0, 0, 0, 97, 12);
break;
case 14:
func_100(&Var1, -99, -99, 1, 128, 232, -99, 43, 0, 0, 0, 0, 102, 13);
break;
case 15:
func_100(&Var1, -99, -99, 1, 66, 65, -99, 224, 0, 0, 0, 0, 100, 14);
break;
case 16:
func_100(&Var1, -99, -99, 1, 65, 172, -99, 202, 0, 0, 0, 0, 64, 15);
break;
case 17:
func_100(&Var1, -99, -99, 1, 64, 10, -99, 1, 0, 0, 0, 0, 66, 16);
break;
case 18:
func_100(&Var1, -99, -99, 5, 98, 80, -99, 240, 0, 0, 0, 0, 87, 17);
break;
case 19:
func_100(&Var1, -99, -99, 5, 192, 96, -99, 240, 0, 0, 0, 0, 80, 18);
break;
case 20:
func_100(&Var1, -99, -99, 1, 124, 96, -99, 11, 0, 0, 0, 0, 110, 19);
break;
case 21:
func_100(&Var1, -99, -99, 0, 80, 114, -99, 240, 0, 0, 0, 0, 2, 20);
break;
case 22:
func_100(&Var1, -99, -99, 6, 43, 112, -99, 82, 0, 0, 0, 0, 48, 21);
break;
case 23:
func_100(&Var1, -99, -99, 1, 116, 144, -99, 2, 0, 0, 0, 0, 108, 22);
break;
case 24:
func_100(&Var1, -99, -99, 1, 63, 38, -99, 3, 0, 0, 0, 0, 63, 23);
break;
case 25:
func_100(&Var1, -99, -99, 2, 64, 10, -99, 240, 0, 0, 0, 0, 41, 24);
break;
default:
func_98(&Var1, iParam0, iParam1, 26);
break;
}
break;
case joaat("mp_f_freemode_01"):
switch (iParam1){
case 0:
func_100(&Var1, -99, -99, 0, 0, 0, -99, 0, -99, -99, 0, -99, 0, 31);
break;
case 1:
func_100(&Var1, -99, -99, 5, 136, 241, -99, 47, 0, 0, 0, 0, 21, 31);
break;
case 2:
func_100(&Var1, -99, -99, 4, 1, 96, -99, 32, 0, 0, 0, 7, 215, 0);
break;
case 3:
func_100(&Var1, -99, -99, 1, 73, 241, -99, 3, 0, 0, 0, 0, 25, 1);
break;
case 4:
func_100(&Var1, -99, -99, 2, 88, 217, -99, 32, 0, 0, 0, 0, 33, 2);
break;
case 5:
func_100(&Var1, -99, -99, 9, 7, 98, -99, 32, 0, 0, 0, 7, 153, 3);
break;
case 6:
func_100(&Var1, -99, -99, 1, 140, 241, -99, 7, 0, 0, 0, 31, 16, 4);
break;
case 7:
func_100(&Var1, -99, -99, 4, 139, 112, -99, 32, 0, 0, 0, 49, 78, 5);
break;
case 8:
func_100(&Var1, -99, -99, 1, 193, 48, -99, 108, 0, 0, 0, 0, 17, 6);
break;
case 9:
func_100(&Var1, -99, -99, 5, 114, 97, -99, 103, 0, 0, 0, 0, 98, 7);
break;
case 10:
func_100(&Var1, -99, -99, 9, 134, 239, -99, 32, 0, 0, 0, 2, 144, 8);
break;
case 11:
func_100(&Var1, -99, -99, 5, 152, 96, -99, 10, 0, 0, 0, 31, 96, 9);
break;
case 12:
func_100(&Var1, -99, -99, 6, 129, 1, -99, 96, 0, 0, 0, 5, 120, 10);
break;
case 13:
func_100(&Var1, -99, -99, 5, 0, 0, -99, 10, 0, 0, 0, 0, 130, 31);
break;
case 14:
func_100(&Var1, -99, -99, 4, 159, 96, -99, 32, 0, 0, 0, 22, 214, 11);
break;
case 15:
func_100(&Var1, -99, -99, 9, 232, 213, -99, 32, 0, 0, 0, 22, 147, 12);
break;
case 16:
func_100(&Var1, -99, -99, 2, 8, 98, -99, 32, 0, 0, 0, 33, 39, 13);
break;
case 17:
func_100(&Var1, -99, -99, 5, 150, 235, -99, 106, 0, 0, 0, 0, 128, 14);
break;
case 18:
func_100(&Var1, -99, -99, 6, 96, 97, -99, 7, 0, 0, 0, 32, 114, 15);
break;
case 19:
func_100(&Var1, -99, -99, 4, 48, 64, -99, 32, 0, 0, 0, 0, 89, 16);
break;
case 20:
func_100(&Var1, -99, -99, 4, 62, 64, -99, 32, 0, 0, 0, 0, 78, 17);
break;
case 21:
func_100(&Var1, -99, -99, 4, 49, 65, -99, 32, 0, 0, 0, 8, 80, 31);
break;
case 22:
func_100(&Var1, -99, -99, 3, 20, 16, -99, 32, 0, 0, 0, 0, 49, 18);
break;
case 23:
func_100(&Var1, -99, -99, 0, 73, 178, -99, 32, 0, 0, 0, 38, 11, 19);
break;
case 24:
func_100(&Var1, -99, -99, 5, 135, 53, -99, 9, 0, 0, 0, 29, 27, 20);
break;
case 25:
func_100(&Var1, -99, -99, 7, 233, 176, -99, 120, 0, 0, 0, 11, 160, 21);
break;
case 26:
func_100(&Var1, -99, -99, 4, 34, 179, -99, 32, 0, 0, 0, 0, 77, 22);
break;
case 27:
func_100(&Var1, -99, -99, 15, 131, 93, -99, 32, 0, 0, 0, 0, 250, 23);
break;
default:
func_98(&Var1, iParam0, iParam1, 28);
break;
}
break;
}
return Var1;
}


void func_98(var uParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
struct<5> Var1;
struct<3> Var16;
struct<2> Var19;
int iVar36;
(*uParam0)[0]=0;
(*uParam0)[2]=-99;
(*uParam0)[3]=0;
(*uParam0)[4]=0;
(*uParam0)[6]=0;
(*uParam0)[5]=0;
(*uParam0)[8]=0;
(*uParam0)[9]=0;
(*uParam0)[10]=0;
(*uParam0)[1]=0;
(*uParam0)[7]=0;
(*uParam0)[11]=0;
(*uParam0)[13]=-99;
(*uParam0)[14]=-99;
uParam0->f_16=0;
iVar0=0;
if(iParam1==joaat("player_zero")){
iVar0=0;
(*uParam0)[13]=(10 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_one")){
iVar0=1;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("player_two")){
iVar0=2;
(*uParam0)[13]=(9 + (iParam2 - iParam3));
}elseif(iParam1==joaat("mp_m_freemode_01")){
iVar0=3;
}elseif(iParam1==joaat("mp_f_freemode_01")){
iVar0=4;
}
FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar0, false);
FILES::GET_SHOP_PED_QUERY_OUTFIT((iParam2 - iParam3), &Var1);
if(!FILES::IS_CONTENT_ITEM_LOCKED(Var1.f_0)){
iVar36=0;
while (iVar36 < Var1.f_4){
if(FILES::GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Var1.f_1, iVar36, &Var16)){
if((Var16.f_0 !=0 && Var16.f_0 !=-1) && Var16.f_0 !=joaat("0")){
if(Var16.f_2==10){
FILES::INIT_SHOP_PED_COMPONENT(&Var19);
FILES::GET_SHOP_PED_COMPONENT(Var16.f_0, &Var19);
if(Var16.f_0 !=Var19.f_1){
uParam0->f_16=1;
}}
if(Var16.f_2==10 && uParam0->f_16){
(*uParam0)[func_99(Var16.f_2)]=Var16.f_0;
uParam0->f_16=1;
}else{
(*uParam0)[func_99(Var16.f_2)]=func_91(iParam1, Var16.f_0, func_99(Var16.f_2), iVar0);
}}elseif(Var16.f_1 !=-1){
(*uParam0)[func_99(Var16.f_2)]=Var16.f_1;
}}
iVar36++;
}
if(Var1.f_3==0){
(*uParam0)[13]=-99;
}else{
(*uParam0)[13]=Var1.f_1;
}}}

int func_99(int iParam0){
switch (iParam0){
case 0:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 6:
return 6;
break;
case 5:
return 5;
break;
case 8:
return 8;
break;
case 9:
return 9;
break;
case 10:
return 10;
break;
case 1:
return 1;
break;
case 7:
return 7;
break;
case 11:
return 11;
break;
}
return 0;
}


void func_100(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13){
(*uParam0)[0]=iParam1;
(*uParam0)[2]=iParam2;
(*uParam0)[3]=iParam3;
(*uParam0)[4]=iParam4;
(*uParam0)[6]=iParam5;
(*uParam0)[5]=iParam6;
(*uParam0)[8]=iParam7;
(*uParam0)[9]=iParam8;
(*uParam0)[10]=iParam9;
(*uParam0)[1]=iParam10;
(*uParam0)[7]=iParam11;
(*uParam0)[11]=iParam12;
(*uParam0)[13]=iParam13;
(*uParam0)[14]=-99;
}

int func_101(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5, int iParam6){
if(iParam0==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/][iParam3]), iParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/][iParam3], bParam4);
}elseif(iParam0==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_4[iParam3], bParam4);
}elseif(iParam0==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_8[iParam3], bParam4);
}elseif(iParam0==3){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_12[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_16[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_20[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_24[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_28[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_32[iParam3], bParam4);
}elseif(iParam2==6){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_36[iParam3], bParam4);
}elseif(iParam2==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_40[iParam3], bParam4);
}elseif(iParam2==8){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_44[iParam3], bParam4);
}elseif(iParam2==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_48[iParam3], bParam4);
}}elseif(iParam0==4){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_52[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_56[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_60[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_64[iParam3], bParam4);
}}elseif(iParam0==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_68[iParam3], bParam4);
}elseif(iParam0==6){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_72[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_76[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_80[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_84[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_88[iParam3], bParam4);
}}elseif(iParam0==7){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_92[iParam3], bParam4);
}elseif(iParam0==8){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_96[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_100[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_104[iParam3], bParam4);
}}elseif(iParam0==9){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_108[iParam3], bParam4);
}elseif(iParam0==10){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_112[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_116[iParam3], bParam4);
}}elseif(iParam0==11){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_120[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_124[iParam3], bParam4);
}}elseif(iParam0==12){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_128[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_132[iParam3], bParam4);
}}elseif(iParam0==13){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_136[iParam3], bParam4);
}elseif(iParam0==14){
if(iParam2==0){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_140[iParam3], bParam4);
}elseif(iParam2==1){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_144[iParam3], bParam4);
}elseif(iParam2==2){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_148[iParam3], bParam4);
}elseif(iParam2==3){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_152[iParam3], bParam4);
}elseif(iParam2==4){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_156[iParam3], bParam4);
}elseif(iParam2==5){
if(iParam5==1){
MISC::SET_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
if(iParam6==1){
MISC::CLEAR_BIT(&(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3]), bParam4);
}
return MISC::IS_BIT_SET(Global_113386.f_2363[iParam1 /*164*/].f_160[iParam3], bParam4);
}}
return 0;
}
struct<14> func_102(int iParam0, int iParam1, int iParam2, int iParam3){
func_166();
if(iParam0==joaat("player_zero")){
func_148(iParam1, iParam2);
}elseif(iParam0==joaat("player_one")){
func_129(iParam1, iParam2);
}elseif(iParam0==joaat("player_two")){
func_103(iParam1, iParam2);
}
return Global_78130[0 /*14*/];
}


void func_103(int iParam0, int iParam1){
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
}}


void func_104(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 154:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
case 88:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P2_E1", 16);
iVar6=1;
iVar7=0;
iVar1=45;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P2_E2", 16);
iVar6=2;
iVar7=0;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P2_E2_1", 16);
iVar6=2;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P2_E2_2", 16);
iVar6=2;
iVar7=2;
iVar1=55;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P2_E2_3", 16);
iVar6=2;
iVar7=3;
iVar1=52;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P2_E2_4", 16);
iVar6=2;
iVar7=4;
iVar1=54;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P2_E2_5", 16);
iVar6=2;
iVar7=5;
iVar1=54;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P2_E2_6", 16);
iVar6=2;
iVar7=6;
iVar1=55;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P2_E2_7", 16);
iVar6=2;
iVar7=7;
iVar1=55;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P2_E2_8", 16);
iVar6=2;
iVar7=8;
iVar1=58;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P2_E2_9", 16);
iVar6=2;
iVar7=9;
iVar1=58;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P2_E3", 16);
iVar6=3;
iVar7=0;
iVar1=75;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P2_E3_1", 16);
iVar6=3;
iVar7=1;
iVar1=75;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P2_E3_2", 16);
iVar6=3;
iVar7=2;
iVar1=75;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P2_E3_3", 16);
iVar6=3;
iVar7=3;
iVar1=75;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P2_E3_4", 16);
iVar6=3;
iVar7=4;
iVar1=75;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P2_E3_5", 16);
iVar6=3;
iVar7=5;
iVar1=75;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P2_E3_6", 16);
iVar6=3;
iVar7=6;
iVar1=75;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P2_E3_7", 16);
iVar6=3;
iVar7=7;
iVar1=75;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P2_E3_8", 16);
iVar6=3;
iVar7=8;
iVar1=75;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P2_E3_9", 16);
iVar6=3;
iVar7=9;
iVar1=75;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
iVar8=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P2_E7_0", 16);
iVar6=7;
iVar7=0;
iVar1=60;
iVar8=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P2_E7_1", 16);
iVar6=7;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P2_E7_2", 16);
iVar6=7;
iVar7=2;
iVar1=50;
iVar8=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P2_E7_3", 16);
iVar6=7;
iVar7=3;
iVar1=59;
iVar8=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P2_E7_4", 16);
iVar6=7;
iVar7=4;
iVar1=55;
iVar8=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P2_E7_5", 16);
iVar6=7;
iVar7=5;
iVar1=55;
iVar8=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P2_E7_6", 16);
iVar6=7;
iVar7=6;
iVar1=65;
iVar8=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P2_E7_7", 16);
iVar6=7;
iVar7=7;
iVar1=59;
iVar8=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P2_E7_8", 16);
iVar6=7;
iVar7=8;
iVar1=79;
iVar8=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P2_E7_9", 16);
iVar6=7;
iVar7=9;
iVar1=79;
iVar8=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P2_E8_0", 16);
iVar6=8;
iVar7=0;
iVar1=150;
iVar8=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P2_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=150;
iVar8=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P2_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=170;
iVar8=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P2_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=175;
iVar8=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P2_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=180;
iVar8=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P2_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=185;
iVar8=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P2_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=189;
iVar8=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P2_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=195;
iVar8=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P2_E8_8", 16);
iVar6=8;
iVar7=8;
iVar1=210;
iVar8=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P2_E8_9", 16);
iVar6=8;
iVar7=9;
iVar1=215;
iVar8=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P2_E9_0", 16);
iVar6=9;
iVar7=0;
iVar1=165;
iVar8=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P2_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=165;
iVar8=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P2_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=169;
iVar8=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P2_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=169;
iVar8=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P2_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=175;
iVar8=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P2_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=175;
iVar8=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P2_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=175;
iVar8=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P2_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=189;
iVar8=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P2_E9_8", 16);
iVar6=9;
iVar7=8;
iVar1=195;
iVar8=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P2_E9_9", 16);
iVar6=9;
iVar7=9;
iVar1=195;
iVar8=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P2_E10_0", 16);
iVar6=10;
iVar7=0;
iVar1=49;
iVar8=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P2_E10_1", 16);
iVar6=10;
iVar7=1;
iVar1=50;
iVar8=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P2_E10_2", 16);
iVar6=10;
iVar7=2;
iVar1=52;
iVar8=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P2_E10_3", 16);
iVar6=10;
iVar7=3;
iVar1=55;
iVar8=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P2_E10_4", 16);
iVar6=10;
iVar7=4;
iVar1=60;
iVar8=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P2_E10_5", 16);
iVar6=10;
iVar7=5;
iVar1=58;
iVar8=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P2_E10_6", 16);
iVar6=10;
iVar7=6;
iVar1=60;
iVar8=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P2_E10_7", 16);
iVar6=10;
iVar7=7;
iVar1=63;
iVar8=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P2_E10_8", 16);
iVar6=10;
iVar7=8;
iVar1=65;
iVar8=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P2_E10_9", 16);
iVar6=10;
iVar7=9;
iVar1=68;
iVar8=10;
break;
case 153:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P2_H2_0", 16);
iVar6=2;
iVar7=0;
iVar1=320;
iVar8=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "PROPS_P2_H7_0", 16);
iVar6=7;
iVar7=0;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "PROPS_P2_H7_1", 16);
iVar6=7;
iVar7=1;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=4;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=5;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=6;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=7;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=8;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=9;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=10;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=11;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=12;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=13;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=14;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=15;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=6;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=7;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=14;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=14;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=15;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=16;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=16;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=17;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=18;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=18;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=19;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=19;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=20;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 59:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=20;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 60:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=20;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
iVar8=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
iVar8=0;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=1;
iVar8=0;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=2;
iVar8=0;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=3;
iVar8=0;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=4;
iVar8=0;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=5;
iVar8=0;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
iVar8=0;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
iVar8=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H26_0", 16);
iVar6=26;
iVar7=0;
iVar1=20;
iVar8=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H26_1", 16);
iVar6=26;
iVar7=1;
iVar1=25;
iVar8=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H26_2", 16);
iVar6=26;
iVar7=2;
iVar1=25;
iVar8=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H26_3", 16);
iVar6=26;
iVar7=3;
iVar1=22;
iVar8=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H26_4", 16);
iVar6=26;
iVar7=4;
iVar1=20;
iVar8=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H26_5", 16);
iVar6=26;
iVar7=5;
iVar1=25;
iVar8=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H26_6", 16);
iVar6=26;
iVar7=6;
iVar1=28;
iVar8=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H26_7", 16);
iVar6=26;
iVar7=7;
iVar1=24;
iVar8=0;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P1_H26_8", 16);
iVar6=26;
iVar7=8;
iVar1=25;
iVar8=0;
break;
case 80:
StringCopy(&Var2, "PROPS_P1_H26_9", 16);
iVar6=26;
iVar7=9;
iVar1=22;
iVar8=0;
break;
case 81:
StringCopy(&Var2, "PROPS_P1_H26_10", 16);
iVar6=26;
iVar7=10;
iVar1=18;
iVar8=0;
break;
case 82:
StringCopy(&Var2, "PROPS_P1_H26_11", 16);
iVar6=26;
iVar7=11;
iVar1=20;
iVar8=0;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_H26_12", 16);
iVar6=26;
iVar7=12;
iVar1=24;
iVar8=0;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_H26_13", 16);
iVar6=26;
iVar7=13;
iVar1=22;
iVar8=0;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_H26_14", 16);
iVar6=26;
iVar7=14;
iVar1=25;
iVar8=0;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_H26_15", 16);
iVar6=26;
iVar7=15;
iVar1=25;
iVar8=0;
break;
case 87:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
iVar8=0;
break;
default:
func_112(iVar10, iParam0, 155, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_105(var uParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10){
var uVar0;
int iVar1;
uParam0->f_6=0;
*uParam0=iParam9;
uParam0->f_1=(iParam2 % 32);
uParam0->f_2=(iParam2 / 32);
uParam0->f_3=iParam4;
uParam0->f_4=iParam5;
uParam0->f_7=iParam6;
StringCopy(&(uParam0->f_8), sParam3, 16);
uParam0->f_13=iParam8;
uParam0->f_12=func_111(iParam8);
if((uParam0->f_2 >=10 && uParam0->f_5 >=0) && uParam0->f_5 < 3){
if(!bParam10){
}
uParam0->f_2=0;
}
if(MISC::GET_HASH_KEY(sParam3) !=MISC::GET_HASH_KEY("NO_LABEL")){}
if(bParam7){
MISC::SET_BIT(&(uParam0->f_6), 3);
}
if(bParam10){
MISC::SET_BIT(&(uParam0->f_6), false);
if(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), 5);
}
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
MISC::SET_BIT(&(uParam0->f_6), 6);
if(func_59(14)){
return;
}
if(iParam1==1){
if(FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("REBREATHER"), 0)){
MISC::SET_BIT(&(uParam0->f_6), 7);
}}
if(iParam1==12){
if(!func_109(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_109(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}elseif(iParam1==13){
}elseif(iParam1==14){
if(!func_109(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_109(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
if(!func_109(Global_2883588, 1, 1, 1, -1)){
MISC::CLEAR_BIT(&(uParam0->f_6), 2);
}
if(!func_109(Global_2883588, 2, 1, 1, -1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}
if(FILES::IS_CONTENT_ITEM_LOCKED(Global_2883589)){
MISC::CLEAR_BIT(&(uParam0->f_6), true);
MISC::CLEAR_BIT(&(uParam0->f_6), false);
}}elseif(uParam0->f_5 >=0 && uParam0->f_5 < 3){
MISC::SET_BIT(&(uParam0->f_6), false);
MISC::SET_BIT(&(uParam0->f_6), 5);
if(func_101(iParam1, uParam0->f_5, uParam0->f_2, 0, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
if(func_101(iParam1, uParam0->f_5, uParam0->f_2, 1, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(!func_101(iParam1, uParam0->f_5, uParam0->f_2, 2, uParam0->f_1, 0, 0)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}else{
MISC::SET_BIT(&(uParam0->f_6), false);
if((((((((((iParam1==11 || iParam1==4) || iParam1==6) || iParam1==1) || iParam1==14) || iParam1==2) || iParam1==8) || iParam1==9) || iParam1==10) || iParam1==7) || iParam1==12){
if(func_59(14)){
return;
}
uVar0=func_43(func_108(iParam1, uParam0->f_2), Global_78127, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), true);
}
uVar0=func_43(func_107(iParam1, uParam0->f_2), Global_78127, 0);
if(MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 2);
}
if(func_106(iParam1, uParam0->f_2, &iVar1)){
uVar0=func_43(iVar1, Global_78127, 0);
if(!MISC::IS_BIT_SET(uVar0, uParam0->f_1)){
MISC::SET_BIT(&(uParam0->f_6), 4);
}}}else{
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}
if(iParam1==14){
if(iParam4==-1){
MISC::SET_BIT(&(uParam0->f_6), true);
MISC::SET_BIT(&(uParam0->f_6), 2);
}}}


bool func_106(int iParam0, int iParam1, var uParam2){
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

int func_107(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 928;
break;
case 3:
return 1415;
break;
case 4:
return 944;
break;
case 6:
return 952;
break;
case 8:
return 1416;
break;
case 9:
return 1424;
break;
case 10:
return 1426;
break;
case 1:
return 960;
break;
case 7:
return 1427;
break;
case 11:
return 936;
break;
case 14:
return 968;
break;
case 12:
return 979;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 929;
break;
case 4:
return 945;
break;
case 6:
return 953;
break;
case 8:
return 1417;
break;
case 9:
return 1425;
break;
case 7:
return 1428;
break;
case 11:
return 937;
break;
case 14:
return 969;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 930;
break;
case 4:
return 946;
break;
case 6:
return 954;
break;
case 8:
return 1418;
break;
case 7:
return 1429;
break;
case 11:
return 938;
break;
case 14:
return 970;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 947;
break;
case 6:
return 955;
break;
case 8:
return 1419;
break;
case 11:
return 939;
break;
case 14:
return 971;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 948;
break;
case 6:
return 956;
break;
case 8:
return 1420;
break;
case 11:
return 940;
break;
case 14:
return 972;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 949;
break;
case 6:
return 957;
break;
case 8:
return 1421;
break;
case 11:
return 941;
break;
case 14:
return 973;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 950;
break;
case 6:
return 958;
break;
case 8:
return 1422;
break;
case 11:
return 942;
break;
case 14:
return 974;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 951;
break;
case 6:
return 959;
break;
case 8:
return 1423;
break;
case 11:
return 943;
break;
case 14:
return 975;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 976;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 977;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 978;
break;
}
break;
}
return 936;
}

int func_108(int iParam0, int iParam1){
switch (iParam1){
case 0:
switch (iParam0){
case 2:
return 876;
break;
case 3:
return 1400;
break;
case 4:
return 892;
break;
case 6:
return 900;
break;
case 8:
return 1401;
break;
case 9:
return 1409;
break;
case 10:
return 1411;
break;
case 1:
return 908;
break;
case 7:
return 1412;
break;
case 11:
return 884;
break;
case 14:
return 916;
break;
case 12:
return 927;
break;
}
break;
case 1:
switch (iParam0){
case 2:
return 877;
break;
case 4:
return 893;
break;
case 6:
return 901;
break;
case 8:
return 1402;
break;
case 9:
return 1410;
break;
case 7:
return 1413;
break;
case 11:
return 885;
break;
case 14:
return 917;
break;
}
break;
case 2:
switch (iParam0){
case 2:
return 878;
break;
case 4:
return 894;
break;
case 6:
return 902;
break;
case 8:
return 1403;
break;
case 7:
return 1414;
break;
case 11:
return 886;
break;
case 14:
return 918;
break;
}
break;
case 3:
switch (iParam0){
case 4:
return 895;
break;
case 6:
return 903;
break;
case 8:
return 1404;
break;
case 11:
return 887;
break;
case 14:
return 919;
break;
}
break;
case 4:
switch (iParam0){
case 4:
return 896;
break;
case 6:
return 904;
break;
case 8:
return 1405;
break;
case 11:
return 888;
break;
case 14:
return 920;
break;
}
break;
case 5:
switch (iParam0){
case 4:
return 897;
break;
case 6:
return 905;
break;
case 8:
return 1406;
break;
case 11:
return 889;
break;
case 14:
return 921;
break;
}
break;
case 6:
switch (iParam0){
case 4:
return 898;
break;
case 6:
return 906;
break;
case 8:
return 1407;
break;
case 11:
return 890;
break;
case 14:
return 922;
break;
}
break;
case 7:
switch (iParam0){
case 4:
return 899;
break;
case 6:
return 907;
break;
case 8:
return 1408;
break;
case 11:
return 891;
break;
case 14:
return 923;
break;
}
break;
case 8:
switch (iParam0){
case 14:
return 924;
break;
}
break;
case 9:
switch (iParam0){
case 14:
return 925;
break;
}
break;
case 10:
switch (iParam0){
case 14:
return 926;
break;
}
break;
}
return 884;
}

int func_109(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4){
int iVar0;
var uVar1;
int iVar2;
var uVar3;
iVar0=Global_78127;
if(iParam4 !=-1){
iVar0=iParam4;
}
if(func_110(iParam0, iParam1, &iVar2, &uVar1, bParam2, bParam3)){
uVar3=func_43(iVar2, iVar0, 0);
return MISC::IS_BIT_SET(uVar3, uVar1);
}
return 0;
}


bool func_110(int iParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5){
int iVar0;
*uParam2=13122;
if((bParam4 && Global_4538418) || (!bParam4 && bParam5)){
switch (iParam1){
case 1:
switch (iParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_0"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_0"):
*uParam2=936;
*uParam3=0;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_1"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_1"):
*uParam2=936;
*uParam3=1;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_2"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_2"):
*uParam2=936;
*uParam3=2;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_3"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_3"):
*uParam2=936;
*uParam3=3;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_4"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_4"):
*uParam2=936;
*uParam3=4;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_5"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_5"):
*uParam2=936;
*uParam3=5;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_7"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_7"):
*uParam2=936;
*uParam3=7;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_8"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_8"):
*uParam2=936;
*uParam3=8;
return 1;
break;
case joaat("DLC_MP_BIKER_M_SPECIAL_0_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_2_11"):
case joaat("DLC_MP_BIKER_M_SPECIAL_4_11"):
*uParam2=936;
*uParam3=11;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("DLC_MP_STUNT_M_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_M_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_M_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}else{
switch (iParam1){
case 1:
switch (iParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=972;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=972;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=972;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=972;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=972;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=972;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=972;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=972;
*uParam3=26;
return 1;
break;
}
break;
case 2:
switch (iParam0){
case joaat("DLC_MP_STUNT_F_PHEAD_15_0"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_0"):
*uParam2=1024;
*uParam3=19;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_1"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_1"):
*uParam2=1024;
*uParam3=20;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_2"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_2"):
*uParam2=1024;
*uParam3=21;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_3"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_3"):
*uParam2=1024;
*uParam3=22;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_4"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_4"):
*uParam2=1024;
*uParam3=23;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_5"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_5"):
*uParam2=1024;
*uParam3=24;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_6"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_6"):
*uParam2=1024;
*uParam3=25;
return 1;
break;
case joaat("DLC_MP_STUNT_F_PHEAD_15_7"):
case joaat("DLC_MP_STUNT_F_PHEAD_0_7"):
*uParam2=1024;
*uParam3=26;
return 1;
break;
}
break;
}}
iVar0=-1;
if(bParam4){
if(Global_4538418){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}}elseif(bParam5){
iVar0=PED::GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}else{
iVar0=PED::GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(iParam0);
}
if(iVar0==-1){
return 0;
}
switch (iParam1){
case 1:
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
case joaat("mpsv_lp0_31"):
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
}
break;
case 2:
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
case joaat("mpsv_lp0_31"):
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
switch (SYSTEM::FLOOR((SYSTEM::TO_FLOAT(iVar0) / 32f))){
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
*uParam2=9473;
break;
}
break;
}
*uParam3=(iVar0 % 32);
return *uParam2 !=13122;
}

int func_111(int iParam0){
switch (iParam0){
case -1:
return 0;
break;
case 0:
return 0;
break;
case 1:
return 1;
break;
case 2:
return 2;
break;
case 3:
return 3;
break;
case 4:
return 4;
break;
case 5:
return 5;
break;
case 6:
return 6;
break;
case 7:
return 7;
break;
case 8:
return 8;
break;
case 9:
return 0;
break;
case 10:
return 1;
break;
case 11:
return 0;
break;
case 12:
return 0;
break;
case 13:
return 0;
break;
}
return 0;
}


void func_112(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
struct<8> Var2;
int iVar17;
int iVar18;
struct<10> Var19;
int iVar36;
int iVar37;
int iVar38;
struct<10> Var39;
int iVar56;
int iVar57;
iVar0=(iParam1 - iParam2);
iVar0=iVar0;
if(iVar0 < 0){
return;
}
iVar1=Global_78130[0 /*14*/].f_5;
if(iParam0==12){
iVar17=(iParam1 - iParam2);
if(iVar17 >=0){
iVar18=FILES::SETUP_SHOP_PED_OUTFIT_QUERY(iVar1, false);
if(iVar18 > iVar17){
FILES::GET_SHOP_PED_QUERY_OUTFIT(iVar17, &Var2);
Global_2883588=Var2.f_1;
Global_2883589=Var2.f_0;
func_105(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var2.f_7), 0, 0, Var2.f_2, 0, -1, 2, 1);
return;
}}}elseif(iParam0==13){
func_105(&(Global_78130[0 /*14*/]), iParam0, iParam1, "NO_LABEL", 0, 0, 0, 1, -1, 2, 1);
}elseif(iParam0==14){
FILES::INIT_SHOP_PED_PROP(&Var19);
iVar37=(iParam1 - iParam2);
if(iVar37 >=0){
iVar38=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, true, -1, -1);
if(iVar38 > iVar37){
FILES::GET_SHOP_PED_QUERY_PROP(iVar37, &Var19);
if(Var19.f_6==0){
iVar36=9;
}elseif(Var19.f_6==1){
iVar36=10;
}elseif(Var19.f_6==2){
iVar36=2;
}elseif(Var19.f_6==3){
iVar36=3;
}elseif(Var19.f_6==4){
iVar36=4;
}elseif(Var19.f_6==5){
iVar36=5;
}elseif(Var19.f_6==6){
iVar36=6;
}elseif(Var19.f_6==7){
iVar36=7;
}elseif(Var19.f_6==8){
iVar36=8;
}else{
iVar36=-1;
}
Global_2883588=Var19.f_1;
Global_2883589=Var19.f_0;
func_105(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var19.f_9), Var19.f_3, Var19.f_4, Var19.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var19.f_1, joaat("OUTFIT_ONLY"), 0), iVar36, 2, Var19.f_1 !=0);
return;
}}}else{
FILES::INIT_SHOP_PED_COMPONENT(&Var39);
if(iParam3 !=-1 && Global_78300){
FILES::GET_SHOP_PED_COMPONENT(iParam3, &Var39);
Global_2883588=Var39.f_1;
Global_2883589=Var39.f_0;
func_105(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 !=0);
return;
}
iVar56=(iParam1 - iParam2);
if(iVar56 >=0){
iVar57=FILES::SETUP_SHOP_PED_APPAREL_QUERY_TU(iVar1, 10, -1, false, -1, func_93(iParam0));
if(iVar57 > iVar56){
FILES::GET_SHOP_PED_QUERY_COMPONENT(iVar56, &Var39);
Global_2883588=Var39.f_1;
Global_2883589=Var39.f_0;
func_105(&(Global_78130[0 /*14*/]), iParam0, iParam1, &(Var39.f_9), Var39.f_3, Var39.f_4, Var39.f_5, FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Var39.f_1, joaat("OUTFIT_ONLY"), 0), -1, 2, Var39.f_1 !=0);
return;
}}}}


void func_113(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 9, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_114(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P2_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P2_5", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P2_6", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P2_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P2_8", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P2_9", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P2_10", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P2_13", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P2_14", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P2_15", 16);
iVar6=0;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P2_16", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P2_17", 16);
iVar6=0;
iVar7=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P2_18", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P2_19", 16);
iVar6=0;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P2_20", 16);
iVar6=0;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P2_21", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P2_22", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P2_23", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P2_24", 16);
iVar6=0;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P2_25", 16);
iVar6=0;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P2_26", 16);
iVar6=0;
iVar7=0;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P2_27", 16);
iVar6=0;
iVar7=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P2_28", 16);
iVar6=0;
iVar7=0;
iVar1=119;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P2_29", 16);
iVar6=0;
iVar7=0;
iVar1=99;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P2_30", 16);
iVar6=0;
iVar7=0;
iVar1=129;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P2_44", 16);
iVar6=0;
iVar7=0;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P2_45", 16);
iVar6=0;
iVar7=0;
iVar1=120;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P2_46", 16);
iVar6=0;
iVar7=0;
iVar1=139;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P2_47", 16);
iVar6=0;
iVar7=0;
iVar1=149;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P2_48", 16);
iVar6=0;
iVar7=0;
iVar1=145;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P2_49", 16);
iVar6=0;
iVar7=0;
iVar1=140;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P2_50", 16);
iVar6=0;
iVar7=0;
iVar1=135;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P2_31", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P2_32", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P2_33", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P2_34", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P2_35", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P2_36", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P2_37", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P2_38", 16);
iVar6=0;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P2_39", 16);
iVar6=0;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P2_40", 16);
iVar6=0;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P2_41", 16);
iVar6=0;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P2_42", 16);
iVar6=0;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P2_43", 16);
iVar6=0;
iVar7=0;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P2_12", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 48, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_115(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 1, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_116(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 1, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_117(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P2_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P2_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P2_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "BERD_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 6, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_118(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=7;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=8;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=9;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=4;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=5;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=6;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
break;
default:
func_112(iVar10, iParam0, 33, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_119(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=6;
iVar7=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=6;
iVar7=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=6;
iVar7=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=6;
iVar7=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=6;
iVar7=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=6;
iVar7=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=7;
iVar7=0;
iVar1=270;
break;
case 16:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=7;
iVar7=1;
iVar1=270;
break;
default:
func_112(iVar10, iParam0, 17, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_120(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "SPEC_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "SPEC_P2_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 18, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_121(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 7, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_122(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=22;
break;
case 2:
StringCopy(&Var2, "FEET_P2_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=45;
break;
case 3:
StringCopy(&Var2, "FEET_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=65;
break;
case 4:
StringCopy(&Var2, "FEET_P2_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=58;
break;
case 5:
StringCopy(&Var2, "FEET_P2_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=72;
break;
case 6:
StringCopy(&Var2, "FEET_P2_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=68;
break;
case 7:
StringCopy(&Var2, "FEET_P2_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=60;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "FEET_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "FEET_P2_8_0", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "FEET_P2_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "FEET_P2_9_1", 16);
iVar6=9;
iVar7=1;
iVar1=680;
break;
case 18:
StringCopy(&Var2, "FEET_P2_9_2", 16);
iVar6=9;
iVar7=2;
iVar1=650;
break;
case 19:
StringCopy(&Var2, "FEET_P2_9_3", 16);
iVar6=9;
iVar7=3;
iVar1=670;
break;
case 20:
StringCopy(&Var2, "FEET_P2_9_4", 16);
iVar6=9;
iVar7=4;
iVar1=700;
break;
case 21:
StringCopy(&Var2, "FEET_P2_9_5", 16);
iVar6=9;
iVar7=5;
iVar1=680;
break;
case 22:
StringCopy(&Var2, "FEET_P2_9_6", 16);
iVar6=9;
iVar7=6;
iVar1=720;
break;
case 23:
StringCopy(&Var2, "FEET_P2_9_7", 16);
iVar6=9;
iVar7=7;
iVar1=740;
break;
case 24:
StringCopy(&Var2, "FEET_P2_9_8", 16);
iVar6=9;
iVar7=8;
iVar1=760;
break;
case 25:
StringCopy(&Var2, "FEET_P2_9_9", 16);
iVar6=9;
iVar7=9;
iVar1=780;
break;
case 26:
StringCopy(&Var2, "FEET_P2_9_10", 16);
iVar6=9;
iVar7=10;
iVar1=750;
break;
case 27:
StringCopy(&Var2, "FEET_P2_9_11", 16);
iVar6=9;
iVar7=11;
iVar1=700;
break;
case 28:
StringCopy(&Var2, "FEET_P2_10_0", 16);
iVar6=10;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=0;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
break;
case 36:
StringCopy(&Var2, "FEET_P2_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=790;
break;
case 37:
StringCopy(&Var2, "FEET_P2_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=750;
break;
case 38:
StringCopy(&Var2, "FEET_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=860;
break;
case 39:
StringCopy(&Var2, "FEET_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=750;
break;
case 40:
StringCopy(&Var2, "FEET_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=790;
break;
case 41:
StringCopy(&Var2, "FEET_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 42:
StringCopy(&Var2, "FEET_P2_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=820;
break;
case 43:
StringCopy(&Var2, "FEET_P2_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=800;
break;
case 44:
StringCopy(&Var2, "FEET_P2_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=850;
break;
case 45:
StringCopy(&Var2, "FEET_P2_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=870;
break;
case 46:
StringCopy(&Var2, "FEET_P2_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=720;
break;
case 47:
StringCopy(&Var2, "FEET_P2_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=740;
break;
case 48:
StringCopy(&Var2, "FEET_P2_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=800;
break;
case 49:
StringCopy(&Var2, "FEET_P2_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=750;
break;
case 50:
StringCopy(&Var2, "FEET_P2_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=770;
break;
case 51:
StringCopy(&Var2, "FEET_P2_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=860;
break;
case 52:
StringCopy(&Var2, "FEET_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=850;
break;
case 53:
StringCopy(&Var2, "FEET_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=800;
break;
case 54:
StringCopy(&Var2, "FEET_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=780;
break;
case 55:
StringCopy(&Var2, "FEET_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=890;
break;
case 56:
StringCopy(&Var2, "FEET_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=820;
break;
case 57:
StringCopy(&Var2, "FEET_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=840;
break;
case 58:
StringCopy(&Var2, "FEET_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=870;
break;
case 59:
StringCopy(&Var2, "FEET_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=930;
break;
case 60:
StringCopy(&Var2, "FEET_P2_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=880;
break;
case 61:
StringCopy(&Var2, "FEET_P2_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=900;
break;
case 62:
StringCopy(&Var2, "FEET_P2_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=920;
break;
case 63:
StringCopy(&Var2, "FEET_P2_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=970;
break;
case 64:
StringCopy(&Var2, "FEET_P2_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=990;
break;
case 65:
StringCopy(&Var2, "FEET_P2_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=960;
break;
case 66:
StringCopy(&Var2, "FEET_P2_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=980;
break;
case 67:
StringCopy(&Var2, "FEET_P2_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=950;
break;
case 68:
StringCopy(&Var2, "FEET_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=110;
break;
case 69:
StringCopy(&Var2, "FEET_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 70:
StringCopy(&Var2, "FEET_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "FEET_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P2_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=125;
break;
case 73:
StringCopy(&Var2, "FEET_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=128;
break;
case 74:
StringCopy(&Var2, "FEET_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=135;
break;
case 75:
StringCopy(&Var2, "FEET_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=130;
break;
case 76:
StringCopy(&Var2, "FEET_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=145;
break;
case 77:
StringCopy(&Var2, "FEET_P2_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=110;
break;
case 78:
StringCopy(&Var2, "FEET_P2_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=120;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P2_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=150;
break;
case 80:
StringCopy(&Var2, "FEET_P2_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=125;
break;
case 81:
StringCopy(&Var2, "FEET_P2_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P2_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=130;
break;
case 83:
StringCopy(&Var2, "FEET_P2_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=110;
break;
default:
func_112(iVar10, iParam0, 84, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_123(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=95;
break;
case 2:
StringCopy(&Var2, "LEGS_P2_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=129;
break;
case 3:
StringCopy(&Var2, "LEGS_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=115;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "LEGS_P2_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "LEGS_P2_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=750;
break;
case 20:
StringCopy(&Var2, "LEGS_P2_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=650;
break;
case 21:
StringCopy(&Var2, "LEGS_P2_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=850;
break;
case 22:
StringCopy(&Var2, "LEGS_P2_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=850;
break;
case 23:
StringCopy(&Var2, "LEGS_P2_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=750;
break;
case 24:
StringCopy(&Var2, "LEGS_P2_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=690;
break;
case 25:
StringCopy(&Var2, "LEGS_P2_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=820;
break;
case 26:
StringCopy(&Var2, "LEGS_P2_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=650;
break;
case 27:
StringCopy(&Var2, "LEGS_P2_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=690;
break;
case 28:
StringCopy(&Var2, "LEGS_P2_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=690;
break;
case 29:
StringCopy(&Var2, "LEGS_P2_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=820;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "LEGS_P2_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "LEGS_P2_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 34:
StringCopy(&Var2, "LEGS_P2_16_0", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "LEGS_P2_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=58;
break;
case 36:
StringCopy(&Var2, "LEGS_P2_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=68;
break;
case 37:
StringCopy(&Var2, "LEGS_P2_17_2", 16);
iVar6=17;
iVar7=2;
iVar1=65;
break;
case 38:
StringCopy(&Var2, "LEGS_P2_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=60;
break;
case 39:
StringCopy(&Var2, "LEGS_P2_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=65;
break;
case 40:
StringCopy(&Var2, "LEGS_P2_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=63;
break;
case 41:
StringCopy(&Var2, "LEGS_P2_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=60;
break;
case 42:
StringCopy(&Var2, "LEGS_P2_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=58;
break;
case 43:
StringCopy(&Var2, "LEGS_P2_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "LEGS_P2_18_1", 16);
iVar6=18;
iVar7=1;
break;
case 45:
StringCopy(&Var2, "LEGS_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=99;
break;
case 46:
StringCopy(&Var2, "LEGS_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=105;
break;
case 47:
StringCopy(&Var2, "LEGS_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=110;
break;
case 48:
StringCopy(&Var2, "LEGS_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=110;
break;
case 49:
StringCopy(&Var2, "LEGS_P2_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=99;
break;
case 50:
StringCopy(&Var2, "LEGS_P2_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=110;
break;
case 51:
StringCopy(&Var2, "LEGS_P2_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=110;
break;
case 52:
StringCopy(&Var2, "LEGS_P2_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=105;
break;
case 53:
StringCopy(&Var2, "LEGS_P2_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=105;
break;
case 54:
StringCopy(&Var2, "LEGS_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=15;
break;
case 55:
StringCopy(&Var2, "LEGS_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=15;
break;
case 56:
StringCopy(&Var2, "LEGS_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=15;
break;
case 57:
StringCopy(&Var2, "LEGS_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=15;
break;
case 58:
StringCopy(&Var2, "LEGS_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=15;
break;
case 59:
StringCopy(&Var2, "LEGS_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=15;
break;
case 60:
StringCopy(&Var2, "LEGS_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=15;
break;
case 61:
StringCopy(&Var2, "LEGS_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=15;
break;
case 62:
StringCopy(&Var2, "LEGS_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=600;
break;
case 63:
StringCopy(&Var2, "LEGS_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=600;
break;
case 64:
StringCopy(&Var2, "LEGS_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=600;
break;
case 65:
StringCopy(&Var2, "LEGS_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=600;
break;
case 66:
StringCopy(&Var2, "LEGS_P2_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=600;
break;
case 67:
StringCopy(&Var2, "LEGS_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=600;
break;
case 68:
StringCopy(&Var2, "LEGS_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=600;
break;
case 69:
StringCopy(&Var2, "LEGS_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=600;
break;
case 70:
StringCopy(&Var2, "LEGS_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=600;
break;
case 71:
StringCopy(&Var2, "LEGS_P2_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=80;
break;
case 72:
StringCopy(&Var2, "LEGS_P2_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=80;
break;
case 73:
StringCopy(&Var2, "LEGS_P2_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=80;
break;
case 74:
StringCopy(&Var2, "LEGS_P2_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=80;
break;
case 75:
StringCopy(&Var2, "LEGS_P2_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=80;
break;
case 76:
StringCopy(&Var2, "LEGS_P2_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=80;
break;
case 77:
StringCopy(&Var2, "LEGS_P2_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=80;
break;
case 78:
StringCopy(&Var2, "LEGS_P2_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=80;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P2_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=80;
break;
case 80:
StringCopy(&Var2, "LEGS_P2_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=80;
break;
case 81:
StringCopy(&Var2, "LEGS_P2_22_0", 16);
iVar6=22;
iVar7=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P2_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=12;
break;
case 83:
StringCopy(&Var2, "LEGS_P2_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=12;
break;
case 84:
StringCopy(&Var2, "LEGS_P2_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=22;
break;
case 85:
StringCopy(&Var2, "LEGS_P2_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=18;
break;
case 86:
StringCopy(&Var2, "LEGS_P2_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=20;
break;
case 87:
StringCopy(&Var2, "LEGS_P2_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=30;
break;
case 88:
StringCopy(&Var2, "LEGS_P2_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=30;
break;
case 89:
StringCopy(&Var2, "LEGS_P2_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=30;
break;
case 90:
StringCopy(&Var2, "LEGS_P2_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=30;
break;
case 91:
StringCopy(&Var2, "LEGS_P2_23_0", 16);
iVar6=23;
iVar7=0;
break;
case 92:
StringCopy(&Var2, "LEGS_P2_24_0", 16);
iVar6=24;
iVar7=0;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
break;
case 95:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=1;
break;
case 96:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=2;
break;
case 97:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=3;
break;
case 98:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=4;
break;
case 99:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=5;
break;
case 100:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=6;
break;
case 101:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=7;
break;
case 102:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=8;
break;
case 103:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=9;
break;
default:
func_112(iVar10, iParam0, 104, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_124(int iParam0){
if(iParam0 < 136){
func_126(iParam0);
}else{
func_125(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_112(3, iParam0, 242, -1);
}}


void func_125(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 136:
StringCopy(&Var2, "TORSO_P2_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=32;
break;
case 137:
StringCopy(&Var2, "TORSO_P2_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=39;
break;
case 138:
StringCopy(&Var2, "TORSO_P2_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=40;
break;
case 139:
StringCopy(&Var2, "TORSO_P2_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=42;
break;
case 140:
StringCopy(&Var2, "TORSO_P2_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=45;
break;
case 141:
StringCopy(&Var2, "TORSO_P2_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=48;
break;
case 142:
StringCopy(&Var2, "TORSO_P2_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=52;
break;
case 143:
StringCopy(&Var2, "TORSO_P2_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=55;
break;
case 144:
StringCopy(&Var2, "TORSO_P2_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=390;
break;
case 145:
StringCopy(&Var2, "TORSO_P2_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=390;
break;
case 146:
StringCopy(&Var2, "TORSO_P2_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=560;
break;
case 147:
StringCopy(&Var2, "TORSO_P2_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=390;
break;
case 148:
StringCopy(&Var2, "TORSO_P2_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=390;
break;
case 149:
StringCopy(&Var2, "TORSO_P2_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=390;
break;
case 150:
StringCopy(&Var2, "TORSO_P2_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=560;
break;
case 151:
StringCopy(&Var2, "TORSO_P2_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=390;
break;
case 152:
StringCopy(&Var2, "TORSO_P2_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=390;
break;
case 153:
StringCopy(&Var2, "TORSO_P2_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=390;
break;
case 154:
StringCopy(&Var2, "TORSO_P2_22_10", 16);
iVar6=22;
iVar7=10;
iVar1=390;
break;
case 155:
StringCopy(&Var2, "TORSO_P2_22_11", 16);
iVar6=22;
iVar7=11;
iVar1=3950;
break;
case 156:
StringCopy(&Var2, "TORSO_P2_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=150;
break;
case 157:
StringCopy(&Var2, "TORSO_P2_23_1", 16);
iVar6=23;
iVar7=1;
break;
case 158:
StringCopy(&Var2, "TORSO_P2_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=150;
break;
case 159:
StringCopy(&Var2, "TORSO_P2_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=150;
break;
case 160:
StringCopy(&Var2, "TORSO_P2_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=160;
break;
case 161:
StringCopy(&Var2, "TORSO_P2_23_5", 16);
iVar6=23;
iVar7=5;
break;
case 162:
StringCopy(&Var2, "TORSO_P2_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=19;
break;
case 163:
StringCopy(&Var2, "TORSO_P2_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=20;
break;
case 164:
StringCopy(&Var2, "TORSO_P2_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=19;
break;
case 165:
StringCopy(&Var2, "TORSO_P2_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=22;
break;
case 166:
StringCopy(&Var2, "TORSO_P2_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=20;
break;
case 167:
StringCopy(&Var2, "TORSO_P2_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=28;
break;
case 168:
StringCopy(&Var2, "TORSO_P2_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=28;
break;
case 169:
StringCopy(&Var2, "TORSO_P2_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=25;
break;
case 170:
StringCopy(&Var2, "TORSO_P2_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=22;
break;
case 171:
StringCopy(&Var2, "TORSO_P2_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=19;
break;
case 172:
StringCopy(&Var2, "TORSO_P2_24_10", 16);
iVar6=24;
iVar7=10;
iVar1=22;
break;
case 173:
StringCopy(&Var2, "TORSO_P2_24_11", 16);
iVar6=24;
iVar7=11;
iVar1=19;
break;
case 174:
StringCopy(&Var2, "TORSO_P2_24_12", 16);
iVar6=24;
iVar7=12;
iVar1=20;
break;
case 175:
StringCopy(&Var2, "TORSO_P2_24_13", 16);
iVar6=24;
iVar7=13;
iVar1=25;
break;
case 176:
StringCopy(&Var2, "TORSO_P2_24_14", 16);
iVar6=24;
iVar7=14;
iVar1=20;
break;
case 177:
StringCopy(&Var2, "TORSO_P2_24_15", 16);
iVar6=24;
iVar7=15;
iVar1=28;
break;
case 178:
StringCopy(&Var2, "TORSO_P2_25_0", 16);
iVar6=25;
iVar7=0;
iVar1=35;
break;
case 179:
StringCopy(&Var2, "TORSO_P2_25_1", 16);
iVar6=25;
iVar7=1;
iVar1=40;
break;
case 180:
StringCopy(&Var2, "TORSO_P2_25_2", 16);
iVar6=25;
iVar7=2;
iVar1=45;
break;
case 181:
StringCopy(&Var2, "TORSO_P2_25_3", 16);
iVar6=25;
iVar7=3;
iVar1=45;
break;
case 182:
StringCopy(&Var2, "TORSO_P2_25_4", 16);
iVar6=25;
iVar7=4;
iVar1=49;
break;
case 183:
StringCopy(&Var2, "TORSO_P2_25_5", 16);
iVar6=25;
iVar7=5;
iVar1=820;
break;
case 184:
StringCopy(&Var2, "TORSO_P2_25_6", 16);
iVar6=25;
iVar7=6;
iVar1=790;
break;
case 185:
StringCopy(&Var2, "TORSO_P2_25_7", 16);
iVar6=25;
iVar7=7;
iVar1=820;
break;
case 186:
StringCopy(&Var2, "TORSO_P2_25_8", 16);
iVar6=25;
iVar7=8;
iVar1=929;
break;
case 187:
StringCopy(&Var2, "TORSO_P2_25_9", 16);
iVar6=25;
iVar7=9;
iVar1=40;
break;
case 188:
StringCopy(&Var2, "TORSO_P2_25_10", 16);
iVar6=25;
iVar7=10;
iVar1=850;
break;
case 189:
StringCopy(&Var2, "TORSO_P2_25_11", 16);
iVar6=25;
iVar7=11;
iVar1=790;
break;
case 190:
StringCopy(&Var2, "TORSO_P2_26_0", 16);
iVar6=26;
iVar7=0;
break;
case 191:
StringCopy(&Var2, "TORSO_P2_26_1", 16);
iVar6=26;
iVar7=1;
break;
case 192:
StringCopy(&Var2, "TORSO_P2_26_2", 16);
iVar6=26;
iVar7=2;
break;
case 193:
StringCopy(&Var2, "TORSO_P2_26_3", 16);
iVar6=26;
iVar7=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P2_26_4", 16);
iVar6=26;
iVar7=4;
break;
case 195:
StringCopy(&Var2, "TORSO_P2_26_5", 16);
iVar6=26;
iVar7=5;
break;
case 196:
StringCopy(&Var2, "TORSO_P2_26_6", 16);
iVar6=26;
iVar7=6;
break;
case 197:
StringCopy(&Var2, "TORSO_P2_26_7", 16);
iVar6=26;
iVar7=7;
break;
case 198:
StringCopy(&Var2, "TORSO_P2_26_8", 16);
iVar6=26;
iVar7=8;
break;
case 199:
StringCopy(&Var2, "TORSO_P2_26_9", 16);
iVar6=26;
iVar7=9;
break;
case 200:
StringCopy(&Var2, "TORSO_P2_27_0", 16);
iVar6=27;
iVar7=0;
iVar1=2200;
break;
case 201:
StringCopy(&Var2, "TORSO_P2_27_1", 16);
iVar6=27;
iVar7=1;
iVar1=2500;
break;
case 202:
StringCopy(&Var2, "TORSO_P2_27_2", 16);
iVar6=27;
iVar7=2;
iVar1=2500;
break;
case 203:
StringCopy(&Var2, "TORSO_P2_27_3", 16);
iVar6=27;
iVar7=3;
iVar1=2200;
break;
case 204:
StringCopy(&Var2, "TORSO_P2_27_4", 16);
iVar6=27;
iVar7=4;
iVar1=2500;
break;
case 205:
StringCopy(&Var2, "TORSO_P2_27_5", 16);
iVar6=27;
iVar7=5;
iVar1=2500;
break;
case 206:
StringCopy(&Var2, "TORSO_P2_27_6", 16);
iVar6=27;
iVar7=6;
iVar1=2200;
break;
case 207:
StringCopy(&Var2, "TORSO_P2_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=1100;
break;
case 208:
StringCopy(&Var2, "TORSO_P2_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=1200;
break;
case 209:
StringCopy(&Var2, "TORSO_P2_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=1220;
break;
case 210:
StringCopy(&Var2, "TORSO_P2_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=1250;
break;
case 211:
StringCopy(&Var2, "TORSO_P2_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=1300;
break;
case 212:
StringCopy(&Var2, "TORSO_P2_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=1360;
break;
case 213:
StringCopy(&Var2, "TORSO_P2_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=35;
break;
case 214:
StringCopy(&Var2, "TORSO_P2_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=38;
break;
case 215:
StringCopy(&Var2, "TORSO_P2_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=40;
break;
case 216:
StringCopy(&Var2, "TORSO_P2_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=42;
break;
case 217:
StringCopy(&Var2, "TORSO_P2_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=50;
break;
case 218:
StringCopy(&Var2, "TORSO_P2_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=45;
break;
case 219:
StringCopy(&Var2, "TORSO_P2_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=45;
break;
case 220:
StringCopy(&Var2, "TORSO_P2_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=44;
break;
case 221:
StringCopy(&Var2, "TORSO_P2_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=46;
break;
case 222:
StringCopy(&Var2, "TORSO_P2_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=52;
break;
case 223:
StringCopy(&Var2, "TORSO_P2_29_0", 16);
iVar6=29;
iVar7=0;
iVar1=3200;
break;
case 224:
StringCopy(&Var2, "TORSO_P2_29_1", 16);
iVar6=29;
iVar7=1;
iVar1=3200;
break;
case 225:
StringCopy(&Var2, "TORSO_P2_29_2", 16);
iVar6=29;
iVar7=2;
iVar1=2550;
break;
case 226:
StringCopy(&Var2, "TORSO_P2_29_3", 16);
iVar6=29;
iVar7=3;
iVar1=2750;
break;
case 227:
StringCopy(&Var2, "TORSO_P2_29_4", 16);
iVar6=29;
iVar7=4;
iVar1=2590;
break;
case 228:
StringCopy(&Var2, "TORSO_P2_29_5", 16);
iVar6=29;
iVar7=5;
iVar1=2750;
break;
case 229:
StringCopy(&Var2, "TORSO_P2_29_6", 16);
iVar6=29;
iVar7=6;
iVar1=2550;
break;
case 230:
StringCopy(&Var2, "TORSO_P2_29_7", 16);
iVar6=29;
iVar7=7;
iVar1=2590;
break;
case 231:
StringCopy(&Var2, "TORSO_P2_29_8", 16);
iVar6=29;
iVar7=8;
iVar1=2720;
break;
case 232:
StringCopy(&Var2, "TORSO_P2_29_9", 16);
iVar6=29;
iVar7=9;
iVar1=2750;
break;
case 233:
StringCopy(&Var2, "TORSO_P2_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=3250;
break;
case 234:
StringCopy(&Var2, "TORSO_P2_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=2950;
break;
case 235:
StringCopy(&Var2, "TORSO_P2_30_2", 16);
iVar6=30;
iVar7=2;
iVar1=3100;
break;
case 236:
StringCopy(&Var2, "TORSO_P2_30_3", 16);
iVar6=30;
iVar7=3;
iVar1=3150;
break;
case 237:
StringCopy(&Var2, "TORSO_P2_30_4", 16);
iVar6=30;
iVar7=4;
iVar1=3240;
break;
case 238:
StringCopy(&Var2, "TORSO_P2_30_5", 16);
iVar6=30;
iVar7=5;
iVar1=3350;
break;
case 239:
StringCopy(&Var2, "TORSO_P2_30_6", 16);
iVar6=30;
iVar7=6;
iVar1=3400;
break;
case 240:
StringCopy(&Var2, "TORSO_P2_30_7", 16);
iVar6=30;
iVar7=7;
iVar1=3280;
break;
case 241:
StringCopy(&Var2, "TORSO_P2_31_0", 16);
iVar6=31;
iVar7=0;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_126(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P2_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=25;
break;
case 2:
StringCopy(&Var2, "TORSO_P2_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "TORSO_P2_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=15;
break;
case 4:
StringCopy(&Var2, "TORSO_P2_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=25;
break;
case 5:
StringCopy(&Var2, "TORSO_P2_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=25;
break;
case 6:
StringCopy(&Var2, "TORSO_P2_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=22;
break;
case 7:
StringCopy(&Var2, "TORSO_P2_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P2_0_8", 16);
iVar6=0;
iVar7=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P2_0_9", 16);
iVar6=0;
iVar7=9;
iVar1=20;
break;
case 10:
StringCopy(&Var2, "TORSO_P2_0_10", 16);
iVar6=0;
iVar7=10;
iVar1=24;
break;
case 11:
StringCopy(&Var2, "TORSO_P2_0_11", 16);
iVar6=0;
iVar7=11;
iVar1=26;
break;
case 12:
StringCopy(&Var2, "TORSO_P2_0_12", 16);
iVar6=0;
iVar7=12;
iVar1=28;
break;
case 13:
StringCopy(&Var2, "TORSO_P2_0_13", 16);
iVar6=0;
iVar7=13;
iVar1=29;
break;
case 14:
StringCopy(&Var2, "TORSO_P2_0_14", 16);
iVar6=0;
iVar7=14;
iVar1=22;
break;
case 15:
StringCopy(&Var2, "TORSO_P2_0_15", 16);
iVar6=0;
iVar7=15;
iVar1=20;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "TORSO_P2_3_0", 16);
iVar6=3;
iVar7=0;
iVar1=35;
break;
case 19:
StringCopy(&Var2, "TORSO_P2_3_1", 16);
iVar6=3;
iVar7=1;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "TORSO_P2_3_2", 16);
iVar6=3;
iVar7=2;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P2_3_3", 16);
iVar6=3;
iVar7=3;
iVar1=38;
break;
case 22:
StringCopy(&Var2, "TORSO_P2_3_4", 16);
iVar6=3;
iVar7=4;
iVar1=40;
break;
case 23:
StringCopy(&Var2, "TORSO_P2_3_5", 16);
iVar6=3;
iVar7=5;
iVar1=40;
break;
case 24:
StringCopy(&Var2, "TORSO_P2_3_6", 16);
iVar6=3;
iVar7=6;
iVar1=40;
break;
case 25:
StringCopy(&Var2, "TORSO_P2_3_7", 16);
iVar6=3;
iVar7=7;
iVar1=40;
break;
case 26:
StringCopy(&Var2, "TORSO_P2_3_8", 16);
iVar6=3;
iVar7=8;
iVar1=40;
break;
case 27:
StringCopy(&Var2, "TORSO_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "TORSO_P2_4_1", 16);
iVar6=4;
iVar7=1;
iVar1=500;
break;
case 29:
StringCopy(&Var2, "TORSO_P2_4_2", 16);
iVar6=4;
iVar7=2;
iVar1=560;
break;
case 30:
StringCopy(&Var2, "TORSO_P2_4_3", 16);
iVar6=4;
iVar7=3;
iVar1=600;
break;
case 31:
StringCopy(&Var2, "TORSO_P2_4_4tu", 16);
iVar6=4;
iVar7=4;
iVar1=650;
break;
case 32:
StringCopy(&Var2, "TORSO_P2_4_5tu", 16);
iVar6=4;
iVar7=5;
iVar1=500;
break;
case 33:
StringCopy(&Var2, "TORSO_P2_4_6tu", 16);
iVar6=4;
iVar7=6;
iVar1=560;
break;
case 34:
StringCopy(&Var2, "TORSO_P2_4_7", 16);
iVar6=4;
iVar7=7;
iVar1=500;
break;
case 35:
StringCopy(&Var2, "TORSO_P2_4_8", 16);
iVar6=4;
iVar7=8;
iVar1=650;
break;
case 36:
StringCopy(&Var2, "TORSO_P2_4_9", 16);
iVar6=4;
iVar7=9;
iVar1=540;
break;
case 37:
StringCopy(&Var2, "TORSO_P2_4_10", 16);
iVar6=4;
iVar7=10;
iVar1=690;
break;
case 38:
StringCopy(&Var2, "TORSO_P2_4_11", 16);
iVar6=4;
iVar7=11;
iVar1=560;
break;
case 39:
StringCopy(&Var2, "TORSO_P2_4_12", 16);
iVar6=4;
iVar7=12;
iVar1=590;
break;
case 40:
StringCopy(&Var2, "TORSO_P2_4_13", 16);
iVar6=4;
iVar7=13;
iVar1=690;
break;
case 41:
StringCopy(&Var2, "TORSO_P2_4_14", 16);
iVar6=4;
iVar7=14;
iVar1=540;
break;
case 42:
StringCopy(&Var2, "TORSO_P2_4_15", 16);
iVar6=4;
iVar7=15;
iVar1=500;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
bVar0=true;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
bVar0=true;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
bVar0=true;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
bVar0=true;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 54:
StringCopy(&Var2, "TORSO_P2_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 55:
StringCopy(&Var2, "TORSO_P2_11_1", 16);
iVar6=11;
iVar7=1;
break;
case 56:
StringCopy(&Var2, "TORSO_P2_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "TORSO_P2_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "TORSO_P2_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=22;
break;
case 59:
StringCopy(&Var2, "TORSO_P2_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=350;
break;
case 60:
StringCopy(&Var2, "TORSO_P2_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=27;
break;
case 61:
StringCopy(&Var2, "TORSO_P2_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=370;
break;
case 62:
StringCopy(&Var2, "TORSO_P2_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=25;
break;
case 63:
StringCopy(&Var2, "TORSO_P2_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=22;
break;
case 64:
StringCopy(&Var2, "TORSO_P2_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=25;
break;
case 65:
StringCopy(&Var2, "TORSO_P2_11_11", 16);
iVar6=11;
iVar7=11;
break;
case 66:
StringCopy(&Var2, "TORSO_P2_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=22;
break;
case 67:
StringCopy(&Var2, "TORSO_P2_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=27;
break;
case 68:
StringCopy(&Var2, "TORSO_P2_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=25;
break;
case 69:
StringCopy(&Var2, "TORSO_P2_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=27;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
iVar9=1;
break;
case 71:
StringCopy(&Var2, "TORSO_P2_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 72:
StringCopy(&Var2, "TORSO_P2_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=39;
break;
case 73:
StringCopy(&Var2, "TORSO_P2_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=42;
break;
case 74:
StringCopy(&Var2, "TORSO_P2_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=49;
break;
case 75:
StringCopy(&Var2, "TORSO_P2_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=35;
break;
case 76:
StringCopy(&Var2, "TORSO_P2_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=50;
break;
case 77:
StringCopy(&Var2, "TORSO_P2_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=50;
break;
case 78:
StringCopy(&Var2, "TORSO_P2_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=50;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P2_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 80:
StringCopy(&Var2, "TORSO_P2_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=88;
break;
case 81:
StringCopy(&Var2, "TORSO_P2_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=60;
break;
case 82:
StringCopy(&Var2, "TORSO_P2_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=80;
break;
case 83:
StringCopy(&Var2, "TORSO_P2_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=70;
break;
case 84:
StringCopy(&Var2, "TORSO_P2_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=80;
break;
case 85:
StringCopy(&Var2, "TORSO_P2_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=70;
break;
case 86:
StringCopy(&Var2, "TORSO_P2_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=90;
break;
case 87:
StringCopy(&Var2, "TORSO_P2_14_8", 16);
iVar6=14;
iVar7=8;
iVar1=95;
break;
case 88:
StringCopy(&Var2, "TORSO_P2_14_9", 16);
iVar6=14;
iVar7=9;
iVar1=105;
break;
case 89:
StringCopy(&Var2, "TORSO_P2_14_10", 16);
iVar6=14;
iVar7=10;
iVar1=95;
break;
case 90:
StringCopy(&Var2, "TORSO_P2_14_11", 16);
iVar6=14;
iVar7=11;
iVar1=110;
break;
case 91:
StringCopy(&Var2, "TORSO_P2_14_12", 16);
iVar6=14;
iVar7=12;
iVar1=98;
break;
case 92:
StringCopy(&Var2, "TORSO_P2_14_13", 16);
iVar6=14;
iVar7=13;
iVar1=88;
break;
case 93:
StringCopy(&Var2, "TORSO_P2_14_14", 16);
iVar6=14;
iVar7=14;
iVar1=98;
break;
case 94:
StringCopy(&Var2, "TORSO_P2_14_15", 16);
iVar6=14;
iVar7=15;
iVar1=110;
break;
case 95:
StringCopy(&Var2, "TORSO_P2_15_0", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 96:
StringCopy(&Var2, "TORSO_P2_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 97:
StringCopy(&Var2, "TORSO_P2_17_0", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 98:
StringCopy(&Var2, "TORSO_P2_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 99:
StringCopy(&Var2, "TORSO_P2_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=520;
break;
case 100:
StringCopy(&Var2, "TORSO_P2_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=490;
break;
case 101:
StringCopy(&Var2, "TORSO_P2_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=450;
break;
case 102:
StringCopy(&Var2, "TORSO_P2_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=420;
break;
case 103:
StringCopy(&Var2, "TORSO_P2_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=420;
break;
case 104:
StringCopy(&Var2, "TORSO_P2_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=85;
break;
case 105:
StringCopy(&Var2, "TORSO_P2_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=85;
break;
case 106:
StringCopy(&Var2, "TORSO_P2_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "TORSO_P2_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=68;
break;
case 108:
StringCopy(&Var2, "TORSO_P2_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=68;
break;
case 109:
StringCopy(&Var2, "TORSO_P2_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=78;
break;
case 110:
StringCopy(&Var2, "TORSO_P2_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=85;
break;
case 111:
StringCopy(&Var2, "TORSO_P2_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=68;
break;
case 112:
StringCopy(&Var2, "TORSO_P2_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=75;
break;
case 113:
StringCopy(&Var2, "TORSO_P2_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=75;
break;
case 114:
StringCopy(&Var2, "TORSO_P2_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=78;
break;
case 115:
StringCopy(&Var2, "TORSO_P2_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=75;
break;
case 116:
StringCopy(&Var2, "TORSO_P2_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=75;
break;
case 117:
StringCopy(&Var2, "TORSO_P2_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=75;
break;
case 118:
StringCopy(&Var2, "TORSO_P2_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=78;
break;
case 119:
StringCopy(&Var2, "TORSO_P2_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=78;
break;
case 120:
StringCopy(&Var2, "TORSO_P2_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=40;
break;
case 121:
StringCopy(&Var2, "TORSO_P2_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=32;
break;
case 122:
StringCopy(&Var2, "TORSO_P2_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=32;
break;
case 123:
StringCopy(&Var2, "TORSO_P2_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=32;
break;
case 124:
StringCopy(&Var2, "TORSO_P2_20_4", 16);
iVar6=20;
iVar7=4;
break;
case 125:
StringCopy(&Var2, "TORSO_P2_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=38;
break;
case 126:
StringCopy(&Var2, "TORSO_P2_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=35;
break;
case 127:
StringCopy(&Var2, "TORSO_P2_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=38;
break;
case 128:
StringCopy(&Var2, "TORSO_P2_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=29;
break;
case 129:
StringCopy(&Var2, "TORSO_P2_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=32;
break;
case 130:
StringCopy(&Var2, "TORSO_P2_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=29;
break;
case 131:
StringCopy(&Var2, "TORSO_P2_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=35;
break;
case 132:
StringCopy(&Var2, "TORSO_P2_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=32;
break;
case 133:
StringCopy(&Var2, "TORSO_P2_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=35;
break;
case 134:
StringCopy(&Var2, "TORSO_P2_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=32;
break;
case 135:
StringCopy(&Var2, "TORSO_P2_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=40;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_127(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P2_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P2_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P2_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P2_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P2_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "HAIR_P2_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "HAIR_P2_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "HAIR_P2_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "HAIR_P2_7_0", 16);
iVar6=7;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 9, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_128(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=2;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
default:
func_112(iVar10, iParam0, 7, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_129(int iParam0, int iParam1){
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
}}


void func_130(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 158:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
case 159:
StringCopy(&Var2, "PROPS_P1_EA1_0", 16);
iVar6=1;
iVar7=0;
iVar1=4590;
iVar8=2;
break;
case 160:
StringCopy(&Var2, "PROPS_P1_EA1_1", 16);
iVar6=1;
iVar7=1;
iVar1=4100;
iVar8=2;
break;
case 161:
StringCopy(&Var2, "PROPS_P1_EA1_2", 16);
iVar6=1;
iVar7=2;
iVar1=3850;
iVar8=2;
break;
case 162:
StringCopy(&Var2, "PROPS_P1_EA1_3", 16);
iVar6=1;
iVar7=3;
iVar1=1850;
iVar8=2;
break;
case 163:
StringCopy(&Var2, "PROPS_P1_EA1_4", 16);
iVar6=1;
iVar7=4;
iVar1=5250;
iVar8=2;
break;
case 164:
StringCopy(&Var2, "PROPS_P1_EA1_5", 16);
iVar6=1;
iVar7=5;
iVar1=2700;
iVar8=2;
break;
case 165:
StringCopy(&Var2, "PROPS_P1_EA1_6", 16);
iVar6=1;
iVar7=6;
iVar1=3100;
iVar8=2;
break;
case 166:
StringCopy(&Var2, "PROPS_P1_EA1_7", 16);
iVar6=1;
iVar7=7;
iVar1=5050;
iVar8=2;
break;
case 167:
StringCopy(&Var2, "PROPS_P1_EA2_0", 16);
iVar6=2;
iVar7=0;
iVar1=2500;
iVar8=2;
break;
case 168:
StringCopy(&Var2, "PROPS_P1_EA2_1", 16);
iVar6=2;
iVar7=1;
iVar1=1950;
iVar8=2;
break;
case 169:
StringCopy(&Var2, "PROPS_P1_EA2_2", 16);
iVar6=2;
iVar7=2;
iVar1=3900;
iVar8=2;
break;
case 170:
StringCopy(&Var2, "PROPS_P1_EA2_3", 16);
iVar6=2;
iVar7=3;
iVar1=3550;
iVar8=2;
break;
case 171:
StringCopy(&Var2, "PROPS_P1_EA2_4", 16);
iVar6=2;
iVar7=4;
iVar1=4500;
iVar8=2;
break;
case 172:
StringCopy(&Var2, "PROPS_P1_EA2_5", 16);
iVar6=2;
iVar7=5;
iVar1=2700;
iVar8=2;
break;
case 173:
StringCopy(&Var2, "PROPS_P1_EA2_6", 16);
iVar6=2;
iVar7=6;
iVar1=3100;
iVar8=2;
break;
case 174:
StringCopy(&Var2, "PROPS_P1_EA2_7", 16);
iVar6=2;
iVar7=7;
iVar1=2950;
iVar8=2;
break;
case 82:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P1_E1_0", 16);
iVar6=1;
iVar7=0;
iVar1=75;
iVar8=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P1_E1_1", 16);
iVar6=1;
iVar7=1;
iVar1=75;
iVar8=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P1_E1_2", 16);
iVar6=1;
iVar7=2;
iVar1=75;
iVar8=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P1_E1_3", 16);
iVar6=1;
iVar7=3;
iVar1=75;
iVar8=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P1_E1_4", 16);
iVar6=1;
iVar7=4;
iVar1=75;
iVar8=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P1_E1_5", 16);
iVar6=1;
iVar7=5;
iVar1=75;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P1_E1_6", 16);
iVar6=1;
iVar7=6;
iVar1=75;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P1_E1_7", 16);
iVar6=1;
iVar7=7;
iVar1=75;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P1_E1_8", 16);
iVar6=1;
iVar7=8;
iVar1=75;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P1_E1_9", 16);
iVar6=1;
iVar7=9;
iVar1=75;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P1_E2", 16);
iVar6=2;
iVar7=0;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P1_E3", 16);
iVar6=3;
iVar7=0;
iVar1=110;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P1_E4_0", 16);
iVar6=4;
iVar7=0;
iVar1=120;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P1_E4_1", 16);
iVar6=4;
iVar7=1;
iVar1=128;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P1_E4_2", 16);
iVar6=4;
iVar7=2;
iVar1=130;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P1_E4_3", 16);
iVar6=4;
iVar7=3;
iVar1=140;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P1_E4_4", 16);
iVar6=4;
iVar7=4;
iVar1=145;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P1_E4_5", 16);
iVar6=4;
iVar7=5;
iVar1=135;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P1_E4_6", 16);
iVar6=4;
iVar7=6;
iVar1=138;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P1_E5_0", 16);
iVar6=5;
iVar7=0;
iVar1=110;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P1_E5_1", 16);
iVar6=5;
iVar7=1;
iVar1=112;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P1_E5_2", 16);
iVar6=5;
iVar7=2;
iVar1=115;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P1_E5_3", 16);
iVar6=5;
iVar7=3;
iVar1=118;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P1_E5_4", 16);
iVar6=5;
iVar7=4;
iVar1=120;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P1_E5_5", 16);
iVar6=5;
iVar7=5;
iVar1=125;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P1_E5_6", 16);
iVar6=5;
iVar7=6;
iVar1=128;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P1_E5_7", 16);
iVar6=5;
iVar7=7;
iVar1=138;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P1_E5_8", 16);
iVar6=5;
iVar7=8;
iVar1=140;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "PROPS_P1_E5_9", 16);
iVar6=5;
iVar7=9;
iVar1=155;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "PROPS_P1_E6_0", 16);
iVar6=6;
iVar7=0;
iVar1=55;
iVar8=10;
break;
case 113:
StringCopy(&Var2, "PROPS_P1_E6_1", 16);
iVar6=6;
iVar7=1;
iVar1=55;
iVar8=10;
break;
case 114:
StringCopy(&Var2, "PROPS_P1_E6_2", 16);
iVar6=6;
iVar7=2;
iVar1=58;
iVar8=10;
break;
case 115:
StringCopy(&Var2, "PROPS_P1_E6_3", 16);
iVar6=6;
iVar7=3;
iVar1=58;
iVar8=10;
break;
case 116:
StringCopy(&Var2, "PROPS_P1_E6_4", 16);
iVar6=6;
iVar7=4;
iVar1=60;
iVar8=10;
break;
case 117:
StringCopy(&Var2, "PROPS_P1_E6_5", 16);
iVar6=6;
iVar7=5;
iVar1=62;
iVar8=10;
break;
case 118:
StringCopy(&Var2, "PROPS_P1_E6_6", 16);
iVar6=6;
iVar7=6;
iVar1=65;
iVar8=10;
break;
case 119:
StringCopy(&Var2, "PROPS_P1_E6_7", 16);
iVar6=6;
iVar7=7;
iVar1=68;
iVar8=10;
break;
case 120:
StringCopy(&Var2, "PROPS_P1_E6_8", 16);
iVar6=6;
iVar7=8;
iVar1=68;
iVar8=10;
break;
case 121:
StringCopy(&Var2, "PROPS_P1_E6_9", 16);
iVar6=6;
iVar7=9;
iVar1=72;
iVar8=10;
break;
case 122:
StringCopy(&Var2, "PROPS_P1_E7_0", 16);
iVar6=7;
iVar7=0;
iVar1=145;
iVar8=10;
break;
case 123:
StringCopy(&Var2, "PROPS_P1_E7_1", 16);
iVar6=7;
iVar7=1;
iVar1=149;
iVar8=10;
break;
case 124:
StringCopy(&Var2, "PROPS_P1_E7_2", 16);
iVar6=7;
iVar7=2;
iVar1=139;
iVar8=10;
break;
case 125:
StringCopy(&Var2, "PROPS_P1_E7_3", 16);
iVar6=7;
iVar7=3;
iVar1=149;
iVar8=10;
break;
case 126:
StringCopy(&Var2, "PROPS_P1_E7_4", 16);
iVar6=7;
iVar7=4;
iVar1=135;
iVar8=10;
break;
case 127:
StringCopy(&Var2, "PROPS_P1_E7_5", 16);
iVar6=7;
iVar7=5;
iVar1=138;
iVar8=10;
break;
case 128:
StringCopy(&Var2, "PROPS_P1_E7_6", 16);
iVar6=7;
iVar7=6;
iVar1=140;
iVar8=10;
break;
case 129:
StringCopy(&Var2, "PROPS_P1_E7_7", 16);
iVar6=7;
iVar7=7;
iVar1=145;
iVar8=10;
break;
case 130:
StringCopy(&Var2, "PROPS_P1_E7_8", 16);
iVar6=7;
iVar7=8;
iVar1=159;
iVar8=10;
break;
case 131:
StringCopy(&Var2, "PROPS_P1_E7_9", 16);
iVar6=7;
iVar7=9;
iVar1=155;
iVar8=10;
break;
case 132:
StringCopy(&Var2, "PROPS_P1_E8_0", 16);
iVar6=8;
iVar7=0;
iVar1=198;
iVar8=10;
break;
case 133:
StringCopy(&Var2, "PROPS_P1_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=210;
iVar8=10;
break;
case 134:
StringCopy(&Var2, "PROPS_P1_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=185;
iVar8=10;
break;
case 135:
StringCopy(&Var2, "PROPS_P1_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=220;
iVar8=10;
break;
case 136:
StringCopy(&Var2, "PROPS_P1_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=190;
iVar8=10;
break;
case 137:
StringCopy(&Var2, "PROPS_P1_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=200;
iVar8=10;
break;
case 138:
StringCopy(&Var2, "PROPS_P1_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=208;
iVar8=10;
break;
case 139:
StringCopy(&Var2, "PROPS_P1_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=210;
iVar8=10;
break;
case 140:
StringCopy(&Var2, "PROPS_P1_E9_0", 16);
iVar6=9;
iVar7=0;
iVar1=165;
iVar8=10;
break;
case 141:
StringCopy(&Var2, "PROPS_P1_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=185;
iVar8=10;
break;
case 142:
StringCopy(&Var2, "PROPS_P1_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=190;
iVar8=10;
break;
case 143:
StringCopy(&Var2, "PROPS_P1_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=178;
iVar8=10;
break;
case 144:
StringCopy(&Var2, "PROPS_P1_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=180;
iVar8=10;
break;
case 145:
StringCopy(&Var2, "PROPS_P1_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=168;
iVar8=10;
break;
case 146:
StringCopy(&Var2, "PROPS_P1_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=170;
iVar8=10;
break;
case 147:
StringCopy(&Var2, "PROPS_P1_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=175;
iVar8=10;
break;
case 148:
StringCopy(&Var2, "PROPS_P1_E9_8", 16);
iVar6=9;
iVar7=8;
iVar1=170;
iVar8=10;
break;
case 149:
StringCopy(&Var2, "PROPS_P1_E9_9", 16);
iVar6=9;
iVar7=9;
iVar1=178;
iVar8=10;
break;
case 150:
StringCopy(&Var2, "PROPS_P1_E10_0", 16);
iVar6=10;
iVar7=0;
iVar1=140;
iVar8=10;
break;
case 151:
StringCopy(&Var2, "PROPS_P1_E10_1", 16);
iVar6=10;
iVar7=1;
iVar1=145;
iVar8=10;
break;
case 152:
StringCopy(&Var2, "PROPS_P1_E10_2", 16);
iVar6=10;
iVar7=2;
iVar1=150;
iVar8=10;
break;
case 153:
StringCopy(&Var2, "PROPS_P1_E10_3", 16);
iVar6=10;
iVar7=3;
iVar1=165;
iVar8=10;
break;
case 154:
StringCopy(&Var2, "PROPS_P1_E10_4", 16);
iVar6=10;
iVar7=4;
iVar1=168;
iVar8=10;
break;
case 155:
StringCopy(&Var2, "PROPS_P1_E10_5", 16);
iVar6=10;
iVar7=5;
iVar1=178;
iVar8=10;
break;
case 156:
StringCopy(&Var2, "PROPS_P1_E10_6", 16);
iVar6=10;
iVar7=6;
iVar1=160;
iVar8=10;
break;
case 157:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 10:
StringCopy(&Var2, "PROPS_P1_H0_0", 16);
iVar6=0;
iVar7=0;
iVar1=320;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 13:
StringCopy(&Var2, "PROPS_P1_H3_0", 16);
iVar6=3;
iVar7=0;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=7;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=8;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=8;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=8;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=9;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=9;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=10;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=10;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=11;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=12;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=12;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=13;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=13;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=14;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=14;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=14;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar6=16;
iVar7=0;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar6=16;
iVar7=1;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar6=16;
iVar7=2;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar6=16;
iVar7=3;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar6=16;
iVar7=4;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar6=16;
iVar7=5;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar6=16;
iVar7=6;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar6=16;
iVar7=7;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar6=16;
iVar7=8;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar6=16;
iVar7=9;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar6=16;
iVar7=10;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar6=16;
iVar7=11;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar6=16;
iVar7=12;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar6=16;
iVar7=13;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar6=16;
iVar7=14;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar6=16;
iVar7=15;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=1;
iVar8=0;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=2;
iVar8=0;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=3;
iVar8=0;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=4;
iVar8=0;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=5;
iVar8=0;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
iVar8=0;
break;
case 64:
StringCopy(&Var2, "PROPS_P1_H19_0", 16);
iVar6=19;
iVar7=0;
iVar1=30;
iVar8=0;
break;
case 65:
StringCopy(&Var2, "PROPS_P1_H19_1", 16);
iVar6=19;
iVar7=1;
iVar1=30;
iVar8=0;
break;
case 66:
StringCopy(&Var2, "PROPS_P1_H19_2", 16);
iVar6=19;
iVar7=2;
iVar1=32;
iVar8=0;
break;
case 67:
StringCopy(&Var2, "PROPS_P1_H19_3", 16);
iVar6=19;
iVar7=3;
iVar1=35;
iVar8=0;
break;
case 68:
StringCopy(&Var2, "PROPS_P1_H19_4", 16);
iVar6=19;
iVar7=4;
iVar1=38;
iVar8=0;
break;
case 69:
StringCopy(&Var2, "PROPS_P1_H19_5", 16);
iVar6=19;
iVar7=5;
iVar1=42;
iVar8=0;
break;
case 70:
StringCopy(&Var2, "PROPS_P1_H19_6", 16);
iVar6=19;
iVar7=6;
iVar1=42;
iVar8=0;
break;
case 71:
StringCopy(&Var2, "PROPS_P1_H19_7", 16);
iVar6=19;
iVar7=7;
iVar1=40;
iVar8=0;
break;
case 72:
StringCopy(&Var2, "PROPS_P1_H19_8", 16);
iVar6=19;
iVar7=8;
iVar1=45;
iVar8=0;
break;
case 73:
StringCopy(&Var2, "PROPS_P1_H19_9", 16);
iVar6=19;
iVar7=9;
iVar1=48;
iVar8=0;
break;
case 74:
StringCopy(&Var2, "PROPS_P1_H19_10", 16);
iVar6=19;
iVar7=10;
iVar1=25;
iVar8=0;
break;
case 75:
StringCopy(&Var2, "PROPS_P1_H19_11", 16);
iVar6=19;
iVar7=11;
iVar1=25;
iVar8=0;
break;
case 76:
StringCopy(&Var2, "PROPS_P1_H19_12", 16);
iVar6=19;
iVar7=12;
iVar1=28;
iVar8=0;
break;
case 77:
StringCopy(&Var2, "PROPS_P1_H19_13", 16);
iVar6=19;
iVar7=13;
iVar1=28;
iVar8=0;
break;
case 78:
StringCopy(&Var2, "PROPS_P1_H19_14", 16);
iVar6=19;
iVar7=14;
iVar1=30;
iVar8=0;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P1_H19_15", 16);
iVar6=19;
iVar7=15;
iVar1=35;
iVar8=0;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
iVar8=0;
break;
case 81:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
default:
func_112(iVar10, iParam0, 175, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_131(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 9, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_132(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P1_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P1_2", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "OUTFIT_P1_4", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P1_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P1_11", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "OUTFIT_P1_12", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P1_13", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P1_15", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "OUTFIT_P1_16", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P1_17", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P1_18", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P1_19", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P1_20", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P1_21", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P1_22", 16);
iVar6=0;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P1_23", 16);
iVar6=0;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P1_24", 16);
iVar6=0;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P1_25", 16);
iVar6=0;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P1_26", 16);
iVar6=0;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P1_27", 16);
iVar6=0;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P1_28", 16);
iVar6=0;
iVar7=0;
iVar1=4000;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P1_29", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P1_30", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P1_31", 16);
iVar6=0;
iVar7=0;
iVar1=4650;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P1_32", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P1_33", 16);
iVar6=0;
iVar7=0;
iVar1=5000;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P1_34", 16);
iVar6=0;
iVar7=0;
iVar1=4750;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P1_35", 16);
iVar6=0;
iVar7=0;
iVar1=4750;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P1_36", 16);
iVar6=0;
iVar7=0;
iVar1=5200;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P1_37", 16);
iVar6=0;
iVar7=0;
iVar1=5200;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P1_38", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P1_39", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P1_40", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P1_41", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P1_42", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P1_43", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P1_47", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P1_48", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P1_49", 16);
iVar6=0;
iVar7=0;
iVar1=3000;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P1_10", 16);
iVar6=0;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P1_50", 16);
iVar6=0;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P1_51", 16);
iVar6=0;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P1_52", 16);
iVar6=0;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P1_53", 16);
iVar6=0;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P1_54", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 47, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_133(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
break;
case 5:
StringCopy(&Var2, "JBIB_P1_1_0", 16);
iVar6=2;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "JBIB_P1_1_1", 16);
iVar6=2;
iVar7=1;
break;
case 7:
StringCopy(&Var2, "JBIB_P1_1_2", 16);
iVar6=2;
iVar7=2;
break;
case 8:
StringCopy(&Var2, "JBIB_P1_1_3", 16);
iVar6=2;
iVar7=3;
break;
case 9:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar6=3;
iVar7=1;
break;
case 11:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar6=3;
iVar7=2;
break;
case 12:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar6=3;
iVar7=3;
break;
case 13:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar6=3;
iVar7=4;
break;
case 14:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar6=3;
iVar7=5;
break;
case 15:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar6=3;
iVar7=6;
break;
case 16:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar6=3;
iVar7=7;
break;
case 17:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar6=3;
iVar7=8;
break;
case 18:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar6=3;
iVar7=9;
break;
case 19:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar6=3;
iVar7=10;
break;
case 20:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar6=3;
iVar7=11;
break;
case 21:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar6=3;
iVar7=12;
break;
case 22:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar6=3;
iVar7=13;
break;
case 23:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar6=3;
iVar7=14;
break;
case 24:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar6=3;
iVar7=15;
break;
case 25:
StringCopy(&Var2, "JBIB_P1_3_0", 16);
iVar6=4;
iVar7=0;
break;
case 26:
StringCopy(&Var2, "JBIB_P1_3_1", 16);
iVar6=4;
iVar7=1;
break;
case 27:
StringCopy(&Var2, "JBIB_P1_3_2", 16);
iVar6=4;
iVar7=2;
break;
case 28:
StringCopy(&Var2, "JBIB_P1_3_3", 16);
iVar6=4;
iVar7=3;
break;
case 29:
StringCopy(&Var2, "JBIB_P1_3_4", 16);
iVar6=4;
iVar7=4;
break;
case 30:
StringCopy(&Var2, "JBIB_P1_3_5", 16);
iVar6=4;
iVar7=5;
break;
case 31:
StringCopy(&Var2, "JBIB_P1_3_6", 16);
iVar6=4;
iVar7=6;
break;
case 32:
StringCopy(&Var2, "JBIB_P1_3_7", 16);
iVar6=4;
iVar7=7;
break;
case 33:
StringCopy(&Var2, "JBIB_P1_3_8", 16);
iVar6=4;
iVar7=8;
break;
case 34:
StringCopy(&Var2, "JBIB_P1_3_9", 16);
iVar6=4;
iVar7=9;
break;
case 35:
StringCopy(&Var2, "JBIB_P1_3_10", 16);
iVar6=4;
iVar7=10;
break;
case 36:
StringCopy(&Var2, "JBIB_P1_3_11", 16);
iVar6=4;
iVar7=11;
break;
case 37:
StringCopy(&Var2, "JBIB_P1_3_12", 16);
iVar6=4;
iVar7=12;
break;
case 38:
StringCopy(&Var2, "JBIB_P1_3_13", 16);
iVar6=4;
iVar7=13;
break;
case 39:
StringCopy(&Var2, "JBIB_P1_3_14", 16);
iVar6=4;
iVar7=14;
break;
case 40:
StringCopy(&Var2, "JBIB_P1_3_15", 16);
iVar6=4;
iVar7=15;
break;
case 41:
StringCopy(&Var2, "JBIB_P1_5_0", 16);
iVar6=5;
iVar7=0;
break;
case 42:
StringCopy(&Var2, "JBIB_P1_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 43:
StringCopy(&Var2, "JBIB_P1_6_1", 16);
iVar6=6;
iVar7=1;
break;
case 44:
StringCopy(&Var2, "JBIB_P1_7_0", 16);
iVar6=7;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "JBIB_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 46:
StringCopy(&Var2, "JBIB_P1_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 47:
StringCopy(&Var2, "JBIB_P1_10_0", 16);
iVar6=10;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "JBIB_P1_10_1", 16);
iVar6=10;
iVar7=1;
iVar1=48;
break;
case 49:
StringCopy(&Var2, "JBIB_P1_10_2", 16);
iVar6=10;
iVar7=2;
iVar1=35;
break;
case 50:
StringCopy(&Var2, "JBIB_P1_10_3", 16);
iVar6=10;
iVar7=3;
iVar1=32;
break;
case 51:
StringCopy(&Var2, "JBIB_P1_10_4", 16);
iVar6=10;
iVar7=4;
iVar1=35;
break;
case 52:
StringCopy(&Var2, "JBIB_P1_10_5", 16);
iVar6=10;
iVar7=5;
iVar1=48;
break;
case 53:
StringCopy(&Var2, "JBIB_P1_10_6", 16);
iVar6=10;
iVar7=6;
iVar1=52;
break;
case 54:
StringCopy(&Var2, "JBIB_P1_10_7", 16);
iVar6=10;
iVar7=7;
iVar1=38;
break;
case 55:
StringCopy(&Var2, "JBIB_P1_10_8", 16);
iVar6=10;
iVar7=8;
iVar1=42;
break;
case 56:
StringCopy(&Var2, "JBIB_P1_10_9", 16);
iVar6=10;
iVar7=9;
iVar1=38;
break;
case 57:
StringCopy(&Var2, "JBIB_P1_10_10", 16);
iVar6=10;
iVar7=10;
iVar1=35;
break;
case 58:
StringCopy(&Var2, "JBIB_P1_10_11", 16);
iVar6=10;
iVar7=11;
iVar1=48;
break;
case 59:
StringCopy(&Var2, "JBIB_P1_10_12", 16);
iVar6=10;
iVar7=12;
iVar1=42;
break;
case 60:
StringCopy(&Var2, "JBIB_P1_10_13", 16);
iVar6=10;
iVar7=13;
iVar1=45;
break;
case 61:
StringCopy(&Var2, "JBIB_P1_10_14", 16);
iVar6=10;
iVar7=14;
iVar1=45;
break;
case 62:
StringCopy(&Var2, "JBIB_P1_10_15", 16);
iVar6=10;
iVar7=15;
iVar1=49;
break;
default:
func_112(iVar10, iParam0, 63, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_134(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 1, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_135(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P1_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P1_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P1_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P1_4_0", 16);
iVar6=4;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 5, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_136(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=2;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=3;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=4;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=5;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=1;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=2;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=3;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=4;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=5;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=6;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=1;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=2;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=3;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=5;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=6;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=7;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=8;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=9;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=10;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=11;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=12;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=13;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=14;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=15;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=1;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=2;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=3;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=4;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=5;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=6;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
break;
case 41:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=2;
break;
case 42:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=3;
break;
case 43:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=4;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=5;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=6;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=7;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 53, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_137(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=5;
iVar7=0;
iVar1=125;
break;
case 6:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=5;
iVar7=1;
iVar1=150;
break;
case 7:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=5;
iVar7=2;
iVar1=175;
break;
case 8:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=5;
iVar7=3;
iVar1=85;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=5;
iVar7=4;
iVar1=150;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=5;
iVar7=5;
iVar1=175;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 12, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_138(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC_P1_9_0", 16);
iVar6=9;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "SPEC_P1_11_0", 16);
iVar6=11;
iVar7=0;
iVar1=195;
break;
case 12:
StringCopy(&Var2, "SPEC_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=195;
break;
case 13:
StringCopy(&Var2, "SPEC_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=195;
break;
case 14:
StringCopy(&Var2, "SPEC_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=250;
break;
case 15:
StringCopy(&Var2, "SPEC_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=250;
break;
case 16:
StringCopy(&Var2, "SPEC_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=250;
break;
case 17:
StringCopy(&Var2, "SPEC_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=195;
break;
case 18:
StringCopy(&Var2, "SPEC_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=250;
break;
case 19:
StringCopy(&Var2, "SPEC_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=250;
break;
case 20:
StringCopy(&Var2, "SPEC_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=250;
break;
case 21:
StringCopy(&Var2, "SPEC_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=250;
break;
case 22:
StringCopy(&Var2, "SPEC_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=195;
break;
case 23:
StringCopy(&Var2, "SPEC_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=250;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
break;
case 27:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=15;
iVar7=1;
break;
case 29:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=15;
iVar7=2;
break;
case 30:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=15;
iVar7=3;
break;
case 31:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 32:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=15;
iVar7=5;
break;
case 33:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=15;
iVar7=6;
break;
case 34:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=15;
iVar7=7;
break;
case 35:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=15;
iVar7=8;
break;
case 36:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=15;
iVar7=9;
break;
case 37:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=15;
iVar7=10;
break;
case 38:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=15;
iVar7=11;
break;
case 39:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=15;
iVar7=12;
break;
case 40:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=15;
iVar7=13;
break;
case 41:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=15;
iVar7=14;
break;
case 42:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=15;
iVar7=15;
break;
case 43:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=16;
iVar7=0;
break;
case 44:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=16;
iVar7=1;
break;
case 45:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=16;
iVar7=2;
break;
case 46:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=16;
iVar7=3;
break;
case 47:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=16;
iVar7=4;
break;
case 48:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=16;
iVar7=5;
break;
case 49:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=16;
iVar7=6;
break;
case 50:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=16;
iVar7=7;
break;
case 51:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=16;
iVar7=8;
break;
case 52:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=16;
iVar7=9;
break;
case 53:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=16;
iVar7=10;
break;
case 54:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=16;
iVar7=11;
break;
case 55:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=16;
iVar7=12;
break;
case 56:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=16;
iVar7=13;
break;
case 57:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=16;
iVar7=14;
break;
case 58:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=16;
iVar7=15;
break;
case 59:
StringCopy(&Var2, "SPEC_P1_15_0", 16);
iVar6=17;
iVar7=0;
break;
case 60:
StringCopy(&Var2, "SPEC_P1_15_1", 16);
iVar6=17;
iVar7=1;
break;
case 61:
StringCopy(&Var2, "SPEC_P1_15_2", 16);
iVar6=17;
iVar7=2;
break;
case 62:
StringCopy(&Var2, "SPEC_P1_15_3", 16);
iVar6=17;
iVar7=3;
break;
case 63:
StringCopy(&Var2, "SPEC_P1_15_4", 16);
iVar6=17;
iVar7=4;
break;
case 64:
StringCopy(&Var2, "SPEC_P1_15_5", 16);
iVar6=17;
iVar7=5;
break;
case 65:
StringCopy(&Var2, "SPEC_P1_15_6", 16);
iVar6=17;
iVar7=6;
break;
case 66:
StringCopy(&Var2, "SPEC_P1_15_7", 16);
iVar6=17;
iVar7=7;
break;
case 67:
StringCopy(&Var2, "SPEC_P1_15_8", 16);
iVar6=17;
iVar7=8;
break;
case 68:
StringCopy(&Var2, "SPEC_P1_15_9", 16);
iVar6=17;
iVar7=9;
break;
case 69:
StringCopy(&Var2, "SPEC_P1_15_10", 16);
iVar6=17;
iVar7=10;
break;
case 70:
StringCopy(&Var2, "SPEC_P1_15_11", 16);
iVar6=17;
iVar7=11;
break;
case 71:
StringCopy(&Var2, "SPEC_P1_15_12", 16);
iVar6=17;
iVar7=12;
break;
case 72:
StringCopy(&Var2, "SPEC_P1_15_13", 16);
iVar6=17;
iVar7=13;
break;
case 73:
StringCopy(&Var2, "SPEC_P1_15_14", 16);
iVar6=17;
iVar7=14;
break;
case 74:
StringCopy(&Var2, "SPEC_P1_15_15", 16);
iVar6=17;
iVar7=15;
break;
case 75:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 77, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_139(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=1;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 7, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_140(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P1_00_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P1_00_1", 16);
iVar6=0;
iVar7=1;
iVar1=80;
break;
case 2:
StringCopy(&Var2, "FEET_P1_00_2", 16);
iVar6=0;
iVar7=2;
iVar1=80;
break;
case 3:
StringCopy(&Var2, "FEET_P1_00_3", 16);
iVar6=0;
iVar7=3;
iVar1=89;
break;
case 4:
StringCopy(&Var2, "FEET_P1_00_4", 16);
iVar6=0;
iVar7=4;
iVar1=45;
break;
case 5:
StringCopy(&Var2, "FEET_P1_00_5", 16);
iVar6=0;
iVar7=5;
iVar1=35;
break;
case 6:
StringCopy(&Var2, "FEET_P1_00_6", 16);
iVar6=0;
iVar7=6;
iVar1=89;
break;
case 7:
StringCopy(&Var2, "FEET_P1_00_7", 16);
iVar6=0;
iVar7=7;
iVar1=95;
break;
case 8:
StringCopy(&Var2, "FEET_P1_00_8", 16);
iVar6=0;
iVar7=8;
iVar1=115;
break;
case 9:
StringCopy(&Var2, "FEET_P1_00_9", 16);
iVar6=0;
iVar7=9;
iVar1=40;
break;
case 10:
StringCopy(&Var2, "FEET_P1_00_10", 16);
iVar6=0;
iVar7=10;
iVar1=145;
break;
case 11:
StringCopy(&Var2, "FEET_P1_00_11", 16);
iVar6=0;
iVar7=11;
iVar1=145;
break;
case 12:
StringCopy(&Var2, "FEET_P1_01_0", 16);
iVar6=1;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=1;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "FEET_P1_06_0", 16);
iVar6=6;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "FEET_P1_06_1", 16);
iVar6=6;
iVar7=1;
iVar1=180;
break;
case 20:
StringCopy(&Var2, "FEET_P1_06_2", 16);
iVar6=6;
iVar7=2;
iVar1=80;
break;
case 21:
StringCopy(&Var2, "FEET_P1_06_3", 16);
iVar6=6;
iVar7=3;
iVar1=200;
break;
case 22:
StringCopy(&Var2, "FEET_P1_06_4", 16);
iVar6=6;
iVar7=4;
iVar1=220;
break;
case 23:
StringCopy(&Var2, "FEET_P1_06_5", 16);
iVar6=6;
iVar7=5;
iVar1=235;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 25:
StringCopy(&Var2, "FEET_P1_08_0", 16);
iVar6=8;
iVar7=0;
iVar1=870;
break;
case 26:
StringCopy(&Var2, "FEET_P1_08_1", 16);
iVar6=8;
iVar7=1;
iVar1=870;
break;
case 27:
StringCopy(&Var2, "FEET_P1_08_2", 16);
iVar6=8;
iVar7=2;
iVar1=870;
break;
case 28:
StringCopy(&Var2, "FEET_P1_08_3", 16);
iVar6=8;
iVar7=3;
iVar1=1275;
break;
case 29:
StringCopy(&Var2, "FEET_P1_08_4", 16);
iVar6=8;
iVar7=4;
iVar1=1275;
break;
case 30:
StringCopy(&Var2, "FEET_P1_08_5", 16);
iVar6=8;
iVar7=5;
iVar1=1275;
break;
case 31:
StringCopy(&Var2, "FEET_P1_08_6", 16);
iVar6=8;
iVar7=6;
iVar1=1275;
break;
case 32:
StringCopy(&Var2, "FEET_P1_08_7", 16);
iVar6=8;
iVar7=7;
iVar1=1275;
break;
case 33:
StringCopy(&Var2, "FEET_P1_08_8", 16);
iVar6=8;
iVar7=8;
iVar1=1275;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "FEET_P1_10_0", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "FEET_P1_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 37:
StringCopy(&Var2, "FEET_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=50;
break;
case 38:
StringCopy(&Var2, "FEET_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=50;
break;
case 39:
StringCopy(&Var2, "FEET_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=50;
break;
case 40:
StringCopy(&Var2, "FEET_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=50;
break;
case 41:
StringCopy(&Var2, "FEET_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=50;
break;
case 42:
StringCopy(&Var2, "FEET_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=50;
break;
case 43:
StringCopy(&Var2, "FEET_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=50;
break;
case 44:
StringCopy(&Var2, "FEET_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=50;
break;
case 45:
StringCopy(&Var2, "FEET_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=50;
break;
case 46:
StringCopy(&Var2, "FEET_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=50;
break;
case 47:
StringCopy(&Var2, "FEET_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=50;
break;
case 48:
StringCopy(&Var2, "FEET_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=50;
break;
case 49:
StringCopy(&Var2, "FEET_P1_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=50;
break;
case 50:
StringCopy(&Var2, "FEET_P1_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=50;
break;
case 51:
StringCopy(&Var2, "FEET_P1_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=50;
break;
case 52:
StringCopy(&Var2, "FEET_P1_12_0", 16);
iVar6=12;
iVar7=0;
break;
case 53:
StringCopy(&Var2, "FEET_P1_12_1", 16);
iVar6=12;
iVar7=1;
iVar1=25;
break;
case 54:
StringCopy(&Var2, "FEET_P1_12_2", 16);
iVar6=12;
iVar7=2;
iVar1=20;
break;
case 55:
StringCopy(&Var2, "FEET_P1_12_3", 16);
iVar6=12;
iVar7=3;
iVar1=24;
break;
case 56:
StringCopy(&Var2, "FEET_P1_12_4", 16);
iVar6=12;
iVar7=4;
iVar1=25;
break;
case 57:
StringCopy(&Var2, "FEET_P1_12_5", 16);
iVar6=12;
iVar7=5;
iVar1=27;
break;
case 58:
StringCopy(&Var2, "FEET_P1_12_6", 16);
iVar6=12;
iVar7=6;
iVar1=29;
break;
case 59:
StringCopy(&Var2, "FEET_P1_12_7", 16);
iVar6=12;
iVar7=7;
iVar1=27;
break;
case 60:
StringCopy(&Var2, "FEET_P1_12_8", 16);
iVar6=12;
iVar7=8;
iVar1=25;
break;
case 61:
StringCopy(&Var2, "FEET_P1_12_9", 16);
iVar6=12;
iVar7=9;
iVar1=30;
break;
case 62:
StringCopy(&Var2, "FEET_P1_12_10", 16);
iVar6=12;
iVar7=10;
iVar1=28;
break;
case 63:
StringCopy(&Var2, "FEET_P1_12_11", 16);
iVar6=12;
iVar7=11;
iVar1=30;
break;
case 64:
StringCopy(&Var2, "FEET_P1_13_0", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "FEET_P1_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=155;
break;
case 66:
StringCopy(&Var2, "FEET_P1_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=155;
break;
case 67:
StringCopy(&Var2, "FEET_P1_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=165;
break;
case 68:
StringCopy(&Var2, "FEET_P1_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=170;
break;
case 69:
StringCopy(&Var2, "FEET_P1_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=160;
break;
case 70:
StringCopy(&Var2, "FEET_P1_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=165;
break;
case 71:
StringCopy(&Var2, "FEET_P1_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=170;
break;
case 72:
StringCopy(&Var2, "FEET_P1_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=160;
break;
case 73:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
break;
case 74:
StringCopy(&Var2, "FEET_P1_16_0", 16);
iVar6=16;
iVar7=0;
iVar1=720;
break;
case 75:
StringCopy(&Var2, "FEET_P1_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=680;
break;
case 76:
StringCopy(&Var2, "FEET_P1_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=650;
break;
case 77:
StringCopy(&Var2, "FEET_P1_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=670;
break;
case 78:
StringCopy(&Var2, "FEET_P1_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=700;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P1_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=680;
break;
case 80:
StringCopy(&Var2, "FEET_P1_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=720;
break;
case 81:
StringCopy(&Var2, "FEET_P1_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=740;
break;
case 82:
StringCopy(&Var2, "FEET_P1_16_8", 16);
iVar6=16;
iVar7=8;
iVar1=760;
break;
case 83:
StringCopy(&Var2, "FEET_P1_16_9", 16);
iVar6=16;
iVar7=9;
iVar1=780;
break;
case 84:
StringCopy(&Var2, "FEET_P1_16_10", 16);
iVar6=16;
iVar7=10;
iVar1=750;
break;
case 85:
StringCopy(&Var2, "FEET_P1_16_11", 16);
iVar6=16;
iVar7=11;
iVar1=700;
break;
case 86:
StringCopy(&Var2, "FEET_P1_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=790;
break;
case 87:
StringCopy(&Var2, "FEET_P1_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=750;
break;
case 88:
StringCopy(&Var2, "FEET_P1_17_2", 16);
iVar6=17;
iVar7=2;
iVar1=860;
break;
case 89:
StringCopy(&Var2, "FEET_P1_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=750;
break;
case 90:
StringCopy(&Var2, "FEET_P1_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=790;
break;
case 91:
StringCopy(&Var2, "FEET_P1_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=840;
break;
case 92:
StringCopy(&Var2, "FEET_P1_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=820;
break;
case 93:
StringCopy(&Var2, "FEET_P1_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=800;
break;
case 94:
StringCopy(&Var2, "FEET_P1_17_8", 16);
iVar6=17;
iVar7=8;
iVar1=850;
break;
case 95:
StringCopy(&Var2, "FEET_P1_17_9", 16);
iVar6=17;
iVar7=9;
iVar1=870;
break;
case 96:
StringCopy(&Var2, "FEET_P1_17_10", 16);
iVar6=17;
iVar7=10;
iVar1=720;
break;
case 97:
StringCopy(&Var2, "FEET_P1_17_11", 16);
iVar6=17;
iVar7=11;
iVar1=740;
break;
case 98:
StringCopy(&Var2, "FEET_P1_17_12", 16);
iVar6=17;
iVar7=12;
iVar1=800;
break;
case 99:
StringCopy(&Var2, "FEET_P1_17_13", 16);
iVar6=17;
iVar7=13;
iVar1=750;
break;
case 100:
StringCopy(&Var2, "FEET_P1_17_14", 16);
iVar6=17;
iVar7=14;
iVar1=770;
break;
case 101:
StringCopy(&Var2, "FEET_P1_17_15", 16);
iVar6=17;
iVar7=15;
iVar1=860;
break;
case 102:
StringCopy(&Var2, "FEET_P1_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=850;
break;
case 103:
StringCopy(&Var2, "FEET_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=800;
break;
case 104:
StringCopy(&Var2, "FEET_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=780;
break;
case 105:
StringCopy(&Var2, "FEET_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=890;
break;
case 106:
StringCopy(&Var2, "FEET_P1_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=820;
break;
case 107:
StringCopy(&Var2, "FEET_P1_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 108:
StringCopy(&Var2, "FEET_P1_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=870;
break;
case 109:
StringCopy(&Var2, "FEET_P1_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=930;
break;
case 110:
StringCopy(&Var2, "FEET_P1_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=880;
break;
case 111:
StringCopy(&Var2, "FEET_P1_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=900;
break;
case 112:
StringCopy(&Var2, "FEET_P1_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=920;
break;
case 113:
StringCopy(&Var2, "FEET_P1_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=970;
break;
case 114:
StringCopy(&Var2, "FEET_P1_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=990;
break;
case 115:
StringCopy(&Var2, "FEET_P1_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=960;
break;
case 116:
StringCopy(&Var2, "FEET_P1_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=980;
break;
case 117:
StringCopy(&Var2, "FEET_P1_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=950;
break;
case 118:
StringCopy(&Var2, "FEET_P1_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=110;
break;
case 119:
StringCopy(&Var2, "FEET_P1_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=115;
break;
case 120:
StringCopy(&Var2, "FEET_P1_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=120;
break;
case 121:
StringCopy(&Var2, "FEET_P1_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=110;
break;
case 122:
StringCopy(&Var2, "FEET_P1_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=125;
break;
case 123:
StringCopy(&Var2, "FEET_P1_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=128;
break;
case 124:
StringCopy(&Var2, "FEET_P1_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=135;
break;
case 125:
StringCopy(&Var2, "FEET_P1_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=130;
break;
case 126:
StringCopy(&Var2, "FEET_P1_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=145;
break;
case 127:
StringCopy(&Var2, "FEET_P1_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "FEET_P1_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=120;
break;
case 129:
StringCopy(&Var2, "FEET_P1_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=150;
break;
case 130:
StringCopy(&Var2, "FEET_P1_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=125;
break;
case 131:
StringCopy(&Var2, "FEET_P1_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=120;
break;
case 132:
StringCopy(&Var2, "FEET_P1_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=130;
break;
case 133:
StringCopy(&Var2, "FEET_P1_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=110;
break;
default:
func_112(iVar10, iParam0, 134, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_141(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P1_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=32;
break;
case 2:
StringCopy(&Var2, "LEGS_P1_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=38;
break;
case 3:
StringCopy(&Var2, "LEGS_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=44;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=4;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=5;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "LEGS_P1_2_0", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "LEGS_P1_6_0", 16);
iVar6=6;
iVar7=0;
break;
case 15:
StringCopy(&Var2, "LEGS_P1_6_1", 16);
iVar6=6;
iVar7=1;
iVar1=690;
break;
case 16:
StringCopy(&Var2, "LEGS_P1_6_2", 16);
iVar6=6;
iVar7=2;
iVar1=720;
break;
case 17:
StringCopy(&Var2, "LEGS_P1_6_3", 16);
iVar6=6;
iVar7=3;
iVar1=850;
break;
case 18:
StringCopy(&Var2, "LEGS_P1_6_4", 16);
iVar6=6;
iVar7=4;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "LEGS_P1_6_5", 16);
iVar6=6;
iVar7=5;
iVar1=740;
break;
case 20:
StringCopy(&Var2, "LEGS_P1_6_6", 16);
iVar6=6;
iVar7=6;
iVar1=750;
break;
case 21:
StringCopy(&Var2, "LEGS_P1_6_7", 16);
iVar6=6;
iVar7=7;
iVar1=790;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
bVar0=true;
break;
case 24:
StringCopy(&Var2, "LEGS_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 25:
StringCopy(&Var2, "LEGS_P1_8_1", 16);
iVar6=8;
iVar7=1;
iVar1=145;
break;
case 26:
StringCopy(&Var2, "LEGS_P1_8_2", 16);
iVar6=8;
iVar7=2;
iVar1=140;
break;
case 27:
StringCopy(&Var2, "LEGS_P1_8_3", 16);
iVar6=8;
iVar7=3;
iVar1=148;
break;
case 28:
StringCopy(&Var2, "LEGS_P1_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=150;
break;
case 29:
StringCopy(&Var2, "LEGS_P1_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=154;
break;
case 30:
StringCopy(&Var2, "LEGS_P1_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=158;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "LEGS_P1_11_0", 16);
iVar6=11;
iVar7=0;
iVar1=820;
break;
case 34:
StringCopy(&Var2, "LEGS_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=820;
break;
case 35:
StringCopy(&Var2, "LEGS_P1_11_2", 16);
iVar6=11;
iVar7=2;
iVar1=850;
break;
case 36:
StringCopy(&Var2, "LEGS_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=850;
break;
case 37:
StringCopy(&Var2, "LEGS_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=920;
break;
case 38:
StringCopy(&Var2, "LEGS_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=950;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
break;
case 40:
StringCopy(&Var2, "LEGS_P1_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 41:
StringCopy(&Var2, "LEGS_P1_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=45;
break;
case 42:
StringCopy(&Var2, "LEGS_P1_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=48;
break;
case 43:
StringCopy(&Var2, "LEGS_P1_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=45;
break;
case 44:
StringCopy(&Var2, "LEGS_P1_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=48;
break;
case 45:
StringCopy(&Var2, "LEGS_P1_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "LEGS_P1_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=55;
break;
case 47:
StringCopy(&Var2, "LEGS_P1_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=58;
break;
case 48:
StringCopy(&Var2, "LEGS_P1_13_8", 16);
iVar6=13;
iVar7=8;
iVar1=60;
break;
case 49:
StringCopy(&Var2, "LEGS_P1_13_9", 16);
iVar6=13;
iVar7=9;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "LEGS_P1_13_10", 16);
iVar6=13;
iVar7=10;
iVar1=62;
break;
case 51:
StringCopy(&Var2, "LEGS_P1_13_11", 16);
iVar6=13;
iVar7=11;
iVar1=65;
break;
case 52:
StringCopy(&Var2, "LEGS_P1_14_0", 16);
iVar6=14;
iVar7=0;
break;
case 53:
StringCopy(&Var2, "LEGS_P1_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 54:
StringCopy(&Var2, "LEGS_P1_15_1", 16);
iVar6=15;
iVar7=1;
break;
case 55:
StringCopy(&Var2, "LEGS_P1_15_2", 16);
iVar6=15;
iVar7=2;
break;
case 56:
StringCopy(&Var2, "LEGS_P1_15_3", 16);
iVar6=15;
iVar7=3;
break;
case 57:
StringCopy(&Var2, "LEGS_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 58:
StringCopy(&Var2, "LEGS_P1_15_5", 16);
iVar6=15;
iVar7=5;
break;
case 59:
StringCopy(&Var2, "LEGS_P1_15_6", 16);
iVar6=15;
iVar7=6;
break;
case 60:
StringCopy(&Var2, "LEGS_P1_15_7", 16);
iVar6=15;
iVar7=7;
break;
case 61:
StringCopy(&Var2, "LEGS_P1_15_8", 16);
iVar6=15;
iVar7=8;
break;
case 62:
StringCopy(&Var2, "LEGS_P1_15_9", 16);
iVar6=15;
iVar7=9;
break;
case 63:
StringCopy(&Var2, "LEGS_P1_15_10", 16);
iVar6=15;
iVar7=10;
break;
case 64:
StringCopy(&Var2, "LEGS_P1_15_11", 16);
iVar6=15;
iVar7=11;
break;
case 65:
StringCopy(&Var2, "LEGS_P1_15_12", 16);
iVar6=15;
iVar7=12;
break;
case 66:
StringCopy(&Var2, "LEGS_P1_15_13", 16);
iVar6=15;
iVar7=13;
break;
case 67:
StringCopy(&Var2, "LEGS_P1_15_14", 16);
iVar6=15;
iVar7=14;
break;
case 68:
StringCopy(&Var2, "LEGS_P1_15_15", 16);
iVar6=15;
iVar7=15;
break;
case 69:
StringCopy(&Var2, "LEGS_P1_16_0", 16);
iVar6=16;
iVar7=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=16;
iVar7=1;
bVar0=true;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P1_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=160;
break;
case 74:
StringCopy(&Var2, "LEGS_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=180;
break;
case 75:
StringCopy(&Var2, "LEGS_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=180;
break;
case 76:
StringCopy(&Var2, "LEGS_P1_18_4", 16);
iVar6=18;
iVar7=4;
break;
case 77:
StringCopy(&Var2, "LEGS_P1_18_5", 16);
iVar6=18;
iVar7=5;
break;
case 78:
StringCopy(&Var2, "LEGS_P1_19_0", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P1_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=118;
break;
case 80:
StringCopy(&Var2, "LEGS_P1_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=120;
break;
case 81:
StringCopy(&Var2, "LEGS_P1_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=128;
break;
case 82:
StringCopy(&Var2, "LEGS_P1_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=128;
break;
case 83:
StringCopy(&Var2, "LEGS_P1_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=130;
break;
case 84:
StringCopy(&Var2, "LEGS_P1_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=145;
break;
case 85:
StringCopy(&Var2, "LEGS_P1_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=138;
break;
case 86:
StringCopy(&Var2, "LEGS_P1_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=132;
break;
case 87:
StringCopy(&Var2, "LEGS_P1_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=148;
break;
case 88:
StringCopy(&Var2, "LEGS_P1_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=118;
break;
case 89:
StringCopy(&Var2, "LEGS_P1_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=118;
break;
case 90:
StringCopy(&Var2, "LEGS_P1_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=118;
break;
case 91:
StringCopy(&Var2, "LEGS_P1_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=129;
break;
case 92:
StringCopy(&Var2, "LEGS_P1_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=135;
break;
case 93:
StringCopy(&Var2, "LEGS_P1_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=135;
break;
case 94:
StringCopy(&Var2, "LEGS_P1_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=118;
break;
case 95:
StringCopy(&Var2, "LEGS_P1_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=118;
break;
case 96:
StringCopy(&Var2, "LEGS_P1_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=118;
break;
case 97:
StringCopy(&Var2, "LEGS_P1_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=55;
break;
case 98:
StringCopy(&Var2, "LEGS_P1_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=55;
break;
case 99:
StringCopy(&Var2, "LEGS_P1_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=59;
break;
case 100:
StringCopy(&Var2, "LEGS_P1_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=59;
break;
case 101:
StringCopy(&Var2, "LEGS_P1_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=65;
break;
case 102:
StringCopy(&Var2, "LEGS_P1_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=65;
break;
case 103:
StringCopy(&Var2, "LEGS_P1_22_6", 16);
iVar6=22;
iVar7=6;
iVar1=69;
break;
case 104:
StringCopy(&Var2, "LEGS_P1_22_7", 16);
iVar6=22;
iVar7=7;
iVar1=69;
break;
case 105:
StringCopy(&Var2, "LEGS_P1_22_8", 16);
iVar6=22;
iVar7=8;
iVar1=75;
break;
case 106:
StringCopy(&Var2, "LEGS_P1_22_9", 16);
iVar6=22;
iVar7=9;
iVar1=75;
break;
case 107:
StringCopy(&Var2, "LEGS_P1_22_10", 16);
iVar6=22;
iVar7=10;
iVar1=65;
break;
case 108:
StringCopy(&Var2, "LEGS_P1_22_11", 16);
iVar6=22;
iVar7=11;
iVar1=65;
break;
case 109:
StringCopy(&Var2, "LEGS_P1_22_12", 16);
iVar6=22;
iVar7=12;
iVar1=65;
break;
case 110:
StringCopy(&Var2, "LEGS_P1_22_13", 16);
iVar6=22;
iVar7=13;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P1_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=38;
break;
case 112:
StringCopy(&Var2, "LEGS_P1_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=38;
break;
case 113:
StringCopy(&Var2, "LEGS_P1_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=28;
break;
case 114:
StringCopy(&Var2, "LEGS_P1_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=34;
break;
case 115:
StringCopy(&Var2, "LEGS_P1_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=36;
break;
case 116:
StringCopy(&Var2, "LEGS_P1_23_5", 16);
iVar6=23;
iVar7=5;
iVar1=32;
break;
default:
func_112(iVar10, iParam0, 117, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_142(int iParam0){
if(iParam0 < 107){
func_145(iParam0);
}elseif(iParam0 < 227){
func_144(iParam0);
}else{
func_143(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_112(3, iParam0, 318, -1);
}}


void func_143(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 227:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar6=23;
iVar7=0;
iVar9=3;
break;
case 228:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar6=23;
iVar7=1;
iVar9=3;
break;
case 229:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar6=23;
iVar7=2;
iVar9=3;
break;
case 230:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar6=23;
iVar7=3;
iVar9=3;
break;
case 231:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar6=23;
iVar7=4;
iVar9=3;
break;
case 232:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar6=23;
iVar7=5;
iVar9=3;
break;
case 233:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar6=23;
iVar7=6;
iVar9=3;
break;
case 234:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar6=23;
iVar7=7;
iVar9=3;
break;
case 235:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar6=23;
iVar7=8;
iVar9=3;
break;
case 236:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar6=23;
iVar7=9;
iVar9=3;
break;
case 237:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar6=23;
iVar7=10;
iVar9=3;
break;
case 238:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar6=23;
iVar7=11;
iVar9=3;
break;
case 239:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar6=23;
iVar7=12;
iVar9=3;
break;
case 240:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar6=23;
iVar7=13;
iVar9=3;
break;
case 241:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar6=23;
iVar7=14;
iVar9=3;
break;
case 242:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar6=23;
iVar7=15;
iVar9=3;
break;
case 243:
StringCopy(&Var2, "TORSO_P1_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=2200;
iVar9=3;
break;
case 244:
StringCopy(&Var2, "TORSO_P1_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=2200;
iVar9=3;
break;
case 245:
StringCopy(&Var2, "TORSO_P1_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=2200;
iVar9=3;
break;
case 246:
StringCopy(&Var2, "TORSO_P1_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=2200;
iVar9=3;
break;
case 247:
StringCopy(&Var2, "TORSO_P1_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=2200;
iVar9=3;
break;
case 248:
StringCopy(&Var2, "TORSO_P1_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=2200;
iVar9=3;
break;
case 249:
StringCopy(&Var2, "TORSO_P1_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=2200;
iVar9=3;
break;
case 250:
StringCopy(&Var2, "TORSO_P1_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=2200;
iVar9=3;
break;
case 251:
StringCopy(&Var2, "TORSO_P1_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=2200;
iVar9=3;
break;
case 252:
StringCopy(&Var2, "TORSO_P1_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=2200;
iVar9=3;
break;
case 253:
StringCopy(&Var2, "TORSO_P1_24_10", 16);
iVar6=24;
iVar7=10;
iVar1=2200;
iVar9=3;
break;
case 254:
StringCopy(&Var2, "TORSO_P1_24_11", 16);
iVar6=24;
iVar7=11;
iVar1=2200;
iVar9=3;
break;
case 255:
StringCopy(&Var2, "TORSO_P1_24_12", 16);
iVar6=24;
iVar7=12;
iVar1=2200;
iVar9=3;
break;
case 256:
StringCopy(&Var2, "TORSO_P1_24_13", 16);
iVar6=24;
iVar7=13;
iVar1=2200;
iVar9=3;
break;
case 257:
StringCopy(&Var2, "TORSO_P1_24_14", 16);
iVar6=24;
iVar7=14;
iVar1=2200;
iVar9=3;
break;
case 258:
StringCopy(&Var2, "TORSO_P1_24_15", 16);
iVar6=24;
iVar7=15;
iVar1=2200;
iVar9=3;
break;
case 259:
StringCopy(&Var2, "TORSO_P1_25_0", 16);
iVar6=25;
iVar7=0;
bVar0=true;
iVar9=3;
break;
case 260:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
iVar9=1;
break;
case 261:
StringCopy(&Var2, "TORSO_P1_27_0", 16);
iVar6=27;
iVar7=0;
iVar1=150;
break;
case 262:
StringCopy(&Var2, "TORSO_P1_27_1", 16);
iVar6=27;
iVar7=1;
iVar1=160;
break;
case 263:
StringCopy(&Var2, "TORSO_P1_27_2", 16);
iVar6=27;
iVar7=2;
iVar1=150;
break;
case 264:
StringCopy(&Var2, "TORSO_P1_27_3", 16);
iVar6=27;
iVar7=3;
iVar1=150;
break;
case 265:
StringCopy(&Var2, "TORSO_P1_27_4", 16);
iVar6=27;
iVar7=4;
iVar1=160;
break;
case 266:
StringCopy(&Var2, "TORSO_P1_27_5", 16);
iVar6=27;
iVar7=5;
iVar1=160;
break;
case 267:
StringCopy(&Var2, "TORSO_P1_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=88;
break;
case 268:
StringCopy(&Var2, "TORSO_P1_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=60;
break;
case 269:
StringCopy(&Var2, "TORSO_P1_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=70;
break;
case 270:
StringCopy(&Var2, "TORSO_P1_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=80;
break;
case 271:
StringCopy(&Var2, "TORSO_P1_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=90;
break;
case 272:
StringCopy(&Var2, "TORSO_P1_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=80;
break;
case 273:
StringCopy(&Var2, "TORSO_P1_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=70;
break;
case 274:
StringCopy(&Var2, "TORSO_P1_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=95;
break;
case 275:
StringCopy(&Var2, "TORSO_P1_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=105;
break;
case 276:
StringCopy(&Var2, "TORSO_P1_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=95;
break;
case 277:
StringCopy(&Var2, "TORSO_P1_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=110;
break;
case 278:
StringCopy(&Var2, "TORSO_P1_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=98;
break;
case 279:
StringCopy(&Var2, "TORSO_P1_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=88;
break;
case 280:
StringCopy(&Var2, "TORSO_P1_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=98;
break;
case 281:
StringCopy(&Var2, "TORSO_P1_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=110;
break;
case 282:
StringCopy(&Var2, "TORSO_P1_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=98;
break;
case 283:
StringCopy(&Var2, "TORSO_P1_29_0", 16);
iVar6=29;
iVar7=0;
iVar1=250;
break;
case 284:
StringCopy(&Var2, "TORSO_P1_29_1", 16);
iVar6=29;
iVar7=1;
iVar1=270;
break;
case 285:
StringCopy(&Var2, "TORSO_P1_29_2", 16);
iVar6=29;
iVar7=2;
iVar1=280;
break;
case 286:
StringCopy(&Var2, "TORSO_P1_29_3", 16);
iVar6=29;
iVar7=3;
iVar1=275;
break;
case 287:
StringCopy(&Var2, "TORSO_P1_29_4", 16);
iVar6=29;
iVar7=4;
iVar1=290;
break;
case 288:
StringCopy(&Var2, "TORSO_P1_29_5", 16);
iVar6=29;
iVar7=5;
iVar1=35;
break;
case 289:
StringCopy(&Var2, "TORSO_P1_29_6", 16);
iVar6=29;
iVar7=6;
iVar1=35;
break;
case 290:
StringCopy(&Var2, "TORSO_P1_29_7", 16);
iVar6=29;
iVar7=7;
iVar1=35;
break;
case 291:
StringCopy(&Var2, "TORSO_P1_29_8", 16);
iVar6=29;
iVar7=8;
iVar1=295;
break;
case 292:
StringCopy(&Var2, "TORSO_P1_29_9", 16);
iVar6=29;
iVar7=9;
iVar1=35;
break;
case 293:
StringCopy(&Var2, "TORSO_P1_29_10", 16);
iVar6=29;
iVar7=10;
iVar1=35;
break;
case 294:
StringCopy(&Var2, "TORSO_P1_29_11", 16);
iVar6=29;
iVar7=11;
iVar1=35;
break;
case 295:
StringCopy(&Var2, "TORSO_P1_29_12", 16);
iVar6=29;
iVar7=12;
break;
case 296:
StringCopy(&Var2, "TORSO_P1_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=1750;
break;
case 297:
StringCopy(&Var2, "TORSO_P1_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=1920;
break;
case 298:
StringCopy(&Var2, "TORSO_P1_30_2", 16);
iVar6=30;
iVar7=2;
iVar1=1890;
break;
case 299:
StringCopy(&Var2, "TORSO_P1_30_3", 16);
iVar6=30;
iVar7=3;
iVar1=1850;
break;
case 300:
StringCopy(&Var2, "TORSO_P1_30_4", 16);
iVar6=30;
iVar7=4;
iVar1=1750;
break;
case 301:
StringCopy(&Var2, "TORSO_P1_30_5", 16);
iVar6=30;
iVar7=5;
iVar1=1990;
break;
case 302:
StringCopy(&Var2, "TORSO_P1_30_6", 16);
iVar6=30;
iVar7=6;
iVar1=1820;
break;
case 303:
StringCopy(&Var2, "TORSO_P1_30_7", 16);
iVar6=30;
iVar7=7;
iVar1=1990;
break;
case 304:
StringCopy(&Var2, "TORSO_P1_30_8", 16);
iVar6=30;
iVar7=8;
iVar1=1920;
break;
case 305:
StringCopy(&Var2, "TORSO_P1_30_9", 16);
iVar6=30;
iVar7=9;
iVar1=1850;
break;
case 306:
StringCopy(&Var2, "TORSO_P1_30_10", 16);
iVar6=30;
iVar7=10;
iVar1=1990;
break;
case 307:
StringCopy(&Var2, "TORSO_P1_30_11", 16);
iVar6=30;
iVar7=11;
iVar1=1790;
break;
case 308:
StringCopy(&Var2, "TORSO_P1_30_12", 16);
iVar6=30;
iVar7=12;
iVar1=1790;
break;
case 309:
StringCopy(&Var2, "TORSO_P1_31_0", 16);
iVar6=31;
iVar7=0;
iVar1=69;
break;
case 310:
StringCopy(&Var2, "TORSO_P1_31_1", 16);
iVar6=31;
iVar7=1;
iVar1=75;
break;
case 311:
StringCopy(&Var2, "TORSO_P1_31_2", 16);
iVar6=31;
iVar7=2;
iVar1=75;
break;
case 312:
StringCopy(&Var2, "TORSO_P1_31_3", 16);
iVar6=31;
iVar7=3;
iVar1=79;
break;
case 313:
StringCopy(&Var2, "TORSO_P1_31_4", 16);
iVar6=31;
iVar7=4;
iVar1=79;
break;
case 314:
StringCopy(&Var2, "TORSO_P1_31_5", 16);
iVar6=31;
iVar7=5;
iVar1=89;
break;
case 315:
StringCopy(&Var2, "TORSO_P1_31_6", 16);
iVar6=31;
iVar7=6;
iVar1=85;
break;
case 316:
StringCopy(&Var2, "TORSO_P1_31_7", 16);
iVar6=31;
iVar7=7;
iVar1=85;
break;
case 317:
StringCopy(&Var2, "TORSO_P1_31_8", 16);
iVar6=31;
iVar7=8;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_144(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 107:
StringCopy(&Var2, "TORSO_P1_12_0", 16);
iVar6=12;
iVar7=0;
iVar1=195;
break;
case 108:
StringCopy(&Var2, "TORSO_P1_12_1", 16);
iVar6=12;
iVar7=1;
iVar1=420;
break;
case 109:
StringCopy(&Var2, "TORSO_P1_12_2", 16);
iVar6=12;
iVar7=2;
iVar1=390;
break;
case 110:
StringCopy(&Var2, "TORSO_P1_12_3", 16);
iVar6=12;
iVar7=3;
iVar1=450;
break;
case 111:
StringCopy(&Var2, "TORSO_P1_12_4", 16);
iVar6=12;
iVar7=4;
iVar1=400;
break;
case 112:
StringCopy(&Var2, "TORSO_P1_12_5", 16);
iVar6=12;
iVar7=5;
iVar1=390;
break;
case 113:
StringCopy(&Var2, "TORSO_P1_12_6", 16);
iVar6=12;
iVar7=6;
iVar1=570;
break;
case 114:
StringCopy(&Var2, "TORSO_P1_12_7", 16);
iVar6=12;
iVar7=7;
iVar1=390;
break;
case 115:
StringCopy(&Var2, "TORSO_P1_12_8", 16);
iVar6=12;
iVar7=8;
iVar1=470;
break;
case 116:
StringCopy(&Var2, "TORSO_P1_12_9", 16);
iVar6=12;
iVar7=9;
iVar1=390;
break;
case 117:
StringCopy(&Var2, "TORSO_P1_12_10", 16);
iVar6=12;
iVar7=10;
iVar1=520;
break;
case 118:
StringCopy(&Var2, "TORSO_P1_12_11", 16);
iVar6=12;
iVar7=11;
iVar1=490;
break;
case 119:
StringCopy(&Var2, "TORSO_P1_12_12", 16);
iVar6=12;
iVar7=12;
iVar1=490;
break;
case 120:
StringCopy(&Var2, "TORSO_P1_12_13", 16);
iVar6=12;
iVar7=13;
iVar1=590;
break;
case 121:
StringCopy(&Var2, "TORSO_P1_12_14", 16);
iVar6=12;
iVar7=14;
iVar1=560;
break;
case 122:
StringCopy(&Var2, "TORSO_P1_12_15", 16);
iVar6=12;
iVar7=15;
iVar1=520;
break;
case 123:
StringCopy(&Var2, "TORSO_P1_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 124:
StringCopy(&Var2, "TORSO_P1_13_1", 16);
iVar6=13;
iVar7=1;
break;
case 125:
StringCopy(&Var2, "TORSO_P1_13_2", 16);
iVar6=13;
iVar7=2;
break;
case 126:
StringCopy(&Var2, "TORSO_P1_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=90;
break;
case 127:
StringCopy(&Var2, "TORSO_P1_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=85;
break;
case 128:
StringCopy(&Var2, "TORSO_P1_13_5", 16);
iVar6=13;
iVar7=5;
iVar1=45;
break;
case 129:
StringCopy(&Var2, "TORSO_P1_13_6", 16);
iVar6=13;
iVar7=6;
iVar1=90;
break;
case 130:
StringCopy(&Var2, "TORSO_P1_13_7", 16);
iVar6=13;
iVar7=7;
iVar1=47;
break;
case 131:
StringCopy(&Var2, "TORSO_P1_13_8", 16);
iVar6=13;
iVar7=8;
iVar1=45;
break;
case 132:
StringCopy(&Var2, "TORSO_P1_13_9", 16);
iVar6=13;
iVar7=9;
iVar1=48;
break;
case 133:
StringCopy(&Var2, "TORSO_P1_13_10", 16);
iVar6=13;
iVar7=10;
iVar1=45;
break;
case 134:
StringCopy(&Var2, "TORSO_P1_13_11", 16);
iVar6=13;
iVar7=11;
iVar1=85;
break;
case 135:
StringCopy(&Var2, "TORSO_P1_13_12", 16);
iVar6=13;
iVar7=12;
iVar1=45;
break;
case 136:
StringCopy(&Var2, "TORSO_P1_13_13", 16);
iVar6=13;
iVar7=13;
iVar1=47;
break;
case 137:
StringCopy(&Var2, "TORSO_P1_13_14", 16);
iVar6=13;
iVar7=14;
iVar1=45;
break;
case 138:
StringCopy(&Var2, "TORSO_P1_13_15", 16);
iVar6=13;
iVar7=15;
iVar1=48;
break;
case 139:
StringCopy(&Var2, "TORSO_P1_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=290;
break;
case 140:
StringCopy(&Var2, "TORSO_P1_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=290;
break;
case 141:
StringCopy(&Var2, "TORSO_P1_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=290;
break;
case 142:
StringCopy(&Var2, "TORSO_P1_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=290;
break;
case 143:
StringCopy(&Var2, "TORSO_P1_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=290;
break;
case 144:
StringCopy(&Var2, "TORSO_P1_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=290;
break;
case 145:
StringCopy(&Var2, "TORSO_P1_14_6", 16);
iVar6=14;
iVar7=6;
iVar1=65;
break;
case 146:
StringCopy(&Var2, "TORSO_P1_14_7", 16);
iVar6=14;
iVar7=7;
iVar1=65;
break;
case 147:
StringCopy(&Var2, "TORSO_P1_15_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
break;
case 148:
StringCopy(&Var2, "TORSO_P1_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=220;
break;
case 149:
StringCopy(&Var2, "TORSO_P1_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=220;
break;
case 150:
StringCopy(&Var2, "TORSO_P1_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=240;
break;
case 151:
StringCopy(&Var2, "TORSO_P1_15_4", 16);
iVar6=15;
iVar7=4;
break;
case 152:
StringCopy(&Var2, "TORSO_P1_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=250;
break;
case 153:
StringCopy(&Var2, "TORSO_P1_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=260;
break;
case 154:
StringCopy(&Var2, "TORSO_P1_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=40;
break;
case 155:
StringCopy(&Var2, "TORSO_P1_15_8", 16);
iVar6=15;
iVar7=8;
iVar1=50;
break;
case 156:
StringCopy(&Var2, "TORSO_P1_15_9", 16);
iVar6=15;
iVar7=9;
iVar1=45;
break;
case 157:
StringCopy(&Var2, "TORSO_P1_15_10", 16);
iVar6=15;
iVar7=10;
iVar1=40;
break;
case 158:
StringCopy(&Var2, "TORSO_P1_15_11", 16);
iVar6=15;
iVar7=11;
iVar1=55;
break;
case 159:
StringCopy(&Var2, "TORSO_P1_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 160:
StringCopy(&Var2, "TORSO_P1_17_0", 16);
iVar6=17;
iVar7=0;
iVar1=40;
break;
case 161:
StringCopy(&Var2, "TORSO_P1_17_1", 16);
iVar6=17;
iVar7=1;
iVar1=50;
break;
case 162:
StringCopy(&Var2, "TORSO_P1_17_2", 16);
iVar6=17;
iVar7=2;
break;
case 163:
StringCopy(&Var2, "TORSO_P1_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=50;
break;
case 164:
StringCopy(&Var2, "TORSO_P1_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=50;
break;
case 165:
StringCopy(&Var2, "TORSO_P1_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=50;
break;
case 166:
StringCopy(&Var2, "TORSO_P1_17_6", 16);
iVar6=17;
iVar7=6;
iVar1=50;
break;
case 167:
StringCopy(&Var2, "TORSO_P1_17_7", 16);
iVar6=17;
iVar7=7;
iVar1=50;
break;
case 168:
StringCopy(&Var2, "TORSO_P1_17_8", 16);
iVar6=17;
iVar7=8;
iVar1=50;
break;
case 169:
StringCopy(&Var2, "TORSO_P1_17_9", 16);
iVar6=17;
iVar7=9;
iVar1=50;
break;
case 170:
StringCopy(&Var2, "TORSO_P1_17_10", 16);
iVar6=17;
iVar7=10;
iVar1=50;
break;
case 171:
StringCopy(&Var2, "TORSO_P1_17_11", 16);
iVar6=17;
iVar7=11;
iVar1=50;
break;
case 172:
StringCopy(&Var2, "TORSO_P1_17_12", 16);
iVar6=17;
iVar7=12;
iVar1=50;
break;
case 173:
StringCopy(&Var2, "TORSO_P1_17_13", 16);
iVar6=17;
iVar7=13;
iVar1=50;
break;
case 174:
StringCopy(&Var2, "TORSO_P1_17_14", 16);
iVar6=17;
iVar7=14;
iVar1=50;
break;
case 175:
StringCopy(&Var2, "TORSO_P1_17_15", 16);
iVar6=17;
iVar7=15;
iVar1=50;
break;
case 176:
StringCopy(&Var2, "TORSO_P1_18_0", 16);
iVar6=18;
iVar7=0;
iVar9=3;
break;
case 177:
StringCopy(&Var2, "TORSO_P1_18_1", 16);
iVar6=18;
iVar7=1;
iVar9=3;
break;
case 178:
StringCopy(&Var2, "TORSO_P1_18_2", 16);
iVar6=18;
iVar7=2;
iVar9=3;
break;
case 179:
StringCopy(&Var2, "TORSO_P1_18_3", 16);
iVar6=18;
iVar7=3;
iVar9=3;
break;
case 180:
StringCopy(&Var2, "TORSO_P1_18_4", 16);
iVar6=18;
iVar7=4;
iVar9=3;
break;
case 181:
StringCopy(&Var2, "TORSO_P1_18_5", 16);
iVar6=18;
iVar7=5;
iVar9=3;
break;
case 182:
StringCopy(&Var2, "TORSO_P1_18_6", 16);
iVar6=18;
iVar7=6;
iVar9=3;
break;
case 183:
StringCopy(&Var2, "TORSO_P1_18_7", 16);
iVar6=18;
iVar7=7;
iVar9=3;
break;
case 184:
StringCopy(&Var2, "TORSO_P1_18_8", 16);
iVar6=18;
iVar7=8;
iVar9=3;
break;
case 185:
StringCopy(&Var2, "TORSO_P1_18_9", 16);
iVar6=18;
iVar7=9;
iVar9=3;
break;
case 186:
StringCopy(&Var2, "TORSO_P1_18_10", 16);
iVar6=18;
iVar7=10;
iVar9=3;
break;
case 187:
StringCopy(&Var2, "TORSO_P1_18_11", 16);
iVar6=18;
iVar7=11;
iVar9=3;
break;
case 188:
StringCopy(&Var2, "TORSO_P1_18_12", 16);
iVar6=18;
iVar7=12;
iVar9=3;
break;
case 189:
StringCopy(&Var2, "TORSO_P1_18_13", 16);
iVar6=18;
iVar7=13;
iVar9=3;
break;
case 190:
StringCopy(&Var2, "TORSO_P1_18_14", 16);
iVar6=18;
iVar7=14;
iVar9=3;
break;
case 191:
StringCopy(&Var2, "TORSO_P1_18_15", 16);
iVar6=18;
iVar7=15;
iVar9=3;
break;
case 192:
StringCopy(&Var2, "TORSO_P1_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=480;
iVar9=3;
break;
case 193:
StringCopy(&Var2, "TORSO_P1_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=440;
iVar9=3;
break;
case 194:
StringCopy(&Var2, "TORSO_P1_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=440;
iVar9=3;
break;
case 195:
StringCopy(&Var2, "TORSO_P1_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=520;
iVar9=3;
break;
case 196:
StringCopy(&Var2, "TORSO_P1_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=440;
iVar9=3;
break;
case 197:
StringCopy(&Var2, "TORSO_P1_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=440;
iVar9=3;
break;
case 198:
StringCopy(&Var2, "TORSO_P1_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=480;
iVar9=3;
break;
case 199:
StringCopy(&Var2, "TORSO_P1_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=480;
iVar9=3;
break;
case 200:
StringCopy(&Var2, "TORSO_P1_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=480;
iVar9=3;
break;
case 201:
StringCopy(&Var2, "TORSO_P1_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=480;
iVar9=3;
break;
case 202:
StringCopy(&Var2, "TORSO_P1_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=480;
iVar9=3;
break;
case 203:
StringCopy(&Var2, "TORSO_P1_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=480;
iVar9=3;
break;
case 204:
StringCopy(&Var2, "TORSO_P1_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=520;
iVar9=3;
break;
case 205:
StringCopy(&Var2, "TORSO_P1_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=520;
iVar9=3;
break;
case 206:
StringCopy(&Var2, "TORSO_P1_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=520;
iVar9=3;
break;
case 207:
StringCopy(&Var2, "TORSO_P1_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=440;
iVar9=3;
break;
case 208:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 209:
StringCopy(&Var2, "TORSO_P1_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=220;
break;
case 210:
StringCopy(&Var2, "TORSO_P1_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=200;
break;
case 211:
StringCopy(&Var2, "TORSO_P1_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=240;
break;
case 212:
StringCopy(&Var2, "TORSO_P1_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=240;
break;
case 213:
StringCopy(&Var2, "TORSO_P1_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=260;
break;
case 214:
StringCopy(&Var2, "TORSO_P1_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=275;
break;
case 215:
StringCopy(&Var2, "TORSO_P1_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=275;
break;
case 216:
StringCopy(&Var2, "TORSO_P1_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=280;
break;
case 217:
StringCopy(&Var2, "TORSO_P1_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=280;
break;
case 218:
StringCopy(&Var2, "TORSO_P1_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=280;
break;
case 219:
StringCopy(&Var2, "TORSO_P1_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=280;
break;
case 220:
StringCopy(&Var2, "TORSO_P1_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=280;
break;
case 221:
StringCopy(&Var2, "TORSO_P1_21_12", 16);
iVar6=21;
iVar7=12;
iVar1=280;
break;
case 222:
StringCopy(&Var2, "TORSO_P1_21_13", 16);
iVar6=21;
iVar7=13;
iVar1=280;
break;
case 223:
StringCopy(&Var2, "TORSO_P1_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=3100;
iVar9=3;
break;
case 224:
StringCopy(&Var2, "TORSO_P1_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=2800;
iVar9=3;
break;
case 225:
StringCopy(&Var2, "TORSO_P1_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=2500;
iVar9=3;
break;
case 226:
StringCopy(&Var2, "TORSO_P1_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=3000;
iVar9=3;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_145(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P1_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P1_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=180;
break;
case 3:
StringCopy(&Var2, "TORSO_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=22;
break;
case 4:
StringCopy(&Var2, "TORSO_P1_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=20;
break;
case 5:
StringCopy(&Var2, "TORSO_P1_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=18;
break;
case 6:
StringCopy(&Var2, "TORSO_P1_0_6", 16);
iVar6=0;
iVar7=6;
iVar1=19;
break;
case 7:
StringCopy(&Var2, "TORSO_P1_0_7", 16);
iVar6=0;
iVar7=7;
iVar1=22;
break;
case 8:
StringCopy(&Var2, "TORSO_P1_0_8", 16);
iVar6=0;
iVar7=8;
iVar1=20;
break;
case 9:
StringCopy(&Var2, "TORSO_P1_0_9", 16);
iVar6=0;
iVar7=9;
iVar1=19;
break;
case 10:
StringCopy(&Var2, "TORSO_P1_0_10", 16);
iVar6=0;
iVar7=10;
iVar1=19;
break;
case 11:
StringCopy(&Var2, "TORSO_P1_0_11", 16);
iVar6=0;
iVar7=11;
iVar1=18;
break;
case 12:
StringCopy(&Var2, "TORSO_P1_0_12", 16);
iVar6=0;
iVar7=12;
iVar1=20;
break;
case 13:
StringCopy(&Var2, "TORSO_P1_0_13", 16);
iVar6=0;
iVar7=13;
iVar1=22;
break;
case 14:
StringCopy(&Var2, "TORSO_P1_0_14", 16);
iVar6=0;
iVar7=14;
iVar1=19;
break;
case 15:
StringCopy(&Var2, "TORSO_P1_0_15", 16);
iVar6=0;
iVar7=15;
iVar1=22;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
bVar0=true;
iVar9=4;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=2;
bVar0=true;
iVar9=4;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=3;
bVar0=true;
iVar9=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=4;
bVar0=true;
iVar9=4;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=5;
bVar0=true;
iVar9=4;
break;
case 22:
StringCopy(&Var2, "TORSO_P1_2_0", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar9=3;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar9=1;
break;
case 24:
StringCopy(&Var2, "TORSO_P1_4_0", 16);
iVar6=4;
iVar7=0;
iVar1=20;
iVar9=2;
break;
case 25:
StringCopy(&Var2, "TORSO_P1_4_1", 16);
iVar6=4;
iVar7=1;
iVar1=22;
iVar9=2;
break;
case 26:
StringCopy(&Var2, "TORSO_P1_4_2", 16);
iVar6=4;
iVar7=2;
iVar1=20;
iVar9=2;
break;
case 27:
StringCopy(&Var2, "TORSO_P1_4_3", 16);
iVar6=4;
iVar7=3;
iVar1=25;
iVar9=2;
break;
case 28:
StringCopy(&Var2, "TORSO_P1_4_4", 16);
iVar6=4;
iVar7=4;
iVar1=23;
iVar9=2;
break;
case 29:
StringCopy(&Var2, "TORSO_P1_4_5", 16);
iVar6=4;
iVar7=5;
iVar1=25;
iVar9=2;
break;
case 30:
StringCopy(&Var2, "TORSO_P1_4_6", 16);
iVar6=4;
iVar7=6;
iVar1=28;
iVar9=2;
break;
case 31:
StringCopy(&Var2, "TORSO_P1_4_7", 16);
iVar6=4;
iVar7=7;
iVar1=26;
iVar9=2;
break;
case 32:
StringCopy(&Var2, "TORSO_P1_4_8", 16);
iVar6=4;
iVar7=8;
iVar1=24;
iVar9=2;
break;
case 33:
StringCopy(&Var2, "TORSO_P1_4_9", 16);
iVar6=4;
iVar7=9;
iVar1=27;
iVar9=2;
break;
case 34:
StringCopy(&Var2, "TORSO_P1_4_10", 16);
iVar6=4;
iVar7=10;
iVar1=29;
iVar9=2;
break;
case 35:
StringCopy(&Var2, "TORSO_P1_4_11", 16);
iVar6=4;
iVar7=11;
iVar1=28;
iVar9=2;
break;
case 36:
StringCopy(&Var2, "TORSO_P1_4_12", 16);
iVar6=4;
iVar7=12;
iVar1=25;
iVar9=2;
break;
case 37:
StringCopy(&Var2, "TORSO_P1_4_13", 16);
iVar6=4;
iVar7=13;
iVar1=22;
iVar9=2;
break;
case 38:
StringCopy(&Var2, "TORSO_P1_4_14", 16);
iVar6=4;
iVar7=14;
iVar1=27;
iVar9=2;
break;
case 39:
StringCopy(&Var2, "TORSO_P1_4_15", 16);
iVar6=4;
iVar7=15;
iVar1=29;
iVar9=2;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar9=4;
break;
case 41:
StringCopy(&Var2, "TORSO_P1_6_0", 16);
iVar6=6;
iVar7=0;
iVar9=3;
break;
case 42:
StringCopy(&Var2, "TORSO_P1_6_1", 16);
iVar6=6;
iVar7=1;
iVar1=1270;
iVar9=3;
break;
case 43:
StringCopy(&Var2, "TORSO_P1_6_2", 16);
iVar6=6;
iVar7=2;
iVar1=1270;
iVar9=3;
break;
case 44:
StringCopy(&Var2, "TORSO_P1_6_3", 16);
iVar6=6;
iVar7=3;
iVar1=1270;
iVar9=3;
break;
case 45:
StringCopy(&Var2, "TORSO_P1_6_4", 16);
iVar6=6;
iVar7=4;
iVar1=1090;
iVar9=3;
break;
case 46:
StringCopy(&Var2, "TORSO_P1_6_5", 16);
iVar6=6;
iVar7=5;
iVar1=1090;
iVar9=3;
break;
case 47:
StringCopy(&Var2, "TORSO_P1_6_6", 16);
iVar6=6;
iVar7=6;
iVar1=1120;
iVar9=3;
break;
case 48:
StringCopy(&Var2, "TORSO_P1_6_7", 16);
iVar6=6;
iVar7=7;
iVar1=1120;
iVar9=3;
break;
case 49:
StringCopy(&Var2, "TORSO_P1_6_8", 16);
iVar6=6;
iVar7=8;
iVar1=1290;
iVar9=3;
break;
case 50:
StringCopy(&Var2, "TORSO_P1_6_9", 16);
iVar6=6;
iVar7=9;
iVar1=1290;
iVar9=3;
break;
case 51:
StringCopy(&Var2, "TORSO_P1_6_10", 16);
iVar6=6;
iVar7=10;
iVar1=1320;
iVar9=3;
break;
case 52:
StringCopy(&Var2, "TORSO_P1_6_11", 16);
iVar6=6;
iVar7=11;
iVar1=1320;
iVar9=3;
break;
case 53:
StringCopy(&Var2, "TORSO_P1_6_12", 16);
iVar6=6;
iVar7=12;
iVar1=1590;
iVar9=3;
break;
case 54:
StringCopy(&Var2, "TORSO_P1_6_13", 16);
iVar6=6;
iVar7=13;
iVar1=1590;
iVar9=3;
break;
case 55:
StringCopy(&Var2, "TORSO_P1_6_14", 16);
iVar6=6;
iVar7=14;
iVar1=1590;
iVar9=3;
break;
case 56:
StringCopy(&Var2, "TORSO_P1_6_15", 16);
iVar6=6;
iVar7=15;
iVar1=1320;
iVar9=3;
break;
case 57:
StringCopy(&Var2, "TORSO_P1_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=98;
break;
case 58:
StringCopy(&Var2, "TORSO_P1_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=98;
break;
case 59:
StringCopy(&Var2, "TORSO_P1_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=110;
break;
case 60:
StringCopy(&Var2, "TORSO_P1_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=110;
break;
case 61:
StringCopy(&Var2, "TORSO_P1_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=118;
break;
case 62:
StringCopy(&Var2, "TORSO_P1_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=120;
break;
case 63:
StringCopy(&Var2, "TORSO_P1_7_6", 16);
iVar6=7;
iVar7=6;
iVar1=120;
break;
case 64:
StringCopy(&Var2, "TORSO_P1_7_7", 16);
iVar6=7;
iVar7=7;
iVar1=129;
break;
case 65:
StringCopy(&Var2, "TORSO_P1_7_8", 16);
iVar6=7;
iVar7=8;
iVar1=125;
break;
case 66:
StringCopy(&Var2, "TORSO_P1_7_9", 16);
iVar6=7;
iVar7=9;
iVar1=125;
break;
case 67:
StringCopy(&Var2, "TORSO_P1_7_10", 16);
iVar6=7;
iVar7=10;
iVar1=129;
break;
case 68:
StringCopy(&Var2, "TORSO_P1_7_11", 16);
iVar6=7;
iVar7=11;
iVar1=129;
break;
case 69:
StringCopy(&Var2, "TORSO_P1_7_12", 16);
iVar6=7;
iVar7=12;
iVar1=135;
break;
case 70:
StringCopy(&Var2, "TORSO_P1_7_13", 16);
iVar6=7;
iVar7=13;
iVar1=139;
break;
case 71:
StringCopy(&Var2, "TORSO_P1_7_14", 16);
iVar6=7;
iVar7=14;
iVar1=145;
break;
case 72:
StringCopy(&Var2, "TORSO_P1_7_15", 16);
iVar6=7;
iVar7=15;
iVar1=145;
break;
case 73:
StringCopy(&Var2, "TORSO_P1_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 74:
StringCopy(&Var2, "TORSO_P1_8_1", 16);
iVar6=8;
iVar7=1;
break;
case 75:
StringCopy(&Var2, "TORSO_P1_8_2", 16);
iVar6=8;
iVar7=2;
break;
case 76:
StringCopy(&Var2, "TORSO_P1_8_3", 16);
iVar6=8;
iVar7=3;
break;
case 77:
StringCopy(&Var2, "TORSO_P1_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=30;
break;
case 78:
StringCopy(&Var2, "TORSO_P1_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=38;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P1_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=32;
break;
case 80:
StringCopy(&Var2, "TORSO_P1_8_7", 16);
iVar6=8;
iVar7=7;
iVar1=30;
break;
case 81:
StringCopy(&Var2, "TORSO_P1_8_8", 16);
iVar6=8;
iVar7=8;
iVar1=33;
break;
case 82:
StringCopy(&Var2, "TORSO_P1_8_9", 16);
iVar6=8;
iVar7=9;
iVar1=35;
break;
case 83:
StringCopy(&Var2, "TORSO_P1_8_10", 16);
iVar6=8;
iVar7=10;
iVar1=35;
break;
case 84:
StringCopy(&Var2, "TORSO_P1_8_11", 16);
iVar6=8;
iVar7=11;
iVar1=38;
break;
case 85:
StringCopy(&Var2, "TORSO_P1_8_12", 16);
iVar6=8;
iVar7=12;
iVar1=33;
break;
case 86:
StringCopy(&Var2, "TORSO_P1_8_13", 16);
iVar6=8;
iVar7=13;
iVar1=35;
break;
case 87:
StringCopy(&Var2, "TORSO_P1_8_14", 16);
iVar6=8;
iVar7=14;
iVar1=38;
break;
case 88:
StringCopy(&Var2, "TORSO_P1_8_15", 16);
iVar6=8;
iVar7=15;
iVar1=32;
break;
case 89:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 90:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 91:
StringCopy(&Var2, "TORSO_P1_11_0", 16);
iVar6=11;
iVar7=0;
break;
case 92:
StringCopy(&Var2, "TORSO_P1_11_1", 16);
iVar6=11;
iVar7=1;
iVar1=59;
break;
case 93:
StringCopy(&Var2, "TORSO_P1_11_2", 16);
iVar6=11;
iVar7=2;
break;
case 94:
StringCopy(&Var2, "TORSO_P1_11_3", 16);
iVar6=11;
iVar7=3;
iVar1=25;
break;
case 95:
StringCopy(&Var2, "TORSO_P1_11_4", 16);
iVar6=11;
iVar7=4;
iVar1=29;
break;
case 96:
StringCopy(&Var2, "TORSO_P1_11_5", 16);
iVar6=11;
iVar7=5;
iVar1=27;
break;
case 97:
StringCopy(&Var2, "TORSO_P1_11_6", 16);
iVar6=11;
iVar7=6;
iVar1=25;
break;
case 98:
StringCopy(&Var2, "TORSO_P1_11_7", 16);
iVar6=11;
iVar7=7;
iVar1=27;
break;
case 99:
StringCopy(&Var2, "TORSO_P1_11_8", 16);
iVar6=11;
iVar7=8;
iVar1=28;
break;
case 100:
StringCopy(&Var2, "TORSO_P1_11_9", 16);
iVar6=11;
iVar7=9;
iVar1=30;
break;
case 101:
StringCopy(&Var2, "TORSO_P1_11_10", 16);
iVar6=11;
iVar7=10;
iVar1=29;
break;
case 102:
StringCopy(&Var2, "TORSO_P1_11_11", 16);
iVar6=11;
iVar7=11;
iVar1=27;
break;
case 103:
StringCopy(&Var2, "TORSO_P1_11_12", 16);
iVar6=11;
iVar7=12;
iVar1=29;
break;
case 104:
StringCopy(&Var2, "TORSO_P1_11_13", 16);
iVar6=11;
iVar7=13;
iVar1=32;
break;
case 105:
StringCopy(&Var2, "TORSO_P1_11_14", 16);
iVar6=11;
iVar7=14;
iVar1=30;
break;
case 106:
StringCopy(&Var2, "TORSO_P1_11_15", 16);
iVar6=11;
iVar7=15;
iVar1=28;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_146(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P1_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P1_0_1", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "HAIR_P1_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "HAIR_P1_0_3", 16);
iVar6=0;
iVar7=3;
iVar9=3;
break;
case 4:
StringCopy(&Var2, "HAIR_P1_0_4", 16);
iVar6=0;
iVar7=4;
iVar9=3;
break;
case 5:
StringCopy(&Var2, "HAIR_P1_0_5", 16);
iVar6=0;
iVar7=5;
iVar9=3;
break;
case 6:
StringCopy(&Var2, "HAIR_P1_0_6", 16);
iVar6=0;
iVar7=6;
iVar9=3;
break;
case 7:
StringCopy(&Var2, "HAIR_P1_0_7", 16);
iVar6=0;
iVar7=7;
iVar9=3;
break;
case 8:
StringCopy(&Var2, "HAIR_P1_0_8", 16);
iVar6=0;
iVar7=8;
iVar9=3;
break;
case 9:
StringCopy(&Var2, "HAIR_P1_0_9", 16);
iVar6=0;
iVar7=9;
iVar9=3;
break;
case 10:
StringCopy(&Var2, "HAIR_P1_0_10", 16);
iVar6=0;
iVar7=10;
iVar9=3;
break;
case 11:
StringCopy(&Var2, "HAIR_P1_0_11", 16);
iVar6=0;
iVar7=11;
iVar9=3;
break;
case 12:
StringCopy(&Var2, "HAIR_P1_0_12", 16);
iVar6=0;
iVar7=12;
iVar9=3;
break;
case 13:
StringCopy(&Var2, "HAIR_P1_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "HAIR_P1_0_14", 16);
iVar6=0;
iVar7=14;
iVar9=3;
break;
case 15:
StringCopy(&Var2, "HAIR_P1_0_15", 16);
iVar6=0;
iVar7=15;
iVar9=3;
break;
case 16:
StringCopy(&Var2, "HAIR_P1_1_0", 16);
iVar6=1;
iVar7=0;
iVar9=3;
break;
case 17:
StringCopy(&Var2, "HAIR_P1_2_0", 16);
iVar6=2;
iVar7=0;
iVar9=3;
break;
case 18:
StringCopy(&Var2, "HAIR_P1_3_0", 16);
iVar6=3;
iVar7=0;
iVar9=3;
break;
case 19:
StringCopy(&Var2, "HAIR_P1_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 21, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_147(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=1;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=9;
break;
default:
func_112(iVar10, iParam0, 10, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_148(int iParam0, int iParam1){
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
}}


void func_149(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=14;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=6;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=7;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=-1;
iVar7=0;
iVar1=0;
iVar8=8;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 11:
StringCopy(&Var2, "PROPS_P0_H1", 16);
iVar6=1;
iVar7=0;
iVar8=0;
break;
case 12:
StringCopy(&Var2, "PROPS_P0_H2", 16);
iVar6=2;
iVar7=0;
iVar1=320;
iVar8=11;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
iVar8=0;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
iVar8=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
iVar8=0;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
iVar8=0;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
iVar8=0;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
iVar8=0;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
iVar8=0;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=6;
iVar8=0;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=7;
iVar8=0;
break;
case 29:
StringCopy(&Var2, "PROPS_P0_H12", 16);
iVar6=12;
iVar7=0;
iVar8=0;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
iVar8=0;
break;
case 31:
StringCopy(&Var2, "PROPS_P1_H8_0", 16);
iVar6=14;
iVar7=0;
iVar1=270;
iVar8=0;
break;
case 32:
StringCopy(&Var2, "PROPS_P1_H8_1", 16);
iVar6=14;
iVar7=1;
iVar1=270;
iVar8=0;
break;
case 33:
StringCopy(&Var2, "PROPS_P1_H9_0", 16);
iVar6=15;
iVar7=0;
iVar1=200;
iVar8=0;
break;
case 34:
StringCopy(&Var2, "PROPS_P1_H9_1", 16);
iVar6=15;
iVar7=1;
iVar1=200;
iVar8=0;
break;
case 35:
StringCopy(&Var2, "PROPS_P1_H10_0", 16);
iVar6=16;
iVar7=0;
iVar1=350;
iVar8=0;
break;
case 36:
StringCopy(&Var2, "PROPS_P1_H10_1", 16);
iVar6=16;
iVar7=1;
iVar1=350;
iVar8=0;
break;
case 37:
StringCopy(&Var2, "PROPS_P1_H11_0", 16);
iVar6=17;
iVar7=0;
iVar1=450;
iVar8=0;
break;
case 38:
StringCopy(&Var2, "PROPS_P1_H12_0", 16);
iVar6=18;
iVar7=0;
iVar1=500;
iVar8=0;
break;
case 39:
StringCopy(&Var2, "PROPS_P1_H12_1", 16);
iVar6=18;
iVar7=1;
iVar1=500;
iVar8=0;
break;
case 40:
StringCopy(&Var2, "PROPS_P1_H13_0", 16);
iVar6=19;
iVar7=0;
iVar1=50;
iVar8=0;
break;
case 41:
StringCopy(&Var2, "PROPS_P1_H13_1", 16);
iVar6=19;
iVar7=1;
iVar1=50;
iVar8=0;
break;
case 42:
StringCopy(&Var2, "PROPS_P1_H14_0", 16);
iVar6=20;
iVar7=0;
iVar1=99;
iVar8=0;
break;
case 43:
StringCopy(&Var2, "PROPS_P1_H14_1", 16);
iVar6=20;
iVar7=1;
iVar1=99;
iVar8=0;
break;
case 44:
StringCopy(&Var2, "PROPS_P1_H14_2", 16);
iVar6=20;
iVar7=2;
iVar1=99;
iVar8=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
iVar8=0;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
iVar8=0;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
iVar8=0;
break;
case 48:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=1;
iVar8=0;
break;
case 49:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=2;
iVar8=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=3;
iVar8=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=4;
iVar8=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=5;
iVar8=0;
break;
case 53:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
iVar8=0;
break;
case 54:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
iVar8=0;
break;
case 55:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
iVar8=0;
break;
case 56:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
iVar8=0;
break;
case 57:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=28;
iVar7=0;
iVar8=0;
break;
case 58:
StringCopy(&Var2, "PROPS_P0_E0", 16);
iVar6=0;
iVar7=0;
iVar1=45;
iVar8=10;
break;
case 59:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
iVar8=10;
break;
case 61:
StringCopy(&Var2, "PROPS_P0_E3", 16);
iVar6=3;
iVar7=0;
iVar1=55;
iVar8=10;
break;
case 62:
StringCopy(&Var2, "PROPS_P0_E4", 16);
iVar6=4;
iVar7=0;
iVar1=58;
iVar8=10;
break;
case 63:
StringCopy(&Var2, "PROPS_P0_E4_1", 16);
iVar6=4;
iVar7=1;
iVar1=56;
iVar8=10;
break;
case 64:
StringCopy(&Var2, "PROPS_P0_E4_2", 16);
iVar6=4;
iVar7=2;
iVar1=60;
iVar8=10;
break;
case 65:
StringCopy(&Var2, "PROPS_P0_E4_3", 16);
iVar6=4;
iVar7=3;
iVar1=65;
iVar8=10;
break;
case 66:
StringCopy(&Var2, "PROPS_P0_E4_4", 16);
iVar6=4;
iVar7=4;
iVar1=62;
iVar8=10;
break;
case 67:
StringCopy(&Var2, "PROPS_P0_E4_5", 16);
iVar6=4;
iVar7=5;
iVar1=65;
iVar8=10;
break;
case 68:
StringCopy(&Var2, "PROPS_P0_E4_6", 16);
iVar6=4;
iVar7=6;
iVar1=68;
iVar8=10;
break;
case 69:
StringCopy(&Var2, "PROPS_P0_E4_7", 16);
iVar6=4;
iVar7=7;
iVar1=68;
iVar8=10;
break;
case 70:
StringCopy(&Var2, "PROPS_P0_E5", 16);
iVar6=5;
iVar7=0;
iVar1=65;
iVar8=10;
break;
case 71:
StringCopy(&Var2, "PROPS_P0_E5_1", 16);
iVar6=5;
iVar7=1;
iVar1=69;
iVar8=10;
break;
case 72:
StringCopy(&Var2, "PROPS_P0_E5_2", 16);
iVar6=5;
iVar7=2;
iVar1=72;
iVar8=10;
break;
case 73:
StringCopy(&Var2, "PROPS_P0_E5_3", 16);
iVar6=5;
iVar7=3;
iVar1=70;
iVar8=10;
break;
case 74:
StringCopy(&Var2, "PROPS_P0_E5_4", 16);
iVar6=5;
iVar7=4;
iVar1=74;
iVar8=10;
break;
case 75:
StringCopy(&Var2, "PROPS_P0_E5_5", 16);
iVar6=5;
iVar7=5;
iVar1=78;
iVar8=10;
break;
case 76:
StringCopy(&Var2, "PROPS_P0_E5_6", 16);
iVar6=5;
iVar7=6;
iVar1=82;
iVar8=10;
break;
case 77:
StringCopy(&Var2, "PROPS_P0_E5_7", 16);
iVar6=5;
iVar7=7;
iVar1=85;
iVar8=10;
break;
case 78:
StringCopy(&Var2, "PROPS_P0_E5_8", 16);
iVar6=5;
iVar7=8;
iVar1=85;
iVar8=10;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "PROPS_P0_E5_9", 16);
iVar6=5;
iVar7=9;
iVar8=10;
break;
case 80:
StringCopy(&Var2, "PROPS_P0_E6", 16);
iVar6=6;
iVar7=0;
iVar1=69;
iVar8=10;
break;
case 81:
StringCopy(&Var2, "PROPS_P0_E6_1", 16);
iVar6=6;
iVar7=1;
iVar1=69;
iVar8=10;
break;
case 82:
StringCopy(&Var2, "PROPS_P0_E6_2", 16);
iVar6=6;
iVar7=2;
iVar1=69;
iVar8=10;
break;
case 83:
StringCopy(&Var2, "PROPS_P0_E6_3", 16);
iVar6=6;
iVar7=3;
iVar1=69;
iVar8=10;
break;
case 84:
StringCopy(&Var2, "PROPS_P0_E6_4", 16);
iVar6=6;
iVar7=4;
iVar1=69;
iVar8=10;
break;
case 85:
StringCopy(&Var2, "PROPS_P0_E6_5", 16);
iVar6=6;
iVar7=5;
iVar1=69;
iVar8=10;
break;
case 86:
StringCopy(&Var2, "PROPS_P0_E6_6", 16);
iVar6=6;
iVar7=6;
iVar1=69;
iVar8=10;
break;
case 87:
StringCopy(&Var2, "PROPS_P0_E6_7", 16);
iVar6=6;
iVar7=7;
iVar1=69;
iVar8=10;
break;
case 88:
StringCopy(&Var2, "PROPS_P0_E6_8", 16);
iVar6=6;
iVar7=8;
iVar1=69;
iVar8=10;
break;
case 89:
StringCopy(&Var2, "PROPS_P0_E6_9", 16);
iVar6=6;
iVar7=9;
iVar1=69;
iVar8=10;
break;
case 90:
StringCopy(&Var2, "PROPS_P0_E7", 16);
iVar6=7;
iVar7=0;
iVar8=10;
break;
case 91:
StringCopy(&Var2, "PROPS_P0_E8", 16);
iVar6=8;
iVar7=0;
iVar1=170;
iVar8=10;
break;
case 92:
StringCopy(&Var2, "PROPS_P0_E8_1", 16);
iVar6=8;
iVar7=1;
iVar1=175;
iVar8=10;
break;
case 93:
StringCopy(&Var2, "PROPS_P0_E8_2", 16);
iVar6=8;
iVar7=2;
iVar1=180;
iVar8=10;
break;
case 94:
StringCopy(&Var2, "PROPS_P0_E8_3", 16);
iVar6=8;
iVar7=3;
iVar1=185;
iVar8=10;
break;
case 95:
StringCopy(&Var2, "PROPS_P0_E8_4", 16);
iVar6=8;
iVar7=4;
iVar1=189;
iVar8=10;
break;
case 96:
StringCopy(&Var2, "PROPS_P0_E8_5", 16);
iVar6=8;
iVar7=5;
iVar1=195;
iVar8=10;
break;
case 97:
StringCopy(&Var2, "PROPS_P0_E8_6", 16);
iVar6=8;
iVar7=6;
iVar1=235;
iVar8=10;
break;
case 98:
StringCopy(&Var2, "PROPS_P0_E8_7", 16);
iVar6=8;
iVar7=7;
iVar1=245;
iVar8=10;
break;
case 99:
StringCopy(&Var2, "PROPS_P0_E8_8", 16);
iVar6=8;
iVar7=8;
iVar1=250;
iVar8=10;
break;
case 100:
StringCopy(&Var2, "PROPS_P0_E8_9", 16);
iVar6=8;
iVar7=9;
iVar1=275;
iVar8=10;
break;
case 101:
StringCopy(&Var2, "PROPS_P0_E8_10", 16);
iVar6=8;
iVar7=10;
iVar1=280;
iVar8=10;
break;
case 102:
StringCopy(&Var2, "PROPS_P0_E8_11", 16);
iVar6=8;
iVar7=11;
iVar1=295;
iVar8=10;
break;
case 103:
StringCopy(&Var2, "PROPS_P0_E9", 16);
iVar6=9;
iVar7=0;
iVar1=179;
iVar8=10;
break;
case 104:
StringCopy(&Var2, "PROPS_P0_E9_1", 16);
iVar6=9;
iVar7=1;
iVar1=159;
iVar8=10;
break;
case 105:
StringCopy(&Var2, "PROPS_P0_E9_2", 16);
iVar6=9;
iVar7=2;
iVar1=165;
iVar8=10;
break;
case 106:
StringCopy(&Var2, "PROPS_P0_E9_3", 16);
iVar6=9;
iVar7=3;
iVar1=155;
iVar8=10;
break;
case 107:
StringCopy(&Var2, "PROPS_P0_E9_4", 16);
iVar6=9;
iVar7=4;
iVar1=175;
iVar8=10;
break;
case 108:
StringCopy(&Var2, "PROPS_P0_E9_5", 16);
iVar6=9;
iVar7=5;
iVar1=185;
iVar8=10;
break;
case 109:
StringCopy(&Var2, "PROPS_P0_E9_6", 16);
iVar6=9;
iVar7=6;
iVar1=189;
iVar8=10;
break;
case 110:
StringCopy(&Var2, "PROPS_P0_E9_7", 16);
iVar6=9;
iVar7=7;
iVar1=225;
iVar8=10;
break;
case 111:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
iVar1=100;
iVar8=10;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
iVar8=2;
break;
default:
func_112(iVar10, iParam0, 113, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_150(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=13;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 10, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_151(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=12;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "OUTFIT_P0_0", 16);
iVar6=0;
iVar7=0;
bVar0=true;
break;
case 1:
StringCopy(&Var2, "OUTFIT_P0_1", 16);
iVar6=0;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "OUTFIT_P0_4", 16);
iVar6=0;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "OUTFIT_P0_7", 16);
iVar6=0;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "OUTFIT_P0_8", 16);
iVar6=0;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "OUTFIT_P0_9", 16);
iVar6=0;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar6=0;
iVar7=0;
break;
case 9:
StringCopy(&Var2, "OUTFIT_P0_12", 16);
iVar6=0;
iVar7=0;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "OUTFIT_P0_14", 16);
iVar6=0;
iVar7=0;
break;
case 12:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar6=0;
iVar7=0;
break;
case 13:
StringCopy(&Var2, "OUTFIT_P0_18", 16);
iVar6=0;
iVar7=0;
break;
case 14:
StringCopy(&Var2, "OUTFIT_P0_19", 16);
iVar6=0;
iVar7=0;
break;
case 15:
StringCopy(&Var2, "OUTFIT_P0_20", 16);
iVar6=0;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "OUTFIT_P0_22", 16);
iVar6=0;
iVar7=0;
iVar1=10000;
break;
case 17:
StringCopy(&Var2, "OUTFIT_P0_23", 16);
iVar6=0;
iVar7=0;
break;
case 18:
StringCopy(&Var2, "OUTFIT_P0_24", 16);
iVar6=0;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "OUTFIT_P0_26", 16);
iVar6=0;
iVar7=0;
break;
case 20:
StringCopy(&Var2, "OUTFIT_P0_28", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 21:
StringCopy(&Var2, "OUTFIT_P0_29", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 22:
StringCopy(&Var2, "OUTFIT_P0_30", 16);
iVar6=0;
iVar7=0;
iVar1=105;
break;
case 23:
StringCopy(&Var2, "OUTFIT_P0_31", 16);
iVar6=0;
iVar7=0;
break;
case 24:
StringCopy(&Var2, "OUTFIT_P0_32", 16);
iVar6=0;
iVar7=0;
break;
case 25:
StringCopy(&Var2, "OUTFIT_P0_33", 16);
iVar6=0;
iVar7=0;
break;
case 26:
StringCopy(&Var2, "OUTFIT_P0_34", 16);
iVar6=0;
iVar7=0;
break;
case 27:
StringCopy(&Var2, "OUTFIT_P0_35", 16);
iVar6=0;
iVar7=0;
break;
case 28:
StringCopy(&Var2, "OUTFIT_P0_11", 16);
iVar6=0;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "OUTFIT_P0_36", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 30:
StringCopy(&Var2, "OUTFIT_P0_37", 16);
iVar6=0;
iVar7=0;
iVar1=840;
break;
case 31:
StringCopy(&Var2, "OUTFIT_P0_38", 16);
iVar6=0;
iVar7=0;
break;
case 32:
StringCopy(&Var2, "OUTFIT_P0_39", 16);
iVar6=0;
iVar7=0;
break;
case 33:
StringCopy(&Var2, "OUTFIT_P0_40", 16);
iVar6=0;
iVar7=0;
break;
case 34:
StringCopy(&Var2, "OUTFIT_P0_41", 16);
iVar6=0;
iVar7=0;
break;
case 35:
StringCopy(&Var2, "OUTFIT_P0_42", 16);
iVar6=0;
iVar7=0;
break;
case 36:
StringCopy(&Var2, "OUTFIT_P0_43", 16);
iVar6=0;
iVar7=0;
break;
case 37:
StringCopy(&Var2, "OUTFIT_P0_44", 16);
iVar6=0;
iVar7=0;
iVar1=3900;
break;
case 38:
StringCopy(&Var2, "OUTFIT_P0_45", 16);
iVar6=0;
iVar7=0;
iVar1=4000;
break;
case 39:
StringCopy(&Var2, "OUTFIT_P0_46", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 40:
StringCopy(&Var2, "OUTFIT_P0_47", 16);
iVar6=0;
iVar7=0;
iVar1=4600;
break;
case 41:
StringCopy(&Var2, "OUTFIT_P0_48", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 42:
StringCopy(&Var2, "OUTFIT_P0_49", 16);
iVar6=0;
iVar7=0;
iVar1=4400;
break;
case 43:
StringCopy(&Var2, "OUTFIT_P0_50", 16);
iVar6=0;
iVar7=0;
iVar1=4400;
break;
case 44:
StringCopy(&Var2, "OUTFIT_P0_51", 16);
iVar6=0;
iVar7=0;
iVar1=4900;
break;
case 45:
StringCopy(&Var2, "OUTFIT_P0_52", 16);
iVar6=0;
iVar7=0;
iVar1=5500;
break;
case 46:
StringCopy(&Var2, "OUTFIT_P0_53", 16);
iVar6=0;
iVar7=0;
iVar1=4500;
break;
case 47:
StringCopy(&Var2, "OUTFIT_P0_54", 16);
iVar6=0;
iVar7=0;
iVar1=5900;
break;
case 48:
StringCopy(&Var2, "OUTFIT_P0_55", 16);
iVar6=0;
iVar7=0;
break;
case 49:
StringCopy(&Var2, "OUTFIT_P0_17", 16);
iVar6=0;
iVar7=0;
break;
case 50:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 51:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 52:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 53, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_152(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=11;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "JBIB_P0_02_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "JBIB_P0_02_1", 16);
iVar6=2;
iVar7=1;
break;
case 4:
StringCopy(&Var2, "JBIB_P0_02_2", 16);
iVar6=2;
iVar7=2;
break;
case 5:
StringCopy(&Var2, "JBIB_P0_02_3", 16);
iVar6=2;
iVar7=3;
break;
case 6:
StringCopy(&Var2, "JBIB_P0_02_4", 16);
iVar6=2;
iVar7=4;
break;
case 7:
StringCopy(&Var2, "JBIB_P0_02_5", 16);
iVar6=2;
iVar7=5;
break;
case 8:
StringCopy(&Var2, "JBIB_P0_03_0", 16);
iVar6=3;
iVar7=0;
iVar1=390;
break;
case 9:
StringCopy(&Var2, "JBIB_P0_03_1", 16);
iVar6=3;
iVar7=1;
iVar1=390;
break;
case 10:
StringCopy(&Var2, "JBIB_P0_03_2", 16);
iVar6=3;
iVar7=2;
iVar1=420;
break;
case 11:
StringCopy(&Var2, "JBIB_P0_03_3", 16);
iVar6=3;
iVar7=3;
iVar1=420;
break;
case 12:
StringCopy(&Var2, "JBIB_P0_03_4", 16);
iVar6=3;
iVar7=4;
iVar1=490;
break;
case 13:
StringCopy(&Var2, "JBIB_P0_03_5", 16);
iVar6=3;
iVar7=5;
iVar1=490;
break;
case 14:
StringCopy(&Var2, "JBIB_P0_03_6", 16);
iVar6=3;
iVar7=6;
iVar1=540;
break;
case 15:
StringCopy(&Var2, "JBIB_P0_03_7", 16);
iVar6=3;
iVar7=7;
iVar1=540;
break;
case 16:
StringCopy(&Var2, "JBIB_P0_03_8", 16);
iVar6=3;
iVar7=8;
iVar1=550;
break;
case 17:
StringCopy(&Var2, "JBIB_P0_03_9", 16);
iVar6=3;
iVar7=9;
iVar1=540;
break;
case 18:
StringCopy(&Var2, "JBIB_P0_04_0", 16);
iVar6=4;
iVar7=0;
iVar1=850;
break;
case 19:
StringCopy(&Var2, "JBIB_P0_04_1", 16);
iVar6=4;
iVar7=1;
iVar1=850;
break;
case 20:
StringCopy(&Var2, "JBIB_P0_04_2", 16);
iVar6=4;
iVar7=2;
iVar1=890;
break;
case 21:
StringCopy(&Var2, "JBIB_P0_04_3", 16);
iVar6=4;
iVar7=3;
iVar1=890;
break;
case 22:
StringCopy(&Var2, "JBIB_P0_04_4", 16);
iVar6=4;
iVar7=4;
iVar1=920;
break;
case 23:
StringCopy(&Var2, "JBIB_P0_04_5", 16);
iVar6=4;
iVar7=5;
iVar1=920;
break;
case 24:
StringCopy(&Var2, "JBIB_P0_04_6", 16);
iVar6=4;
iVar7=6;
iVar1=950;
break;
case 25:
StringCopy(&Var2, "JBIB_P0_04_7", 16);
iVar6=4;
iVar7=7;
iVar1=980;
break;
case 26:
StringCopy(&Var2, "JBIB_P0_04_8", 16);
iVar6=4;
iVar7=8;
iVar1=1050;
break;
case 27:
StringCopy(&Var2, "JBIB_P0_04_9", 16);
iVar6=4;
iVar7=9;
iVar1=1100;
break;
case 28:
StringCopy(&Var2, "JBIB_P0_05_0", 16);
iVar6=5;
iVar7=0;
iVar1=1890;
break;
case 29:
StringCopy(&Var2, "JBIB_P0_05_1", 16);
iVar6=5;
iVar7=1;
iVar1=1820;
break;
case 30:
StringCopy(&Var2, "JBIB_P0_05_2", 16);
iVar6=5;
iVar7=2;
iVar1=1820;
break;
case 31:
StringCopy(&Var2, "JBIB_P0_05_3", 16);
iVar6=5;
iVar7=3;
iVar1=1850;
break;
case 32:
StringCopy(&Var2, "JBIB_P0_05_4", 16);
iVar6=5;
iVar7=4;
iVar1=1850;
break;
case 33:
StringCopy(&Var2, "JBIB_P0_05_5", 16);
iVar6=5;
iVar7=5;
iVar1=1900;
break;
case 34:
StringCopy(&Var2, "JBIB_P0_05_6", 16);
iVar6=5;
iVar7=6;
iVar1=1920;
break;
case 35:
StringCopy(&Var2, "JBIB_P0_05_7", 16);
iVar6=5;
iVar7=7;
iVar1=1980;
break;
case 36:
StringCopy(&Var2, "JBIB_P0_05_8", 16);
iVar6=5;
iVar7=8;
iVar1=2100;
break;
case 37:
StringCopy(&Var2, "JBIB_P0_05_9", 16);
iVar6=5;
iVar7=9;
iVar1=2120;
break;
case 38:
StringCopy(&Var2, "JBIB_P0_05_10", 16);
iVar6=5;
iVar7=10;
iVar1=2000;
break;
case 39:
StringCopy(&Var2, "JBIB_P0_05_11", 16);
iVar6=5;
iVar7=11;
iVar1=2200;
break;
case 40:
StringCopy(&Var2, "JBIB_P0_05_12", 16);
iVar6=5;
iVar7=12;
iVar1=2280;
break;
case 41:
StringCopy(&Var2, "JBIB_P0_05_13", 16);
iVar6=5;
iVar7=13;
iVar1=2300;
break;
case 42:
StringCopy(&Var2, "JBIB_P0_05_14", 16);
iVar6=5;
iVar7=14;
iVar1=2350;
break;
case 43:
StringCopy(&Var2, "JBIB_P0_05_15", 16);
iVar6=5;
iVar7=15;
iVar1=2280;
break;
case 44:
StringCopy(&Var2, "JBIB_P0_06_0", 16);
iVar6=6;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 45, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_153(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=7;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 1, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_154(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=1;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "BERD_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "BERD_P0_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "BERD_P0_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "BERD_P0_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "BERD_P0_4_0", 16);
iVar6=4;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 5, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_155(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=10;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=1;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=2;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=3;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=4;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=5;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=6;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=7;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=1;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=2;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=3;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=4;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=5;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=1;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=2;
break;
case 24:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=3;
break;
case 25:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=4;
break;
case 26:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=5;
break;
case 27:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=6;
break;
case 28:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
break;
case 29:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=1;
break;
case 30:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=2;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=3;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=4;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=5;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=6;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=7;
break;
case 36:
StringCopy(&Var2, "DECL_P0_10_8", 16);
iVar6=10;
iVar7=8;
break;
case 37:
StringCopy(&Var2, "DECL_P0_10_9", 16);
iVar6=10;
iVar7=9;
break;
case 38:
StringCopy(&Var2, "DECL_P0_10_10", 16);
iVar6=10;
iVar7=10;
break;
case 39:
StringCopy(&Var2, "DECL_P0_10_11", 16);
iVar6=10;
iVar7=11;
break;
case 40:
StringCopy(&Var2, "DECL_P0_10_12", 16);
iVar6=10;
iVar7=12;
break;
case 41:
StringCopy(&Var2, "DECL_P0_10_13", 16);
iVar6=10;
iVar7=13;
break;
case 42:
StringCopy(&Var2, "DECL_P0_10_14", 16);
iVar6=10;
iVar7=14;
break;
case 43:
StringCopy(&Var2, "DECL_P0_10_15", 16);
iVar6=10;
iVar7=15;
break;
case 44:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
break;
case 47:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
break;
default:
func_112(iVar10, iParam0, 48, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_156(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=9;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=1;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "SPEC2_P0_08_0", 16);
iVar6=8;
iVar7=0;
iVar1=125;
break;
case 10:
StringCopy(&Var2, "SPEC2_P0_08_1", 16);
iVar6=8;
iVar7=1;
iVar1=150;
break;
case 11:
StringCopy(&Var2, "SPEC2_P0_08_2", 16);
iVar6=8;
iVar7=2;
iVar1=175;
break;
case 12:
StringCopy(&Var2, "SPEC2_P0_08_3", 16);
iVar6=8;
iVar7=3;
iVar1=85;
break;
case 13:
StringCopy(&Var2, "SPEC2_P0_08_4", 16);
iVar6=8;
iVar7=4;
iVar1=150;
break;
case 14:
StringCopy(&Var2, "SPEC2_P0_08_5", 16);
iVar6=8;
iVar7=5;
iVar1=175;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=1;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 20, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_157(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=8;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "SPEC_P0_10", 16);
iVar6=10;
iVar7=0;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "SPEC_P0_16", 16);
iVar6=16;
iVar7=0;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=20;
iVar7=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=21;
iVar7=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=22;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=23;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 24, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_158(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=5;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=2;
bVar0=true;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=3;
bVar0=true;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=4;
bVar0=true;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
default:
func_112(iVar10, iParam0, 14, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_159(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=6;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "FEET_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "FEET_P0_0_1", 16);
iVar6=0;
iVar7=1;
iVar1=665;
break;
case 2:
StringCopy(&Var2, "FEET_P0_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=620;
break;
case 3:
StringCopy(&Var2, "FEET_P0_0_3", 16);
iVar6=0;
iVar7=3;
iVar1=540;
break;
case 4:
StringCopy(&Var2, "FEET_P0_0_4", 16);
iVar6=0;
iVar7=4;
iVar1=580;
break;
case 5:
StringCopy(&Var2, "FEET_P0_0_5", 16);
iVar6=0;
iVar7=5;
iVar1=650;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
break;
case 7:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
break;
case 8:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 9:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 10:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 11:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 12:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=7;
iVar7=0;
bVar0=true;
break;
case 13:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 14:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 15:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "FEET_P0_13_0", 16);
iVar6=13;
iVar7=0;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "FEET_P0_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 21:
StringCopy(&Var2, "FEET_P0_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=64;
break;
case 22:
StringCopy(&Var2, "FEET_P0_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=56;
break;
case 23:
StringCopy(&Var2, "FEET_P0_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=69;
break;
case 24:
StringCopy(&Var2, "FEET_P0_15_4", 16);
iVar6=15;
iVar7=4;
iVar1=59;
break;
case 25:
StringCopy(&Var2, "FEET_P0_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=62;
break;
case 26:
StringCopy(&Var2, "FEET_P0_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=74;
break;
case 27:
StringCopy(&Var2, "FEET_P0_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=68;
break;
case 28:
StringCopy(&Var2, "FEET_P0_15_8", 16);
iVar6=15;
iVar7=8;
iVar1=72;
break;
case 29:
StringCopy(&Var2, "FEET_P0_15_9", 16);
iVar6=15;
iVar7=9;
iVar1=70;
break;
case 30:
StringCopy(&Var2, "FEET_P0_16_0", 16);
iVar6=16;
iVar7=0;
iVar1=48;
break;
case 31:
StringCopy(&Var2, "FEET_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=48;
break;
case 32:
StringCopy(&Var2, "FEET_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=55;
break;
case 33:
StringCopy(&Var2, "FEET_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=75;
break;
case 34:
StringCopy(&Var2, "FEET_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=65;
break;
case 35:
StringCopy(&Var2, "FEET_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=68;
break;
case 36:
StringCopy(&Var2, "FEET_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=58;
break;
case 37:
StringCopy(&Var2, "FEET_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=68;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "FEET_P0_18_0", 16);
iVar6=18;
iVar7=0;
iVar1=790;
break;
case 40:
StringCopy(&Var2, "FEET_P0_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=750;
break;
case 41:
StringCopy(&Var2, "FEET_P0_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=860;
break;
case 42:
StringCopy(&Var2, "FEET_P0_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=750;
break;
case 43:
StringCopy(&Var2, "FEET_P0_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=790;
break;
case 44:
StringCopy(&Var2, "FEET_P0_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=840;
break;
case 45:
StringCopy(&Var2, "FEET_P0_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=820;
break;
case 46:
StringCopy(&Var2, "FEET_P0_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=800;
break;
case 47:
StringCopy(&Var2, "FEET_P0_18_8", 16);
iVar6=18;
iVar7=8;
iVar1=850;
break;
case 48:
StringCopy(&Var2, "FEET_P0_18_9", 16);
iVar6=18;
iVar7=9;
iVar1=870;
break;
case 49:
StringCopy(&Var2, "FEET_P0_18_10", 16);
iVar6=18;
iVar7=10;
iVar1=720;
break;
case 50:
StringCopy(&Var2, "FEET_P0_18_11", 16);
iVar6=18;
iVar7=11;
iVar1=740;
break;
case 51:
StringCopy(&Var2, "FEET_P0_18_12", 16);
iVar6=18;
iVar7=12;
iVar1=800;
break;
case 52:
StringCopy(&Var2, "FEET_P0_18_13", 16);
iVar6=18;
iVar7=13;
iVar1=750;
break;
case 53:
StringCopy(&Var2, "FEET_P0_18_14", 16);
iVar6=18;
iVar7=14;
iVar1=770;
break;
case 54:
StringCopy(&Var2, "FEET_P0_18_15", 16);
iVar6=18;
iVar7=15;
iVar1=860;
break;
case 55:
StringCopy(&Var2, "FEET_P0_19_0", 16);
iVar6=19;
iVar7=0;
iVar1=850;
break;
case 56:
StringCopy(&Var2, "FEET_P0_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=800;
break;
case 57:
StringCopy(&Var2, "FEET_P0_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=780;
break;
case 58:
StringCopy(&Var2, "FEET_P0_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=890;
break;
case 59:
StringCopy(&Var2, "FEET_P0_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=820;
break;
case 60:
StringCopy(&Var2, "FEET_P0_19_5", 16);
iVar6=19;
iVar7=5;
iVar1=840;
break;
case 61:
StringCopy(&Var2, "FEET_P0_19_6", 16);
iVar6=19;
iVar7=6;
iVar1=870;
break;
case 62:
StringCopy(&Var2, "FEET_P0_19_7", 16);
iVar6=19;
iVar7=7;
iVar1=930;
break;
case 63:
StringCopy(&Var2, "FEET_P0_19_8", 16);
iVar6=19;
iVar7=8;
iVar1=880;
break;
case 64:
StringCopy(&Var2, "FEET_P0_19_9", 16);
iVar6=19;
iVar7=9;
iVar1=900;
break;
case 65:
StringCopy(&Var2, "FEET_P0_19_10", 16);
iVar6=19;
iVar7=10;
iVar1=920;
break;
case 66:
StringCopy(&Var2, "FEET_P0_19_11", 16);
iVar6=19;
iVar7=11;
iVar1=970;
break;
case 67:
StringCopy(&Var2, "FEET_P0_19_12", 16);
iVar6=19;
iVar7=12;
iVar1=990;
break;
case 68:
StringCopy(&Var2, "FEET_P0_19_13", 16);
iVar6=19;
iVar7=13;
iVar1=960;
break;
case 69:
StringCopy(&Var2, "FEET_P0_19_14", 16);
iVar6=19;
iVar7=14;
iVar1=980;
break;
case 70:
StringCopy(&Var2, "FEET_P0_19_15", 16);
iVar6=19;
iVar7=15;
iVar1=950;
break;
case 71:
StringCopy(&Var2, "FEET_P0_20_0", 16);
iVar6=20;
iVar7=0;
iVar1=110;
break;
case 72:
StringCopy(&Var2, "FEET_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 73:
StringCopy(&Var2, "FEET_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "FEET_P0_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 75:
StringCopy(&Var2, "FEET_P0_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=125;
break;
case 76:
StringCopy(&Var2, "FEET_P0_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=128;
break;
case 77:
StringCopy(&Var2, "FEET_P0_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=135;
break;
case 78:
StringCopy(&Var2, "FEET_P0_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=130;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "FEET_P0_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=145;
break;
case 80:
StringCopy(&Var2, "FEET_P0_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=110;
break;
case 81:
StringCopy(&Var2, "FEET_P0_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=120;
break;
case 82:
StringCopy(&Var2, "FEET_P0_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=150;
break;
case 83:
StringCopy(&Var2, "FEET_P0_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=125;
break;
case 84:
StringCopy(&Var2, "FEET_P0_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=120;
break;
case 85:
StringCopy(&Var2, "FEET_P0_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=130;
break;
case 86:
StringCopy(&Var2, "FEET_P0_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=110;
break;
case 87:
StringCopy(&Var2, "FEET_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=720;
break;
case 88:
StringCopy(&Var2, "FEET_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=680;
break;
case 89:
StringCopy(&Var2, "FEET_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=650;
break;
case 90:
StringCopy(&Var2, "FEET_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=670;
break;
case 91:
StringCopy(&Var2, "FEET_P0_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=700;
break;
case 92:
StringCopy(&Var2, "FEET_P0_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=680;
break;
case 93:
StringCopy(&Var2, "FEET_P0_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=720;
break;
case 94:
StringCopy(&Var2, "FEET_P0_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=740;
break;
case 95:
StringCopy(&Var2, "FEET_P0_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=760;
break;
case 96:
StringCopy(&Var2, "FEET_P0_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=780;
break;
case 97:
StringCopy(&Var2, "FEET_P0_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=750;
break;
case 98:
StringCopy(&Var2, "FEET_P0_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=700;
break;
default:
func_112(iVar10, iParam0, 99, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_160(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=4;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "LEGS_P0_0_0", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "LEGS_P0_0_2", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "LEGS_P0_0_3", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "LEGS_P0_0_4", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "LEGS_P0_0_5", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "LEGS_P0_0_6", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "LEGS_P0_0_7", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "LEGS_P0_0_8", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "LEGS_P0_0_9", 16);
iVar6=0;
iVar7=9;
break;
case 10:
StringCopy(&Var2, "LEGS_P0_0_10", 16);
iVar6=0;
iVar7=10;
break;
case 11:
StringCopy(&Var2, "LEGS_P0_0_11", 16);
iVar6=0;
iVar7=11;
break;
case 12:
StringCopy(&Var2, "LEGS_P0_0_12", 16);
iVar6=0;
iVar7=12;
break;
case 13:
StringCopy(&Var2, "LEGS_P0_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "LEGS_P0_0_14", 16);
iVar6=0;
iVar7=14;
break;
case 15:
StringCopy(&Var2, "LEGS_P0_0_15", 16);
iVar6=0;
iVar7=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
bVar0=true;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 21:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 22:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 23:
StringCopy(&Var2, "LEGS_P0_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=115;
break;
case 24:
StringCopy(&Var2, "LEGS_P0_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=115;
break;
case 25:
StringCopy(&Var2, "LEGS_P0_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=128;
break;
case 26:
StringCopy(&Var2, "LEGS_P0_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=118;
break;
case 27:
StringCopy(&Var2, "LEGS_P0_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=125;
break;
case 28:
StringCopy(&Var2, "LEGS_P0_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=128;
break;
case 29:
StringCopy(&Var2, "LEGS_P0_7_6", 16);
iVar6=7;
iVar7=6;
iVar1=128;
break;
case 30:
StringCopy(&Var2, "LEGS_P0_7_7", 16);
iVar6=7;
iVar7=7;
iVar1=125;
break;
case 31:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=8;
iVar7=0;
bVar0=true;
break;
case 32:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=1;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=2;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=3;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=4;
bVar0=true;
break;
case 39:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=5;
bVar0=true;
break;
case 40:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 41:
StringCopy(&Var2, "LEGS_P0_13_0", 16);
iVar6=13;
iVar7=0;
iVar1=68;
break;
case 42:
StringCopy(&Var2, "LEGS_P0_13_1", 16);
iVar6=13;
iVar7=1;
iVar1=68;
break;
case 43:
StringCopy(&Var2, "LEGS_P0_13_2", 16);
iVar6=13;
iVar7=2;
iVar1=68;
break;
case 44:
StringCopy(&Var2, "LEGS_P0_13_3", 16);
iVar6=13;
iVar7=3;
iVar1=68;
break;
case 45:
StringCopy(&Var2, "LEGS_P0_13_4", 16);
iVar6=13;
iVar7=4;
iVar1=68;
break;
case 46:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=14;
iVar7=0;
bVar0=true;
break;
case 47:
StringCopy(&Var2, "LEGS_P0_15_0", 16);
iVar6=15;
iVar7=0;
break;
case 48:
StringCopy(&Var2, "LEGS_P0_15_1", 16);
iVar6=15;
iVar7=1;
iVar1=550;
break;
case 49:
StringCopy(&Var2, "LEGS_P0_15_2", 16);
iVar6=15;
iVar7=2;
iVar1=650;
break;
case 50:
StringCopy(&Var2, "LEGS_P0_15_3", 16);
iVar6=15;
iVar7=3;
iVar1=875;
break;
case 51:
StringCopy(&Var2, "LEGS_P0_15_4", 16);
iVar6=15;
iVar7=4;
iVar1=820;
break;
case 52:
StringCopy(&Var2, "LEGS_P0_15_5", 16);
iVar6=15;
iVar7=5;
iVar1=720;
break;
case 53:
StringCopy(&Var2, "LEGS_P0_15_6", 16);
iVar6=15;
iVar7=6;
iVar1=750;
break;
case 54:
StringCopy(&Var2, "LEGS_P0_15_7", 16);
iVar6=15;
iVar7=7;
iVar1=850;
break;
case 55:
StringCopy(&Var2, "LEGS_P0_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 56:
StringCopy(&Var2, "LEGS_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=48;
break;
case 57:
StringCopy(&Var2, "LEGS_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=48;
break;
case 58:
StringCopy(&Var2, "LEGS_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=38;
break;
case 59:
StringCopy(&Var2, "LEGS_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=38;
break;
case 60:
StringCopy(&Var2, "LEGS_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=42;
break;
case 61:
StringCopy(&Var2, "LEGS_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=58;
break;
case 62:
StringCopy(&Var2, "LEGS_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=46;
break;
case 63:
StringCopy(&Var2, "LEGS_P0_16_8", 16);
iVar6=16;
iVar7=8;
iVar1=46;
break;
case 64:
StringCopy(&Var2, "LEGS_P0_16_9", 16);
iVar6=16;
iVar7=9;
iVar1=46;
break;
case 65:
StringCopy(&Var2, "LEGS_P0_16_10", 16);
iVar6=16;
iVar7=10;
iVar1=68;
break;
case 66:
StringCopy(&Var2, "LEGS_P0_16_11", 16);
iVar6=16;
iVar7=11;
iVar1=58;
break;
case 67:
StringCopy(&Var2, "LEGS_P0_16_12", 16);
iVar6=16;
iVar7=12;
iVar1=50;
break;
case 68:
StringCopy(&Var2, "LEGS_P0_16_13", 16);
iVar6=16;
iVar7=13;
iVar1=68;
break;
case 69:
StringCopy(&Var2, "LEGS_P0_16_14", 16);
iVar6=16;
iVar7=14;
iVar1=68;
break;
case 70:
StringCopy(&Var2, "LEGS_P0_16_15", 16);
iVar6=16;
iVar7=15;
iVar1=42;
break;
case 71:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=17;
iVar7=0;
bVar0=true;
break;
case 72:
StringCopy(&Var2, "LEGS_P0_18_0", 16);
iVar6=18;
iVar7=0;
break;
case 73:
StringCopy(&Var2, "LEGS_P0_18_1", 16);
iVar6=18;
iVar7=1;
iVar1=250;
break;
case 74:
StringCopy(&Var2, "LEGS_P0_18_2", 16);
iVar6=18;
iVar7=2;
iVar1=250;
break;
case 75:
StringCopy(&Var2, "LEGS_P0_18_3", 16);
iVar6=18;
iVar7=3;
iVar1=290;
break;
case 76:
StringCopy(&Var2, "LEGS_P0_18_4", 16);
iVar6=18;
iVar7=4;
iVar1=270;
break;
case 77:
StringCopy(&Var2, "LEGS_P0_18_5", 16);
iVar6=18;
iVar7=5;
iVar1=270;
break;
case 78:
StringCopy(&Var2, "LEGS_P0_18_6", 16);
iVar6=18;
iVar7=6;
iVar1=15;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "LEGS_P0_18_7", 16);
iVar6=18;
iVar7=7;
iVar1=12;
break;
case 80:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=19;
iVar7=0;
bVar0=true;
break;
case 81:
StringCopy(&Var2, "LEGS_P0_20_0", 16);
iVar6=20;
iVar7=0;
break;
case 82:
StringCopy(&Var2, "LEGS_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=118;
break;
case 83:
StringCopy(&Var2, "LEGS_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=110;
break;
case 84:
StringCopy(&Var2, "LEGS_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=88;
break;
case 85:
StringCopy(&Var2, "LEGS_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=95;
break;
case 86:
StringCopy(&Var2, "LEGS_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=95;
break;
case 87:
StringCopy(&Var2, "LEGS_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=98;
break;
case 88:
StringCopy(&Var2, "LEGS_P0_22_0", 16);
iVar6=22;
iVar7=0;
iVar1=140;
break;
case 89:
StringCopy(&Var2, "LEGS_P0_23_0", 16);
iVar6=23;
iVar7=0;
break;
case 90:
StringCopy(&Var2, "LEGS_P0_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=150;
break;
case 91:
StringCopy(&Var2, "LEGS_P0_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=130;
break;
case 92:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=24;
iVar7=0;
bVar0=true;
break;
case 93:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=25;
iVar7=0;
bVar0=true;
break;
case 94:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=26;
iVar7=0;
bVar0=true;
break;
case 95:
StringCopy(&Var2, "LEGS_P0_27_0", 16);
iVar6=27;
iVar7=0;
break;
case 96:
StringCopy(&Var2, "LEGS_P0_28_0", 16);
iVar6=28;
iVar7=0;
iVar1=45;
break;
case 97:
StringCopy(&Var2, "LEGS_P0_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=48;
break;
case 98:
StringCopy(&Var2, "LEGS_P0_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=48;
break;
case 99:
StringCopy(&Var2, "LEGS_P0_28_3", 16);
iVar6=28;
iVar7=3;
iVar1=52;
break;
case 100:
StringCopy(&Var2, "LEGS_P0_28_4", 16);
iVar6=28;
iVar7=4;
iVar1=52;
break;
case 101:
StringCopy(&Var2, "LEGS_P0_28_5", 16);
iVar6=28;
iVar7=5;
iVar1=55;
break;
case 102:
StringCopy(&Var2, "LEGS_P0_28_6", 16);
iVar6=28;
iVar7=6;
iVar1=55;
break;
case 103:
StringCopy(&Var2, "LEGS_P0_28_7", 16);
iVar6=28;
iVar7=7;
iVar1=55;
break;
case 104:
StringCopy(&Var2, "LEGS_P0_28_8", 16);
iVar6=28;
iVar7=8;
iVar1=58;
break;
case 105:
StringCopy(&Var2, "LEGS_P0_28_9", 16);
iVar6=28;
iVar7=9;
iVar1=58;
break;
case 106:
StringCopy(&Var2, "LEGS_P0_28_10", 16);
iVar6=28;
iVar7=10;
iVar1=60;
break;
case 107:
StringCopy(&Var2, "LEGS_P0_28_11", 16);
iVar6=28;
iVar7=11;
iVar1=60;
break;
case 108:
StringCopy(&Var2, "LEGS_P0_28_12", 16);
iVar6=28;
iVar7=12;
iVar1=62;
break;
case 109:
StringCopy(&Var2, "LEGS_P0_28_13", 16);
iVar6=28;
iVar7=13;
iVar1=62;
break;
case 110:
StringCopy(&Var2, "LEGS_P0_28_14", 16);
iVar6=28;
iVar7=14;
iVar1=65;
break;
case 111:
StringCopy(&Var2, "LEGS_P0_28_15", 16);
iVar6=28;
iVar7=15;
iVar1=65;
break;
case 112:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=29;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 113, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_161(int iParam0){
if(iParam0 < 60){
func_163(iParam0);
}else{
func_162(iParam0);
}
if(Global_78130[0 /*14*/].f_2==-1){
func_112(3, iParam0, 181, -1);
}}


void func_162(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 60:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=9;
iVar7=0;
bVar0=true;
break;
case 61:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=10;
iVar7=0;
bVar0=true;
break;
case 62:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=11;
iVar7=0;
bVar0=true;
break;
case 63:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=0;
bVar0=true;
break;
case 64:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=1;
bVar0=true;
break;
case 65:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=2;
bVar0=true;
break;
case 66:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=3;
bVar0=true;
break;
case 67:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=4;
bVar0=true;
break;
case 68:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=12;
iVar7=5;
bVar0=true;
break;
case 69:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=13;
iVar7=0;
bVar0=true;
break;
case 70:
StringCopy(&Var2, "TORSO_P0_14_0", 16);
iVar6=14;
iVar7=0;
iVar1=120;
break;
case 71:
StringCopy(&Var2, "TORSO_P0_14_1", 16);
iVar6=14;
iVar7=1;
iVar1=120;
break;
case 72:
StringCopy(&Var2, "TORSO_P0_14_2", 16);
iVar6=14;
iVar7=2;
iVar1=120;
break;
case 73:
StringCopy(&Var2, "TORSO_P0_14_3", 16);
iVar6=14;
iVar7=3;
iVar1=120;
break;
case 74:
StringCopy(&Var2, "TORSO_P0_14_4", 16);
iVar6=14;
iVar7=4;
iVar1=120;
break;
case 75:
StringCopy(&Var2, "TORSO_P0_14_5", 16);
iVar6=14;
iVar7=5;
iVar1=120;
break;
case 76:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=15;
iVar7=0;
bVar0=true;
break;
case 77:
StringCopy(&Var2, "TORSO_P0_16_0", 16);
iVar6=16;
iVar7=0;
break;
case 78:
StringCopy(&Var2, "TORSO_P0_16_1", 16);
iVar6=16;
iVar7=1;
iVar1=20;
break;
case joaat("mpsv_lp0_31"):
StringCopy(&Var2, "TORSO_P0_16_2", 16);
iVar6=16;
iVar7=2;
iVar1=24;
break;
case 80:
StringCopy(&Var2, "TORSO_P0_16_3", 16);
iVar6=16;
iVar7=3;
iVar1=22;
break;
case 81:
StringCopy(&Var2, "TORSO_P0_16_4", 16);
iVar6=16;
iVar7=4;
iVar1=25;
break;
case 82:
StringCopy(&Var2, "TORSO_P0_16_5", 16);
iVar6=16;
iVar7=5;
iVar1=25;
break;
case 83:
StringCopy(&Var2, "TORSO_P0_16_6", 16);
iVar6=16;
iVar7=6;
iVar1=22;
break;
case 84:
StringCopy(&Var2, "TORSO_P0_16_7", 16);
iVar6=16;
iVar7=7;
iVar1=27;
break;
case 85:
StringCopy(&Var2, "TORSO_P0_17_0", 16);
iVar6=17;
iVar7=0;
break;
case 86:
StringCopy(&Var2, "TORSO_P0_17_1", 16);
iVar6=17;
iVar7=1;
break;
case 87:
StringCopy(&Var2, "TORSO_P0_17_2", 16);
iVar6=17;
iVar7=2;
break;
case 88:
StringCopy(&Var2, "TORSO_P0_17_3", 16);
iVar6=17;
iVar7=3;
iVar1=48;
break;
case 89:
StringCopy(&Var2, "TORSO_P0_17_4", 16);
iVar6=17;
iVar7=4;
iVar1=40;
break;
case 90:
StringCopy(&Var2, "TORSO_P0_17_5", 16);
iVar6=17;
iVar7=5;
iVar1=45;
break;
case 91:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=18;
iVar7=0;
bVar0=true;
break;
case 92:
StringCopy(&Var2, "TORSO_P0_19_0", 16);
iVar6=19;
iVar7=0;
break;
case 93:
StringCopy(&Var2, "TORSO_P0_19_1", 16);
iVar6=19;
iVar7=1;
iVar1=190;
break;
case 94:
StringCopy(&Var2, "TORSO_P0_19_2", 16);
iVar6=19;
iVar7=2;
iVar1=190;
break;
case 95:
StringCopy(&Var2, "TORSO_P0_19_3", 16);
iVar6=19;
iVar7=3;
iVar1=190;
break;
case 96:
StringCopy(&Var2, "TORSO_P0_19_4", 16);
iVar6=19;
iVar7=4;
iVar1=210;
break;
case 97:
StringCopy(&Var2, "TORSO_P0_20_0", 16);
iVar6=20;
iVar7=0;
break;
case 98:
StringCopy(&Var2, "TORSO_P0_20_1", 16);
iVar6=20;
iVar7=1;
iVar1=115;
break;
case 99:
StringCopy(&Var2, "TORSO_P0_20_2", 16);
iVar6=20;
iVar7=2;
iVar1=55;
break;
case 100:
StringCopy(&Var2, "TORSO_P0_20_3", 16);
iVar6=20;
iVar7=3;
iVar1=110;
break;
case 101:
StringCopy(&Var2, "TORSO_P0_20_4", 16);
iVar6=20;
iVar7=4;
iVar1=99;
break;
case 102:
StringCopy(&Var2, "TORSO_P0_20_5", 16);
iVar6=20;
iVar7=5;
iVar1=49;
break;
case 103:
StringCopy(&Var2, "TORSO_P0_20_6", 16);
iVar6=20;
iVar7=6;
iVar1=120;
break;
case 104:
StringCopy(&Var2, "TORSO_P0_20_7", 16);
iVar6=20;
iVar7=7;
iVar1=45;
break;
case 105:
StringCopy(&Var2, "TORSO_P0_20_8", 16);
iVar6=20;
iVar7=8;
iVar1=115;
break;
case 106:
StringCopy(&Var2, "TORSO_P0_20_9", 16);
iVar6=20;
iVar7=9;
iVar1=105;
break;
case 107:
StringCopy(&Var2, "TORSO_P0_20_10", 16);
iVar6=20;
iVar7=10;
iVar1=90;
break;
case 108:
StringCopy(&Var2, "TORSO_P0_20_11", 16);
iVar6=20;
iVar7=11;
iVar1=95;
break;
case 109:
StringCopy(&Var2, "TORSO_P0_20_12", 16);
iVar6=20;
iVar7=12;
iVar1=39;
break;
case 110:
StringCopy(&Var2, "TORSO_P0_20_13", 16);
iVar6=20;
iVar7=13;
iVar1=95;
break;
case 111:
StringCopy(&Var2, "TORSO_P0_20_14", 16);
iVar6=20;
iVar7=14;
iVar1=35;
break;
case 112:
StringCopy(&Var2, "TORSO_P0_20_15", 16);
iVar6=20;
iVar7=15;
iVar1=95;
break;
case 113:
StringCopy(&Var2, "TORSO_P0_21_0", 16);
iVar6=21;
iVar7=0;
iVar1=88;
break;
case 114:
StringCopy(&Var2, "TORSO_P0_21_1", 16);
iVar6=21;
iVar7=1;
iVar1=60;
break;
case 115:
StringCopy(&Var2, "TORSO_P0_21_2", 16);
iVar6=21;
iVar7=2;
iVar1=70;
break;
case 116:
StringCopy(&Var2, "TORSO_P0_21_3", 16);
iVar6=21;
iVar7=3;
iVar1=80;
break;
case 117:
StringCopy(&Var2, "TORSO_P0_21_4", 16);
iVar6=21;
iVar7=4;
iVar1=90;
break;
case 118:
StringCopy(&Var2, "TORSO_P0_21_5", 16);
iVar6=21;
iVar7=5;
iVar1=80;
break;
case 119:
StringCopy(&Var2, "TORSO_P0_21_6", 16);
iVar6=21;
iVar7=6;
iVar1=70;
break;
case 120:
StringCopy(&Var2, "TORSO_P0_21_7", 16);
iVar6=21;
iVar7=7;
iVar1=95;
break;
case 121:
StringCopy(&Var2, "TORSO_P0_21_8", 16);
iVar6=21;
iVar7=8;
iVar1=105;
break;
case 122:
StringCopy(&Var2, "TORSO_P0_21_9", 16);
iVar6=21;
iVar7=9;
iVar1=95;
break;
case 123:
StringCopy(&Var2, "TORSO_P0_21_10", 16);
iVar6=21;
iVar7=10;
iVar1=110;
break;
case 124:
StringCopy(&Var2, "TORSO_P0_21_11", 16);
iVar6=21;
iVar7=11;
iVar1=98;
break;
case 125:
StringCopy(&Var2, "TORSO_P0_21_12", 16);
iVar6=21;
iVar7=12;
iVar1=88;
break;
case 126:
StringCopy(&Var2, "TORSO_P0_21_13", 16);
iVar6=21;
iVar7=13;
iVar1=98;
break;
case 127:
StringCopy(&Var2, "TORSO_P0_21_14", 16);
iVar6=21;
iVar7=14;
iVar1=110;
break;
case 128:
StringCopy(&Var2, "TORSO_P0_21_15", 16);
iVar6=21;
iVar7=15;
iVar1=98;
break;
case 129:
StringCopy(&Var2, "TORSO_P0_22_0", 16);
iVar6=22;
iVar7=0;
break;
case 130:
StringCopy(&Var2, "TORSO_P0_22_1", 16);
iVar6=22;
iVar7=1;
iVar1=4950;
break;
case 131:
StringCopy(&Var2, "TORSO_P0_22_2", 16);
iVar6=22;
iVar7=2;
iVar1=4195;
break;
case 132:
StringCopy(&Var2, "TORSO_P0_22_3", 16);
iVar6=22;
iVar7=3;
iVar1=3195;
break;
case 133:
StringCopy(&Var2, "TORSO_P0_22_4", 16);
iVar6=22;
iVar7=4;
iVar1=2950;
break;
case 134:
StringCopy(&Var2, "TORSO_P0_22_5", 16);
iVar6=22;
iVar7=5;
iVar1=3950;
break;
case 135:
StringCopy(&Var2, "TORSO_P0_23_0", 16);
iVar6=23;
iVar7=0;
iVar1=3200;
break;
case 136:
StringCopy(&Var2, "TORSO_P0_23_1", 16);
iVar6=23;
iVar7=1;
iVar1=3200;
break;
case 137:
StringCopy(&Var2, "TORSO_P0_23_2", 16);
iVar6=23;
iVar7=2;
iVar1=3200;
break;
case 138:
StringCopy(&Var2, "TORSO_P0_23_3", 16);
iVar6=23;
iVar7=3;
iVar1=3200;
break;
case 139:
StringCopy(&Var2, "TORSO_P0_23_4", 16);
iVar6=23;
iVar7=4;
iVar1=3200;
break;
case 140:
StringCopy(&Var2, "TORSO_P0_23_5", 16);
iVar6=23;
iVar7=5;
iVar1=3200;
break;
case 141:
StringCopy(&Var2, "TORSO_P0_23_6", 16);
iVar6=23;
iVar7=6;
iVar1=3200;
break;
case 142:
StringCopy(&Var2, "TORSO_P0_23_7", 16);
iVar6=23;
iVar7=7;
iVar1=3200;
break;
case 143:
StringCopy(&Var2, "TORSO_P0_23_8", 16);
iVar6=23;
iVar7=8;
iVar1=3200;
break;
case 144:
StringCopy(&Var2, "TORSO_P0_23_9", 16);
iVar6=23;
iVar7=9;
iVar1=3200;
break;
case 145:
StringCopy(&Var2, "TORSO_P0_23_10", 16);
iVar6=23;
iVar7=10;
iVar1=3200;
break;
case 146:
StringCopy(&Var2, "TORSO_P0_23_11", 16);
iVar6=23;
iVar7=11;
iVar1=3200;
break;
case 147:
StringCopy(&Var2, "TORSO_P0_23_12", 16);
iVar6=23;
iVar7=12;
iVar1=3200;
break;
case 148:
StringCopy(&Var2, "TORSO_P0_23_13", 16);
iVar6=23;
iVar7=13;
iVar1=3200;
break;
case 149:
StringCopy(&Var2, "TORSO_P0_23_14", 16);
iVar6=23;
iVar7=14;
iVar1=3200;
break;
case 150:
StringCopy(&Var2, "TORSO_P0_23_15", 16);
iVar6=23;
iVar7=15;
iVar1=3200;
break;
case 151:
StringCopy(&Var2, "TORSO_P0_24_0", 16);
iVar6=24;
iVar7=0;
iVar1=1350;
break;
case 152:
StringCopy(&Var2, "TORSO_P0_24_1", 16);
iVar6=24;
iVar7=1;
iVar1=1400;
break;
case 153:
StringCopy(&Var2, "TORSO_P0_24_2", 16);
iVar6=24;
iVar7=2;
iVar1=1200;
break;
case 154:
StringCopy(&Var2, "TORSO_P0_24_3", 16);
iVar6=24;
iVar7=3;
iVar1=1250;
break;
case 155:
StringCopy(&Var2, "TORSO_P0_24_4", 16);
iVar6=24;
iVar7=4;
iVar1=1350;
break;
case 156:
StringCopy(&Var2, "TORSO_P0_24_5", 16);
iVar6=24;
iVar7=5;
iVar1=1300;
break;
case 157:
StringCopy(&Var2, "TORSO_P0_24_6", 16);
iVar6=24;
iVar7=6;
iVar1=1380;
break;
case 158:
StringCopy(&Var2, "TORSO_P0_24_7", 16);
iVar6=24;
iVar7=7;
iVar1=1340;
break;
case 159:
StringCopy(&Var2, "TORSO_P0_24_8", 16);
iVar6=24;
iVar7=8;
iVar1=1380;
break;
case 160:
StringCopy(&Var2, "TORSO_P0_24_9", 16);
iVar6=24;
iVar7=9;
iVar1=1250;
break;
case 161:
StringCopy(&Var2, "TORSO_P0_25_0", 16);
iVar6=25;
iVar7=0;
iVar1=840;
break;
case 162:
StringCopy(&Var2, "TORSO_P0_25_1", 16);
iVar6=25;
iVar7=1;
iVar1=840;
break;
case 163:
StringCopy(&Var2, "TORSO_P0_25_2", 16);
iVar6=25;
iVar7=2;
iVar1=840;
break;
case 164:
StringCopy(&Var2, "TORSO_P0_25_3", 16);
iVar6=25;
iVar7=3;
iVar1=840;
break;
case 165:
StringCopy(&Var2, "TORSO_P0_25_4", 16);
iVar6=25;
iVar7=4;
iVar1=840;
break;
case 166:
StringCopy(&Var2, "TORSO_P0_25_5", 16);
iVar6=25;
iVar7=5;
iVar1=840;
break;
case 167:
StringCopy(&Var2, "TORSO_P0_25_6", 16);
iVar6=25;
iVar7=6;
iVar1=840;
break;
case 168:
StringCopy(&Var2, "TORSO_P0_25_7", 16);
iVar6=25;
iVar7=7;
iVar1=840;
break;
case 169:
StringCopy(&Var2, "TORSO_P0_26_0", 16);
iVar6=26;
iVar7=0;
break;
case 170:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=27;
iVar7=0;
bVar0=true;
break;
case 171:
StringCopy(&Var2, "TORSO_P0_28_0", 16);
iVar6=28;
iVar7=0;
break;
case 172:
StringCopy(&Var2, "TORSO_P0_28_1", 16);
iVar6=28;
iVar7=1;
iVar1=130;
break;
case 173:
StringCopy(&Var2, "TORSO_P0_28_2", 16);
iVar6=28;
iVar7=2;
iVar1=110;
break;
case 174:
StringCopy(&Var2, "TORSO_P0_29_0", 16);
iVar6=29;
iVar7=0;
bVar0=true;
break;
case 175:
StringCopy(&Var2, "TORSO_P0_30_0", 16);
iVar6=30;
iVar7=0;
iVar1=290;
break;
case 176:
StringCopy(&Var2, "TORSO_P0_30_1", 16);
iVar6=30;
iVar7=1;
iVar1=320;
break;
case 177:
StringCopy(&Var2, "TORSO_P0_31_0", 16);
iVar6=31;
iVar7=0;
iVar1=59;
break;
case 178:
StringCopy(&Var2, "TORSO_P0_31_1", 16);
iVar6=31;
iVar7=1;
iVar1=55;
break;
case 179:
StringCopy(&Var2, "TORSO_P0_31_2", 16);
iVar6=31;
iVar7=2;
iVar1=59;
break;
case 180:
StringCopy(&Var2, "TORSO_P0_31_3", 16);
iVar6=31;
iVar7=3;
iVar1=49;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_163(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=3;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "TORSO_P0_0_0", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "TORSO_P0_0_2", 16);
iVar6=0;
iVar7=2;
iVar1=3500;
break;
case 3:
StringCopy(&Var2, "TORSO_P0_0_3", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "TORSO_P0_0_4", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "TORSO_P0_0_5", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "TORSO_P0_0_6", 16);
iVar6=0;
iVar7=6;
break;
case 7:
StringCopy(&Var2, "TORSO_P0_0_7", 16);
iVar6=0;
iVar7=7;
break;
case 8:
StringCopy(&Var2, "TORSO_P0_0_8", 16);
iVar6=0;
iVar7=8;
break;
case 9:
StringCopy(&Var2, "TORSO_P0_0_9", 16);
iVar6=0;
iVar7=9;
break;
case 10:
StringCopy(&Var2, "TORSO_P0_0_10", 16);
iVar6=0;
iVar7=10;
break;
case 11:
StringCopy(&Var2, "TORSO_P0_0_11", 16);
iVar6=0;
iVar7=11;
break;
case 12:
StringCopy(&Var2, "TORSO_P0_0_12", 16);
iVar6=0;
iVar7=12;
break;
case 13:
StringCopy(&Var2, "TORSO_P0_0_13", 16);
iVar6=0;
iVar7=13;
break;
case 14:
StringCopy(&Var2, "TORSO_P0_0_14", 16);
iVar6=0;
iVar7=14;
break;
case 15:
StringCopy(&Var2, "TORSO_P0_0_15", 16);
iVar6=0;
iVar7=15;
break;
case 16:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=1;
iVar7=0;
bVar0=true;
break;
case 17:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=0;
iVar1=20;
break;
case 18:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=1;
iVar1=18;
break;
case 19:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=2;
iVar1=22;
break;
case 20:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=2;
iVar7=3;
iVar1=25;
break;
case 21:
StringCopy(&Var2, "TORSO_P0_2_4", 16);
iVar6=2;
iVar7=4;
iVar1=19;
break;
case 22:
StringCopy(&Var2, "TORSO_P0_2_5", 16);
iVar6=2;
iVar7=5;
iVar1=20;
break;
case 23:
StringCopy(&Var2, "TORSO_P0_2_6", 16);
iVar6=2;
iVar7=6;
iVar1=22;
break;
case 24:
StringCopy(&Var2, "TORSO_P0_2_7", 16);
iVar6=2;
iVar7=7;
iVar1=18;
break;
case 25:
StringCopy(&Var2, "TORSO_P0_2_8", 16);
iVar6=2;
iVar7=8;
iVar1=39;
break;
case 26:
StringCopy(&Var2, "TORSO_P0_2_9", 16);
iVar6=2;
iVar7=9;
iVar1=32;
break;
case 27:
StringCopy(&Var2, "TORSO_P0_2_10", 16);
iVar6=2;
iVar7=10;
iVar1=35;
break;
case 28:
StringCopy(&Var2, "TORSO_P0_2_11", 16);
iVar6=2;
iVar7=11;
iVar1=35;
break;
case 29:
StringCopy(&Var2, "TORSO_P0_2_12", 16);
iVar6=2;
iVar7=12;
iVar1=210;
break;
case 30:
StringCopy(&Var2, "TORSO_P0_2_13", 16);
iVar6=2;
iVar7=13;
iVar1=250;
break;
case 31:
StringCopy(&Var2, "TORSO_P0_2_14", 16);
iVar6=2;
iVar7=14;
iVar1=290;
break;
case 32:
StringCopy(&Var2, "TORSO_P0_2_15", 16);
iVar6=2;
iVar7=15;
iVar1=310;
break;
case 33:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=0;
bVar0=true;
break;
case 34:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=3;
iVar7=1;
bVar0=true;
break;
case 35:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=4;
iVar7=0;
bVar0=true;
break;
case 36:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
bVar0=true;
break;
case 37:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=6;
iVar7=0;
bVar0=true;
break;
case 38:
StringCopy(&Var2, "TORSO_P0_7_0", 16);
iVar6=7;
iVar7=0;
iVar1=150;
break;
case 39:
StringCopy(&Var2, "TORSO_P0_7_1", 16);
iVar6=7;
iVar7=1;
iVar1=160;
break;
case 40:
StringCopy(&Var2, "TORSO_P0_7_2", 16);
iVar6=7;
iVar7=2;
iVar1=150;
break;
case 41:
StringCopy(&Var2, "TORSO_P0_7_3", 16);
iVar6=7;
iVar7=3;
iVar1=150;
break;
case 42:
StringCopy(&Var2, "TORSO_P0_7_4", 16);
iVar6=7;
iVar7=4;
iVar1=160;
break;
case 43:
StringCopy(&Var2, "TORSO_P0_7_5", 16);
iVar6=7;
iVar7=5;
iVar1=160;
break;
case 44:
StringCopy(&Var2, "TORSO_P0_8_0", 16);
iVar6=8;
iVar7=0;
break;
case 45:
StringCopy(&Var2, "TORSO_P0_8_1", 16);
iVar6=8;
iVar7=1;
iVar1=52;
break;
case 46:
StringCopy(&Var2, "TORSO_P0_8_2", 16);
iVar6=8;
iVar7=2;
iVar1=52;
break;
case 47:
StringCopy(&Var2, "TORSO_P0_8_3", 16);
iVar6=8;
iVar7=3;
iVar1=55;
break;
case 48:
StringCopy(&Var2, "TORSO_P0_8_4", 16);
iVar6=8;
iVar7=4;
iVar1=55;
break;
case 49:
StringCopy(&Var2, "TORSO_P0_8_5", 16);
iVar6=8;
iVar7=5;
iVar1=58;
break;
case 50:
StringCopy(&Var2, "TORSO_P0_8_6", 16);
iVar6=8;
iVar7=6;
iVar1=58;
break;
case 51:
StringCopy(&Var2, "TORSO_P0_8_7", 16);
iVar6=8;
iVar7=7;
iVar1=62;
break;
case 52:
StringCopy(&Var2, "TORSO_P0_8_8", 16);
iVar6=8;
iVar7=8;
iVar1=65;
break;
case 53:
StringCopy(&Var2, "TORSO_P0_8_9", 16);
iVar6=8;
iVar7=9;
iVar1=65;
break;
case 54:
StringCopy(&Var2, "TORSO_P0_8_10", 16);
iVar6=8;
iVar7=10;
iVar1=68;
break;
case 55:
StringCopy(&Var2, "TORSO_P0_8_11", 16);
iVar6=8;
iVar7=11;
iVar1=68;
break;
case 56:
StringCopy(&Var2, "TORSO_P0_8_12", 16);
iVar6=8;
iVar7=12;
iVar1=55;
break;
case 57:
StringCopy(&Var2, "TORSO_P0_8_13", 16);
iVar6=8;
iVar7=13;
iVar1=62;
break;
case 58:
StringCopy(&Var2, "TORSO_P0_8_14", 16);
iVar6=8;
iVar7=14;
iVar1=58;
break;
case 59:
StringCopy(&Var2, "TORSO_P0_8_15", 16);
iVar6=8;
iVar7=15;
iVar1=58;
break;
default:
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_164(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=2;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "HAIR_P0_0_0", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "HAIR_P0_1_0", 16);
iVar6=1;
iVar7=0;
break;
case 2:
StringCopy(&Var2, "HAIR_P0_2_0", 16);
iVar6=2;
iVar7=0;
break;
case 3:
StringCopy(&Var2, "HAIR_P0_3_0", 16);
iVar6=3;
iVar7=0;
break;
case 4:
StringCopy(&Var2, "HAIR_P0_4_0", 16);
iVar6=4;
iVar7=0;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=5;
iVar7=0;
break;
default:
func_112(iVar10, iParam0, 6, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_165(int iParam0){
bool bVar0;
int iVar1;
struct<2> Var2;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
bVar0=false;
iVar1=10;
iVar6=0;
iVar7=0;
iVar8=-1;
iVar9=2;
iVar10=0;
Global_78130[0 /*14*/].f_5=0;
switch (iParam0){
case 0:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=0;
break;
case 1:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=1;
break;
case 2:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=2;
break;
case 3:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=3;
break;
case 4:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=4;
break;
case 5:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=5;
break;
case 6:
StringCopy(&Var2, "NO_LABEL", 16);
iVar6=0;
iVar7=6;
break;
default:
func_112(iVar10, iParam0, 7, -1);
return;
break;
}
func_105(&(Global_78130[0 /*14*/]), iVar10, iParam0, &Var2, iVar6, iVar7, iVar1, bVar0, iVar8, iVar9, 0);
}


void func_166(){
Global_78130[0 /*14*/].f_1=-1;
Global_78130[0 /*14*/].f_2=-1;
Global_78130[0 /*14*/].f_5=-1;
Global_78130[0 /*14*/].f_3=-1;
Global_78130[0 /*14*/].f_4=-1;
Global_78130[0 /*14*/].f_7=0;
Global_78130[0 /*14*/].f_6=0;
Global_78130[0 /*14*/].f_13=-1;
Global_78130[0 /*14*/].f_12=0;
Global_78130[0 /*14*/]=0;
StringCopy(&(Global_78130[0 /*14*/].f_8), "NO_LABEL", 16);
}

int func_167(int iParam0, int iParam1, int iParam2, bool bParam3){
Global_78130[1 /*14*/]={
func_102(iParam0, iParam1, iParam2, -1) 
};
if(MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 0) && !MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 6)){
if(bParam3){
func_101(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 1, 0);
}else{
func_101(iParam1, Global_78130[1 /*14*/].f_5, Global_78130[1 /*14*/].f_2, 0, Global_78130[1 /*14*/].f_1, 0, 1);
}
return 1;
}
return 0;
}


bool func_168(int iParam0, int iParam1, int iParam2){
Global_78130[1 /*14*/]={
func_102(iParam0, iParam1, iParam2, -1) 
};
return MISC::IS_BIT_SET(Global_78130[1 /*14*/].f_6, 2);
}


void func_169(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 19);
MISC::SET_BIT(&iVar0, 20);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 7);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 12);
MISC::SET_BIT(&iVar0, 13);
MISC::SET_BIT(&iVar0, 14);
MISC::SET_BIT(&iVar0, 15);
func_171(33, iVar0, 0);
func_170(2);
}


void func_170(int iParam0){
Global_60325=iParam0;
}


void func_171(int iParam0, int iParam1, bool bParam2){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
iVar0=-1;
iVar1=0;
iVar2=-1;
iVar1=0;
while (iVar1 < 8){
if(Global_113386.f_20564.f_452[iVar1] > 0){
if(Global_113386.f_20564.f_443[iVar1]==iParam0){
iVar0=iVar1;
}}else{
iVar2=iVar1;
}
iVar1++;
}
if(iVar0 !=-1 || iVar2==-1){
return;
}
iVar3=0;
if(MISC::IS_BIT_SET(iParam1, 3)){
iVar3++;
}
if(MISC::IS_BIT_SET(iParam1, 4)){
iVar3 +=2;
}
if(MISC::IS_BIT_SET(iParam1, 5)){
iVar3 +=4;
}
if(MISC::IS_BIT_SET(iParam1, 20)){
iVar3 +=8;
}
if(iVar3==0 && !MISC::IS_BIT_SET(iParam1, 1)){
return;
}
iVar3 *=3;
if(MISC::IS_BIT_SET(iParam1, 2)){
iVar3 *=7;
}
Global_113386.f_20564.f_442++;
Global_113386.f_20564.f_461[iVar2]=iParam1;
Global_113386.f_20564.f_443[iVar2]=iParam0;
Global_113386.f_20564.f_452[iVar2]=iVar3;
if(!bParam2){
if(!func_173(54)){
func_410("AM_H_STOCKS", 1, 0, 40000, 10000, 7, 0, 139, 0);
}}
func_172(iParam0, 0);
}


void func_172(int iParam0, bool bParam1){
float fVar0;
float fVar1;
int iVar2;
if(Global_55453[iParam0 /*36*/].f_8){
return;
}
fVar0=Global_55453[iParam0 /*36*/].f_9;
if(!bParam1){
fVar0=func_79(iParam0);
}
if(fVar0==0f){
return;
}
Global_55453[iParam0 /*36*/].f_14[Global_55453[iParam0 /*36*/].f_13]=fVar0;
if(fVar0 > Global_55453[iParam0 /*36*/].f_31){
Global_55453[iParam0 /*36*/].f_31=fVar0;
}
if(fVar0 < Global_55453[iParam0 /*36*/].f_32){
Global_55453[iParam0 /*36*/].f_32=fVar0;
}
Global_55453[iParam0 /*36*/].f_13++;
if(Global_55453[iParam0 /*36*/].f_13 >=16){
Global_55453[iParam0 /*36*/].f_13=0;
}
fVar1=0f;
iVar2=0;
while (iVar2 < 16){
fVar1=(fVar1 + Global_55453[iParam0 /*36*/].f_14[iVar2]);
iVar2++;
}
fVar1=(fVar1 / SYSTEM::TO_FLOAT(16));
Global_55453[iParam0 /*36*/].f_33=(fVar0 - fVar1);
Global_55453[iParam0 /*36*/].f_34=((Global_55453[iParam0 /*36*/].f_33 / fVar1) * 100f);
}

int func_173(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
return MISC::IS_BIT_SET(Global_113386.f_20410.f_150[iVar1], iVar0);
}
return 0;
}


void func_174(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 9);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 13);
func_171(49, iVar0, 0);
func_170(2);
}


void func_175(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 20);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 12);
MISC::SET_BIT(&iVar0, 13);
MISC::SET_BIT(&iVar0, 14);
MISC::SET_BIT(&iVar0, 15);
func_171(36, iVar0, 0);
func_170(2);
}


void func_176(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, 17);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 13);
MISC::SET_BIT(&iVar0, 14);
MISC::SET_BIT(&iVar0, 12);
func_171(12, iVar0, 0);
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 17);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 7);
MISC::SET_BIT(&iVar0, 9);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 13);
MISC::SET_BIT(&iVar0, 12);
func_171(15, iVar0, 0);
func_170(2);
}


void func_177(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 17);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 15);
MISC::SET_BIT(&iVar0, 12);
func_171(65, iVar0, 0);
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 13);
func_171(40, iVar0, 0);
func_170(2);
}


void func_178(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 20);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 7);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 12);
MISC::SET_BIT(&iVar0, 13);
func_171(79, iVar0, 0);
iVar0=0;
MISC::SET_BIT(&iVar0, false);
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 3);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 5);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&iVar0, 10);
MISC::SET_BIT(&iVar0, 7);
MISC::SET_BIT(&iVar0, 11);
MISC::SET_BIT(&iVar0, 12);
MISC::SET_BIT(&iVar0, 13);
func_171(43, iVar0, 0);
func_170(2);
}


void func_179(){
int iVar0;
iVar0=0;
MISC::SET_BIT(&iVar0, true);
MISC::SET_BIT(&iVar0, 16);
MISC::SET_BIT(&iVar0, 17);
func_171(61, iVar0, 1);
Global_55453[61 /*36*/].f_9=(Global_55453[61 /*36*/].f_9 * 0,544f);
func_170(1);
}


void func_180(){
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
}


void func_181(int iParam0){
MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), false);
MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), true);
MISC::CLEAR_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), 2);
}


void func_182(){
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
}


void func_183(){
PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID());
switch (Global_113386.f_24979){
case 2:
MISC::SET_BIT(&(Global_113386.f_24979.f_1), 2);
if(SYSTEM::VDIST2(func_186(PLAYER::PLAYER_ID()), func_185(88, 0)) < 43681f){
MISC::SET_BIT(&(Global_113386.f_24979.f_3), 2);
}
break;
case 3:
MISC::SET_BIT(&(Global_113386.f_24979.f_1), 3);
if(SYSTEM::VDIST2(func_186(PLAYER::PLAYER_ID()), func_185(89, 0)) < 43681f){
MISC::SET_BIT(&(Global_113386.f_24979.f_3), 3);
}
break;
case 4:
MISC::SET_BIT(&(Global_113386.f_24979.f_1), 4);
if(SYSTEM::VDIST2(func_186(PLAYER::PLAYER_ID()), func_185(90, 0)) < 43681f){
MISC::SET_BIT(&(Global_113386.f_24979.f_3), 4);
}
break;
}
func_184();
}

int func_184(){
if(func_11(0)){
return 0;
}
if(Global_100480.f_8){
if(Global_100480.f_10 > 0){
return 0;
}}elseif(Global_100480.f_10 > 1){
return 0;
}
Global_100480.f_10++;
return 1;
}


Vector3 func__185(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0f, 0f, 0f;
}
return Global_32338[iVar0 /*23*/][iParam1 /*3*/];
}


Vector3 func__186(int iParam0){
return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false);
}


void func_187(){
func_251(104, 1);
func_188(103, 1, 1);
}


void func_188(int iParam0, int iParam1, bool bParam2){
int iVar0;
Global_8822=iParam0;
if(Global_117[iParam0 /*10*/].f_8 !=166){
func_192();
if(iParam1==4){
func_23(iParam0, 0, 1);
func_23(iParam0, 1, 1);
func_23(iParam0, 2, 1);
func_22(iParam0, 0, 1);
func_22(iParam0, 1, 1);
func_22(iParam0, 2, 1);
}else{
if(func_191(iParam0, iParam1)==1 && func_24(iParam0, iParam1)==1){
bParam2=false;
}
iVar0=iParam1;
func_23(iParam0, iVar0, 1);
func_22(iParam0, iVar0, 1);
if(iParam0==172 && !Global_2815059.f_6768){
bParam2=false;
}
if(iParam0==171 && !Global_2815059.f_6767){
bParam2=false;
}
if(iParam0==173 && !Global_2815059.f_6767){
bParam2=false;
}}
if(bParam2){
if(!Global_78319){
if(iParam1 !=4){
if(Global_20266 !=iParam1){
Global_8795[iParam1 /*4*/]={
func_190(iParam0) 
};
Global_8812[iParam1]=1;
Global_8817[iParam1]=iParam0;
}elseif(iParam0==Global_20266){
}else{
Global_8746[1 /*6*/]={
func_190(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_189();
}}else{
Global_8746[1 /*6*/]={
func_190(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_189();
}}else{
Global_8746[1 /*6*/]={
func_190(iParam0) 
};
Global_8746[1 /*6*/].f_5=iParam1;
func_189();
}}}}


void func_189(){
char cVar0[64];
char cVar16[64];
char* sVar32;
StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1998[Global_8822 /*29*/].f_7)), 64);
if(Global_8841==0){
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8746[1 /*6*/])), 64);
sVar32=HUD::_GET_LABEL_TEXT("CELL_253");
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
}else{
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8746[1 /*6*/]));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
}
MISC::CLEAR_BIT(&Global_8136, false);
}


struct<4> func_190(int iParam0){
return Global_1998[iParam0 /*29*/].f_3;
}

int func_191(int iParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 4){
return 0;
}
return Global_1998[iParam0 /*29*/].f_12[iParam1];
}


void func_192(){
if(func_59(14)){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[0 /*29*/]){
Global_20266=0;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[1 /*29*/]){
Global_20266=1;
}elseif(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())==Global_113386.f_28050[2 /*29*/]){
Global_20266=2;
}else{
Global_20266=0;
}}}else{
Global_20266=func_66();
if(Global_20266==145){
Global_20266=3;
}
if(Global_78319){
Global_20266=3;
}
if(Global_20266 > 3){
Global_20266=3;
}}}


void func_193(){
func_194(1794975438, 1, 2, 103, 360000, 10000, -1, 188, -1, 0, 1);
}

int func_194(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
struct<14> Var0;
if(func_11(0)){
return 0;
}
if(iParam4 < 0){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6==76){
return 0;
}
if(iParam7==235){
return 0;
}
if(bParam3 < 3){
if(MISC::IS_BIT_SET(iParam2, bParam3)){
return 0;
}}
if(iParam2 < 1 || iParam2 > 7){
return 0;
}
if(Global_113386.f_7688.f_764 < 8){
Var0.f_0=iParam0;
Var0.f_3=func_10(iParam1);
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam4);
Var0.f_5=iParam5;
Var0.f_1=iParam9;
Var0.f_2=iParam2;
Var0.f_6=bParam3;
Var0.f_7=iParam6;
Var0.f_8=iParam7;
Var0.f_9=iParam8;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_13=iParam10;
MISC::CLEAR_BIT(&(Var0.f_1), false);
Global_113386.f_7688.f_651[Global_113386.f_7688.f_764 /*14*/]={
Var0 
};
Global_113386.f_7688.f_764++;
func_16(0);
func_16(1);
func_16(2);
return 1;
}
return 0;
}


void func_195(){
func_251(103, 1);
func_188(103, 1, 1);
}


void func_196(){
func_194(969002696, 1, 2, 103, 360000, 10000, 66, 186, -1, 0, 1);
}


void func_197(){
func_251(102, 1);
}


void func_198(){
func_194(-1444331296, 1, 2, 50, 120000, 10000, -1, 184, -1, 0, 1);
}


void func_199(){
func_251(83, 1);
func_188(99, 1, 1);
}


void func_200(){
if(func_201()){
func_2(-1871231456, 6, 2, 99, 30000, 10000, -1, 182, -1, 0);
}}

int func_201(){
int iVar0;
if(Global_152259==2){
return 1;
}elseif(Global_152259==3){
return 0;
}
if(NETWORK::NETWORK_IS_SIGNED_IN()){
if(NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS()){
if(NETWORK::_NETWORK_GET_ROS_PRIVILEGE_24()){
STATS::STAT_GET_INT(joaat("sp_unlock_exclus_content"), &iVar0, -1);
MISC::SET_BIT(&iVar0, 2);
MISC::SET_BIT(&iVar0, 4);
MISC::SET_BIT(&iVar0, 6);
MISC::SET_BIT(&Global_25, 2);
MISC::SET_BIT(&Global_25, 4);
MISC::SET_BIT(&Global_25, 6);
STATS::STAT_SET_INT(joaat("sp_unlock_exclus_content"), iVar0, true);
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
iVar0=MISC::GET_PROFILE_SETTING(866);
MISC::SET_BIT(&iVar0, false);
STATS::_SET_HAS_CONTENT_UNLOCKS_FLAGS(iVar0);
}
return 1;
}}}
if(MISC::ARE_PROFILE_SETTINGS_VALID()){
if(MISC::IS_BIT_SET(MISC::GET_PROFILE_SETTING(866), 0)){
return 1;
}}
return 0;
}


void func_202(){
func_251(107, 1);
func_203(286, 0, 0);
}


void func_203(int iParam0, int iParam1, int iParam2){
bool bVar0;
if(iParam0 < 0){}
if(iParam0==321 || iParam0 > 321){}else{
func_40((891 + iParam0), 1, -1);
}
bVar0=true;
if(Global_113386.f_10194[iParam0 /*12*/].f_5==1){
if(Global_113386.f_10194[iParam0 /*12*/].f_6==11 || Global_113386.f_10194[iParam0 /*12*/].f_6==12){
bVar0=false;
}}else{
Global_113386.f_10194[iParam0 /*12*/].f_5=1;
Global_113386.f_10194[iParam0 /*12*/].f_10=iParam1;
Global_113386.f_10194[iParam0 /*12*/].f_11=iParam2;
if(iParam0==287){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_0"), 50, 0);
}
if(iParam0==286){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_1"), 50, 0);
}
if(iParam0==299){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_hidden_packages_3"), 50, 0);
}}
if(bVar0){
func_204();
}}


void func_204(){
int iVar0;
float fVar1;
float fVar2;
float fVar3;
float fVar4;
float fVar5;
float fVar6;
float fVar7;
float fVar8;
int iVar9;
iVar0=0;
Global_113122=0;
Global_113123=0;
Global_113124=0;
Global_113125=0;
Global_113126=0;
Global_113127=0;
Global_113128=0;
fVar1=0f;
fVar2=0f;
fVar3=0f;
fVar4=0f;
fVar5=0f;
fVar6=0f;
fVar7=0f;
fVar8=Global_113386.f_10194.f_3853;
Global_113386.f_10194.f_3853=0f;
while (iVar0 < 321){
if(Global_113386.f_10194[iVar0 /*12*/].f_5==1){
switch (Global_113386.f_10194[iVar0 /*12*/].f_6){
case 1:
Global_113122++;
fVar1=(fVar1 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 3:
Global_113123++;
fVar2=(fVar2 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 5:
Global_113124++;
fVar3=(fVar3 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 7:
Global_113125++;
fVar4=(fVar4 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 9:
Global_113126++;
fVar5=(fVar5 + (Global_113386.f_10194[iVar0 /*12*/].f_4 * 4f));
break;
case 11:
Global_113127++;
fVar6=(fVar6 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
case 13:
Global_113128++;
fVar7=(fVar7 + Global_113386.f_10194[iVar0 /*12*/].f_4);
break;
default:
break;
}}
iVar0++;
}
if(Global_113105 > 0){
if(Global_113122==Global_113105){
fVar1=55f;
}}
if(Global_113106 > 0){
if(Global_113123==Global_113106){
fVar2=10f;
}}
if(Global_113107 > 0){
if(Global_113124==Global_113107){
fVar3=0f;
}}
if(Global_113108 > 0){
if(Global_113125==Global_113108){
fVar4=10f;
}}
if(Global_113109 > 0){
if(((Global_113126==Global_113109 || (Global_113109 * 10 / Global_113126) < 41) || Global_113126 > Global_113112) || Global_113126==Global_113112){
if(!MISC::IS_BIT_SET(Global_113386.f_10194.f_3856, 14)){
if(Global_113126==Global_113109){
STATS::PRESENCE_EVENT_UPDATESTAT_INT(joaat("num_rndevents_completed"), Global_113109, 0);
MISC::SET_BIT(&(Global_113386.f_10194.f_3856), 14);
}}
fVar5=5f;
}}
if(Global_113110 > 0){
if(Global_113127==Global_113110){
fVar6=15f;
}}
if(Global_113111 > 0){
if(Global_113128==Global_113111){
fVar7=5f;
}}
Global_113386.f_10194.f_3853=((((((fVar1 + fVar2) + fVar3) + fVar4) + fVar5) + fVar6) + fVar7);
if(Global_113126 > Global_113112 || Global_113126==Global_113112){
iVar9=Global_113112;
}else{
iVar9=Global_113126;
}
STATS::STAT_SET_INT(joaat("num_missions_completed"), Global_113122, true);
STATS::STAT_SET_INT(joaat("num_missions_available"), Global_113105, true);
STATS::STAT_SET_INT(joaat("num_minigames_completed"), Global_113123, true);
STATS::STAT_SET_INT(joaat("num_minigames_available"), Global_113106, true);
STATS::STAT_SET_INT(joaat("num_oddjobs_completed"), Global_113124, true);
STATS::STAT_SET_INT(joaat("num_oddjobs_available"), Global_113107, true);
STATS::STAT_SET_INT(joaat("num_rndpeople_completed"), Global_113125, true);
STATS::STAT_SET_INT(joaat("num_rndpeople_available"), Global_113108, true);
STATS::STAT_SET_INT(joaat("num_rndevents_completed"), iVar9, true);
STATS::STAT_SET_INT(joaat("num_rndevents_available"), Global_113112, true);
STATS::STAT_SET_INT(joaat("num_misc_completed"), (Global_113128 + Global_113127), true);
STATS::STAT_SET_INT(joaat("num_misc_available"), (Global_113111 + Global_113110), true);
Global_113129=(Global_113122 * 100 / Global_113105);
Global_113131=((Global_113124 + Global_113123) * 100 / (Global_113107 + Global_113106));
Global_113130=((Global_113125 + iVar9) * 100 / (Global_113108 + Global_113112));
Global_113132=((Global_113127 + Global_113128) * 100 / (Global_113110 + Global_113111));
STATS::STAT_SET_FLOAT(joaat("total_progress_made"), Global_113386.f_10194.f_3853, true);
STATS::STAT_SET_INT(joaat("percent_story_missions"), Global_113129, true);
STATS::STAT_SET_INT(joaat("percent_ambient_missions"), Global_113130, true);
STATS::STAT_SET_INT(joaat("percent_oddjobs"), Global_113131, true);
if(fVar8 > 0f && SYSTEM::FLOOR(fVar8) < SYSTEM::FLOOR(Global_113386.f_10194.f_3853)){
func_60(13, SYSTEM::FLOOR(Global_113386.f_10194.f_3853));
}
if(!DATAFILE::DATAFILE_IS_SAVE_PENDING()){
if(!Global_78319){
if(func_205()==2==0 && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(NETWORK::NETWORK_IS_CLOUD_AVAILABLE()){
Global_113120=0;
}
if(!Global_63154){
func_184();
}}}}}

int func_205(){
return Global_31959;
}


void func_206(){
func_251(100, 1);
}


void func_207(){
func_2(-1674789340, 1, 4, 64, 60000, 10000, -1, 178, -1, 0);
}


void func_208(){
func_251(105, 1);
}


void func_209(){
func_251(99, 1);
}


void func_210(){
func_194(-1134717682, 1, 4, 54, 1920000, 10000, -1, 175, -1, 0, 1);
}


void func_211(){
func_251(97, 1);
}


void func_212(){
func_194(-1159983966, 1, 2, 52, 200000, 10000, -1, 172, -1, 0, 1);
func_214();
}


void func_213(){
func_251(96, 1);
}


void func_214(){
func_88(func_69(1), 12, 10, 1, 1);
}


void func_215(){
func_251(92, 1);
func_251(93, 1);
func_412(37, 1);
}


void func_216(){
func_217(8);
func_203(287, 0, 0);
func_251(106, 1);
}


void func_217(int iParam0){
if(iParam0==63 || iParam0==-1){
return;
}
func_218(iParam0);
MISC::SET_BIT(&(Global_113386.f_18574[iParam0 /*6*/]), false);
}


void func_218(int iParam0){
switch (iParam0){
case 30:
func_219(22, 1, 0, 1, 0);
break;
case 15:
func_412(37, 0);
break;
default:
break;
}}


void func_219(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4){
if(iParam0 !=198){
if(Global_78319){
Global_42586.f_227[iParam0]=iParam1;
}else{
Global_113386.f_7261.f_227[iParam0]=iParam1;
}
Global_39592[iParam0]=iParam2;
Global_39791[iParam0]=1;
func_222(iParam0, bParam3, iParam4, 0);
func_220(iParam0, iParam1);
}}


void func_220(int iParam0, int iParam1){
switch (iParam0){
case 12:
if(iParam1==0){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", false, false);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_PORT_OF_LS_UNDERWATER_CREAKS", true, false);
}
break;
case 71:
if(iParam1 !=1){
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", false, false);
}else{
AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("HEIST_SWEATSHOP_ZONES", true, false);
}
break;
case 65:
if(iParam1==1){
func_221(0, 0);
}else{
func_221(0, 1);
}
break;
case 6:
if(iParam1==1){
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", true, false);
}else{
AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT("AZ_UNDERWATER_EXILE_01_PLANE_WRECK", false, false);
}
break;
case 174:
if(iParam1==2){
AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("V_CARSHOWROOM_PS_WINDOW_UNBROKEN");
}
break;
case 37:
if(iParam1==1){
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_STAGE_RADIO", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_01", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_02", false);
AUDIO::SET_STATIC_EMITTER_ENABLED("TREVOR1_TRAILER_PARK_MAIN_TRAILER_RADIO_03", false);
}
break;
}}


void func_221(bool bParam0, bool bParam1){
if(bParam1){
MISC::SET_BIT(&Global_112024, iParam0);
}else{
MISC::CLEAR_BIT(&Global_112024, bParam0);
}
Global_112023=1;
}


bool func_222(int iParam0, bool bParam1, int iParam2, bool bParam3){
bool bVar0;
int iVar1;
int iVar2;
struct<5> Var3;
int iVar98;
bool bVar99;
int iVar100;
Global_1922024=1;
bVar0=false;
Var3.f_4=3;
Var3.f_8=3;
Var3.f_64=3;
Var3.f_75=3;
Var3.f_91=3;
func_225(&Var3, iParam0);
if(func_223()){
iVar1=Global_113386.f_7261.f_227[iParam0];
}else{
iVar1=Global_42586.f_227[iParam0];
}
iVar2=Global_39990[iParam0];
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !bParam3){
Global_1922024=1;
}else{
bVar99=true;
if(MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) !=MISC::GET_HASH_KEY("standard_global_reg")){
if(iParam2==0){
if(Global_39592[iParam0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), Var3, true) < 200f){
bVar99=false;
Global_1922024=1;
}
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || TASK::IS_PED_BEING_ARRESTED(PLAYER::PLAYER_PED_ID())){
if(!CAM::IS_SCREEN_FADED_OUT()){
bVar99=false;
Global_1922024=1;
}}}}
if(STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && (!STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() || STREAMING::GET_PLAYER_SWITCH_STATE() !=5)){
bVar99=false;
Global_1922024=1;
}
if(bVar99){
switch (Var3.f_3){
case 0:
if(iVar1==2){
}else{
if(Var3.f_4[iVar1] !=0){
ENTITY::REMOVE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar1], false);
}
if(Var3.f_4[iVar2] !=0){
ENTITY::CREATE_MODEL_HIDE(Var3, 10f, Var3.f_4[iVar2], true);
}
Global_41186[iParam0]=1;
}
bVar0=true;
break;
case 1:
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
Global_1922024=1;
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
Global_1922024=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[0 /*8*/]));
Global_1922024=1;
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REQUEST_IPL(&(Var3.f_34));
Global_1922024=1;
}
}}elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[2 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[1 /*8*/]));
}
}}elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_34)) !=MISC::GET_HASH_KEY("")){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_34))){
STREAMING::REMOVE_IPL(&(Var3.f_34));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[0 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[0 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[1 /*8*/]))){
STREAMING::REMOVE_IPL(&(Var3.f_8[1 /*8*/]));
}
}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!STREAMING::IS_IPL_ACTIVE(&(Var3.f_8[2 /*8*/]))){
STREAMING::REQUEST_IPL(&(Var3.f_8[2 /*8*/]));
}
}}
Global_40987[iParam0]=1;
Global_41186[iParam0]=1;
bVar0=true;
break;
case 2:
iVar100=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Var3, &(Var3.f_42));
if(iVar100 !=0){
if(MISC::GET_HASH_KEY(&(Var3.f_50)) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_50))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_50));
}
}
if(iVar1==0){
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
}
elseif(iVar1==1){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
if((MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")) && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY(&(Var3.f_8[iVar1 /*8*/]))){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
}
elseif(iVar1==2){
if(MISC::GET_HASH_KEY(&(Var3.f_8[0 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[0 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[0 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[1 /*8*/])) !=MISC::GET_HASH_KEY("")){
if(INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[1 /*8*/]))){
INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[1 /*8*/]));
}}
if(MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("") && MISC::GET_HASH_KEY(&(Var3.f_8[2 /*8*/])) !=MISC::GET_HASH_KEY("REMOVE_ALL_STATES")){
if(!INTERIOR::IS_INTERIOR_ENTITY_SET_ACTIVE(iVar100, &(Var3.f_8[2 /*8*/]))){
INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar100, &(Var3.f_8[2 /*8*/]));
}}
}
if(bParam1){
INTERIOR::REFRESH_INTERIOR(iVar100);
}}
Global_41186[iParam0]=1;
Global_40987[iParam0]=1;
bVar0=true;
break;
case 3:
if(MISC::GET_DISTANCE_BETWEEN_COORDS(Var3, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), true) < 250f){
iVar98=OBJECT::GET_RAYFIRE_MAP_OBJECT(Var3, 25f, &(Var3.f_8[0 /*8*/]));
if(OBJECT::DOES_RAYFIRE_MAP_OBJECT_EXIST(iVar98)){
if(iVar1==0){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 3);
Global_41186[iParam0]=1;
bVar0=true;
}elseif(iVar1==1){
if((OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=6 && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=7) && OBJECT::GET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98) !=8){
OBJECT::SET_STATE_OF_RAYFIRE_MAP_OBJECT(iVar98, 10);
Global_41186[iParam0]=1;
bVar0=true;
}}elseif(iVar1==2){
bVar0=true;
}
}}
break;
case 4:
if(iVar1==0){
ENTITY::REMOVE_MODEL_SWAP(Var3, 50f, Var3.f_4[1], Var3.f_4[0], false);
MISC::CLEAR_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
}elseif(iVar1==1){
ENTITY::CREATE_MODEL_SWAP(Var3, 50f, Var3.f_4[0], Var3.f_4[1], true);
MISC::SET_BIT(&(Global_39338[(iParam0 / 32)]), (iParam0 % 32));
}
bVar0=true;
break;
}
if(bVar0){
Global_39791[iParam0]=0;
Global_39990[iParam0]=iVar1;
if(!func_223()){
if(!Global_40587[iParam0]){
Global_40587[iParam0]=1;
Global_40786++;
}}}}}
return bVar0;
}

int func_223(){
if((func_205()==-1 || func_205()==999) && !func_224()==0){
return 1;
}
return 0;
}

int func_224(){
return Global_31960;
}

int func_225(var uParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < 3){
uParam0->f_4[iVar0]=0;
StringCopy(&(uParam0->f_8[iVar0 /*8*/]), "", 32);
uParam0->f_64[iVar0]=0;
uParam0->f_75[iVar0]=0;
uParam0->f_91[iVar0]=0;
iVar0++;
}
*uParam0={
0f, 0f, 0f 
};
uParam0->f_3=0;
uParam0->f_33=0;
StringCopy(&(uParam0->f_34), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
StringCopy(&(uParam0->f_50), "", 32);
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
StringCopy(&(uParam0->f_8[0 /*8*/]), "TRV1_Trail_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TRV1_Trail_end", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TRV1_Trail_Finish", 32);
uParam0->f_33=1;
*uParam0={
-24,685f, 3032,92f, 40,331f 
};
break;
case 4:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS3_05_water_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_05_water_grp2", 32);
*uParam0={
-24,685f, 3032,92f, 40,331f 
};
break;
case 0:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "gasstation_ipl_group1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasstation_ipl_group2", 32);
*uParam0={
-93,4f, 6410,9f, 36,8f 
};
break;
case 1:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_Smash2_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_Smash2_endimap", 32);
*uParam0={
890,3647f, -2367,289f, 28,10582f 
};
break;
case 2:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DES_StiltHouse_imapstart", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_StiltHouse_imapend", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "des_stilthouse_rebuild", 32);
uParam0->f_33=0;
*uParam0={
-1020,5f, 663,41f, 154,75f 
};
uParam0->f_58={
-1018,913f, 603,2904f, 105,6611f 
};
uParam0->f_61={
-1038,913f, 639,2904f, 135,6611f 
};
uParam0->f_64[0]=1;
uParam0->f_64[1]=0;
break;
case 5:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bnkheist_apt_norm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest", 32);
break;
case 196:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bnkheist_apt_dest_vfx", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
break;
case 6:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "crashed_cargoplane", 32);
break;
case 7:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_jb700_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 8:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_entityXF_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 9:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_cheetah_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 10:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "prop_ztype_covered", 32);
*uParam0={
490,8999f, -1334,068f, 28,3298f 
};
break;
case 11:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_48_Killed_Michael", 32);
break;
case 12:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cargoship", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "sunkcargoship", 32);
uParam0->f_68={
-162,8918f, -2365,769f, 0f 
};
uParam0->f_71={
190,75f, 31,25f, 21f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 13:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ship_occ_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ship_occ_grp2", 32);
break;
case 14:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "smboat", 32);
break;
case 15:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "gasparticle_grp2", 32);
*uParam0={
-95,2f, 6411,3f, 31,5f 
};
break;
case 16:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_02_cf_offmission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission1", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 17:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission2", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 18:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission3", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 19:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS1_02_cf_onmission4", 32);
*uParam0={
-146,3837f, 6161,5f, 30,2062f 
};
break;
case 20:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jetstealtunnel", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
801,7f, -1810,8f, 23,3f 
};
break;
case 21:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Jetsteal_ipl_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jetsteal_ipl_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
787,3967f, -1808,858f, 29,8532f 
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
StringCopy(&(uParam0->f_8[0 /*8*/]), "BH1_47_JoshHse_UnBurnt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "BH1_47_JoshHse_Burnt", 32);
break;
case 23:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bh1_47_joshhse_firevfx", 32);
break;
case 24:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_30_Keep_Closed", 32);
break;
case 25:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "triathlon2_VBprops", 32);
break;
case 26:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_REQUEST", 32);
*uParam0={
163,4f, -745,7f, 251f 
};
break;
case 27:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FBI_colPLUG", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 28:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FBI_repair", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 29:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_build1_h");
uParam0->f_4[1]=joaat("dt1_05_build1_damage");
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 30:
uParam0->f_3=4;
uParam0->f_4[0]=-112041596;
uParam0->f_4[1]=joaat("dt1_05_build1_damage_lod");
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 31:
uParam0->f_3=4;
uParam0->f_4[0]=joaat("dt1_05_slod");
uParam0->f_4[1]=joaat("dt1_05_damage_slod");
*uParam0={
178,534f, -668,835f, 37,2113f 
};
break;
case 32:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIB_heist_lights", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 33:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIB_heist_dmg", 32);
*uParam0={
136,004f, -749,287f, 153,302f 
};
break;
case 34:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_rubble", 32);
*uParam0={
74,29f, -736,05f, 46,76f 
};
break;
case 35:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "FIBlobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FIBlobby", 32);
*uParam0={
105,4557f, -745,4835f, 44,7548f 
};
break;
case 36:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_HC_REMOVE", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_HC_REQ", 32);
*uParam0={
169f, -670,3f, 41,9f 
};
break;
case 37:
uParam0->f_3=1;
*uParam0={
50,2f, 3743,9f, 40,9f 
};
uParam0->f_79={
16,9757f, 3614,307f, 30,0677f 
};
uParam0->f_82={
145,2451f, 3748,912f, 49,6958f 
};
uParam0->f_85={
16,9757f, 3614,307f, 30,0677f 
};
uParam0->f_88={
145,2451f, 3748,912f, 49,6958f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
break;
case 38:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkA_grp2", 32);
*uParam0={
50,2f, 3743,9f, 40,9f 
};
break;
case 39:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerA_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
50,2f, 3743,9f, 40,9f 
};
break;
case 40:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkB_grp2", 32);
*uParam0={
106,7f, 3732,1f, 40,8f 
};
break;
case 41:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerB_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
106,7f, 3732,1f, 40,8f 
};
break;
case 42:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkC_grp2", 32);
*uParam0={
72,7f, 3695,4f, 42f 
};
break;
case 43:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerC_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
72,7f, 3695,4f, 42f 
};
break;
case 44:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkD_grp2", 32);
*uParam0={
43,8f, 3699,7f, 41,3f 
};
break;
case 45:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerD_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
43,8f, 3699,7f, 41,3f 
};
break;
case 46:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "trailerparkE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "trailerparkE_grp2", 32);
*uParam0={
28,5f, 3668f, 40,4f 
};
break;
case 47:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_trailerE_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
28,5f, 3668f, 40,4f 
};
break;
case 48:
uParam0->f_3=1;
StringCopy(&(uParam0->f_34), "des_methtrailer", 32);
StringCopy(&(uParam0->f_8[0 /*8*/]), "methtrailer_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "methtrailer_grp2", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "methtrailer_grp3", 32);
uParam0->f_33=1;
*uParam0={
29,4838f, 3735,593f, 38,688f 
};
uParam0->f_68={
31,134f, 3738,783f, 39,062f 
};
uParam0->f_71={
13,6f, 20f, 8,9f 
};
uParam0->f_74=48f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=1;
break;
case 49:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "occl_meth_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
29,4838f, 3735,593f, 38,688f 
};
break;
case 50:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_startimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_endimap", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2450,595f, 4959,929f, 44,2575f 
};
uParam0->f_79={
2383,756f, 4929,988f, 39,52461f 
};
uParam0->f_82={
2505,756f, 5023,988f, 67,52461f 
};
break;
case 55:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhs_start_occl", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhs_end_occl", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2450,595f, 4959,929f, 44,2575f 
};
break;
case 51:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farm", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt", 32);
uParam0->f_33=1;
*uParam0={
2444,8f, 4976,4f, 50,5f 
};
break;
case 52:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farm_props", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "farm_burnt_props", 32);
uParam0->f_33=1;
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 53:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "des_farmhouse", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 54:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "farmint_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "farmint", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
2447,9f, 4973,4f, 47,7f 
};
break;
case 56:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "tankerexp_grp0", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp3", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 57:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp1", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 58:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "tankerexp_grp2", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 59:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DES_tankerexp", 32);
*uParam0={
1676,415f, -1626,37f, 111,4848f 
};
break;
case 60:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "dockcrane1", 32);
*uParam0={
889,3f, -2910,9f, 40f 
};
break;
case 61:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CanyonRvrShallow", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CanyonRvrDeep", 32);
*uParam0={
-1600,619f, 4443,457f, 0,725f 
};
break;
case 62:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Garage_door_locked", 32);
*uParam0={
966,1f, -114,8f, 75,2f 
};
break;
case 63:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ch1_02_closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ch1_02_open", 32);
*uParam0={
-3086,428f, 339,2523f, 6,3717f 
};
break;
case 64:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ferris_finale_Anim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1675,178f, -1143,605f, 12,0175f 
};
break;
case 65:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "railing_start", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "railing_end", 32);
*uParam0={
-532,1309f, 4526,187f, 88,7955f 
};
break;
case 66:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "canyonriver01", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "canyonriver01_traincrash", 32);
*uParam0={
-532,1309f, 4526,187f, 88,7955f 
};
break;
case 67:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_05_WOFFM", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_05_FIB2_Mission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "DT1_05_WOFFM", 32);
*uParam0={
131,29f, -631,22f, 261,85f 
};
break;
case 68:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "coronertrash", 32);
*uParam0={
233,9f, -1355f, 30,3f 
};
break;
case 69:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Coroner_Int_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Coroner_Int_on", 32);
*uParam0={
234,4f, -1355,6f, 40,5f 
};
break;
case 70:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "id2_14_pre_no_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 71:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during1", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_during2", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 72:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_on_fire", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "id2_14_post_no_int", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 73:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "id2_14_during_door", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 74:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "burnt_switch_off", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
716,84f, -962,05f, 31,59f 
};
break;
case 75:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_Default", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "RC12B_Destroyed", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "RC12B_Fixed", 32);
uParam0->f_33=0;
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 76:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "RC12B_HospitalInterior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 105:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SM_15_BldGRAF1", 32);
*uParam0={
330,4596f, -584,8196f, 42,3174f 
};
break;
case 106:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CH3_RD2_BishopsChickenGraffiti", 32);
*uParam0={
1861,28f, 2402,11f, 58,53f 
};
break;
case 107:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FruitBB", 32);
*uParam0={
-1327,46f, -274,82f, 54,25f 
};
break;
case 108:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_04_MazeBillboardGraffiti", 32);
*uParam0={
2697,32f, 3162,18f, 58,1f 
};
break;
case 109:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS5_Roads_RonOilGraffiti", 32);
*uParam0={
2119,12f, 3058,21f, 53,25f 
};
break;
case 110:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ap1_03_bbrd_dcl", 32);
*uParam0={
-804,25f, -2276,88f, 23,59f 
};
break;
case 111:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_02_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_02_NewBill", 32);
*uParam0={
296,5f, 173,3f, 100,4f 
};
break;
case 112:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "HW1_Emissive_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "HW1_Emissive_NewBill", 32);
*uParam0={
296,5f, 173,3f, 100,4f 
};
break;
case 77:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
480,9554f, -1321,21f, 28,2037f 
};
uParam0->f_85={
508,3f, -1299,3f, 39,4f 
};
uParam0->f_88={
459,9f, -1363,2f, 21,4f 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=0;
break;
case 78:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "TrevorsTrailer", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "TrevorsTrailerTrash", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "TrevorsTrailerTidy", 32);
*uParam0={
1973f, 3815f, 34f 
};
uParam0->f_33=0;
break;
case joaat("mpsv_lp0_31"):
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "scafstartimap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "scafendimap", 32);
*uParam0={
-1088,6f, -1650,6f, 6,4f 
};
break;
case 80:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chop_props", 32);
*uParam0={
-13,83f, -1455,45f, 31,81f 
};
break;
case 113:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "AP1_04_TriAf01", 32);
*uParam0={
-1277,629f, -2030,913f, 1,2823f 
};
break;
case 114:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS2_06_TriAf02", 32);
*uParam0={
2384,969f, 4277,583f, 30,379f 
};
break;
case 115:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS4_04_TriAf03", 32);
*uParam0={
1577,881f, 3836,107f, 30,7717f 
};
break;
case 87:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_21_prop_lift_on", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-180,5771f, -1016,928f, 28,2893f 
};
break;
case 88:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "jewel2fake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "post_hiest_unload", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "bh1_16_refurb", 32);
*uParam0={
-630,4205f, -236,7843f, 37,057f 
};
uParam0->f_79={
(-623,6868f - 11f), (-231,935f - 11f), (40,30703f - 3,25f) 
};
uParam0->f_82={
(-623,6868f + 11f), (-231,935f + 11f), (40,30703f + 3,25f) 
};
break;
case 89:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "bh1_16_doors_shut", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "refit_unload", 32);
*uParam0={
-583,1606f, -282,3967f, 35,394f 
};
break;
case 90:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "v_tunnel_hole_swap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "v_tunnel_hole", 32);
*uParam0={
-14,651f, -604,3639f, 25,1823f 
};
break;
case 91:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "cs5_4_trains", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2773,61f, 2835,327f, 35,1903f 
};
break;
case 94:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "airfield", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
1743,682f, 3286,251f, 40,0875f 
};
break;
case 95:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "REMOVE_ALL_STATES", 32);
uParam0->f_33=1;
*uParam0={
1222,9f, 1877,9f, 79,9f 
};
uParam0->f_58={
1206,8f, 1803f, 43,9f 
};
uParam0->f_61={
1329f, 2060,4f, 143,9f 
};
uParam0->f_64[0]=0;
uParam0->f_64[1]=1;
uParam0->f_64[2]=0;
break;
case 104:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_01_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_01_NewBill", 32);
*uParam0={
-351f, -1324f, 44,02f 
};
break;
case 103:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_17_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "DT1_17_NewBill", 32);
*uParam0={
391,81f, -962,71f, 41,97f 
};
break;
case 102:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SC1_14_OldBill", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SC1_14_NewBill", 32);
*uParam0={
424,2f, -1944,31f, 33,09f 
};
break;
case 92:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_01_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626,374f, 2949,869f, 39,1409f 
};
break;
case 93:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "ld_rail_02_track", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
2626,374f, 2949,869f, 39,1409f 
};
break;
case 118:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_M_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811,2679f, 179,3344f, 75,7408f 
};
break;
case 116:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_D_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_D_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802,0311f, 172,9131f, 75,7408f 
};
break;
case 117:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_S_items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_S_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 119:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_L_Items", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_L_Moved", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 120:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_M_items_swap", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-808,033f, 172,1309f, 75,7406f 
};
break;
case 122:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_FameShame", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-802,0311f, 172,9131f, 75,7408f 
};
break;
case 121:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_JewelHeist", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 123:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Michael_premier", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 124:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_plane_ticket", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 170:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "burgershot_yoga", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-813,3f, 177,5f, 75,76f 
};
break;
case 171:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_Scuba", 32);
StringCopy(&(uParam0->f_42), "V_Michael_Garage", 32);
*uParam0={
-810,5301f, 187,7868f, 71,4786f 
};
break;
case 125:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_Michael_bed_tidy", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_Michael_bed_Messy", 32);
StringCopy(&(uParam0->f_42), "V_Michael", 32);
*uParam0={
-811,2679f, 179,3344f, 75,7408f 
};
break;
case 164:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Jewel_Gasmasks", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 165:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency _Overalls", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 166:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_53_Agency_Blueprint", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 167:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_KitBag", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 168:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Body_Armour", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 169:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_35_Fireman", 32);
StringCopy(&(uParam0->f_42), "V_Sweat", 32);
*uParam0={
707,2563f, -965,147f, 29,4179f 
};
break;
case 126:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 127:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 128:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Trevor_Helmet2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 129:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 130:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 131:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_24_Trevor_Briefcase2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 132:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay1", 32);
StringCopy(&(uParam0->f_42), "V_Trailer", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 133:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay3", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTRASH", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 134:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_26_Michael_Stay2", 32);
StringCopy(&(uParam0->f_42), "V_TrailerTidy", 32);
*uParam0={
1973,805f, 3818,555f, 32,4363f 
};
break;
case 179:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shutter_open", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "shutter_closed", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-30,8793f, -1088,336f, 25,4221f 
};
uParam0->f_68={
-29,3f, -1086,35f, 25,57f 
};
uParam0->f_71={
5,5f, 3f, 2f 
};
uParam0->f_74=-10f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
break;
case 174:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "csr_beforeMission", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "csr_afterMissionA", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "csr_afterMissionB", 32);
StringCopy(&(uParam0->f_50), "csr_inMission", 32);
uParam0->f_33=0;
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 175:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49,21f, -1090,28f, 25,42f 
};
uParam0->f_68={
-49,21f, -1090,28f, 25,42f 
};
uParam0->f_71={
2,5f, 3f, 3f 
};
uParam0->f_74=0f;
uParam0->f_75[0]=0;
uParam0->f_75[1]=1;
uParam0->f_75[2]=0;
break;
case 176:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-49,28f, -1092,66f, 25,42f 
};
uParam0->f_68={
-49,28f, -1092,66f, 25,42f 
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
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_carshowroom", 32);
*uParam0={
-53,07f, -1096,73f, 25,5f 
};
uParam0->f_68={
-53,07f, -1096,73f, 25,5f 
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
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "carshowroom_broken", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "carshowroom_boarded", 32);
uParam0->f_33=0;
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 173:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "shr_int", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "fakeint", 32);
uParam0->f_33=0;
*uParam0={
-59,7936f, -1098,784f, 27,2612f 
};
break;
case 180:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Shutter", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "", 32);
*uParam0={
23,9346f, -669,7552f, 30,8853f 
};
break;
case 181:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Hospitaldoorsanim", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "Hospitaldoorsfixed", 32);
StringCopy(&(uParam0->f_42), "v_hospital", 32);
uParam0->f_33=0;
*uParam0={
300,9423f, -586,1784f, 42,2919f 
};
break;
case 135:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_clean_apt", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 136:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 137:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_mess_C", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 138:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_sextoys_a", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 139:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_wade_shit", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 140:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_wade_sofa_A", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 141:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "layer_debra_pic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 142:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_torture", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 143:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_sofa_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_sofa_B", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 144:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "layer_whiskey", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 145:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "swap_mrJam_A", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_B", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 146:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "swap_mrJam_C", 32);
StringCopy(&(uParam0->f_42), "v_trevors", 32);
*uParam0={
-1157,129f, -1523,028f, 9,6327f 
};
break;
case 147:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "vb_30_emissive", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_murder", 32);
uParam0->f_33=0;
*uParam0={
-1150,039f, -1521,761f, 9,6331f 
};
break;
case 148:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "vb_30_crimetape", 32);
uParam0->f_33=0;
*uParam0={
-1150,039f, -1521,761f, 9,6331f 
};
break;
case 149:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "sheriff_cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
1856,029f, 3682,998f, 33,2675f 
};
break;
case 150:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "CS1_16_Sheriff_Cap", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-440,5073f, 6018,766f, 30,49f 
};
break;
case 151:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo", 32);
uParam0->f_33=0;
*uParam0={
487,31f, 5588,386f, 793,0532f 
};
break;
case 152:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "ufo_eye", 32);
uParam0->f_33=0;
*uParam0={
487,31f, 5588,386f, 793,0532f 
};
break;
case 153:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "V_57_FranklinStuff", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Franklin_LEFT", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 154:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_GangBandana", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 155:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_57_Safari", 32);
StringCopy(&(uParam0->f_42), "v_franklins", 32);
*uParam0={
-13,9623f, -1440,614f, 30,1015f 
};
break;
case 172:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "V_19_Trevor_Mess", 32);
StringCopy(&(uParam0->f_42), "v_strip3", 32);
*uParam0={
96,4811f, -1291,294f, 28,2688f 
};
break;
case 182:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
139,5795f, -3092,962f, 8,64631f 
};
uParam0->f_79={
Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_82={
Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_85={
Vector(8,64631f, -3092,962f, 139,5795f) - Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_88={
Vector(8,64631f, -3092,962f, 139,5795f) + Vector(4,1875f, 24f, 33,3125f) 
};
uParam0->f_91[0]=0;
uParam0->f_91[1]=1;
uParam0->f_91[2]=1;
break;
case 183:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
203,7784f, -3131,767f, 7,041344f 
};
uParam0->f_79={
Vector(7,041344f, -3131,767f, 203,7784f) - Vector(2,5625f, 2,75f, 4,875f) 
};
uParam0->f_82={
Vector(7,041344f, -3131,767f, 203,7784f) + Vector(2,5625f, 2,75f, 4,875f) 
};
break;
case 184:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
144,7706f, -2982,659f, 7,952507f 
};
uParam0->f_79={
Vector(7,952507f, -2982,659f, 144,7706f) - Vector(3,125f, 3,4375f, 5,3125f) 
};
uParam0->f_82={
Vector(7,952507f, -2982,659f, 144,7706f) + Vector(3,125f, 3,4375f, 5,3125f) 
};
break;
case 185:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1154,965f, -1520,983f, 9,132731f 
};
uParam0->f_79={
-1154,965f, -1520,983f, 9,132731f 
};
uParam0->f_82={
-1158,965f, -1524,983f, 11,63273f 
};
break;
case 187:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1052,204f, 371,9537f, 67,914f 
};
uParam0->f_79={
-1052,204f, 371,9537f, 67,914f 
};
uParam0->f_82={
-1048,064f, 368,0221f, 70,9128f 
};
break;
case 186:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
1954,984f, 3792,991f, 30,3086f 
};
uParam0->f_79={
1954,984f, 3792,991f, 30,3086f 
};
uParam0->f_82={
1983,45f, 3830,78f, 36,2726f 
};
break;
case 188:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=1;
*uParam0={
-1122,202f, 48,5724f, 51,4652f 
};
uParam0->f_79={
-1122,202f, 48,5724f, 51,4652f 
};
uParam0->f_82={
-1076,233f, 92,1041f, 60,0617f 
};
break;
case 81:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KorizTempWalls", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2199,138f, 223,4648f, 181,1118f 
};
break;
case 82:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "mic3_chopper_debris", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
-2242,785f, 263,4779f, 173,6154f 
};
break;
case 83:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "chemgrill_grp1", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
3832,9f, 3665,5f, -23,4f 
};
break;
case 84:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Plane_crash_trench", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
uParam0->f_33=0;
*uParam0={
2814,7f, 4758,5f, 47,9f 
};
break;
case 85:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "golfflags", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-1096,505f, 4,5754f, 49,8103f 
};
break;
case 86:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "yogagame", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
-781,6566f, 186,8937f, 71,8352f 
};
break;
case 189:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "Carwash_with_spinners", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "Carwash_without_spinners", 32);
uParam0->f_33=0;
*uParam0={
55,7f, -1391,3f, 30,5f 
};
break;
case 190:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "KT_CarWash", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "KT_CarWash_NoBrush", 32);
uParam0->f_33=0;
*uParam0={
700,091f, -933,641f, 20,308f 
};
break;
case 191:
uParam0->f_3=1;
*uParam0={
-1096,381f, -836,17f, 36,6755f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 192:
uParam0->f_3=1;
*uParam0={
449,6558f, -980,1375f, 42,6918f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 193:
uParam0->f_3=1;
*uParam0={
363,0175f, -1598,079f, 35,9502f 
};
uParam0->f_85={
*uParam0 - Vector(25f, 25f, 15f) 
};
uParam0->f_88={
*uParam0 + Vector(25f, 25f, 15f) 
};
uParam0->f_91[0]=1;
uParam0->f_91[1]=0;
break;
case 194:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "CS3_07_MPGates", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "", 32);
*uParam0={
-1601,424f, 2808,213f, 16,2598f 
};
break;
case 97:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "DT1_03_Gr_Closed", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "", 32);
*uParam0={
23,7318f, -647,2123f, 37,9549f 
};
break;
case 98:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "FINBANK", 32);
*uParam0={
12,9689f, -648,4698f, 9,7693f 
};
break;
case 99:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "PAPER1_RCM_ALT", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "PAPER1_RCM", 32);
*uParam0={
-1459,127f, 486,1281f, 115,2016f 
};
break;
case 100:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "SP1_10_fake_interior", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "SP1_10_real_interior", 32);
*uParam0={
-248,4916f, -2010,509f, 34,5743f 
};
break;
case 101:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "facelobbyfake", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "facelobby", 32);
*uParam0={
-1081,347f, -263,1502f, 38,7152f 
};
break;
case 195:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "atriumglstatic", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "atriumglmission", 32);
StringCopy(&(uParam0->f_8[2 /*8*/]), "atriumglcut", 32);
*uParam0={
136,1795f, -750,701f, 262,0516f 
};
break;
case 197:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "racetrack01", 32);
*uParam0={
2096f, 3168,7f, 42,9f 
};
break;
}
switch (iParam1){
case 156:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "showhome_only", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 157:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_unpacking", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 158:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "franklin_settled", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 163:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tshirt", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 159:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "bong_and_wine", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 161:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_flyer", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 162:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "progress_tux", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 160:
uParam0->f_3=2;
StringCopy(&(uParam0->f_8[0 /*8*/]), "locked", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "unlocked", 32);
StringCopy(&(uParam0->f_42), "v_franklinshouse", 32);
*uParam0={
7,0256f, 537,3075f, 175,0281f 
};
break;
case 96:
uParam0->f_3=1;
StringCopy(&(uParam0->f_8[0 /*8*/]), "", 32);
StringCopy(&(uParam0->f_8[1 /*8*/]), "chophillskennel", 32);
*uParam0={
19,0568f, 536,4818f, 169,6277f 
};
break;
}
return 1;
}


void func_226(){
func_251(85, 1);
}


void func_227(){
if(func_228(5) && func_228(6)){
func_194(1800466587, 1, 2, 49, 1920000, 10000, -1, 167, -1, 0, 1);
}}

int func_228(int iParam0){
if(iParam0==63 || iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113386.f_18574[iParam0 /*6*/], 3);
}


void func_229(){
func_251(84, 1);
}


void func_230(){
func_194(483349085, 1, 2, 49, 120000, 10000, -1, 165, -1, 0, 1);
}


void func_231(){
func_251(110, 1);
}


void func_232(){
if(func_234()){
func_233(1, 97, 500000, 0, 0);
}}


void func_233(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
if(func_64(iParam0)==3){
return;
}
if(func_64(iParam0)==4){
return;
}
func_31(func_64(iParam0), 1, iParam1, iParam2, 0);
if(bParam3){
iVar0=0;
if(bParam4){
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_random_peds");
break;
case 1:
iVar1=joaat("sp1_money_made_from_random_peds");
break;
case 2:
iVar1=joaat("sp2_money_made_from_random_peds");
break;
default:
return;
}}else{
switch (iParam0){
case 0:
iVar1=joaat("sp0_money_made_from_missions");
break;
case 1:
iVar1=joaat("sp1_money_made_from_missions");
break;
case 2:
iVar1=joaat("sp2_money_made_from_missions");
break;
default:
return;
}}
STATS::STAT_GET_INT(iVar1, &iVar0, -1);
iVar0=(iVar0 + iParam2);
STATS::STAT_SET_INT(iVar1, iVar0, true);
}}

int func_234(){
if(DLC::IS_DLC_PRESENT(-65181770)){
return 1;
}
return 0;
}


void func_235(){
var uVar0;
int iVar1;
int iVar2;
int iVar3;
bool bVar4;
int iVar5;
int iVar6;
int iVar7;
if(func_246(43)){
Global_113386.f_9085.f_99.f_58[81]=1;
uVar0=Global_78588.f_12526[22 /*2*/];
iVar1=Global_78588.f_12526[22 /*2*/].f_1;
iVar2=uVar0;
iVar3=-1;
bVar4=false;
while (iVar2 <=iVar1 && !bVar4){
if(Global_78588.f_6825[iVar2 /*3*/]==531432813){
iVar3=Global_78588.f_6825[iVar2 /*3*/].f_2;
iVar5=Global_78588.f_109[iVar3 /*4*/];
if(iVar5==128){
Global_113386.f_9085.f_2[22 /*3*/].f_1=iVar2;
bVar4=true;
}}
iVar2++;
}
iVar6=func_245(43);
iVar7=func_244(43);
func_239(iVar6);
func_236(Global_91193[iVar7 /*5*/]);
}}


void func_236(int iParam0){
int iVar0;
if(iParam0==-1){
return;
}
iVar0=func_238(iParam0);
if(iVar0==-1){
return;
}
func_237(iVar0);
}


void func_237(int iParam0){
Global_91193[iParam0 /*5*/]=-1;
Global_91193[iParam0 /*5*/].f_1=0;
Global_91193[iParam0 /*5*/].f_2=-1;
Global_91193[iParam0 /*5*/].f_3=-1;
Global_91193[iParam0 /*5*/].f_4=0;
}

int func_238(int iParam0){
int iVar0;
iVar0=0;
iVar0=0;
while (iVar0 < 7){
if(Global_91193[iVar0 /*5*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_239(int iParam0){
if((Global_97371 || func_243(0)) && Global_97372==iParam0){
return;
}
if(iParam0 < 0 || iParam0 > 7){
return;
}
if(!Global_97374[iParam0 /*17*/]){
return;
}
if(Global_97374[iParam0 /*17*/].f_9 !=263){
func_242(Global_97374[iParam0 /*17*/].f_9, 0, 0);
}
func_240(iParam0);
}


void func_240(int iParam0){
if(MISC::IS_BIT_SET(Global_97374[iParam0 /*17*/].f_10.f_1, 6)){
if(Global_96287 !=4 && Global_96287 !=5){
func_241(Global_97374[iParam0 /*17*/].f_5);
}}
if(MISC::IS_BIT_SET(Global_97374[iParam0 /*17*/].f_10.f_1, 7)){
if(Global_96287 !=4 && Global_96287 !=5){
func_241(Global_97374[iParam0 /*17*/].f_5);
}}
Global_97374[iParam0 /*17*/].f_1=0;
Global_97374[iParam0 /*17*/].f_3=-1;
Global_97374[iParam0 /*17*/].f_4=6;
Global_97374[iParam0 /*17*/].f_5=-1;
Global_97374[iParam0 /*17*/].f_6=-1;
Global_97374[iParam0 /*17*/].f_7=-1;
if(Global_97374[iParam0 /*17*/]){
if(Global_97374[iParam0 /*17*/].f_9 !=263){
if(Global_97374[iParam0 /*17*/].f_9 < 0 || Global_97374[iParam0 /*17*/].f_9 >=263){
}
func_242(Global_97374[iParam0 /*17*/].f_9, 0, 0);
}
Global_97374[iParam0 /*17*/].f_9=263;
}
Global_97374[iParam0 /*17*/]=0;
Global_97374[iParam0 /*17*/].f_8=-1;
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), false);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), true);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 2);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 3);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 6);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 7);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 8);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 9);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 10);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 11);
MISC::CLEAR_BIT(&(Global_97374[iParam0 /*17*/].f_10.f_1), 12);
}


void func_241(int iParam0){
if(iParam0 >=94){
return;
}
if(Global_96288 !=-1){
if(Global_96288 !=iParam0){
return;
}
Global_96288=-1;
Global_96287=0;
Global_96289=0;
}}


void func_242(int iParam0, bool bParam1, bool bParam2){
int iVar0;
int iVar1;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(!bParam2){
iVar1=MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 15);
if(iVar1==bParam1){
return;
}}
if(bParam1 !=MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 0)){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), false);
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 3);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), false);
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 15);
}
if(!MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 0)){
if(HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19)){
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
HUD::REMOVE_BLIP(&(Global_32338[iVar0 /*23*/].f_19));
MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
}}}

int func_243(int iParam0){
if(Global_43052==15){
return 0;
}
if(func_584(iParam0)){
return 0;
}
return 1;
}

int func_244(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 7){
if(Global_91193[iVar0 /*5*/] !=-1){
if(Global_78588.f_109[Global_91193[iVar0 /*5*/] /*4*/]==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}

int func_245(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 8){
if(Global_97374[iVar0 /*17*/].f_5==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}

int func_246(int iParam0){
int iVar0;
if(iParam0==94 || iParam0==-1){
return 0;
}
if(Global_94426[iParam0 /*2*/]){
return 1;
}
iVar0=0;
while (iVar0 < Global_91193){
if(Global_91193[iVar0 /*5*/] !=-1){
if(Global_78588.f_109[Global_91193[iVar0 /*5*/] /*4*/]==iParam0){
return 1;
}}
iVar0++;
}
return 0;
}


void func_247(){
ENTITY::REMOVE_MODEL_HIDE(-18,3539f, -1438,784f, 31,305f, 3f, joaat("v_ilev_frnkwarddr1"), false);
ENTITY::REMOVE_MODEL_HIDE(-18,3594f, -1438,133f, 31,305f, 3f, joaat("v_ilev_frnkwarddr2"), false);
}


void func_248(){
if(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 3)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), 3);
}elseif(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 4)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), 4);
}elseif(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 5)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), 5);
}}


void func_249(){
if(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 0)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), false);
}elseif(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 1)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), true);
}elseif(!MISC::IS_BIT_SET(Global_113386.f_7688.f_923, 2)){
MISC::SET_BIT(&(Global_113386.f_7688.f_923), 2);
}}


void func_250(){
bool bVar0;
bVar0=func_66();
if(func_17(bVar0)){
switch (bVar0){
case 0:
func_31(0, 1, 38, 60000, 0);
func_188(95, 0, 0);
break;
case 1:
func_31(1, 1, 38, 60000, 0);
func_188(95, 1, 0);
break;
case 2:
func_31(2, 1, 38, 60000, 0);
func_188(95, 2, 0);
break;
}}
func_13(-1199050901);
func_13(1082655975);
func_13(-2100435596);
}


void func_251(int iParam0, int iParam1){
if(iParam0==146 || iParam0==-1){
return;
}
if(Global_113386.f_9085.f_99.f_58[iParam0]==iParam1){
return;
}
Global_113386.f_9085.f_99.f_58[iParam0]=iParam1;
}


void func_252(){
int iVar0;
iVar0=func_253(1801771084);
if(iVar0 !=-1){
Global_113386.f_7688[iVar0 /*15*/].f_4=(MISC::GET_GAME_TIMER() + 100000);
}
iVar0=func_253(-1716308760);
if(iVar0 !=-1){
Global_113386.f_7688[iVar0 /*15*/].f_4=(MISC::GET_GAME_TIMER() + 100000);
}
func_384();
}

int func_253(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_136){
if(Global_113386.f_7688[iVar0 /*15*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_254(){
func_194(341684477, 1, 7, 45, 30000, 5000, -1, 0, -1, 0, 1);
}


void func_255(){
int iVar0;
iVar0=func_253(1635046052);
if(iVar0 !=-1){
Global_113386.f_7688.f_913=1;
Global_113386.f_7688.f_914=0;
Global_113386.f_7688.f_911=1635046052;
func_251(79, 1);
}
func_13(1635046052);
}


void func_256(){
if(func_257(59)){
func_194(1328556918, 0, 2, 0, 6000, 6000, -1, 142, -1, 262148, 1);
}}

int func_257(int iParam0){
if(iParam0==94 || iParam0==-1){
return 0;
}
return Global_113386.f_9085.f_330[iParam0 /*6*/];
}


void func_258(){
if(func_257(9)){
func_259(-1074970768, 0, 1, 31, 3, 6000, 6000, -1, -1, 142, -1, 1060);
}}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11){
struct<15> Var0;
bool bVar15;
if(func_11(0)){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6 < 0){
return 0;
}
if(iParam8==76){
return 0;
}
if(iParam9==235){
return 0;
}
if(bParam3 < 3){
if(MISC::IS_BIT_SET(iParam2, bParam3)){
return 0;
}}
if(iParam4 < 3){
if(iParam4 !=bParam3){
return 0;
}}
if(iParam2 < 1 || iParam2 > 7){
return 0;
}
if(Global_113386.f_7688.f_136 < 9){
Var0.f_0=iParam0;
if(Global_113386.f_7688.f_911==Var0.f_0){
Global_113386.f_7688.f_911=-1;
}
Var0.f_3=func_10(iParam1);
Var0.f_1=iParam11;
Var0.f_2=iParam2;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam5);
Var0.f_5=iParam6;
Var0.f_6=bParam3;
Var0.f_14=iParam4;
Var0.f_10=iParam7;
Var0.f_11=-1;
Var0.f_7=iParam8;
Var0.f_8=iParam9;
Var0.f_9=iParam10;
MISC::CLEAR_BIT(&(Var0.f_1), true);
MISC::CLEAR_BIT(&(Var0.f_1), false);
if(iParam7 !=-1){
MISC::SET_BIT(&(Var0.f_1), 11);
}elseif(iParam1==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/]={
Var0 
};
Global_113386.f_7688.f_136++;
bVar15=false;
while (bVar15 < 3){
if(MISC::IS_BIT_SET(iParam2, bVar15)){
func_16(bVar15);
}
bVar15++;
}
return 1;
}
return 0;
}


void func_260(){
func_251(51, 1);
}


void func_261(bool bParam0){
TASK::SET_SCENARIO_GROUP_ENABLED("LOST_BIKERS", bParam0);
if(bParam0){
MISC::SET_BIT(&(Global_113386.f_10016.f_25), 2);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_10016.f_25), 2);
}}


void func_262(bool bParam0){
func_242(109, bParam0, 0);
}


void func_263(bool bParam0){
func_242(97, bParam0, 0);
}


void func_264(int iParam0){
int iVar0;
int iVar1;
iVar0=iParam0;
iVar1=0;
while (iVar0 > 31){
iVar0=(iVar0 - 32);
iVar1++;
}
if(iVar1 < 3){
MISC::SET_BIT(&(Global_113386.f_20410.f_150[iVar1]), iVar0);
}}


void func_265(){
func_88(func_69(0), 12, 3, 1, 1);
func_88(func_69(0), 12, 12, 1, 1);
func_88(func_69(0), 12, 4, 1, 1);
func_88(func_69(0), 12, 11, 1, 1);
func_88(func_69(0), 12, 14, 1, 1);
func_88(func_69(0), 12, 15, 1, 1);
func_88(func_69(0), 12, 17, 1, 1);
func_88(func_69(0), 12, 23, 1, 1);
func_88(func_69(0), 12, 24, 1, 1);
func_88(func_69(1), 12, 5, 1, 1);
func_88(func_69(1), 12, 1, 1, 1);
func_88(func_69(1), 12, 4, 1, 1);
func_88(func_69(1), 12, 8, 1, 1);
func_88(func_69(1), 12, 10, 1, 1);
func_88(func_69(1), 8, 9, 1, 1);
func_88(func_69(2), 12, 3, 1, 1);
func_88(func_69(2), 12, 2, 1, 1);
func_88(func_69(2), 12, 7, 1, 1);
func_88(func_69(2), 12, 11, 1, 1);
func_88(func_69(2), 12, 13, 1, 1);
func_88(func_69(2), 12, 8, 1, 1);
}


void func_266(){
func_259(466185907, 1, 2, 14, 3, 200000, 180000, -1, -1, 0, -1, 0);
func_259(185453884, 1, 4, 14, 3, 350000, 180000, -1, -1, 0, -1, 0);
}


void func_267(){
Global_43604[12]=(MISC::GET_GAME_TIMER() + 120000);
}


void func_268(){
Global_43604[15]=(MISC::GET_GAME_TIMER() + 120000);
}


void func_269(){
Global_43604[14]=(MISC::GET_GAME_TIMER() + 120000);
}


void func_270(){
Global_43604[17]=(MISC::GET_GAME_TIMER() + 120000);
}


void func_271(){
if(!func_272(42)){
if(func_257(44)){
func_251(42, 1);
}elseif(func_257(40)){
func_251(42, 1);
}}}

int func_272(int iParam0){
if(iParam0==146 || iParam0==-1){
return 0;
}
return Global_113386.f_9085.f_99.f_58[iParam0];
}


void func_273(){
func_251(75, 1);
}


void func_274(){
if(func_66()==1){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_275(4, PLAYER::PLAYER_PED_ID());
}}}


void func_275(int iParam0, int iParam1){
int iVar0;
int iVar1;
bool bVar2;
if(!ENTITY::DOES_ENTITY_EXIST(iParam1)){
return;
}
if(func_276(iParam0, iParam1)){
return;
}
if(Global_41748[iParam0 /*31*/].f_24 < 5){
Global_41748[iParam0 /*31*/].f_25[Global_41748[iParam0 /*31*/].f_24]=iParam1;
Global_41748[iParam0 /*31*/].f_24++;
}else{
bVar2=false;
iVar0=0;
while (iVar0 < 5){
iVar1=Global_41748[iParam0 /*31*/].f_25[iVar0];
if(!ENTITY::DOES_ENTITY_EXIST(iVar1) || PED::IS_PED_INJURED(iVar1)){
Global_41748[iParam0 /*31*/].f_25[iVar0]=iParam1;
bVar2=true;
iVar0=6;
}
iVar0++;
}
if(!bVar2){
}}}

int func_276(int iParam0, int iParam1){
int iVar0;
iVar0=0;
while (iVar0 < Global_41748[iParam0 /*31*/].f_24){
if(iParam1==Global_41748[iParam0 /*31*/].f_25[iVar0]){
return 1;
}
iVar0++;
}
return 0;
}


void func_277(){
int iVar0;
int iVar1;
if(!func_257(74) || !func_257(75)){
if(func_257(60)){
iVar0=func_253(-749738207);
if(iVar0 !=-1){
iVar1=MISC::GET_GAME_TIMER() + 20000;
if(Global_113386.f_7688[iVar0 /*15*/].f_4 > iVar1){
Global_113386.f_7688[iVar0 /*15*/].f_4=iVar1;
}}
iVar0=func_278(1269300253);
if(iVar0 !=-1){
iVar1=MISC::GET_GAME_TIMER() + 20000;
if(Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 > iVar1){
Global_113386.f_7688.f_651[iVar0 /*14*/].f_4=iVar1;
}}}}}

int func_278(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < Global_113386.f_7688.f_764){
if(Global_113386.f_7688.f_651[iVar0 /*14*/]==iParam0){
return iVar0;
}
iVar0++;
}
return -1;
}


void func_279(){
int iVar0;
int iVar1;
if(!func_257(83)){
if(func_257(79)){
iVar0=func_278(2073240496);
if(iVar0 !=-1){
iVar1=MISC::GET_GAME_TIMER() + 25000;
if(Global_113386.f_7688.f_651[iVar0 /*14*/].f_4 > iVar1){
Global_113386.f_7688.f_651[iVar0 /*14*/].f_4=iVar1;
}}}}}


void func_280(){
int iVar0;
int iVar1;
if(!func_257(51)){
if(func_257(22)){
if(func_257(60)){
iVar0=func_253(-464957327);
if(iVar0 !=-1){
iVar1=MISC::GET_GAME_TIMER() + 25000;
if(Global_113386.f_7688[iVar0 /*15*/].f_4 > iVar1){
Global_113386.f_7688[iVar0 /*15*/].f_4=iVar1;
}}}}}}


void func_281(){
func_251(15, 1);
}


void func_282(){
int iVar0;
MISC::CLEAR_AREA(689,6588f, -962,4214f, 22,4975f, 25f, true, false, false, false);
if(!func_257(88)){
if(!func_246(88)){
iVar0=func_278(-270587643);
if(iVar0 !=-1){
func_13(-270587643);
func_251(15, 1);
}}}}


void func_283(){
if(!func_173(22)){
func_289(22, 1, 0);
func_289(23, 1, 0);
func_289(24, 1, 0);
func_289(25, 1, 0);
func_289(26, 1, 0);
func_289(27, 1, 0);
func_288(43);
func_284(43);
func_410("AM_H_TATTOO", 1, 3000, -1, 10000, 7, 0, 0, 0);
func_410("AM_H_SHOUT", 0, 20000, -1, 10000, 7, 0, 0, 0);
func_264(22);
}}


void func_284(int iParam0){
func_287(iParam0, 1, 0);
func_286(iParam0, 1);
func_285(iParam0, 1);
}


void func_285(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 4)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 4);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 4);
}
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}


void func_286(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 5)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 5);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 5);
}
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}


void func_287(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 6)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 6);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 6);
}
if(bParam2){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 11);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 11);
}
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}


void func_288(int iParam0){
int iVar0;
if(func_11(0)){
return;
}
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 9)){
return;
}
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 9);
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}


void func_289(int iParam0, bool bParam1, int iParam2){
if(bParam1){
if(!func_297(iParam0, 0, 0)){
if(iParam2 && Global_100493.f_18[iParam0]){
if(func_296(iParam0)==3 && !func_295(iParam0)){
func_294(iParam0);
func_293(iParam0, 0, 0);
func_291(iParam0, 1, 0);
func_290(iParam0);
}else{
func_293(iParam0, 1, 0);
func_290(iParam0);
}}else{
func_293(iParam0, 0, 0);
func_291(iParam0, 1, 0);
func_290(iParam0);
}}else{
func_291(iParam0, 1, 0);
func_290(iParam0);
}}elseif(func_297(iParam0, 0, 0)){
func_291(iParam0, 0, 0);
func_291(iParam0, 1, 0);
func_290(iParam0);
}}


void func_290(int iParam0){
Global_100493.f_196[iParam0]=1;
Global_100493.f_195=1;
}


void func_291(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::CLEAR_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_205()==0){
iVar0=func_43(func_292(iParam0), -1, 0);
MISC::CLEAR_BIT(&iVar0, bParam1);
func_37(func_292(iParam0), iVar0, -1, 1, 0);
}}else{
MISC::CLEAR_BIT(&(Global_113386.f_668[iParam0]), bParam1);
}}

int func_292(int iParam0){
switch (iParam0){
case 0:
return 828;
break;
case 1:
return 829;
break;
case 2:
return 830;
break;
case 3:
return 831;
break;
case 4:
return 832;
break;
case 5:
return 833;
break;
case 6:
return 834;
break;
case 7:
return 835;
break;
case 8:
return 836;
break;
case 9:
return 837;
break;
case 10:
return 838;
break;
case 11:
return 839;
break;
case 12:
return 840;
break;
case 13:
return 841;
break;
case 14:
return 842;
break;
case 15:
return 844;
break;
case 16:
return 845;
break;
case 17:
return 846;
break;
case 18:
return 847;
break;
case 19:
return 848;
break;
case 20:
return 849;
break;
case 21:
return 850;
break;
case 22:
return 851;
break;
case 23:
return 852;
break;
case 24:
return 853;
break;
case 25:
return 854;
break;
case 26:
return 855;
break;
case 27:
return 856;
break;
case 28:
return 857;
break;
case 29:
return 858;
break;
case 30:
return 859;
break;
case 31:
return 860;
break;
case 32:
return 861;
break;
case 33:
return 862;
break;
case 34:
return 863;
break;
case 35:
return 864;
break;
case 36:
return 865;
break;
case 37:
return 866;
break;
case 38:
return 867;
break;
case 39:
return 868;
break;
case 40:
return 872;
break;
case 41:
return 873;
break;
case 42:
return 874;
break;
case 43:
return 875;
break;
case 44:
return 11352;
break;
case 45:
return 3811;
break;
case 46:
return 5386;
break;
case 47:
return 6158;
break;
case 48:
return 7235;
break;
case 49:
return 7881;
break;
case 52:
return 8917;
break;
case 50:
return 8268;
break;
case 51:
return 8270;
break;
case 53:
return 9557;
break;
case 54:
return 9633;
break;
case 55:
return 9848;
break;
case 56:
return 9916;
break;
case 57:
return 9918;
break;
default:
break;
}
return 13122;
}


void func_293(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_100493.f_1393[iParam0]), iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_205()==0){
iVar0=func_43(func_292(iParam0), -1, 0);
MISC::SET_BIT(&iVar0, bParam1);
func_37(func_292(iParam0), iVar0, -1, 1, 0);
}}else{
MISC::SET_BIT(&(Global_113386.f_668[iParam0]), bParam1);
}}


void func_294(int iParam0){
if(Global_100493.f_18[iParam0]){
func_293(iParam0, 10, 1);
func_293(iParam0, 19, 1);
}}


bool func_295(int iParam0){
return func_297(iParam0, 5, 1);
}

int func_296(int iParam0){
switch (iParam0){
case -1:
return 6;
break;
case 0:
return 0;
break;
case 1:
return 0;
break;
case 2:
return 0;
break;
case 3:
return 0;
break;
case 4:
return 0;
break;
case 5:
return 0;
break;
case 6:
return 0;
break;
case 50:
return 0;
break;
case 7:
return 1;
break;
case 8:
return 1;
break;
case 9:
return 1;
break;
case 10:
return 1;
break;
case 11:
return 1;
break;
case 12:
return 1;
break;
case 13:
return 1;
break;
case 14:
return 1;
break;
case 15:
return 1;
break;
case 16:
return 1;
break;
case 17:
return 1;
break;
case 18:
return 1;
break;
case 19:
return 1;
break;
case 20:
return 1;
break;
case 21:
return 1;
break;
case 22:
return 2;
break;
case 23:
return 2;
break;
case 24:
return 2;
break;
case 25:
return 2;
break;
case 26:
return 2;
break;
case 27:
return 2;
break;
case 28:
return 3;
break;
case 29:
return 3;
break;
case 30:
return 3;
break;
case 31:
return 3;
break;
case 32:
return 3;
break;
case 33:
return 3;
break;
case 34:
return 3;
break;
case 35:
return 3;
break;
case 36:
return 3;
break;
case 37:
return 3;
break;
case 38:
return 3;
break;
case 39:
return 4;
break;
case 40:
return 4;
break;
case 41:
return 4;
break;
case 42:
return 4;
break;
case 43:
return 4;
break;
case 44:
return 4;
break;
case 45:
return 5;
break;
case 46:
return 3;
break;
case 47:
return 3;
break;
case 48:
return 3;
break;
case 49:
return 3;
break;
case 52:
return 3;
break;
case 51:
return 1;
break;
case 53:
return 3;
break;
case 54:
return 2;
break;
case 55:
return 1;
break;
case 56:
return 3;
break;
case 57:
return 1;
break;
}
return 6;
}

int func_297(int iParam0, int iParam1, bool bParam2){
if(iParam0==-1){
return 0;
}
if(bParam2){
return MISC::IS_BIT_SET(Global_100493.f_1393[iParam0], iParam1);
}elseif(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(func_205()==0){
return MISC::IS_BIT_SET(func_43(func_292(iParam0), -1, 0), iParam1);
}}else{
return MISC::IS_BIT_SET(Global_113386.f_668[iParam0], iParam1);
}
return 0;
}


void func_298(){
func_300(1);
func_299(0);
func_251(60, 1);
}


void func_299(bool bParam0){
int iVar0;
int iVar1;
if(!bParam0==Global_38389){
iVar0=0;
iVar0=0;
while (iVar0 < 263){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
iVar0++;
}
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
}
Global_38389=bParam0;
HUD::SET_MINIMAP_IN_PROLOGUE(bParam0);
iVar1=ZONE::GET_ZONE_FROM_NAME_ID("PrLog");
ZONE::SET_ZONE_ENABLED(iVar1, bParam0);
}


void func_300(int iParam0){
struct<3> Var0;
bool bVar3;
float fVar4;
int iVar5;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_302(1);
PLAYER::REMOVE_PLAYER_HELMET(PLAYER::GET_PLAYER_INDEX(), true);
if(iParam0==1){
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
iVar5=0;
Var0.f_2=(Var0.f_2 + 1,5f);
bVar3=WATER::TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(Var0, 1, &fVar4);
if(bVar3==1){
iVar5=1;
}elseif(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())){
iVar5=1;
}
if(iVar5==1){
Var0.f_2=(fVar4 + 10f);
ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0, true, false, false, true);
}elseif(bVar3==2){
}}
func_301(1);
}}


void func_301(int iParam0){
bool bVar0;
int iVar1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iParam0==1){
MISC::SET_BIT(&(Global_100441.f_20), 15);
TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::FREEZE_ENTITY_POSITION(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true);
}else{
if(!PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID())){
if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
ENTITY::DETACH_ENTITY(PLAYER::PLAYER_PED_ID(), true, true);
}}
if(!ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), true);
}}}elseif(MISC::IS_BIT_SET(Global_100441.f_20, 15)){
bVar0=false;
if(ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID())){
iVar1=ENTITY::GET_ENTITY_ATTACHED_TO(PLAYER::PLAYER_PED_ID());
if(ENTITY::DOES_ENTITY_EXIST(iVar1)){
if(!VEHICLE::IS_THIS_MODEL_A_BOAT(ENTITY::GET_ENTITY_MODEL(iVar1))){
ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
bVar0=true;
}}}
if(!bVar0){
ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
}
MISC::CLEAR_BIT(&(Global_100441.f_20), 15);
}}}


void func_302(int iParam0){
struct<3> Var0;
if(iParam0==1){
if(!MISC::IS_BIT_SET(Global_100441.f_20, 19)){
ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), true);
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
PED::SET_PED_CAN_BE_SHOT_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), false);
}
ENTITY::SET_ENTITY_CAN_BE_DAMAGED(PLAYER::PLAYER_PED_ID(), false);
ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(PLAYER::PLAYER_PED_ID(), true);
ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), false, false);
}
ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(PLAYER::PLAYER_PED_ID());
WEAPON::CLEAR_ENTITY_LAST_WEAPON_DAMAGE(PLAYER::PLAYER_PED_ID());
Var0={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
MISC::CLEAR_AREA(Var0, 100f, true, false, false, false);
MISC::SET_BIT(&(Global_100441.f_20), 19);
}}elseif(MISC::IS_BIT_SET(Global_100441.f_20, 19)){
func_303();
MISC::CLEAR_BIT(&(Global_100441.f_20), 19);
}}


void func_303(){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
if(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
}
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
}}


void func_304(){
func_13(-128912482);
func_13(-131238069);
func_13(-330732224);
if(func_272(28) && func_272(29)){
func_251(36, 1);
}}


void func_305(){
func_13(2095586439);
func_13(1608868018);
func_13(1134611425);
func_13(187813079);
func_13(-39544602);
func_13(-997367701);
func_306("AM_H_GAUNT_R", 1);
func_251(29, 1);
if(func_272(28)){
func_251(36, 1);
}}


void func_306(char* sParam0, int iParam1){
int iVar0;
int iVar1;
if(Global_112026 && iParam1){
if(func_310(sParam0) && !HUD::IS_HELP_MESSAGE_FADING_OUT()){
HUD::CLEAR_HELP(false);
}}
iVar0=0;
while (iVar0 < Global_113386.f_20410.f_145){
if(MISC::ARE_STRINGS_EQUAL(sParam0, &(Global_113386.f_20410[iVar0 /*16*/]))){
iVar1=iVar0;
while (iVar1 <=(Global_113386.f_20410.f_145 - 2)){
func_309(iVar1, iVar1 + 1);
iVar1++;
}
func_308((Global_113386.f_20410.f_145 - 1));
Global_113386.f_20410.f_145=(Global_113386.f_20410.f_145 - 1);
func_307();
return;
}
iVar0++;
}}


void func_307(){
int iVar0;
iVar0=0;
while (iVar0 < 3){
Global_113386.f_20410.f_146[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < Global_113386.f_20410.f_145){
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 0)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[0]){
Global_113386.f_20410.f_146[0]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 1)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[1]){
Global_113386.f_20410.f_146[1]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
if(MISC::IS_BIT_SET(Global_113386.f_20410[iVar0 /*16*/].f_11, 2)){
if(Global_113386.f_20410[iVar0 /*16*/].f_12 > Global_113386.f_20410.f_146[2]){
Global_113386.f_20410.f_146[2]=Global_113386.f_20410[iVar0 /*16*/].f_12;
}}
iVar0++;
}}


void func_308(int iParam0){
StringCopy(&(Global_113386.f_20410[iParam0 /*16*/]), "", 16);
StringCopy(&(Global_113386.f_20410[iParam0 /*16*/].f_4), "", 16);
Global_113386.f_20410[iParam0 /*16*/].f_8=0;
Global_113386.f_20410[iParam0 /*16*/].f_9=0;
Global_113386.f_20410[iParam0 /*16*/].f_11=0;
Global_113386.f_20410[iParam0 /*16*/].f_10=-1;
Global_113386.f_20410[iParam0 /*16*/].f_12=0;
Global_113386.f_20410[iParam0 /*16*/].f_13=0;
Global_113386.f_20410[iParam0 /*16*/].f_14=0;
Global_113386.f_20410[iParam0 /*16*/].f_15=0;
}


void func_309(int iParam0, int iParam1){
Global_113386.f_20410[iParam0 /*16*/]={
Global_113386.f_20410[iParam1 /*16*/] 
};
Global_113386.f_20410[iParam0 /*16*/].f_4={
Global_113386.f_20410[iParam1 /*16*/].f_4 
};
Global_113386.f_20410[iParam0 /*16*/].f_8=Global_113386.f_20410[iParam1 /*16*/].f_8;
Global_113386.f_20410[iParam0 /*16*/].f_10=Global_113386.f_20410[iParam1 /*16*/].f_10;
Global_113386.f_20410[iParam0 /*16*/].f_9=Global_113386.f_20410[iParam1 /*16*/].f_9;
Global_113386.f_20410[iParam0 /*16*/].f_11=Global_113386.f_20410[iParam1 /*16*/].f_11;
Global_113386.f_20410[iParam0 /*16*/].f_12=Global_113386.f_20410[iParam1 /*16*/].f_12;
Global_113386.f_20410[iParam0 /*16*/].f_13=Global_113386.f_20410[iParam1 /*16*/].f_13;
Global_113386.f_20410[iParam0 /*16*/].f_14=Global_113386.f_20410[iParam1 /*16*/].f_14;
Global_113386.f_20410[iParam0 /*16*/].f_15=Global_113386.f_20410[iParam1 /*16*/].f_15;
}


bool func_310(char* sParam0){
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sParam0);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_311(){
func_13(-1631047976);
func_13(962970051);
func_13(-1323797481);
func_306("AM_H_GAUNT_R", 1);
}


void func_312(){
func_13(-1980743701);
func_13(1567521709);
func_13(-1687842043);
func_306("AM_H_GAUNT_R", 1);
}


void func_313(){
func_13(-553769964);
func_13(-1434443191);
func_13(-2032593637);
func_13(-458789713);
func_13(321648831);
func_13(312697495);
func_251(28, 1);
if(func_272(29)){
func_251(36, 1);
}}


void func_314(){
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
}}

int func_315(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12){
struct<15> Var0;
int iVar15;
if(func_11(0)){
return 0;
}
if(iParam8 < 0){
return 0;
}
if(iParam9 < 0){
return 0;
}
if(iParam10==76){
return 0;
}
if(iParam11==235){
return 0;
}
if(iParam6==bParam5){
return 0;
}
if(((bParam5 !=144 && bParam5 !=0) && bParam5 !=1) && bParam5 !=2){
return 0;
}
if(Global_113386.f_7688.f_136 < 9){
Var0.f_0=iParam0;
Var0.f_10=iParam1;
Var0.f_11=iParam2;
Var0.f_9=iParam3;
if(Global_113386.f_7688.f_911==Var0.f_0){
Global_113386.f_7688.f_911=-1;
}
Var0.f_3=func_10(iParam4);
Var0.f_5=iParam9;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam8);
Var0.f_1=iParam12;
iVar15=0;
MISC::SET_BIT(&iVar15, bParam5);
Var0.f_2=iVar15;
Var0.f_6=iParam6;
Var0.f_14=iParam7;
Var0.f_7=iParam10;
Var0.f_8=iParam11;
MISC::SET_BIT(&(Var0.f_1), false);
MISC::SET_BIT(&(Var0.f_1), 13);
MISC::CLEAR_BIT(&(Var0.f_1), true);
if(iParam4==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/]={
Var0 
};
Global_113386.f_7688.f_136++;
func_16(bParam5);
return 1;
}
return 0;
}


void func_316(){
if(func_257(79)){
if(Global_113386.f_9085.f_99.f_58[34]){
func_315(187813079, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(-39544602, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1028);
func_315(-997367701, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1028);
}else{
func_315(187813079, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}}elseif(Global_113386.f_9085.f_99.f_58[34]){
func_315(187813079, 94848458, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, 94848458, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, 94848458, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}else{
func_315(187813079, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-39544602, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 112, 1024);
func_315(-997367701, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 112, 1024);
}}


void func_317(){
int iVar0;
iVar0=0;
if(func_257(80)){
iVar0++;
}
if(func_257(81)){
iVar0++;
}
if(func_257(82)){
iVar0++;
}
if(iVar0==1){
func_318(-1980743701, 0, 0, 12, 3, 6000, 6000, -1, 110, 0, 1024);
func_318(1567521709, 0, 1, 12, 3, 6000, 6000, -1, 110, 0, 1024);
func_318(-1687842043, 0, 2, 12, 3, 6000, 6000, -1, 110, 0, 1024);
}elseif(iVar0==2){
func_318(-1631047976, 0, 0, 12, 3, 6000, 6000, -1, 111, 0, 1024);
func_318(962970051, 0, 1, 12, 3, 6000, 6000, -1, 111, 0, 1024);
func_318(-1323797481, 0, 2, 12, 3, 6000, 6000, -1, 111, 0, 1024);
}elseif(iVar0==3){
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
}}

int func_318(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10){
struct<15> Var0;
int iVar15;
if(func_11(0)){
return 0;
}
if(iParam5 < 0){
return 0;
}
if(iParam6 < 0){
return 0;
}
if(iParam7==76){
return 0;
}
if(iParam8==235){
return 0;
}
if(iParam3==bParam2){
return 0;
}
if(((bParam2 !=144 && bParam2 !=0) && bParam2 !=1) && bParam2 !=2){
return 0;
}
if(Global_113386.f_7688.f_136 < 9){
Var0.f_0=iParam0;
if(Global_113386.f_7688.f_911==Var0.f_0){
Global_113386.f_7688.f_911=-1;
}
Var0.f_3=func_10(iParam1);
Var0.f_5=iParam6;
Var0.f_4=(MISC::GET_GAME_TIMER() + iParam5);
Var0.f_1=iParam10;
iVar15=0;
MISC::SET_BIT(&iVar15, bParam2);
Var0.f_2=iVar15;
Var0.f_6=iParam3;
Var0.f_14=iParam4;
Var0.f_10=-1;
Var0.f_11=-1;
Var0.f_7=iParam7;
Var0.f_8=iParam8;
Var0.f_9=iParam9;
MISC::SET_BIT(&(Var0.f_1), false);
MISC::CLEAR_BIT(&(Var0.f_1), true);
if(iParam1==0){
MISC::SET_BIT(&(Var0.f_1), 10);
}
Global_113386.f_7688[Global_113386.f_7688.f_136 /*15*/]={
Var0 
};
Global_113386.f_7688.f_136++;
func_16(bParam2);
return 1;
}
return 0;
}


void func_319(){
if(func_257(83)){
if(Global_113386.f_9085.f_99.f_58[34]){
func_315(-458789713, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(321648831, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(312697495, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
}else{
func_315(-458789713, -1394105734, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -1394105734, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -1394105734, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}}elseif(Global_113386.f_9085.f_99.f_58[34]){
func_315(-458789713, -1106471007, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -1106471007, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -1106471007, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}else{
func_315(-458789713, -211946295, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(321648831, -211946295, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(312697495, -211946295, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}}


void func_320(){
if((func_257(80) && func_257(81)) && func_257(82)){
func_315(-553769964, -1334144471, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(-1434443191, -1334144471, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1028);
func_315(-2032593637, -1334144471, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1028);
}else{
func_315(-553769964, -268883259, -1, 0, 0, 0, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(-1434443191, -268883259, -1, 0, 0, 1, 12, 3, 6000, 6000, -1, 109, 1024);
func_315(-2032593637, -268883259, -1, 0, 0, 2, 12, 3, 6000, 6000, -1, 109, 1024);
}}


void func_321(){
func_251(30, 1);
Global_97358=1;
}


void func_322(){
int iVar0;
int iVar1;
iVar0=func_325(4, 4);
if((iVar0 !=0 && iVar0 !=15) && func_324(iVar0)==2){
iVar1=60000;
switch (func_323(iVar0)){
case 2:
func_2(692693384, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
break;
case 1:
func_2(1209844154, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
break;
case 0:
func_2(-1144971313, 1, 7, 12, iVar1, 10000, -1, 103, -1, 4);
break;
}}elseif(!func_11(0)){}}

int func_323(int iParam0){
return Global_113386.f_1.f_73[iParam0 /*3*/];
}

int func_324(int iParam0){
return Global_96316[iParam0 /*5*/];
}

int func_325(int iParam0, int iParam1){
int iVar0;
iVar0=func_326(func_327(iParam0));
if(iVar0 < 0){
return 15;
}
if(iVar0 >=10){
return 15;
}
return Global_113386.f_1.f_12[iVar0 /*6*/][iParam1];
}

int func_326(int iParam0){
if(iParam0==13 || iParam0==-1){
return 0;
}
return Global_113386.f_9085.f_99.f_205[iParam0];
}

int func_327(int iParam0){
switch (iParam0){
case 0:
return 7;
break;
case 1:
return 8;
break;
case 2:
return 9;
break;
case 3:
return 10;
break;
case 4:
return 11;
break;
}
return -1;
}


void func_328(){
switch (func_326(7)){
case 1:
break;
case 2:
func_88(func_69(0), 12, 31, 1, 1);
func_88(func_69(1), 12, 22, 1, 1);
break;
}}


void func_329(){
if(HUD::DOES_BLIP_EXIST(Global_77137.f_208[14])){
HUD::SET_BLIP_FLASHES(Global_77137.f_208[14], true);
HUD::SET_BLIP_FLASH_TIMER(Global_77137.f_208[14], 10000);
}
func_410("AM_H_LHNGR", 2, 1000, -1, 10000, 7, 0, 0, 0);
}


void func_330(int iParam0, bool bParam1, bool bParam2){
if(iParam0==-1){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113386.f_32749[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_32749[iParam0]), bParam1);
}}


void func_331(){
func_332(2, 1);
}


void func_332(bool bParam0, bool bParam1){
int iVar0;
char* sVar1;
MISC::SET_BIT(&(Global_113386.f_1.f_116), iParam0);
switch (bParam0){
case 10:
MISC::SET_BIT(&(Global_113386.f_1.f_119), 14);
break;
case 13:
MISC::SET_BIT(&(Global_113386.f_1.f_119), 16);
break;
case 12:
MISC::SET_BIT(&(Global_113386.f_1.f_119), 15);
break;
case 11:
MISC::SET_BIT(&(Global_113386.f_1.f_119), 17);
break;
}
if(!bParam1){
iVar0=0;
switch (func_324(bParam0)){
case 1:
iVar0=6;
break;
case 3:
iVar0=4;
break;
case 2:
iVar0=5;
break;
}
sVar1=func_334(bParam0);
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("FEED_CREW_U");
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_334(bParam0));
HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(sVar1, sVar1, false, iVar0, "", 0);
if(!func_173(45)){
func_410("AM_H_CREWU", 2, 0, 20000, 10000, func_333(), 0, 131, 0);
}}}

int func_333(){
func_67();
switch (Global_113386.f_2363.f_539.f_4321){
case 0:
return 1;
break;
case 1:
return 2;
break;
case 2:
return 4;
break;
}
return 0;
}


var func__334(int iParam0){
return func_335(iParam0);
}


char* func_335(int iParam0){
switch (iParam0){
case 1:
return "HC_N_GUS";
break;
case 2:
return "HC_N_KAR";
break;
case 10:
return "HC_N_PAC";
break;
case 11:
return "HC_N_CHE";
break;
case 3:
return "HC_N_HUG";
break;
case 4:
return "HC_N_NOR";
break;
case 5:
return "HC_N_DAR";
break;
case 6:
return "HC_N_PAI";
break;
case 7:
return "HC_N_CHR";
break;
case 12:
return "HC_N_RIC";
break;
case 8:
return "HC_N_EDD";
break;
case 13:
return "HC_N_TAL";
break;
case 9:
return "HC_N_KRM";
break;
}
return "ERROR!";
}


void func_336(){
func_332(3, 1);
}


void func_337(){
func_332(5, 1);
}


void func_338(){
func_412(57, 1);
func_339(57);
func_251(109, 1);
}


void func_339(int iParam0){
if(iParam0==-1){
return;
}
Global_77137[iParam0]=0;
Global_77137.f_69[iParam0]=0;
}


void func_340(){
func_288(158);
func_288(159);
func_242(158, 1, 0);
func_242(159, 1, 0);
func_342(158, 5);
func_342(159, 5);
func_341(158);
func_341(159);
}


void func_341(int iParam0){
func_287(iParam0, 0, 0);
func_286(iParam0, 1);
func_285(iParam0, 1);
}


void func_342(int iParam0, int iParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(Global_32338[iVar0 /*23*/].f_16==iParam1){
return;
}
Global_32338[iVar0 /*23*/].f_16=iParam1;
switch (iParam1){
case 1:
Global_32338[iVar0 /*23*/].f_12[0]=40;
break;
case 3:
Global_32338[iVar0 /*23*/].f_12[0]=60;
break;
}
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
}


void func_343(){
func_288(156);
func_288(157);
func_242(156, 1, 0);
func_242(157, 1, 0);
func_342(156, 5);
func_342(157, 5);
}


void func_344(){
func_288(161);
func_288(160);
func_242(161, 1, 0);
func_242(160, 1, 0);
}


void func_345(){
int iVar0;
var uVar1;
if(!func_11(0)){
STATS::STAT_GET_FLOAT(joaat("sp0_dist_running"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2355[0]=uVar1;
STATS::STAT_GET_INT(joaat("sp0_unarmed_hits"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2359[0]=iVar0;
STATS::STAT_GET_INT(joaat("sp0_number_near_miss"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2363[0]=iVar0;
STATS::STAT_GET_FLOAT(joaat("sp0_dist_walk_st"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2367[0]=uVar1;
STATS::STAT_GET_INT(joaat("sp0_kills_stealth"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2371[0]=iVar0;
STATS::STAT_GET_INT(joaat("sp0_hits_mission"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2375[0]=iVar0;
STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2379[0]=(iVar0 - Global_113386.f_2363.f_539.f_2375[0]);
STATS::STAT_GET_FLOAT(joaat("sp1_dist_running"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2355[1]=uVar1;
STATS::STAT_GET_INT(joaat("sp1_unarmed_hits"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2359[1]=iVar0;
STATS::STAT_GET_INT(joaat("sp1_number_near_miss"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2363[1]=iVar0;
STATS::STAT_GET_FLOAT(joaat("sp1_dist_walk_st"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2367[1]=uVar1;
STATS::STAT_GET_INT(joaat("sp1_kills_stealth"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2371[1]=iVar0;
STATS::STAT_GET_INT(joaat("sp1_hits_mission"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2375[1]=iVar0;
STATS::STAT_GET_INT(joaat("sp0_hits_peds_vehicles"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2379[1]=(iVar0 - Global_113386.f_2363.f_539.f_2375[1]);
STATS::STAT_GET_FLOAT(joaat("sp2_dist_running"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2355[2]=uVar1;
STATS::STAT_GET_INT(joaat("sp2_unarmed_hits"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2359[2]=iVar0;
STATS::STAT_GET_INT(joaat("sp2_number_near_miss"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2363[2]=iVar0;
STATS::STAT_GET_FLOAT(joaat("sp2_dist_walk_st"), &uVar1, -1);
Global_113386.f_2363.f_539.f_2367[2]=uVar1;
STATS::STAT_GET_INT(joaat("sp2_kills_stealth"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2371[2]=iVar0;
STATS::STAT_GET_INT(joaat("sp2_hits_mission"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2375[2]=iVar0;
STATS::STAT_GET_INT(joaat("sp2_hits_peds_vehicles"), &iVar0, -1);
Global_113386.f_2363.f_539.f_2379[2]=(iVar0 - Global_113386.f_2363.f_539.f_2375[2]);
}}


void func_346(bool bParam0){
func_63();
if(!Global_113386.f_20564.f_232 && func_83(53)){
Global_60328[0]=4000;
Global_113386.f_20564.f_233[0 /*69*/]=0;
Global_113386.f_20564.f_233[0 /*69*/].f_1=0;
Global_60328[1]=4000;
Global_113386.f_20564.f_233[1 /*69*/]=0;
Global_113386.f_20564.f_233[1 /*69*/].f_1=0;
Global_60328[2]=4000;
Global_113386.f_20564.f_233[2 /*69*/]=0;
Global_113386.f_20564.f_233[2 /*69*/].f_1=0;
func_33(2);
func_33(0);
func_33(1);
func_31(2, 1, 36, 22300, 0);
func_31(2, 0, 13, 678, 0);
func_31(2, 1, 36, 45200, 0);
func_31(2, 0, 6, 200, 0);
func_31(2, 0, 4, 12, 0);
func_31(2, 0, 4, 14, 0);
func_31(2, 0, 8, 280, 0);
func_31(2, 1, 36, 30200, 0);
func_31(2, 0, 13, 185, 0);
func_31(1, 0, 5, 45, 0);
func_31(1, 0, 10, 400, 0);
func_31(1, 0, 11, 19, 0);
func_31(1, 0, 7, 149, 0);
func_31(1, 0, 4, 19, 0);
func_31(0, 0, 4, 19, 0);
func_31(0, 0, 7, 2313, 0);
func_31(0, 0, 5, 20, 0);
func_31(0, 0, 9, 5633, 0);
func_31(0, 0, 12, 700, 0);
STATS::STAT_SET_INT(joaat("sp0_money_total_spent"), 0, true);
STATS::STAT_SET_INT(joaat("sp1_money_total_spent"), 0, true);
STATS::STAT_SET_INT(joaat("sp2_money_total_spent"), 0, true);
Global_60328[2]=10666;
Global_60328[0]=3085;
Global_60328[1]=1178;
Global_113386.f_20564.f_232=1;
}
if(bParam0){
Global_60328[2]=108654;
Global_60328[0]=7860;
Global_60328[1]=78;
}
func_33(2);
func_33(0);
func_33(1);
}


void func_347(){
func_13(-2116452823);
func_13(1880611494);
func_251(41, 1);
}


void func_348(){
func_289(7, 1, 0);
func_289(8, 1, 0);
func_289(9, 1, 0);
func_289(10, 1, 0);
func_289(11, 1, 0);
func_289(12, 1, 0);
func_289(13, 1, 0);
func_289(14, 1, 0);
func_289(15, 1, 0);
func_289(16, 1, 0);
func_289(17, 1, 0);
func_289(18, 1, 0);
func_289(19, 1, 0);
func_289(20, 1, 0);
func_284(26);
}


void func_349(){
func_233(2, 36, 62680, 0, 0);
}


void func_350(){
func_351(1, 1);
func_251(11, 1);
}

int func_351(bool bParam0, bool bParam1){
if(!func_353() && func_17(bParam0)){
if(!func_352(bParam0) || NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
Global_97919.f_45=bParam0;
Global_97919.f_46=0;
Global_97919.f_44=1;
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(bParam1){
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
}
MISC::CLEAR_AREA_OF_PROJECTILES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 5f, 0);
}
return 1;
}}
return 0;
}


bool func_352(bool bParam0){
func_67();
return bParam0==Global_113386.f_2363.f_539.f_4321;
}

int func_353(){
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return Global_97919.f_44==1;
}
return 0;
}


void func_354(){
if(func_355(0) >=22000){
func_30(0, 35, 22000);
}else{
func_30(0, 35, func_355(0));
}}

int func_355(int iParam0){
return Global_60328[iParam0];
}


void func_356(){
if(func_355(0) >=9500){
func_30(0, 34, 9500);
}else{
func_30(0, 34, func_355(0));
}}


void func_357(){
int iVar0;
if(func_355(0) >=7500){
func_30(0, 33, 5000);
}else{
iVar0=SYSTEM::ROUND((IntToFloat(func_355(0)) * 0,8f));
if(iVar0 > 5000){
iVar0=5000;
}
func_30(0, 33, iVar0);
}}


void func_358(){
int iVar0;
if(func_355(0) >=5500){
func_30(0, 34, 3000);
}else{
iVar0=SYSTEM::ROUND((IntToFloat(func_355(0)) * 0,8f));
if(iVar0 > 3000){
iVar0=3000;
}
func_30(0, 34, iVar0);
}}


void func_359(){
int iVar0;
int iVar1;
int iVar2;
iVar0=Global_113386.f_1.f_126[4 /*23*/].f_2[0];
if(iVar0==0){
iVar0=12000000;
}
iVar1=Global_113386.f_1.f_126[4 /*23*/].f_2[1];
if(iVar1==0){
iVar1=12000000;
}
iVar2=Global_113386.f_1.f_126[4 /*23*/].f_2[2];
if(iVar2==0){
iVar2=12000000;
}
if(func_372(7)){
func_364(7, 0);
}elseif(!func_363(7)){
func_360(7, 0);
}
if(func_372(8)){
func_364(8, 0);
}elseif(!func_363(8)){
func_360(8, 0);
}
if(func_272(136)){
func_31(0, 1, 32, SYSTEM::ROUND((IntToFloat(iVar0) + (IntToFloat(iVar2) / 2f))), 0);
func_31(1, 1, 32, SYSTEM::ROUND((IntToFloat(iVar1) + (IntToFloat(iVar2) / 2f))), 0);
}elseif(func_272(135)){
func_31(1, 1, 32, iVar1, 0);
func_31(2, 1, 32, iVar2, 0);
}else{
func_31(0, 1, 32, iVar0, 0);
func_31(1, 1, 32, iVar1, 0);
func_31(2, 1, 32, iVar2, 0);
}}


void func_360(int iParam0, bool bParam1){
func_361(iParam0, bParam1);
}


void func_361(int iParam0, bool bParam1){
Global_44248=1;
if(!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1){
Global_47582[iParam0 /*46*/]=1;
func_364(iParam0, bParam1);
}else{
func_362(iParam0);
func_361(iParam0, bParam1);
}}


void func_362(int iParam0){
Global_47582[iParam0 /*46*/]=0;
Global_47582[iParam0 /*46*/].f_31=0;
Global_47582[iParam0 /*46*/].f_42=0;
Global_47582[iParam0 /*46*/].f_45=0;
Global_47582[iParam0 /*46*/].f_43=0;
Global_47582[iParam0 /*46*/].f_1=0;
}


bool func_363(int iParam0){
return Global_47582[iParam0 /*46*/].f_1;
}


void func_364(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
if(!Global_47582[iParam0 /*46*/] && !Global_47582[iParam0 /*46*/].f_1){
return;
}
if(Global_47582[iParam0 /*46*/].f_31==Global_47582[iParam0 /*46*/].f_30){
iVar0=(Global_47582[iParam0 /*46*/].f_42 - 1);
if(iVar0 < 0){
return;
}
if(Global_44257[Global_47582[iParam0 /*46*/].f_32[iVar0] /*12*/].f_4==0){
Global_47582[iParam0 /*46*/].f_1=1;
}
return;
}
if(Global_47582[iParam0 /*46*/].f_1){
return;
}
iVar1=Global_47582[iParam0 /*46*/].f_8[Global_47582[iParam0 /*46*/].f_31];
Global_47582[iParam0 /*46*/].f_31++;
func_371(iParam0, iVar1);
Global_47582[iParam0 /*46*/].f_45=Global_44257[iVar1 /*12*/].f_10;
Global_47582[iParam0 /*46*/].f_43=Global_44257[iVar1 /*12*/].f_11;
iVar2=Global_47582[iParam0 /*46*/].f_2;
func_365(Global_44257[iVar1 /*12*/].f_3, iParam0, 0, 0, bParam1);
iVar3=0;
while (iVar3 < iVar2){
if(Global_47582[iParam0 /*46*/].f_3[iVar3] !=Global_44257[iVar1 /*12*/].f_2 && Global_47582[iParam0 /*46*/].f_3[iVar3] !=Global_44257[iVar1 /*12*/].f_3){
func_365(Global_47582[iParam0 /*46*/].f_3[iVar3], iParam0, 0, 0, bParam1);
}
iVar3++;
}
if(Global_47582[iParam0 /*46*/].f_31==Global_47582[iParam0 /*46*/].f_30){
if(Global_44257[Global_47582[iParam0 /*46*/].f_32[(Global_47582[iParam0 /*46*/].f_42 - 1)] /*12*/].f_4==0){
Global_47582[iParam0 /*46*/].f_1=1;
return;
}}}


void func_365(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4){
int iVar0;
int iVar1;
int iVar2;
struct<16> Var3;
int iVar19;
int iVar20;
bool bVar21;
bool bVar22;
int iVar23;
int iVar24;
int iVar25;
int iVar26;
if(!iParam0 < 3){
return;
}
iVar0=-1;
StringCopy(&Var3, "UNSET", 64);
if(!bParam2){
iVar19=(Global_47582[iParam1 /*46*/].f_42 - 1);
if(iVar19 < 0){
return;
}
iVar20=Global_47582[iParam1 /*46*/].f_32[iVar19];
iVar2=iVar20;
Var3={
func_370(Global_44257[iVar20 /*12*/].f_1) 
};
if(Global_44257[iVar20 /*12*/].f_2==iParam0 && !Global_44257[iVar20 /*12*/].f_3==iParam0){
return;
}
iVar1=Global_44257[iVar20 /*12*/].f_2;
iVar0=Global_53195[iParam0 /*120*/];
bVar21=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar21=true;
}
if(bVar21){
if(!Global_53195[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44249=(Global_44249 - 1);
if(Global_44249 < 0){
Global_44249=0;
}
break;
case 1:
Global_44250=(Global_44250 - 1);
if(Global_44250 < 0){
Global_44250=0;
}
break;
case 2:
Global_44251=(Global_44251 - 1);
if(Global_44251 < 0){
Global_44251=0;
}
break;
}}}
Global_53195[iParam0 /*120*/].f_18[iVar0]=iParam1;
Global_53195[iParam0 /*120*/].f_1[iVar0]=iVar19;
Global_53195[iParam0 /*120*/].f_35[iVar0]=0;
Global_53195[iParam0 /*120*/].f_86[iVar0]=0;
Global_53195[iParam0 /*120*/].f_69[iVar0]=0;
Global_53195[iParam0 /*120*/]++;
}else{
iVar0=Global_53195[iParam0 /*120*/];
bVar22=false;
while (iVar0 >=16){
iVar0=(iVar0 - 16);
bVar22=true;
}
if(bVar22){
if(!Global_53195[iParam0 /*120*/].f_69[iVar0]){
switch (iParam0){
case 0:
Global_44249=(Global_44249 - 1);
if(Global_44249 < 0){
Global_44249=0;
}
break;
case 1:
Global_44250=(Global_44250 - 1);
if(Global_44250 < 0){
Global_44250=0;
}
break;
case 2:
Global_44251=(Global_44251 - 1);
if(Global_44251 < 0){
Global_44251=0;
}
break;
}}}
iVar23=-1;
iVar24=0;
iVar24=0;
while (iVar24 < 7){
if(Global_53557[iVar24 /*203*/].f_1==iParam1 && Global_53557[iVar24 /*203*/].f_9 > 0){
iVar23=iVar24;
}
iVar24++;
}
if(iVar23==-1){
return;
}
Global_53195[iParam0 /*120*/].f_18[iVar0]=Global_53557[iVar23 /*203*/].f_1;
Global_53195[iParam0 /*120*/].f_1[iVar0]=(Global_53557[iVar23 /*203*/].f_9 - 1);
Global_53195[iParam0 /*120*/].f_35[iVar0]=0;
Global_53195[iParam0 /*120*/].f_86[iVar0]=1;
Global_53195[iParam0 /*120*/].f_69[iVar0]=0;
Global_53195[iParam0 /*120*/]++;
iVar25=Global_53195[iParam0 /*120*/].f_1[iVar0];
iVar26=Global_53557[iVar23 /*203*/].f_10[iVar25 /*48*/];
iVar2=iVar26;
iVar1=Global_44257[iVar26 /*12*/].f_2;
if(Global_53557[iVar23 /*203*/].f_10[(Global_53557[iVar23 /*203*/].f_9 - 1) /*48*/].f_1){
MemCopy(&Var3,{
Global_53557[iVar23 /*203*/].f_10[(Global_53557[iVar23 /*203*/].f_9 - 1) /*48*/].f_2
}
, 16);
}else{
Var3={
func_370(Global_44257[iVar26 /*12*/].f_1) 
};
}}
if(!bParam4){
if(!Global_53195[iParam0 /*120*/].f_69[iVar0] && !bParam3){
switch (iParam0){
case 0:
func_366(0, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
case 1:
if(iVar2==249){
func_366(1, iVar1, iVar2, "PW_FEED_EM_1", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}else{
func_366(1, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}
break;
case 2:
func_366(2, iVar1, iVar2, &Var3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
break;
}}}}


void func_366(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11, char* sParam12, char* sParam13){
int iVar0;
bool bVar1;
char cVar2[64];
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}
iVar0=func_66();
bVar1=false;
StringCopy(&cVar2, func_369(iParam1, &bVar1), 64);
if(iVar0==iParam0){
switch (iParam2){
case 72:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL1");
break;
case 73:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL3");
break;
case 74:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("PROPR_INCEMAIL2");
break;
default:
HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam3);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam4);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam5)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam5);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam6)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam6);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam11);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam12)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam12);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam13)){
HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam13);
}
break;
}
if(bVar1){
func_367(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar2, &cVar2, false, 2, HUD::_GET_LABEL_TEXT(func_368(iParam1)), 0));
}else{
func_367(HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT("CHAR_DEFAULT", "CHAR_DEFAULT", false, 2, HUD::_GET_LABEL_TEXT(func_368(iParam1)), 0));
}
switch (Global_20266){
case 0:
StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
Global_44249++;
if(Global_44249 > 16){
Global_44249=16;
}
break;
case 2:
StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
Global_44251++;
if(Global_44251 > 16){
Global_44251=16;
}
break;
case 1:
StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
Global_44250++;
if(Global_44250 > 16){
Global_44250=16;
}
break;
default:
StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
break;
}
AUDIO::PLAY_SOUND_FRONTEND(-1, "Notification", &Global_20255, true);
}}


void func_367(int iParam0){
Global_44252[Global_44256]=iParam0;
Global_22663=1;
Global_22662=iParam0;
Global_44256++;
if(Global_44256==3){
Global_44256=0;
}}


char* func_368(int iParam0){
switch (iParam0){
case 0:
return "EMSTR_0";
case 3:
return "EMSTR_3";
case 1:
return "EMSTR_6";
case 2:
return "EMSTR_9";
case 4:
return "EMSTR_12";
case 5:
return "EMSTR_29";
case 6:
return "EMSTR_36";
case 7:
return "EMSTR_39";
case 8:
return "EMSTR_52";
case 9:
return "EMSTR_55";
case 10:
return "EMSTR_58";
case 11:
return "EMSTR_78";
case 12:
return "EMSTR_81";
case 13:
return "EMSTR_84";
case 14:
return "EMSTR_87";
case 15:
return "EMSTR_106";
case 16:
return "EMSTR_114";
case 17:
return "EMSTR_142";
case 18:
return "EMSTR_145";
case 19:
return "EMSTR_152";
case 20:
return "EMSTR_157";
case 21:
return "EMSTR_163";
case 22:
return "EMSTR_182";
case 23:
return "EMSTR_187";
case 24:
return "EMSTR_190";
case 25:
return "EMSTR_206";
case 26:
return "EMSTR_219";
case 27:
return "EMSTR_226";
case 28:
return "EMSTR_233";
case 29:
return "EMSTR_242";
case 30:
return "EMSTR_249";
case 31:
return "EMSTR_262";
case 32:
return "EMSTR_269";
case 33:
return "EMSTR_319";
case 34:
return "EMSTR_340";
case 35:
return "EMSTR_348";
case 36:
return "EMSTR_182";
case 37:
return "EMSTR_357";
case 38:
return "EMSTR_360";
case 39:
return "EMSTR_369";
case 40:
return "EMSTR_376";
case 41:
return "EMSTR_379";
case 42:
return "EMSTR_382";
case 43:
return "EMSTR_384";
case 44:
return "EMSTR_387";
case 45:
return "EMSTR_390";
case 46:
return "EMSTR_393";
case 47:
return "EMSTR_396";
case 48:
return "EMSTR_399";
case 49:
return "EMSTR_402";
case 50:
return "EMSTR_405";
case 51:
return "EMSTR_408";
case 52:
return "EMSTR_411";
case 53:
return "EMSTR_414";
case 54:
return "EMSTR_465";
case 55:
return "EMSTR_468";
case 56:
return "EMSTR_489";
case 57:
return "EMSTR_492";
case 58:
return "EMSTR_495";
case 59:
return "EMSTR_498";
case 60:
return "EMSTR_501";
case 61:
return "EMSTR_504";
case 62:
return "EMSTR_507";
case 63:
return "EMSTR_640";
case 64:
return "EMSTR_643";
case 65:
return "EMSTR_652";
default:
}
return "NULL";
}


char* func_369(int iParam0, int iParam1){
*iParam1=1;
switch (iParam0){
case 0:
return HUD::_GET_LABEL_TEXT(&(Global_1998[0 /*29*/].f_7));
case 1:
return HUD::_GET_LABEL_TEXT(&(Global_1998[1 /*29*/].f_7));
case 2:
return HUD::_GET_LABEL_TEXT(&(Global_1998[2 /*29*/].f_7));
case 7:
return HUD::_GET_LABEL_TEXT(&(Global_1998[12 /*29*/].f_7));
case 4:
return HUD::_GET_LABEL_TEXT(&(Global_1998[60 /*29*/].f_7));
case 6:
return HUD::_GET_LABEL_TEXT(&(Global_1998[62 /*29*/].f_7));
case 3:
return HUD::_GET_LABEL_TEXT(&(Global_1998[14 /*29*/].f_7));
case 16:
return HUD::_GET_LABEL_TEXT(&(Global_1998[97 /*29*/].f_7));
case 19:
return HUD::_GET_LABEL_TEXT(&(Global_1998[99 /*29*/].f_7));
case 15:
return HUD::_GET_LABEL_TEXT(&(Global_1998[96 /*29*/].f_7));
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
return HUD::_GET_LABEL_TEXT(&(Global_1998[15 /*29*/].f_7));
case 26:
return HUD::_GET_LABEL_TEXT(&(Global_1998[30 /*29*/].f_7));
case 27:
return HUD::_GET_LABEL_TEXT(&(Global_1998[17 /*29*/].f_7));
case 29:
return HUD::_GET_LABEL_TEXT(&(Global_1998[20 /*29*/].f_7));
case 30:
return HUD::_GET_LABEL_TEXT(&(Global_1998[43 /*29*/].f_7));
case 31:
return HUD::_GET_LABEL_TEXT(&(Global_1998[44 /*29*/].f_7));
case 32:
return HUD::_GET_LABEL_TEXT(&(Global_1998[19 /*29*/].f_7));
case 34:
return HUD::_GET_LABEL_TEXT(&(Global_1998[40 /*29*/].f_7));
case 36:
return HUD::_GET_LABEL_TEXT("CELL_E_381");
case 38:
return HUD::_GET_LABEL_TEXT(&(Global_1998[64 /*29*/].f_7));
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
return HUD::_GET_LABEL_TEXT(&(Global_1998[122 /*29*/].f_7));
case 40:
return HUD::_GET_LABEL_TEXT(&(Global_1998[125 /*29*/].f_7));
case 41:
return HUD::_GET_LABEL_TEXT(&(Global_1998[113 /*29*/].f_7));
case 42:
return HUD::_GET_LABEL_TEXT(&(Global_1998[126 /*29*/].f_7));
case 43:
return HUD::_GET_LABEL_TEXT(&(Global_1998[127 /*29*/].f_7));
case 44:
return HUD::_GET_LABEL_TEXT(&(Global_1998[124 /*29*/].f_7));
case 45:
return HUD::_GET_LABEL_TEXT(&(Global_1998[114 /*29*/].f_7));
case 46:
return HUD::_GET_LABEL_TEXT(&(Global_1998[115 /*29*/].f_7));
case 47:
return HUD::_GET_LABEL_TEXT(&(Global_1998[116 /*29*/].f_7));
case 48:
return HUD::_GET_LABEL_TEXT(&(Global_1998[123 /*29*/].f_7));
case 49:
return HUD::_GET_LABEL_TEXT(&(Global_1998[117 /*29*/].f_7));
case 50:
return HUD::_GET_LABEL_TEXT(&(Global_1998[118 /*29*/].f_7));
case 51:
return HUD::_GET_LABEL_TEXT(&(Global_1998[119 /*29*/].f_7));
case 52:
return HUD::_GET_LABEL_TEXT(&(Global_1998[120 /*29*/].f_7));
case 53:
return HUD::_GET_LABEL_TEXT(&(Global_1998[121 /*29*/].f_7));
default:
}
*iParam1=0;
return "ERROR!";
}
struct<16> func_370(int iParam0){
struct<16> Var0;
struct<16> Var16;
if(iParam0 > -1){
StringCopy(&Var0, "EMSTR_", 64);
StringIntConCat(&Var0, iParam0, 64);
return Var0;
}
StringCopy(&Var16, "FAIL", 64);
return Var16;
}

int func_371(int iParam0, var uParam1){
if(Global_47582[iParam0 /*46*/].f_42 >=9){
return 0;
}
Global_47582[iParam0 /*46*/].f_32[Global_47582[iParam0 /*46*/].f_42]=uParam1;
Global_47582[iParam0 /*46*/].f_42++;
return 1;
}


bool func_372(int iParam0){
return Global_47582[iParam0 /*46*/];
}


void func_373(){
func_2(801347631, 1, 7, 12, 1000, 1000, -1, 80, -1, 0);
}


void func_374(){
int iVar0;
iVar0=Global_113386.f_1.f_126[3 /*23*/].f_2[1];
if(iVar0==0){
iVar0=200000;
}
func_31(1, 1, 96, iVar0, 0);
}


void func_375(){
if(func_372(7)){
func_364(7, 0);
}elseif(!func_363(7)){
func_360(7, 0);
}
func_6(78, 0);
}


void func_376(){
int iVar0;
int iVar1;
int iVar2;
iVar0=Global_113386.f_1.f_126[2 /*23*/].f_2[0];
if(iVar0==0){
iVar0=325000;
}
iVar1=Global_113386.f_1.f_126[2 /*23*/].f_2[1];
if(iVar1==0){
iVar1=325000;
}
iVar2=Global_113386.f_1.f_126[2 /*23*/].f_2[2];
if(iVar2==0){
iVar2=325000;
}
func_31(0, 1, 96, iVar0, 0);
func_31(1, 1, 96, iVar1, 0);
func_31(2, 1, 96, iVar2, 0);
}


void func_377(){
int iVar0;
int iVar1;
iVar0=Global_113386.f_1.f_126[0 /*23*/].f_2[0];
if(iVar0==0){
iVar0=83100;
}
iVar1=Global_113386.f_1.f_126[0 /*23*/].f_2[1];
if(iVar1==0){
iVar1=28000;
}
func_31(0, 1, 32, iVar0, 0);
func_31(1, 1, 32, iVar1, 0);
func_6(74, 60000);
func_13(1595158098);
func_13(-420969532);
func_6(128, 0);
}


void func_378(){
if(func_372(7)){
func_364(7, 0);
}elseif(!func_363(7)){
func_360(7, 0);
}
if(func_372(6)){
func_364(6, 0);
}elseif(!func_363(6)){
func_360(6, 0);
}}


void func_379(){
func_332(11, 0);
}


void func_380(){
if(!func_381(12)){
func_188(46, 0, 0);
func_332(12, 0);
}}


bool func_381(int iParam0){
return MISC::IS_BIT_SET(Global_113386.f_1.f_116, iParam0);
}


void func_382(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(PLAYER::PLAYER_ID(), true);
}
func_251(68, 1);
}


void func_383(){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
PLAYER::SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(PLAYER::PLAYER_ID(), true);
}
func_251(67, 1);
}


void func_384(){
func_188(40, 2, 1);
}


void func_385(){
func_188(31, 2, 1);
}


void func_386(){
func_188(31, 0, 1);
}


void func_387(){
func_388(19, 2, 1);
func_188(19, 2, 1);
}


void func_388(int iParam0, int iParam1, bool bParam2){
int iVar0;
if(func_403(iParam1, iParam0, &iVar0)){
func_401(iParam1, iParam0, 1);
func_400(iParam1, iParam0, 50);
if(bParam2){
func_390(iParam0, iParam1, (5f * 60f));
}
func_389(iVar0, 0);
MISC::SET_BIT(&(Global_113386.f_18103.f_175[iVar0 /*19*/].f_18), true);
Global_96176++;
}}


void func_389(int iParam0, int iParam1){
if(iParam0 < 9){
Global_96297[iParam0 /*2*/]=iParam1;
if(iParam1==0){
Global_96297[iParam0 /*2*/].f_1=0;
}}}


void func_390(int iParam0, int iParam1, float fParam2){
int iVar0;
int iVar1;
int iVar2;
float fVar3;
iVar0=func_397(iParam0);
iVar1=func_397(iParam1);
iVar2=func_396(iVar0, iVar1);
if(iVar2 < 9){
fVar3=0f;
if(func_395(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5))){
fVar3=func_393(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5));
}
func_391(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5), (fVar3 + fParam2));
}}


void func_391(int* iParam0, float fParam1){
iParam0->f_1=(func_392(MISC::IS_BIT_SET(*iParam0, 4)) - fParam1);
MISC::SET_BIT(iParam0, true);
MISC::CLEAR_BIT(iParam0, 2);
iParam0->f_2=0f;
}


float func_392(bool bParam0){
float fVar0;
float fVar1;
int iVar2;
float fVar3;
float fVar4;
if(bParam0){
fVar0=SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER());
fVar1=(fVar0 / 1000f);
return fVar1;
}
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
iVar2=NETWORK::GET_NETWORK_TIME();
fVar3=SYSTEM::TO_FLOAT(iVar2);
fVar4=(fVar3 / 1000f);
return fVar4;
}
return (SYSTEM::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}


float func_393(var uParam0){
if(func_395(uParam0)){
if(func_394(uParam0)){
return uParam0->f_2;
}else{
return (func_392(MISC::IS_BIT_SET(*uParam0, 4)) - uParam0->f_1);
}}
return uParam0->f_1;
}


bool func_394(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 2);
}


bool func_395(var uParam0){
return MISC::IS_BIT_SET(*uParam0, 1);
}

int func_396(int iParam0, int iParam1){
int iVar0;
if((iParam0 !=0 && iParam0 !=1) && iParam0 !=2){
if((iParam1==0 || iParam1==1) || iParam1==2){
iVar0=iParam1;
iParam1=iParam0;
iParam0=iVar0;
}}
switch (iParam0){
case 0:
switch (iParam1){
case 0:
return 10;
break;
case 1:
return 0;
break;
case 2:
return 2;
break;
case 3:
return 10;
break;
case 4:
return 5;
break;
case 5:
return 8;
break;
default:
return 10;
break;
}
break;
case 1:
switch (iParam1){
case 0:
return 0;
break;
case 1:
return 10;
break;
case 2:
return 1;
break;
case 3:
return 3;
break;
case 4:
return 6;
break;
case 5:
return 10;
break;
default:
return 10;
break;
}
break;
case 2:
switch (iParam1){
case 0:
return 2;
break;
case 1:
return 1;
break;
case 2:
return 10;
break;
case 3:
return 4;
break;
case 4:
return 7;
break;
case 5:
return 10;
break;
default:
return 10;
break;
}
break;
}
return 10;
}

int func_397(int iParam0){
if(iParam0==145){
return 7;
}
if(iParam0 < func_399()){
return func_398(iParam0);
}
if(iParam0==144){
return 7;
}
if(iParam0==func_399()){
return 6;
}
if(iParam0==188){
return 6;
}
return 6;
}


var func__398(int iParam0){
return Global_1998[iParam0 /*29*/].f_11;
}

int func_399(){
if(Global_31959==0 || Global_31959==2){
return 187;
}
return 161;
}


void func_400(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_397(iParam0);
iVar1=func_397(iParam1);
iVar2=func_396(iVar0, iVar1);
Global_113386.f_18103.f_175[iVar2 /*19*/].f_17=iParam2;
if(Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 < 0){
Global_113386.f_18103.f_175[iVar2 /*19*/].f_17=0;
}
if(Global_113386.f_18103.f_175[iVar2 /*19*/].f_17 > 100){
Global_113386.f_18103.f_175[iVar2 /*19*/].f_17=100;
}}


void func_401(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
int iVar2;
iVar0=func_397(iParam0);
iVar1=func_397(iParam1);
iVar2=func_396(iVar0, iVar1);
if(iVar2 !=10){
func_402(&(Global_113386.f_18103.f_175[iVar2 /*19*/].f_5));
Global_113386.f_18103.f_175[iVar2 /*19*/].f_8=iParam2;
}}


void func_402(int* iParam0){
func_391(iParam0, 0f);
}

int func_403(int iParam0, int iParam1, var uParam2){
int iVar0;
int iVar1;
iVar0=func_397(iParam0);
iVar1=func_397(iParam1);
if(iVar0 !=7 && iVar1 !=7){
*uParam2=func_396(iVar0, iVar1);
if(*uParam2 !=10){
return 1;
}}
*uParam2=10;
return 0;
}


void func_404(){
int iVar0;
iVar0=82;
if(func_406(82) && func_405(82)){
HUD::SET_BLIP_FLASHES(Global_32338[iVar0 /*23*/].f_19, true);
HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar0 /*23*/].f_19, 10000);
}}


bool func_405(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
return HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19);
}

int func_406(int iParam0){
int iVar0;
int iVar1;
int iVar2;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
iVar1=MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 0);
iVar2=MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 15);
if(iVar1 && iVar2){
return 1;
}
return 0;
}


void func_407(){
int iVar0;
iVar0=HUD::GET_FIRST_BLIP_INFO_ID(66);
if(HUD::DOES_BLIP_EXIST(iVar0)){
HUD::SET_BLIP_FLASHES(iVar0, true);
HUD::SET_BLIP_FLASH_TIMER(iVar0, 10000);
}}


void func_408(){
int iVar0;
iVar0=243;
while (iVar0 <=262){
if((func_409(iVar0) && !HUD::IS_RADAR_HIDDEN()) && !MISC::IS_FRONTEND_FADING()){
HUD::SET_BLIP_FLASHES(Global_32338[iVar0 /*23*/].f_19, true);
HUD::SET_BLIP_FLASH_TIMER(Global_32338[iVar0 /*23*/].f_19, 10000);
}
iVar0++;
}}

int func_409(int iParam0){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return 0;
}
if(HUD::DOES_BLIP_EXIST(Global_32338[iVar0 /*23*/].f_19)){
if(HUD::IS_BLIP_ON_MINIMAP(Global_32338[iVar0 /*23*/].f_19)){
return 1;
}}
return 0;
}


void func_410(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8){
func_411(sParam0, "", iParam1, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7, iParam8);
}


void func_411(char* sParam0, char* sParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, var uParam9){
int iVar0;
if(MISC::ARE_STRINGS_EQUAL(sParam0, "")){
return;
}
if(iParam3 < 0){
return;
}
if(iParam5 < 500 && iParam5 !=-1){
return;
}
if(iParam4 < 0 && iParam4 !=-1){
return;
}
if(iParam6 < 1 || iParam6 > 7){
return;
}
if(iParam7==235){
return;
}
if(iParam8==235){
return;
}
iVar0=0;
while (iVar0 < Global_113386.f_20410.f_145){
if(MISC::ARE_STRINGS_EQUAL(&(Global_113386.f_20410[iVar0 /*16*/]), sParam0)){
return;
}
iVar0++;
}
if(Global_113386.f_20410.f_145 < 9){
StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/]), sParam0, 16);
StringCopy(&(Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_4), sParam1, 16);
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_8=(MISC::GET_GAME_TIMER() + iParam3);
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_9=iParam5;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_11=iParam6;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_12=uParam2;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_13=iParam7;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_14=iParam8;
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_15=uParam9;
if(iParam4 !=-1){
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10=((MISC::GET_GAME_TIMER() + iParam3) + iParam4);
}else{
Global_113386.f_20410[Global_113386.f_20410.f_145 /*16*/].f_10=-1;
}
Global_113386.f_20410.f_145++;
func_307();
}}


void func_412(int iParam0, bool bParam1){
if(iParam0==-1){
return;
}
if(bParam1){
if(!func_413(iParam0, 0)){
func_330(iParam0, 1, 0);
func_330(iParam0, 2, 0);
func_330(iParam0, 3, 0);
func_330(iParam0, 4, 0);
func_330(iParam0, 0, 1);
Global_77137[iParam0]=1;
}}else{
func_330(iParam0, 0, 0);
}}

int func_413(int iParam0, int iParam1){
if(iParam0==-1){
return 0;
}
return MISC::IS_BIT_SET(Global_113386.f_32749[iParam0], iParam1);
}


void func_414(bool bParam0){
if(bParam0){
StringCopy(&Global_112442, SCRIPT::GET_THIS_SCRIPT_NAME(), 24);
Global_112436=1;
}else{
StringCopy(&Global_112442, "NULL", 24);
Global_112436=0;
}}


void func_415(){
func_13(-375893868);
func_13(-658009473);
func_251(50, 1);
}


void func_416(){
func_13(546458037);
if(!func_11(0)){
func_410("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
}
func_251(63, 1);
if(!func_272(126)){
func_242(138, 1, 0);
func_288(138);
func_284(138);
func_219(80, 1, 0, 1, 0);
}else{
func_242(139, 1, 0);
func_341(139);
func_288(139);
}}


void func_417(){
func_13(-651018670);
func_13(-236506853);
func_251(14, 1);
}


void func_418(){
if(!func_272(48)){
func_251(48, 1);
}}


void func_419(){
if(!func_272(48)){
func_251(48, 1);
if(func_66() !=1){
func_420(12, 1, "ASS1_MIS", 1, 0, 0, 0, 0, 0, 0, 1);
}}
func_13(1323596299);
func_13(-1205448796);
}

int func_420(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10){
int iVar0;
char* sVar1;
int iVar2;
char* sVar3;
int iVar4;
char* sVar5;
char* sVar6;
MISC::CLEAR_BIT(&Global_8136, 10);
iVar0=0;
sVar1="NULL";
iVar2=-99;
sVar3="NULL";
iVar4=0;
sVar5="NULL";
sVar6="NULL";
if(func_421(iParam0, sParam2, iParam3, iVar0, sVar1, sVar3, iVar2, iParam4, iParam5, iParam6, bParam8, iParam9, iParam10, iVar4, sVar5, sVar6, iParam1)==1){
if(bParam8==1){
Global_8843=iParam7;
Global_8746[3 /*6*/]={
func_190(iParam0) 
};
Global_8823=iParam0;
MISC::SET_BIT(&Global_8136, true);
MISC::SET_BIT(&Global_8136, 7);
}
return 1;
}
return 0;
}

int func_421(int iParam0, char* sParam1, int iParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, int iParam7, var uParam8, var uParam9, bool bParam10, var uParam11, var uParam12, int iParam13, char* sParam14, char* sParam15, int iParam16){
int iVar0;
bool bVar1;
if(iParam13 > 99){}
if(MISC::ARE_STRINGS_EQUAL(sParam14, sParam15)){}
func_192();
iVar0=0;
switch (iParam16){
case 0:
if(Global_20266==0){
iVar0=0;
}else{
iVar0=1;
}
break;
case 2:
if(Global_20266==2){
iVar0=0;
}else{
iVar0=1;
}
break;
case 1:
if(Global_20266==1){
iVar0=0;
}else{
iVar0=1;
}
break;
default:
iVar0=0;
break;
}
if(iVar0==0){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_SWIMMING_UNDER_WATER(PLAYER::PLAYER_PED_ID())){
return 0;
}}
if(Global_113386.f_14051[Global_20266 /*20*/].f_17==1){
return 0;
}
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0){
return 0;
}
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("apptextmessage")) > 0){
return 0;
}}
if(func_437()==0){
func_435();
return 0;
}
func_434(Global_22672);
StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/]), sParam1, 64);
Global_113386.f_14141[Global_22672 /*104*/].f_17=iParam0;
if(iParam2==0){}else{
Global_113386.f_14141[Global_22672 /*104*/].f_24=iParam2;
}
Global_113386.f_14141[Global_22672 /*104*/].f_25=iParam7;
Global_113386.f_14141[Global_22672 /*104*/].f_26=uParam8;
Global_113386.f_14141[Global_22672 /*104*/].f_29=uParam9;
Global_113386.f_14141[Global_22672 /*104*/].f_30=uParam12;
Global_113386.f_14141[Global_22672 /*104*/].f_31=uParam11;
Global_113386.f_14141[Global_22672 /*104*/].f_28=0;
Global_113386.f_14141[Global_22672 /*104*/].f_32=iParam3;
StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_33), sParam4, 64);
Global_113386.f_14141[Global_22672 /*104*/].f_49=iParam6;
StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_50), sParam5, 64);
Global_113386.f_14141[Global_22672 /*104*/].f_66=iParam13;
StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_67), sParam14, 64);
StringCopy(&(Global_113386.f_14141[Global_22672 /*104*/].f_83), sParam15, 64);
if(MISC::IS_BIT_SET(Global_8136, 10)){
Global_113386.f_14141[Global_22672 /*104*/].f_99[0]=1;
Global_113386.f_14141[Global_22672 /*104*/].f_99[1]=1;
Global_113386.f_14141[Global_22672 /*104*/].f_99[2]=1;
Global_8842=4;
func_433(0);
func_433(2);
func_433(1);
}else{
func_192();
switch (iParam16){
case 3:
Global_113386.f_14141[Global_22672 /*104*/].f_99[Global_20266]=1;
break;
case 0:
Global_113386.f_14141[Global_22672 /*104*/].f_99[0]=1;
break;
case 2:
Global_113386.f_14141[Global_22672 /*104*/].f_99[2]=1;
break;
case 1:
Global_113386.f_14141[Global_22672 /*104*/].f_99[1]=1;
break;
}
if(iParam16==3){
switch (Global_20266){
case 0:
func_433(0);
Global_8842=0;
break;
case 1:
func_433(1);
Global_8842=1;
break;
case 2:
func_433(2);
Global_8842=2;
break;
case 3:
func_433(3);
Global_8842=3;
break;
default:
Global_8842=4;
break;
}}}
if(iParam7==1){
if(MISC::IS_BIT_SET(Global_8136, 10)){
Global_113386.f_14051[0 /*20*/].f_17=1;
Global_113386.f_14051[1 /*20*/].f_17=1;
Global_113386.f_14051[2 /*20*/].f_17=1;
}else{
switch (iParam16){
case 3:
Global_113386.f_14051[Global_20266 /*20*/].f_17=1;
break;
case 0:
Global_113386.f_14051[0 /*20*/].f_17=1;
break;
case 2:
Global_113386.f_14051[2 /*20*/].f_17=1;
break;
case 1:
Global_113386.f_14051[1 /*20*/].f_17=1;
break;
}}}
Global_22674[Global_22672]=0;
if(bParam10){
func_192();
if(Global_20209){
StringCopy(&Global_20255, "Phone_SoundSet_Prologue", 24);
}else{
switch (Global_20266){
case 0:
StringCopy(&Global_20255, "Phone_SoundSet_Michael", 24);
break;
case 2:
StringCopy(&Global_20255, "Phone_SoundSet_Trevor", 24);
break;
case 1:
StringCopy(&Global_20255, "Phone_SoundSet_Franklin", 24);
break;
default:
StringCopy(&Global_20255, "Phone_SoundSet_Default", 24);
break;
}}
if(!Global_8941[Global_20266 /*2811*/][0 /*281*/].f_259==1){
if(!func_432()){
AUDIO::PLAY_SOUND_FRONTEND(-1, "Text_Arrive_Tone", &Global_20255, true);
}}}
if(!Global_20465){
if(Global_20266.f_1==6){
func_431(Global_20247, "SET_DATA_SLOT_EMPTY", 1f, -1082130432, -1082130432, -1082130432, -1082130432);
func_428(1);
func_431(Global_20247, "DISPLAY_VIEW", 1f, SYSTEM::TO_FLOAT(Global_20246), -1082130432, -1082130432, -1082130432);
}}
if(Global_1973156 !=-1 && iParam0==Global_1973156){
bVar1=true;
}
func_422(iParam0, sParam1, bVar1, func_427(PLAYER::PLAYER_ID()));
return 1;
}


void func_422(int iParam0, char* sParam1, bool bParam2, int iParam3){
if(!func_423()){
return;
}
MONEY::_0x65482BFD0923C8A1(iParam0, 1654525105, MISC::GET_HASH_KEY(sParam1), 0, bParam2, iParam3);
if(bParam2){
Global_1973156=-1;
}}

int func_423(){
if(!Global_262145.f_28866){
return 0;
}
if(!Global_78319){
return 0;
}
if(PLAYER::PLAYER_ID()==func_426()){
return 0;
}
if(func_424(PLAYER::PLAYER_ID())){
return 0;
}
if(MISC::IS_BIT_SET(Global_1892703[PLAYER::PLAYER_ID() /*599*/].f_1, 7)){
return 0;
}
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()){
return 0;
}
return 1;
}


bool func_424(int iParam0){
return func_425(iParam0, 20);
}


var func__425(int iParam0, int iParam1){
return MISC::IS_BIT_SET(Global_1892703[iParam0 /*599*/].f_10.f_4, iParam1);
}

int func_426(){
return -1;
}

int func_427(int iParam0){
return Global_1853348[iParam0 /*834*/].f_205.f_6;
}


void func_428(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
Global_22673=0;
Global_8741=iParam0;
iVar0=0;
while (iVar0 < 9){
Global_8705[iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
iVar1=0;
if(func_59(14)){
while (iVar1 < 34){
if(iParam0==Global_8143[iVar1 /*15*/].f_11){
if(iVar0==Global_8143[iVar1 /*15*/].f_4){
if(Global_8705[iVar0]==0){
Global_8669[iVar0]=iVar1;
if(iVar1==3){
if(MISC::IS_BIT_SET(Global_8137, 3)){
iVar2=42;
Global_20468=1;
}else{
iVar2=255;
Global_20468=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}
if(Global_2725398){
if(iVar1==14){
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}}
Global_8705[iVar0]=1;
}}}
iVar1++;
}}else{
while (iVar1 < 34){
if(iParam0==Global_8143[iVar1 /*15*/].f_11){
if(iVar0==Global_8143[iVar1 /*15*/].f_4){
if(Global_8705[iVar0]==0){
Global_8669[iVar0]=iVar1;
if(iVar1==1){
iVar3=0;
while (iVar3 < 35){
if(Global_113386.f_14141[iVar3 /*104*/].f_24 !=0){
if(Global_113386.f_14141[iVar3 /*104*/].f_28==0){
if(Global_113386.f_14141[iVar3 /*104*/].f_99[Global_20266]==1){
Global_22673++;
}
}
}
iVar3++;
}
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22673), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==7){
if(Global_78319){
iVar4=0;
iVar4=Global_4539963;
iVar5=0;
while (iVar5 < 12){
if(Global_4539964[iVar5 /*104*/].f_24 !=0){
if(Global_4539964[iVar5 /*104*/].f_28==0){
if(Global_4539964[iVar5 /*104*/].f_99[Global_20266]==1){
iVar4++;
}}
}
iVar5++;
}
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar4), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
switch (Global_20266){
case 0:
iVar6=Global_44249;
break;
case 1:
iVar6=Global_44250;
break;
case 2:
iVar6=Global_44251;
break;
default:
break;
}
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar6), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}}elseif(iVar1==14){
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(Global_22668), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}elseif(iVar1==20){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8142);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==2){
if(MISC::IS_BIT_SET(Global_8137, 6)){
iVar7=42;
}else{
iVar7=255;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar7);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==3){
if(MISC::IS_BIT_SET(Global_8137, 3)){
iVar8=42;
Global_20468=1;
}else{
iVar8=255;
Global_20468=0;
}
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar8);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(iVar1==8){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif((iVar1==23 && MISC::ARE_STRINGS_EQUAL(&(Global_8143[iVar1 /*15*/]), "CELL_BENWEB")) && MISC::IS_BIT_SET(Global_8137, 6)){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_20247, "SET_DATA_SLOT");
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(Global_8143[iVar1 /*15*/].f_10);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
func_430(&(Global_8143[iVar1 /*15*/]));
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(42);
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}elseif(Global_8143[iVar1 /*15*/].f_10==57 && iVar1==23){
iVar9=0;
iVar9=Global_1888478.f_1;
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(iVar9), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}else{
func_429(Global_20247, "SET_DATA_SLOT", SYSTEM::TO_FLOAT(1), SYSTEM::TO_FLOAT(iVar0), SYSTEM::TO_FLOAT(Global_8143[iVar1 /*15*/].f_10), SYSTEM::TO_FLOAT(0), -1f, &(Global_8143[iVar1 /*15*/]), 0, 0, 0, 0);
}
Global_8705[iVar0]=1;
}}}
iVar1++;
}}
iVar0++;
}}


void func_429(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6, char* sParam7, char* sParam8, char* sParam9, char* sParam10, char* sParam11){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam7)){
func_430(sParam7);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam8)){
func_430(sParam8);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam9)){
func_430(sParam9);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam10)){
func_430(sParam10);
}
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam11)){
func_430(sParam11);
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


void func_430(char* sParam0){
GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(sParam0);
GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
}


void func_431(int iParam0, char* sParam1, float fParam2, float fParam3, float fParam4, float fParam5, float fParam6){
GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(iParam0, sParam1);
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam2));
if(fParam3 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam3));
}
if(fParam4 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam4));
}
if(fParam5 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam5));
}
if(fParam6 !=-1f){
GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(SYSTEM::ROUND(fParam6));
}
GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}


bool func_432(){
return Global_1575058;
}


void func_433(int iParam0){
var uVar0;
var uVar1;
uVar0=Global_113386.f_14051[iParam0 /*20*/].f_8;
uVar0=uVar0;
uVar1=uVar1;
}


void func_434(int iParam0){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var uVar4;
int iVar5;
iVar0=CLOCK::GET_CLOCK_SECONDS();
iVar1=CLOCK::GET_CLOCK_MINUTES();
iVar2=CLOCK::GET_CLOCK_HOURS();
iVar3=CLOCK::GET_CLOCK_DAY_OF_MONTH();
uVar4=CLOCK::GET_CLOCK_MONTH() + 1;
iVar5=CLOCK::GET_CLOCK_YEAR();
Global_113386.f_14141[iParam0 /*104*/].f_18=iVar0;
Global_113386.f_14141[iParam0 /*104*/].f_18.f_1=iVar1;
Global_113386.f_14141[iParam0 /*104*/].f_18.f_2=iVar2;
Global_113386.f_14141[iParam0 /*104*/].f_18.f_3=iVar3;
Global_113386.f_14141[iParam0 /*104*/].f_18.f_4=uVar4;
Global_113386.f_14141[iParam0 /*104*/].f_18.f_5=iVar5;
}


void func_435(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78319){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
Global_22672=34;
Global_113386.f_14141[Global_22672 /*104*/].f_18=-1;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(!func_436(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18)){
Global_22672=iVar2;
}
iVar2++;
}
Global_113386.f_14141[Global_22672 /*104*/].f_24=1;
}

int func_436(struct<6> Param0, struct<6> Param6){
struct<4> Var0;
struct<4> Var6;
int iVar12;
int iVar13;
if(Param0.f_5 < Param6.f_5){
return 0;
}
if(Param0.f_5 > Param6.f_5){
return 1;
}
if(Param0.f_5==Param6.f_5){
if(Param0.f_4 < Param6.f_4){
return 0;
}
if(Param0.f_4 > Param6.f_4){
return 1;
}
if(Param0.f_4==Param6.f_4){
Var0.f_0=Param0.f_0;
Var0.f_1=Param0.f_1 * 60;
Var0.f_2=Param0.f_2 * 3600;
Var0.f_3=(Param0.f_3 * 86400);
iVar12=(((Var0.f_0 + Var0.f_1) + Var0.f_2) + Var0.f_3);
Var6.f_0=Param6.f_0;
Var6.f_1=Param6.f_1 * 60;
Var6.f_2=Param6.f_2 * 3600;
Var6.f_3=(Param6.f_3 * 86400);
iVar13=(((Var6.f_0 + Var6.f_1) + Var6.f_2) + Var6.f_3);
if(iVar12 > iVar13 || iVar12==iVar13){
return 1;
}else{
return 0;
}}}
return 0;
}

int func_437(){
int iVar0;
int iVar1;
int iVar2;
if(Global_78319){
iVar0=24;
iVar1=33;
}else{
iVar0=0;
iVar1=20;
}
iVar2=iVar0;
while (iVar2 < iVar1){
if(Global_113386.f_14141[iVar2 /*104*/].f_24==0){
Global_22672=iVar2;
return 1;
}
iVar2++;
}
iVar2=iVar0;
Global_22672=34;
Global_113386.f_14141[Global_22672 /*104*/].f_18=-1;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_1=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_2=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_3=0;
Global_113386.f_14141[Global_22672 /*104*/].f_18.f_5=99999;
while (iVar2 < iVar1){
if(Global_113386.f_14141[iVar2 /*104*/].f_24==0 || Global_113386.f_14141[iVar2 /*104*/].f_24==1){
if(!func_436(Global_113386.f_14141[iVar2 /*104*/].f_18, Global_113386.f_14141[Global_22672 /*104*/].f_18)){
Global_22672=iVar2;
}}
if(Global_113386.f_14141[iVar2 /*104*/].f_24==2){
}
iVar2++;
}
if(Global_22672==34){
return 0;
}
Global_113386.f_14141[Global_22672 /*104*/].f_99[0]=0;
Global_113386.f_14141[Global_22672 /*104*/].f_99[1]=0;
Global_113386.f_14141[Global_22672 /*104*/].f_99[2]=0;
return 1;
}


void func_438(){
func_194(1323596299, 1, 2, 12, 15000, 5000, -1, 51, -1, 0, 1);
func_194(-1205448796, 1, 5, 1, 15000, 5000, -1, 51, -1, 0, 1);
func_13(1635608802);
}


void func_439(){
func_13(-2014002000);
func_13(-314546970);
func_13(-1306479777);
func_13(-1652588035);
func_13(-125167689);
func_251(47, 1);
}


void func_440(){
func_13(-444489072);
func_13(154402960);
func_21(23, 2);
func_20(23);
func_251(44, 1);
}


void func_441(){
func_13(1269300253);
func_13(-749738207);
func_251(23, 1);
}


void func_442(int iParam0, int iParam1){
Global_95447[iParam0]=iParam1;
}


void func_443(){
bool bVar0;
int iVar1;
func_251(126, 1);
func_446(6, 1);
func_445(6, 1);
func_446(5, 0);
func_412(4, 1);
func_412(5, 1);
if(func_444(157) !=1){
func_219(156, 1, 0, 1, 0);
}
func_219(159, 1, 0, 1, 0);
func_219(160, 1, 0, 1, 0);
func_219(96, 1, 0, 1, 0);
bVar0=func_66();
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(func_17(bVar0)){
if(bVar0==1){
func_275(12, PLAYER::PLAYER_PED_ID());
}}}
func_445(5, 0);
func_412(2, 0);
func_412(3, 0);
func_219(153, 1, 0, 1, 0);
func_219(155, 0, 0, 1, 0);
func_219(154, 0, 0, 1, 0);
func_219(80, 0, 0, 1, 0);
if(!func_272(63)){
func_13(546458037);
func_13(1674644829);
if(!func_11(0)){
func_410("AM_H_CHOP", 0, 3000, -1, 10000, 2, 0, 0, 0);
func_194(1674644829, 1, 2, 19, 10000, 10000, -1, 0, -1, 524288, 1);
}
func_251(63, 1);
}
func_242(138, 0, 0);
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("chop"))==0){
func_242(139, 1, 0);
}
iVar1=0;
while (iVar1 < 4){
Global_113386.f_18533.f_24[1 /*5*/][iVar1]=1;
iVar1++;
}
Global_113386.f_20118.f_264=1;
if(!func_11(0)){
func_410("AM_H_HILLS", 2, 3000, -1, 10000, 2, 0, 0, 0);
}}

int func_444(int iParam0){
if(iParam0 !=198){
if(Global_78319){
return Global_42586.f_227[iParam0];
}else{
return Global_113386.f_7261.f_227[iParam0];
}}
return 0;
}


void func_445(int iParam0, bool bParam1){
if(iParam0==10){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), true);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), true);
}
if(Global_95479[iParam0 /*10*/].f_7 !=263){
func_287(Global_95479[iParam0 /*10*/].f_7, MISC::IS_BIT_SET(Global_113386.f_7229[iParam0], 1), 0);
}}


void func_446(int iParam0, bool bParam1){
if(iParam0==10){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_113386.f_7229[iParam0]), false);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_7229[iParam0]), false);
}
MISC::SET_SAVE_HOUSE(Global_95479[iParam0 /*10*/].f_8, bParam1, true);
func_474(iParam0);
func_472(iParam0, 0);
func_470(iParam0);
func_447(iParam0);
}


void func_447(int iParam0){
if(iParam0==10){
return;
}
switch (iParam0){
case 0:
MISC::SET_BIT(&(Global_38412[(38 / 32)]), (38 % 32));
func_448(38, 0);
MISC::SET_BIT(&(Global_38412[(41 / 32)]), (41 % 32));
func_448(41, 0);
MISC::SET_BIT(&(Global_38412[(43 / 32)]), (43 % 32));
func_448(43, 0);
MISC::SET_BIT(&(Global_38412[(42 / 32)]), (42 % 32));
func_448(42, 0);
MISC::SET_BIT(&(Global_38412[(44 / 32)]), (44 % 32));
func_448(44, 0);
break;
case 1:
MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
func_448(51, 0);
break;
case 2:
MISC::SET_BIT(&(Global_38412[(51 / 32)]), (51 % 32));
func_448(51, 0);
break;
case 3:
MISC::SET_BIT(&(Global_38412[(53 / 32)]), (53 % 32));
func_448(53, 0);
break;
case 4:
MISC::SET_BIT(&(Global_38412[(81 / 32)]), (81 % 32));
func_448(81, 0);
MISC::SET_BIT(&(Global_38412[(82 / 32)]), (82 % 32));
func_448(82, 0);
break;
case 5:
MISC::SET_BIT(&(Global_38412[(47 / 32)]), (47 % 32));
func_448(47, 0);
MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
func_448(50, 0);
break;
case 6:
MISC::SET_BIT(&(Global_38412[(50 / 32)]), (50 % 32));
func_448(50, 0);
break;
}}


void func_448(int iParam0, int iParam1){
int iVar0;
if(iParam0 !=226){
if(Global_78319){
iVar0=Global_42586[iParam0];
}else{
iVar0=Global_113386.f_7261[iParam0];
}
if(iVar0 !=iParam1 || MISC::IS_BIT_SET(Global_38412[(iParam0 / 32)], (iParam0 % 32))){
if((((iParam1==4 || iParam1==3) || iParam1==5) || iParam1==6) || iParam1==2){
MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
Global_38884[iParam0]=iParam1;
}elseif(Global_78319){
Global_42586[iParam0]=iParam1;
}else{
Global_113386.f_7261[iParam0]=iParam1;
}
MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
func_450(iParam0);
if(MISC::IS_BIT_SET(Global_38412[(iParam0 / 32)], (iParam0 % 32))){
func_449(iParam0);
}}}}


void func_449(int iParam0){
if(!MISC::IS_BIT_SET(Global_39355.f_228[(iParam0 / 32)], (iParam0 % 23))){
MISC::SET_BIT(&(Global_39355.f_228[(iParam0 / 32)]), (iParam0 % 23));
Global_39355[Global_39355.f_227]=iParam0;
Global_39355.f_227++;
}}


void func_450(int iParam0){
struct<7> Var0;
bool bVar7;
bool bVar8;
int iVar9;
float fVar10;
int iVar11;
int iVar12;
bool bVar13;
int iVar14;
int iVar15;
if(!func_223()){
return;
}
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
return;
}
Var0={
func_469(iParam0) 
};
if(MISC::IS_BIT_SET(Var0.f_4, 2)){
func_455(iParam0, &Var0);
}
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5)){
if(CUTSCENE::IS_CUTSCENE_PLAYING()){
return;
}}
bVar7=false;
bVar8=false;
fVar10=MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true);
if((MISC::IS_BIT_SET(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0]==2) && fVar10 > 210f){
MISC::CLEAR_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
Global_38430[iParam0]=0;
}
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("startup_positioning"))==0){
if(MISC::IS_BIT_SET(Global_38657[(iParam0 / 32)], (iParam0 % 32))){
if(fVar10 < 25f){
if(Global_100493.f_373==0){
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
Global_100493.f_373=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
}}
iVar11=Global_100493.f_373;
iVar12=INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
if(iVar11==iVar12 && iVar11 !=0){
MISC::SET_BIT(&(Global_38421[(iParam0 / 32)]), (iParam0 % 32));
Global_38884[iParam0]=3;
MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
}}
MISC::CLEAR_BIT(&(Global_38657[(iParam0 / 32)]), (iParam0 % 32));
}}
if(MISC::IS_BIT_SET(Global_38421[(iParam0 / 32)], (iParam0 % 32))){
iVar9=Global_38884[iParam0];
}elseif(MISC::IS_BIT_SET(Var0.f_4, 0)){
if(Global_113386.f_9085){
iVar9=func_452(iParam0);
}else{
iVar9=0;
}
if(func_59(14)){
iVar9=0;
}}elseif(MISC::IS_BIT_SET(Var0.f_4, 1) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("ambient_solomon"))==0){
if(func_451()){
iVar9=0;
}else{
iVar9=1;
}}else{
iVar9=Global_113386.f_7261[iParam0];
}
if(Global_39111[iParam0] !=iVar9){
bVar7=true;
}
if(MISC::IS_BIT_SET(Global_38412[(iParam0 / 32)], (iParam0 % 32))){
if(!MISC::IS_BIT_SET(Global_38421[(iParam0 / 32)], (iParam0 % 32)) || (Global_38430[iParam0]==0 && Global_38884[iParam0] !=2)){
bVar7=true;
}}
if(bVar7){
if(!Global_38411){
}else{
if(!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Var0.f_5)){
OBJECT::ADD_DOOR_TO_SYSTEM(Var0.f_5, Var0.f_3, Var0, false, false, false);
}
switch (iVar9){
case 1:
if(MISC::IS_BIT_SET(Var0.f_4, 3)){
bVar13=true;
}elseif(fVar10 > 3f || MISC::ABSF(OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Var0.f_5)) <=0,015f){
iVar14=INTERIOR::GET_INTERIOR_FROM_ENTITY(PLAYER::PLAYER_PED_ID());
iVar15=INTERIOR::GET_INTERIOR_AT_COORDS(Var0);
if(iVar14 !=iVar15 || iVar14==0){
bVar13=true;
}}
if(bVar13){
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
}
break;
case 4:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
case 2:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
case 0:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, true);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
case 3:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, 0, false, true);
bVar8=true;
break;
case 5:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
case 6:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
default:
if(Var0.f_6 !=0f){
OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Var0.f_5, Var0.f_6, false, false);
}
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Var0.f_5, iVar9, false, true);
bVar8=true;
break;
}}
if(bVar8){
MISC::CLEAR_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
Global_39111[iParam0]=iVar9;
}}
if(MISC::IS_BIT_SET(Global_38421[(iParam0 / 32)], (iParam0 % 32)) && Global_38884[iParam0] !=2){
MISC::SET_BIT(&(Global_38412[(iParam0 / 32)]), (iParam0 % 32));
func_449(iParam0);
if(Global_38430[iParam0] < 2){
Global_38430[iParam0]++;
}}}

int func_451(){
if(PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0)){
return 0;
}
switch (func_66()){
case 0:
if(Global_113386.f_9085.f_99.f_58[65]){
return 1;
}
break;
case 1:
if(Global_113386.f_9085.f_99.f_58[66]){
return 1;
}
break;
case 2:
if(Global_113386.f_9085.f_99.f_58[65]){
return 1;
}
break;
}
return 0;
}

int func_452(int iParam0){
bool bVar0;
bVar0=func_66();
if(func_453(iParam0)){
return 1;
}
if(iParam0==49){
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113386.f_7229[5], 0) || MISC::IS_BIT_SET(Global_113386.f_7229[6], 0)){
return 0;
}}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[5], bVar0)){
return 0;
}}}
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
if(bVar0==0){
if(MISC::IS_BIT_SET(Global_113386.f_7229[0], 0)){
return 0;
}}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[0], bVar0)){
if(iParam0 !=40){
return 0;
}else{
return 1;
}}}
break;
case 47:
case 48:
case 49:
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113386.f_7229[5], 0)){
return 0;
}}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[5], bVar0)){
return 0;
}}
break;
case 50:
if(bVar0==1){
if(MISC::IS_BIT_SET(Global_113386.f_7229[6], 0)){
return 0;
}}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[6], bVar0)){
return 0;
}}
break;
case 51:
case 52:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113386.f_7229[2], 0)){
return 0;
}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[2], bVar0)){
return 0;
}}}elseif(bVar0==0){
if(MISC::IS_BIT_SET(Global_113386.f_7229[1], 0)){
return 0;
}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[1], bVar0)){
return 0;
}}}
break;
case 53:
if(bVar0==2){
if(MISC::IS_BIT_SET(Global_113386.f_7229[3], 0)){
return 0;
}}
if(func_17(bVar0)){
if(MISC::IS_BIT_SET(Global_95468[3], bVar0)){
return 0;
}}
break;
default:
return 0;
break;
}
return 1;
}

int func_453(int iParam0){
int iVar0;
if((iParam0==40 || iParam0==49) || iParam0==52){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)){
iVar0=ENTITY::GET_ENTITY_MODEL(func_454(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true)));
switch (iVar0){
case joaat("utillitruck"):
case joaat("monster"):
return 1;
break;
}}}}
return 0;
}

int func_454(int iParam0){
return iParam0;
}


void func_455(int iParam0, var uParam1){
int iVar0;
int iVar1;
if(!MISC::IS_BIT_SET(uParam1->f_4, 2)){
return;
}
iVar0=func_458();
iVar1=func_457(iVar0);
switch (iParam0){
case 133:
case 134:
case 201:
case 202:
if(func_456(iParam0)){
if(iVar1 < 19){
if(iVar1 >=7){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}}elseif(iVar1 >=19){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(iVar1 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 199:
case 200:
case 203:
case 204:
if(func_456(iParam0)){
if(iVar1 < 18){
if(iVar1 >=7){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}}elseif(iVar1 >=18){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(iVar1 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=12f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 141:
case 142:
if(func_456(iParam0)){
if((SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist"))==0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1"))==0) && !Global_113386.f_9085.f_99.f_58[4]){
if(iVar1 < 21){
if(iVar1 >=7){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}}elseif(!Global_113386.f_9085.f_99.f_58[4]){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(Global_113386.f_9085.f_99.f_58[4]){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}elseif(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_heist"))==0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("jewelry_setup1"))==0){
if(iVar1 >=21){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(iVar1 < 7){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=18f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}}
break;
case 145:
case 146:
case 143:
case 144:
if(func_456(iParam0)){
if(iVar1 < 20){
if(iVar1 >=9){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}}elseif(iVar1 >=20){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(iVar1 < 9){
if(SYSTEM::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), *uParam1) >=40f){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 147:
case 148:
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 152:
case 153:
case 154:
case 155:
case 156:
case 157:
if(!func_456(iParam0)){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet"))==0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}elseif(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("assassin_valet")) > 0){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 158:
case 159:
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[70 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 160:
case 161:
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("omega2"))==0){
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 70:
case 71:
case 72:
if(!func_456(iParam0) && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[26 /*34*/].f_6)==0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}else{
return;
}
break;
case 101:
case 102:
case 103:
case 104:
if(!func_456(iParam0)){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[43 /*34*/].f_6)==0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}
break;
case 190:
case 191:
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 193:
if(!func_456(iParam0)){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[93 /*34*/].f_6) > 0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}
break;
case 198:
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 80:
if(!func_456(iParam0)){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[8 /*34*/].f_6)==0 && SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[10 /*34*/].f_6)==0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}
break;
case 205:
case 206:
if(!func_456(iParam0)){
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[47 /*34*/].f_6)==0){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}else{
return;
}
break;
case 207:
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[70 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
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
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[48 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 99:
case 100:
if(SCRIPT::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(Global_91229[39 /*34*/].f_6)==0){
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}}
break;
case 216:
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 217:
case 218:
if(!func_456(iParam0)){
Global_113386.f_7261[iParam0]=1;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
case 219:
case 220:
case 221:
case 222:
if(func_456(iParam0)){
Global_113386.f_7261[iParam0]=0;
OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(uParam1->f_5, Global_113386.f_7261[iParam0], true, true);
}
break;
}}


bool func_456(int iParam0){
struct<7> Var0;
int iVar7;
Var0={
func_469(iParam0) 
};
iVar7=OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Var0.f_5);
return ((iVar7==1 || iVar7==4) || iVar7==2);
}

int func_457(int iParam0){
return SYSTEM::SHIFT_RIGHT(iParam0, 9) & 31;
}


var func__458(){
var uVar0;
func_468(&uVar0, CLOCK::GET_CLOCK_SECONDS());
func_467(&uVar0, CLOCK::GET_CLOCK_MINUTES());
func_466(&uVar0, CLOCK::GET_CLOCK_HOURS());
func_461(&uVar0, CLOCK::GET_CLOCK_DAY_OF_MONTH());
func_460(&uVar0, CLOCK::GET_CLOCK_MONTH());
func_459(&uVar0, CLOCK::GET_CLOCK_YEAR());
return uVar0;
}


void func_459(var uParam0, int iParam1){
if(iParam1 <=0){
return;
}
if(iParam1 > 2043 || iParam1 < 1979){
return;
}
*uParam0=(*uParam0 - *uParam0 & 2080374784);
if(iParam1 < 2011){
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT((2011 - iParam1), 26));
*uParam0 |=-2147483648;
}else{
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT((iParam1 - 2011), 26));
*uParam0=(*uParam0 - *uParam0 & -2147483648);
}}


void func_460(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 11){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15);
*uParam0=(*uParam0 || iParam1);
}


void func_461(var uParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=func_465(*uParam0);
iVar1=func_463(*uParam0);
if(iParam1 < 1 || iParam1 > func_462(iVar0, iVar1)){
return;
}
*uParam0=(*uParam0 - *uParam0 & 496);
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 4));
}

int func_462(int iParam0, int iParam1){
if(iParam1 < 0){
iParam1=0;
}
switch (iParam0){
case 0:
case 2:
case 4:
case 6:
case 7:
case 9:
case 11:
return 31;
break;
case 3:
case 5:
case 8:
case 10:
return 30;
break;
case 1:
if((iParam1 % 4)==0){
if((iParam1 % 100) !=0){
return 29;
}elseif((iParam1 % 400)==0){
return 29;
}}
return 28;
break;
}
return 30;
}


var func__463(int iParam0){
return (SYSTEM::SHIFT_RIGHT(iParam0, 26) & 31 * func_464(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 2011;
}

int func_464(bool bParam0, int iParam1, int iParam2){
if(bParam0){
return iParam1;
}
return iParam2;
}

int func_465(var uParam0){
return uParam0 & 15;
}


void func_466(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 > 24){
return;
}
*uParam0=(*uParam0 - *uParam0 & 15872);
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 9));
}


void func_467(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 1032192);
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 14));
}


void func_468(var uParam0, int iParam1){
if(iParam1 < 0 || iParam1 >=60){
return;
}
*uParam0=(*uParam0 - *uParam0 & 66060288);
*uParam0=(*uParam0 || SYSTEM::SHIFT_LEFT(iParam1, 20));
}


struct<7> func_469(int iParam0){
struct<7> Var0;
switch (iParam0){
case 0:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
133f, -1711f, 29f 
};
Var0.f_5=1804701345;
break;
case 1:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-1287,857f, -1115,742f, 7,1401f 
};
Var0.f_5=1403601067;
break;
case 2:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
1932,952f, 3725,154f, 32,9944f 
};
Var0.f_5=-2031139496;
break;
case 3:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
1207,873f, -470,063f, 66,358f 
};
Var0.f_5=1796834809;
break;
case 4:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-29,8692f, -148,1571f, 57,2265f 
};
Var0.f_5=96153298;
break;
case 5:
Var0.f_3=joaat("v_ilev_bs_door");
Var0={
-280,7851f, 6232,782f, 31,8455f 
};
Var0.f_5=-281080954;
break;
case 6:
Var0.f_3=joaat("v_ilev_hd_door_l");
Var0={
-824f, -187f, 38f 
};
Var0={
-823,2001f, -187,0831f, 37,819f 
};
Var0.f_5=183249434;
break;
case 7:
Var0.f_3=joaat("v_ilev_hd_door_r");
Var0={
-823f, -188f, 38f 
};
Var0={
-822,4442f, -188,3924f, 37,819f 
};
Var0.f_5=758345384;
break;
case 8:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
82,3186f, -1392,752f, 29,5261f 
};
Var0.f_5=-1069262641;
break;
case 9:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
82,3186f, -1390,476f, 29,5261f 
};
Var0.f_5=1968521986;
break;
case 10:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
1686,983f, 4821,741f, 42,2131f 
};
Var0.f_5=-2143706301;
break;
case 11:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
1687,282f, 4819,484f, 42,2131f 
};
Var0.f_5=-1403421822;
break;
case 12:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
418,637f, -806,457f, 29,6396f 
};
Var0.f_5=-1950137670;
break;
case 13:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
418,637f, -808,733f, 29,6396f 
};
Var0.f_5=1226259807;
break;
case 14:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-1096,661f, 2705,446f, 19,2578f 
};
Var0.f_5=1090833557;
break;
case 15:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-1094,965f, 2706,964f, 19,2578f 
};
Var0.f_5=897332612;
break;
case 16:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
1196,825f, 2703,221f, 38,3726f 
};
Var0.f_5=1095946640;
break;
case 17:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
1199,101f, 2703,221f, 38,3726f 
};
Var0.f_5=801975945;
break;
case 18:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-818,7642f, -1079,544f, 11,4781f 
};
Var0.f_5=-167996547;
break;
case 19:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-816,7932f, -1078,406f, 11,4781f 
};
Var0.f_5=-1935818563;
break;
case 20:
Var0.f_3=joaat("v_ilev_cs_door01");
Var0={
-0,0564f, 6517,461f, 32,0278f 
};
Var0.f_5=1891185217;
break;
case 21:
Var0.f_3=joaat("v_ilev_cs_door01_r");
Var0={
-1,7253f, 6515,914f, 32,0278f 
};
Var0.f_5=1236591681;
break;
case 22:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
-1201,435f, -776,8566f, 17,9918f 
};
Var0.f_5=1980808685;
break;
case 23:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
617,2458f, 2751,022f, 42,7578f 
};
Var0.f_5=1352749757;
break;
case 24:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
127,8201f, -211,8274f, 55,2275f 
};
Var0.f_5=-566554453;
break;
case 25:
Var0.f_3=joaat("v_ilev_clothmiddoor");
Var0={
-3167,75f, 1055,536f, 21,5329f 
};
Var0.f_5=1284749450;
break;
case 26:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-716,6754f, -155,42f, 37,6749f 
};
Var0.f_5=261851994;
break;
case 27:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-715,6154f, -157,2561f, 37,6749f 
};
Var0.f_5=217646625;
break;
case 28:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-157,0924f, -306,4413f, 39,994f 
};
Var0.f_5=1801139578;
break;
case 29:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-156,4022f, -304,4366f, 39,994f 
};
Var0.f_5=-2123275866;
break;
case 30:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-1454,782f, -231,7927f, 50,0565f 
};
Var0.f_5=1312689981;
break;
case 31:
Var0.f_3=joaat("v_ilev_ch_glassdoor");
Var0={
-1456,201f, -233,3682f, 50,0565f 
};
Var0.f_5=-595055661;
break;
case 32:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
321,81f, 178,36f, 103,68f 
};
Var0.f_5=-265260897;
break;
case 33:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1859,89f, 3749,79f, 33,18f 
};
Var0.f_5=-1284867488;
break;
case 34:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
-289,1752f, 6199,112f, 31,637f 
};
Var0.f_5=302307081;
break;
case 35:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
-1155,454f, -1424,008f, 5,0461f 
};
Var0.f_5=-681886015;
break;
case 36:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
1321,286f, -1650,597f, 52,3663f 
};
Var0.f_5=-2086556500;
break;
case 37:
Var0.f_3=joaat("v_ilev_ta_door");
Var0={
-3167,789f, 1074,767f, 20,9209f 
};
Var0.f_5=-1496386696;
break;
case 38:
Var0.f_3=joaat("v_ilev_mm_doorm_l");
Var0={
-817f, 179f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-2097039789;
break;
case 39:
Var0.f_3=joaat("v_ilev_mm_doorm_r");
Var0={
-816f, 178f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-2127416656;
break;
case 40:
Var0.f_3=joaat("prop_ld_garaged_01");
Var0={
-815f, 186f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1986583853;
Var0.f_6=6,5f;
break;
case 41:
Var0.f_3=joaat("prop_bh1_48_backdoor_l");
Var0={
-797f, 177f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=776026812;
break;
case 42:
Var0.f_3=joaat("prop_bh1_48_backdoor_r");
Var0={
-795f, 178f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=698422331;
break;
case 43:
Var0.f_3=joaat("prop_bh1_48_backdoor_l");
Var0={
-793f, 181f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=535076355;
break;
case 44:
Var0.f_3=joaat("prop_bh1_48_backdoor_r");
Var0={
-794f, 183f, 73f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=474675599;
break;
case 45:
Var0.f_3=joaat("prop_bh1_48_gate_1");
Var0={
-849f, 179f, 70f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1978427516;
break;
case 46:
Var0.f_3=joaat("v_ilev_mm_windowwc");
Var0={
-802,7333f, 167,5041f, 77,5824f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1700375831;
break;
case 47:
Var0.f_3=joaat("v_ilev_fa_frontdoor");
Var0={
-14f, -1441f, 31f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=613961892;
break;
case 48:
Var0.f_3=joaat("v_ilev_fh_frntdoor");
Var0={
-15f, -1427f, 31f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-272570634;
break;
case 49:
Var0.f_3=joaat("prop_sc1_21_g_door_01");
Var0={
-25,28f, -1431,06f, 30,84f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1040675994;
break;
case 50:
Var0.f_3=joaat("v_ilev_fh_frontdoor");
Var0={
7,52f, 539,53f, 176,18f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=1201219326;
break;
case 51:
Var0.f_3=joaat("v_ilev_trevtraildr");
Var0={
1973f, 3815f, 34f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=1736361794;
break;
case 52:
Var0.f_3=joaat("prop_cs4_10_tr_gd_01");
Var0={
1972,787f, 3824,554f, 32,5831f 
};
Var0.f_5=1113956670;
Var0.f_6=12f;
break;
case 53:
Var0.f_3=joaat("v_ilev_trev_doorfront");
Var0={
-1150f, -1521f, 11f 
};
MISC::SET_BIT(&(Var0.f_4), false);
Var0.f_5=-1361617046;
break;
}
switch (iParam0){
case 54:
Var0.f_3=joaat("prop_com_ls_door_01");
Var0={
-1145,9f, -1991,14f, 14,18f 
};
Var0.f_5=-1871080926;
Var0.f_6=25f;
break;
case 55:
Var0.f_3=joaat("prop_id2_11_gdoor");
Var0={
723,12f, -1088,83f, 23,28f 
};
Var0.f_5=1168079979;
Var0.f_6=25f;
break;
case 56:
Var0.f_3=joaat("prop_com_ls_door_01");
Var0={
-356,09f, -134,77f, 40,01f 
};
Var0.f_5=1206354175;
Var0.f_6=25f;
break;
case 57:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
108,8502f, 6617,876f, 32,673f 
};
Var0.f_5=-1038180727;
Var0.f_6=25f;
break;
case 58:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
114,3206f, 6623,226f, 32,7161f 
};
Var0.f_5=1200466273;
Var0.f_6=25f;
break;
case 59:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
1182,305f, 2645,242f, 38,807f 
};
Var0.f_5=1391004277;
Var0.f_6=25f;
break;
case 60:
Var0.f_3=joaat("v_ilev_carmod3door");
Var0={
1174,654f, 2645,242f, 38,6826f 
};
Var0.f_5=-459199009;
Var0.f_6=25f;
break;
case 225:
Var0.f_3=joaat("lr_prop_supermod_door_01");
Var0={
-205,7007f, -1310,692f, 30,2957f 
};
Var0.f_5=-288764223;
Var0.f_6=25f;
break;
case 61:
Var0.f_3=joaat("v_ilev_janitor_frontdoor");
Var0={
-107,5401f, -9,0258f, 70,6696f 
};
Var0.f_5=-252283844;
break;
case 62:
Var0.f_3=joaat("v_ilev_ss_door8");
Var0={
717f, -975f, 25f 
};
Var0.f_5=-826072862;
break;
case 63:
Var0.f_3=joaat("v_ilev_ss_door7");
Var0={
719f, -975f, 25f 
};
Var0.f_5=763780711;
break;
case 64:
Var0.f_3=joaat("v_ilev_ss_door02");
Var0={
709,9813f, -963,5311f, 30,5453f 
};
Var0.f_5=-874851305;
break;
case 65:
Var0.f_3=joaat("v_ilev_ss_door03");
Var0={
709,9894f, -960,6675f, 30,5453f 
};
Var0.f_5=-1480820165;
break;
case 66:
Var0.f_3=joaat("v_ilev_store_door");
Var0={
707,8046f, -962,4564f, 30,5453f 
};
Var0.f_5=949391213;
break;
case 67:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1393f, 3599f, 35f 
};
Var0.f_5=212192855;
break;
case 68:
Var0.f_3=joaat("v_ilev_ml_door1");
Var0={
1395f, 3600f, 35f 
};
Var0.f_5=-126474752;
break;
case 69:
Var0.f_3=joaat("v_ilev_ss_door04");
Var0={
1387f, 3614f, 39f 
};
Var0.f_5=1765671336;
break;
case 70:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1083,547f, -1975,435f, 31,6222f 
};
Var0.f_5=792295685;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 71:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1065,237f, -2006,079f, 32,2329f 
};
Var0.f_5=563273144;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 72:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1085,307f, -2018,561f, 41,6289f 
};
Var0.f_5=-726993043;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 73:
Var0.f_3=joaat("v_ilev_bank4door02");
Var0={
-111f, 6464f, 32f 
};
Var0.f_5=178228075;
break;
case 74:
Var0.f_3=joaat("v_ilev_bank4door01");
Var0={
-110f, 6462f, 32f 
};
Var0.f_5=1852297978;
break;
case 75:
Var0.f_3=joaat("v_ilev_lester_doorfront");
Var0={
1274f, -1721f, 55f 
};
Var0.f_5=-565026078;
break;
case 76:
Var0.f_3=joaat("v_ilev_lester_doorveranda");
Var0={
1271,89f, -1707,57f, 53,79f 
};
Var0.f_5=1646172266;
break;
case 77:
Var0.f_3=joaat("v_ilev_lester_doorveranda");
Var0={
1270,77f, -1708,1f, 53,75f 
};
Var0.f_5=204467342;
break;
case 78:
Var0.f_3=joaat("v_ilev_deviantfrontdoor");
Var0={
-127,5f, -1456,18f, 37,94f 
};
Var0.f_5=2047070410;
break;
case joaat("mpsv_lp0_31"):
Var0.f_3=joaat("prop_com_gar_door_01");
Var0={
483,56f, -1316,08f, 32,18f 
};
Var0.f_5=1417775309;
break;
case 80:
Var0.f_3=joaat("v_ilev_cs_door");
Var0={
483f, -1312f, 29f 
};
Var0.f_5=-106474626;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 81:
Var0.f_3=joaat("prop_strip_door_01");
Var0={
128f, -1299f, 29f 
};
Var0.f_5=1840510598;
break;
case 82:
Var0.f_3=joaat("prop_magenta_door");
Var0={
96f, -1285f, 29f 
};
Var0.f_5=1382825971;
break;
case 83:
Var0.f_3=joaat("prop_motel_door_09");
Var0={
549f, -1773f, 34f 
};
Var0.f_5=232536303;
break;
case 84:
Var0.f_3=joaat("v_ilev_gangsafedoor");
Var0={
974f, -1839f, 36f 
};
Var0.f_5=1267246609;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 85:
Var0.f_3=joaat("v_ilev_gangsafedoor");
Var0={
977f, -105f, 75f 
};
Var0.f_5=-1900237971;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 86:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1391f, 1163f, 114f 
};
Var0.f_5=2077901353;
break;
case 87:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1391f, 1161f, 114f 
};
Var0.f_5=-2102079126;
break;
case 88:
Var0.f_3=joaat("prop_cs6_03_door_l");
Var0={
1396f, 1143f, 115f 
};
Var0.f_5=-1905793212;
break;
case 89:
Var0.f_3=joaat("prop_cs6_03_door_r");
Var0={
1396f, 1141f, 115f 
};
Var0.f_5=-1797032505;
break;
case 90:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1409f, 1146f, 114f 
};
Var0.f_5=-62235167;
break;
case 91:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1409f, 1148f, 114f 
};
Var0.f_5=-1727188163;
break;
case 92:
Var0.f_3=joaat("v_ilev_ra_door1_l");
Var0={
1408f, 1159f, 114f 
};
Var0.f_5=-562748873;
break;
case 93:
Var0.f_3=joaat("v_ilev_ra_door1_r");
Var0={
1408f, 1161f, 114f 
};
Var0.f_5=1976429759;
break;
case 94:
Var0.f_3=joaat("prop_gar_door_01");
Var0={
-1067f, -1666f, 5f 
};
Var0.f_5=1341041543;
break;
case 95:
Var0.f_3=joaat("prop_gar_door_02");
Var0={
-1065f, -1669f, 5f 
};
Var0.f_5=-1631467220;
break;
case 96:
Var0.f_3=joaat("prop_map_door_01");
Var0={
-1104,66f, -1638,48f, 4,68f 
};
Var0.f_5=-1788473129;
break;
case 97:
Var0.f_3=joaat("v_ilev_fib_door1");
Var0={
-31,72f, -1101,85f, 26,57f 
};
Var0.f_5=-1831288286;
break;
case 98:
Var0.f_3=joaat("v_ilev_tort_door");
Var0={
134,4f, -2204,1f, 7,52f 
};
Var0.f_5=963876966;
break;
case 99:
Var0.f_3=joaat("v_ilev_bl_shutter2");
Var0={
3628f, 3747f, 28f 
};
Var0.f_5=1773088812;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 100:
Var0.f_3=joaat("v_ilev_bl_shutter2");
Var0={
3621f, 3752f, 28f 
};
Var0.f_5=-1332101528;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 101:
Var0.f_3=joaat("v_ilev_rc_door3_l");
Var0={
-608,73f, -1610,32f, 27,16f 
};
Var0.f_5=-1811763714;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 102:
Var0.f_3=joaat("v_ilev_rc_door3_r");
Var0={
-611,32f, -1610,09f, 27,16f 
};
Var0.f_5=1608500665;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 103:
Var0.f_3=joaat("v_ilev_rc_door3_l");
Var0={
-592,94f, -1631,58f, 27,16f 
};
Var0.f_5=-1456048340;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 104:
Var0.f_3=joaat("v_ilev_rc_door3_r");
Var0={
-592,71f, -1628,99f, 27,16f 
};
Var0.f_5=943854909;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 105:
Var0.f_3=joaat("v_ilev_ss_door04");
Var0={
1991f, 3053f, 47f 
};
Var0.f_5=-89065356;
break;
case 106:
Var0.f_3=joaat("v_ilev_fh_door4");
Var0={
1988,353f, 3054,411f, 47,3204f 
};
Var0.f_5=-925491840;
break;
case 107:
Var0.f_3=joaat("prop_epsilon_door_l");
Var0={
-700,17f, 47,31f, 44,3f 
};
Var0.f_5=1999872275;
break;
case 108:
Var0.f_3=joaat("prop_epsilon_door_r");
Var0={
-697,94f, 48,35f, 44,3f 
};
Var0.f_5=1999872275;
break;
case 109:
Var0.f_3=joaat("v_ilev_epsstoredoor");
Var0={
241,3574f, 361,0488f, 105,8963f 
};
Var0.f_5=1538555582;
break;
case 110:
Var0.f_3=joaat("prop_ch2_09c_garage_door");
Var0={
-689,11f, 506,97f, 110,64f 
};
Var0.f_5=-961994186;
break;
case 111:
Var0.f_3=joaat("v_ilev_door_orangesolid");
Var0={
-1055,96f, -236,43f, 44,17f 
};
Var0.f_5=-1772472848;
break;
case 112:
Var0.f_3=joaat("prop_magenta_door");
Var0={
29f, 3661f, 41f 
};
Var0.f_5=-46374650;
break;
case 113:
Var0.f_3=joaat("prop_cs4_05_tdoor");
Var0={
32f, 3667f, 41f 
};
Var0.f_5=-358302761;
break;
case 114:
Var0.f_3=joaat("v_ilev_housedoor1");
Var0={
87f, -1959f, 21f 
};
Var0.f_5=-1237936041;
break;
case 115:
Var0.f_3=joaat("v_ilev_fh_frntdoor");
Var0={
0f, -1823f, 30f 
};
Var0.f_5=1487374207;
break;
case 116:
Var0.f_3=joaat("p_cut_door_03");
Var0={
23,34f, -1897,6f, 23,05f 
};
Var0.f_5=-199126299;
break;
case 117:
Var0.f_3=joaat("p_cut_door_02");
Var0={
524,2f, 3081,14f, 41,16f 
};
Var0.f_5=-897071863;
break;
case 118:
Var0.f_3=joaat("v_ilev_po_door");
Var0={
-1910,58f, -576,01f, 19,25f 
};
Var0.f_5=-864465775;
break;
case 119:
Var0.f_3=joaat("prop_ss1_10_door_l");
Var0={
-720,39f, 256,86f, 80,29f 
};
Var0.f_5=-208439480;
break;
case 120:
Var0.f_3=joaat("prop_ss1_10_door_r");
Var0={
-718,42f, 257,79f, 80,29f 
};
Var0.f_5=-1001088805;
break;
case 121:
Var0.f_3=joaat("v_ilev_fibl_door02");
Var0={
106,38f, -742,7f, 46,18f 
};
Var0.f_5=756894459;
break;
case 122:
Var0.f_3=joaat("v_ilev_fibl_door01");
Var0={
105,76f, -746,65f, 46,18f 
};
Var0.f_5=476981677;
break;
case 123:
Var0.f_3=joaat("v_ilev_ct_door01");
Var0={
-2343,53f, 3265,37f, 32,96f 
};
Var0.f_5=2081647379;
break;
case 124:
Var0.f_3=joaat("v_ilev_ct_door01");
Var0={
-2342,23f, 3267,62f, 32,96f 
};
Var0.f_5=2081647379;
break;
case 125:
Var0.f_3=joaat("ap1_02_door_l");
Var0={
-1041,933f, -2748,167f, 22,0308f 
};
Var0.f_5=169965357;
break;
case 126:
Var0.f_3=joaat("ap1_02_door_r");
Var0={
-1044,841f, -2746,489f, 22,0308f 
};
Var0.f_5=311232516;
break;
case 128:
Var0.f_3=joaat("v_ilev_fb_doorshortl");
Var0={
-1045,12f, -232,004f, 39,4379f 
};
Var0.f_5=-1563127729;
break;
case 129:
Var0.f_3=joaat("v_ilev_fb_doorshortr");
Var0={
-1046,516f, -229,3581f, 39,4379f 
};
Var0.f_5=759145763;
break;
case 130:
Var0.f_3=joaat("v_ilev_fb_door01");
Var0={
-1083,62f, -260,4167f, 38,1867f 
};
Var0.f_5=-84399179;
break;
case 131:
Var0.f_3=joaat("v_ilev_fb_door02");
Var0={
-1080,974f, -259,0204f, 38,1867f 
};
Var0.f_5=-461898059;
break;
case 127:
Var0.f_3=joaat("v_ilev_gtdoor");
Var0={
-1042,57f, -240,6f, 38,11f 
};
Var0.f_5=1259065971;
break;
case 132:
Var0.f_3=joaat("prop_damdoor_01");
Var0={
1385,258f, -2079,949f, 52,7638f 
};
Var0.f_5=-884051216;
break;
case 133:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
1656,57f, 4849,66f, 42,35f 
};
Var0.f_5=243782214;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 134:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
1656,25f, 4852,24f, 42,35f 
};
Var0.f_5=714115627;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 135:
Var0.f_3=joaat("prop_sec_barrier_ld_01a");
Var0={
-1051,402f, -474,6847f, 36,6199f 
};
Var0.f_5=1668106976;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 136:
Var0.f_3=joaat("prop_sec_barrier_ld_01a");
Var0={
-1049,285f, -476,6376f, 36,7584f 
};
Var0.f_5=1382347031;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 137:
Var0.f_3=joaat("prop_sec_barrier_ld_02a");
Var0={
-1210,957f, -580,8765f, 27,2373f 
};
Var0.f_5=-966790948;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 138:
Var0.f_3=joaat("prop_sec_barrier_ld_02a");
Var0={
-1212,445f, -578,4401f, 27,2373f 
};
Var0.f_5=-2068750132;
MISC::SET_BIT(&(Var0.f_4), true);
break;
case 139:
Var0.f_3=joaat("v_ilev_roc_door4");
Var0={
-565,1712f, 276,6259f, 83,2863f 
};
Var0.f_5=-1716533184;
break;
case 140:
Var0.f_3=joaat("v_ilev_roc_door4");
Var0={
-561,2863f, 293,5043f, 87,7771f 
};
Var0.f_5=2146505927;
break;
case 141:
Var0.f_3=joaat("p_jewel_door_l");
Var0={
-631,96f, -236,33f, 38,21f 
};
Var0.f_5=1874948872;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 142:
Var0.f_3=joaat("p_jewel_door_r1");
Var0={
-630,43f, -238,44f, 38,21f 
};
Var0.f_5=-1965020851;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 145:
Var0.f_3=joaat("prop_ld_bankdoors_01");
Var0={
231,62f, 216,23f, 106,4f 
};
Var0.f_5=1951546856;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 146:
Var0.f_3=joaat("prop_ld_bankdoors_01");
Var0={
232,72f, 213,88f, 106,4f 
};
Var0.f_5=-431382051;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 143:
Var0.f_3=joaat("hei_prop_hei_bankdoor_new");
Var0={
258,32f, 203,84f, 106,43f 
};
Var0.f_5=-293975210;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 144:
Var0.f_3=joaat("hei_prop_hei_bankdoor_new");
Var0={
260,76f, 202,95f, 106,43f 
};
Var0.f_5=-785215289;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 148:
Var0.f_3=joaat("hei_v_ilev_bk_gate_pris");
Var0={
256,31f, 220,66f, 106,43f 
};
Var0.f_5=-366143778;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 147:
Var0.f_3=joaat("v_ilev_bk_door");
Var0={
266,36f, 217,57f, 110,43f 
};
Var0.f_5=440819155;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 149:
Var0.f_3=joaat("v_ilev_shrf2door");
Var0={
-442,66f, 6015,222f, 31,8663f 
};
Var0.f_5=-588495243;
break;
case 150:
Var0.f_3=joaat("v_ilev_shrf2door");
Var0={
-444,4985f, 6017,06f, 31,8663f 
};
Var0.f_5=1815504139;
break;
case 151:
Var0.f_3=joaat("v_ilev_shrfdoor");
Var0={
1855,685f, 3683,93f, 34,5928f 
};
Var0.f_5=1344911780;
break;
case 152:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1223,35f, -172,41f, 39,98f 
};
Var0.f_5=-320891223;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 153:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1220,93f, -173,68f, 39,98f 
};
Var0.f_5=1511747875;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 154:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1211,99f, -190,57f, 39,98f 
};
Var0.f_5=-1517722103;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 155:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1213,26f, -192,98f, 39,98f 
};
Var0.f_5=-1093199712;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 156:
Var0.f_3=joaat("prop_bhhotel_door_l");
Var0={
-1217,77f, -201,54f, 39,98f 
};
Var0.f_5=1902048492;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 157:
Var0.f_3=joaat("prop_bhhotel_door_r");
Var0={
-1219,04f, -203,95f, 39,98f 
};
Var0.f_5=-444768985;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 158:
Var0.f_3=joaat("prop_ch3_04_door_01l");
Var0={
2514,32f, -317,34f, 93,32f 
};
Var0.f_5=404057594;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 159:
Var0.f_3=joaat("prop_ch3_04_door_01r");
Var0={
2512,42f, -319,26f, 93,32f 
};
Var0.f_5=-1417472813;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 160:
Var0.f_3=joaat("prop_ch3_01_trlrdoor_l");
Var0={
2333,23f, 2574,97f, 47,03f 
};
Var0.f_5=-1376084479;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 161:
Var0.f_3=joaat("prop_ch3_01_trlrdoor_r");
Var0={
2329,65f, 2576,64f, 47,03f 
};
Var0.f_5=457472151;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 162:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
16,1279f, -1114,605f, 29,9469f 
};
Var0.f_5=1071759151;
break;
case 163:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
18,572f, -1115,495f, 29,9469f 
};
Var0.f_5=-2119023917;
break;
case 165:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
1698,176f, 3751,506f, 34,8553f 
};
Var0.f_5=-1488490473;
break;
case 166:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
1699,937f, 3753,42f, 34,8553f 
};
Var0.f_5=-511187813;
break;
case 167:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
244,7274f, -44,0791f, 70,91f 
};
Var0.f_5=-248569395;
break;
case 168:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
243,8379f, -46,5232f, 70,91f 
};
Var0.f_5=989443413;
break;
case 169:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
845,3624f, -1024,539f, 28,3448f 
};
Var0.f_5=2022251829;
break;
case 170:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
842,7684f, -1024,539f, 23,3448f 
};
Var0.f_5=649820567;
break;
case 171:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-326,1122f, 6075,27f, 31,6047f 
};
Var0.f_5=537455378;
break;
case 172:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-324,273f, 6077,109f, 31,6047f 
};
Var0.f_5=1121431731;
break;
case 173:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-665,2424f, -944,3256f, 21,9792f 
};
Var0.f_5=-1437380438;
break;
case 174:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-662,6414f, -944,3256f, 21,9792f 
};
Var0.f_5=-946336965;
break;
case 175:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-1313,826f, -389,1259f, 36,8457f 
};
Var0.f_5=1893144650;
break;
case 176:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-1314,465f, -391,6472f, 36,8457f 
};
Var0.f_5=435841678;
break;
case 177:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-1114,009f, 2689,77f, 18,7041f 
};
Var0.f_5=948508314;
break;
case 178:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-1112,071f, 2691,505f, 18,7041f 
};
Var0.f_5=-1796714665;
break;
case 179:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
-3164,845f, 1081,392f, 20,9887f 
};
Var0.f_5=-1155247245;
break;
case 180:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
-3163,812f, 1083,778f, 20,9887f 
};
Var0.f_5=782482084;
break;
case 181:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
2570,905f, 303,3556f, 108,8848f 
};
Var0.f_5=-1194470801;
break;
case 182:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
2568,304f, 303,3556f, 108,8848f 
};
Var0.f_5=-2129698061;
break;
case 183:
Var0.f_3=joaat("v_ilev_gc_door04");
Var0={
813,1779f, -2148,27f, 29,7689f 
};
Var0.f_5=1071759151;
break;
case 184:
Var0.f_3=joaat("v_ilev_gc_door03");
Var0={
810,5769f, -2148,27f, 29,7689f 
};
Var0.f_5=-2119023917;
break;
case 164:
Var0.f_3=joaat("v_ilev_gc_door01");
Var0={
6,8179f, -1098,209f, 29,9469f 
};
Var0.f_5=1487704245;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 185:
Var0.f_3=joaat("v_ilev_gc_door01");
Var0={
827,5342f, -2160,493f, 29,7688f 
};
Var0.f_5=1529812051;
MISC::SET_BIT(&(Var0.f_4), 3);
break;
case 186:
Var0.f_3=joaat("prop_lrggate_01c_l");
Var0={
-1107,01f, 289,38f, 64,76f 
};
Var0.f_5=904342475;
break;
case 187:
Var0.f_3=joaat("prop_lrggate_01c_r");
Var0={
-1101,62f, 290,36f, 64,76f 
};
Var0.f_5=-795418380;
break;
case 188:
Var0.f_3=joaat("prop_lrggate_01c_l");
Var0={
-1138,64f, 300,82f, 67,18f 
};
Var0.f_5=-1502457334;
break;
case 189:
Var0.f_3=joaat("prop_lrggate_01c_r");
Var0={
-1137,05f, 295,59f, 67,18f 
};
Var0.f_5=-1994188940;
break;
case 190:
Var0.f_3=joaat("v_ilev_bl_doorel_l");
Var0={
-2053,16f, 3239,49f, 30,5f 
};
Var0.f_5=-621770121;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 191:
Var0.f_3=joaat("v_ilev_bl_doorel_r");
Var0={
-2054,39f, 3237,23f, 30,5f 
};
Var0.f_5=1018580481;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 192:
Var0.f_3=joaat("v_ilev_cbankcountdoor01");
Var0={
-108,91f, 6469,11f, 31,91f 
};
Var0.f_5=421926217;
break;
case 193:
Var0.f_3=joaat("prop_fnclink_03gate5");
Var0={
-182,91f, 6168,37f, 32,14f 
};
Var0.f_5=-1331552374;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
}
switch (iParam0){
case 196:
Var0.f_3=joaat("v_ilev_csr_door_l");
Var0={
-59,89f, -1092,95f, 26,88f 
};
Var0.f_5=-293141277;
break;
case 197:
Var0.f_3=joaat("v_ilev_csr_door_r");
Var0={
-60,55f, -1094,75f, 26,89f 
};
Var0.f_5=506750037;
break;
case 194:
Var0.f_3=joaat("v_ilev_csr_door_l");
Var0={
-39,13f, -1108,22f, 26,72f 
};
Var0.f_5=1496005418;
break;
case 195:
Var0.f_3=joaat("v_ilev_csr_door_r");
Var0={
-37,33f, -1108,87f, 26,72f 
};
Var0.f_5=-1863079210;
break;
case 198:
Var0.f_3=joaat("prop_ron_door_01");
Var0={
1943,73f, 3803,63f, 32,31f 
};
Var0.f_5=-2018911784;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 199:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
316,39f, -276,49f, 54,52f 
};
Var0.f_5=-93934272;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 200:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
313,96f, -275,6f, 54,52f 
};
Var0.f_5=667682830;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 201:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
-2965,71f, 484,22f, 16,05f 
};
Var0.f_5=1876735830;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 202:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
-2965,82f, 481,63f, 16,05f 
};
Var0.f_5=-2112857171;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 205:
Var0.f_3=joaat("v_ilev_abbmaindoor");
Var0={
962,1f, -2183,83f, 31,06f 
};
Var0.f_5=2046930518;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 206:
Var0.f_3=joaat("v_ilev_abbmaindoor2");
Var0={
961,79f, -2187,08f, 31,06f 
};
Var0.f_5=1208502884;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 207:
Var0.f_3=joaat("prop_ch3_04_door_02");
Var0={
2508,43f, -336,63f, 115,76f 
};
Var0.f_5=1986432421;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 208:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2255,19f, 322,26f, 184,93f 
};
Var0.f_5=-722798986;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 209:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2254,06f, 319,7f, 184,93f 
};
Var0.f_5=204301578;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 210:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2301,13f, 336,91f, 184,93f 
};
Var0.f_5=-320140460;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 211:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2298,57f, 338,05f, 184,93f 
};
Var0.f_5=65222916;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 212:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2222,32f, 305,86f, 184,93f 
};
Var0.f_5=-920027322;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 213:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2221,19f, 303,3f, 184,93f 
};
Var0.f_5=-58432001;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 214:
Var0.f_3=joaat("prop_ch1_07_door_01l");
Var0={
-2280,6f, 265,43f, 184,93f 
};
Var0.f_5=-2007378629;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 215:
Var0.f_3=joaat("prop_ch1_07_door_01r");
Var0={
-2278,04f, 266,57f, 184,93f 
};
Var0.f_5=418772613;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 216:
Var0.f_3=joaat("prop_gar_door_04");
Var0={
778,31f, -1867,49f, 30,66f 
};
Var0.f_5=1679064921;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 217:
Var0.f_3=joaat("prop_gate_tep_01_l");
Var0={
-721,35f, 91,01f, 56,68f 
};
Var0.f_5=412198396;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 218:
Var0.f_3=joaat("prop_gate_tep_01_r");
Var0={
-728,84f, 88,64f, 56,68f 
};
Var0.f_5=-1053755588;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 219:
Var0.f_3=joaat("prop_artgallery_02_dr");
Var0={
-2287,62f, 363,9f, 174,93f 
};
Var0.f_5=-53446139;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 220:
Var0.f_3=joaat("prop_artgallery_02_dl");
Var0={
-2289,78f, 362,91f, 174,93f 
};
Var0.f_5=1333960556;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 221:
Var0.f_3=joaat("prop_artgallery_02_dr");
Var0={
-2289,86f, 362,88f, 174,93f 
};
Var0.f_5=-41786493;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 222:
Var0.f_3=joaat("prop_artgallery_02_dl");
Var0={
-2292,01f, 361,89f, 174,93f 
};
Var0.f_5=1750120734;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 223:
Var0.f_3=joaat("prop_fnclink_07gate1");
Var0={
1803,94f, 3929,01f, 33,72f 
};
Var0.f_5=1661506222;
break;
case 203:
Var0.f_3=joaat("v_ilev_genbankdoor2");
Var0={
-348,81f, -47,26f, 49,39f 
};
Var0.f_5=-2116116146;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 204:
Var0.f_3=joaat("v_ilev_genbankdoor1");
Var0={
-351,26f, -46,41f, 49,39f 
};
Var0.f_5=-74083138;
MISC::SET_BIT(&(Var0.f_4), 2);
break;
case 224:
Var0.f_3=joaat("prop_abat_slide");
Var0={
962,9084f, -2105,814f, 34,6432f 
};
Var0.f_5=-1670085357;
break;
}
return Var0;
}


void func_470(int iParam0){
if(iParam0==10){
return;
}
switch (iParam0){
case 0:
case 1:
if(func_471(1)){
MISC::SET_SAVE_HOUSE(Global_95479[1 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[0 /*10*/].f_8, func_471(0), false);
}elseif(func_471(0)){
MISC::SET_SAVE_HOUSE(Global_95479[0 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[1 /*10*/].f_8, func_471(1), false);
}
break;
case 2:
case 3:
case 4:
if(func_471(3)){
MISC::SET_SAVE_HOUSE(Global_95479[3 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[4 /*10*/].f_8, func_471(4), false);
MISC::SET_SAVE_HOUSE(Global_95479[2 /*10*/].f_8, func_471(2), false);
}elseif(func_471(4)){
MISC::SET_SAVE_HOUSE(Global_95479[4 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[3 /*10*/].f_8, func_471(3), false);
MISC::SET_SAVE_HOUSE(Global_95479[2 /*10*/].f_8, func_471(2), false);
}elseif(func_471(2)){
MISC::SET_SAVE_HOUSE(Global_95479[2 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[3 /*10*/].f_8, func_471(3), false);
MISC::SET_SAVE_HOUSE(Global_95479[4 /*10*/].f_8, func_471(4), false);
}
break;
case 5:
case 6:
if(func_471(6)){
MISC::SET_SAVE_HOUSE(Global_95479[6 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[5 /*10*/].f_8, func_471(5), false);
}elseif(func_471(5)){
MISC::SET_SAVE_HOUSE(Global_95479[5 /*10*/].f_8, true, true);
MISC::SET_SAVE_HOUSE(Global_95479[6 /*10*/].f_8, func_471(6), false);
}
break;
}}


bool func_471(int iParam0){
return MISC::IS_BIT_SET(Global_113386.f_7229[iParam0], 0);
}


void func_472(int iParam0, bool bParam1){
int iVar0;
int iVar1;
int iVar2;
struct<4> Var3;
bool bVar11;
if(iParam0==10){
return;
}
bVar11=MISC::IS_BIT_SET(Global_113386.f_7229[iParam0], 0);
if(iParam0==5 && MISC::IS_BIT_SET(Global_113386.f_7229[6], 0)){
bVar11=true;
}
iVar0=0;
while (iVar0 < 3){
iVar1=0;
StringCopy(&Var3, "", 32);
iVar2=10;
while (func_473(iVar0, iVar1, &Var3, &iVar2)){
if(iVar2==iParam0){
if(bVar11){
if(bParam1){
OBJECT::_CLEAR_GARAGE_AREA(MISC::GET_HASH_KEY(&Var3), false);
}}
OBJECT::ENABLE_SAVING_IN_GARAGE(MISC::GET_HASH_KEY(&Var3), bVar11);
}
iVar1++;
}
iVar0++;
}}

int func_473(int iParam0, int iParam1, char* sParam2, int iParam3){
StringCopy(sParam2, "", 32);
switch (iParam0){
case 0:
if(iParam1==0){
StringCopy(sParam2, "Michael - Beverly Hills", 32);
*iParam3=0;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - Countryside", 32);
*iParam3=1;
return 1;
}
break;
case 1:
if(iParam1==0){
StringCopy(sParam2, "Franklin - Aunt", 32);
*iParam3=5;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Franklin - Hills", 32);
*iParam3=6;
return 1;
}
break;
case 2:
if(iParam1==0){
StringCopy(sParam2, "Trevor - Countryside", 32);
*iParam3=2;
return 1;
}elseif(iParam1==1){
StringCopy(sParam2, "Trevor - City", 32);
*iParam3=3;
return 1;
}elseif(iParam1==2){
StringCopy(sParam2, "Trevor - Stripclub", 32);
*iParam3=4;
return 1;
}
break;
}
return 0;
}


void func_474(int iParam0){
bool bVar0;
if(iParam0==10){
return;
}
if(Global_95479[iParam0 /*10*/].f_7==263){
return;
}
bVar0=false;
if(MISC::IS_BIT_SET(Global_113386.f_7229[iParam0], 0)){
if(Global_95479[iParam0 /*10*/].f_9 !=func_477()){
bVar0=true;
}elseif(!func_475(iParam0)){
bVar0=true;
}}
if(iParam0==5){
if(func_471(6)){
bVar0=false;
}}
if(func_243(14)){
bVar0=false;
}
func_242(Global_95479[iParam0 /*10*/].f_7, bVar0, 0);
}

int func_475(int iParam0){
int iVar0;
char* sVar1;
int iVar9;
if(Global_100493.f_373==0){
return 0;
}
if(iParam0==10){
iVar0=0;
while (iVar0 < 10){
if(func_475(iVar0)){
return 1;
}
iVar0++;
}}elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
func_476(iParam0, &sVar1);
iVar9=INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Global_95479[iParam0 /*10*/].f_3, &sVar1);
if(iVar9 !=0 && Global_100493.f_373==iVar9){
return 1;
}}
return 0;
}


bool func_476(int iParam0, char* sParam1){
StringCopy(sParam1, "", 32);
switch (iParam0){
case 0:
StringCopy(sParam1, "v_michael", 32);
break;
case 5:
StringCopy(sParam1, "v_franklins", 32);
break;
case 6:
StringCopy(sParam1, "v_franklinshouse", 32);
break;
case 2:
case 1:
if(STREAMING::IS_IPL_ACTIVE("TrevorsTrailer")){
StringCopy(sParam1, "v_trailer", 32);
}elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTidy")){
StringCopy(sParam1, "V_TrailerTIDY", 32);
}elseif(STREAMING::IS_IPL_ACTIVE("TrevorsTrailerTrash")){
StringCopy(sParam1, "V_TrailerTRASH", 32);
}
break;
case 3:
StringCopy(sParam1, "v_trevors", 32);
break;
case 4:
StringCopy(sParam1, "v_strip3", 32);
break;
case 8:
case 7:
case 9:
StringCopy(sParam1, "v_psycheoffice", 32);
break;
}
return !MISC::ARE_STRINGS_EQUAL(sParam1, "");
}

int func_477(){
func_67();
return Global_113386.f_2363.f_539.f_4321;
}


void func_478(){
func_251(118, 1);
func_412(3, 1);
}


void func_479(){
func_251(9, 1);
}


void func_480(){
func_194(866793964, 1, 2, 19, 60000, 10000, 2, 44, -1, 262144, 1);
}


void func_481(){
func_13(-1982006572);
func_13(-1501908698);
func_251(62, 1);
func_194(-899711929, 1, 2, 19, 800000, 20000, -1, 0, -1, 0, 1);
}


void func_482(){
func_360(40, 1);
func_360(48, 1);
func_360(58, 1);
func_360(71, 1);
}


void func_483(int iParam0){
func_484(iParam0);
}


void func_484(int iParam0){
int iVar0;
iVar0=0;
while (iVar0 < 12){
Global_113386.f_2363.f_539[iParam0 /*65*/].f_13[iVar0]=0;
Global_113386.f_2363.f_539[iParam0 /*65*/][iVar0]=0;
iVar0++;
}
iVar0=0;
while (iVar0 < 9){
Global_113386.f_2363.f_539[iParam0 /*65*/].f_39[iVar0]=-1;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_49[iVar0]=-1;
iVar0++;
}
switch (iParam0){
case 0:
Global_113386.f_2363.f_539[iParam0 /*65*/].f_59=0;
break;
case 1:
Global_113386.f_2363.f_539[1 /*65*/].f_13[3]=8;
Global_113386.f_2363.f_539[1 /*65*/].f_13[4]=8;
Global_113386.f_2363.f_539[1 /*65*/].f_13[6]=6;
Global_113386.f_2363.f_539[1 /*65*/].f_13[8]=14;
Global_113386.f_2363.f_539[1 /*65*/].f_13[2]=0;
Global_113386.f_2363.f_539[1 /*65*/][2]=0;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_59=0;
break;
case 2:
Global_113386.f_2363.f_539[2 /*65*/].f_13[3]=0;
Global_113386.f_2363.f_539[2 /*65*/].f_13[4]=23;
Global_113386.f_2363.f_539[2 /*65*/].f_13[6]=10;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_59=0;
break;
}
Global_113386.f_2363.f_539[iParam0 /*65*/].f_60=-99;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_61=2;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_62=0;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_63=-99;
Global_113386.f_2363.f_539[iParam0 /*65*/].f_64=1;
Global_100166[0 /*65*/]={
Global_113386.f_2363.f_539[0 /*65*/] 
};
Global_100166[1 /*65*/]={
Global_113386.f_2363.f_539[1 /*65*/] 
};
Global_100166[2 /*65*/]={
Global_113386.f_2363.f_539[2 /*65*/] 
};
}


void func_485(){
func_410("AM_H_SHOOT", 2, 3000, 60000, 10000, 7, 0, 0, 0);
}


void func_486(){
int iVar0;
func_288(48);
func_506(48, 1);
func_505(0, 11, 1);
func_289(28, 1, 0);
func_289(29, 1, 0);
func_289(30, 1, 0);
func_289(31, 1, 0);
func_289(32, 1, 0);
func_289(33, 1, 0);
func_289(34, 1, 0);
func_289(35, 1, 0);
func_289(36, 1, 0);
func_289(37, 1, 0);
func_289(38, 1, 0);
iVar0=0;
while (iVar0 < 3){
func_487(iVar0, joaat("weapon_assaultrifle"), 1, 1);
func_487(iVar0, joaat("weapon_grenade"), 1, 1);
func_487(iVar0, joaat("weapon_pistol"), 1, 1);
func_487(iVar0, joaat("weapon_microsmg"), 1, 1);
func_487(iVar0, joaat("weapon_smg"), 1, 1);
func_487(iVar0, joaat("weapon_knife"), 1, 1);
iVar0++;
}}


void func_487(int iParam0, int iParam1, bool bParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(func_17(iParam0)){
iVar0=func_504(iParam0, iParam1);
iVar1=func_502(iParam1);
iVar2=func_501(iVar1);
if(bParam2){
MISC::SET_BIT(&iVar0, iVar2);
}else{
MISC::CLEAR_BIT(&iVar0, bVar2);
}
func_499(iParam0, iParam1, iVar0);
if(bParam3){
func_488(iParam0, iParam1);
}}}


void func_488(int iParam0, int iParam1){
int iVar0;
int iVar1;
iVar0=0;
iVar1=func_496(iParam1, iVar0);
while (iVar1 !=0){
func_489(iParam0, iParam1, iVar1, 1);
iVar0++;
iVar1=func_496(iParam1, iVar0);
}}


void func_489(int iParam0, int iParam1, int iParam2, bool bParam3){
int iVar0;
int iVar1;
int iVar2;
if(func_17(iParam0)){
iVar0=func_495(iParam0, iParam1, iParam2);
iVar1=func_493(iParam2, iParam1);
iVar2=func_492(iVar1);
if(bParam3){
MISC::SET_BIT(&iVar0, iVar2);
}else{
MISC::CLEAR_BIT(&iVar0, bVar2);
}
func_490(iParam0, iParam1, iParam2, iVar0);
}}


void func_490(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
int iVar1;
iVar0=func_493(iParam2, iParam1);
iVar1=func_491(iVar0);
switch (iVar1){
case 0:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_0"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_0"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_0"), iParam3, true);
break;
}
break;
case 1:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_1"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_1"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_1"), iParam3, true);
break;
}
break;
case 2:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_2"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_2"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_2"), iParam3, true);
break;
}
break;
case 3:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_3"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_3"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_3"), iParam3, true);
break;
}
break;
case 4:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_4"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_4"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_4"), iParam3, true);
break;
}
break;
case 5:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_5"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_5"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_5"), iParam3, true);
break;
}
break;
case 6:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_addon_unlock_6"), iParam3, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_addon_unlock_6"), iParam3, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_addon_unlock_6"), iParam3, true);
break;
}
break;
default:
break;
}}

int func_491(int iParam0){
return (iParam0 / 32);
}

int func_492(int iParam0){
return (iParam0 % 32);
}

int func_493(int iParam0, int iParam1){
return func_494(iParam0, iParam1);
}

int func_494(int iParam0, int iParam1){
switch (iParam1){
case joaat("weapon_pistol"):
switch (iParam0){
case joaat("component_pistol_clip_01"):
return 1;
break;
case joaat("component_pistol_clip_02"):
return 2;
break;
case joaat("component_at_pi_flsh"):
return 3;
break;
case joaat("component_at_pi_supp_02"):
return 4;
break;
case joaat("component_pistol_varmod_luxe"):
return 175;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 211;
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam0){
case joaat("component_combatpistol_clip_01"):
return 5;
break;
case joaat("component_combatpistol_clip_02"):
return 6;
break;
case joaat("component_at_pi_flsh"):
return 7;
break;
case joaat("component_at_pi_supp"):
return 8;
break;
case joaat("component_combatpistol_varmod_lowrider"):
return 186;
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam0){
case joaat("component_appistol_clip_01"):
return 11;
break;
case joaat("component_appistol_clip_02"):
return 12;
break;
case joaat("component_at_pi_flsh"):
return 13;
break;
case joaat("component_at_pi_supp"):
return 14;
break;
case joaat("component_appistol_varmod_luxe"):
return 164;
break;
case joaat("component_appistol_varmod_security"):
return 569;
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam0){
case joaat("component_microsmg_clip_01"):
return 15;
break;
case joaat("component_microsmg_clip_02"):
return 16;
break;
case joaat("component_at_pi_flsh"):
return 17;
break;
case joaat("component_at_scope_macro"):
return 18;
break;
case joaat("component_at_ar_supp_02"):
return 19;
break;
case joaat("component_microsmg_varmod_luxe"):
return 174;
break;
case joaat("component_microsmg_varmod_security"):
return 570;
break;
}
break;
case joaat("weapon_smg"):
switch (iParam0){
case joaat("component_smg_clip_01"):
return 22;
break;
case joaat("component_smg_clip_02"):
return 23;
break;
case joaat("component_smg_clip_03"):
return 207;
break;
case joaat("component_at_ar_flsh"):
return 24;
break;
case joaat("component_at_scope_macro_02"):
return 25;
break;
case joaat("component_at_pi_supp"):
return 26;
break;
case joaat("component_smg_varmod_luxe"):
return 179;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 212;
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam0){
case joaat("component_assaultrifle_clip_01"):
return 27;
break;
case joaat("component_assaultrifle_clip_02"):
return 28;
break;
case joaat("component_assaultrifle_clip_03"):
return 201;
break;
case joaat("component_at_ar_afgrip"):
return 29;
break;
case joaat("component_at_ar_flsh"):
return 30;
break;
case joaat("component_at_scope_macro"):
return 31;
break;
case joaat("component_at_ar_supp_02"):
return 32;
break;
case joaat("component_assaultrifle_varmod_luxe"):
return 165;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 213;
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam0){
case joaat("component_carbinerifle_clip_01"):
return 33;
break;
case joaat("component_carbinerifle_clip_02"):
return 34;
break;
case joaat("component_carbinerifle_clip_03"):
return 202;
break;
case joaat("component_at_railcover_01"):
return 35;
break;
case joaat("component_at_ar_afgrip"):
return 36;
break;
case joaat("component_at_ar_flsh"):
return 37;
break;
case joaat("component_at_scope_medium"):
return 38;
break;
case joaat("component_at_ar_supp"):
return 39;
break;
case joaat("component_carbinerifle_varmod_luxe"):
return 168;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 214;
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam0){
case joaat("component_advancedrifle_clip_01"):
return 44;
break;
case joaat("component_advancedrifle_clip_02"):
return 45;
break;
case joaat("component_at_ar_flsh"):
return 47;
break;
case joaat("component_at_scope_small"):
return 48;
break;
case joaat("component_at_ar_supp"):
return 49;
break;
case joaat("component_advancedrifle_varmod_luxe"):
return 163;
break;
}
break;
case joaat("weapon_mg"):
switch (iParam0){
case joaat("component_mg_clip_01"):
return 50;
break;
case joaat("component_mg_clip_02"):
return 51;
break;
case joaat("component_at_scope_small_02"):
return 52;
break;
case joaat("component_mg_varmod_lowrider"):
return 187;
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam0){
case joaat("component_combatmg_clip_01"):
return 53;
break;
case joaat("component_combatmg_clip_02"):
return 54;
break;
case joaat("component_at_ar_afgrip"):
return 55;
break;
case joaat("component_at_scope_medium"):
return 56;
break;
case joaat("component_combatmg_varmod_lowrider"):
return 188;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 215;
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam0){
case joaat("component_at_sr_supp"):
return 59;
break;
case joaat("component_at_ar_flsh"):
return 60;
break;
case joaat("component_pumpshotgun_varmod_lowrider"):
return 193;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 389;
break;
case joaat("component_pumpshotgun_varmod_security"):
return 571;
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam0){
case joaat("component_assaultshotgun_clip_01"):
return 64;
break;
case joaat("component_assaultshotgun_clip_02"):
return 65;
break;
case joaat("component_at_ar_afgrip"):
return 66;
break;
case joaat("component_at_ar_flsh"):
return 67;
break;
case joaat("component_at_ar_supp"):
return 68;
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam0){
case joaat("component_sniperrifle_clip_01"):
return 69;
break;
case joaat("component_at_scope_large"):
return 70;
break;
case joaat("component_at_scope_max"):
return 71;
break;
case joaat("component_at_ar_supp_02"):
return 72;
break;
case joaat("component_sniperrifle_varmod_luxe"):
return 180;
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam0){
case joaat("component_heavysniper_clip_01"):
return 76;
break;
case joaat("component_at_scope_max"):
return 77;
break;
case joaat("component_at_scope_large"):
return 82;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 216;
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam0){
case joaat("component_at_ar_afgrip"):
return 78;
break;
case joaat("component_at_ar_flsh"):
return 79;
break;
case joaat("component_at_scope_small"):
return 80;
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam0){
case joaat("component_minigun_clip_01"):
return 81;
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam0){
case joaat("component_assaultsmg_clip_01"):
return 83;
break;
case joaat("component_assaultsmg_clip_02"):
return 84;
break;
case joaat("component_at_ar_flsh"):
return 85;
break;
case joaat("component_at_scope_macro"):
return 86;
break;
case joaat("component_at_ar_supp_02"):
return 87;
break;
case joaat("component_assaultsmg_varmod_lowrider"):
return 189;
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam0){
case joaat("component_at_ar_afgrip"):
return 88;
break;
case joaat("component_at_ar_flsh"):
return 89;
break;
case joaat("component_at_ar_supp_02"):
return 90;
break;
}
break;
case joaat("weapon_pistol50"):
switch (iParam0){
case joaat("component_pistol50_clip_01"):
return 91;
break;
case joaat("component_pistol50_clip_02"):
return 92;
break;
case joaat("component_at_pi_flsh"):
return 93;
break;
case joaat("component_at_ar_supp_02"):
return 94;
break;
case joaat("component_pistol50_varmod_luxe"):
return 176;
break;
}
break;
case 392730790:
switch (iParam0){
case 195735895:
return 95;
break;
case joaat("component_at_scope_large"):
return 96;
break;
case joaat("component_at_scope_max"):
return 97;
break;
case joaat("component_at_ar_supp"):
return 98;
break;
}
break;
case -572349828:
switch (iParam0){
case -890514874:
return 105;
break;
case -507117574:
return 106;
break;
case joaat("component_at_ar_afgrip"):
return 107;
break;
case joaat("component_at_scope_medium"):
return 108;
break;
}
break;
case -1887867191:
switch (iParam0){
case -124428919:
return 109;
break;
case 1048471894:
return 110;
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam0){
case joaat("component_specialcarbine_clip_01"):
return 111;
break;
case joaat("component_specialcarbine_clip_02"):
return 112;
break;
case joaat("component_specialcarbine_clip_03"):
return 208;
break;
case joaat("component_at_ar_afgrip"):
return 113;
break;
case joaat("component_at_ar_flsh"):
return 114;
break;
case joaat("component_at_scope_medium"):
return 115;
break;
case joaat("component_at_ar_supp_02"):
return 116;
break;
case joaat("component_specialcarbine_varmod_lowrider"):
return 190;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 390;
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam0){
case joaat("component_snspistol_clip_01"):
return 117;
break;
case joaat("component_snspistol_clip_02"):
return 118;
break;
case joaat("component_at_pi_flsh"):
return 119;
break;
case joaat("component_at_pi_supp"):
return 120;
break;
case joaat("component_snspistol_varmod_lowrider"):
return 191;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 391;
break;
}
break;
case joaat("weapon_heavypistol"):
switch (iParam0){
case joaat("component_heavypistol_clip_01"):
return 121;
break;
case joaat("component_heavypistol_clip_02"):
return 122;
break;
case joaat("component_at_pi_flsh"):
return 123;
break;
case joaat("component_at_pi_supp"):
return 124;
break;
case joaat("component_heavypistol_varmod_luxe"):
return 171;
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam0){
case joaat("component_bullpuprifle_clip_01"):
return 131;
break;
case joaat("component_bullpuprifle_clip_02"):
return 132;
break;
case joaat("component_at_ar_flsh"):
return 127;
break;
case joaat("component_at_ar_supp"):
return 128;
break;
case joaat("component_at_scope_small"):
return 129;
break;
case joaat("component_at_ar_afgrip"):
return 130;
break;
case joaat("component_bullpuprifle_varmod_low"):
return 192;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 394;
break;
}
break;
case joaat("weapon_gusenberg"):
switch (iParam0){
case joaat("component_gusenberg_clip_01"):
return 125;
break;
case joaat("component_gusenberg_clip_02"):
return 126;
break;
}
break;
case joaat("weapon_vintagepistol"):
switch (iParam0){
case joaat("component_vintagepistol_clip_01"):
return 133;
break;
case joaat("component_vintagepistol_clip_02"):
return 134;
break;
case joaat("component_at_pi_supp"):
return 136;
break;
}
break;
case joaat("weapon_heavyshotgun"):
switch (iParam0){
case joaat("component_heavyshotgun_clip_01"):
return 137;
break;
case joaat("component_heavyshotgun_clip_02"):
return 140;
break;
case joaat("component_heavyshotgun_clip_03"):
return 205;
break;
case joaat("component_at_ar_flsh"):
return 145;
break;
case joaat("component_at_ar_supp_02"):
return 146;
break;
case joaat("component_at_ar_afgrip"):
return 147;
break;
}
break;
case joaat("weapon_marksmanrifle"):
switch (iParam0){
case joaat("component_marksmanrifle_clip_01"):
return 138;
break;
case joaat("component_marksmanrifle_clip_02"):
return 139;
break;
case joaat("component_at_scope_large_fixed_zoom"):
return 141;
break;
case joaat("component_at_ar_flsh"):
return 142;
break;
case joaat("component_at_ar_supp"):
return 143;
break;
case joaat("component_at_ar_afgrip"):
return 144;
break;
case joaat("component_marksmanrifle_varmod_luxe"):
return 172;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 392;
break;
}
break;
case joaat("weapon_combatpdw"):
switch (iParam0){
case joaat("component_combatpdw_clip_01"):
return 149;
break;
case joaat("component_combatpdw_clip_02"):
return 150;
break;
case joaat("component_combatpdw_clip_03"):
return 203;
break;
case joaat("component_at_ar_flsh"):
return 151;
break;
case joaat("component_at_scope_small"):
return 152;
break;
case joaat("component_at_ar_afgrip"):
return 153;
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam0){
case joaat("component_sawnoffshotgun_varmod_luxe"):
return 178;
break;
}
break;
case joaat("weapon_marksmanpistol"):
switch (iParam0){
case joaat("component_marksmanpistol_clip_01"):
return 148;
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam0){
case joaat("component_knuckle_varmod_pimp"):
return 154;
break;
case joaat("component_knuckle_varmod_ballas"):
return 155;
break;
case joaat("component_knuckle_varmod_dollar"):
return 156;
break;
case joaat("component_knuckle_varmod_diamond"):
return 157;
break;
case joaat("component_knuckle_varmod_hate"):
return 158;
break;
case joaat("component_knuckle_varmod_love"):
return 159;
break;
case joaat("component_knuckle_varmod_player"):
return 160;
break;
case joaat("component_knuckle_varmod_king"):
return 161;
break;
case joaat("component_knuckle_varmod_vagos"):
return 162;
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam0){
case joaat("component_machinepistol_clip_01"):
return 184;
break;
case joaat("component_machinepistol_clip_02"):
return 185;
break;
case joaat("component_machinepistol_clip_03"):
return 206;
break;
case joaat("component_at_pi_supp"):
return 183;
break;
}
break;
case joaat("weapon_switchblade"):
switch (iParam0){
case joaat("component_switchblade_varmod_var1"):
return 194;
break;
case joaat("component_switchblade_varmod_var2"):
return 195;
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam0){
case joaat("component_revolver_clip_01"):
return 196;
break;
case joaat("component_revolver_varmod_boss"):
return 197;
break;
case joaat("component_revolver_varmod_goon"):
return 198;
break;
case joaat("component_gunrun_mk2_upgrade"):
return 393;
break;
}
break;
case joaat("weapon_compactrifle"):
switch (iParam0){
case joaat("component_compactrifle_clip_01"):
return 199;
break;
case joaat("component_compactrifle_clip_02"):
return 200;
break;
case joaat("component_compactrifle_clip_03"):
return 204;
break;
}
break;
case joaat("weapon_minismg"):
switch (iParam0){
case joaat("component_minismg_clip_01"):
return 209;
break;
case joaat("component_minismg_clip_02"):
return 210;
break;
}
break;
case joaat("weapon_pistol_mk2"):
switch (iParam0){
case joaat("component_pistol_mk2_clip_01"):
return 217;
break;
case joaat("component_pistol_mk2_clip_02"):
return 218;
break;
case joaat("component_pistol_mk2_clip_fmj"):
return 219;
break;
case joaat("component_pistol_mk2_clip_hollowpoint"):
return 220;
break;
case joaat("component_pistol_mk2_clip_incendiary"):
return 221;
break;
case joaat("component_pistol_mk2_clip_tracer"):
return 222;
break;
case joaat("component_at_pi_flsh_02"):
return 223;
break;
case joaat("component_at_pi_rail"):
return 224;
break;
case joaat("component_at_pi_supp_02"):
return 225;
break;
case joaat("component_at_pi_comp"):
return 226;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO"):
return 367;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_02"):
return 368;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_03"):
return 369;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_04"):
return 370;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_05"):
return 371;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_06"):
return 372;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_07"):
return 373;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_08"):
return 374;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_09"):
return 375;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_10"):
return 376;
break;
case joaat("COMPONENT_PISTOL_MK2_CAMO_IND_01"):
return 377;
break;
}
break;
case joaat("weapon_smg_mk2"):
switch (iParam0){
case joaat("component_smg_mk2_clip_01"):
return 227;
break;
case joaat("component_smg_mk2_clip_02"):
return 228;
break;
case joaat("component_smg_mk2_clip_fmj"):
return 229;
break;
case joaat("component_smg_mk2_clip_hollowpoint"):
return 230;
break;
case joaat("component_smg_mk2_clip_incendiary"):
return 231;
break;
case joaat("component_smg_mk2_clip_tracer"):
return 232;
break;
case joaat("component_at_ar_flsh"):
return 233;
break;
case joaat("component_at_sights_smg"):
return 234;
break;
case joaat("component_at_scope_macro_02_smg_mk2"):
return 235;
break;
case joaat("component_at_scope_small_smg_mk2"):
return 236;
break;
case joaat("component_at_pi_supp"):
return 237;
break;
case joaat("component_at_muzzle_01"):
return 238;
break;
case joaat("component_at_muzzle_02"):
return 239;
break;
case joaat("component_at_muzzle_03"):
return 240;
break;
case joaat("component_at_muzzle_04"):
return 241;
break;
case joaat("component_at_muzzle_05"):
return 242;
break;
case joaat("component_at_muzzle_06"):
return 243;
break;
case joaat("component_at_muzzle_07"):
return 244;
break;
case joaat("component_at_sb_barrel_01"):
return 245;
break;
case joaat("component_at_sb_barrel_02"):
return 246;
break;
case joaat("COMPONENT_SMG_MK2_CAMO"):
return 378;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_02"):
return 379;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_03"):
return 380;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_04"):
return 381;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_05"):
return 382;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_06"):
return 383;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_07"):
return 384;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_08"):
return 385;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_09"):
return 386;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_10"):
return 387;
break;
case joaat("COMPONENT_SMG_MK2_CAMO_IND_01"):
return 388;
break;
}
break;
case joaat("weapon_heavysniper_mk2"):
switch (iParam0){
case joaat("component_heavysniper_mk2_clip_01"):
return 247;
break;
case joaat("component_heavysniper_mk2_clip_02"):
return 248;
break;
case joaat("component_heavysniper_mk2_clip_armorpiercing"):
return 249;
break;
case joaat("component_heavysniper_mk2_clip_explosive"):
return 250;
break;
case joaat("component_heavysniper_mk2_clip_fmj"):
return 251;
break;
case joaat("component_heavysniper_mk2_clip_incendiary"):
return 252;
break;
case joaat("component_at_scope_large_mk2"):
return 253;
break;
case joaat("component_at_scope_max"):
return 254;
break;
case joaat("component_at_scope_nv"):
return 255;
break;
case joaat("component_at_scope_thermal"):
return 256;
break;
case joaat("component_at_sr_supp_03"):
return 257;
break;
case joaat("component_at_muzzle_08"):
return 258;
break;
case joaat("component_at_muzzle_09"):
return 259;
break;
case joaat("component_at_sr_barrel_01"):
return 260;
break;
case joaat("component_at_sr_barrel_02"):
return 261;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO"):
return 356;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_02"):
return 357;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_03"):
return 358;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_04"):
return 359;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_05"):
return 360;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_06"):
return 361;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_07"):
return 362;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_08"):
return 363;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_09"):
return 364;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_10"):
return 365;
break;
case joaat("COMPONENT_HEAVYSNIPER_MK2_CAMO_IND_01"):
return 366;
break;
}
break;
case joaat("weapon_combatmg_mk2"):
switch (iParam0){
case joaat("component_combatmg_mk2_clip_01"):
return 262;
break;
case joaat("component_combatmg_mk2_clip_02"):
return 263;
break;
case joaat("component_combatmg_mk2_clip_armorpiercing"):
return 264;
break;
case joaat("component_combatmg_mk2_clip_fmj"):
return 265;
break;
case joaat("component_combatmg_mk2_clip_incendiary"):
return 266;
break;
case joaat("component_combatmg_mk2_clip_tracer"):
return 267;
break;
case joaat("component_at_ar_afgrip_02"):
return 268;
break;
case joaat("component_at_sights"):
return 269;
break;
case joaat("component_at_scope_small_mk2"):
return 270;
break;
case joaat("component_at_scope_medium_mk2"):
return 271;
break;
case joaat("component_at_muzzle_01"):
return 272;
break;
case joaat("component_at_muzzle_02"):
return 273;
break;
case joaat("component_at_muzzle_03"):
return 274;
break;
case joaat("component_at_muzzle_04"):
return 275;
break;
case joaat("component_at_muzzle_05"):
return 276;
break;
case joaat("component_at_muzzle_06"):
return 277;
break;
case joaat("component_at_muzzle_07"):
return 278;
break;
case joaat("component_at_mg_barrel_01"):
return 279;
break;
case joaat("component_at_mg_barrel_02"):
return 280;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO"):
return 345;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_02"):
return 346;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_03"):
return 347;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_04"):
return 348;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_05"):
return 349;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_06"):
return 350;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_07"):
return 351;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_08"):
return 352;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_09"):
return 353;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_10"):
return 354;
break;
case joaat("COMPONENT_COMBATMG_MK2_CAMO_IND_01"):
return 355;
break;
}
break;
case joaat("weapon_assaultrifle_mk2"):
switch (iParam0){
case joaat("component_assaultrifle_mk2_clip_01"):
return 281;
break;
case joaat("component_assaultrifle_mk2_clip_02"):
return 282;
break;
case joaat("component_assaultrifle_mk2_clip_armorpiercing"):
return 283;
break;
case joaat("component_assaultrifle_mk2_clip_fmj"):
return 284;
break;
case joaat("component_assaultrifle_mk2_clip_incendiary"):
return 285;
break;
case joaat("component_assaultrifle_mk2_clip_tracer"):
return 286;
break;
case joaat("component_at_ar_afgrip_02"):
return 287;
break;
case joaat("component_at_ar_flsh"):
return 288;
break;
case joaat("component_at_sights"):
return 289;
break;
case joaat("component_at_scope_macro_mk2"):
return 290;
break;
case joaat("component_at_scope_medium_mk2"):
return 291;
break;
case joaat("component_at_ar_supp_02"):
return 292;
break;
case joaat("component_at_muzzle_01"):
return 293;
break;
case joaat("component_at_muzzle_02"):
return 294;
break;
case joaat("component_at_muzzle_03"):
return 295;
break;
case joaat("component_at_muzzle_04"):
return 296;
break;
case joaat("component_at_muzzle_05"):
return 297;
break;
case joaat("component_at_muzzle_06"):
return 298;
break;
case joaat("component_at_muzzle_07"):
return 299;
break;
case joaat("component_at_ar_barrel_01"):
return 300;
break;
case joaat("component_at_ar_barrel_02"):
return 301;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO"):
return 323;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_02"):
return 324;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_03"):
return 325;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_04"):
return 326;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_05"):
return 327;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_06"):
return 328;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_07"):
return 329;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_08"):
return 330;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_09"):
return 331;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_10"):
return 332;
break;
case joaat("COMPONENT_ASSAULTRIFLE_MK2_CAMO_IND_01"):
return 333;
break;
}
break;
case joaat("weapon_carbinerifle_mk2"):
switch (iParam0){
case joaat("component_carbinerifle_mk2_clip_01"):
return 302;
break;
case joaat("component_carbinerifle_mk2_clip_02"):
return 303;
break;
case joaat("component_carbinerifle_mk2_clip_armorpiercing"):
return 304;
break;
case joaat("component_carbinerifle_mk2_clip_fmj"):
return 305;
break;
case joaat("component_carbinerifle_mk2_clip_incendiary"):
return 306;
break;
case joaat("component_carbinerifle_mk2_clip_tracer"):
return 307;
break;
case joaat("component_at_ar_afgrip_02"):
return 308;
break;
case joaat("component_at_ar_flsh"):
return 309;
break;
case joaat("component_at_sights"):
return 310;
break;
case joaat("component_at_scope_macro_mk2"):
return 311;
break;
case joaat("component_at_scope_medium_mk2"):
return 312;
break;
case joaat("component_at_ar_supp"):
return 313;
break;
case joaat("component_at_muzzle_01"):
return 314;
break;
case joaat("component_at_muzzle_02"):
return 315;
break;
case joaat("component_at_muzzle_03"):
return 316;
break;
case joaat("component_at_muzzle_04"):
return 317;
break;
case joaat("component_at_muzzle_05"):
return 318;
break;
case joaat("component_at_muzzle_06"):
return 319;
break;
case joaat("component_at_muzzle_07"):
return 320;
break;
case joaat("component_at_cr_barrel_01"):
return 321;
break;
case joaat("component_at_cr_barrel_02"):
return 322;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO"):
return 334;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_02"):
return 335;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_03"):
return 336;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_04"):
return 337;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_05"):
return 338;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_06"):
return 339;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_07"):
return 340;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_08"):
return 341;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_09"):
return 342;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_10"):
return 343;
break;
case joaat("COMPONENT_CARBINERIFLE_MK2_CAMO_IND_01"):
return 344;
break;
}
break;
case joaat("weapon_pumpshotgun_mk2"):
switch (iParam0){
case joaat("component_pumpshotgun_mk2_clip_01"):
return 395;
break;
case joaat("component_pumpshotgun_mk2_clip_armorpiercing"):
return 396;
break;
case joaat("component_pumpshotgun_mk2_clip_explosive"):
return 397;
break;
case joaat("component_pumpshotgun_mk2_clip_hollowpoint"):
return 398;
break;
case joaat("component_pumpshotgun_mk2_clip_incendiary"):
return 399;
break;
case joaat("component_at_ar_flsh"):
return 400;
break;
case joaat("component_at_sights"):
return 401;
break;
case joaat("component_at_scope_macro_mk2"):
return 402;
break;
case joaat("component_at_scope_small_mk2"):
return 403;
break;
case joaat("component_at_sr_supp_03"):
return 404;
break;
case joaat("component_at_muzzle_08"):
return 405;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO"):
return 488;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_02"):
return 489;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_03"):
return 490;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_04"):
return 491;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_05"):
return 492;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_06"):
return 493;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_07"):
return 494;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_08"):
return 495;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_09"):
return 496;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_10"):
return 497;
break;
case joaat("COMPONENT_PUMPSHOTGUN_MK2_CAMO_IND_01"):
return 498;
break;
}
break;
case joaat("weapon_specialcarbine_mk2"):
switch (iParam0){
case joaat("component_specialcarbine_mk2_clip_01"):
return 406;
break;
case joaat("component_specialcarbine_mk2_clip_02"):
return 407;
break;
case joaat("component_specialcarbine_mk2_clip_armorpiercing"):
return 408;
break;
case joaat("component_specialcarbine_mk2_clip_fmj"):
return 409;
break;
case joaat("component_specialcarbine_mk2_clip_incendiary"):
return 410;
break;
case joaat("component_specialcarbine_mk2_clip_tracer"):
return 411;
break;
case joaat("component_at_ar_flsh"):
return 412;
break;
case joaat("component_at_sights"):
return 413;
break;
case joaat("component_at_scope_macro_mk2"):
return 414;
break;
case joaat("component_at_scope_medium_mk2"):
return 415;
break;
case joaat("component_at_ar_supp_02"):
return 416;
break;
case joaat("component_at_muzzle_01"):
return 417;
break;
case joaat("component_at_muzzle_02"):
return 418;
break;
case joaat("component_at_muzzle_03"):
return 419;
break;
case joaat("component_at_muzzle_04"):
return 420;
break;
case joaat("component_at_muzzle_05"):
return 421;
break;
case joaat("component_at_muzzle_06"):
return 422;
break;
case joaat("component_at_muzzle_07"):
return 423;
break;
case joaat("component_at_ar_afgrip_02"):
return 424;
break;
case joaat("component_at_sc_barrel_01"):
return 425;
break;
case joaat("component_at_sc_barrel_02"):
return 426;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO"):
return 532;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_02"):
return 533;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_03"):
return 534;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_04"):
return 535;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_05"):
return 536;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_06"):
return 537;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_07"):
return 538;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_08"):
return 539;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_09"):
return 540;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_10"):
return 541;
break;
case joaat("COMPONENT_SPECIALCARBINE_MK2_CAMO_IND_01"):
return 542;
break;
}
break;
case joaat("weapon_snspistol_mk2"):
switch (iParam0){
case joaat("component_snspistol_mk2_clip_01"):
return 427;
break;
case joaat("component_snspistol_mk2_clip_02"):
return 428;
break;
case joaat("component_snspistol_mk2_clip_fmj"):
return 429;
break;
case joaat("component_snspistol_mk2_clip_hollowpoint"):
return 430;
break;
case joaat("component_snspistol_mk2_clip_incendiary"):
return 431;
break;
case joaat("component_snspistol_mk2_clip_tracer"):
return 432;
break;
case joaat("component_at_pi_flsh_03"):
return 433;
break;
case joaat("component_at_pi_rail_02"):
return 434;
break;
case joaat("component_at_pi_supp_02"):
return 435;
break;
case joaat("component_at_pi_comp_02"):
return 436;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO"):
return 510;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_02"):
return 511;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_03"):
return 512;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_04"):
return 513;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_05"):
return 514;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_06"):
return 515;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_07"):
return 516;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_08"):
return 517;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_09"):
return 518;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_10"):
return 519;
break;
case joaat("COMPONENT_SNSPISTOL_MK2_CAMO_IND_01"):
return 520;
break;
}
break;
case joaat("weapon_marksmanrifle_mk2"):
switch (iParam0){
case joaat("component_marksmanrifle_mk2_clip_01"):
return 437;
break;
case joaat("component_marksmanrifle_mk2_clip_02"):
return 438;
break;
case joaat("component_marksmanrifle_mk2_clip_armorpiercing"):
return 439;
break;
case joaat("component_marksmanrifle_mk2_clip_fmj"):
return 440;
break;
case joaat("component_marksmanrifle_mk2_clip_incendiary"):
return 441;
break;
case joaat("component_marksmanrifle_mk2_clip_tracer"):
return 442;
break;
case joaat("component_at_ar_flsh"):
return 443;
break;
case joaat("component_at_sights"):
return 444;
break;
case joaat("component_at_scope_medium_mk2"):
return 445;
break;
case joaat("component_at_scope_large_fixed_zoom_mk2"):
return 446;
break;
case joaat("component_at_ar_supp"):
return 447;
break;
case joaat("component_at_muzzle_01"):
return 448;
break;
case joaat("component_at_muzzle_02"):
return 449;
break;
case joaat("component_at_muzzle_03"):
return 450;
break;
case joaat("component_at_muzzle_04"):
return 451;
break;
case joaat("component_at_muzzle_05"):
return 452;
break;
case joaat("component_at_muzzle_06"):
return 453;
break;
case joaat("component_at_muzzle_07"):
return 454;
break;
case joaat("component_at_ar_afgrip_02"):
return 455;
break;
case joaat("component_at_mrfl_barrel_01"):
return 456;
break;
case joaat("component_at_mrfl_barrel_02"):
return 457;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO"):
return 521;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_02"):
return 522;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_03"):
return 523;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_04"):
return 524;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_05"):
return 525;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_06"):
return 526;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_07"):
return 527;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_08"):
return 528;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_09"):
return 529;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_10"):
return 530;
break;
case joaat("COMPONENT_MARKSMANRIFLE_MK2_CAMO_IND_01"):
return 531;
break;
}
break;
case joaat("weapon_revolver_mk2"):
switch (iParam0){
case joaat("component_revolver_mk2_clip_01"):
return 458;
break;
case joaat("component_revolver_mk2_clip_fmj"):
return 459;
break;
case joaat("component_revolver_mk2_clip_hollowpoint"):
return 460;
break;
case joaat("component_revolver_mk2_clip_incendiary"):
return 461;
break;
case joaat("component_revolver_mk2_clip_tracer"):
return 462;
break;
case joaat("component_at_sights"):
return 463;
break;
case joaat("component_at_scope_macro_mk2"):
return 464;
break;
case joaat("component_at_pi_flsh"):
return 465;
break;
case joaat("component_at_pi_comp_03"):
return 466;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO"):
return 499;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_02"):
return 500;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_03"):
return 501;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_04"):
return 502;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_05"):
return 503;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_06"):
return 504;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_07"):
return 505;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_08"):
return 506;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_09"):
return 507;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_10"):
return 508;
break;
case joaat("COMPONENT_REVOLVER_MK2_CAMO_IND_01"):
return 509;
break;
}
break;
case joaat("weapon_bullpuprifle_mk2"):
switch (iParam0){
case joaat("component_bullpuprifle_mk2_clip_01"):
return 467;
break;
case joaat("component_bullpuprifle_mk2_clip_02"):
return 468;
break;
case joaat("component_bullpuprifle_mk2_clip_armorpiercing"):
return 469;
break;
case joaat("component_bullpuprifle_mk2_clip_fmj"):
return 470;
break;
case joaat("component_bullpuprifle_mk2_clip_incendiary"):
return 471;
break;
case joaat("component_bullpuprifle_mk2_clip_tracer"):
return 472;
break;
case joaat("component_at_ar_flsh"):
return 473;
break;
case joaat("component_at_sights"):
return 474;
break;
case joaat("component_at_scope_macro_02_mk2"):
return 475;
break;
case joaat("component_at_scope_small_mk2"):
return 476;
break;
case joaat("component_at_bp_barrel_01"):
return 477;
break;
case joaat("component_at_bp_barrel_02"):
return 478;
break;
case joaat("component_at_ar_supp"):
return 479;
break;
case joaat("component_at_muzzle_01"):
return 480;
break;
case joaat("component_at_muzzle_02"):
return 481;
break;
case joaat("component_at_muzzle_03"):
return 482;
break;
case joaat("component_at_muzzle_04"):
return 483;
break;
case joaat("component_at_muzzle_05"):
return 484;
break;
case joaat("component_at_muzzle_06"):
return 485;
break;
case joaat("component_at_muzzle_07"):
return 486;
break;
case joaat("component_at_ar_afgrip_02"):
return 487;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO"):
return 543;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_02"):
return 544;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_03"):
return 545;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_04"):
return 546;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_05"):
return 547;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_06"):
return 548;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_07"):
return 549;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_08"):
return 550;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_09"):
return 551;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_10"):
return 552;
break;
case joaat("COMPONENT_BULLPUPRIFLE_MK2_CAMO_IND_01"):
return 553;
break;
}
break;
case joaat("weapon_raypistol"):
switch (iParam0){
case joaat("component_raypistol_varmod_xmas18"):
return 554;
break;
}
break;
case joaat("weapon_ceramicpistol"):
switch (iParam0){
case joaat("component_ceramicpistol_clip_01"):
return 555;
break;
case joaat("component_ceramicpistol_clip_02"):
return 556;
break;
case joaat("component_ceramicpistol_supp"):
return 557;
break;
}
break;
case joaat("weapon_combatshotgun"):
switch (iParam0){
case joaat("component_combatshotgun_clip_01"):
return 559;
case joaat("component_at_ar_flsh"):
return 560;
break;
case joaat("component_at_ar_supp"):
return 561;
break;
}
break;
case joaat("weapon_militaryrifle"):
switch (iParam0){
case joaat("component_militaryrifle_clip_01"):
return 562;
break;
case joaat("component_militaryrifle_clip_02"):
return 563;
break;
case joaat("component_militaryrifle_sight_01"):
return 564;
break;
case joaat("component_at_scope_small"):
return 565;
break;
case joaat("component_at_ar_flsh"):
return 566;
break;
case joaat("component_at_ar_supp"):
return 567;
break;
}
break;
case joaat("weapon_gadgetpistol"):
switch (iParam0){
case joaat("component_gadgetpistol_clip_01"):
return 558;
break;
}
break;
case joaat("weapon_heavyrifle"):
switch (iParam0){
case joaat("component_heavyrifle_clip_01"):
return 99;
break;
case joaat("component_heavyrifle_clip_02"):
return 100;
break;
case -325063463:
return 568;
break;
case joaat("component_at_ar_afgrip"):
return 101;
break;
case joaat("component_at_ar_flsh"):
return 102;
break;
case joaat("component_at_scope_medium"):
return 103;
break;
case joaat("component_at_ar_supp"):
return 104;
break;
case joaat("component_heavyrifle_sight_01"):
return 572;
break;
}
break;
case -774507221:
switch (iParam0){
case 927578299:
return 573;
break;
case -2053876401:
return 574;
break;
case -1649287133:
return 575;
break;
case joaat("component_at_ar_supp_02"):
return 576;
break;
case joaat("component_at_ar_afgrip"):
return 577;
break;
}
break;
}
return 0;
}


var func__495(int iParam0, int iParam1, int iParam2){
var uVar0;
int iVar1;
int iVar2;
iVar1=func_493(iParam2, iParam1);
iVar2=func_491(iVar1);
switch (iVar2){
case 0:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_0"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_0"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_0"), &uVar0, -1);
break;
}
break;
case 1:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_1"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_1"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_1"), &uVar0, -1);
break;
}
break;
case 2:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_2"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_2"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_2"), &uVar0, -1);
break;
}
break;
case 3:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_3"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_3"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_3"), &uVar0, -1);
break;
}
break;
case 4:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_4"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_4"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_4"), &uVar0, -1);
break;
}
break;
case 5:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_5"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_5"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_5"), &uVar0, -1);
break;
}
break;
case 6:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_addon_unlock_6"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_addon_unlock_6"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_addon_unlock_6"), &uVar0, -1);
break;
}
break;
default:
break;
}
return uVar0;
}

int func_496(int iParam0, int iParam1){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
var* uVar4;
struct<4> Var43;
iVar0=0;
switch (iParam0){
case joaat("weapon_pistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_pistol_clip_01");
break;
case 2:
iVar0=joaat("component_pistol_clip_02");
break;
case 3:
iVar0=joaat("component_at_pi_flsh");
break;
case 4:
iVar0=joaat("component_at_pi_supp_02");
break;
case 5:
iVar0=joaat("component_pistol_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_combatpistol_clip_01");
break;
case 1:
iVar0=joaat("component_combatpistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_combatpistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_appistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_appistol_clip_01");
break;
case 1:
iVar0=joaat("component_appistol_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
case 4:
iVar0=joaat("component_appistol_varmod_luxe");
break;
case 5:
iVar0=joaat("component_appistol_varmod_security");
break;
}
break;
case joaat("weapon_microsmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_microsmg_clip_01");
break;
case 1:
iVar0=joaat("component_microsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_microsmg_varmod_luxe");
break;
case 6:
iVar0=joaat("component_microsmg_varmod_security");
break;
}
break;
case joaat("weapon_smg"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_smg_clip_01");
break;
case 2:
iVar0=joaat("component_smg_clip_02");
break;
case 3:
iVar0=joaat("component_smg_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_flsh");
break;
case 5:
iVar0=joaat("component_at_pi_supp");
break;
case 6:
iVar0=joaat("component_at_scope_macro_02");
break;
case 7:
iVar0=joaat("component_at_ar_afgrip");
break;
case 8:
iVar0=joaat("component_smg_varmod_luxe");
break;
}
break;
case joaat("weapon_assaultrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_assaultrifle_clip_01");
break;
case 2:
iVar0=joaat("component_assaultrifle_clip_02");
break;
case 3:
iVar0=joaat("component_assaultrifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_ar_afgrip");
break;
case 5:
iVar0=joaat("component_at_ar_flsh");
break;
case 6:
iVar0=joaat("component_at_scope_macro");
break;
case 7:
iVar0=joaat("component_at_ar_supp_02");
break;
case 8:
iVar0=joaat("component_assaultrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_carbinerifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_carbinerifle_clip_01");
break;
case 2:
iVar0=joaat("component_carbinerifle_clip_02");
break;
case 3:
iVar0=joaat("component_carbinerifle_clip_03");
break;
case 4:
iVar0=joaat("component_at_railcover_01");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_at_ar_flsh");
break;
case 7:
iVar0=joaat("component_at_scope_medium");
break;
case 8:
iVar0=joaat("component_at_ar_supp");
break;
case 9:
iVar0=joaat("component_carbinerifle_varmod_luxe");
break;
}
break;
case joaat("weapon_advancedrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_advancedrifle_clip_01");
break;
case 1:
iVar0=joaat("component_advancedrifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_advancedrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_mg"):
switch (iParam1){
case 0:
iVar0=joaat("component_mg_clip_01");
break;
case 1:
iVar0=joaat("component_mg_clip_02");
break;
case 2:
iVar0=joaat("component_at_scope_small_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_mg_varmod_lowrider");
break;
}
break;
case joaat("weapon_combatmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_combatmg_clip_01");
break;
case 2:
iVar0=joaat("component_combatmg_clip_02");
break;
case 3:
iVar0=joaat("component_at_ar_afgrip");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_combatmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_pumpshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_sr_supp");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_pumpshotgun_varmod_lowrider");
break;
case 3:
iVar0=joaat("component_pumpshotgun_varmod_security");
break;
}
break;
case joaat("weapon_assaultshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_assaultshotgun_clip_01");
break;
case 1:
iVar0=joaat("component_assaultshotgun_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_afgrip");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
}
break;
case joaat("weapon_sniperrifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_sniperrifle_clip_01");
break;
case 1:
iVar0=joaat("component_at_scope_large");
break;
case 2:
iVar0=joaat("component_at_scope_max");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_sniperrifle_varmod_luxe");
break;
}
break;
case joaat("weapon_heavysniper"):
switch (iParam1){
case 0:
iVar0=joaat("component_gunrun_mk2_upgrade");
break;
case 1:
iVar0=joaat("component_heavysniper_clip_01");
break;
case 2:
iVar0=joaat("component_at_scope_large");
break;
case 3:
iVar0=joaat("component_at_scope_max");
break;
}
break;
case joaat("weapon_grenadelauncher"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_scope_small");
break;
}
break;
case joaat("weapon_minigun"):
switch (iParam1){
case 0:
iVar0=joaat("component_minigun_clip_01");
break;
}
break;
case joaat("weapon_assaultsmg"):
switch (iParam1){
case 0:
iVar0=joaat("component_assaultsmg_clip_01");
break;
case 1:
iVar0=joaat("component_assaultsmg_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_macro");
break;
case 4:
iVar0=joaat("component_at_ar_supp_02");
break;
case 5:
iVar0=joaat("component_assaultsmg_varmod_lowrider");
break;
}
break;
case joaat("weapon_bullpupshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_at_ar_afgrip");
break;
case 1:
iVar0=joaat("component_at_ar_flsh");
break;
case 2:
iVar0=joaat("component_at_ar_supp_02");
break;
}
break;
case joaat("weapon_pistol50"):
switch (iParam1){
case 0:
iVar0=joaat("component_pistol50_clip_01");
break;
case 1:
iVar0=joaat("component_pistol50_clip_02");
break;
case 2:
iVar0=joaat("component_at_pi_flsh");
break;
case 3:
iVar0=joaat("component_at_ar_supp_02");
break;
case 4:
iVar0=joaat("component_pistol50_varmod_luxe");
break;
}
break;
case joaat("weapon_combatpdw"):
switch (iParam1){
case 0:
iVar0=joaat("component_combatpdw_clip_01");
break;
case 1:
iVar0=joaat("component_combatpdw_clip_02");
break;
case 2:
iVar0=joaat("component_combatpdw_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_small");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
}
break;
case joaat("weapon_sawnoffshotgun"):
switch (iParam1){
case 0:
iVar0=joaat("component_sawnoffshotgun_varmod_luxe");
break;
}
break;
case joaat("weapon_bullpuprifle"):
switch (iParam1){
case 0:
iVar0=joaat("component_bullpuprifle_clip_01");
break;
case 1:
iVar0=joaat("component_bullpuprifle_clip_02");
break;
case 2:
iVar0=joaat("component_at_ar_flsh");
break;
case 3:
iVar0=joaat("component_at_scope_small");
break;
case 4:
iVar0=joaat("component_at_ar_supp");
break;
case 5:
iVar0=joaat("component_at_ar_afgrip");
break;
case 6:
iVar0=joaat("component_bullpuprifle_varmod_low");
break;
}
break;
case joaat("weapon_snspistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_snspistol_clip_01");
break;
case 1:
iVar0=joaat("component_snspistol_clip_02");
break;
case 2:
iVar0=joaat("component_snspistol_varmod_lowrider");
break;
}
break;
case joaat("weapon_specialcarbine"):
switch (iParam1){
case 0:
iVar0=joaat("component_specialcarbine_clip_01");
break;
case 1:
iVar0=joaat("component_specialcarbine_clip_02");
break;
case 2:
iVar0=joaat("component_specialcarbine_clip_03");
break;
case 3:
iVar0=joaat("component_at_ar_flsh");
break;
case 4:
iVar0=joaat("component_at_scope_medium");
break;
case 5:
iVar0=joaat("component_at_ar_supp_02");
break;
case 6:
iVar0=joaat("component_at_ar_afgrip");
break;
case 7:
iVar0=joaat("component_specialcarbine_varmod_lowrider");
break;
}
break;
case joaat("weapon_knuckle"):
switch (iParam1){
case 0:
iVar0=joaat("component_knuckle_varmod_pimp");
break;
case 1:
iVar0=joaat("component_knuckle_varmod_ballas");
break;
case 2:
iVar0=joaat("component_knuckle_varmod_dollar");
break;
case 3:
iVar0=joaat("component_knuckle_varmod_diamond");
break;
case 4:
iVar0=joaat("component_knuckle_varmod_hate");
break;
case 5:
iVar0=joaat("component_knuckle_varmod_love");
break;
case 6:
iVar0=joaat("component_knuckle_varmod_player");
break;
case 7:
iVar0=joaat("component_knuckle_varmod_king");
break;
case 8:
iVar0=joaat("component_knuckle_varmod_vagos");
break;
}
break;
case joaat("weapon_machinepistol"):
switch (iParam1){
case 0:
iVar0=joaat("component_machinepistol_clip_01");
break;
case 1:
iVar0=joaat("component_machinepistol_clip_02");
break;
case 2:
iVar0=joaat("component_machinepistol_clip_03");
break;
case 3:
iVar0=joaat("component_at_pi_supp");
break;
}
break;
case joaat("weapon_switchblade"):
switch (iParam1){
case 0:
iVar0=joaat("component_switchblade_varmod_var1");
break;
case 1:
iVar0=joaat("component_switchblade_varmod_var2");
break;
}
break;
case joaat("weapon_revolver"):
switch (iParam1){
case 0:
iVar0=joaat("component_revolver_clip_01");
break;
case 1:
iVar0=joaat("component_revolver_varmod_boss");
break;
case 2:
iVar0=joaat("component_revolver_varmod_goon");
break;
}
break;
case joaat("weapon_minismg"):
switch (iParam1){
case 0:
iVar0=joaat("component_minismg_clip_01");
break;
case 1:
iVar0=joaat("component_minismg_clip_02");
break;
}
break;
default:
if(iParam0 !=0){
iVar1=func_498(iParam0, &uVar4);
if(iVar1 !=-1){
iVar2=0;
while (iVar2 < FILES::GET_NUM_DLC_WEAPON_COMPONENTS(iVar1)){
if(FILES::GET_DLC_WEAPON_COMPONENT_DATA(iVar1, iVar2, &Var43)){
if(!func_497(Var43.f_3)){
if(iVar3==iParam1){
return Var43.f_3;
}
iVar3++;
}
}
iVar2++;
}}}
break;
}
return iVar0;
}

int func_497(int iParam0){
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
return 1;
break;
}
return 0;
}

int func_498(int iParam0, var* uParam1){
int iVar0;
int iVar1;
iVar1=FILES::GET_NUM_DLC_WEAPONS();
iVar0=0;
while (iVar0 < iVar1){
if(FILES::GET_DLC_WEAPON_DATA(iVar0, uParam1)){
if(uParam1->f_1==iParam0){
return iVar0;
}}
iVar0++;
}
return -1;
}


void func_499(int iParam0, int iParam1, int iParam2){
int iVar0;
int iVar1;
iVar0=func_502(iParam1);
iVar1=func_500(iVar0);
switch (iVar1){
case 0:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_unlock_0"), iParam2, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_unlock_0"), iParam2, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_unlock_0"), iParam2, true);
break;
}
break;
case 1:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_unlock_1"), iParam2, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_unlock_1"), iParam2, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_unlock_1"), iParam2, true);
break;
}
break;
case 2:
switch (iParam0){
case 0:
STATS::STAT_SET_INT(joaat("sp0_weap_unlock_2"), iParam2, true);
break;
case 1:
STATS::STAT_SET_INT(joaat("sp1_weap_unlock_2"), iParam2, true);
break;
case 2:
STATS::STAT_SET_INT(joaat("sp2_weap_unlock_2"), iParam2, true);
break;
}
break;
default:
break;
}}

int func_500(int iParam0){
return (iParam0 / 32);
}

int func_501(int iParam0){
return (iParam0 % 32);
}

int func_502(int iParam0){
return func_503(iParam0);
}

int func_503(int iParam0){
switch (iParam0){
case joaat("weapon_unarmed"):
return 0;
break;
case joaat("weapon_pistol"):
return 1;
break;
case joaat("weapon_combatpistol"):
return 2;
break;
case joaat("weapon_appistol"):
return 3;
break;
case joaat("weapon_pistol50"):
return 4;
break;
case joaat("weapon_smg"):
return 5;
break;
case joaat("weapon_assaultsmg"):
return 6;
break;
case joaat("weapon_microsmg"):
return 7;
break;
case joaat("weapon_assaultrifle"):
return 8;
break;
case joaat("weapon_carbinerifle"):
return 9;
break;
case joaat("weapon_advancedrifle"):
return 11;
break;
case joaat("weapon_mg"):
return 12;
break;
case joaat("weapon_combatmg"):
return 13;
break;
case -572349828:
return 14;
break;
case joaat("weapon_stickybomb"):
return 15;
break;
case joaat("weapon_grenade"):
return 16;
break;
case joaat("weapon_smokegrenade"):
return 17;
break;
case joaat("weapon_remotesniper"):
return 18;
break;
case 392730790:
return 19;
break;
case joaat("weapon_sniperrifle"):
return 20;
break;
case joaat("weapon_heavysniper"):
return 21;
break;
case joaat("weapon_pumpshotgun"):
return 22;
break;
case joaat("weapon_bullpupshotgun"):
return 23;
break;
case joaat("weapon_assaultshotgun"):
return 24;
break;
case joaat("weapon_sawnoffshotgun"):
return 25;
break;
case joaat("weapon_grenadelauncher"):
return 26;
break;
case joaat("weapon_rpg"):
return 27;
break;
case joaat("weapon_minigun"):
return 28;
break;
case -344484024:
return 29;
break;
case -1887867191:
return 30;
break;
case joaat("weapon_stungun"):
return 31;
break;
case -837150131:
return 32;
break;
case joaat("gadget_parachute"):
return 33;
break;
case joaat("weapon_knife"):
return 34;
break;
case joaat("weapon_nightstick"):
return 35;
break;
case joaat("weapon_hammer"):
return 36;
break;
case joaat("weapon_bat"):
return 37;
break;
case joaat("weapon_crowbar"):
return 38;
break;
case joaat("weapon_golfclub"):
return 39;
break;
case joaat("weapon_grenadelauncher_smoke"):
return 40;
break;
case joaat("weapon_molotov"):
return 41;
break;
case joaat("weapon_fireextinguisher"):
return 42;
break;
case joaat("weapon_petrolcan"):
return 43;
break;
case joaat("weapon_digiscanner"):
return 44;
break;
case joaat("weapon_bottle"):
return 45;
break;
case joaat("weapon_specialcarbine"):
return 46;
break;
case joaat("weapon_snspistol"):
return 47;
break;
case joaat("weapon_heavypistol"):
return 49;
break;
case joaat("weapon_bullpuprifle"):
return 48;
break;
case joaat("weapon_gusenberg"):
return 50;
break;
case joaat("weapon_dagger"):
return 51;
break;
case joaat("weapon_vintagepistol"):
return 52;
break;
case joaat("weapon_flaregun"):
return 57;
break;
case joaat("weapon_musket"):
return 53;
break;
case joaat("weapon_firework"):
return 54;
break;
case joaat("weapon_marksmanrifle"):
return 56;
break;
case joaat("weapon_heavyshotgun"):
return 55;
break;
case joaat("weapon_proxmine"):
return 60;
break;
case joaat("weapon_hominglauncher"):
return 61;
break;
case joaat("weapon_hatchet"):
return 58;
break;
case joaat("weapon_railgun"):
return 59;
break;
case joaat("weapon_combatpdw"):
return 64;
break;
case joaat("weapon_knuckle"):
return 62;
break;
case joaat("weapon_marksmanpistol"):
return 63;
break;
case joaat("weapon_machete"):
return 65;
break;
case joaat("weapon_machinepistol"):
return 68;
break;
case joaat("weapon_dbshotgun"):
return 66;
break;
case joaat("weapon_compactrifle"):
return 67;
break;
case joaat("weapon_flashlight"):
return 69;
break;
case joaat("weapon_revolver"):
return 70;
break;
case joaat("weapon_switchblade"):
return 71;
break;
case joaat("weapon_autoshotgun"):
return 72;
break;
case joaat("weapon_minismg"):
return 73;
break;
case joaat("weapon_compactlauncher"):
return 74;
break;
case joaat("weapon_battleaxe"):
return 75;
break;
case joaat("weapon_pipebomb"):
return 76;
break;
case joaat("weapon_poolcue"):
return 77;
break;
case joaat("weapon_wrench"):
return 78;
break;
case joaat("weapon_assaultrifle_mk2"):
return 8;
break;
case joaat("weapon_carbinerifle_mk2"):
return 9;
break;
case joaat("weapon_combatmg_mk2"):
return 13;
break;
case joaat("weapon_heavysniper_mk2"):
return 21;
break;
case joaat("weapon_pistol_mk2"):
return 1;
break;
case joaat("weapon_smg_mk2"):
return 5;
break;
case joaat("weapon_pumpshotgun_mk2"):
return 22;
break;
case joaat("weapon_specialcarbine_mk2"):
return 46;
break;
case joaat("weapon_snspistol_mk2"):
return 47;
break;
case joaat("weapon_marksmanrifle_mk2"):
return 56;
break;
case joaat("weapon_revolver_mk2"):
return 70;
break;
case joaat("weapon_bullpuprifle_mk2"):
return 48;
break;
case joaat("weapon_doubleaction"):
return 79;
break;
case joaat("weapon_stone_hatchet"):
return 80;
break;
case joaat("weapon_raypistol"):
return 81;
break;
case joaat("weapon_raycarbine"):
return 82;
break;
case joaat("weapon_rayminigun"):
return 83;
break;
case joaat("weapon_navyrevolver"):
return 84;
break;
case joaat("weapon_ceramicpistol"):
return 85;
break;
case joaat("weapon_combatshotgun"):
return 86;
break;
case joaat("weapon_militaryrifle"):
return 88;
break;
case joaat("weapon_gadgetpistol"):
return 87;
break;
case joaat("weapon_heavyrifle"):
return 10;
break;
case joaat("weapon_emplauncher"):
return 89;
break;
case joaat("weapon_fertilizercan"):
return 90;
break;
case joaat("weapon_stungun_mp"):
return 91;
break;
case -610080759:
return 92;
break;
case -774507221:
return 93;
break;
case 1853742572:
return 94;
break;
}
return 0;
}


var func__504(int iParam0, int iParam1){
var uVar0;
int iVar1;
int iVar2;
iVar1=func_502(iParam1);
iVar2=func_500(iVar1);
switch (iVar2){
case 0:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_unlock_0"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_unlock_0"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_unlock_0"), &uVar0, -1);
break;
}
break;
case 1:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_unlock_1"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_unlock_1"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_unlock_1"), &uVar0, -1);
break;
}
break;
case 2:
switch (iParam0){
case 0:
STATS::STAT_GET_INT(joaat("sp0_weap_unlock_2"), &uVar0, -1);
break;
case 1:
STATS::STAT_GET_INT(joaat("sp1_weap_unlock_2"), &uVar0, -1);
break;
case 2:
STATS::STAT_GET_INT(joaat("sp2_weap_unlock_2"), &uVar0, -1);
break;
}
break;
default:
break;
}
return uVar0;
}


void func_505(int iParam0, bool bParam1, bool bParam2){
int iVar0;
if(iParam0==11 || iParam0==-1){
return;
}
if(iParam1 < 0 || iParam1 >=32){
return;
}
iVar0=MISC::IS_BIT_SET(Global_113386.f_9085.f_99.f_219[iParam0], iParam1);
if(iVar0==bParam2){
return;
}
if(bParam2){
MISC::SET_BIT(&(Global_113386.f_9085.f_99.f_219[iParam0]), iParam1);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_9085.f_99.f_219[iParam0]), bParam1);
}}


void func_506(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1 !=MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 13)){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 18);
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 13);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 13);
}}


void func_507(int iParam0, bool bParam1){
int iVar0;
if(bParam1){
func_289(39, 1, 0);
func_289(40, 1, 0);
func_289(41, 1, 0);
func_289(42, 1, 0);
func_289(43, 1, 0);
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
iVar0=0;
while (iVar0 < 90){
func_508(iVar0, iParam0, 3);
iVar0++;
}}}


void func_508(int iParam0, int iParam1, int iParam2){
int iVar0;
if(iParam1 >=iParam2){
if(!MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32))){
iVar0=0;
while (iVar0 < Global_113386.f_20118){
Global_113386.f_20118[iVar0 /*43*/].f_42=1;
iVar0++;
}
MISC::SET_BIT(&(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)]), (iParam0 % 32));
if(iParam2==0){
func_509(0, iParam0, "", 0, 0, 2);
}}}}


void func_509(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5){
int iVar0;
int iVar1;
int iVar2;
int iVar3;
int iVar4;
int iVar5;
int iVar6;
int iVar7;
int iVar8;
int iVar9;
int iVar10;
int iVar11;
int iVar12;
int iVar13;
if(func_551(iParam0) && func_518(iParam1, -1, 0, -1)){
if(iParam5==8 && iParam4==2){
iParam3=(iParam3 - 20);
}
if((iParam5==15 && iParam3 > 21) && !func_517(iParam0)){
iParam3=(iParam3 - 21);
}
if(iParam0==joaat("oppressor2")){
if(iParam5==23){
if(iParam3 > 2){
iParam3=(iParam3 - 26);
}}}elseif(iParam0==joaat("strikeforce")){
if(iParam5==18){
if(iParam3 > 2){
iParam3=(iParam3 - 26);
}}}
if(iParam5==58 && iParam4==2){
if(MISC::ARE_STRINGS_EQUAL(sParam2, "CMOD_TYR_LG")){
if(func_516(iParam0) && func_513(PLAYER::PLAYER_ID())){
if(!func_44(31778, -1)){
func_40(31778, 1, -1);
}}}}}
if(iParam1==-1){
if(!func_551(iParam0)){
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if(iParam0==0){
iVar0=0;
while (iVar0 < 306){
iVar1=iVar0 * 3;
iVar2=func_512(MISC::GET_HASH_KEY(sParam2));
if(iVar2 !=-1){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_2690[(iVar1 + (iVar2 / 32))]), (iVar2 % 32));
}
iVar0++;
}}else{
iVar3=func_511(iParam0);
if(iVar3 !=-1){
iVar4=iVar3 * 3;
iVar5=func_512(MISC::GET_HASH_KEY(sParam2));
if(iVar5 !=-1){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_2690[(iVar4 + (iVar5 / 32))]), (iVar5 % 32));
}}
iVar6=func_510(iParam0, iParam3, iParam4, iParam5);
if(iVar6 > 0){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_3609[(iVar6 / 32)]), (iVar6 % 32));
}}}
return;
}elseif(func_518(iParam1, -1, 0, -1) || iParam1==-1){
iVar7=func_510(iParam0, iParam3, iParam4, iParam5);
if(iVar7 > 0){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_3609[(iVar7 / 32)]), (iVar7 % 32));
}}}elseif(func_551(iParam0) && func_518(iParam1, -1, 0, -1)){
iVar8=func_510(iParam0, iParam3, iParam4, iParam5);
if(iVar8 > 0){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_3609[(iVar8 / 32)]), (iVar8 % 32));
}}
if(iParam0==0){
iVar9=0;
while (iVar9 < 306){
if(func_518(iParam1, -1, 0, -1)){
iVar10=(iVar9 * 4 + (iParam1 / 32));
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_47[iVar10]), (iParam1 % 32));
}else{
MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar10]), (iParam1 % 32));
}}
iVar9++;
}}elseif(func_518(iParam1, -1, 0, -1)){
iVar11=func_511(iParam0);
if(iVar11 !=-1){
iVar12=(iVar11 * 4 + (iParam1 / 32));
iVar13=(iParam1 % 32);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
if((((iParam0==joaat("avarus") || iParam0==joaat("chimera")) || iParam0==joaat("esskey")) && iParam1==1) || ((iParam1==72 || iParam1==66) && iParam0==joaat("esskey"))){
iVar13=(iVar13 - 1);
}
if(iParam0==joaat("specter2") && (iParam1==21 || iParam1==72)){
iVar13=(iVar13 - 1);
}
if(iParam0==joaat("trailerlarge") && iParam1==85){
iVar13++;
}
if(iParam0==joaat("bombushka") && iParam1==21){
iVar13=(iVar13 - 1);
}
if(iVar13 >=0){
MISC::SET_BIT(&(Global_2359296[func_36() /*5567*/].f_681.f_47[iVar12]), iVar13);
}}else{
MISC::SET_BIT(&(Global_113386.f_668.f_87[iVar12]), bVar13);
}}}}

int func_510(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
iVar0=0;
if(iParam0==joaat("btype2")){
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if((iParam3==85 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=51;
}
if(iParam0==joaat("lurcher")){
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if((iParam3==85 && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
}else{
iVar0 +=49;
}
if(iParam0==joaat("faction2")){
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==73 && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==75 && iParam1 >=2) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==74 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==76 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==77 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=268;
}
if(iParam0==joaat("buccaneer2")){
if((iParam3==82 && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if((iParam3==76 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==77 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==75 && iParam1 >=2) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==73 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=11;
if((iParam3==62 && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if((iParam3==63 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==74 && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
}else{
iVar0 +=319;
}
if(iParam0==joaat("chino2")){
if((iParam3==82 && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if((iParam3==76 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==77 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==75 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==62 && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if((iParam3==63 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==74 && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=315;
}
if(iParam0==joaat("moonbeam2")){
if((iParam3==6 && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if((iParam3==76 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==77 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==75 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==68 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if((iParam3==69 && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==62 && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if((iParam3==63 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==74 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=308;
}
if(iParam0==joaat("primo2")){
if((iParam3==80 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==81 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==82 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==76 && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if((iParam3==77 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if((iParam3==75 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==73 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==62 && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if((iParam3==63 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==74 && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
}else{
iVar0 +=309;
}
if(iParam0==joaat("voodoo")){
if((iParam3==79 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==80 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==81 && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if((iParam3==82 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==6 && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if((iParam3==76 && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if((iParam3==77 && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if((iParam3==75 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==91 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==91 && (iParam2==0 || iParam2==2)) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if((iParam3==92 && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if((iParam3==70 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==71 && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==72 && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if((iParam3==85 && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==62 && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if((iParam3==63 && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if((iParam3==74 && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=326;
}
if(iParam0==joaat("faction")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("buccaneer")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("chino")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("moonbeam")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("primo")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("voodoo2")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("sultan")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("banshee")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
}else{
iVar0 +=17;
}
if(iParam0==joaat("banshee2")){
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(iParam3==65){
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}}
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=8;
}else{
iVar0 +=114;
}
if(iParam0==joaat("sultanrs")){
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==91 && iParam2==2) && iParam1 >=1) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(iParam3==65){
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}}
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=221;
}
if(iParam0==joaat("btype3")){
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==93 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==94 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=16;
}
if(iParam0==joaat("faction")){
if(iParam3==61 && iParam1==1){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("sabregt")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("tornado")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("tornado2")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("tornado3")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("virgo3")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("minivan")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("slamvan")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("faction3")){
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(iParam3==65){
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}}
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==73 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
}else{
iVar0 +=272;
}
if(iParam0==joaat("minivan2")){
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
}else{
iVar0 +=281;
}
if(iParam0==joaat("sabregt2")){
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && (iParam2==0 || iParam2==1)) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==73 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==62 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=234;
}
if(iParam0==joaat("slamvan3")){
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==62 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
}else{
iVar0 +=315;
}
if(iParam0==joaat("tornado5")){
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(((iParam3==91 && iParam2==3) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
}else{
iVar0 +=382;
}
if(iParam0==joaat("virgo2")){
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(Global_262145.f_12042){
if((iParam3==65 && iParam1 >=1) && iParam1 <=45){
return (iVar0 + iParam1);
}
iVar0 +=46;
}else{
if((iParam3==65 && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=46;
}
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==73 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==92 && iParam2==0) && iParam1 >=0) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
}else{
iVar0 +=290;
}
if(iParam0==joaat("avarus")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("chimera")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("daemon2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("zombiea")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("zombieb")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("sanctus")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("wolfsbane")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=28){
return (iVar0 + iParam1);
}
iVar0 +=29;
}else{
iVar0 +=29;
}
if(iParam0==joaat("blazer4")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("youga2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0 +=20;
}
if(iParam0==joaat("fcr2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
}else{
iVar0 +=59;
}
if(iParam0==joaat("diablous2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=19;
}
if(iParam0==joaat("nightblade")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("faggio3")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("faggio")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("defiler")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("esskey")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("hakuchou2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("manchez")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("vortex")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=13;
}
if(iParam0==joaat("apc")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("halftrack")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("dune3")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("tampa3")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("nightshark")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("trailersmall2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("oppressor")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("insurgent3")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("technical3")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("ardent")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("specter2")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==67 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if((iParam3==68 && iParam2==0) && iParam1==1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=116;
}
if(iParam0==joaat("comet3")){
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==91 && iParam2==1) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if((iParam3==68 && iParam2==0) && iParam1==6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=200;
}
if(iParam0==joaat("elegy")){
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if((iParam3==91 && iParam2==1) && iParam1==1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==91 && iParam2==2) && iParam1 >=0) && iParam1 <=67){
return (iVar0 + iParam1);
}
iVar0 +=68;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if((iParam3==68 && iParam2==0) && iParam1==7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=252;
}
if(iParam0==joaat("italigtb2")){
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==67 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
}else{
iVar0 +=122;
}
if(iParam0==joaat("nero2")){
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==67 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==92 && iParam2==0) && iParam1 >=1) && iParam1 <=48){
return (iVar0 + iParam1);
}
iVar0 +=49;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if((iParam3==81 && iParam2==0) && iParam1==1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
}else{
iVar0 +=105;
}
if(iParam0==joaat("starling")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("nokota")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("rogue")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("molotok")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("bombushka")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("tula")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("hunter")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("seabreeze")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("alphaz1")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("havok")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("retinue")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("microlight")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("visione")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=9;
}
if(iParam0==joaat("comet4")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("barrage")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("avenger")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("gb200")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=53;
}
if(iParam0==joaat("fagaloa")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=65;
}
if(iParam0==joaat("michelli")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=58;
}
if(iParam0==joaat("ellie")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=27;
}
if(iParam0==joaat("issi3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=114;
}
if(iParam0==joaat("tezeract")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=43;
}
if(iParam0==joaat("flashgt")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=56;
}
if(iParam0==joaat("caracara")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("cheburek")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=62;
}
if(iParam0==joaat("dominator3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=19){
return (iVar0 + iParam1);
}
iVar0 +=20;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=115;
}
if(iParam0==joaat("tyrant")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=12;
}
if(iParam0==joaat("taipan")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
}else{
iVar0 +=47;
}
if(iParam0==joaat("entity2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
}else{
iVar0 +=26;
}
if(iParam0==joaat("hotring")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=31){
return (iVar0 + iParam1);
}
iVar0 +=32;
}else{
iVar0 +=32;
}
if(iParam0==joaat("jester3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=77;
}
if(iParam0==joaat("stafford")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
}else{
iVar0 +=8;
}
if(iParam0==joaat("speedo4")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=31;
}
if(iParam0==joaat("mule4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=32;
}
if(iParam0==joaat("pounder2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=35;
}
if(iParam0==joaat("swinger")){
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=55;
}
if(iParam0==joaat("patriot2")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=43;
}
if(iParam0==joaat("oppressor2")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=39;
}
if(iParam0==joaat("menacer")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=22;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=115;
}
if(iParam0==joaat("freecrawler")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=61;
}
if(iParam0==joaat("scramjet")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("strikeforce")){
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
}else{
iVar0 +=30;
}
if(iParam0==joaat("patriot")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("prairie")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=11;
}
if(iParam0==joaat("clique")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=43;
}
if(iParam0==joaat("deveste")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=48;
}
if(iParam0==joaat("deviant")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=66;
}
if(iParam0==joaat("impaler")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=39;
}
if(iParam0==joaat("schlagen")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=86;
}
if(iParam0==joaat("toros")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=96;
}
if(iParam0==joaat("vamos")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=67;
}
if(iParam0==joaat("tulip")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=45;
}
if(iParam0==joaat("impaler2")){
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==59 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=75;
}
if(iParam0==joaat("italigto")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
}else{
iVar0 +=77;
}
if(iParam0==joaat("dominator4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=71;
}
if(iParam0==joaat("scarab")){
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=90;
}
if(iParam0==joaat("cerberus")){
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=76;
}
if(iParam0==joaat("cerberus2")){
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=80;
}
if(iParam0==joaat("bruiser")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=69;
}
if(iParam0==joaat("monster3")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
}else{
iVar0 +=46;
}
if(iParam0==joaat("slamvan4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=59;
}
if(iParam0==joaat("imperator")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=79;
}
if(iParam0==joaat("zr380")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=63;
}
if(iParam0==joaat("issi4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=123;
}
if(iParam0==joaat("deathbike")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=23;
}
if(iParam0==joaat("brutus")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=70;
}
if(iParam0==joaat("zr3802")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=86;
}
if(iParam0==joaat("dominator5")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=69;
}
if(iParam0==joaat("deathbike2")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=40;
}
if(iParam0==joaat("issi6")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=98;
}
if(iParam0==joaat("zr3803")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=63;
}
if(iParam0==joaat("dominator6")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=71;
}
if(iParam0==joaat("deathbike3")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=14;
}
if(iParam0==joaat("rcbandito")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
}else{
iVar0 +=39;
}
if(iParam0==joaat("monster5")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=55;
}
if(iParam0==joaat("scarab2")){
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=108;
}
if(iParam0==joaat("impaler3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=50;
}
if(iParam0==joaat("impaler4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
}else{
iVar0 +=69;
}
if(iParam0==joaat("brutus3")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=72;
}
if(iParam0==joaat("monster4")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=62;
}
if(iParam0==joaat("bruiser2")){
if(((iParam3==45 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=73;
}
if(iParam0==joaat("bruiser3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
}else{
iVar0 +=75;
}
if(iParam0==joaat("issi5")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=129;
}
if(iParam0==joaat("cerberus3")){
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=76;
}
if(iParam0==joaat("slamvan5")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
}else{
iVar0 +=66;
}
if(iParam0==joaat("imperator2")){
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=68;
}
if(iParam0==joaat("imperator3")){
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=69;
}
if(iParam0==joaat("brutus2")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=68;
}
if(iParam0==joaat("scarab3")){
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=90;
}
if(iParam0==joaat("slamvan6")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==78 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=59;
}
if(iParam0==joaat("caracara2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=58;
}
if(iParam0==joaat("drafter")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=71;
}
if(iParam0==joaat("dynasty")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=81;
}
if(iParam0==joaat("gauntlet3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0 +=87;
}
if(iParam0==joaat("gauntlet4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=86;
}
if(iParam0==joaat("hellion")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=94;
}
if(iParam0==joaat("issi7")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=65;
}
if(iParam0==joaat("krieger")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=37;
}
if(iParam0==joaat("locust")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=70;
}
if(iParam0==joaat("nebula")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=61;
}
if(iParam0==joaat("neo")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=87;
}
if(iParam0==joaat("novak")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=53;
}
if(iParam0==joaat("s80")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=32;
}
if(iParam0==joaat("thrax")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=80;
}
if(iParam0==joaat("zion3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=78;
}
if(iParam0==joaat("zorrusso")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=38;
}
if(iParam0==joaat("emerus")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=23){
return (iVar0 + iParam1);
}
iVar0 +=24;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=72;
}
if(iParam0==joaat("peyote")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("peyote2")){
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
}else{
iVar0 +=57;
}
if(iParam0==joaat("rrocket")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=16;
}
if(iParam0==joaat("jugular")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=54;
}
if(iParam0==joaat("paragon")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=71;
}
if(iParam0==joaat("paragon2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=71;
}
if(iParam0==joaat("rebla")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=94;
}
if(iParam0==joaat("imorgon")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=24){
return (iVar0 + iParam1);
}
iVar0 +=25;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=125;
}
if(iParam0==joaat("asbo")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=93;
}
if(iParam0==joaat("sugoi")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=100;
}
if(iParam0==joaat("komoda")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=24){
return (iVar0 + iParam1);
}
iVar0 +=25;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=115;
}
if(iParam0==joaat("zhaba")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=30){
return (iVar0 + iParam1);
}
iVar0 +=31;
}else{
iVar0 +=87;
}
if(iParam0==joaat("vstr")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=83;
}
if(iParam0==joaat("everon")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=81;
}
if(iParam0==joaat("sultan2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0 +=102;
}
if(iParam0==joaat("kanjo")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
}else{
iVar0 +=275;
}
if(iParam0==joaat("outlaw")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=21;
}
if(iParam0==joaat("formula")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=47;
}
if(iParam0==joaat("stryder")){
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=23;
}
if(iParam0==joaat("jb7002")){
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=5;
}
if(iParam0==joaat("vagrant")){
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=30){
return (iVar0 + iParam1);
}
iVar0 +=31;
}else{
iVar0 +=60;
}
if(iParam0==joaat("retinue2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==25 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=64;
}
if(iParam0==joaat("yosemite2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==51 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=71;
}
if(iParam0==joaat("furia")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=84;
}
if(iParam0==joaat("formula2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=39;
}
if(iParam0==joaat("minitank")){
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=15;
}
if(iParam0==joaat("gauntlet5")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=17){
return (iVar0 + iParam1);
}
iVar0 +=18;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=22) && iParam1 <=23){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==59 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==54 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
}else{
iVar0 +=207;
}
if(iParam0==joaat("manana2")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==79 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==65 && iParam2==0) && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=22;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==62 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
}else{
iVar0 +=204;
}
if(iParam0==joaat("manana")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("yosemite")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("dukes3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==59 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=26){
return (iVar0 + iParam1);
}
iVar0 +=27;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
}else{
iVar0 +=114;
}
if(iParam0==joaat("club")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==54 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=22) && iParam1 <=27){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
}else{
iVar0 +=85;
}
if(iParam0==joaat("youga3")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==43 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==24 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==7 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==91 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==66 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
}else{
iVar0 +=182;
}
if(iParam0==joaat("peyote3")){
if(((iParam3==91 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==65 && iParam2==0) && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=22;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==73 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==45 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==62 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=207;
}
if(iParam0==joaat("glendale2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==75 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==91 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==65 && iParam2==0) && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=22;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==72 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==73 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==62 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==63 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
}else{
iVar0 +=207;
}
if(iParam0==joaat("yosemite3")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==43 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==7 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==74 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==84 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
if(((iParam3==65 && iParam2==0) && iParam1 >=1) && iParam1 <=21){
return (iVar0 + iParam1);
}
iVar0 +=22;
if(((iParam3==90 && iParam2==1) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==69 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==70 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==71 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==83 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==51 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==80 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==81 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==82 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==76 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==77 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==68 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
}else{
iVar0 +=264;
}
if(iParam0==joaat("seminole2")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==43 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
}else{
iVar0 +=75;
}
if(iParam0==joaat("penumbra2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=22){
return (iVar0 + iParam1);
}
iVar0 +=23;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==19 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=145;
}
if(iParam0==joaat("glendale")){
if(iParam3==61 && iParam1==0){
return (iVar0 + iParam1);
}
iVar0++;
}else{
iVar0++;
}
if(iParam0==joaat("landstalker2")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
}else{
iVar0 +=62;
}
if(iParam0==joaat("coquette4")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==54 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=60;
}
if(iParam0==joaat("openwheel1")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=28;
}
if(iParam0==joaat("openwheel2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=57;
}
if(iParam0==joaat("tigon")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=51;
}
if(iParam0==joaat("brioso2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==52 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=61;
}
if(iParam0==joaat("manchez2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=45;
}
if(iParam0==joaat("seasparrow2")){
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
}else{
iVar0 +=3;
}
if(iParam0==joaat("slamtruck")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==95 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=18){
return (iVar0 + iParam1);
}
iVar0 +=19;
}else{
iVar0 +=59;
}
if(iParam0==joaat("italirsx")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=112;
}
if(iParam0==joaat("toreador")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==36 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=58;
}
if(iParam0==joaat("winky")){
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==14 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==7 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=29){
return (iVar0 + iParam1);
}
iVar0 +=30;
}else{
iVar0 +=86;
}
if(iParam0==joaat("weevil")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
if(((iParam3==39 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=1){
return (iVar0 + iParam1);
}
iVar0 +=2;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==15 && iParam2==0) && iParam1 >=22) && iParam1 <=27){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
}else{
iVar0 +=117;
}
if(iParam0==joaat("squaddie")){
if(((iParam3==6 && iParam2==0) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=13){
return (iVar0 + iParam1);
}
iVar0 +=14;
if(((iParam3==8 && iParam2==2) && iParam1 >=1) && iParam1 <=8){
return (iVar0 + iParam1);
}
iVar0 +=9;
if(((iParam3==44 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=5){
return (iVar0 + iParam1);
}
iVar0 +=6;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=19){
return (iVar0 + iParam1);
}
iVar0 +=20;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=14){
return (iVar0 + iParam1);
}
iVar0 +=15;
if(((iParam3==32 && iParam2==0) && iParam1 >=1) && iParam1 <=7){
return (iVar0 + iParam1);
}
iVar0 +=8;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=16){
return (iVar0 + iParam1);
}
iVar0 +=17;
if(((iParam3==40 && iParam2==0) && iParam1 >=1) && iParam1 <=9){
return (iVar0 + iParam1);
}
iVar0 +=10;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=159;
}
if(iParam0==joaat("veto")){
if(((iParam3==8 && iParam2==1) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
}else{
iVar0 +=55;
}
if(iParam0==joaat("alkonost")){
if(((iParam3==18 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=10){
return (iVar0 + iParam1);
}
iVar0 +=11;
}else{
iVar0 +=19;
}
if(iParam0==joaat("annihilator2")){
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=24;
}
if(iParam0==joaat("veto2")){
if(((iParam3==46 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==23 && iParam2==0) && iParam1 >=1) && iParam1 <=12){
return (iVar0 + iParam1);
}
iVar0 +=13;
if(((iParam3==15 && iParam2==0) && iParam1 >=1) && iParam1 <=4){
return (iVar0 + iParam1);
}
iVar0 +=5;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=30){
return (iVar0 + iParam1);
}
iVar0 +=31;
}else{
iVar0 +=69;
}
if(iParam0==joaat("verus")){
if(((iParam3==41 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==12 && iParam2==0) && iParam1 >=1) && iParam1 <=3){
return (iVar0 + iParam1);
}
iVar0 +=4;
if(((iParam3==9 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==7 && iParam2==0) && iParam1 >=1) && iParam1 <=2){
return (iVar0 + iParam1);
}
iVar0 +=3;
if(((iParam3==26 && iParam2==0) && iParam1 >=1) && iParam1 <=6){
return (iVar0 + iParam1);
}
iVar0 +=7;
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=20){
return (iVar0 + iParam1);
}
iVar0 +=21;
}else{
iVar0 +=42;
}
if(iParam0==joaat("kuruma")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=15){
return (iVar0 + iParam1);
}
iVar0 +=16;
}else{
iVar0 +=16;
}
if(iParam0==joaat("hermes")){
if(((iParam3==85 && iParam2==0) && iParam1 >=1) && iParam1 <=11){
return (iVar0 + iParam1);
}
iVar0 +=12;
}else{
iVar0 +=12;
}
if(iVar0 > 20000){}
return 0;
}

int func_511(int iParam0){
switch (iParam0){
case joaat("adder"):
return 0;
break;
case joaat("akuma"):
return 1;
break;
case joaat("asea"):
return 2;
break;
case joaat("asterope"):
return 3;
break;
case joaat("bagger"):
return 4;
break;
case joaat("baller"):
return 5;
break;
case joaat("banshee"):
case joaat("banshee2"):
return 6;
break;
case joaat("bati"):
return 7;
break;
case joaat("bati2"):
return 8;
break;
case joaat("bfinjection"):
return 9;
break;
case joaat("bison"):
return 10;
break;
case joaat("bison2"):
return 11;
break;
case joaat("bison3"):
return 12;
break;
case joaat("bjxl"):
return 13;
break;
case joaat("btype"):
return 14;
break;
case joaat("blazer"):
return 15;
break;
case joaat("blazer2"):
return 15;
break;
case joaat("blazer3"):
return 15;
break;
case joaat("blista"):
return 16;
break;
case joaat("bobcatxl"):
return 17;
break;
case joaat("bodhi2"):
return 18;
break;
case joaat("boxville"):
return 19;
break;
case joaat("boxville2"):
return 20;
break;
case joaat("boxville3"):
return 21;
break;
case joaat("buccaneer"):
case joaat("buccaneer2"):
return 22;
break;
case joaat("buffalo"):
return 23;
break;
case joaat("buffalo2"):
return 24;
break;
case joaat("bullet"):
return 25;
break;
case joaat("burrito"):
return 26;
break;
case joaat("paradise"):
return 27;
break;
case joaat("bifta"):
return 28;
break;
case joaat("kalahari"):
return 29;
break;
case joaat("carbonizzare"):
return 30;
break;
case joaat("carbonrs"):
return 31;
break;
case joaat("cavalcade"):
return 32;
break;
case joaat("cavalcade2"):
return 33;
break;
case joaat("cheetah"):
return 34;
break;
case joaat("cogcabrio"):
return 35;
break;
case joaat("comet2"):
return 36;
break;
case joaat("coquette"):
case joaat("coquette2"):
return 37;
break;
case joaat("daemon"):
return 38;
break;
case joaat("dilettante"):
return 39;
break;
case joaat("dominator"):
return 40;
break;
case joaat("double"):
return 41;
break;
case joaat("dubsta"):
return 42;
break;
case joaat("dubsta2"):
return 43;
break;
case joaat("elegy2"):
return 44;
break;
case joaat("emperor"):
return 45;
break;
case joaat("emperor2"):
return 46;
break;
case joaat("emperor3"):
return 47;
break;
case joaat("entityxf"):
return 48;
break;
case joaat("exemplar"):
return 49;
break;
case joaat("f620"):
return 50;
break;
case joaat("faggio2"):
return 51;
break;
case joaat("felon"):
return 52;
break;
case joaat("felon2"):
return 53;
break;
case joaat("feltzer2"):
return 54;
break;
case joaat("fq2"):
return 55;
break;
case joaat("fugitive"):
return 56;
break;
case joaat("fusilade"):
return 57;
break;
case joaat("futo"):
return 58;
break;
case joaat("gauntlet"):
return 59;
break;
case joaat("gburrito"):
return 60;
break;
case joaat("granger"):
return 61;
break;
case joaat("gresley"):
return 62;
break;
case joaat("habanero"):
return 63;
break;
case joaat("hexer"):
return 64;
break;
case joaat("hotknife"):
return 65;
break;
case joaat("infernus"):
return 66;
break;
case joaat("ingot"):
return 67;
break;
case joaat("intruder"):
return 68;
break;
case joaat("issi2"):
return 69;
break;
case joaat("jackal"):
return 70;
break;
case joaat("jb700"):
return 71;
break;
case joaat("khamelion"):
return 72;
break;
case joaat("landstalker"):
return 73;
break;
case joaat("lguard"):
return 74;
break;
case joaat("manana"):
return 75;
break;
case joaat("mesa"):
return 76;
break;
case joaat("minivan"):
case joaat("minivan2"):
return 77;
break;
case joaat("monroe"):
return 78;
break;
case joaat("nemesis"):
return 79;
break;
case joaat("ninef"):
return 80;
break;
case joaat("ninef2"):
return 81;
break;
case joaat("oracle"):
return 82;
break;
case joaat("oracle2"):
return 83;
break;
case joaat("patriot"):
return 84;
break;
case joaat("pcj"):
return 85;
break;
case joaat("penumbra"):
return 86;
break;
case joaat("peyote"):
return 87;
break;
case joaat("phoenix"):
return 88;
break;
case joaat("prairie"):
return 89;
break;
case joaat("pranger"):
return 90;
break;
case joaat("premier"):
return 91;
break;
case joaat("primo"):
case joaat("primo2"):
return 92;
break;
case joaat("radi"):
return 93;
break;
case joaat("rancherxl"):
return 94;
break;
case joaat("rancherxl2"):
return 95;
break;
case joaat("rapidgt"):
return 96;
break;
case joaat("rapidgt2"):
return 97;
break;
case joaat("ratloader"):
return 98;
break;
case joaat("rebel"):
return 99;
break;
case joaat("rebel2"):
return 100;
break;
case joaat("regina"):
return 101;
break;
case joaat("rocoto"):
return 102;
break;
case joaat("ruffian"):
return 103;
break;
case joaat("ruiner"):
return 104;
break;
case joaat("rumpo"):
return 105;
break;
case joaat("sabregt"):
case joaat("sabregt2"):
return 106;
break;
case joaat("sadler"):
return 107;
break;
case joaat("sanchez"):
return 108;
break;
case joaat("sandking"):
return 109;
break;
case joaat("sandking2"):
return 110;
break;
case joaat("schafter2"):
return 111;
break;
case joaat("schwarzer"):
return 112;
break;
case joaat("seminole"):
return 113;
break;
case joaat("sentinel"):
return 114;
break;
case joaat("sentinel2"):
return 115;
break;
case joaat("serrano"):
return 116;
break;
case joaat("speedo"):
return 117;
break;
case joaat("speedo2"):
return 118;
break;
case joaat("stanier"):
return 119;
break;
case joaat("stinger"):
return 120;
break;
case joaat("stingergt"):
return 121;
break;
case joaat("stratum"):
return 122;
break;
case joaat("stretch"):
return 123;
break;
case joaat("sultan"):
case joaat("sultanrs"):
return 124;
break;
case joaat("superd"):
return 125;
break;
case joaat("surano"):
return 126;
break;
case joaat("surge"):
return 127;
break;
case joaat("tailgater"):
return 128;
break;
case joaat("jester"):
return 129;
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
case joaat("tornado4"):
case joaat("tornado5"):
return 133;
break;
case joaat("vacca"):
return 134;
break;
case joaat("vader"):
return 135;
break;
case joaat("vigero"):
return 136;
break;
case joaat("voltic"):
return 137;
break;
case joaat("voodoo2"):
case joaat("voodoo"):
return 138;
break;
case joaat("washington"):
return 139;
break;
case joaat("youga"):
return 140;
break;
case joaat("zion"):
return 141;
break;
case joaat("zion2"):
return 142;
break;
case joaat("ztype"):
return 143;
break;
case joaat("massacro"):
return 144;
break;
case joaat("turismor"):
return 145;
break;
case joaat("zentorno"):
return 146;
break;
case joaat("huntley"):
return 147;
break;
case joaat("alpha"):
return 148;
break;
case joaat("cruiser"):
return 149;
break;
case joaat("surfer"):
return 150;
break;
case joaat("faction"):
case joaat("faction2"):
return 151;
break;
case joaat("chino"):
case joaat("chino2"):
return 152;
break;
case joaat("moonbeam"):
case joaat("moonbeam2"):
return 153;
break;
case joaat("btype2"):
return 154;
break;
case joaat("lurcher"):
return 155;
break;
case joaat("btype3"):
return 156;
break;
case joaat("faction3"):
return 157;
break;
case joaat("slamvan"):
case joaat("slamvan2"):
case joaat("slamvan3"):
return 158;
break;
case joaat("virgo2"):
return 159;
break;
case joaat("virgo3"):
return 160;
break;
case joaat("bestiagts"):
return 161;
break;
case joaat("brickade"):
return 162;
break;
case joaat("fmj"):
return 163;
break;
case joaat("nimbus"):
return 164;
break;
case joaat("pfister811"):
return 165;
break;
case joaat("prototipo"):
return 166;
break;
case joaat("rumpo3"):
return 167;
break;
case joaat("seven70"):
return 168;
break;
case joaat("tug"):
return 169;
break;
case joaat("volatus"):
return 170;
break;
case joaat("windsor2"):
return 171;
break;
case joaat("xls"):
return 172;
break;
case joaat("xls2"):
return 173;
break;
case joaat("reaper"):
return 174;
break;
case joaat("le7b"):
return 175;
break;
}
switch (iParam0){
case joaat("buffalo3"):
return 176;
break;
case joaat("dominator2"):
return 177;
break;
case joaat("gauntlet2"):
return 178;
break;
case joaat("stalion2"):
return 179;
break;
case joaat("omnis"):
return 180;
break;
case joaat("tropos"):
return 181;
break;
case joaat("brioso"):
return 182;
break;
case joaat("trophytruck"):
return 183;
break;
case joaat("trophytruck2"):
return 184;
break;
case joaat("contender"):
return 185;
break;
case joaat("cliffhanger"):
return 186;
break;
case joaat("bf400"):
return 187;
break;
case joaat("tyrus"):
return 188;
break;
case joaat("rallytruck"):
return 189;
break;
case joaat("tampa2"):
return 190;
break;
case joaat("gargoyle"):
return 191;
break;
case joaat("lynx"):
return 192;
break;
case joaat("sheava"):
return 193;
break;
case joaat("avarus"):
return 194;
break;
case joaat("chimera"):
return 195;
break;
case joaat("daemon2"):
return 196;
break;
case joaat("defiler"):
return 197;
break;
case joaat("esskey"):
return 198;
break;
case joaat("nightblade"):
return 199;
break;
case joaat("ratbike"):
return 200;
break;
case joaat("zombiea"):
return 202;
break;
case joaat("zombieb"):
return 203;
break;
case joaat("shotaro"):
return 204;
break;
case joaat("raptor"):
return 205;
break;
case joaat("hakuchou2"):
return 206;
break;
case joaat("blazer4"):
return 207;
break;
case joaat("sanctus"):
return 208;
break;
case joaat("vortex"):
return 209;
break;
case joaat("manchez"):
return 210;
break;
case joaat("tornado6"):
return 211;
break;
case joaat("youga2"):
return 212;
break;
case joaat("wolfsbane"):
return 213;
break;
case joaat("faggio3"):
return 214;
break;
case joaat("faggio"):
return 215;
break;
case joaat("dune5"):
return 216;
break;
case joaat("phantom2"):
return 217;
break;
case joaat("technical2"):
return 218;
break;
case joaat("blazer5"):
return 219;
break;
case joaat("boxville5"):
return 220;
break;
case joaat("wastelander"):
return 221;
break;
case joaat("ruiner2"):
return 222;
break;
case joaat("voltic2"):
return 223;
break;
case joaat("penetrator"):
return 224;
break;
case joaat("tempesta"):
return 225;
break;
case joaat("italigtb2"):
return 226;
break;
case joaat("nero2"):
return 227;
break;
case joaat("diablous2"):
return 228;
break;
case joaat("fcr2"):
return 229;
break;
case joaat("elegy"):
return 230;
break;
case joaat("comet3"):
return 232;
break;
case joaat("specter2"):
return 232;
break;
case joaat("nero"):
return 233;
break;
case joaat("italigtb"):
return 234;
break;
case joaat("fcr"):
return 235;
break;
case joaat("specter"):
return 236;
break;
case joaat("diablous"):
return 237;
break;
case joaat("infernus2"):
return 238;
break;
case joaat("gp1"):
return 239;
break;
case joaat("ruston"):
return 240;
break;
case joaat("turismo2"):
return 241;
break;
case joaat("cheetah2"):
return 242;
break;
case joaat("torero"):
return 243;
break;
case joaat("vagner"):
return 244;
break;
case joaat("xa21"):
return 245;
break;
case joaat("nightshark"):
return 246;
break;
case joaat("ardent"):
return 247;
break;
case joaat("tampa3"):
return 248;
break;
case joaat("apc"):
return 249;
break;
case joaat("dune3"):
return 250;
break;
case joaat("halftrack"):
return 251;
break;
case joaat("oppressor"):
return 252;
break;
case joaat("trailersmall2"):
return 253;
break;
case joaat("insurgent3"):
return 254;
break;
case joaat("technical3"):
return 255;
break;
case joaat("hauler2"):
return 256;
break;
case joaat("phantom3"):
return 257;
break;
case joaat("trailerlarge"):
return 258;
break;
case joaat("lazer"):
return 259;
break;
case joaat("microlight"):
return 260;
break;
case joaat("mogul"):
return 261;
break;
case joaat("rogue"):
return 262;
break;
case joaat("starling"):
return 263;
break;
case joaat("seabreeze"):
return 264;
break;
case joaat("tula"):
return 265;
break;
case joaat("pyro"):
return 266;
break;
case joaat("molotok"):
return 267;
break;
case joaat("nokota"):
return 268;
break;
case joaat("bombushka"):
return 269;
break;
case joaat("hunter"):
return 270;
break;
case joaat("havok"):
return 271;
break;
case joaat("howard"):
return 272;
break;
case joaat("alphaz1"):
return 273;
break;
case joaat("cyclone"):
return 274;
break;
case joaat("visione"):
return 275;
break;
case joaat("vigilante"):
return 276;
break;
case joaat("retinue"):
return 277;
break;
case joaat("rapidgt3"):
return 278;
break;
case joaat("deluxo"):
return 277;
break;
case joaat("stromberg"):
return 278;
break;
case joaat("riot2"):
return 279;
break;
case joaat("chernobog"):
return 280;
break;
case joaat("khanjali"):
return 281;
break;
case joaat("akula"):
return 282;
break;
case joaat("thruster"):
return 283;
break;
case joaat("avenger"):
return 284;
break;
case joaat("barrage"):
return 285;
break;
case joaat("volatol"):
return 286;
break;
case joaat("comet4"):
return 287;
break;
case joaat("neon"):
return 288;
break;
case joaat("streiter"):
return 289;
break;
case joaat("sentinel3"):
return 290;
break;
case joaat("yosemite"):
return 291;
break;
case joaat("hustler"):
return 292;
break;
case joaat("riata"):
return 293;
break;
case joaat("revolter"):
return 294;
break;
case joaat("hermes"):
return 295;
break;
case joaat("comet5"):
return 296;
break;
case joaat("z190"):
return 297;
break;
case joaat("viseris"):
return 298;
break;
case joaat("kamacho"):
return 299;
break;
case joaat("autarch"):
return 300;
break;
case joaat("pariah"):
return 301;
break;
case joaat("raiden"):
return 302;
break;
case joaat("sc1"):
return 303;
break;
case joaat("gt500"):
return 304;
break;
case joaat("savestra"):
return 305;
break;
}
return -1;
}

int func_512(int iParam0){
switch (iParam0){
case joaat("CMOD_TYR_10"):
case joaat("CMOD_SMOKE_10"):
return 0;
break;
case joaat("CMOD_TYR_11"):
case joaat("CMOD_SMOKE_11"):
return 1;
break;
case 232975537:
case joaat("CMOD_SMOKE_4"):
return 2;
break;
case 462718996:
case joaat("CMOD_SMOKE_5"):
return 3;
break;
case -444556307:
case joaat("CMOD_SMOKE_6"):
return 4;
break;
case -213731471:
case joaat("CMOD_SMOKE_7"):
return 5;
break;
case -968041086:
return 6;
break;
case -694977009:
case joaat("CMOD_SMOKE_3"):
return 7;
break;
case 1523877515:
case joaat("CMOD_SMOKE_8"):
return 8;
break;
case -1518694851:
return 9;
break;
case 685937731:
return 10;
break;
case 1107182854:
return 11;
break;
case 1795528252:
return 12;
break;
case 963431690:
return 13;
break;
case 7683469:
return 14;
break;
case -1485567420:
return 15;
break;
case joaat("HORN_CNOTE_C1"):
return 16;
break;
case joaat("CMOD_WIN_5"):
return 17;
break;
case -835077886:
case joaat("CMOD_SMOKE_12"):
return 18;
break;
case 1888648625:
case joaat("CMOD_SMOKE_13"):
return 19;
break;
case 1708257079:
return 20;
break;
case -1440188433:
return 22;
break;
case -1813427343:
return 22;
break;
case -1940603832:
return 23;
break;
case -665245345:
return 24;
break;
case 1049163197:
return 25;
break;
case -177872008:
return 26;
break;
case -366752524:
return 27;
break;
case -952091823:
return 28;
break;
case joaat("HORN_LUXE1"):
return 29;
break;
case joaat("HORN_LUXE2"):
return 30;
break;
case joaat("HORN_LUXE3"):
return 31;
break;
case joaat("HORN_LOWRDER1"):
return 32;
break;
case joaat("HORN_LOWRDER2"):
return 33;
break;
case joaat("HORN_HWEEN1"):
return 34;
break;
case joaat("HORN_HWEEN2"):
return 35;
break;
case joaat("HORN_XM15_1"):
return 36;
break;
case joaat("HORN_XM15_2"):
return 37;
break;
case joaat("HORN_XM15_3"):
return 38;
break;
}
return -1;
}

int func_513(int iParam0){
if(iParam0 !=func_426()){
if(func_515(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_514(Global_2689235[iParam0 /*453*/].f_318.f_6)==23;
}}}
return 0;
}

int func_514(int iParam0){
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
break;
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
break;
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
break;
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
break;
case 70:
case 71:
case 72:
case 73:
case 74:
case 75:
case 76:
case 77:
case 78:
case joaat("mpsv_lp0_31"):
case 80:
return 4;
break;
case 81:
return 5;
break;
case 82:
return 6;
break;
case 83:
case 84:
case 85:
case 86:
case 87:
return 7;
break;
case 88:
return 8;
break;
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
break;
case 101:
return 10;
break;
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
break;
case 117:
return 12;
break;
case 122:
return 13;
break;
case 123:
return 14;
break;
case 124:
return 15;
break;
case 125:
return 16;
break;
case 128:
case 129:
case 130:
case 131:
case 132:
case 133:
return 17;
break;
case 145:
return 18;
break;
case 146:
return 19;
break;
case 147:
return 20;
break;
case 148:
return 21;
break;
case 149:
case 151:
case 153:
case 152:
case 150:
return 22;
break;
case 154:
return 23;
break;
case 155:
case 156:
case 157:
case 158:
return 24;
}
return -1;
}

int func_515(int iParam0, bool bParam1, bool bParam2){
int iVar0;
iVar0=iParam0;
if(iVar0 !=-1){
if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0)){
if(bParam1){
if(!PLAYER::IS_PLAYER_PLAYING(iParam0)){
return 0;
}}
if(bParam2){
if(iVar0==Global_2703735.f_3){
return Global_2703735.f_2;
}elseif(Global_2689235[iVar0 /*453*/] !=4){
return 0;
}}
return 1;
}}
return 0;
}

int func_516(int iParam0){
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
return 1;
default:
}
return 0;
}

int func_517(int iParam0){
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
return 1;
default:
}
return 0;
}

int func_518(int iParam0, int iParam1, int iParam2, int iParam3){
int iVar0;
if(func_550(iParam1, iParam3)){
return 1;
}
if(func_549()){
return 1;
}
if(func_548(iParam1, iParam3) && func_546(PLAYER::PLAYER_ID())){
return 1;
}
if(iParam0==-1){
return 1;
}
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()){
return MISC::IS_BIT_SET(Global_113386.f_2363.f_539.f_2241[(iParam0 / 32)], (iParam0 % 32));
}else{
if(ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam2);
}
if(func_545(iParam1, iParam3)){
if(iVar0==joaat("phantom3") || iVar0==joaat("hauler2")){
return 1;
}elseif(iVar0==joaat("trailerlarge")){
if((iParam0==85 || iParam0==86) || iParam0==87){
return 1;
}}}
if(func_544(iParam1, iParam3)){
if(iVar0==joaat("avenger")){
return 1;
}}
if(func_543(iParam1, iParam3)){
if(iVar0==joaat("oppressor2")){
return 1;
}}
if(func_542(iParam1, iParam3)){
return 1;
}
if(func_541(iParam1, iParam3)){
if(iVar0==joaat("vigilante")){
if(iParam0==85 || iParam0==86){
return 1;
}}}
switch (iVar0){
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
return 1;
break;
}
if(((iParam0==85 || iParam0==86) || iParam0==87) || iParam0==88){
if(func_524(iParam2) || func_523(iVar0)){
return 1;
}}
if(iParam0==77 || iParam0==78){
if(iVar0==joaat("thruster")){
return 1;
}}
if((iParam0==1 || iParam0==2) || iParam0==3){
if(iVar0==joaat("oppressor2")){
return 1;
}}
if(((iParam0==72 || iParam0==73) || iParam0==74) || iParam0==75){
if(iVar0==joaat("barrage") || func_523(iVar0)){
return 1;
}}
if((iParam0==21 || iParam0==22) || iParam0==23){
if(func_523(iVar0)){
return 1;
}}elseif(iParam0==95 || iParam0==96){
if(func_523(iVar0) || func_522(iVar0)){
return 1;
}}
if((((((iParam0==17 || iParam0==18) || iParam0==19) || iParam0==20) || iParam0==62) || iParam0==63) || iParam0==64){
if(func_523(iVar0)){
return 1;
}}}
if(func_205()==0){
return func_519(iParam0, -1);
}
return 1;
}


var func__519(int iParam0, int iParam1){
var uVar0;
int iVar1;
uVar0=func_520(iParam0, iParam1);
iVar1=iParam0;
return MISC::IS_BIT_SET(uVar0, func_501(iVar1));
}


var func__520(var uParam0, int iParam1){
var uVar0;
uVar0=func_43(func_521(uParam0), iParam1, 0);
return uVar0;
}

int func_521(var uParam0){
int iVar0;
int iVar1;
iVar0=uParam0;
iVar1=func_500(iVar0);
if((func_205()==0 || func_224()==0) || (func_205()==999 && func_224()==999)){
switch (iVar1){
case 0:
return 730;
break;
case 1:
return 731;
break;
case 2:
return 732;
break;
case 3:
return 733;
break;
case 4:
return 734;
break;
case 5:
return 735;
break;
case 6:
return 736;
break;
}}
return 13122;
}

int func_522(int iParam0){
switch (iParam0){
case joaat("deity"):
case joaat("granger2"):
case joaat("buffalo4"):
case joaat("jubilee"):
case joaat("patriot3"):
case joaat("champion"):
case 40817712:
case -505223465:
return 1;
break;
}
return 0;
}

int func_523(int iParam0){
if(((iParam0==joaat("mule4") || iParam0==joaat("pounder2")) || iParam0==joaat("speedo4")) || iParam0==joaat("terbyte")){
return 1;
}
return 0;
}

int func_524(int iParam0){
if((!ENTITY::DOES_ENTITY_EXIST(iParam0) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) || ENTITY::IS_ENTITY_DEAD(iParam0, false)){
return 0;
}
if(func_529(iParam0, 0)){
return 1;
}
if(DECORATOR::DECOR_EXIST_ON(iParam0, "Player_Vehicle")){
if(DECORATOR::DECOR_GET_INT(iParam0, "Player_Vehicle")==NETWORK::NETWORK_HASH_FROM_PLAYER_HANDLE(PLAYER::PLAYER_ID())){
if(!func_525(iParam0)){
return 1;
}}}
return 0;
}

int func_525(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)){
iVar0=ENTITY::GET_ENTITY_MODEL(iParam0);
if((VEHICLE::IS_BIG_VEHICLE(iParam0) && !func_527(iParam0)) || func_526(iVar0)){
return 1;
}
switch (iVar0){
case joaat("slamtruck"):
case joaat("patriot2"):
case joaat("caracara"):
case joaat("caracara2"):
case joaat("mule4"):
case joaat("pounder2"):
case joaat("speedo4"):
return 1;
break;
}}
return 0;
}

int func_526(int iParam0){
switch (iParam0){
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
return 1;
default:
}
return 0;
}

int func_527(int iParam0){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
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
return 1;
break;
case joaat("cerberus"):
case joaat("cerberus2"):
case joaat("cerberus3"):
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(func_528(PLAYER::PLAYER_ID())){
return 1;
}
break;
case joaat("minitank"):
case joaat("burrito2"):
return 1;
}
return 0;
}

int func_528(int iParam0){
if(iParam0 !=func_426()){
if(func_515(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_514(Global_2689235[iParam0 /*453*/].f_318.f_6)==13;
}}}
return 0;
}

int func_529(int iParam0, bool bParam1){
switch (ENTITY::GET_ENTITY_MODEL(iParam0)){
case joaat("technical"):
case joaat("insurgent"):
if(func_531(ENTITY::GET_ENTITY_MODEL(iParam0), 0)){
if(Global_2815059.f_303==iParam0){
return 1;
}elseif(func_530(iParam0) !=-1 && !bParam1){
return 1;
}}
break;
}
return 0;
}

int func_530(int iParam0){
int iVar0;
if(ENTITY::DOES_ENTITY_EXIST(iParam0)){
iVar0=0;
while (iVar0 < 32){
if(Global_2703735.f_206[iVar0]==iParam0){
return iVar0;
}
iVar0++;
}}
return -1;
}

int func_531(int iParam0, int iParam1){
if(iParam1==0){
if(func_540(iParam0, 0)){
return 1;
}}
switch (iParam0){
case joaat("faction"):
case joaat("buccaneer"):
case joaat("chino"):
case joaat("moonbeam"):
case joaat("primo"):
case joaat("voodoo2"):
return func_539();
break;
case joaat("sabregt"):
if(Global_262145.f_14731){
return func_538();
}
break;
case joaat("tornado"):
case joaat("tornado2"):
case joaat("tornado3"):
if(Global_262145.f_14732){
return func_538();
}
break;
case joaat("virgo3"):
if(Global_262145.f_14730){
return func_538();
}
break;
case joaat("minivan"):
if(Global_262145.f_14733){
return func_538();
}
break;
case joaat("slamvan"):
if(Global_262145.f_14735){
return func_538();
}
break;
case joaat("sultan"):
case joaat("banshee"):
return func_537();
break;
case joaat("comet2"):
if(Global_262145.f_19186){
return func_536();
}
break;
case joaat("diablous"):
if(Global_262145.f_19188){
return func_536();
}
break;
case joaat("fcr"):
if(Global_262145.f_19192){
return func_536();
}
break;
case joaat("elegy2"):
if(Global_262145.f_19189){
return func_536();
}
break;
case joaat("nero"):
if(Global_262145.f_19196){
return func_536();
}
break;
case joaat("italigtb"):
if(Global_262145.f_19194){
return func_536();
}
break;
case joaat("specter"):
if(Global_262145.f_19199){
return func_536();
}
break;
case joaat("technical"):
if(Global_262145.f_21144){
return func_535();
}
break;
case joaat("insurgent"):
if(Global_262145.f_21145){
return func_535();
}
break;
case joaat("ratloader"):
case joaat("ratloader2"):
return func_534();
break;
case joaat("glendale"):
if(func_534() || func_533()){
return 1;
}
break;
case joaat("impaler"):
return func_534();
break;
case joaat("issi3"):
return func_534();
break;
case joaat("gargoyle"):
return func_534();
break;
case joaat("dominator"):
return func_534();
break;
case joaat("dominator2"):
return func_534();
break;
case joaat("imperator"):
return func_534();
break;
case joaat("imperator2"):
return func_534();
break;
case joaat("imperator3"):
return func_534();
break;
case joaat("deathbike"):
return func_534();
break;
case joaat("deathbike2"):
return func_534();
break;
case joaat("deathbike3"):
return func_534();
break;
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
return func_534();
break;
case joaat("youga2"):
if(Global_262145.f_29320){
return func_533();
}
break;
case joaat("gauntlet3"):
if(Global_262145.f_29670){
return func_533();
}
break;
case joaat("manana"):
if(Global_262145.f_29319){
return func_533();
}
break;
case joaat("peyote"):
if(Global_262145.f_29669){
return func_533();
}
break;
case joaat("yosemite"):
if(Global_262145.f_29668){
return func_533();
}
break;
}
switch (iParam0){
case -893984159:
if(Global_262145.f_33045){
return func_532();
}
break;
case joaat("weevil"):
if(Global_262145.f_33044){
return func_532();
}
break;
case joaat("brioso2"):
if(Global_262145.f_33037){
return func_532();
}
break;
case joaat("sentinel3"):
if(Global_262145.f_33046){
return func_532();
}
break;
}
return 0;
}


bool func_532(){
return DLC::IS_DLC_PRESENT(1199590110);
}


bool func_533(){
return DLC::IS_DLC_PRESENT(joaat("mpsum"));
}


bool func_534(){
return DLC::IS_DLC_PRESENT(joaat("mpchristmas2018"));
}


bool func_535(){
return DLC::IS_DLC_PRESENT(joaat("mpgunrunning"));
}


bool func_536(){
return DLC::IS_DLC_PRESENT(joaat("mpimportexport"));
}


bool func_537(){
return DLC::IS_DLC_PRESENT(joaat("mpjanuary2016"));
}


bool func_538(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider2"));
}


bool func_539(){
return DLC::IS_DLC_PRESENT(joaat("mplowrider"));
}

int func_540(int iParam0, int iParam1){
switch (iParam0){
case joaat("faction2"):
case joaat("buccaneer2"):
case joaat("chino2"):
case joaat("moonbeam2"):
case joaat("primo2"):
case joaat("voodoo"):
return 1;
break;
case 274946574:
case -994371320:
case 15214558:
case -1356880839:
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("sabregt2"):
if(!Global_262145.f_14731){
return 0;
}else{
return 1;
}
break;
case joaat("tornado5"):
if(!Global_262145.f_14732){
return 0;
}else{
return 1;
}
break;
case joaat("virgo2"):
if(!Global_262145.f_14730){
return 0;
}else{
return 1;
}
break;
case joaat("minivan2"):
if(!Global_262145.f_14733){
return 0;
}else{
return 1;
}
break;
case joaat("slamvan3"):
if(!Global_262145.f_14735){
return 0;
}else{
return 1;
}
break;
case joaat("faction3"):
if(!Global_262145.f_14734){
return 0;
}else{
return 1;
}
break;
case joaat("sultanrs"):
case joaat("banshee2"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("comet3"):
if(Global_262145.f_19186){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("diablous2"):
if(Global_262145.f_19188){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("fcr2"):
if(Global_262145.f_19192){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("elegy"):
if(Global_262145.f_19189){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("nero2"):
if(Global_262145.f_19196){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("italigtb2"):
if(Global_262145.f_19194){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("specter2"):
if(Global_262145.f_19199){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("technical3"):
if(Global_262145.f_21144){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("insurgent3"):
if(Global_262145.f_21145){
if(iParam1 & 1 !=0){
return 0;
}
return 1;
}
return 0;
break;
case joaat("slamvan4"):
case joaat("slamvan5"):
case joaat("slamvan6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("issi4"):
case joaat("issi5"):
case joaat("issi6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("impaler2"):
case joaat("impaler3"):
case joaat("impaler4"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("deathbike"):
case joaat("deathbike2"):
case joaat("deathbike3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("monster3"):
case joaat("monster4"):
case joaat("monster5"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("dominator4"):
case joaat("dominator5"):
case joaat("dominator6"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("bruiser"):
case joaat("bruiser2"):
case joaat("bruiser3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("youga3"):
case joaat("gauntlet5"):
case joaat("yosemite3"):
if(iParam1 & 1 !=0){
return 0;
}
return 1;
break;
case joaat("manana2"):
case joaat("peyote3"):
case joaat("glendale2"):
return 1;
break;
}
return 0;
}

int func_541(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==10){
return 1;
}}
return 0;
}

int func_542(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==12){
return 1;
}}
return 0;
}

int func_543(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==16){
return 1;
}}
return 0;
}

int func_544(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==14){
return 1;
}}
return 0;
}

int func_545(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==11){
return 1;
}}
return 0;
}

int func_546(int iParam0){
if(iParam0 !=func_426()){
if(func_547(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9==iParam0){
return 1;
}}
return 0;
}

int func_547(int iParam0){
if(iParam0 !=func_426()){
if(func_515(iParam0, 1, 1)){
if(Global_2689235[iParam0 /*453*/].f_318.f_6 !=-1){
return func_514(Global_2689235[iParam0 /*453*/].f_318.f_6)==22;
}}}
return 0;
}

int func_548(int iParam0, int iParam1){
if(iParam0==45){
if(iParam1==19){
return 1;
}}
return 0;
}


bool func_549(){
return MISC::IS_BIT_SET(Global_103905, 10);
}

int func_550(int iParam0, int iParam1){
if(iParam0==45){
switch (iParam1){
case 1:
case 2:
case 3:
return 1;
}
default:
}
return 0;
}

int func_551(int iParam0){
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
return 1;
break;
}
switch (iParam0){
case 15214558:
case -754687673:
case -768236378:
case 40817712:
case -64075878:
case -10917683:
case -294678663:
case -1855505138:
case 775514032:
case -893984159:
case 274946574:
case -165394758:
case -1758379524:
case -994371320:
case 1706945532:
case -1356880839:
case -505223465:
return 1;
break;
}
return 0;
}


void func_552(){
func_289(21, 1, 0);
func_290(21);
func_553();
}


void func_553(){
func_167(joaat("player_zero"), 14, 31, 1);
func_167(joaat("player_zero"), 14, 32, 1);
func_167(joaat("player_zero"), 14, 33, 1);
func_167(joaat("player_zero"), 14, 34, 1);
func_167(joaat("player_zero"), 14, 35, 1);
func_167(joaat("player_zero"), 14, 36, 1);
func_167(joaat("player_zero"), 14, 37, 1);
func_167(joaat("player_zero"), 14, 38, 1);
func_167(joaat("player_zero"), 14, 39, 1);
func_167(joaat("player_zero"), 14, 40, 1);
func_167(joaat("player_zero"), 14, 41, 1);
func_167(joaat("player_zero"), 14, 42, 1);
func_167(joaat("player_zero"), 14, 43, 1);
func_167(joaat("player_zero"), 14, 44, 1);
func_167(joaat("player_zero"), 9, 9, 1);
func_167(joaat("player_zero"), 9, 10, 1);
func_167(joaat("player_zero"), 9, 11, 1);
func_167(joaat("player_zero"), 9, 12, 1);
func_167(joaat("player_zero"), 9, 13, 1);
func_167(joaat("player_zero"), 9, 14, 1);
func_167(joaat("player_one"), 14, 26, 1);
func_167(joaat("player_one"), 14, 27, 1);
func_167(joaat("player_one"), 14, 28, 1);
func_167(joaat("player_one"), 14, 29, 1);
func_167(joaat("player_one"), 14, 30, 1);
func_167(joaat("player_one"), 14, 31, 1);
func_167(joaat("player_one"), 14, 32, 1);
func_167(joaat("player_one"), 14, 33, 1);
func_167(joaat("player_one"), 14, 34, 1);
func_167(joaat("player_one"), 14, 35, 1);
func_167(joaat("player_one"), 14, 36, 1);
func_167(joaat("player_one"), 14, 37, 1);
func_167(joaat("player_one"), 14, 38, 1);
func_167(joaat("player_one"), 14, 39, 1);
func_167(joaat("player_one"), 9, 5, 1);
func_167(joaat("player_one"), 9, 6, 1);
func_167(joaat("player_one"), 9, 7, 1);
func_167(joaat("player_one"), 9, 8, 1);
func_167(joaat("player_one"), 9, 9, 1);
func_167(joaat("player_one"), 9, 10, 1);
func_167(joaat("player_two"), 14, 49, 1);
func_167(joaat("player_two"), 14, 50, 1);
func_167(joaat("player_two"), 14, 51, 1);
func_167(joaat("player_two"), 14, 52, 1);
func_167(joaat("player_two"), 14, 53, 1);
func_167(joaat("player_two"), 14, 54, 1);
func_167(joaat("player_two"), 14, 55, 1);
func_167(joaat("player_two"), 14, 56, 1);
func_167(joaat("player_two"), 14, 57, 1);
func_167(joaat("player_two"), 14, 58, 1);
func_167(joaat("player_two"), 14, 59, 1);
func_167(joaat("player_two"), 14, 60, 1);
func_167(joaat("player_two"), 9, 9, 1);
func_167(joaat("player_two"), 9, 10, 1);
func_167(joaat("player_two"), 9, 11, 1);
func_167(joaat("player_two"), 9, 12, 1);
func_167(joaat("player_two"), 9, 13, 1);
func_167(joaat("player_two"), 9, 14, 1);
func_167(joaat("player_two"), 9, 15, 1);
func_167(joaat("player_two"), 9, 16, 1);
}


void func_554(){
func_289(0, 1, 0);
func_289(1, 1, 0);
func_289(2, 1, 0);
func_289(3, 1, 0);
func_289(4, 1, 0);
func_289(5, 1, 0);
func_289(6, 1, 0);
}


void func_555(){
func_556(30, 1);
}


void func_556(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if(iVar0 < 31){
if(bParam1){
MISC::SET_BIT(&(Global_113386.f_24995), iVar0);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_24995), bVar0);
}}else{
bVar0=(bVar0 - 31);
if(bParam1){
MISC::SET_BIT(&(Global_113386.f_24995.f_1), bVar0);
}else{
MISC::CLEAR_BIT(&(Global_113386.f_24995.f_1), bVar0);
}}}


void func_557(){
func_556(13, 1);
}


void func_558(){
func_556(32, 1);
}


void func_559(){
func_556(23, 1);
func_556(15, 1);
func_556(29, 1);
func_556(24, 1);
func_556(17, 1);
func_556(11, 1);
func_556(16, 1);
func_556(18, 1);
func_556(12, 1);
func_556(27, 1);
func_556(19, 1);
func_556(28, 1);
func_556(22, 1);
func_556(21, 1);
func_556(14, 1);
func_556(7, 1);
func_556(3, 1);
func_556(30, 0);
}


void func_560(){
}


void func_561(){
func_251(74, 1);
func_556(0, 1);
func_556(1, 1);
func_556(26, 1);
func_556(2, 1);
func_556(4, 1);
func_556(9, 1);
func_556(5, 1);
func_556(6, 1);
func_556(10, 1);
func_556(8, 1);
func_556(20, 1);
func_556(25, 1);
func_556(31, 1);
}


void func_562(){
func_242(68, 1, 0);
func_242(96, 1, 0);
func_242(97, 1, 0);
func_242(98, 1, 0);
func_242(99, 1, 0);
func_242(100, 1, 0);
func_242(101, 1, 0);
func_242(102, 1, 0);
func_242(103, 1, 0);
func_505(0, 2, 1);
func_505(0, 13, 1);
func_410("AM_H_SWTCH5", 2, 3000, -1, 10000, 7, 0, 0, 0);
func_288(68);
func_288(96);
func_13(-1900821691);
func_13(-1845612607);
}


void func_563(){
func_410("AM_H_CRCE", 0, 3000, -1, 10000, 7, 0, 0, 0);
func_505(0, 19, 1);
func_288(65);
func_242(65, 1, 0);
func_284(65);
}


void func_564(){
if(func_201()){
if(func_272(136)){
func_563();
}else{
func_194(1139718847, 6, 4, 20, 120000, 30000, -1, 39, -1, 0, 1);
}
Global_113386.f_25073.f_10=1;
}}


void func_565(){
func_288(110);
func_288(111);
func_242(110, 1, 0);
func_242(111, 1, 0);
func_505(0, 18, 1);
func_284(110);
}


void func_566(){
func_288(107);
func_242(107, 1, 0);
func_505(0, 17, 1);
func_219(113, 1, 0, 1, 0);
func_284(107);
func_410("AM_H_FOU", 0, 3000, -1, 10000, 7, 0, 0, 0);
}


void func_567(){
func_505(0, 14, 1);
}


void func_568(){
func_505(0, 12, 1);
func_251(56, 1);
}


void func_569(){
func_505(0, 10, 1);
func_288(95);
func_242(95, 1, 0);
BRAIN::REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE("launcher_stunts");
func_284(95);
func_410("AM_H_STNTP", 1, 3000, -1, 10000, 7, 0, 0, 0);
}


void func_570(){
func_288(94);
func_242(94, 1, 0);
func_505(0, 9, 1);
}


void func_571(){
func_410("AM_H_SRAC", 0, 3000, -1, 10000, 2, 0, 0, 0);
}


void func_572(){
func_505(0, 8, 1);
MISC::SET_BIT(&(Global_113386.f_24979.f_1), false);
MISC::SET_BIT(&(Global_113386.f_24979.f_1), true);
if(SYSTEM::VDIST2(func_186(PLAYER::PLAYER_ID()), func_185(87, 0)) < 43681f){
MISC::SET_BIT(&(Global_113386.f_24979.f_3), true);
}
if(SYSTEM::VDIST2(func_186(PLAYER::PLAYER_ID()), func_185(86, 0)) < 43681f){
MISC::SET_BIT(&(Global_113386.f_24979.f_3), false);
}}


void func_573(){
func_505(0, 7, 1);
Global_113386.f_24976=0;
MISC::SET_BIT(&(Global_113386.f_24976.f_2), false);
MISC::SET_BIT(&(Global_113386.f_24976.f_2), true);
MISC::SET_BIT(&(Global_113386.f_24976.f_2), 2);
MISC::SET_BIT(&(Global_113386.f_24976.f_2), 3);
}


void func_574(){
func_13(1440910066);
func_13(2063740346);
func_13(957098437);
func_573();
func_410("AM_H_SEAR", 0, 3000, -1, 10000, 7, 0, 0, 0);
}


void func_575(){
func_288(76);
func_505(0, 5, 1);
func_242(76, 1, 0);
func_284(76);
func_410("AM_H_PLTSC", 0, 3000, -1, 10000, 7, 0, 0, 0);
}


void func_576(){
func_288(70);
func_505(0, 4, 1);
func_251(69, 1);
func_242(70, 1, 0);
func_284(70);
func_410("AM_H_OFFRR", 0, 3000, -1, 10000, 4, 0, 0, 0);
}


void func_577(){
func_242(69, 1, 0);
func_88(func_69(2), 12, 20, 1, 1);
func_505(0, 3, 1);
func_284(69);
func_288(69);
func_410("AM_H_HUNT", 0, 3000, -1, 10000, 4, 0, 0, 0);
}


void func_578(){
func_242(68, 1, 0);
func_505(0, 2, 1);
func_284(68);
func_288(68);
func_410("AM_H_GOLF", 0, 3000, -1, 10000, 7, 0, 0, 0);
}


void func_579(){
func_505(0, 15, 1);
func_505(0, 16, 1);
func_284(105);
func_284(106);
func_288(105);
func_288(106);
}


void func_580(){
func_288(67);
func_242(67, 1, 0);
func_505(0, 1, 1);
func_251(73, 1);
func_284(67);
func_288(67);
}


void func_581(){
int iVar0;
func_242(125, 1, 0);
func_242(126, 1, 0);
func_242(127, 1, 0);
func_242(128, 1, 0);
func_242(129, 1, 0);
func_242(130, 1, 0);
func_242(131, 1, 0);
func_242(132, 1, 0);
func_242(133, 1, 0);
func_242(134, 1, 0);
func_242(135, 1, 0);
func_242(136, 1, 0);
func_242(137, 1, 0);
iVar0=125;
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (125 - iVar0))){
func_582(125, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (126 - iVar0))){
func_582(126, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (127 - iVar0))){
func_582(127, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (128 - iVar0))){
func_582(128, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (129 - iVar0))){
func_582(129, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (130 - iVar0))){
func_582(130, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (131 - iVar0))){
func_582(131, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (132 - iVar0))){
func_582(132, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (133 - iVar0))){
func_582(133, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (134 - iVar0))){
func_582(134, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (135 - iVar0))){
func_582(135, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (136 - iVar0))){
func_582(136, 1);
}
if(MISC::IS_BIT_SET(Global_113386.f_18967.f_1, (137 - iVar0))){
func_582(137, 1);
}
func_505(0, 0, 1);
func_284(125);
func_288(125);
func_410("AM_H_BASEJ", 0, 3000, -1, 10000, 7, 0, 0, 0);
func_194(-1783809705, 1, 2, 52, 200000, 10000, 64, 170, -1, 0, 1);
}


void func_582(int iParam0, bool bParam1){
int iVar0;
iVar0=iParam0;
if((iVar0 < 0 || iVar0 >=263) || iParam0==263){
return;
}
if(bParam1==MISC::IS_BIT_SET(Global_32338[iVar0 /*23*/].f_11, 20)){
return;
}
if(bParam1){
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
}else{
MISC::CLEAR_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
}
if(Global_32335==1){
Global_32336=1;
}
Global_32335=1;
MISC::SET_BIT(&(Global_32338[iVar0 /*23*/].f_11), 20);
}


void func_583(){
func_288(112);
func_288(113);
func_288(114);
func_242(112, 1, 0);
func_242(113, 1, 0);
func_242(114, 1, 0);
func_251(53, 1);
}


bool func_584(int iParam0){
return func_585(iParam0, Global_43052);
}

int func_585(int iParam0, int iParam1){
if(iParam1==15){
return 1;
}
if(iParam0==15){
return 0;
}
switch (iParam0){
case 16:
switch (iParam1){
case 9:
case 10:
case 7:
case 13:
case 14:
return 0;
break;
}
return 1;
break;
case 0:
switch (iParam1){
case 5:
case 17:
return 1;
break;
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
break;
}
break;
case 4:
if(iParam1==17){
return 1;
}
break;
case 5:
break;
case 6:
case 8:
if(iParam1==5){
return 1;
}
break;
case 7:
if(iParam1==6){
return 1;
}
break;
case 9:
if(iParam1==5){
return 1;
}
break;
case 10:
switch (iParam1){
case 5:
case 6:
case 17:
return 1;
break;
}
break;
case 11:
if(iParam1==5){
return 1;
}
break;
case 17:
switch (iParam1){
case 17:
case 12:
case 5:
return 1;
break;
}
break;
case 18:
case 12:
switch (iParam1){
case 5:
case 6:
case 8:
return 1;
break;
}
break;
case 13:
switch (iParam1){
case 5:
return 1;
break;
}
break;
case 14:
switch (iParam1){
case 5:
return 1;
break;
}
break;
}
return 0;
}
