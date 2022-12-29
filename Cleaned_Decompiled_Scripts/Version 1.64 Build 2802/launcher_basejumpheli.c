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
int iLocal_48=0;
var uLocal_49=0;
var uLocal_50=0;
var uLocal_51=0;
int iLocal_52=0;
var uLocal_53=0;
var uLocal_54=0;
var uLocal_55=0;
var uLocal_56=0;
var uLocal_57=0;
var uLocal_58=0;
var uLocal_59=0;
var uLocal_60=0;
var uLocal_61=0;
var uLocal_62=0;
var uLocal_63=0;
var uLocal_64=0;
var uLocal_65=0;
var uLocal_66=0;
var uLocal_67=0;
var uLocal_68=0;
var uLocal_69=0;
var uLocal_70=0;
var uLocal_71=0;
var uLocal_72=0;
var uLocal_73=0;
var uLocal_74=0;
var uLocal_75=0;
var uLocal_76=0;
var uLocal_77=0;
var uLocal_78=0;
var uLocal_79=0;
var uLocal_80=0;
var uLocal_81=0;
var uLocal_82=0;
var uLocal_83=0;
var uLocal_84=0;
Ped pedLocal_85=0;
Vehicle veLocal_86=0;
var uLocal_87=0;
var uLocal_88=0;
var uLocal_89=0;
var uLocal_90=0;
var uLocal_91=0;
var uLocal_92=0;
float fLocal_93=0f;
int iLocal_94=0;
int iLocal_95=0;
int iLocal_96=0;
eStackSize essLocal_97=0;
int iLocal_98=0;
int iLocal_99=0;
int iLocal_100=0;
char* sLocal_101=0;
float fLocal_102=0f;
int iLocal_103=0;
int iLocal_104=0;
int iLocal_105=0;
int iLocal_106=0;
var uLocal_107=0;
var uLocal_108=0;
var uLocal_109=0;
float fLocal_110=0f;
var uLocal_111=0;
var uLocal_112=0;
var uLocal_113=0;
var uLocal_114=0;
var uLocal_115=0;
var uLocal_116=0;
float fLocal_117=0f;
BOOL bLocal_118=0;
var uLocal_119=1;
var uLocal_120=0;
int iLocal_121=0;
var uLocal_122=16;
var uLocal_123=0;
var uLocal_124=0;
var uLocal_125=0;
var uLocal_126=0;
var uLocal_127=0;
var uLocal_128=0;
var uLocal_129=0;
var uLocal_130=0;
var uLocal_131=0;
var uLocal_132=0;
var uLocal_133=0;
var uLocal_134=0;
var uLocal_135=0;
var uLocal_136=0;
var uLocal_137=0;
var uLocal_138=0;
var uLocal_139=0;
var uLocal_140=0;
var uLocal_141=0;
var uLocal_142=0;
var uLocal_143=0;
var uLocal_144=0;
var uLocal_145=0;
var uLocal_146=0;
var uLocal_147=0;
var uLocal_148=0;
var uLocal_149=0;
var uLocal_150=0;
var uLocal_151=0;
var uLocal_152=0;
var uLocal_153=0;
var uLocal_154=0;
var uLocal_155=0;
var uLocal_156=0;
var uLocal_157=0;
var uLocal_158=0;
var uLocal_159=0;
var uLocal_160=0;
var uLocal_161=0;
var uLocal_162=0;
var uLocal_163=0;
var uLocal_164=0;
var uLocal_165=0;
var uLocal_166=0;
var uLocal_167=0;
var uLocal_168=0;
var uLocal_169=0;
var uLocal_170=0;
var uLocal_171=0;
var uLocal_172=0;
var uLocal_173=0;
var uLocal_174=0;
var uLocal_175=0;
var uLocal_176=0;
var uLocal_177=0;
var uLocal_178=0;
var uLocal_179=0;
var uLocal_180=0;
var uLocal_181=0;
var uLocal_182=0;
var uLocal_183=0;
var uLocal_184=0;
var uLocal_185=0;
var uLocal_186=0;
var uLocal_187=0;
var uLocal_188=0;
var uLocal_189=0;
var uLocal_190=0;
var uLocal_191=0;
var uLocal_192=0;
var uLocal_193=0;
var uLocal_194=0;
var uLocal_195=0;
var uLocal_196=0;
var uLocal_197=0;
var uLocal_198=0;
var uLocal_199=0;
var uLocal_200=0;
var uLocal_201=0;
var uLocal_202=0;
var uLocal_203=0;
var uLocal_204=0;
var uLocal_205=0;
var uLocal_206=0;
var uLocal_207=0;
var uLocal_208=0;
var uLocal_209=0;
var uLocal_210=0;
var uLocal_211=0;
var uLocal_212=0;
var uLocal_213=0;
var uLocal_214=0;
var uLocal_215=0;
var uLocal_216=0;
var uLocal_217=0;
var uLocal_218=0;
var uLocal_219=0;
var uLocal_220=0;
var uLocal_221=0;
var uLocal_222=0;
var uLocal_223=0;
var uLocal_224=0;
var uLocal_225=0;
var uLocal_226=0;
var uLocal_227=0;
var uLocal_228=0;
var uLocal_229=0;
var uLocal_230=0;
var uLocal_231=0;
var uLocal_232=0;
var uLocal_233=0;
var uLocal_234=0;
var uLocal_235=0;
var uLocal_236=0;
var uLocal_237=0;
var uLocal_238=0;
var uLocal_239=0;
var uLocal_240=0;
var uLocal_241=0;
var uLocal_242=0;
var uLocal_243=0;
var uLocal_244=0;
var uLocal_245=0;
var uLocal_246=0;
var uLocal_247=0;
var uLocal_248=0;
var uLocal_249=0;
var uLocal_250=0;
var uLocal_251=0;
var uLocal_252=0;
var uLocal_253=0;
var uLocal_254=0;
var uLocal_255=0;
var uLocal_256=0;
var uLocal_257=0;
var uLocal_258=0;
var uLocal_259=0;
var uLocal_260=0;
var uLocal_261=0;
var uLocal_262=0;
var uLocal_263=0;
var uLocal_264=0;
var uLocal_265=0;
var uLocal_266=0;
var uLocal_267=0;
var uLocal_268=0;
var uLocal_269=0;
var uLocal_270=0;
var uLocal_271=0;
var uLocal_272=0;
var uLocal_273=0;
var uLocal_274=0;
var uLocal_275=0;
var uLocal_276=0;
var uLocal_277=0;
var uLocal_278=0;
var uLocal_279=0;
var uLocal_280=0;
var uLocal_281=0;
var uLocal_282=0;
var uLocal_283=0;
var uLocal_284=0;
var uLocal_285=0;
var uLocal_286=0;
Vehicle veLocal_287=0;
var uLocal_288=0;
var uLocal_289=0;
var uLocal_290=0;
var uLocal_291=16;
var uLocal_292=0;
var uLocal_293=0;
var uLocal_294=0;
var uLocal_295=0;
var uLocal_296=0;
var uLocal_297=0;
var uLocal_298=0;
var uLocal_299=0;
var uLocal_300=0;
var uLocal_301=0;
var uLocal_302=0;
var uLocal_303=0;
var uLocal_304=0;
var uLocal_305=0;
var uLocal_306=0;
var uLocal_307=0;
var uLocal_308=0;
var uLocal_309=0;
var uLocal_310=0;
var uLocal_311=0;
var uLocal_312=0;
var uLocal_313=0;
var uLocal_314=0;
var uLocal_315=0;
var uLocal_316=0;
var uLocal_317=0;
var uLocal_318=0;
var uLocal_319=0;
var uLocal_320=0;
var uLocal_321=0;
var uLocal_322=0;
var uLocal_323=0;
var uLocal_324=0;
var uLocal_325=0;
var uLocal_326=0;
var uLocal_327=0;
var uLocal_328=0;
var uLocal_329=0;
var uLocal_330=0;
var uLocal_331=0;
var uLocal_332=0;
var uLocal_333=0;
var uLocal_334=0;
var uLocal_335=0;
var uLocal_336=0;
var uLocal_337=0;
var uLocal_338=0;
var uLocal_339=0;
var uLocal_340=0;
var uLocal_341=0;
var uLocal_342=0;
var uLocal_343=0;
var uLocal_344=0;
var uLocal_345=0;
var uLocal_346=0;
var uLocal_347=0;
var uLocal_348=0;
var uLocal_349=0;
var uLocal_350=0;
var uLocal_351=0;
var uLocal_352=0;
var uLocal_353=0;
var uLocal_354=0;
var uLocal_355=0;
var uLocal_356=0;
var uLocal_357=0;
var uLocal_358=0;
var uLocal_359=0;
var uLocal_360=0;
var uLocal_361=0;
var uLocal_362=0;
var uLocal_363=0;
var uLocal_364=0;
var uLocal_365=0;
var uLocal_366=0;
var uLocal_367=0;
var uLocal_368=0;
var uLocal_369=0;
var uLocal_370=0;
var uLocal_371=0;
var uLocal_372=0;
var uLocal_373=0;
var uLocal_374=0;
var uLocal_375=0;
var uLocal_376=0;
var uLocal_377=0;
var uLocal_378=0;
var uLocal_379=0;
var uLocal_380=0;
var uLocal_381=0;
var uLocal_382=0;
var uLocal_383=0;
var uLocal_384=0;
var uLocal_385=0;
var uLocal_386=0;
var uLocal_387=0;
var uLocal_388=0;
var uLocal_389=0;
var uLocal_390=0;
var uLocal_391=0;
var uLocal_392=0;
var uLocal_393=0;
var uLocal_394=0;
var uLocal_395=0;
var uLocal_396=0;
var uLocal_397=0;
var uLocal_398=0;
var uLocal_399=0;
var uLocal_400=0;
var uLocal_401=0;
var uLocal_402=0;
var uLocal_403=0;
var uLocal_404=0;
var uLocal_405=0;
var uLocal_406=0;
var uLocal_407=0;
var uLocal_408=0;
var uLocal_409=0;
var uLocal_410=0;
var uLocal_411=0;
var uLocal_412=0;
var uLocal_413=0;
var uLocal_414=0;
var uLocal_415=0;
var uLocal_416=0;
var uLocal_417=0;
var uLocal_418=0;
var uLocal_419=0;
var uLocal_420=0;
var uLocal_421=0;
var uLocal_422=0;
var uLocal_423=0;
var uLocal_424=0;
var uLocal_425=0;
var uLocal_426=0;
var uLocal_427=0;
var uLocal_428=0;
var uLocal_429=0;
var uLocal_430=0;
var uLocal_431=0;
var uLocal_432=0;
var uLocal_433=0;
var uLocal_434=0;
var uLocal_435=0;
var uLocal_436=0;
var uLocal_437=0;
var uLocal_438=0;
var uLocal_439=0;
var uLocal_440=0;
var uLocal_441=0;
var uLocal_442=0;
var uLocal_443=0;
var uLocal_444=0;
var uLocal_445=0;
var uLocal_446=0;
var uLocal_447=0;
var uLocal_448=0;
var uLocal_449=0;
var uLocal_450=0;
var uLocal_451=0;
var uLocal_452=0;
var uLocal_453=0;
var uLocal_454=0;
var uLocal_455=0;
var uLocal_456=0;
BOOL bLocal_457=0;
BOOL bLocal_458=0;
BOOL bLocal_459=0;
BOOL bLocal_460=0;
Cam caLocal_461=0;
var uLocal_462=0;
var uLocal_463=0;
var uLocal_464=0;
var uLocal_465=0;
var uLocal_466=0;
var uLocal_467=0;
var uLocal_468=0;
var uScriptParam_0=0;
var uScriptParam_1=5;
var uScriptParam_2=0;
var uScriptParam_3=0;
var uScriptParam_4=0;
var uScriptParam_5=0;
var uScriptParam_6=0;
var uScriptParam_7=0;
var uScriptParam_8=0;
var uScriptParam_9=0;
var uScriptParam_10=0;
var uScriptParam_11=0;
var uScriptParam_12=0;
var uScriptParam_13=0;
var uScriptParam_14=0;
var uScriptParam_15=0;
var uScriptParam_16=0;
var uScriptParam_17=5;
var uScriptParam_18=0;
var uScriptParam_19=0;
var uScriptParam_20=0;
var uScriptParam_21=0;
var uScriptParam_22=0;
#endregion

