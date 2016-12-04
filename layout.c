/* Generated from ./layout.scm by the CHICKEN compiler
   http://www.call-cc.org
   2016-09-24 17:19
   Version 4.10.0 (rev b259631)
   linux-unix-gnu-x86-64 [ 64bit manyargs dload ptables ]
   compiled 2015-08-04 on yves.more-magic.net (Linux)
   command line: ./layout.scm
   used units: library eval chicken_2dsyntax
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_chicken_2dsyntax_toplevel)
C_externimport void C_ccall C_chicken_2dsyntax_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[13];
static double C_possibly_force_alignment;
static C_char C_TLS li0[] C_aligned={C_lihdr(0,0,10),40,116,111,112,108,101,118,101,108,41,0,0,0,0,0,0};


C_noret_decl(f_233)
static void C_ccall f_233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_239)
static void C_ccall f_239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_230)
static void C_ccall f_230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_277)
static void C_ccall f_277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_273)
static void C_ccall f_273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_255)
static void C_ccall f_255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_251)
static void C_ccall f_251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_224)
static void C_ccall f_224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_227)
static void C_ccall f_227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_248)
static void C_ccall f_248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_245)
static void C_ccall f_245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_242)
static void C_ccall f_242(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

/* k231 in k228 in k225 in k222 */
static void C_ccall f_233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("./layout.scm:3: ##sys#require");
((C_proc3)C_fast_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,lf[11]);}

/* k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_239,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_273,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_277,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
C_trace("./layout.scm:5: get-environment-variable");
((C_proc3)C_fast_retrieve_symbol_proc(lf[8]))(3,*((C_word*)lf[8]+1),t4,lf[9]);}

/* k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_239,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_242,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_255,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_a_i_list(&a,1,lf[3]);
((C_proc5)C_fast_retrieve_symbol_proc(lf[4]))(5,*((C_word*)lf[4]+1),t3,t4,lf[5],C_SCHEME_TRUE);}

/* k228 in k225 in k222 */
static void C_ccall f_230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_233,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("./layout.scm:2: ##sys#require");
((C_proc3)C_fast_retrieve_symbol_proc(lf[10]))(3,*((C_word*)lf[10]+1),t2,lf[12]);}

/* k275 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("./layout.scm:5: string-null?");
((C_proc3)C_fast_retrieve_symbol_proc(lf[7]))(3,*((C_word*)lf[7]+1),((C_word*)t0)[2],t1);}

/* k271 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_273,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[2];
f_239(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=C_a_i_list(&a,1,lf[6]);
((C_proc3)C_fast_retrieve_symbol_proc(lf[4]))(3,*((C_word*)lf[4]+1),((C_word*)t0)[2],t2);}}

/* k253 in k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_trace("./layout.scm:8: s#s-upcase");
((C_proc3)C_fast_retrieve_symbol_proc(lf[2]))(3,*((C_word*)lf[2]+1),((C_word*)t0)[2],t1);}

/* k249 in k243 in k240 in k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_fast_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(100)){
C_save(t1);
C_rereclaim2(100*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,13);
lf[0]=C_h_intern(&lf[0],25,"\003sysimplicit-exit-handler");
lf[1]=C_h_intern(&lf[1],7,"display");
lf[2]=C_h_intern(&lf[2],10,"s#s-upcase");
lf[3]=C_decode_literal(C_heaptop,"\376B\000\000\031/usr/local/bin/xkb-switch");
lf[4]=C_h_intern(&lf[4],13,"shell#execute");
lf[5]=C_h_intern(&lf[5],8,"\000capture");
lf[6]=C_decode_literal(C_heaptop,"\376B\000\000\034/usr/local/bin/xkb-switch -n");
lf[7]=C_h_intern(&lf[7],12,"string-null\077");
lf[8]=C_h_intern(&lf[8],24,"get-environment-variable");
lf[9]=C_decode_literal(C_heaptop,"\376B\000\000\014BLOCK_BUTTON");
lf[10]=C_h_intern(&lf[10],11,"\003sysrequire");
lf[11]=C_h_intern(&lf[11],5,"shell");
lf[12]=C_h_intern(&lf[12],1,"s");
C_register_lf2(lf,13,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_224,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k222 */
static void C_ccall f_224(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_224,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_227,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k225 in k222 */
static void C_ccall f_227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_230,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_chicken_2dsyntax_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k246 in k243 in k240 in k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* k243 in k240 in k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_251,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
C_trace("##sys#implicit-exit-handler");
((C_proc2)C_fast_retrieve_symbol_proc(lf[0]))(2,*((C_word*)lf[0]+1),t3);}

/* k240 in k237 in k234 in k231 in k228 in k225 in k222 */
static void C_ccall f_242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_245,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_trace("./layout.scm:9: display");
((C_proc3)C_fast_retrieve_proc(*((C_word*)lf[1]+1)))(3,*((C_word*)lf[1]+1),t2,t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[15] = {
{"f_233:_2e_2flayout_2escm",(void*)f_233},
{"f_236:_2e_2flayout_2escm",(void*)f_236},
{"f_239:_2e_2flayout_2escm",(void*)f_239},
{"f_230:_2e_2flayout_2escm",(void*)f_230},
{"f_277:_2e_2flayout_2escm",(void*)f_277},
{"f_273:_2e_2flayout_2escm",(void*)f_273},
{"f_255:_2e_2flayout_2escm",(void*)f_255},
{"f_251:_2e_2flayout_2escm",(void*)f_251},
{"toplevel:_2e_2flayout_2escm",(void*)C_toplevel},
{"f_224:_2e_2flayout_2escm",(void*)f_224},
{"f_227:_2e_2flayout_2escm",(void*)f_227},
{"f_248:_2e_2flayout_2escm",(void*)f_248},
{"f_245:_2e_2flayout_2escm",(void*)f_245},
{"f_242:_2e_2flayout_2escm",(void*)f_242},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}

/*
o|eliminated procedure checks: 2 
o|Removed `not' forms: 1 
o|contracted procedure: k260 
o|replaced variables: 7 
o|removed binding forms: 13 
o|removed binding forms: 7 
o|replaced variables: 1 
o|removed binding forms: 1 
o|simplifications: ((##core#call . 4)) 
o|  call simplifications:
o|    ##sys#list	2
o|    apply	2
o|contracted procedure: k257 
o|contracted procedure: k267 
o|removed binding forms: 2 
o|calls to known targets: 1 
*/
/* end of file */