void main() // Position - 0x0{
BOOL flag;
BOOL flag2;
BOOL flag3;
Vehicle vehiclePedIsUsing;
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
iLocal_28=3;
fLocal_31=80f;
fLocal_32=140f;
fLocal_33=180f;
iLocal_39=1;
iLocal_40=65;
iLocal_41=49;
iLocal_42=64;
uLocal_45={
500f, 500f, 500f 
};
iLocal_96=-1;
essLocal_97=FRIEND;
iLocal_98=-1;
iLocal_99=-1;
sLocal_101="CC_SUBSTR" /*~INPUT_CONTEXT~*/;
fLocal_102=125f;
iLocal_103=1;
iLocal_105=263;
fLocal_117=4f;
bLocal_118=true;
uLocal_90={
uScriptParam_0.f_1[0 /*3*/] 
};
uLocal_90={
uLocal_90 
};
veLocal_86=veLocal_86;
uLocal_69={
uLocal_69 
};
flag=false;
if(PLAYER::HAS_FORCE_CLEANUP_OCCURRED(114)) func_170(true);
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
iLocal_95=0;
func_168(&Global_112299, 0);
func_162();
MISC::SET_THIS_IS_A_TRIGGER_SCRIPT(true);
if(func_161(iLocal_94, 1)) iLocal_100=10;
else iLocal_100=9;
while (!Global_38596){
SYSTEM::WAIT(0);
}
if(!func_161(iLocal_94, 8))if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100))if(func_158(0, iLocal_99)) func_170(false);
else func_170(true);
if(iLocal_99 !=-1)if(!func_158(0, iLocal_99)) bLocal_118=false;
if(func_161(iLocal_94, 8388608)) func_170(true);
if(func_161(iLocal_94, 524288) && func_157() && !func_156()) func_170(true);
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME()) > 1 && !func_161(iLocal_94, 4194304)){
if(iLocal_105 !=263){
func_155(iLocal_105, true, false);
iLocal_105=263;
}
func_154(10);
}
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_86))if(func_153() && !Global_112695) func_152(1);
else Global_112695;
while (true){
if(Global_3) func_170(true);
pedLocal_85=PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
if(func_161(iLocal_94, 1048576))if(ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)) func_170(true);
if(ENTITY::DOES_ENTITY_EXIST(pedLocal_85) && !ENTITY::IS_ENTITY_DEAD(pedLocal_85, false)){
uLocal_87={
ENTITY::GET_ENTITY_COORDS(pedLocal_85, true) 
};
fLocal_93=SYSTEM::VDIST2(uLocal_87, uScriptParam_0.f_1[0 /*3*/]);
fLocal_93=fLocal_93;
uLocal_111={
uLocal_87 
};
uLocal_114={
uScriptParam_0.f_1[0 /*3*/] 
};
uLocal_111.f_2=0f;
uLocal_114.f_2=0f;
fLocal_110=SYSTEM::VDIST2(uLocal_111, uLocal_114);
switch (iLocal_95){
case 0:
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) || func_161(iLocal_94, 16) && !func_161(iLocal_94, 524288)){
iLocal_98=-1;
func_147();
func_154(1);
}else{
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_155(iLocal_105, true, false);
iLocal_105=263;
}
func_154(10);
}
uLocal_87.f_2 - uScriptParam_0.f_1[0 /*3*/].f_2 > 500f;
}
break;
case 1:
if(func_145()){
iLocal_103=iLocal_103;
func_154(3);
}else{
func_147();
}
break;
case 3:
if(NETWORK::NETWORK_IS_IN_SESSION()){
func_170(true);
return;
}
if(!_CAN_ENTER_FREEROAM_STATE(iLocal_100)){
if(!func_161(iLocal_94, 8)){
flag2=true;
if(MISC::ARE_STRINGS_EQUAL(&(Global_100681.f_3), &uLocal_69)){
uLocal_69={
uLocal_53 
};
flag2=false;
}
if(flag2){
func_170(false);
break;
}
}}
if(!func_161(iLocal_94, 4)){
func_143();
func_142(&iLocal_94, 4);
}
if(fLocal_110 > fLocal_102 * fLocal_102 && !Global_100715){
if(iLocal_105 !=263){
if(func_141(6) && !func_140(iLocal_105)){
}else{
func_155(iLocal_105, true, false);
iLocal_105=263;
}
}
func_154(10);
}else{
uLocal_69={
uLocal_53 
};
flag3=!func_161(iLocal_94, 64);
func_168(&iLocal_94, 128);
if(!func_139(3) && !Global_100715){
if(func_161(iLocal_94, 2097152)){
if(!func_161(iLocal_94, 1) || !ENTITY::DOES_ENTITY_EXIST(func_138()) && !Global_100715){
func_154(10);
break;
}}
}
if(func_161(iLocal_94, 524288) && func_157() && !func_156()) func_170(true);
if(func_137()) func_170(true);
if(!func_129(6) || Global_112695 || func_128()) flag3=false;
if(!bLocal_118){
func_126(&iLocal_94, 128);
flag3=false;
}
if(func_161(iLocal_94, 1)){
if(!func_125()){
func_126(&iLocal_94, 128);
flag3=false;
}
}
if(func_124(true)) flag3=false;
if(Global_78558) flag3=false;
if(func_123()) flag3=false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) flag3=false;
if(func_122() || func_121(8, -1)) flag3=false;
if(!PLAYER::CAN_PLAYER_START_MISSION(PLAYER::PLAYER_ID())) flag3=false;
if(func_120(0) || func_119()) flag3=false;
if(flag3){
if(ENTITY::IS_ENTITY_DEAD(veLocal_86, false)){
func_126(&iLocal_94, 128);
flag3=false;
}elseif(!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)){
func_126(&iLocal_94, 128);
flag3=false;
}else{
vehiclePedIsUsing=PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
if(flag3){
if(veLocal_86==vehiclePedIsUsing){
}
else{
func_126(&iLocal_94, 128);
flag3=false;
}}}
if(flag3){
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(func_118(veLocal_86)){
if(iLocal_96==-1){
_CONTEXT_ADD_HELP_TEXT(&iLocal_96, 4, sLocal_101, 0, 0, 0, 0);
func_126(&iLocal_94, 2048);
}
elseif(!func_161(iLocal_94, 2048) || !HUD::IS_HELP_MESSAGE_BEING_DISPLAYED()){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_168(&iLocal_94, 2048);
}
if(func_114(iLocal_96, true)){
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_168(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, SPC_REMOVE_FIRES | 16 | 32);
func_154(5);
}}else{
sLocal_101=sLocal_101;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_168(&iLocal_94, 2048);
SCRIPT::REQUEST_SCRIPT(&uLocal_69);
func_154(5);
}}
}
if(!flag3){
if(iLocal_96 !=-1){
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
func_168(&iLocal_94, 2048);
HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(0);
}
}}
func_52();
break;
case 5:
PAD::SET_INPUT_EXCLUSIVE(PLAYER_CONTROL, INPUT_CONTEXT);
if(SCRIPT::HAS_SCRIPT_LOADED(&uLocal_69)){
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
num=2;
flag=false;
if(func_161(iLocal_94, 1)){
if(func_141(6) || func_141(7)){
num=1;
flag=true;
}
}
if(num !=1) num=func_49(&iLocal_98, 6, iLocal_100, false, 0);
if(num==1){
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())) PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
func_48();
if(Global_44446) func_39(PLAYER::PLAYER_PED_ID());
iLocal_52=func_29();
func_168(&iLocal_94, 4);
func_28();
func_126(&iLocal_94, 2);
func_154(6);
func_24(&uLocal_107);
if(iLocal_99 !=-1){
func_23(iLocal_99);
func_20(func_22(iLocal_99), 0, 0);
}
}
elseif(num==2){
func_17();
}
elseif(num==0){
func_154(10);
}}else{
func_17();
}
break;
case 6:
if(func_161(Global_112299, 262144)){
func_168(&Global_112299, 262144);
func_16();
}
if(func_161(iLocal_94, 2097152))if(!func_139(3) && !SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) func_154(10);
if(!SCRIPT::IS_THREAD_ACTIVE(iLocal_52)){
STATS::PLAYSTATS_ODDJOB_DONE(SYSTEM::ROUND(func_12(&uLocal_107) * 1000f), iLocal_99, 0);
func_11(&uLocal_107);
func_168(&iLocal_94, 256);
func_8();
if(flag){
func_168(&iLocal_94, 2);
}
elseif(func_161(iLocal_94, 2)){
if(func_161(Global_112299, 0)){
func_7(&iLocal_98);
iLocal_98=-1;
func_168(&iLocal_94, 2);
}else{
func_7(&iLocal_98);
iLocal_98=-1;
func_168(&iLocal_94, 2);
}
}
func_154(0);
if(iLocal_99 !=-1){
if(func_161(Global_112299, 0)){
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_22(iLocal_99), 0, Global_100718, 0);
func_6(func_22(iLocal_99), 0, Global_100718, true, false);
}else{
STATS::PLAYSTATS_MISSION_CHECKPOINT(func_22(iLocal_99), 0, Global_100718, 0);
func_6(func_22(iLocal_99), 0, Global_100718, false, false);
}
}
func_5();
func_168(&Global_112299, 0);
if(func_161(iLocal_94, 16777216)) func_170(true);
if(iLocal_99 !=-1)if(Global_113648.f_9087)if(!func_158(0, iLocal_99)) func_170(true);
}
func_4();
break;
case 8:
func_154(0);
break;
case 10:
func_170(true);
break;
case 9:
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_155(iLocal_105, true, false);
iLocal_105=263;
}
func_154(10);
}
break;
case 7:
func_2();
if(iLocal_105 !=263) func_155(iLocal_105, false, false);
if(iLocal_96 !=-1) _CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_101))if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(sLocal_101)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
func_154(4);
break;
case 4:
if(iLocal_104 % 150==0){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(iLocal_106==2){
if(iLocal_106==2){
if(_CAN_ENTER_FREEROAM_STATE(iLocal_100) && func_158(0, iLocal_99)){
func_162();
if(iLocal_105 !=263) func_155(iLocal_105, true, false);
func_154(0);
}}}elseif(iLocal_106==0){
if(fLocal_110 > fLocal_102 * fLocal_102){
if(iLocal_105 !=263){
func_155(iLocal_105, true, false);
iLocal_105=263;
}
func_154(10);
}}elseif(iLocal_106==1){
if(fLocal_110 > (80f + 5f) * (80f + 5f)){
func_162();
if(iLocal_105 !=263) func_155(iLocal_105, true, false);
func_154(0);
}}
}
else{
func_155(iLocal_105, true, false);
}}else{
iLocal_104=iLocal_104 + 1;
}
break;
}}
SYSTEM::WAIT(0);
}
return;
}
BOOL _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(char* message) // Position - 0xA35{
HUD::BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(message);
return HUD::END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(0);
}


void func_2() // Position - 0xA48{
func_3(&uLocal_119);
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_287);
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(veLocal_287.f_3));
return;
}


void func_3(var uParam0) // Position - 0xA66{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i] !=0) STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->[i]);
}
return;
}


void func_4() // Position - 0xA96{
return;
}


void func_5() // Position - 0xA9E{
if(iLocal_121==0) VEHICLE::CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST();
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", false);
return;
}


void func_6(char* sParam0, int iParam1, Any anParam2, BOOL bParam3, BOOL bParam4) // Position - 0xAB8{
if(MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)) return;
if(MISC::COMPARE_STRINGS(sParam0, &Global_97751, false, -1) !=0) return;
STATS::PLAYSTATS_MISSION_OVER(sParam0, iParam1, anParam2, bParam3, bParam4, Global_94858);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
return;
}


void func_7(var uParam0) // Position - 0xAFC{
if(*uParam0==-1) return;
if(!*uParam0==Global_43219){
*uParam0=-1;
return;
}
*uParam0=-1;
Global_43218=0;
Global_43220=0;
Global_43257=15;
Global_63359=0;
Global_63360=0;
return;
}


void func_8() // Position - 0xB39{
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_10()){
NETWORK::NETWORK_SET_RICH_PRESENCE(StackVal, 0, 0, 0);
}elseif(MISC::IS_PS3_VERSION() || func_9()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "PRESENCE_0_STR" /*Playing story*/, 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(0, &textLabel);
}
return;
}
BOOL func_9() // Position - 0xB7B{
return MISC::IS_ORBIS_VERSION() || unk_0xEE17703CF2C2875A();
}
BOOL func_10() // Position - 0xB91{
return MISC::IS_DURANGO_VERSION() || unk_0x14F62099DEBAEA33();
}


void func_11(var uParam0) // Position - 0xBA7{
uParam0->f_1=0f;
uParam0->f_2=0f;
*uParam0=0;
return;
}


float func_12(var uParam0) // Position - 0xBBD{
if(func_15(uParam0))if(func_14(uParam0)) return uParam0->f_2;
else return func_13(IS_BIT_SET(*uParam0, 4)) - uParam0->f_1;
return uParam0->f_1;
}


float func_13(BOOL bParam0) // Position - 0xBF9{
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
BOOL func_14(int* piParam0) // Position - 0xC51{
return IS_BIT_SET(*piParam0, 2);
}
BOOL func_15(int* piParam0) // Position - 0xC5E{
return IS_BIT_SET(*piParam0, 1);
}

int func_16() // Position - 0xC6B{
return 1;
}


void func_17() // Position - 0xC74{
func_18(&caLocal_461, veLocal_287);
return;
}


void func_18(var uParam0, Vehicle veParam1) // Position - 0xC86{
float camRot;
Vector3 entityCoords;
Vector3 camCoord;
float num;
if(CAM::DOES_CAM_EXIST(*uParam0) && CAM::IS_CAM_ACTIVE(*uParam0)){
camCoord={
CAM::GET_CAM_COORD(*uParam0) 
};
camRot={
CAM::GET_CAM_ROT(*uParam0, 2) 
};
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(veParam1, true) 
};
num=MISC::ATAN2(entityCoords.f_2 - camCoord.f_2, MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, camCoord, false));
if(num > camRot) camRot=func_19(camRot, num, 0.07f);
CAM::SET_CAM_ROT(*uParam0, camRot, 2);
}
return;
}


float func_19(float fParam0, float fParam1, float fParam2) // Position - 0xD0F{
return ((1f - fParam2) * fParam0) + (fParam2 * fParam1);
}


void func_20(char* sParam0, int iParam1, int iParam2) // Position - 0xD24{
if(!MISC::IS_STRING_NULL_OR_EMPTY(&Global_97751)){
STATS::PLAYSTATS_MISSION_OVER(&Global_97751, 0, 0, false, true, false);
TEXT_LABEL_ASSIGN_STRING(&Global_97751, "", 64);
}
TEXT_LABEL_ASSIGN_STRING(&Global_97751, sParam0, 64);
unk_0x363D7D2154F0040D(sParam0, iParam1, iParam2, _IS_MISSION_REPEAT_ACTIVE(false));
return;
}
BOOL _IS_MISSION_REPEAT_ACTIVE(BOOL bExcludeBenchmark) // Position - 0xD65{
if(!bExcludeBenchmark && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("benchmark")) > 0) return true;
return IS_BIT_SET(Global_78807, 0);
}


char* func_22(int iParam0) // Position - 0xD8D{
switch (iParam0){
case 0:
return "OJBJ";
case 1:
return "MGDT";
case 2:
return "MGGF";
case 3:
return "OJHU";
case 4:
return "MGOR";
case 5:
return "MGPS";
case 6:
return "MGRP";
case 7:
return "MGSEA";
case 8:
return "MGSTR";
case 9:
return "MGSC";
case 10:
return "MGSP";
case 11:
return "MGSRm";
case 12:
return "OJTX";
case 13:
return "MGTN";
case 14:
return "OJTW";
case 15:
return "OJDA";
case 16:
return "OJDG";
case 17:
return "MGTR";
case 18:
return "MGYG";
case 19:
return "MGCR";
}
return "INVALID!";
}


void func_23(int iParam0) // Position - 0xECB{
int num;
var textLabel;
if(MISC::IS_XBOX360_VERSION() || func_10()){
num=iParam0;
NETWORK::NETWORK_SET_RICH_PRESENCE(8, &num, 1, 1);
}elseif(MISC::IS_PS3_VERSION() || func_9()){
TEXT_LABEL_ASSIGN_STRING(&textLabel, "SPMG_", 24);
TEXT_LABEL_APPEND_INT(&textLabel, iParam0, 24);
TEXT_LABEL_APPEND_STRING(&textLabel, "_STR", 24);
NETWORK::NETWORK_SET_RICH_PRESENCE_STRING(8, &textLabel);
}
return;
}


void func_24(int* piParam0) // Position - 0xF22{
if(!func_15(piParam0)) func_27(piParam0);
else func_25(piParam0);
return;
}


void func_25(int* piParam0) // Position - 0xF43{
func_26(piParam0, 0f);
return;
}


void func_26(int* piParam0, float fParam1) // Position - 0xF52{
piParam0->f_1=func_13(IS_BIT_SET(*piParam0, 4)) - fParam1;
MISC::SET_BIT(piParam0, 1);
MISC::CLEAR_BIT(piParam0, 2);
piParam0->f_2=0f;
return;
}


void func_27(int* piParam0) // Position - 0xF7D{
if(!func_15(piParam0)) func_25(piParam0);
return;
}


void func_28() // Position - 0xF95{
ENTITY::DOES_ENTITY_EXIST(veLocal_287) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID());
if(CAM::IS_CAM_ACTIVE(caLocal_461)){
CAM::SET_CAM_ACTIVE(caLocal_461, false);
CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
CAM::DESTROY_CAM(caLocal_461, false);
}
func_2();
return;
}

int func_29() // Position - 0xFDF{
int num;
Global_113648.f_18969=iLocal_121;
switch (iLocal_121){
case 0:
case 1:
case 2:
case 3:
case 9:
case 10:
case 11:
func_38();
break;
case 7:
func_38();
func_30(65, 0, 1, true, 0);
func_30(66, 0, true, true, 0);
break;
default:
break;
}
num=SYSTEM::START_NEW_SCRIPT_WITH_ARGS(&uLocal_53, &veLocal_287, 170, essLocal_97);
SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_53);
return num;
}


void func_30(int iParam0, int iParam1, BOOL bParam2, BOOL bParam3, int iParam4) // Position - 0x1063{
if(iParam0 !=198){
if(Global_78558) Global_42791.f_227[iParam0]=iParam1;
else Global_113648.f_7263.f_227[iParam0]=iParam1;
Global_39797[iParam0]=bParam2;
Global_39996[iParam0]=1;
func_33(iParam0, bParam3, iParam4, false);
func_31(iParam0, iParam1);
}
return;
}


void func_31(int iParam0, int iParam1) // Position - 0x10BB{
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
if(iParam1==1) func_32(0, false);
else func_32(0, true);
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


void func_32(int iParam0, BOOL bParam1) // Position - 0x119E{
if(bParam1) MISC::SET_BIT(&Global_112286, iParam0);
else MISC::CLEAR_BIT(&Global_112286, iParam0);
Global_112285=1;
return;
}
BOOL func_33(int iParam0, BOOL bParam1, int iParam2, BOOL bParam3) // Position - 0x11C7{
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
func_37(&vector, iParam0);
if(func_34()) num=Global_113648.f_7263.f_227[iParam0];
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
if(!func_34()){
if(!Global_40792[iParam0]){
Global_40792[iParam0]=true;
Global_40991=Global_40991 + 1;
}}}}}
return flag;
}
BOOL func_34() // Position - 0x1B16{
if(func_36()==-1 || func_36()==999 && !func_35()==0) return true;
return false;
}

int func_35() // Position - 0x1B46{
return Global_32164;
}

int func_36() // Position - 0x1B51{
return Global_32163;
}

int func_37(var uParam0, int iParam1) // Position - 0x1B5C{
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


void func_38() // Position - 0x52F8{
CAM::DO_SCREEN_FADE_OUT(3000);
func_18(&caLocal_461, veLocal_287);
while (CAM::IS_SCREEN_FADING_OUT()){
SYSTEM::WAIT(0);
func_18(&caLocal_461, veLocal_287);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false)) VEHICLE::SET_VEHICLE_DOORS_LOCKED(veLocal_287, 1);
return;
}


void func_39(Ped pedParam0) // Position - 0x533D{
int num;
int num2;
int num3;
if(pedParam0==0) return;
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0)) return;
num=func_47(pedParam0);
if(!num==-1){
num2=Global_44232[num /*5*/];
func_42(1, num2, 1);
return;
}
num3=func_41(pedParam0);
if(num3==-1) return;
func_40(num3);
return;
}


void func_40(int iParam0) // Position - 0x5396{
if(iParam0 < 0 || iParam0 >=5) return;
if(!Global_44206[iParam0 /*5*/].f_1==0)if(Global_44206[iParam0 /*5*/].f_1==PLAYER::PLAYER_PED_ID()) Global_44444=0;
Global_44206[iParam0 /*5*/]=13;
Global_44206[iParam0 /*5*/].f_1=0;
Global_44206[iParam0 /*5*/].f_2=0;
Global_44206[iParam0 /*5*/].f_3=0;
Global_44206[iParam0 /*5*/].f_4=0;
Global_44204=Global_44204 - 1;
if(Global_44204 < 0) Global_44204=0;
return;
}

int func_41(Ped pedParam0) // Position - 0x5419{
int i;
i=0;
for (i=0;
i < 5;
i=i + 1){
if(Global_44206[i /*5*/].f_1==pedParam0) return i;
}
return -1;
}


void func_42(int iParam0, int iParam1, int iParam2) // Position - 0x544A{
func_43(iParam0, iParam1, iParam2, 0, 0, 1);
return;
}


void func_43(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5) // Position - 0x545F{
int num;
if(iParam0==-1) return;
if(iParam1==-1) return;
if(iParam2==6) return;
if(func_45(iParam0, iParam1, iParam2)) return;
num=func_44();
if(num==-1) return;
Global_44313[num /*6*/]=iParam0;
Global_44313[num /*6*/].f_1=iParam1;
Global_44313[num /*6*/].f_2=iParam2;
Global_44313[num /*6*/].f_3=iParam3;
Global_44313[num /*6*/].f_4=iParam4;
Global_44313[num /*6*/].f_5=iParam5;
return;
}

int func_44() // Position - 0x54E1{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(Global_44313[i /*6*/].f_2==6) return i;
}
return -1;
}
BOOL func_45(int iParam0, int iParam1, int iParam2) // Position - 0x5512{
if(func_46(iParam0, iParam1, iParam2)==-1) return false;
return true;
}

int func_46(int iParam0, int iParam1, int iParam2) // Position - 0x552D{
int i;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(iParam2==Global_44313[i /*6*/].f_2)if(iParam0==Global_44313[i /*6*/])if(iParam1==Global_44313[i /*6*/].f_1) return i;
}
return -1;
}

int func_47(Ped pedParam0) // Position - 0x5579{
int i;
if(pedParam0==0) return -1;
i=0;
for (i=0;
i < 16;
i=i + 1){
if(!Global_44232[i /*5*/]==-1)if(pedParam0==Global_44232[i /*5*/].f_1) return i;
}
return -1;
}


void func_48() // Position - 0x55C2{
if(Global_9058[0 /*2811*/][0 /*281*/].f_259==2) Global_9058[0 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[1 /*2811*/][0 /*281*/].f_259==2) Global_9058[1 /*2811*/][0 /*281*/].f_259=0;
if(Global_9058[2 /*2811*/][0 /*281*/].f_259==2) Global_9058[2 /*2811*/][0 /*281*/].f_259=0;
MISC::CLEAR_BIT(&Global_8253, 25);
MISC::SET_BIT(&Global_8254, 11);
return;
}

int func_49(var uParam0, int iParam1, int iParam2, BOOL bParam3, int iParam4) // Position - 0x563F{
int i;
if(iParam1==7) return 0;
if(!bParam3)if(Global_98159.f_44==1) return 2;
if(iParam1==0){
if(func_51(0)) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::GET_PLAYER_INDEX(), false);
Global_23131.f_5=0;
if(iParam2 !=5) PLAYER::FORCE_CLEANUP(8);
Global_43257=iParam2;
Global_43219=*uParam0;
Global_43220=iParam4;
Global_43218=0;
return 1;
}
if(*uParam0 !=-1){
if(Global_43218 > 0){
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) return 2;
}}elseif(Global_43219==*uParam0){
return 1;
}
*uParam0=-1;
}
if(*uParam0==-1){
if(!_CAN_ENTER_FREEROAM_STATE(iParam2)) return 0;
if(Global_43218==8) return 0;
Global_43221=Global_43221 + 1;
*uParam0=Global_43221;
Global_43224[Global_43218 /*4*/]=Global_43221;
Global_43224[Global_43218 /*4*/].f_1=iParam1;
Global_43224[Global_43218 /*4*/].f_2=iParam2;
Global_43224[Global_43218 /*4*/].f_3=0;
Global_43218=Global_43218 + 1;
if(iParam4 !=0) func_50(uParam0, iParam4);
}
return 2;
}


void func_50(var uParam0, int iParam1) // Position - 0x5776{
int i;
if(Global_43218==0) return;
if(*uParam0==-1) return;
i=0;
for (i=0;
i < Global_43218;
i=i + 1){
if(Global_43224[i /*4*/]==*uParam0) Global_43224[i /*4*/].f_3=iParam1;
}
*uParam0=-1;
return;
}
BOOL func_51(int iParam0) // Position - 0x57C5{
if(Global_43257==15) return false;
if(_CAN_ENTER_FREEROAM_STATE(iParam0)) return false;
return true;
}


void func_52() // Position - 0x57E7{
func_53();
return;
}


void func_53() // Position - 0x57F3{
int scriptTaskStatus;
var unk;
Vehicle playersLastVehicle;
Ped ped;
int taskSequenceId;
float offsetFromEntityGivenWorldCoords;
float num;
float speed;
BOOL flag;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) return;
speed=func_113(iLocal_121)==joaat("maverick") ? 0.45f :
0.3f;
playersLastVehicle=PLAYER::GET_PLAYERS_LAST_VEHICLE();
if(ENTITY::DOES_ENTITY_EXIST(playersLastVehicle) && playersLastVehicle !=veLocal_86) veLocal_287.f_1=playersLastVehicle;
if(!bLocal_458){
func_143();
SYSTEM::WAIT(0);
return;
}
if(func_109(veLocal_287.f_3, veLocal_287, true, true, true, true, false) || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_152(0);
bLocal_458=false;
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287.f_3) && !PED::IS_PED_INJURED(veLocal_287.f_3)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false) && PED::IS_PED_IN_VEHICLE(veLocal_287.f_3, veLocal_287, false)) TASK::TASK_VEHICLE_MISSION_COORS_TARGET(veLocal_287.f_3, veLocal_287, ENTITY::GET_ENTITY_COORDS(veLocal_287, true) + ({
100f, 100f, 100f 
}
* ENTITY::GET_ENTITY_FORWARD_VECTOR(veLocal_287)) +{
500f, 0f, 0f 
}
, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_287), 262144, 50f, 50f, true);
else TASK::TASK_SMART_FLEE_PED(veLocal_287.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
PED::SET_PED_KEEP_TASK(veLocal_287.f_3, true);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 251, false);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 255, false);
veLocal_287.f_3=0;
}
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287)){
ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_287);
veLocal_287=0;
}
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
return;
}
num=SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), func_108(iLocal_121));
if(num < 11664f){
if(!bLocal_460){
STREAMING::REQUEST_MODEL(func_107(iLocal_121));
bLocal_460=true;
}}elseif(num > 13924f){
if(bLocal_460){
STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_107(iLocal_121));
bLocal_460=false;
}}
if(num < 10000f){
if(!ENTITY::DOES_ENTITY_EXIST(veLocal_287.f_3)){
if(STREAMING::HAS_MODEL_LOADED(func_107(iLocal_121)) && ENTITY::DOES_ENTITY_EXIST(veLocal_287) && VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false)){
veLocal_287.f_3=PED::CREATE_PED_INSIDE_VEHICLE(veLocal_287, PED_TYPE_CIVMALE, func_107(iLocal_121), -1, true, true);
if(!PED::IS_PED_INJURED(veLocal_287.f_3)){
PED::SET_PED_HELMET(veLocal_287.f_3, false);
func_106(veLocal_287.f_3, iLocal_121);
func_105();
AUDIO::SET_AMBIENT_VOICE_NAME(veLocal_287.f_3, AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(iLocal_121));
_CONVERSATION_INITIALIZE_ACTOR(&uLocal_122, 0, veLocal_287.f_3, func_103(iLocal_121), 1, 1);
TASK::TASK_STAND_STILL(veLocal_287.f_3, -1);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 251, true);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 255, true);
}
VEHICLE::SET_VEHICLE_ENGINE_ON(veLocal_287, true, true, false);
VEHICLE::SET_HELI_BLADES_SPEED(veLocal_287, speed);
}}else{
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(veLocal_287.f_3, true, false);
if(!CAM::DOES_CAM_EXIST(caLocal_461) || !CAM::IS_CAM_RENDERING(caLocal_461)) VEHICLE::SET_HELI_BLADES_SPEED(veLocal_287, speed);
if(!IS_BIT_SET(veLocal_287.f_169, 0)){
if(CAM::IS_SCREEN_FADED_IN()){
if(!PED::IS_PED_INJURED(veLocal_287.f_3) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
if(SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_287.f_3, true)) < 400f){
_CONVERSATION_ADD_LINE(&uLocal_122, "OJBJAUD", func_100(iLocal_121), 8, 0, 0, 0);
TASK::TASK_LOOK_AT_ENTITY(veLocal_287.f_3, PLAYER::PLAYER_PED_ID(), 6000, 0, 2);
MISC::SET_BIT(&(veLocal_287.f_169), 0);
}}}}}}elseif(num > 12100f){
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287.f_3)){
ped=veLocal_287.f_3;
PED::SET_PED_KEEP_TASK(ped, true);
if(!ENTITY::IS_ENTITY_ON_SCREEN(ped)){
ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ped, true, false);
PED::DELETE_PED(&ped);
}else{
ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&ped);
}}}
func_18(&caLocal_461, veLocal_287);
if(PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_287, true) && !PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID()) && func_78(veLocal_287.f_3, veLocal_287)){
offsetFromEntityGivenWorldCoords={
ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(veLocal_287, PED::GET_PED_BONE_COORDS(PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f)) 
};
if(offsetFromEntityGivenWorldCoords < 0f || offsetFromEntityGivenWorldCoords.f_1 < 1f){
AUDIO::SET_AUDIO_FLAG("DisableFlightMusic", true);
AUDIO::SET_VEH_RADIO_STATION(veLocal_287, "OFF");
func_168(&iLocal_94, 64);
flag=true;
if(bLocal_459){
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_B" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_459=false;
}
if(!CAM::DOES_CAM_EXIST(caLocal_461)){
func_67(0, false, true);
func_60(true);
caLocal_461=CAM::CREATE_CAMERA_WITH_PARAMS(joaat("DEFAULT_SCRIPTED_CAMERA"), func_59(iLocal_121), func_58(iLocal_121), func_57(iLocal_121), false, 2);
CAM::SET_CAM_ACTIVE(caLocal_461, true);
CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
CAM::SHAKE_CAM(caLocal_461, "HAND_SHAKE", 0.07f);
}
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false)){
scriptTaskStatus=TASK::GET_SCRIPT_TASK_STATUS(veLocal_287.f_3, SCRIPT_TASK_VEHICLE_MISSION);
if(scriptTaskStatus !=0 && scriptTaskStatus !=1){
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 134, true);
func_25(&unk);
while (func_12(&unk) < 1f){
SYSTEM::WAIT(0);
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_JACKING(PLAYER::PLAYER_PED_ID())){
func_56(iLocal_105);
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287.f_3) && !PED::IS_PED_INJURED(veLocal_287.f_3)){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false) && PED::IS_PED_IN_VEHICLE(veLocal_287.f_3, veLocal_287, false)) TASK::TASK_VEHICLE_MISSION_COORS_TARGET(veLocal_287.f_3, veLocal_287, ENTITY::GET_ENTITY_COORDS(veLocal_287, true) + ({
100f, 100f, 100f 
}
* ENTITY::GET_ENTITY_FORWARD_VECTOR(veLocal_287)) +{
500f, 0f, 0f 
}
, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_287), 262144, 50f, 50f, true);
else TASK::TASK_SMART_FLEE_PED(veLocal_287.f_3, PLAYER::PLAYER_PED_ID(), 1000f, -1, false, false);
PED::SET_PED_KEEP_TASK(veLocal_287.f_3, true);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 251, false);
PED::SET_PED_CONFIG_FLAG(veLocal_287.f_3, 255, false);
}
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287)) ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&veLocal_287);
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
return;
}
else{
func_18(&caLocal_461, veLocal_287);
}}
func_24(&uLocal_462);
while (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_287, false) && func_55(&uLocal_462) < 2f){
SYSTEM::WAIT(0);
}
func_11(&uLocal_462);
if(!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), veLocal_287, false)){
flag=false;
CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
if(CAM::DOES_CAM_EXIST(caLocal_461)) CAM::DESTROY_CAM(caLocal_461, false);
PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0);
return;
}
if(!ENTITY::IS_ENTITY_DEAD(veLocal_287.f_3, false) && !ENTITY::IS_ENTITY_DEAD(veLocal_287, false)){
TASK::OPEN_SEQUENCE_TASK(&taskSequenceId);
TASK::TASK_STAND_STILL(0, 500);
TASK::TASK_VEHICLE_MISSION_COORS_TARGET(0, veLocal_287, ENTITY::GET_ENTITY_COORDS(veLocal_287, true) + ({
100f, 100f, 100f 
}
* ENTITY::GET_ENTITY_FORWARD_VECTOR(veLocal_287)) +{
500f, 0f, 0f 
}
, 4, VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(veLocal_287), 262144, 50f, 50f, true);
TASK::CLOSE_SEQUENCE_TASK(taskSequenceId);
TASK::TASK_PERFORM_SEQUENCE(veLocal_287.f_3, taskSequenceId);
TASK::CLEAR_SEQUENCE_TASK(&taskSequenceId);
if(!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
PED::SET_PED_HELMET(PLAYER::PLAYER_PED_ID(), false);
PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
}}
func_25(&unk);
while (func_12(&unk) < 2f){
SYSTEM::WAIT(0);
func_18(&caLocal_461, veLocal_287);
}}}}}
if(!flag){
if(VEHICLE::IS_VEHICLE_DRIVEABLE(veLocal_287, false) && SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(veLocal_287, true)) < 225f && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)){
if(!bLocal_459 || iLocal_121==3 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_B" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/) || iLocal_121 !=3 && !_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/)){
if(iLocal_121==3)if(!Global_75693) func_54("PLAY_BASEJUMP_B" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/);
elseif(!Global_75693) func_54("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/);
bLocal_459=true;
}}elseif(bLocal_459){
if(_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_B" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/) || _IS_THIS_HELP_MESSAGE_BEING_DISPLAYED("PLAY_BASEJUMP_S" /*Approach the helicopter and press ~INPUT_ENTER~ to start parachuting.*/)) HUD::SET_SCRIPT_VARIABLE_HUD_COLOUR(1);
bLocal_459=false;
}
if(!PED::IS_PED_INJURED(veLocal_287.f_3) && TASK::GET_SCRIPT_TASK_STATUS(veLocal_287.f_3, SCRIPT_TASK_STAND_STILL) !=0 && TASK::GET_SCRIPT_TASK_STATUS(veLocal_287.f_3, SCRIPT_TASK_STAND_STILL) !=1) TASK::TASK_STAND_STILL(veLocal_287.f_3, -1);
}
return;
}


void func_54(char* sParam0) // Position - 0x6033{
HUD::BEGIN_TEXT_COMMAND_DISPLAY_HELP(sParam0);
HUD::END_TEXT_COMMAND_DISPLAY_HELP(0, true, true, -1);
return;
}


float func_55(int* piParam0) // Position - 0x6049{
if(func_15(piParam0))if(func_14(piParam0)) return piParam0->f_2;
else return func_13(IS_BIT_SET(*piParam0, 4)) - piParam0->f_1;
return 0f;
}


void func_56(int iParam0) // Position - 0x6082{
if(iLocal_95 < 5){
if(iParam0 !=263){
iParam0 < 0 || iParam0 >=263;
func_155(iParam0, false, false);
}
iLocal_105=263;
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
iLocal_95=9;
}
return;
}


float func_57(int iParam0) // Position - 0x60C5{
switch (iParam0){
case 0:
return 46.7708f;
case 1:
return 30.5578f;
case 2:
return 31.1151f;
case 3:
return 43.4229f;
case 7:
return 48.6851f;
case 9:
return 46.947f;
case 10:
return 40.6109f;
case 11:
return 32.1049f;
}
return 45f;
}


Vector3 func__58(int iParam0) // Position - 0x614C{
switch (iParam0){
case 0:
return 6.5672f, 0f, -15.3269f;
case 1:
return 1.6743f, 0f, 13.7295f;
case 2:
return 2.2348f, 0f, 141.3733f;
case 3:
return 0.7682f, 0f, -154.1293f;
case 7:
return -1.8117f, 0f, 100.4016f;
case 9:
return 0.7611f, 0f, -71.8023f;
case 10:
return 2.3742f, 0f, 86.6743f;
case 11:
return 0.73f, 0f, 109.0678f;
}
return 0f, 0f, 0f;
}


Vector3 func__59(int iParam0) // Position - 0x6201{
switch (iParam0){
case 0:
return -840.2545f, -1317.9856f, 6.1066f;
case 1:
return 1210.9553f, 153.4641f, 81.7073f;
case 2:
return 2489.7312f, 1537.9722f, 36.1861f;
case 3:
return -286.5149f, 6665.522f, 6.9225f;
case 7:
return -714.035f, 4491.0835f, 79.9083f;
case 9:
return -1396.9629f, 4363.597f, 43.1246f;
case 10:
return 2547.7383f, 4967.6826f, 46.0189f;
case 11:
return 1091.1453f, -169.1484f, 70.757f;
}
return 0f, 0f, 0f;
}


void func_60(BOOL bParam0) // Position - 0x62D6{
if(bParam0){
func_66();
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
Global_20383.f_1=1;
if(func_120(0)) func_61(0);
}elseif(Global_20383.f_1==1){
if(!Global_20383.f_1==0) Global_20383.f_1=3;
}
return;
}


void func_61(int iParam0) // Position - 0x6339{
if(func_65()) return;
if(Global_20584)if(func_64()) func_63(true, true);
else func_63(false, false);
if(Global_20383.f_1==10 || Global_20383.f_1==9) MISC::SET_BIT(&Global_8254, 16);
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=5;
if(iParam0==1) MISC::SET_BIT(&Global_8253, 30);
else MISC::CLEAR_BIT(&Global_8253, 30);
if(!func_62()) Global_20383.f_1=3;
return;
}
BOOL func_62() // Position - 0x63C3{
if(Global_20383.f_1==1 || Global_20383.f_1==0) return true;
return false;
}


void func_63(BOOL bParam0, BOOL bParam1) // Position - 0x63EA{
if(bParam0){
if(func_120(0)){
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
BOOL func_64() // Position - 0x645E{
return IS_BIT_SET(Global_1962996, 5);
}
BOOL func_65() // Position - 0x646C{
return IS_BIT_SET(Global_1962996, 19);
}


void func_66() // Position - 0x647B{
if(Global_20383.f_1==9 || Global_20383.f_1==10){
Global_21778=0;
Global_21774=1;
}
return;
}


void func_67(eSetPlayerControlFlags espcfParam0, BOOL bParam1, BOOL bParam2) // Position - 0x64A4{
PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, espcfParam0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) FIRE::STOP_FIRE_IN_RANGE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 15f);
CUTSCENE::SET_PAD_CAN_SHAKE_DURING_CUTSCENE(bParam1);
func_61(0);
func_69(true, true, bParam2, false, false, false, false);
HUD::DISPLAY_RADAR(false);
HUD::DISPLAY_HUD(false);
func_68(23, true);
return;
}


void func_68(int iParam0, BOOL bParam1) // Position - 0x64FD{
if(bParam1) MISC::SET_BIT(&Global_32412, iParam0);
else MISC::CLEAR_BIT(&Global_32412, iParam0);
return;
}


void func_69(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x651F{
if(bParam0){
PLAYER::SPECIAL_ABILITY_DEACTIVATE_FAST(PLAYER::PLAYER_ID(), 0);
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), true);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), true);
func_77(1);
HUD::THEFEED_FLUSH_QUEUE();
HUD::THEFEED_PAUSE();
if(Global_20383.f_1 > 3 && !bParam6){
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING()) AUDIO::STOP_SCRIPTED_CONVERSATION(false);
if(!func_62()) Global_20383.f_1=3;
Global_21725=5;
}
func_76(true, bParam3, bParam2, false);
Global_63368=1;
Global_75696=1;
Global_78556=1;
}else{
func_77(0);
HUD::THEFEED_RESUME();
Global_63368=0;
if(bParam1) GRAPHICS::CASCADE_SHADOWS_INIT_SESSION();
PLAYER::SET_ALL_RANDOM_PEDS_FLEE(PLAYER::PLAYER_ID(), false);
PLAYER::SET_POLICE_IGNORE_PLAYER(PLAYER::PLAYER_ID(), false);
func_76(false, bParam3, bParam2, false);
if(NETWORK::NETWORK_IS_GAME_IN_PROGRESS())if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_74(PLAYER::PLAYER_ID()) && !_NETWORK_IS_PLAYER_IN_SCTV(PLAYER::PLAYER_ID(), 0) && !func_70() && !bParam4 && !bParam5 && !NETWORK::NETWORK_IS_IN_SPECTATOR_MODE()) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
elseif(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && !func_74(PLAYER::PLAYER_ID()) && !bParam4 && !bParam5) ENTITY::SET_ENTITY_INVINCIBLE(PLAYER::PLAYER_PED_ID(), false);
Global_78556=0;
}
return;
}
BOOL func_70() // Position - 0x666C{
return IS_BIT_SET(Global_1853910[PLAYER::PLAYER_ID() /*862*/].f_36.f_18, 14);
}
BOOL _NETWORK_IS_PLAYER_IN_SCTV(Player player, int bCheckTeam) // Position - 0x6686{
BOOL flag;
if(player==PLAYER::PLAYER_ID()) flag=func_72(-1, false)==8;
else flag=Global_1853910[player /*862*/].f_205==8;
if(bCheckTeam==1)if(NETWORK::NETWORK_IS_PLAYER_ACTIVE(player)) flag=PLAYER::GET_PLAYER_TEAM(player)==8;
return flag;
}

int func_72(int iParam0, BOOL bParam1) // Position - 0x66D1{
int num;
int num2;
num2=iParam0;
if(num2==-1) num2=func_73();
if(Global_1575040[num2]==1){
bParam1;
num=8;
}else{
num=Global_1574912[num2];
bParam1;
}
return num;
}

int func_73() // Position - 0x6712{
return Global_1574918;
}
BOOL func_74(Player plParam0) // Position - 0x671E{
if(_NETWORK_IS_PLAYER_IN_SCTV(plParam0, 0)) return true;
if(func_75())if(plParam0==PLAYER::PLAYER_ID()) return true;
if(IS_BIT_SET(Global_2657589[plParam0 /*466*/].f_199, 2)) return true;
return false;
}
BOOL func_75() // Position - 0x675D{
return IS_BIT_SET(Global_2621446, 3);
}

int func_76(BOOL bParam0, BOOL bParam1, BOOL bParam2, BOOL bParam3) // Position - 0x676B{
int num;
num=0;
if(MISC::IS_PC_VERSION()){
if(CUTSCENE::IS_MULTIHEAD_FADE_UP() !=bParam0 && bParam2){
CUTSCENE::SET_CUTSCENE_MULTIHEAD_FADE(bParam0, bParam1, true, bParam3);
num=1;
}}
return num;
}


void func_77(int iParam0) // Position - 0x679E{
if(iParam0==1) MISC::SET_BIT(&Global_8253, 13);
else MISC::CLEAR_BIT(&Global_8253, 13);
return;
}
BOOL func_78(Ped pedParam0, Vehicle veParam1) // Position - 0x67C1{
if(!ENTITY::DOES_ENTITY_EXIST(pedParam0) || !ENTITY::DOES_ENTITY_EXIST(veParam1) || ENTITY::IS_ENTITY_DEAD(pedParam0, false) || ENTITY::IS_ENTITY_DEAD(veParam1, false)) return false;
if(PED::IS_PED_IN_VEHICLE(pedParam0, veParam1, false) && func_79(pedParam0, veParam1)==-1) return true;
return false;
}

int func_79(Ped pedParam0, Vehicle veParam1) // Position - 0x681E{
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false) && !ENTITY::IS_ENTITY_DEAD(veParam1, false)){
if(PED::IS_PED_SITTING_IN_VEHICLE(pedParam0, veParam1)){
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, -1, false)==pedParam0) return -1;
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 0, false)==pedParam0) return 0;
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 1, false)==pedParam0) return 1;
if(VEHICLE::GET_PED_IN_VEHICLE_SEAT(veParam1, 2, false)==pedParam0) return 2;
}}
return -2;
}
int _CONVERSATION_ADD_LINE(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5, int iParam6) // Position - 0x6890{
func_99(uParam0, 145, sParam1, iParam4, iParam5, iParam6);
if(iParam3 > 7)if(iParam3 < 12) iParam3=7;
Global_21732=0;
Global_21734=0;
Global_21739=0;
Global_22716=0;
Global_22718=0;
Global_22722=0;
Global_2883585=0;
return func_81(sParam2, iParam3, false);
}

int func_81(char* sParam0, int iParam1, BOOL bParam2) // Position - 0x68DE{
Global_21726=0;
if(Global_21725==0 || Global_21727==2){
if(Global_21725 !=0){
if(iParam1 > Global_21727){
if(Global_21732==0){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_20383.f_1=3;
Global_21725=0;
Global_21726=1;
Global_21778=0;
Global_21721=0;
Global_21722=0;
Global_21736=0;
Global_21735=false;
Global_20382=0;
}else{
func_98();
return 0;
}}else{
return 0;
}}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()) return 0;
if(func_121(8, -1)) return 0;
Global_21801={
Global_21795 
};
func_97();
Global_21014={
Global_21179 
};
Global_21731=Global_21732;
Global_21738=Global_21739;
Global_2883586=Global_2883585;
Global_21740={
Global_21756 
};
Global_21733=Global_21734;
Global_22715=Global_22716;
Global_22723={
Global_22729 
};
Global_22717=Global_22718;
Global_22719=Global_22720;
Global_22721=Global_22722;
Global_21344.f_370=Global_22714;
Global_21344.f_368=Global_22712;
Global_21344.f_369=Global_22713;
Global_21721=Global_21722;
if(Global_21731){
MISC::CLEAR_BIT(&Global_8253, 20);
MISC::CLEAR_BIT(&Global_8254, 17);
MISC::CLEAR_BIT(&Global_8255, 0);
if(bParam2){
_UPDATE_CURRENT_PLAYER_CHARACTER();
if(Global_9058[Global_20383 /*2811*/][0 /*281*/].f_259==2){
if(iParam1==13){
}else{
return 0;
}}
if(Global_20383.f_1 > 3) return 0;
}
if(Global_20349==1) return 0;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(PED::IS_PED_IN_MELEE_COMBAT(PLAYER::PLAYER_PED_ID())) return 0;
if(func_89()) return 0;
if(TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) return 0;
if(PED::IS_PED_IN_PARACHUTE_FREE_FALL(PLAYER::PLAYER_PED_ID())) return 0;
if(WEAPON::GET_IS_PED_GADGET_EQUIPPED(PLAYER::PLAYER_PED_ID(), joaat("GADGET_PARACHUTE"))) return 0;
if(!Global_78558){
if(ENTITY::IS_ENTITY_IN_WATER(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) return 0;
if(PED::IS_PED_PLANTING_BOMB(PLAYER::PLAYER_PED_ID())) return 0;
if(PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0)) return 0;
}}
if(func_62()){
return 0;
}else{
switch (Global_20383.f_1){
case 7:
return 0;
case 8:
return 0;
case 9:
break;
case 10:
break;
default:
break;
}
if(IS_BIT_SET(Global_8253, 9)) return 0;
}
func_88();
Global_21735=bParam2;
}
Global_21727=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21344, sParam0, 24);
Global_20591=0;
func_87();
func_82();
return 1;
}
if(Global_21725==5) return 0;
if(iParam1 < Global_21727 || iParam1==Global_21727) return 0;
if(iParam1==2){}else{
func_98();
}
return 0;
}


void func_82() // Position - 0x6BAC{
if(!func_83()) return;
if(Global_21731){
TEXT_LABEL_COPY(&(Global_1977511.f_1),{
Global_21344 
}
, 4);
Global_1977511=Global_7568;
Global_1977511.f_6=Global_21735;
}
return;
}
BOOL func_83() // Position - 0x6BE3{
if(!Global_262145.f_28878) return false;
if(!Global_78558) return false;
if(PLAYER::PLAYER_ID()==_INVALID_PLAYER_INDEX()) return false;
if(func_84(PLAYER::PLAYER_ID())) return false;
if(IS_BIT_SET(Global_1894573[PLAYER::PLAYER_ID() /*608*/].f_1, 7)) return false;
if(NETWORK::NETWORK_IS_ACTIVITY_SESSION()) return false;
return true;
}
BOOL func_84(Player plParam0) // Position - 0x6C46{
return func_85(plParam0, 20);
}
BOOL func_85(Player plParam0, int iParam1) // Position - 0x6C56{
return IS_BIT_SET(Global_1894573[plParam0 /*608*/].f_10.f_4, iParam1);
}
Player _INVALID_PLAYER_INDEX() // Position - 0x6C6E{
return -1;
}


void func_87() // Position - 0x6C77{
int i;
for (i=0;
i <=69;
i=i + 1){
TEXT_LABEL_ASSIGN_STRING(&Global_20593[i /*6*/], "", 24);
}
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=1;
return;
}


void func_88() // Position - 0x6CA8{
Global_21778=Global_21777;
Global_21772=Global_21773;
Global_21819={
Global_21807 
};
Global_21825={
Global_21813 
};
Global_21780=Global_21779;
Global_21849={
Global_21831 
};
Global_21855={
Global_21837 
};
Global_21861={
Global_21843 
};
Global_21867={
Global_21873 
};
Global_7568=Global_7569;
Global_7570=Global_7571;
Global_21736=Global_21737;
Global_21738=Global_21739;
Global_21740={
Global_21756 
};
Global_21729=Global_21730;
Global_22741=0;
Global_21774=0;
Global_21775=0;
MISC::CLEAR_BIT(&Global_8254, 16);
return;
}
BOOL func_89() // Position - 0x6D3D{
int num;
int weaponHash;
if(Global_78558){
num=0;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(weaponHash==joaat("WEAPON_SNIPERRIFLE") || weaponHash==joaat("WEAPON_HEAVYSNIPER") || weaponHash==joaat("WEAPON_REMOTESNIPER")) num=1;
if(CAM::IS_AIM_CAM_ACTIVE() && num==1) return true;
else return false;
}
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))if(PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 78, true)) return true;
else return false;
return true;
}


void _UPDATE_CURRENT_PLAYER_CHARACTER() // Position - 0x6DD6{
if(func_141(14)){
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
eCharacter _GET_CURRENT_PLAYER_CHARACTER() // Position - 0x6E78{
func_92();
return Global_113648.f_2365.f_539.f_4321;
}


void func_92() // Position - 0x6E91{
eCharacter character;
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(_GET_CHARACTER_MODEL(Global_113648.f_2365.f_539.f_4321) !=ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID())){
character=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID());
if(func_93(character) && !func_141(14) || Global_112599){
if(Global_113648.f_2365.f_539.f_4321 !=character && func_93(Global_113648.f_2365.f_539.f_4321)) Global_113648.f_2365.f_539.f_4322=Global_113648.f_2365.f_539.f_4321;
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
BOOL func_93(eCharacter echParam0) // Position - 0x6F8E{
return echParam0 < CHAR_MULTIPLAYER;
}
eCharacter _GET_PLAYER_CHARACTER_FROM_PED(Ped pedParam0) // Position - 0x6F9A{
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
Hash _GET_CHARACTER_MODEL(eCharacter character) // Position - 0x6FD7{
if(func_93(character)) return func_96(character);
else character !=_CHAR_NULL;
return 0;
}
Hash func_96(eCharacter echParam0) // Position - 0x6FFC{
return Global_2028[echParam0 /*29*/];
}


void func_97() // Position - 0x700B{
int i;
for (i=0;
i <=15;
i=i + 1){
Global_21014[i /*10*/]=0;
TEXT_LABEL_ASSIGN_STRING(&(Global_21014[i /*10*/].f_1), "", 24);
Global_21014[i /*10*/].f_7=0;
Global_21014[i /*10*/].f_8=0;
}
Global_21014.f_161=-99;
Global_21014.f_162={
0f, 0f, 0f 
};
return;
}


void func_98() // Position - 0x7062{
AUDIO::RESTART_SCRIPTED_CONVERSATION();
Global_22736=0;
if(AUDIO::IS_MOBILE_PHONE_CALL_ONGOING() || Global_20383.f_1==9 || Global_20382==1){
AUDIO::STOP_SCRIPTED_CONVERSATION(false);
Global_21725=6;
Global_20383.f_1=3;
return;
}
if(AUDIO::IS_SCRIPTED_CONVERSATION_ONGOING()){
AUDIO::STOP_SCRIPTED_CONVERSATION(true);
Global_21725=6;
return;
}
return;
}


void func_99(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5) // Position - 0x70B9{
Global_21179={
*uParam0 
};
Global_7569=iParam1;
TEXT_LABEL_ASSIGN_STRING(&Global_21795, sParam2, 24);
Global_22714=iParam5;
if(iParam3==0){
Global_22712=1;
Global_22710=0;
}else{
Global_22712=0;
Global_22710=1;
}
if(iParam4==0){
Global_22713=1;
Global_22711=0;
}else{
Global_22713=0;
Global_22711=1;
}
return;
}


char* func_100(int iParam0) // Position - 0x710F{
BOOL flag;
flag=_GET_PLAYER_CHARACTER_FROM_PED(PLAYER::PLAYER_PED_ID())==CHAR_FRANKLIN;
switch (iParam0){
case 0:
return flag ? "BJ_01F" :
"BJ_01L";
case 1:
return flag ? "BJ_02F" :
"BJ_02L";
case 2:
return flag ? "BJ_03F" :
"BJ_03L";
case 3:
return flag ? "BJ_04FG" :
"BJ_04L";
case 7:
return "BJ_08L";
case 9:
return flag ? "BJ_10LF" :
"BJ_10L";
case 10:
return flag ? "BJ_11LF" :
"BJ_11L";
case 11:
return "BJ_12L";
default:
}
return "";
}


var func__101(BOOL bParam0, var uParam1, var uParam2) // Position - 0x71D1{
if(bParam0) return uParam1;
return uParam2;
}


void _CONVERSATION_INITIALIZE_ACTOR(var uParam0, int iParam1, Ped pedParam2, char* sParam3, int iParam4, int iParam5) // Position - 0x71E8{
uParam0->[iParam1 /*10*/].f_7==1;
uParam0->[iParam1 /*10*/]=pedParam2;
TEXT_LABEL_ASSIGN_STRING(&(uParam0->[iParam1 /*10*/].f_1), sParam3, 24);
uParam0->[iParam1 /*10*/].f_7=1;
uParam0->[iParam1 /*10*/].f_8=iParam4;
uParam0->[iParam1 /*10*/].f_9=iParam5;
if(!Global_78558){
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_8==0) PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, false);
else PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(pedParam2, true);
if(!PED::IS_PED_INJURED(pedParam2))if(uParam0->[iParam1 /*10*/].f_9==0) TASK::OPEN_PATROL_ROUTE(pedParam2, 0);
else TASK::OPEN_PATROL_ROUTE(pedParam2, 1);
}
return;
}


char* func_103(int iParam0) // Position - 0x7283{
return "EXT1HELIPILOT";
}
char* AUDIO_SPEECH_GET_PARAM_STRING_FROM_ENUM(int iParam0) // Position - 0x728F{
switch (iParam0){
case 0:
return "EXT1HELIPILOT";
case 1:
return "EXT1HELIPILOT";
case 2:
return "EXT1HELIPILOT";
case 3:
return "EXT1HELIPILOT";
case 7:
return "BJPilot_Train";
case 9:
return "EXT1HELIPILOT";
case 10:
return "EXT1HELIPILOT";
case 11:
return "BJPilot_Canal";
default:
}
return "EXT1HELIPILOT";
}


void func_105() // Position - 0x730A{
iLocal_48=iLocal_48 + 1;
return;
}


void func_106(Ped pedParam0, int iParam1) // Position - 0x7318{
if(ENTITY::IS_ENTITY_DEAD(pedParam0, false)) return;
switch (iParam1){
case 7:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 0, 1, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_ACCS, 1, 0, 0);
PED::SET_PED_PROP_INDEX(pedParam0, 1, 0, 0, false, 1);
break;
case 11:
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HEAD, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_HAIR, 2, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_UPPR, 1, 0, 0);
PED::SET_PED_COMPONENT_VARIATION(pedParam0, PV_COMP_LOWR, 0, 2, 0);
PED::SET_PED_PROP_INDEX(pedParam0, 0, 1, 2, false, 1);
PED::SET_PED_PROP_INDEX(pedParam0, 1, 1, 0, false, 1);
break;
}
return;
}
Hash func_107(int iParam0) // Position - 0x73C2{
switch (iParam0){
case 0:
return joaat("S_M_Y_Pilot_01");
case 1:
return joaat("S_M_Y_Pilot_01");
case 2:
return joaat("S_M_Y_Pilot_01");
case 3:
return joaat("S_M_Y_Pilot_01");
case 7:
return joaat("A_M_Y_Hippy_01");
case 9:
return joaat("S_M_Y_Pilot_01");
case 10:
return joaat("S_M_Y_Pilot_01");
case 11:
return joaat("A_M_M_GenFat_02");
default:
}
return 0;
}


Vector3 func__108(int iParam0) // Position - 0x7442{
switch (iParam0){
case 0:
return -829.3729f, -1289.817f, 4.0005f;
case 1:
return 1208.2003f, 174.3914f, 80.1245f;
case 2:
return 2463.7935f, 1509.9562f, 35.0349f;
case 3:
return -274.6549f, 6633.8984f, 7.1166f;
case 4:
return -92.35f, -854.3f, 39.571f;
case 5:
return -120.92f, -976.05f, 295.49f;
case 6:
return -1237.2f, 4540.75f, 184.75f;
case 7:
return -742.5269f, 4493.315f, 75.1444f;
case 8:
return -801.3582f, 298.8532f, 84.949f;
case 9:
return -1367.5952f, 4381.9434f, 41.132f;
case 10:
return 2517.9312f, 4971.7524f, 44.7082f;
case 11:
return 1054.5343f, -179.6562f, 70.3066f;
case 12:
return -767.415f, 4331.792f, 147.682f;
default:
}
return 0f, 0f, 0f;
}
BOOL func_109(Ped pedParam0, Vehicle veParam1, BOOL bParam2, BOOL bParam3, BOOL bParam4, BOOL bParam5, BOOL bParam6) // Position - 0x758C{
Ped target;
float entityCoords;
target=PLAYER::PLAYER_PED_ID();
if(!ENTITY::DOES_ENTITY_EXIST(veParam1) || ENTITY::IS_ENTITY_DEAD(veParam1, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(veParam1, false) || FILES::GET_DLC_VEHICLE_FLAGS(veParam1)) return true;
if(ENTITY::DOES_ENTITY_EXIST(pedParam0)){
if(!PED::IS_PED_INJURED(pedParam0) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
if(bParam3)if(PED::IS_PED_IN_COMBAT(pedParam0, target)) return true;
if(bParam5)if(PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) return true;
if(bParam6)if(ENTITY::IS_ENTITY_TOUCHING_ENTITY(target, pedParam0)) return true;
if(bParam4)if(PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), pedParam0) || PLAYER::IS_PLAYER_TARGETTING_ENTITY(PLAYER::PLAYER_ID(), pedParam0))if(PED::IS_PED_FACING_PED(pedParam0, target, 90f))if(func_110(pedParam0, true) < 10f) return true;
if(PED::IS_PED_IN_ANY_VEHICLE(pedParam0, false))if(ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(PED::GET_VEHICLE_PED_IS_IN(pedParam0, false), target, true)) return true;
if(WEAPON::IS_PED_ARMED(target, 4))if(PED::IS_PED_SHOOTING(target))if(ENTITY::IS_ENTITY_AT_COORD(pedParam0, ENTITY::GET_ENTITY_COORDS(target, true), 45f, 45f, 45f, false, true, 0)) return true;
if(MISC::IS_BULLET_IN_AREA(entityCoords, 4f, true)) return true;
if(MISC::IS_PROJECTILE_IN_AREA(entityCoords - 5f, entityCoords.f_1 - 5f, entityCoords.f_2 - 5f, entityCoords + 5f, entityCoords.f_1 + 5f, entityCoords.f_2 + 5f, false)) return true;
if(PED::IS_PED_BEING_JACKED(pedParam0) || !func_78(pedParam0, veParam1)) return true;
if(FIRE::IS_EXPLOSION_IN_SPHERE(-1, entityCoords, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(11, entityCoords, 25f) && !FIRE::IS_EXPLOSION_IN_SPHERE(13, entityCoords, 25f)) return true;
}elseif(bParam2){
return true;
}}
return false;
}


float func_110(Ped pedParam0, BOOL bParam1) // Position - 0x777B{
return func_111(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), pedParam0, bParam1);
}


float func_111(Ped pedParam0, Ped pedParam1, BOOL bParam2) // Position - 0x7793{
Vector3 entityCoords;
Vector3 entityCoords2;
if(!ENTITY::IS_ENTITY_DEAD(pedParam0, false)) entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, true) 
};
else entityCoords={
ENTITY::GET_ENTITY_COORDS(pedParam0, false) 
};
if(!ENTITY::IS_ENTITY_DEAD(pedParam1, false)) entityCoords2={
ENTITY::GET_ENTITY_COORDS(pedParam1, true) 
};
else entityCoords2={
ENTITY::GET_ENTITY_COORDS(pedParam1, false) 
};
return MISC::GET_DISTANCE_BETWEEN_COORDS(entityCoords, entityCoords2, bParam2);
}


var func__112(BOOL bParam0, var uParam1, var uParam2) // Position - 0x77F1{
if(bParam0) return uParam1;
return uParam2;
}

int func_113(int iParam0) // Position - 0x7808{
switch (iParam0){
case 0:
case 1:
case 2:
case 7:
case 9:
case 10:
case 11:
return joaat("maverick");
case 4:
return joaat("bati");
}
return 0;
}
BOOL func_114(int iParam0, BOOL bParam1) // Position - 0x785E{
int num;
num=func_115(iParam0);
if(num==-1) return false;
if(!PLAYER::IS_PLAYER_PLAYING(PLAYER::GET_PLAYER_INDEX())) return false;
if(func_120(0)) return false;
if(CUTSCENE::IS_CUTSCENE_PLAYING()) return false;
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]==true && Global_44000[num /*32*/].f_4==1){
if(bParam1)if(Global_44000[num /*32*/].f_29) return false;
Global_44000[num /*32*/].f_5=1;
Global_44000[num /*32*/].f_29=1;
return true;
}else{
Global_44000[num /*32*/]==false;
Global_44000[num /*32*/].f_7;
}}
return false;
}

int func_115(int iParam0) // Position - 0x7916{
int i;
if(iParam0 < 0) return -1;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(Global_44000[i /*32*/].f_1==iParam0) return i;
}
return -1;
}


void _CONTEXT_REMOVE_HELP_TEXT(var uParam0) // Position - 0x7951{
int num;
if(*uParam0==-1) return;
num=func_115(*uParam0);
if(num==-1){
*uParam0=-1;
return;
}
if(num > -1 && num < 6){
if(Global_44000[num /*32*/]){
Global_44000[num /*32*/].f_7=1;
*uParam0=-1;
return;
}}
*uParam0=-1;
return;
}


void _CONTEXT_ADD_HELP_TEXT(var uParam0, int iParam1, char* sParam2, int iParam3, const char* sParam4, int iParam5, int iParam6) // Position - 0x79A8{
int i;
SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("context_controller")) < 1;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
if(!*uParam0==-1) _CONTEXT_REMOVE_HELP_TEXT(uParam0);
return;
}
if(!*uParam0==-1) return;
i=0;
for (i=0;
i < 6;
i=i + 1){
if(!Global_44000[i /*32*/]){
Global_44000[i /*32*/]=true;
Global_44000[i /*32*/].f_1=Global_44201;
Global_44201=Global_44201 + 1;
Global_44000[i /*32*/].f_4=0;
Global_44000[i /*32*/].f_29=0;
Global_44000[i /*32*/].f_5=0;
Global_44000[i /*32*/].f_2=iParam1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_8), sParam2, 16);
Global_44000[i /*32*/].f_6=iParam3;
Global_44000[i /*32*/].f_31=SCRIPT::GET_ID_OF_THIS_THREAD();
Global_44000[i /*32*/].f_7=0;
Global_44000[i /*32*/].f_3=iParam5;
if(!MISC::IS_STRING_NULL_OR_EMPTY(sParam4)){
Global_44000[i /*32*/].f_12=1;
TEXT_LABEL_ASSIGN_STRING(&(Global_44000[i /*32*/].f_13), sParam4, 64);
Global_44000[i /*32*/].f_30=iParam6;
}else{
Global_44000[i /*32*/].f_12=0;
Global_44000[i /*32*/].f_30=0;
}
*uParam0=Global_44000[i /*32*/].f_1;
return;
}}
return;
}
BOOL func_118(Vehicle veParam0) // Position - 0x7AD3{
return false;
}
BOOL func_119() // Position - 0x7AE0{
return Global_75693;
}
BOOL func_120(int iParam0) // Position - 0x7AEC{
if(iParam0==1)if(Global_20383.f_1 > 3)if(IS_BIT_SET(Global_8253, 14)) return true;
else return false;
else return false;
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("cellphone_flashhand")) > 0) return true;
if(Global_20383.f_1 > 3) return true;
return false;
}
BOOL func_121(int iParam0, int iParam1) // Position - 0x7B43{
switch (iParam0){
case 5:
if(iParam1 > -1) return Global_1653913.f_203[iParam1];
break;
}
return IS_BIT_SET(Global_1653913.f_1048, iParam0);
}
BOOL func_122() // Position - 0x7B7B{
return MISC::GET_GAME_TIMER() <=Global_23270.f_6321 + 100;
}
BOOL func_123() // Position - 0x7B90{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("player_timetable_scene")) > 0) return true;
return false;
}
BOOL func_124(BOOL bParam0) // Position - 0x7BAA{
if(bParam0) return Global_23131.f_4 && Global_23131.f_104==4;
return Global_23131.f_4;
}
BOOL func_125() // Position - 0x7BD3{
return true;
}


void func_126(var uParam0, int iParam1) // Position - 0x7BDC{
func_127(uParam0, iParam1);
return;
}


void func_127(var uParam0, int iParam1) // Position - 0x7BEC{
*uParam0=*uParam0 || iParam1;
return;
}
BOOL func_128() // Position - 0x7BFD{
int weaponHash;
BOOL flag;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return false;
WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &weaponHash, true);
if(weaponHash==0 || weaponHash==joaat("WEAPON_UNARMED") || weaponHash==joaat("WEAPON_ELECTRIC_FENCE") || weaponHash==joaat("GADGET_PARACHUTE")) flag=false;
else flag=true;
flag;
if(PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) return flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 69) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 70) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 68) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
return flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 24) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 25) || flag && GRAPHICS::RESET_PARTICLE_FX_OVERRIDE(0, 47) || PED::IS_PED_PERFORMING_MELEE_ACTION(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID());
}
BOOL func_129(int iParam0) // Position - 0x7D07{
eCharacter character;
if(PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID())){
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())){
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())){
character=_GET_CURRENT_PLAYER_CHARACTER();
if(!func_93(character)) return false;
switch (iParam0){
case 9:
case 0:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_136() || Global_112695 || Global_32166 || func_135() || func_121(8, -1) || func_134() || func_133() || func_132() || func_123() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 1:
if(PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_136() || Global_32166 || func_135() || func_121(8, -1) || func_132() || func_134() || func_133() || func_123() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 2:
if(!PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_GETTING_INTO_A_VEHICLE(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_136() || Global_112695 || Global_32166 || func_135() || func_121(8, -1) || func_132() || func_134() || func_133() || func_123() || Global_113648.f_7690.f_919[character]==5 || Global_43804 !=-1) return false;
break;
case 3:
if(PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || func_136() || Global_112695 || Global_32166 || func_135() || func_121(8, -1) || func_134() || func_133() || func_123() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 4:
if(func_136() || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || func_121(8, -1) || func_123() || func_131() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 5:
if(func_121(8, -1) || func_134() || func_133() || func_131() || func_130()) return false;
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() !=3 && STREAMING::GET_PLAYER_SWITCH_STATE() < 8) return false;
break;
case 6:
if(ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0 || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_136() || Global_32166 || func_135() || func_121(8, -1) || func_133() || func_132() || func_123() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 7:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || func_136() || func_133() || Global_112695 || Global_32166 || func_135() || Global_44446 || func_121(8, -1) || func_132() || func_131() || func_123() || Global_113648.f_7690.f_919[character]==5) return false;
break;
case 8:
if(PED::IS_PED_IN_COMBAT(PLAYER::PLAYER_PED_ID(), 0) || !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()) || !PLAYER::IS_PLAYER_READY_FOR_CUTSCENE(PLAYER::PLAYER_ID()) || !CAM::IS_SCREEN_FADED_IN() || PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID()) || unk_0x279D0BCF8F708D74(PLAYER::PLAYER_PED_ID()) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::PLAYER_ID(), true) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID()) || func_136() || Global_112695 || Global_32166 || func_135() || func_121(8, -1) || func_132() || func_131() || func_134() || func_133() || func_123()) return false;
break;
}}else{
return false;
}}else{
return false;
}}else{
return false;
}
return true;
}
BOOL func_130() // Position - 0x8427{
return Global_100720.f_1;
}
BOOL func_131() // Position - 0x8435{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 13);
return false;
}
BOOL func_132() // Position - 0x8458{
if(Global_78819) return true;
elseif(Global_63356 && !Global_63362) return true;
return false;
}
BOOL func_133() // Position - 0x8482{
return Global_100733.f_388 > 0;
}
BOOL func_134() // Position - 0x8493{
return Global_100733.f_387 > 0;
}
BOOL func_135() // Position - 0x84A4{
return Global_1575060;
}
BOOL func_136() // Position - 0x84B0{
if(!NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) return Global_98159.f_44==1;
return false;
}
BOOL func_137() // Position - 0x84CC{
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("stripperhome")) > 0) return true;
return false;
}
Entity func_138() // Position - 0x84E6{
return Global_96513;
}
BOOL func_139(int iParam0) // Position - 0x84F2{
switch (iParam0){
case 0:
return true;
case 1:
if(func_141(6) || func_141(7)) return true;
else return func_139(3);
break;
case 2:
return true;
case 3:
if(_CAN_ENTER_FREEROAM_STATE(5))if(func_129(4)) return true;
break;
}
return false;
}
BOOL func_140(int iParam0) // Position - 0x8564{
int num;
num=iParam0;
if(num < 0 || num >=263 || iParam0==263) return false;
return HUD::DOES_BLIP_EXIST(Global_32543[num /*23*/].f_19);
}
BOOL func_141(int iParam0) // Position - 0x85A0{
return Global_43257==iParam0;
}


void func_142(var uParam0, int iParam1) // Position - 0x85AE{
*uParam0=*uParam0 || iParam1;
return;
}


void func_143() // Position - 0x85BF{
if(bLocal_457){
switch (iLocal_121){
case 0:
func_144(-829.3729f, -1289.817f, 4.0005f, 196.9543f);
break;
case 1:
func_144(1208.1965f, 174.5777f, 81.0003f, 138.8786f);
break;
case 2:
func_144(2463.9036f, 1509.9642f, 35.0372f, 88.9199f);
break;
case 3:
func_144(-274.6559f, 6633.891f, 7.5426f, 130.4063f);
break;
case 7:
func_144(-742.5047f, 4493.4663f, 75.2206f, 180.991f);
break;
case 9:
func_144(-1367.6865f, 4381.998f, 41.4017f, 277.8339f);
break;
case 10:
func_144(2517.962f, 4971.619f, 44.7057f, 15.3895f);
break;
case 11:
func_144(1054.5343f, -179.6562f, 70.3162f, 30.046f);
break;
default:
break;
}}
return;
}


void func_144(float fParam0, float fParam1, float fParam2, float fParam3) // Position - 0x86DF{
var groundZ;
BOOL flag;
fLocal_93=SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), fParam0);
if(!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && fLocal_93 > 25f || CAM::IS_SCREEN_FADED_OUT())if(fLocal_93 < 25600f)if(!CAM::IS_SPHERE_VISIBLE(fParam0, 6f) || CAM::IS_SCREEN_FADED_OUT()) flag=true;
else flag=true;
if(flag){
if(ENTITY::DOES_ENTITY_EXIST(veLocal_287)) VEHICLE::DELETE_VEHICLE(&veLocal_287);
MISC::CLEAR_AREA(fParam0, 4f, true, false, false, false);
if(iLocal_121==0) VEHICLE::SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(-835.7629f, -1298.7775f, 0f, -815.1855f, -1283.906f, 10f, false, true);
if(iLocal_121==3){
veLocal_287=VEHICLE::CREATE_VEHICLE(joaat("frogger"), fParam0, fParam3, true, true, false);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_287, 5);
}else{
veLocal_287=VEHICLE::CREATE_VEHICLE(joaat("maverick"), fParam0, fParam3, true, true, false);
VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(veLocal_287, 6);
}
veLocal_86=veLocal_287;
ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(veLocal_86, true);
if(MISC::GET_GROUND_Z_FOR_3D_COORD(fParam0, &groundZ, false, false)) VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(veLocal_287, 1084227584);
VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(veLocal_287, true);
bLocal_458=true;
}else{
bLocal_458=false;
}
return;
}
BOOL func_145() // Position - 0x880F{
return func_146(&uLocal_119);
}
BOOL func_146(var uParam0) // Position - 0x881D{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i] !=0){
if(!STREAMING::HAS_MODEL_LOADED(uParam0->[i])){
!STREAMING::HAS_MODEL_LOADED(uParam0->[i]);
return 0;
}}}
return 1;
}


void func_147() // Position - 0x8864{
switch (iLocal_121){
case 0:
case 1:
case 2:
case 3:
case 6:
case 7:
case 9:
case 10:
case 11:
func_149();
break;
default:
break;
}
func_148(&uLocal_119);
return;
}


void func_148(var uParam0) // Position - 0x88B9{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i] !=0) STREAMING::REQUEST_MODEL(uParam0->[i]);
}
return;
}


void func_149() // Position - 0x88E9{
if(iLocal_121==3) func_150(&uLocal_119, joaat("frogger"));
else func_150(&uLocal_119, joaat("maverick"));
return;
}

int func_150(var uParam0, int iParam1) // Position - 0x8912{
int i;
int num;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i] !=0)if(uParam0->[i]==iParam1) return 0;
}
num=func_151(uParam0);
if(num < 0 || num >=*uParam0) return 0;
uParam0->[num]=iParam1;
return 1;
}

int func_151(var uParam0) // Position - 0x896F{
int i;
for (i=0;
i < *uParam0;
i=i + 1){
if(uParam0->[i]==0) return i;
}
return -1;
}


void func_152(int iParam0) // Position - 0x899B{
if(iParam0==2){}else{
iParam0==0;
}
iLocal_106=iParam0;
iLocal_104=0;
iLocal_95=7;
return;
}
BOOL func_153() // Position - 0x89BC{
Vector3 entityCoords;
float num;
if(PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) return false;
entityCoords={
ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) 
};
num=SYSTEM::VDIST2(entityCoords, uLocal_90);
if(num < 10f * 10f) return true;
elseif(num < 80f * 80f)if(CAM::IS_SPHERE_VISIBLE(uLocal_90, 5f)) return true;
else return false;
return false;
}


void func_154(int iParam0) // Position - 0x8A2F{
iLocal_95=iParam0;
return;
}


void func_155(int iParam0, BOOL bParam1, BOOL bParam2) // Position - 0x8A3B{
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
BOOL func_156() // Position - 0x8B3B{
if(MISC::IS_PC_VERSION())if(MISC::GET_CITY_DENSITY()==1f) return true;
return false;
}
BOOL func_157() // Position - 0x8B58{
if(Global_97603 !=-1) return IS_BIT_SET(Global_91469[Global_97603 /*34*/].f_15, 20);
return false;
}
BOOL func_158(int iParam0, int iParam1) // Position - 0x8B7B{
BOOL flag;
if(iParam0==11 || iParam0==-1) return false;
if(iParam1 < 0 || iParam1 >=32) return false;
flag=IS_BIT_SET(Global_113648.f_9087.f_99.f_219[iParam0], iParam1);
return flag;
}
BOOL _CAN_ENTER_FREEROAM_STATE(int iParam0) // Position - 0x8BC5{
return func_160(iParam0, Global_43257);
}
BOOL func_160(int iParam0, int iParam1) // Position - 0x8BD6{
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
BOOL func_161(int iParam0, int iParam1) // Position - 0x8DB7{
return iParam0 && iParam1 !=false;
}


void func_162() // Position - 0x8DC6{
iLocal_99=0;
if(ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)){
func_126(&iLocal_94, 8388608);
return;
}
TEXT_LABEL_ASSIGN_STRING(&uLocal_53, "bj", 64);
iLocal_121=func_166(uLocal_90, 1);
func_126(&iLocal_94, 64);
switch (iLocal_121){
case 0:
iLocal_105=125;
break;
case 1:
iLocal_105=126;
break;
case 2:
iLocal_105=127;
break;
case 3:
iLocal_105=128;
break;
case 7:
iLocal_105=132;
break;
case 9:
iLocal_105=134;
break;
case 10:
iLocal_105=135;
break;
case 11:
iLocal_105=136;
break;
default:
break;
}
if(iLocal_121==4){
if(func_165(19)){
func_126(&iLocal_94, 8388608);
return;
}}
if(iLocal_121==7){
if(func_164(16) && !func_164(65)){
func_126(&iLocal_94, 8388608);
return;
}}
if(iLocal_121==0) func_126(&iLocal_94, 524288);
if(STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()){
func_126(&iLocal_94, 8388608);
return;
}
func_126(&iLocal_94, 4194304);
func_126(&iLocal_94, 16);
fLocal_102=SYSTEM::TO_FLOAT(func_163(iLocal_105)) + 5f;
if(iLocal_105 !=263){
if(!func_158(0, iLocal_99)){
bLocal_457=false;
func_56(iLocal_105);
}else{
bLocal_457=true;
}}else{
bLocal_457=false;
}
if(SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("bj")) > 0){}else{
func_168(&iLocal_94, 8);
}
if(func_141(12)) func_126(&iLocal_94, 8);
essLocal_97=54000;
return;
}

int func_163(int iParam0) // Position - 0x8F59{
switch (iParam0){
case 91:
case 92:
case 110:
case 111:
return 20;
case 66:
case 67:
case 76:
case 107:
case 108:
case 109:
case 96:
case 97:
case 98:
case 99:
case 100:
case 101:
case 102:
case 103:
case 129:
case 130:
case 131:
case 133:
case 137:
return 100;
case 125:
case 126:
case 127:
case 128:
case 132:
case 134:
case 135:
case 136:
case 68:
case 69:
case 95:
case 70:
case 71:
case 73:
case 74:
case 75:
case 72:
return 209;
}
return -1;
}
BOOL func_164(int iParam0) // Position - 0x9071{
if(iParam0==94 || iParam0==-1) return false;
return Global_113648.f_9087.f_330[iParam0 /*6*/];
}
BOOL func_165(int iParam0) // Position - 0x909D{
return Global_112735[iParam0 /*10*/].f_1;
}

int func_166(Vector3 vParam0, var uParam1, var uParam2, int iParam3) // Position - 0x90AF{
float num;
float num2;
int num3;
int i;
num=1E+09f;
for (i=0;
i < 13;
i=i + 1){
if(iParam3==func_167(i)){
num2=SYSTEM::VDIST2(vParam0, func_108(i));
if(num > num2){
num=num2;
num3=i;
}}}
return num3;
}

int func_167(int iParam0) // Position - 0x90FE{
switch (iParam0){
case 0:
case 1:
case 2:
case 3:
case 7:
case 9:
case 10:
case 11:
return 1;
}
return 0;
}


void func_168(int iParam0, int iParam1) // Position - 0x9145{
func_169(iParam0, iParam1);
return;
}


void func_169(var uParam0, int iParam1) // Position - 0x9155{
*uParam0=*uParam0 - *uParam0 && iParam1;
return;
}


void func_170(BOOL bParam0) // Position - 0x916A{
if(bParam0)if(iLocal_105 !=263) func_155(iLocal_105, 0, false);
_CONTEXT_REMOVE_HELP_TEXT(&iLocal_96);
if(func_161(iLocal_94, 2)){
func_5();
func_168(&iLocal_94, 2);
func_7(&iLocal_98);
}
iLocal_98=-1;
func_171();
SCRIPT::TERMINATE_THIS_THREAD();
return;
}


void func_171() // Position - 0x91B3{
func_168(&iLocal_94, 4);
func_172();
if(SCRIPT::IS_THREAD_ACTIVE(iLocal_52)) PLAYER::FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(iLocal_52, 3);
if(!MISC::IS_STRING_NULL(&uLocal_69))if(HUD::GET_LENGTH_OF_LITERAL_STRING(&uLocal_69) !=0) SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uLocal_69);
return;
}


void func_172() // Position - 0x91F0{
return;
}