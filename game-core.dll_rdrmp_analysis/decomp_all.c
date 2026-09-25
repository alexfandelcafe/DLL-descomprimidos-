// RDRMP TARGETED DECOMPILATION
// Program: game-core.dll
// Functions: 133
// ============================================================

// ============================================================
// INDEX: 1/133
// FUNCTION: FUN_180001820
// ENTRY: 180001820
// RVA: 0x1820
// PRIORITY: 160
// SEED TYPE: STRING,API
// SIGNATURE: undefined FUN_180001820(undefined8 * param_1, longlong * param_2, longlong param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001820(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  undefined1 uVar2;
  char ******ppppppcVar3;
  bool bVar4;
  undefined8 *puVar5;
  basic_istream<char,std::char_traits<char>_> *pbVar6;
  basic_istream<char,struct_std::char_traits<char>_> *this;
  HMODULE pHVar7;
  HANDLE pvVar8;
  char *pcVar9;
  char *******pppppppcVar10;
  undefined1 *puVar11;
  char *pcVar12;
  int iVar13;
  ulonglong uVar14;
  size_t sVar15;
  uint uVar16;
  undefined1 auStack_2d8 [32];
  undefined1 local_2b8 [4];
  uint local_2b4;
  undefined8 *local_2b0;
  undefined8 uStack_2a8;
  longlong local_2a0;
  ulonglong uStack_298;
  longlong *local_290;
  undefined ***local_288;
  longlong local_280;
  uint local_278;
  undefined1 *local_268;
  undefined1 *puStack_260;
  undefined1 *local_258;
  undefined ***local_250;
  char ******local_248;
  undefined8 uStack_240;
  longlong local_238;
  undefined8 local_230;
  undefined *local_228 [2];
  undefined **local_218;
  basic_istream<char,std::char_traits<char>_> local_210 [16];
  undefined8 *local_200;
  undefined8 *local_1f8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  int *local_1c8;
  int *local_1c0;
  undefined1 *local_1b0;
  undefined4 local_1a8;
  basic_ios<char,std::char_traits<char>_> local_198 [92];
  int iStack_13c;
  undefined *local_138 [2];
  undefined **local_128;
  basic_istream<char,std::char_traits<char>_> local_120 [120];
  basic_ios<char,std::char_traits<char>_> local_a8 [96];
  ulonglong local_48;
  
  local_48 = DAT_180019240 ^ (ulonglong)auStack_2d8;
  local_2b4 = 0;
  local_268 = (undefined1 *)0x0;
  puStack_260 = (undefined1 *)0x0;
  local_258 = (undefined1 *)0x0;
  local_290 = param_2;
  memset(local_228,0,0xf0);
  local_2b0 = (undefined8 *)0x0;
  uStack_2a8 = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  sVar15 = 0xffffffffffffffff;
  do {
    sVar15 = sVar15 + 1;
  } while (*(char *)((longlong)param_1[1] + sVar15) != '\0');
  FUN_180002e30(&local_2b0,(void *)param_1[1],sVar15);
  local_228[0] = &DAT_1800118a8;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_198);
  uVar16 = 2;
  local_2b4 = 2;
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)local_228,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_218,false);
  *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
       *(int *)(local_228[0] + 4) + -0x90;
  local_250 = &local_218;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_218);
  local_218 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if (uStack_298 < 0x10) {
    iVar13 = 0x11;
    puVar5 = (undefined8 *)FUN_18000eeb0(0x11);
    *puVar5 = local_2b0;
    puVar5[1] = uStack_2a8;
  }
  else {
    iVar13 = (int)uStack_298 + 1;
    puVar5 = local_2b0;
  }
  local_1b0 = (undefined1 *)(local_2a0 + (longlong)puVar5);
  *local_1f8 = puVar5;
  *local_1d8 = puVar5;
  *local_1c0 = iVar13;
  *local_200 = puVar5;
  *local_1e0 = puVar5;
  *local_1c8 = (int)local_1b0 - (int)puVar5;
  local_1a8 = 0x23;
  uStack_240 = 0;
  local_238 = 0;
  local_230 = 0xf;
  local_248 = (char ******)0x0;
  pbVar6 = FUN_180002ae0((basic_istream<char,std::char_traits<char>_> *)local_228,
                         (longlong *)&local_248,puVar5);
  bVar4 = std::ios_base::operator_bool((ios_base *)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4)));
  if (bVar4) {
    do {
      uVar14 = local_230;
      ppppppcVar3 = local_248;
      pppppppcVar10 = &local_248;
      if (0xf < local_230) {
        pppppppcVar10 = (char *******)local_248;
      }
      if (*(char *)pppppppcVar10 == '?') {
        local_2b8[0] = 0;
        if (puStack_260 == local_258) {
          puVar5 = (undefined8 *)local_2b8;
          FUN_180002fb0((longlong *)&local_268,puStack_260,(undefined1 *)puVar5);
        }
        else {
          *puStack_260 = 0;
          puStack_260 = puStack_260 + 1;
        }
      }
      else {
        if (((local_238 != 2) || (iVar13 = isxdigit((int)*(char *)pppppppcVar10), iVar13 == 0)) ||
           (iVar13 = isxdigit((int)*(char *)((longlong)pppppppcVar10 + 1)), iVar13 == 0)) {
          Log::Print(3,(char *)0x0,"Invalid pattern format \'%s\'",*param_1);
          if (0xf < uVar14) {
            pppppppcVar10 = (char *******)ppppppcVar3;
            if ((0xfff < uVar14 + 1) &&
               (pppppppcVar10 = (char *******)ppppppcVar3[-1],
               (char *)0x1f < (char *)((longlong)ppppppcVar3 + (-8 - (longlong)pppppppcVar10))))
            goto LAB_180001cec;
            FUN_18000f264(pppppppcVar10);
          }
          *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
               std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
          *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
               *(int *)(local_228[0] + 4) + -0x90;
          FUN_180002650((basic_streambuf<char,std::char_traits<char>_> *)&local_218);
          std::basic_istream<char,std::char_traits<char>_>::
          ~basic_istream<char,std::char_traits<char>_>(local_210);
          std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                    (local_198);
          if (local_268 != (undefined1 *)0x0) {
            puVar11 = local_268;
            if ((0xfff < (ulonglong)((longlong)local_258 - (longlong)local_268)) &&
               (puVar11 = *(undefined1 **)(local_268 + -8),
               (undefined1 *)0x1f < local_268 + (-8 - (longlong)puVar11))) goto LAB_180001fa7;
            FUN_18000f264(puVar11);
            local_268 = (undefined1 *)0x0;
            puStack_260 = (undefined1 *)0x0;
            local_258 = (undefined1 *)0x0;
          }
          plVar1 = (longlong *)param_2[7];
          if (plVar1 == (longlong *)0x0) {
            return;
          }
          (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
          param_2[7] = 0;
          return;
        }
        memset(local_138,0,0xf0);
        local_138[0] = &DAT_1800118a8;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (local_a8);
        uVar16 = uVar16 | 1;
        local_2b4 = uVar16;
        std::basic_istream<char,std::char_traits<char>_>::
        basic_istream<char,std::char_traits<char>_>
                  ((basic_istream<char,std::char_traits<char>_> *)local_138,
                   (basic_streambuf<char,std::char_traits<char>_> *)&local_128,false);
        *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
             std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
             *(int *)(local_138[0] + 4) + -0x90;
        local_288 = &local_128;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>
                  ((basic_streambuf<char,std::char_traits<char>_> *)&local_128);
        local_128 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable
        ;
        pppppppcVar10 = &local_248;
        if (0xf < uVar14) {
          pppppppcVar10 = (char *******)ppppppcVar3;
        }
        puVar5 = (undefined8 *)0x2;
        FUN_180002890((longlong)&local_128,pppppppcVar10,2,2);
        local_250 = (undefined ***)((ulonglong)local_250 & 0xffffffff00000000);
        this = std::basic_istream<char,std::char_traits<char>_>::operator>>
                         ((basic_istream<char,std::char_traits<char>_> *)local_138,FUN_180001730);
        std::basic_istream<char,std::char_traits<char>_>::operator>>
                  ((basic_istream<char,std::char_traits<char>_> *)this,(uint *)&local_250);
        uVar2 = local_250._0_1_;
        *(undefined ***)((longlong)local_138 + (longlong)*(int *)(local_138[0] + 4)) =
             std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)&iStack_13c + (longlong)*(int *)(local_138[0] + 4)) =
             *(int *)(local_138[0] + 4) + -0x90;
        FUN_180002650((basic_streambuf<char,std::char_traits<char>_> *)&local_128);
        std::basic_istream<char,std::char_traits<char>_>::
        ~basic_istream<char,std::char_traits<char>_>(local_120);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_a8);
        local_2b8[0] = uVar2;
        if (puStack_260 == local_258) {
          puVar5 = (undefined8 *)local_2b8;
          FUN_180002fb0((longlong *)&local_268,puStack_260,(undefined1 *)puVar5);
        }
        else {
          *puStack_260 = uVar2;
          puStack_260 = puStack_260 + 1;
        }
      }
      pbVar6 = FUN_180002ae0((basic_istream<char,std::char_traits<char>_> *)local_228,
                             (longlong *)&local_248,puVar5);
      bVar4 = std::ios_base::operator_bool((ios_base *)(pbVar6 + *(int *)(*(longlong *)pbVar6 + 4)))
      ;
    } while (bVar4);
  }
  uVar14 = 0;
  pHVar7 = GetModuleHandleW((LPCWSTR)0x0);
  pvVar8 = GetCurrentProcess();
  K32GetModuleInformation(pvVar8,pHVar7,&local_280,0x18);
  if (local_278 != 0) {
    do {
      pcVar12 = (char *)(uVar14 + local_280);
      if (puStack_260 != local_268) {
        pcVar9 = pcVar12;
        do {
          if ((pcVar9[(longlong)local_268 - (longlong)pcVar12] != '\0') &&
             (*pcVar9 != pcVar9[(longlong)local_268 - (longlong)pcVar12])) goto LAB_180001c8d;
          pcVar9 = pcVar9 + 1;
        } while ((ulonglong)((longlong)pcVar9 - (longlong)pcVar12) <
                 (ulonglong)((longlong)puStack_260 - (longlong)local_268));
      }
      if (param_3 == 0) {
        param_1[2] = pcVar12;
        plVar1 = (longlong *)param_2[7];
        if (plVar1 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(*plVar1 + 0x10))(plVar1,param_1);
        if (0xf < local_230) {
          pppppppcVar10 = (char *******)local_248;
          if ((0xfff < local_230 + 1) &&
             (pppppppcVar10 = (char *******)local_248[-1],
             (char *)0x1f < (char *)((longlong)local_248 + (-8 - (longlong)pppppppcVar10))))
          goto LAB_180001cec;
          FUN_18000f264(pppppppcVar10);
        }
        *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
             std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
             *(int *)(local_228[0] + 4) + -0x90;
        FUN_180002650((basic_streambuf<char,std::char_traits<char>_> *)&local_218);
        std::basic_istream<char,std::char_traits<char>_>::
        ~basic_istream<char,std::char_traits<char>_>(local_210);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_198);
        if (local_268 == (undefined1 *)0x0) goto LAB_180001edc;
        puVar11 = local_268;
        if (((ulonglong)((longlong)local_258 - (longlong)local_268) < 0x1000) ||
           (puVar11 = *(undefined1 **)(local_268 + -8),
           local_268 + (-8 - (longlong)puVar11) < (undefined1 *)0x20)) goto LAB_180001ec9;
        goto LAB_180001fa7;
      }
      param_3 = param_3 + -1;
LAB_180001c8d:
      uVar16 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar16;
    } while (uVar16 < local_278);
  }
  Log::Print(3,(char *)0x0,"Failed to find \'%s\'",*param_1);
  if (0xf < local_230) {
    pppppppcVar10 = (char *******)local_248;
    if ((0xfff < local_230 + 1) &&
       (pppppppcVar10 = (char *******)local_248[-1],
       (char *)0x1f < (char *)((longlong)local_248 + (-8 - (longlong)pppppppcVar10)))) {
LAB_180001cec:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pppppppcVar10);
  }
  *(undefined ***)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4)) =
       std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)local_228 + (longlong)*(int *)(local_228[0] + 4) + -4) =
       *(int *)(local_228[0] + 4) + -0x90;
  FUN_180002650((basic_streambuf<char,std::char_traits<char>_> *)&local_218);
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            (local_210);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_198);
  if (local_268 != (undefined1 *)0x0) {
    puVar11 = local_268;
    if ((0xfff < (ulonglong)((longlong)local_258 - (longlong)local_268)) &&
       (puVar11 = *(undefined1 **)(local_268 + -8),
       (undefined1 *)0x1f < local_268 + (-8 - (longlong)*(undefined1 **)(local_268 + -8)))) {
LAB_180001fa7:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
LAB_180001ec9:
    FUN_18000f264(puVar11);
    local_268 = (undefined1 *)0x0;
    local_258 = (undefined1 *)0x0;
    puStack_260 = (undefined1 *)0x0;
  }
LAB_180001edc:
  plVar1 = (longlong *)param_2[7];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != param_2);
    param_2[7] = 0;
  }
  return;
}



// ============================================================
// INDEX: 2/133
// FUNCTION: PostLoad
// ENTRY: 180008070
// RVA: 0x8070
// PRIORITY: 155
// SEED TYPE: STRING,NAME
// SIGNATURE: void PostLoad(scrThread * this)
// ============================================================

/* public: virtual void __cdecl rage::scrThread::PostLoad(void) __ptr64 */

void __thiscall rage::scrThread::PostLoad(scrThread *this)

{
  __uint64 _Var1;
  ulonglong uVar2;
  _func_void *p_Var3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  undefined8 *puVar10;
  char *pcVar11;
  char *local_78;
  char *local_70;
  undefined8 local_68;
  undefined **local_60 [7];
  undefined ***local_28;
  
                    /* 0x8070  77  ?PostLoad@scrThread@rage@@UEAAXXZ */
  puVar10 = (undefined8 *)0x0;
  local_78 = "rage::scrThread::RegisterCommand";
  local_68 = 0;
  local_70 = "48 89 5C 24 ? 57 48 83 EC 20 44 8B 0D ? ? ? ?";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "rage::scrThread::sm_CommandsRegistration";
  local_70 = "4C 8B 1D ? ? ? ? 41 8B C1";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_2>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_70 = "E8 ? ? ? ? 8D 56 10";
  local_78 = "rage::scrThread::Wait";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_3>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "sagCoreScript::RDRStartNewScript";
  local_70 = "E8 ? ? ? ? 48 8B 0B 8B 44 24 40 89 01 48 83 C4 30 5B C3 CC 40 53";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_4>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_78 = "rage::scrThread::StartNewThreadOverride";
  local_70 = "E8 ? ? ? ? 48 8B D8 85 FF 74 16";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_5>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_68 = 0;
  local_70 = 
  "48 89 5C 24 ? 48 89 6C 24 ? 48 89 74 24 ? 57 41 54 41 55 41 56 41 57 48 83 EC 30 48 8B 05 ? ? ? ? 33 ED"
  ;
  local_78 = "rage::fiAssetManager::fullReadPath";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_6>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  local_78 = "QuitGame";
  local_68 = 0;
  local_70 = "48 83 EC 28 E8 ? ? ? ? C6 80 ? ? ? ? ?";
  local_60[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::scrThread::PostLoad(void)___ptr64'::`2'::<lambda_7>,void,Pattern_const&___ptr64>
                ::vftable;
  local_28 = local_60;
  FUN_180001820(&local_78,(longlong *)local_60,0);
  pvVar4 = s_Wait;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(pvVar4,n_Wait,&o_Wait);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)pvVar4);
    if (iVar6 != 0) {
      pcVar11 = "Failed to enable hook \'%s\'";
      goto LAB_18000827d;
    }
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
LAB_18000827d:
    Log::Print(3,(char *)0x0,pcVar11);
  }
  pvVar4 = s_FullReadPath;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(pvVar4,FUN_180007910,&DAT_18001b288);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)pvVar4);
    if (iVar6 != 0) {
      pcVar11 = "Failed to enable hook \'%s\'";
      goto LAB_1800082cf;
    }
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
LAB_1800082cf:
    Log::Print(3,(char *)0x0,pcVar11);
  }
  p_Var3 = s_QuitGame;
  FUN_18000d8f4();
  uVar5 = FUN_18000d740((undefined8 *)p_Var3,n_QuitGame,&o_QuitGame);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)p_Var3);
    if (iVar6 == 0) goto LAB_180008331;
    pcVar11 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
  }
  Log::Print(3,(char *)0x0,pcVar11);
LAB_180008331:
  Log::Print(1,(char *)0x0,"Waiting for native invoker...");
  do {
    if ((s_CommandsRegistration != (__uint64 *)0x0) && (_Var1 = *s_CommandsRegistration, _Var1 != 0)
       ) {
      uVar5 = (uint)s_CommandsRegistration[1];
      uVar8 = 0xa0ae0c98;
      uVar2 = 0xa0ae0c98 % (ulonglong)uVar5;
      iVar6 = *(int *)(_Var1 + (ulonglong)(uint)((int)uVar2 * 4) * 4);
      do {
        if (iVar6 == -0x5f51f368) {
          uVar2 = 0x676167c3 % (ulonglong)uVar5;
          uVar8 = 0x676167c3;
          iVar9 = (int)uVar2;
          iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
          goto joined_r0x0001800083d5;
        }
        uVar7 = (int)(uVar8 >> 1) + 1;
        uVar8 = (ulonglong)uVar7;
        uVar2 = (ulonglong)(uVar7 + (int)uVar2) % (ulonglong)uVar5;
        iVar6 = *(int *)(_Var1 + (ulonglong)(uint)((int)uVar2 * 4) * 4);
      } while (iVar6 != 0);
    }
    Sleep(1);
  } while( true );
  while( true ) {
    uVar7 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar7;
    uVar2 = (ulonglong)(uVar7 + (int)uVar2) % (ulonglong)uVar5;
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
    if (iVar6 == 0) break;
joined_r0x0001800083d5:
    if (iVar6 == 0x676167c3) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
  }
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0xfd25473e % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0xfd25473e;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x2dab8c2) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0x906c42fd % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0x906c42fd;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x6f93bd03) {
      *(code **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8) = FUN_180007ef0;
      break;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  _Var1 = *s_CommandsRegistration;
  uVar2 = 0xecf8eb5f % (ulonglong)(uint)s_CommandsRegistration[1];
  uVar8 = 0xecf8eb5f;
  iVar9 = (int)uVar2;
  iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  do {
    if (iVar6 == -0x130714a1) {
      puVar10 = *(undefined8 **)(_Var1 + 8 + (ulonglong)(uint)(iVar9 * 2) * 8);
      goto LAB_18000852d;
    }
    uVar5 = (int)(uVar8 >> 1) + 1;
    uVar8 = (ulonglong)uVar5;
    uVar2 = (ulonglong)(uVar5 + (int)uVar2) % (ulonglong)(uint)s_CommandsRegistration[1];
    iVar9 = (int)uVar2;
    iVar6 = *(int *)(_Var1 + (ulonglong)(uint)(iVar9 * 4) * 4);
  } while (iVar6 != 0);
  Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_18000852d:
  FUN_18000d8f4();
  uVar5 = FUN_18000d740(puVar10,FUN_180007fa0,(undefined8 *)&DAT_18001b290);
  if (uVar5 == 0) {
    iVar6 = FUN_18000d8e8((longlong)puVar10);
    if (iVar6 == 0) {
      return;
    }
    pcVar11 = "Failed to enable hook \'%s\'";
  }
  else {
    pcVar11 = "Failed to create hook \'%s\'";
  }
  Log::Print(3,(char *)0x0,pcVar11);
  return;
}



// ============================================================
// INDEX: 3/133
// FUNCTION: FUN_180001090
// ENTRY: 180001090
// RVA: 0x1090
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined FUN_180001090(void)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180001090(void)

{
  longlong *plVar1;
  undefined8 **ppuVar2;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 *local_38;
  longlong *local_30;
  longlong *plStack_28;
  undefined8 *local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_98;
  local_78 = (undefined8 *)0x0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  FUN_180002e30(&local_78,"scripting/DesignerDefined/Player",0x20);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  FUN_180002e30(&local_58,"scripting/DesignerDefined/long_update_thread",0x2c);
  DAT_18001b270 = (longlong *)0x0;
  DAT_18001b278 = (longlong *)0x0;
  DAT_18001b280 = (longlong *)0x0;
  plVar1 = (longlong *)FUN_18000eeb0(0x40);
  DAT_18001b280 = plVar1 + 8;
  local_38 = &DAT_18001b270;
  ppuVar2 = &local_78;
  local_20 = &DAT_18001b270;
  DAT_18001b270 = plVar1;
  DAT_18001b278 = plVar1;
  local_30 = plVar1;
  do {
    plStack_28 = plVar1;
    FUN_1800044b0(plVar1,ppuVar2);
    plVar1 = plVar1 + 4;
    ppuVar2 = ppuVar2 + 4;
  } while (ppuVar2 != &local_38);
  plStack_28 = plVar1;
  FUN_180006fc0(plVar1,plVar1);
  DAT_18001b278 = plVar1;
  _eh_vector_destructor_iterator_(&local_78,0x20,2,FUN_180002710);
  atexit(FUN_180010950);
  return;
}



// ============================================================
// INDEX: 4/133
// FUNCTION: FUN_1800011f0
// ENTRY: 1800011f0
// RVA: 0x11F0
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined FUN_1800011f0(void)
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800011f0(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong local_118 [34];
  
  local_118[0] = 0;
  local_118[1] = 0;
  local_118[2] = 0;
  local_118[3] = 0;
  FUN_180002e30(local_118,"content/ui/boot.sc",0x12);
  local_118[4] = 0;
  local_118[5] = 0;
  local_118[6] = 0;
  local_118[7] = 0;
  FUN_180002e30(local_118 + 4,"content/ui/boot.sc.xml",0x16);
  local_118[8] = 0;
  local_118[9] = 0;
  local_118[10] = 0;
  local_118[0xb] = 0;
  FUN_180002e30(local_118 + 8,"content/ui/pausemenu/pausemenuscene.sc",0x26);
  local_118[0xc] = 0;
  local_118[0xd] = 0;
  local_118[0xe] = 0;
  local_118[0xf] = 0;
  FUN_180002e30(local_118 + 0xc,"content/ui/pausemenu/pausemenuscene.sc.xml",0x2a);
  local_118[0x10] = 0;
  local_118[0x11] = 0;
  local_118[0x12] = 0;
  local_118[0x13] = 0;
  FUN_180002e30(local_118 + 0x10,"content/ui/pausemenu/savegame.sc",0x20);
  local_118[0x14] = 0;
  local_118[0x15] = 0;
  local_118[0x16] = 0;
  local_118[0x17] = 0;
  FUN_180002e30(local_118 + 0x14,"content/ui/pausemenu/savegame.sc.xml",0x24);
  local_118[0x18] = 0;
  local_118[0x19] = 0;
  local_118[0x1a] = 0;
  local_118[0x1b] = 0;
  FUN_180002e30(local_118 + 0x18,"content/ui/net/profileeditor/main.sc",0x24);
  local_118[0x1c] = 0;
  local_118[0x1d] = 0;
  local_118[0x1e] = 0;
  local_118[0x1f] = 0;
  FUN_180002e30(local_118 + 0x1c,"content/ui/net/profileeditor/main.sc.xml",0x28);
  DAT_18001b230 = 0;
  DAT_18001b238 = 0;
  DAT_18001b240 = 0;
  DAT_18001b238 = FUN_18000eeb0(0x50);
  *(longlong *)DAT_18001b238 = DAT_18001b238;
  *(longlong *)(DAT_18001b238 + 8) = DAT_18001b238;
  DAT_18001b248 = 0;
  _DAT_18001b250 = 0;
  DAT_18001b258 = 0;
  DAT_18001b260 = 7;
  DAT_18001b268 = 8;
  DAT_18001b230 = 0x3f800000;
  puVar1 = &DAT_18001b248;
  FUN_1800046a0(&DAT_18001b248,0x10,DAT_18001b238);
  plVar2 = local_118;
  do {
    FUN_180009990(puVar1,local_118 + 0x20,plVar2);
    plVar2 = plVar2 + 8;
  } while (plVar2 != local_118 + 0x20);
  _eh_vector_destructor_iterator_(local_118,0x40,4,FUN_1800070c0);
  atexit(FUN_1800109d0);
  return;
}



// ============================================================
// INDEX: 5/133
// FUNCTION: GetCommand
// ENTRY: 180008740
// RVA: 0x8740
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: _func_void_InfoBase_ptr * GetCommand(uint param_1)
// ============================================================

/* public: static void (__cdecl*__cdecl rage::scrThread::GetCommand(unsigned int))(class
   rage::scrThread::InfoBase * __ptr64) */

_func_void_InfoBase_ptr * __cdecl rage::scrThread::GetCommand(uint param_1)

{
  uint uVar1;
  __uint64 _Var2;
  uint uVar3;
  uint uVar4;
  
                    /* 0x8740  51  ?GetCommand@scrThread@rage@@SAP6AXPEAVInfoBase@12@@ZI@Z */
  _Var2 = *s_CommandsRegistration;
  uVar3 = param_1 % (uint)s_CommandsRegistration[1];
  uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  uVar4 = param_1;
  do {
    if (uVar1 == param_1) {
      return *(_func_void_InfoBase_ptr **)(_Var2 + 8 + (ulonglong)(uVar3 * 2) * 8);
    }
    uVar4 = (uVar4 >> 1) + 1;
    uVar3 = (uVar4 + uVar3) % (uint)s_CommandsRegistration[1];
    uVar1 = *(uint *)(_Var2 + (ulonglong)(uVar3 * 4) * 4);
  } while (uVar1 != 0);
  Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
  return (_func_void_InfoBase_ptr *)0x0;
}



// ============================================================
// INDEX: 6/133
// FUNCTION: FUN_180008a40
// ENTRY: 180008a40
// RVA: 0x8A40
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined8 FUN_180008a40(void)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008a40(void)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1e8 = local_118;
  local_1f8 = local_118;
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  memset(local_118,0,0x100);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b168) && (FUN_18000f340(&DAT_18001b168), DAT_18001b168 == -1)) {
    uVar3 = 0xbc52445 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0xbc52445;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == 0xbc52445) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_180008b51;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_180008b51:
    DAT_18001b188 = pcVar5;
    _Init_thread_footer(&DAT_18001b168);
  }
  uVar6 = local_1e0;
  if (DAT_18001b188 != (code *)0x0) {
    (*DAT_18001b188)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



// ============================================================
// INDEX: 7/133
// FUNCTION: FUN_180008c10
// ENTRY: 180008c10
// RVA: 0x8C10
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined8 FUN_180008c10(void)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180008c10(void)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined8 local_118 [32];
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  local_1e8 = local_118;
  local_1f8 = local_118;
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  memset(local_118,0,0x100);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b16c) && (FUN_18000f340(&DAT_18001b16c), DAT_18001b16c == -1)) {
    uVar3 = 0x960db7a5 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0x960db7a5;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == -0x69f2485b) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_180008d21;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_180008d21:
    DAT_18001b170 = pcVar5;
    _Init_thread_footer(&DAT_18001b16c);
  }
  uVar6 = local_1e0;
  if (DAT_18001b170 != (code *)0x0) {
    (*DAT_18001b170)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



// ============================================================
// INDEX: 8/133
// FUNCTION: FUN_18000c490
// ENTRY: 18000c490
// RVA: 0xC490
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined4 FUN_18000c490(undefined8 param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_18000c490(undefined8 param_1)

{
  int iVar1;
  __uint64 _Var2;
  ulonglong uVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined1 auStack_218 [32];
  undefined8 *local_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  undefined8 *local_1e8;
  uint local_1e0;
  undefined1 local_1dc [4];
  longlong alStack_1d8 [4];
  undefined4 auStack_1b4 [39];
  undefined4 local_118 [64];
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_218;
  local_1ec = 0;
  memset(local_1dc,0,0x1c4);
  pcVar5 = (code *)0x0;
  local_1f0 = 0;
  local_1e0 = 0;
  local_1f8 = (undefined8 *)local_118;
  local_1e8 = (undefined8 *)local_118;
  memset(local_118,0,0x100);
  *(undefined8 *)((longlong)local_118 + (ulonglong)local_1f0 * 8) = param_1;
  local_1f0 = local_1f0 + 1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18001b2b0) && (FUN_18000f340(&DAT_18001b2b0), DAT_18001b2b0 == -1)) {
    uVar3 = 0x84415e28 % (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
    uVar7 = 0x84415e28;
    _Var2 = *rage::scrThread::s_CommandsRegistration;
    iVar4 = (int)uVar3;
    iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    do {
      if (iVar1 == -0x7bbea1d8) {
        pcVar5 = *(code **)(_Var2 + 8 + (ulonglong)(uint)(iVar4 * 2) * 8);
        goto LAB_18000c5b1;
      }
      uVar6 = (int)(uVar7 >> 1) + 1;
      uVar7 = (ulonglong)uVar6;
      uVar3 = (ulonglong)(uVar6 + (int)uVar3) %
              (ulonglong)(uint)rage::scrThread::s_CommandsRegistration[1];
      iVar4 = (int)uVar3;
      iVar1 = *(int *)(_Var2 + (ulonglong)(uint)(iVar4 * 4) * 4);
    } while (iVar1 != 0);
    Log::Print(3,(char *)0x0,"Failed to find native with hash 0x%08X");
LAB_18000c5b1:
    DAT_18001b2b8 = pcVar5;
    _Init_thread_footer(&DAT_18001b2b0);
  }
  uVar6 = local_1e0;
  if (DAT_18001b2b8 != (code *)0x0) {
    (*DAT_18001b2b8)(&local_1f8);
    uVar6 = local_1e0;
  }
  while (uVar6 != 0) {
    local_1e0 = uVar6 - 1;
    *(undefined4 *)alStack_1d8[local_1e0] =
         *(undefined4 *)((longlong)&local_1f8 + (ulonglong)((uVar6 + 3) * 0x10));
    *(undefined4 *)(alStack_1d8[local_1e0] + 4) = auStack_1b4[(ulonglong)local_1e0 * 4];
    *(undefined4 *)(alStack_1d8[local_1e0] + 8) = auStack_1b4[(ulonglong)local_1e0 * 4 + 1];
    uVar6 = local_1e0;
  }
  return local_118[0];
}



// ============================================================
// INDEX: 9/133
// FUNCTION: __std_fs_open_handle
// ENTRY: 18000ee24
// RVA: 0xEE24
// PRIORITY: 100
// SEED TYPE: API,NAME
// SIGNATURE: DWORD __std_fs_open_handle(undefined8 * param_1, LPCWSTR param_2, DWORD param_3, DWORD param_4)
// ============================================================

/* Library Function - Single Match
    __std_fs_open_handle
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

DWORD __std_fs_open_handle(undefined8 *param_1,LPCWSTR param_2,DWORD param_3,DWORD param_4)

{
  DWORD DVar1;
  HANDLE pvVar2;
  
  DVar1 = 0;
  pvVar2 = CreateFileW(param_2,param_3,7,(LPSECURITY_ATTRIBUTES)0x0,3,param_4,(HANDLE)0x0);
  *param_1 = pvVar2;
  if (pvVar2 == (HANDLE)0xffffffffffffffff) {
    DVar1 = GetLastError();
  }
  return DVar1;
}



// ============================================================
// INDEX: 10/133
// FUNCTION: FUN_180002ae0
// ENTRY: 180002ae0
// RVA: 0x2AE0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_istream<char,std::char_traits<char>_> * FUN_180002ae0(basic_istream<char,std::char_traits<char>_> * param_1, longlong * param_2, undefined8 param_3)
// ============================================================

basic_istream<char,std::char_traits<char>_> *
FUN_180002ae0(basic_istream<char,std::char_traits<char>_> *param_1,longlong *param_2,
             undefined8 param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  locale *plVar6;
  facet *pfVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *local_30;
  
  bVar3 = false;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar4 = std::basic_istream<char,std::char_traits<char>_>::_Ipfx(param_1,false);
  uVar10 = 0;
  if (bVar4) {
    plVar6 = (locale *)
             std::ios_base::getloc((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    pfVar7 = FUN_1800029d0(plVar6);
    if ((local_30 != (longlong *)0x0) &&
       (puVar8 = (undefined8 *)(**(code **)(*local_30 + 0x10))(), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)(puVar8,1);
    }
    param_2[2] = 0;
    plVar9 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      plVar9 = (longlong *)*param_2;
    }
    *(undefined1 *)plVar9 = 0;
    uVar11 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
    if (((longlong)uVar11 < 1) || (0x7ffffffffffffffe < uVar11)) {
      uVar11 = 0x7fffffffffffffff;
    }
    uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sgetc
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    for (; uVar10 = 0, uVar11 != 0; uVar11 = uVar11 - 1) {
      if (uVar5 == 0xffffffff) {
        uVar10 = 1;
        break;
      }
      uVar10 = 0;
      if ((*(byte *)(*(longlong *)(pfVar7 + 0x18) + (ulonglong)(uVar5 & 0xff) * 2) & 0x48) != 0)
      break;
      uVar1 = param_2[2];
      uVar2 = param_2[3];
      if (uVar1 < uVar2) {
        param_2[2] = uVar1 + 1;
        plVar9 = param_2;
        if (0xf < uVar2) {
          plVar9 = (longlong *)*param_2;
        }
        *(char *)((longlong)plVar9 + uVar1) = (char)uVar5;
        *(undefined1 *)((longlong)plVar9 + uVar1 + 1) = 0;
      }
      else {
        FUN_180002cc0(param_2,uVar2,param_3,(char)uVar5);
      }
      bVar3 = true;
      uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::snextc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48));
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  if (!bVar3) {
    uVar10 = uVar10 | 2;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),uVar10,false);
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



// ============================================================
// INDEX: 11/133
// FUNCTION: FUN_180006db0
// ENTRY: 180006db0
// RVA: 0x6DB0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: uint * FUN_180006db0(uint * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_180006db0(uint *param_1)

{
  char *pcVar1;
  short sVar2;
  code *pcVar3;
  void *pvVar4;
  uint *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint ****ppppuVar8;
  uint *puVar9;
  void *pvVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  uint *local_78;
  longlong local_70;
  WCHAR local_60;
  undefined6 uStack_5e;
  undefined8 local_50;
  ulonglong uStack_48;
  uint ***local_40 [2];
  ulonglong local_30;
  ulonglong local_28;
  ulonglong local_20;
  longlong lVar12;
  
  local_20 = DAT_180019240 ^ (ulonglong)auStack_98;
  local_78 = param_1;
  GetModuleFileNameA((HMODULE)&IMAGE_DOS_HEADER_180000000,&DAT_18001b060,0x104);
  lVar12 = -1;
  do {
    lVar11 = lVar12 + 1;
    pcVar1 = &DAT_18001b061 + lVar12;
    lVar12 = lVar11;
  } while (*pcVar1 != '\0');
  uVar6 = FUN_18000e89c();
  local_78 = (uint *)&DAT_18001b060;
  local_70 = lVar11;
  FUN_180005c30((LPWSTR)local_40,(UINT)uVar6,&local_78);
  uVar6 = FUN_18000e89c();
  local_78 = (uint *)0x1800122f4;
  local_70 = 5;
  FUN_180005c30(&local_60,(UINT)uVar6,&local_78);
  ppppuVar8 = local_40;
  if (7 < local_28) {
    ppppuVar8 = (uint ****)local_40[0];
  }
  puVar9 = (uint *)((longlong)ppppuVar8 + local_30 * 2);
  puVar7 = FUN_180005da0((uint *)ppppuVar8,puVar9);
  if (puVar7 == puVar9) {
LAB_180006eae:
    uVar6 = (longlong)puVar9 - (longlong)ppppuVar8 >> 1;
    if (local_30 < uVar6) {
      FUN_1800088c0();
      pcVar3 = (code *)swi(3);
      puVar9 = (uint *)(*pcVar3)();
      return puVar9;
    }
    ppppuVar8 = local_40;
    if (7 < local_28) {
      ppppuVar8 = (uint ****)local_40[0];
    }
    local_30 = uVar6;
    *(undefined2 *)((longlong)ppppuVar8 + uVar6 * 2) = 0;
    FUN_180006190(param_1,(uint *)local_40,(uint *)&local_60);
    if (7 < uStack_48) {
      pvVar4 = (void *)CONCAT62(uStack_5e,local_60);
      pvVar10 = pvVar4;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (pvVar10 = *(void **)((longlong)pvVar4 + -8),
         0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar10);
    }
    local_50 = _DAT_1800128e0;
    uStack_48 = _UNK_1800128e8;
    local_60 = L'\0';
    if (7 < local_28) {
      ppppuVar8 = (uint ****)local_40[0];
      if ((0xfff < local_28 * 2 + 2) &&
         (ppppuVar8 = (uint ****)local_40[0][-1],
         0x1f < (ulonglong)((longlong)local_40[0] + (-8 - (longlong)ppppuVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(ppppuVar8);
    }
    return param_1;
  }
  do {
    puVar5 = puVar9;
    if (((short)*puVar7 != 0x5c) && ((short)*puVar7 != 0x2f)) break;
    puVar7 = (uint *)((longlong)puVar7 + 2);
  } while (puVar7 != puVar9);
  do {
    puVar9 = puVar5;
    if (puVar7 == puVar9) goto LAB_180006eae;
    sVar2 = *(short *)((longlong)puVar9 + -2);
    if ((sVar2 == 0x5c) || (puVar5 = (uint *)((longlong)puVar9 + -2), sVar2 == 0x2f))
    goto LAB_180006eae;
  } while( true );
}



// ============================================================
// INDEX: 12/133
// FUNCTION: DisableAllInputs
// ENTRY: 18000b750
// RVA: 0xB750
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void DisableAllInputs(bool param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl rage::UIInput::DisableAllInputs(bool) */

void __cdecl rage::UIInput::DisableAllInputs(bool param_1)

{
  LPVOID lpAddress;
  undefined1 auStack_38 [32];
  DWORD local_18 [2];
  ulonglong local_10;
  
                    /* 0xb750  45  ?DisableAllInputs@UIInput@rage@@SAX_N@Z */
  lpAddress = DAT_18001b298;
  local_10 = DAT_180019240 ^ (ulonglong)auStack_38;
  if (DAT_18001b298 != (LPVOID)0x0) {
    VirtualProtect(DAT_18001b298,1,0x40,local_18);
    *(bool *)lpAddress = param_1;
    VirtualProtect(lpAddress,1,local_18[0],local_18);
  }
  return;
}



// ============================================================
// INDEX: 13/133
// FUNCTION: FUN_18000d2f8
// ENTRY: 18000d2f8
// RVA: 0xD2F8
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_18000d2f8(ulonglong param_1, int param_2)
// ============================================================

undefined8 FUN_18000d2f8(ulonglong param_1,int param_2)

{
  SIZE_T dwSize;
  undefined4 *puVar1;
  BOOL BVar2;
  undefined8 uVar3;
  HANDLE hProcess;
  undefined4 *lpAddress;
  undefined8 *puVar4;
  undefined4 *lpAddress_00;
  byte bVar5;
  DWORD local_res8 [2];
  
  puVar4 = (undefined8 *)((param_1 & 0xffffffff) * 0x38 + DAT_18001b2d0);
  puVar1 = (undefined4 *)*puVar4;
  bVar5 = *(byte *)(puVar4 + 4) & 1;
  lpAddress_00 = puVar1;
  if (bVar5 != 0) {
    lpAddress_00 = (undefined4 *)((longlong)puVar1 + -5);
  }
  lpAddress = (undefined4 *)((longlong)puVar1 + -5);
  if (bVar5 == 0) {
    lpAddress = puVar1;
  }
  dwSize = (ulonglong)bVar5 * 2 + 5;
  BVar2 = VirtualProtect(lpAddress,dwSize,0x40,local_res8);
  if (BVar2 == 0) {
    uVar3 = 10;
  }
  else {
    if (param_2 == 0) {
      bVar5 = *(byte *)(puVar4 + 4);
      *lpAddress_00 = *(undefined4 *)(puVar4 + 3);
      if ((bVar5 & 1) == 0) {
        *(undefined1 *)(lpAddress_00 + 1) = *(undefined1 *)((longlong)puVar4 + 0x1c);
      }
      else {
        *(undefined2 *)(lpAddress_00 + 1) = *(undefined2 *)((longlong)puVar4 + 0x1c);
        *(undefined1 *)((longlong)lpAddress_00 + 6) = *(undefined1 *)((longlong)puVar4 + 0x1e);
      }
    }
    else {
      *(undefined1 *)lpAddress_00 = 0xe9;
      *(int *)((longlong)lpAddress_00 + 1) = (*(int *)(puVar4 + 1) - (int)lpAddress_00) + -5;
      if ((*(byte *)(puVar4 + 4) & 1) != 0) {
        *(undefined2 *)*puVar4 = 0xf9eb;
      }
    }
    VirtualProtect(lpAddress_00,dwSize,local_res8[0],local_res8);
    hProcess = GetCurrentProcess();
    FlushInstructionCache(hProcess,lpAddress_00,dwSize);
    *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xfd;
    bVar5 = (byte)param_2 & 1;
    *(byte *)(puVar4 + 4) = bVar5 * '\x02' | *(byte *)(puVar4 + 4) & 0xfb | bVar5 << 2;
    uVar3 = 0;
  }
  return uVar3;
}



// ============================================================
// INDEX: 14/133
// FUNCTION: FUN_18000d44c
// ENTRY: 18000d44c
// RVA: 0xD44C
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined FUN_18000d44c(longlong * param_1, uint param_2, int param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000d44c(longlong *param_1,uint param_2,int param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE pvVar4;
  LPVOID lpMem;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  DWORD64 DVar8;
  DWORD64 *pDVar9;
  ulonglong uVar10;
  uint uVar11;
  DWORD64 DVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined1 auStack_548 [32];
  uint local_528 [2];
  DWORD local_520;
  DWORD local_51c;
  _CONTEXT local_508;
  ulonglong local_38;
  
  local_38 = DAT_180019240 ^ (ulonglong)auStack_548;
  uVar10 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pvVar4 = (HANDLE)CreateToolhelp32Snapshot(4);
  if (pvVar4 != (HANDLE)0xffffffffffffffff) {
    local_528[0] = 0x1c;
    iVar1 = Thread32First(pvVar4,local_528);
    while (iVar1 != 0) {
      if (((0xf < local_528[0]) && (DVar2 = GetCurrentProcessId(), local_51c == DVar2)) &&
         (DVar2 = GetCurrentThreadId(), local_520 != DVar2)) {
        lpMem = (LPVOID)*param_1;
        if (lpMem == (LPVOID)0x0) {
          *(undefined4 *)(param_1 + 1) = 0x80;
          lpMem = HeapAlloc(DAT_18001a9e8,0,0x200);
          *param_1 = (longlong)lpMem;
          if (lpMem == (LPVOID)0x0) break;
        }
        else if (*(uint *)(param_1 + 1) <= *(uint *)((longlong)param_1 + 0xc)) {
          lpMem = HeapReAlloc(DAT_18001a9e8,0,lpMem,(ulonglong)(*(uint *)(param_1 + 1) * 2) << 2);
          if (lpMem == (LPVOID)0x0) break;
          *param_1 = (longlong)lpMem;
          *(int *)(param_1 + 1) = (int)param_1[1] * 2;
        }
        *(DWORD *)((longlong)lpMem + (ulonglong)*(uint *)((longlong)param_1 + 0xc) * 4) = local_520;
        *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
      }
      local_528[0] = 0x1c;
      iVar1 = Thread32Next(pvVar4,local_528);
    }
    CloseHandle(pvVar4);
  }
  if ((*param_1 != 0) && (*(int *)((longlong)param_1 + 0xc) != 0)) {
    do {
      uVar14 = 0;
      pvVar4 = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar10 * 4));
      if (pvVar4 != (HANDLE)0x0) {
        SuspendThread(pvVar4);
        local_508.ContextFlags = 0x100001;
        BVar3 = GetThreadContext(pvVar4,&local_508);
        if (BVar3 != 0) {
          uVar11 = DAT_18001b2dc;
          if (param_2 != 0xffffffff) {
            uVar11 = param_2 + 1;
            uVar14 = (ulonglong)param_2;
          }
          if ((uint)uVar14 < uVar11) {
            lVar13 = uVar14 * 0x38;
            uVar14 = (ulonglong)(uVar11 - (uint)uVar14);
            DVar12 = local_508.Rip;
            do {
              pDVar9 = (DWORD64 *)(DAT_18001b2d0 + lVar13);
              if (param_3 == 0) {
                bVar5 = 0;
              }
              else if (param_3 == 1) {
                bVar5 = 1;
              }
              else {
                bVar5 = (byte)pDVar9[4] >> 2 & 1;
              }
              if (((byte)pDVar9[4] >> 1 & 1) != bVar5) {
                if (bVar5 == 0) {
                  if ((((byte)pDVar9[4] & 1) == 0) || (DVar8 = *pDVar9, DVar12 != DVar8 - 5)) {
                    uVar7 = 0;
                    uVar11 = *(uint *)((longlong)pDVar9 + 0x24) & 0xf;
                    if (uVar11 != 0) {
                      do {
                        if (DVar12 == (ulonglong)*(byte *)((longlong)pDVar9 + uVar7 + 0x30) +
                                      pDVar9[2]) {
                          DVar8 = (ulonglong)*(byte *)(uVar7 + 0x28 + (longlong)pDVar9) + *pDVar9;
                          goto LAB_18000d66f;
                        }
                        uVar6 = (int)uVar7 + 1;
                        uVar7 = (ulonglong)uVar6;
                      } while (uVar6 < uVar11);
                    }
                    if (DVar12 != pDVar9[1]) goto LAB_18000d66d;
                    DVar8 = *pDVar9;
                  }
                }
                else {
                  uVar7 = 0;
                  uVar11 = *(uint *)((longlong)pDVar9 + 0x24) & 0xf;
                  if (uVar11 != 0) {
                    do {
                      if (DVar12 == (ulonglong)*(byte *)((longlong)pDVar9 + uVar7 + 0x28) + *pDVar9)
                      {
                        DVar8 = (ulonglong)*(byte *)(uVar7 + 0x30 + (longlong)pDVar9) + pDVar9[2];
                        goto LAB_18000d66f;
                      }
                      uVar6 = (int)uVar7 + 1;
                      uVar7 = (ulonglong)uVar6;
                    } while (uVar6 < uVar11);
                  }
LAB_18000d66d:
                  DVar8 = 0;
                }
LAB_18000d66f:
                if (DVar8 != 0) {
                  local_508.Rip = DVar8;
                  SetThreadContext(pvVar4,&local_508);
                  DVar12 = local_508.Rip;
                }
              }
              lVar13 = lVar13 + 0x38;
              uVar14 = uVar14 - 1;
            } while (uVar14 != 0);
          }
        }
        CloseHandle(pvVar4);
      }
      uVar11 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar11;
    } while (uVar11 < *(uint *)((longlong)param_1 + 0xc));
  }
  return;
}



// ============================================================
// INDEX: 15/133
// FUNCTION: FUN_18000da28
// ENTRY: 18000da28
// RVA: 0xDA28
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined FUN_18000da28(longlong * param_1)
// ============================================================

void FUN_18000da28(longlong *param_1)

{
  HANDLE hThread;
  uint uVar1;
  ulonglong uVar2;
  LPVOID lpMem;
  
  lpMem = (LPVOID)*param_1;
  if (lpMem != (LPVOID)0x0) {
    uVar2 = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      do {
        hThread = OpenThread(0x5a,0,*(DWORD *)(*param_1 + uVar2 * 4));
        if (hThread != (HANDLE)0x0) {
          ResumeThread(hThread);
          CloseHandle(hThread);
        }
        uVar1 = (int)uVar2 + 1;
        uVar2 = (ulonglong)uVar1;
      } while (uVar1 < *(uint *)((longlong)param_1 + 0xc));
      lpMem = (LPVOID)*param_1;
    }
    HeapFree(DAT_18001a9e8,0,lpMem);
  }
  return;
}



// ============================================================
// INDEX: 16/133
// FUNCTION: FUN_18000db2c
// ENTRY: 18000db2c
// RVA: 0xDB2C
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 * FUN_18000db2c(undefined8 * param_1)
// ============================================================

undefined8 * FUN_18000db2c(undefined8 *param_1)

{
  DWORD DVar1;
  undefined8 *puVar2;
  SIZE_T SVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 *lpAddress;
  ulonglong uVar7;
  PVOID pvVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  _SYSTEM_INFO local_78;
  _MEMORY_BASIC_INFORMATION local_48;
  PVOID pvVar6;
  
  GetSystemInfo(&local_78);
  puVar9 = local_78.lpMinimumApplicationAddress;
  if (((undefined8 *)0x40000000 < param_1) &&
     (local_78.lpMinimumApplicationAddress < param_1 + -0x8000000)) {
    puVar9 = param_1 + -0x8000000;
  }
  puVar10 = param_1 + 0x8000000;
  if (local_78.lpMaximumApplicationAddress <= param_1 + 0x8000000) {
    puVar10 = local_78.lpMaximumApplicationAddress;
  }
  puVar10 = (undefined8 *)((longlong)puVar10 - 0xfff);
  for (puVar5 = DAT_18001b2c0; puVar2 = (undefined8 *)0x0, lpAddress = param_1,
      puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
    if (((puVar9 <= puVar5) && (puVar5 < puVar10)) && (puVar5[1] != 0)) {
      return puVar5;
    }
  }
  do {
    if (lpAddress < puVar9) goto LAB_18000dcbc;
    pvVar8 = (PVOID)(ulonglong)local_78.dwAllocationGranularity;
    pvVar6 = (PVOID)((longlong)lpAddress - (ulonglong)lpAddress % (ulonglong)pvVar8);
    do {
      lpAddress = (undefined8 *)((longlong)pvVar6 - (longlong)pvVar8);
      if ((lpAddress < puVar9) || (SVar3 = VirtualQuery(lpAddress,&local_48,0x30), SVar3 == 0))
      break;
      if (local_48.State == 0x10000) goto LAB_18000dc00;
      pvVar6 = local_48.AllocationBase;
    } while (pvVar8 <= local_48.AllocationBase);
    lpAddress = (undefined8 *)0x0;
LAB_18000dc00:
    if (lpAddress == (undefined8 *)0x0) goto LAB_18000dcbc;
    puVar2 = VirtualAlloc(lpAddress,0x1000,0x3000,0x40);
  } while (puVar2 == (undefined8 *)0x0);
LAB_18000dcc9:
  puVar2[1] = 0;
  *(undefined4 *)(puVar2 + 2) = 0;
  uVar4 = 0x40;
  puVar9 = puVar2;
  do {
    puVar9 = puVar9 + 8;
    uVar4 = uVar4 + 0x40;
    *puVar9 = puVar2[1];
    puVar2[1] = puVar9;
  } while (uVar4 < 0xfc1);
  *puVar2 = DAT_18001b2c0;
  DAT_18001b2c0 = puVar2;
  return puVar2;
LAB_18000dcbc:
  while (DVar1 = local_78.dwAllocationGranularity, puVar2 == (undefined8 *)0x0) {
    if (puVar10 < param_1) {
      return (undefined8 *)0x0;
    }
    uVar4 = (ulonglong)local_78.dwAllocationGranularity;
    param_1 = (undefined8 *)
              (((ulonglong)local_78.dwAllocationGranularity - (ulonglong)param_1 % uVar4) +
              (longlong)param_1);
    while ((param_1 <= puVar10 && (SVar3 = VirtualQuery(param_1,&local_48,0x30), SVar3 != 0))) {
      if (local_48.State == 0x10000) goto LAB_18000dc97;
      uVar7 = (DVar1 - 1) + local_48.RegionSize + (longlong)local_48.BaseAddress;
      param_1 = (undefined8 *)(uVar7 - uVar7 % uVar4);
    }
    param_1 = (undefined8 *)0x0;
LAB_18000dc97:
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar2 = VirtualAlloc(param_1,0x1000,0x3000,0x40);
  }
  goto LAB_18000dcc9;
}



// ============================================================
// INDEX: 17/133
// FUNCTION: __std_fs_convert_narrow_to_wide
// ENTRY: 18000e8c4
// RVA: 0xE8C4
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 __std_fs_convert_narrow_to_wide(UINT param_1, LPCSTR param_2, int param_3, LPWSTR param_4, int param_5)
// ============================================================

/* Library Function - Single Match
    __std_fs_convert_narrow_to_wide
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__std_fs_convert_narrow_to_wide(UINT param_1,LPCSTR param_2,int param_3,LPWSTR param_4,int param_5)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = MultiByteToWideChar(param_1,8,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  return CONCAT44(uStack_14,iVar1);
}



// ============================================================
// INDEX: 18/133
// FUNCTION: __std_fs_convert_wide_to_narrow
// ENTRY: 18000e90c
// RVA: 0xE90C
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 __std_fs_convert_wide_to_narrow(UINT param_1, LPCWSTR param_2, int param_3, LPSTR param_4, int param_5)
// ============================================================

/* Library Function - Single Match
    __std_fs_convert_wide_to_narrow
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

undefined8
__std_fs_convert_wide_to_narrow(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  BOOL local_res8 [2];
  int local_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    local_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   (LPBOOL)0x0);
  }
  else {
    local_res8[0] = 0;
    local_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                   local_res8);
    if (local_res8[0] != 0) {
      local_28 = 0;
      DStack_24 = 0x459;
      goto LAB_18000ea12;
    }
  }
  if (local_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    local_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_18000ea12:
  return CONCAT44(DStack_24,local_28);
}



// ============================================================
// INDEX: 19/133
// FUNCTION: FUN_18000ea30
// ENTRY: 18000ea30
// RVA: 0xEA30
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_18000ea30(UINT param_1, LPCWSTR param_2, int param_3, LPSTR param_4, int param_5)
// ============================================================

undefined8 FUN_18000ea30(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                 (LPBOOL)0x0);
  if (local_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  if (uStack_14 == 0x3ec) {
    local_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,(LPBOOL)0x0
                                  );
    if (local_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = 0;
    }
  }
  return CONCAT44(uStack_14,local_18);
}



// ============================================================
// INDEX: 20/133
// FUNCTION: FUN_18000eafc
// ENTRY: 18000eafc
// RVA: 0xEAFC
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: DWORD FUN_18000eafc(LPCWSTR param_1, ulonglong * param_2, uint param_3, uint param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

DWORD FUN_18000eafc(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c8 [32];
  undefined8 local_2a8;
  uint local_2a0 [2];
  ulonglong local_298;
  undefined4 local_290;
  uint local_28c;
  DWORD DStack_288;
  DWORD local_284;
  uint local_280;
  _WIN32_FIND_DATAW local_278;
  ulonglong local_28;
  
  local_28 = DAT_180019240 ^ (ulonglong)auStack_2c8;
  uVar4 = param_3 & 0xfffffffe;
  if (((param_3 & 1) != 0) && ((param_3 >> 2 & 1) != 0)) {
    return 0x57;
  }
  if ((((param_3 >> 1 & 1) != 0) && (param_4 != 0xffffffff)) &&
     (((param_4 >> 10 & 1) == 0 || ((param_3 & 1) == 0)))) {
    uVar4 = param_3 & 0xfffffffc;
    *(uint *)(param_2 + 2) = param_4;
  }
  if (uVar4 != 0) {
    if (((uVar4 & 0x2a) != 0) &&
       (((param_4 == 0xffffffff || ((param_4 >> 10 & 1) == 0)) || ((param_3 & 1) == 0)))) {
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,local_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) {
          return DVar2;
        }
        pvVar3 = FindFirstFileW(param_1,&local_278);
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          DVar2 = GetLastError();
          return DVar2;
        }
        FindClose(pvVar3);
        local_28c = local_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = local_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        local_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        local_278.ftLastWriteTime.dwLowDateTime = local_28c;
        local_278.dwFileAttributes = local_2a0[0];
        local_278.nFileSizeHigh = local_284;
        local_278.nFileSizeLow = local_280;
      }
      if (((param_3 & 1) == 0) || ((local_278.dwFileAttributes >> 10 & 1) == 0)) {
        *(DWORD *)(param_2 + 2) = local_278.dwFileAttributes;
        param_2[1] = CONCAT44(local_278.nFileSizeHigh,local_278.nFileSizeLow);
        *param_2 = (ulonglong)local_278.ftLastWriteTime & 0xffffffff00000000 | (ulonglong)local_28c;
        uVar4 = uVar4 & 0xffffffd5;
        if (uVar4 == 0) {
          return 0;
        }
      }
    }
    DVar2 = __std_fs_open_handle
                      (&local_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (DVar2 == 0) {
      pvVar3 = (HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8);
      uVar5 = uVar4;
      if ((uVar4 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,local_2a0,0x28);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar4 & 0xffffffdd;
        *param_2 = CONCAT44(local_28c,local_290);
        *(uint *)(param_2 + 2) = local_280;
        if ((uVar5 >> 2 & 1) != 0) {
          if ((local_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&local_2a8,8);
            if (BVar1 == 0) {
              DVar2 = GetLastError();
              if (pvVar3 == (HANDLE)0xffffffffffffffff) {
                return DVar2;
              }
              BVar1 = CloseHandle(pvVar3);
              if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
                abort();
              }
              return DVar2;
            }
            *(undefined4 *)((longlong)param_2 + 0x14) = local_2a8._4_4_;
          }
          uVar5 = uVar4 & 0xffffffd9;
        }
      }
      if ((uVar5 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,local_2a0,0x18);
        if (BVar1 == 0) {
          DVar2 = GetLastError();
          if (pvVar3 == (HANDLE)0xffffffffffffffff) {
            return DVar2;
          }
          BVar1 = CloseHandle(pvVar3);
          if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
            abort();
          }
          return DVar2;
        }
        uVar5 = uVar5 & 0xffffffe7;
        param_2[1] = local_298;
        *(undefined4 *)(param_2 + 3) = local_290;
      }
      if (uVar5 == 0) {
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          return 0;
        }
        BVar1 = CloseHandle(pvVar3);
        if (BVar1 != 0) {
          return 0;
        }
      }
      else if ((pvVar3 == (HANDLE)0xffffffffffffffff) || (BVar1 = CloseHandle(pvVar3), BVar1 != 0))
      {
        return 0x32;
      }
    }
    else {
      if ((HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8) == (HANDLE)0xffffffffffffffff) {
        return DVar2;
      }
      BVar1 = CloseHandle((HANDLE)CONCAT44(local_2a8._4_4_,(undefined4)local_2a8));
      if (BVar1 != 0) {
        return DVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    abort();
  }
  return 0;
}



// ============================================================
// INDEX: 21/133
// FUNCTION: FUN_180010294
// ENTRY: 180010294
// RVA: 0x10294
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_180010294(undefined8 param_1, longlong param_2)
// ============================================================

undefined8 FUN_180010294(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x30) + 4) +
             (longlong)*(longlong **)(param_2 + 0x30)),4,true);
  return 0;
}



// ============================================================
// INDEX: 22/133
// FUNCTION: PostLoad
// ENTRY: 180001fe0
// RVA: 0x1FE0
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(globalBase * this)
// ============================================================

/* public: virtual void __cdecl rage::globalBase::PostLoad(void) __ptr64 */

void __thiscall rage::globalBase::PostLoad(globalBase *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x1fe0  72  ?PostLoad@globalBase@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "globalBase";
  local_60 = "E8 ? ? ? ? EB 0D BA ? ? ? ? 48 8B CB E8 ? ? ? ? 48 83 3D ? ? ? ? ? 74 21";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::globalBase::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 23/133
// FUNCTION: PostLoad
// ENTRY: 180003ce0
// RVA: 0x3CE0
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(gohObjectManager * this)
// ============================================================

/* public: virtual void __cdecl rage::gohObjectManager::PostLoad(void) __ptr64 */

void __thiscall rage::gohObjectManager::PostLoad(gohObjectManager *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x3ce0  73  ?PostLoad@gohObjectManager@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::aGuidGohBase::sm_ManagerSlots";
  local_60 = 
  "4C 8B 05 ? ? ? ? 0F B7 D1 8B C2 C1 E9 10 48 03 C0 66 41 39 4C C0 ? 75 50 48 03 D2 49 8B 14 D0";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::gohObjectManager::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 24/133
// FUNCTION: PreLoad
// ENTRY: 180003da0
// RVA: 0x3DA0
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PreLoad(Patches * this)
// ============================================================

/* public: virtual void __cdecl Patches::PreLoad(void) __ptr64 */

void __thiscall Patches::PreLoad(Patches *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x3da0  78  ?PreLoad@Patches@@UEAAXXZ */
  local_58 = 0;
  local_68 = "patch_SkipLogos";
  local_60 = "E8 ? ? ? ? 48 39 3D ? ? ? ? 0F 85 ? ? ? ? E8 ? ? ? ? 8B 0D ? ? ? ?";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_Patches::PreLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 25/133
// FUNCTION: PreLoad
// ENTRY: 180003e50
// RVA: 0x3E50
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PreLoad(ioMouse * this)
// ============================================================

/* public: virtual void __cdecl rage::ioMouse::PreLoad(void) __ptr64 */

void __thiscall rage::ioMouse::PreLoad(ioMouse *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x3e50  82  ?PreLoad@ioMouse@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::ioMouse::sm_DisableCursorAlteration";
  local_60 = "0F B6 0D ? ? ? ? 84 C9";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::ioMouse::PreLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioMouse::UnlockAndShowCursor";
  local_60 = "40 53 48 83 EC 20 0F B6 D9 0F B6 0D ? ? ? ?";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::ioMouse::PreLoad(void)___ptr64'::`2'::<lambda_2>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 26/133
// FUNCTION: PreLoad
// ENTRY: 180003f80
// RVA: 0x3F80
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PreLoad(game * this)
// ============================================================

/* public: virtual void __cdecl rdr2scripting::game::PreLoad(void) __ptr64 */

void __thiscall rdr2scripting::game::PreLoad(game *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x3f80  80  ?PreLoad@game@rdr2scripting@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rdr2scripting::game::_GameState";
  local_60 = "8B 05 ? ? ? ? 8D 48 FD";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rdr2scripting::game::PreLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 27/133
// FUNCTION: PreLoad
// ENTRY: 180004040
// RVA: 0x4040
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PreLoad(grcDevice * this)
// ============================================================

/* public: virtual void __cdecl rage::grcDevice::PreLoad(void) __ptr64 */

void __thiscall rage::grcDevice::PreLoad(grcDevice *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x4040  81  ?PreLoad@grcDevice@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::grcDevice::sm_FrameCounter";
  local_60 = "FF 05 ? ? ? ? 48 8D 15 ? ? ? ?";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::grcDevice::PreLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 28/133
// FUNCTION: PostLoad
// ENTRY: 180004100
// RVA: 0x4100
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(ioKeyboard * this)
// ============================================================

/* public: virtual void __cdecl rage::ioKeyboard::PostLoad(void) __ptr64 */

void __thiscall rage::ioKeyboard::PostLoad(ioKeyboard *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0x4100  74  ?PostLoad@ioKeyboard@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyDown";
  local_60 = "48 8D 05 ? ? ? ? 48 89 74 24 ? 48 8D 4C 24 ? 48 89 44 24 ? 48 89 4C 24 ?";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyPressed";
  local_60 = "48 8D 05 ? ? ? ? 48 89 75 80";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::`2'::<lambda_2>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  local_58 = 0;
  local_68 = "rage::ioKeyboard::KeyReleased";
  local_60 = "48 8D 05 ? ? ? ? 48 89 4D F8";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::ioKeyboard::PostLoad(void)___ptr64'::`2'::<lambda_3>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
    (*scrThread::s_RegisterCommand)((void *)0x0,0xac93d58a,FUN_180004260);
    if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0)
    {
      (*scrThread::s_RegisterCommand)((void *)0x0,0x6afb8eb9,FUN_1800042a0);
      if (scrThread::s_RegisterCommand !=
          (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
        (*scrThread::s_RegisterCommand)((void *)0x0,0x21b6eb31,FUN_1800042e0);
      }
    }
  }
  return;
}



// ============================================================
// INDEX: 29/133
// FUNCTION: Unload
// ENTRY: 1800085d0
// RVA: 0x85D0
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void Unload(scrThread * this)
// ============================================================

/* public: virtual void __cdecl rage::scrThread::Unload(void) __ptr64 */

void __thiscall rage::scrThread::Unload(scrThread *this)

{
  _func_void *p_Var1;
  void *pvVar2;
  
                    /* 0x85d0  87  ?Unload@scrThread@rage@@UEAAXXZ */
  pvVar2 = s_Wait;
  FUN_18000d8e0((longlong)s_Wait);
  FUN_18000d950((longlong)pvVar2);
  pvVar2 = s_FullReadPath;
  FUN_18000d8e0((longlong)s_FullReadPath);
  FUN_18000d950((longlong)pvVar2);
  p_Var1 = s_QuitGame;
  FUN_18000d8e0((longlong)s_QuitGame);
  FUN_18000d950((longlong)p_Var1);
  FUN_1800045d0(0x1800192e0);
  return;
}



// ============================================================
// INDEX: 30/133
// FUNCTION: PostLoad
// ENTRY: 18000b630
// RVA: 0xB630
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(sagActorManager * this)
// ============================================================

/* public: virtual void __cdecl rage::sagActorManager::PostLoad(void) __ptr64 */

void __thiscall rage::sagActorManager::PostLoad(sagActorManager *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0xb630  75  ?PostLoad@sagActorManager@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::aGuidGeneral::sm_ManagerSlots";
  local_60 = 
  "48 8B 05 ? ? ? ? 0F B7 CA 48 03 C9 C1 EA 10 66 39 54 C8 ? 75 03 B0 01 C3 32 C0 C3 CC 48 89 5C 24 ?"
  ;
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::sagActorManager::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 31/133
// FUNCTION: PreLoad
// ENTRY: 18000b6f0
// RVA: 0xB6F0
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PreLoad(UIInput * this)
// ============================================================

/* public: virtual void __cdecl rage::UIInput::PreLoad(void) __ptr64 */

void __thiscall rage::UIInput::PreLoad(UIInput *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0xb6f0  79  ?PreLoad@UIInput@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::UIInput::sm_DisableAllInputs";
  local_60 = "48 83 BB ? ? ? ? ? 74 5A";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::UIInput::PreLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 32/133
// FUNCTION: PostLoad
// ENTRY: 18000be90
// RVA: 0xBE90
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(sagPlayerMgr * this)
// ============================================================

/* public: virtual void __cdecl rage::sagPlayerMgr::PostLoad(void) __ptr64 */

void __thiscall rage::sagPlayerMgr::PostLoad(sagPlayerMgr *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0xbe90  76  ?PostLoad@sagPlayerMgr@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::sagPlayer::sm_LocalPlayer";
  local_60 = "48 89 15 ? ? ? ? E9 ? ? ? ?";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::sagPlayerMgr::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  return;
}



// ============================================================
// INDEX: 33/133
// FUNCTION: PostLoad
// ENTRY: 18000c060
// RVA: 0xC060
// PRIORITY: 55
// SEED TYPE: NAME
// SIGNATURE: void PostLoad(UIStringTable * this)
// ============================================================

/* public: virtual void __cdecl rage::UIStringTable::PostLoad(void) __ptr64 */

void __thiscall rage::UIStringTable::PostLoad(UIStringTable *this)

{
  char *local_68;
  char *local_60;
  undefined8 local_58;
  undefined **local_50 [7];
  undefined ***local_18;
  
                    /* 0xc060  71  ?PostLoad@UIStringTable@rage@@UEAAXXZ */
  local_58 = 0;
  local_68 = "rage::UIStringTable::GetStringByHash";
  local_60 = "E8 ? ? ? ? 48 8B 0B 48 89 01 48 83 C4 20 5B C3";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::UIStringTable::PostLoad(void)___ptr64'::`2'::<lambda_1>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,1);
  local_58 = 0;
  local_68 = "rage::UIStringTable::SetString";
  local_60 = "E8 ? ? ? ? 48 85 F6 74 25";
  local_50[0] = std::
                _Func_impl_no_alloc<`public:_virtual_void___cdecl_rage::UIStringTable::PostLoad(void)___ptr64'::`2'::<lambda_2>,void,Pattern_const&___ptr64>
                ::vftable;
  local_18 = local_50;
  FUN_180001820(&local_68,(longlong *)local_50,0);
  if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0) {
    (*scrThread::s_RegisterCommand)((void *)0x0,0x5d425448,FUN_18000c230);
    if (scrThread::s_RegisterCommand != (_func_bool_void_ptr_uint__func_void_InfoBase_ptr_ptr *)0x0)
    {
      (*scrThread::s_RegisterCommand)((void *)0x0,0x9173f8fe,FUN_18000c2c0);
    }
  }
  return;
}



// ============================================================
// INDEX: 34/133
// FUNCTION: GetModuleFileNameA
// ENTRY: EXTERNAL:00000007
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000007: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 35/133
// FUNCTION: CreateFileW
// ENTRY: EXTERNAL:0000001e
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE CreateFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000001e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 36/133
// FUNCTION: FindFirstFileW
// ENTRY: EXTERNAL:00000022
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000022: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 37/133
// FUNCTION: GetFileAttributesExW
// ENTRY: EXTERNAL:0000002f
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL GetFileAttributesExW(LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000002f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 38/133
// FUNCTION: GetFileInformationByHandleEx
// ENTRY: EXTERNAL:00000033
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL GetFileInformationByHandleEx(HANDLE hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, LPVOID lpFileInformation, DWORD dwBufferSize)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000033: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 39/133
// FUNCTION: Print
// ENTRY: EXTERNAL:00000001
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void Print(LogType param_1, char * param_2, char * param_3, ...)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000001: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 40/133
// FUNCTION: GetCurrentProcess
// ENTRY: EXTERNAL:00000004
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE GetCurrentProcess(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000004: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 41/133
// FUNCTION: K32GetModuleInformation
// ENTRY: EXTERNAL:00000005
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined K32GetModuleInformation(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000005: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 42/133
// FUNCTION: GetModuleHandleW
// ENTRY: EXTERNAL:00000006
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: HMODULE GetModuleHandleW(LPCWSTR lpModuleName)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000006: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 43/133
// FUNCTION: Sleep
// ENTRY: EXTERNAL:00000008
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void Sleep(DWORD dwMilliseconds)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000008: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 44/133
// FUNCTION: VirtualProtect
// ENTRY: EXTERNAL:00000009
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL VirtualProtect(LPVOID lpAddress, SIZE_T dwSize, DWORD flNewProtect, PDWORD lpflOldProtect)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000009: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 45/133
// FUNCTION: CloseHandle
// ENTRY: EXTERNAL:0000000a
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL CloseHandle(HANDLE hObject)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 46/133
// FUNCTION: HeapAlloc
// ENTRY: EXTERNAL:0000000c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: LPVOID HeapAlloc(HANDLE hHeap, DWORD dwFlags, SIZE_T dwBytes)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 47/133
// FUNCTION: HeapReAlloc
// ENTRY: EXTERNAL:0000000d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: LPVOID HeapReAlloc(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem, SIZE_T dwBytes)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 48/133
// FUNCTION: HeapFree
// ENTRY: EXTERNAL:0000000e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL HeapFree(HANDLE hHeap, DWORD dwFlags, LPVOID lpMem)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 49/133
// FUNCTION: GetCurrentProcessId
// ENTRY: EXTERNAL:0000000f
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetCurrentProcessId(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 50/133
// FUNCTION: GetCurrentThreadId
// ENTRY: EXTERNAL:00000010
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetCurrentThreadId(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000010: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 51/133
// FUNCTION: OpenThread
// ENTRY: EXTERNAL:00000011
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE OpenThread(DWORD dwDesiredAccess, BOOL bInheritHandle, DWORD dwThreadId)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000011: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 52/133
// FUNCTION: SuspendThread
// ENTRY: EXTERNAL:00000012
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD SuspendThread(HANDLE hThread)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000012: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 53/133
// FUNCTION: ResumeThread
// ENTRY: EXTERNAL:00000013
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD ResumeThread(HANDLE hThread)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000013: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 54/133
// FUNCTION: GetThreadContext
// ENTRY: EXTERNAL:00000014
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL GetThreadContext(HANDLE hThread, LPCONTEXT lpContext)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000014: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 55/133
// FUNCTION: SetThreadContext
// ENTRY: EXTERNAL:00000015
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL SetThreadContext(HANDLE hThread, CONTEXT * lpContext)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000015: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 56/133
// FUNCTION: FlushInstructionCache
// ENTRY: EXTERNAL:00000016
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL FlushInstructionCache(HANDLE hProcess, LPCVOID lpBaseAddress, SIZE_T dwSize)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000016: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 57/133
// FUNCTION: GetSystemInfo
// ENTRY: EXTERNAL:0000001a
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void GetSystemInfo(LPSYSTEM_INFO lpSystemInfo)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000001a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 58/133
// FUNCTION: VirtualAlloc
// ENTRY: EXTERNAL:0000001b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: LPVOID VirtualAlloc(LPVOID lpAddress, SIZE_T dwSize, DWORD flAllocationType, DWORD flProtect)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000001b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 59/133
// FUNCTION: VirtualQuery
// ENTRY: EXTERNAL:0000001d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: SIZE_T VirtualQuery(LPCVOID lpAddress, PMEMORY_BASIC_INFORMATION lpBuffer, SIZE_T dwLength)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000001d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 60/133
// FUNCTION: GetLastError
// ENTRY: EXTERNAL:00000031
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetLastError(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000031: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 61/133
// FUNCTION: FindClose
// ENTRY: EXTERNAL:00000032
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL FindClose(HANDLE hFindFile)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000032: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 62/133
// FUNCTION: MultiByteToWideChar
// ENTRY: EXTERNAL:00000034
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000034: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 63/133
// FUNCTION: WideCharToMultiByte
// ENTRY: EXTERNAL:00000035
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000035: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 64/133
// FUNCTION: operator_bool
// ENTRY: EXTERNAL:0000003b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: bool operator_bool(ios_base * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 65/133
// FUNCTION: getloc
// ENTRY: EXTERNAL:0000003c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: locale getloc(ios_base * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 66/133
// FUNCTION: operator>>
// ENTRY: EXTERNAL:0000003d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_istream<char,struct_std::char_traits<char>_> * operator>>(basic_istream<char,std::char_traits<char>_> * this, uint * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 67/133
// FUNCTION: operator>>
// ENTRY: EXTERNAL:0000003e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_istream<char,struct_std::char_traits<char>_> * operator>>(basic_istream<char,std::char_traits<char>_> * this, _func_ios_base_ptr_ios_base_ptr * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 68/133
// FUNCTION: ~basic_istream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000003f
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void ~basic_istream<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 69/133
// FUNCTION: ~basic_ios<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:00000040
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void ~basic_ios<char,std::char_traits<char>_>(basic_ios<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000040: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 70/133
// FUNCTION: basic_istream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000004a
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_istream<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> * this, basic_streambuf<char,std::char_traits<char>_> * param_1, bool param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 71/133
// FUNCTION: basic_ios<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000004b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_ios<char,std::char_traits<char>_>(basic_ios<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 72/133
// FUNCTION: basic_streambuf<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000004c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_streambuf<char,std::char_traits<char>_>(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 73/133
// FUNCTION: setstate
// ENTRY: EXTERNAL:0000004d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void setstate(basic_ios<char,std::char_traits<char>_> * this, int param_1, bool param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 74/133
// FUNCTION: sgetc
// ENTRY: EXTERNAL:0000004e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int sgetc(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 75/133
// FUNCTION: snextc
// ENTRY: EXTERNAL:0000004f
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int snextc(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 76/133
// FUNCTION: _Ipfx
// ENTRY: EXTERNAL:00000050
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: bool _Ipfx(basic_istream<char,std::char_traits<char>_> * this, bool param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000050: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 77/133
// FUNCTION: _Xbad_function_call
// ENTRY: EXTERNAL:00000053
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _Xbad_function_call(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000053: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 78/133
// FUNCTION: isxdigit
// ENTRY: EXTERNAL:0000006d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int isxdigit(int _C)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000006d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 79/133
// FUNCTION: _invalid_parameter_noinfo_noreturn
// ENTRY: EXTERNAL:00000070
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _invalid_parameter_noinfo_noreturn(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000070: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 80/133
// FUNCTION: abort
// ENTRY: EXTERNAL:0000007b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void abort(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000007b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 81/133
// FUNCTION: FUN_180001730
// ENTRY: 180001730
// RVA: 0x1730
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong FUN_180001730(longlong param_1)
// ============================================================

longlong FUN_180001730(longlong param_1)

{
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffff9ff | 0x800;
  return param_1;
}



// ============================================================
// INDEX: 82/133
// FUNCTION: FUN_180002650
// ENTRY: 180002650
// RVA: 0x2650
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180002650(basic_streambuf<char,std::char_traits<char>_> * param_1)
// ============================================================

void FUN_180002650(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  void *pvVar1;
  void *pvVar2;
  longlong lVar3;
  
  *(undefined ***)param_1 =
       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if (((byte)param_1[0x70] & 1) != 0) {
    if (**(longlong **)(param_1 + 0x40) == 0) {
      lVar3 = (longlong)**(int **)(param_1 + 0x50) + **(longlong **)(param_1 + 0x38);
    }
    else {
      lVar3 = (longlong)**(int **)(param_1 + 0x58) + **(longlong **)(param_1 + 0x40);
    }
    pvVar1 = (void *)**(longlong **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < (ulonglong)(lVar3 - (longlong)pvVar1)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001800026f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// ============================================================
// INDEX: 83/133
// FUNCTION: FUN_180002710
// ENTRY: 180002710
// RVA: 0x2710
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180002710(longlong * param_1)
// ============================================================

void FUN_180002710(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ============================================================
// INDEX: 84/133
// FUNCTION: FUN_180002890
// ENTRY: 180002890
// RVA: 0x2890
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180002890(longlong param_1, void * param_2, ulonglong param_3, uint param_4)
// ============================================================

void FUN_180002890(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  uint uVar4;
  void *_Dst;
  
  uVar4 = param_4 & 0xffffffdf;
  if (0x7fffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if ((param_3 == 0) || (((byte)uVar4 & 6) == 6)) {
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  else {
    if (param_3 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(param_3);
    }
    else {
      if (param_3 + 0x27 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800015b0();
      }
      lVar2 = FUN_18000eeb0(param_3 + 0x27);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (void *)(lVar2 + 0x27U & 0xffffffffffffffe0);
      *(longlong *)((longlong)_Dst - 8) = lVar2;
    }
    memcpy(_Dst,param_2,param_3);
    *(ulonglong *)(param_1 + 0x68) = (longlong)_Dst + param_3;
    if ((param_4 & 4) == 0) {
      **(undefined8 **)(param_1 + 0x18) = _Dst;
      **(undefined8 **)(param_1 + 0x38) = _Dst;
      **(int **)(param_1 + 0x50) = (int)((longlong)_Dst + param_3) - (int)_Dst;
    }
    if ((param_4 & 2) == 0) {
      pvVar1 = *(void **)(param_1 + 0x68);
      pvVar3 = pvVar1;
      if ((param_4 & 0x18) == 0) {
        pvVar3 = _Dst;
      }
      **(undefined8 **)(param_1 + 0x20) = _Dst;
      **(undefined8 **)(param_1 + 0x40) = pvVar3;
      **(int **)(param_1 + 0x58) = (int)pvVar1 - (int)pvVar3;
      if ((param_4 & 4) != 0) {
        **(undefined8 **)(param_1 + 0x18) = _Dst;
        **(undefined8 **)(param_1 + 0x38) = _Dst;
        **(undefined4 **)(param_1 + 0x50) = 0;
      }
    }
    uVar4 = uVar4 | 1;
  }
  *(uint *)(param_1 + 0x70) = uVar4;
  return;
}



// ============================================================
// INDEX: 85/133
// FUNCTION: FUN_1800029d0
// ENTRY: 1800029d0
// RVA: 0x29D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: facet * FUN_1800029d0(locale * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

facet * FUN_1800029d0(locale *param_1)

{
  longlong lVar1;
  __uint64 _Var2;
  _Locimp *p_Var3;
  facet *pfVar4;
  undefined1 auStack_48 [32];
  facet *local_28;
  _Lockit local_20 [8];
  facet *local_18;
  ulonglong local_10;
  
  local_10 = DAT_180019240 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_18001b000;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(lVar1 + 0x10));
    if (pfVar4 != (facet *)0x0) goto LAB_180002aa7;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_180002a5d:
    if (pfVar4 != (facet *)0x0) goto LAB_180002aa7;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(p_Var3 + 0x10));
      goto LAB_180002a5d;
    }
  }
  pfVar4 = local_28;
  if (local_28 == (facet *)0x0) {
    _Var2 = std::ctype<char>::_Getcat(&local_28,param_1);
    pfVar4 = local_28;
    if (_Var2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_1800016a0();
    }
    local_18 = local_28;
    FUN_18000e780(local_28);
    (**(code **)(*(longlong *)pfVar4 + 8))(pfVar4);
    DAT_18001b000 = local_28;
    pfVar4 = local_28;
  }
LAB_180002aa7:
  std::_Lockit::~_Lockit(local_20);
  return pfVar4;
}



// ============================================================
// INDEX: 86/133
// FUNCTION: FUN_180002cc0
// ENTRY: 180002cc0
// RVA: 0x2CC0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_180002cc0(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4)
// ============================================================

undefined8 *
FUN_180002cc0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  ulonglong uVar1;
  size_t _Size;
  ulonglong uVar2;
  void *_Src;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  void *_Dst;
  
  _Size = param_1[2];
  uVar5 = 0x7fffffffffffffff;
  if (_Size == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_180001650();
  }
  uVar2 = param_1[3];
  uVar4 = _Size + 1 | 0xf;
  if ((uVar4 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar5 = uVar4;
    if (uVar4 < uVar1) {
      uVar5 = uVar1;
    }
    uVar1 = uVar5 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar4 = uVar5 + 0x28;
        if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1800015b0();
        }
        goto LAB_180002d65;
      }
      _Dst = (void *)FUN_18000eeb0(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_180002d65:
    lVar3 = FUN_18000eeb0(uVar4);
    if (lVar3 == 0) goto LAB_180002de0;
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
  param_1[2] = _Size + 1;
  param_1[3] = uVar5;
  if (uVar2 < 0x10) {
    memcpy(_Dst,param_1,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined1 *)(_Size + 1 + (longlong)_Dst) = 0;
  }
  else {
    _Src = (void *)*param_1;
    memcpy(_Dst,_Src,_Size);
    *(undefined1 *)(_Size + (longlong)_Dst) = param_4;
    *(undefined1 *)(_Size + 1 + (longlong)_Dst) = 0;
    pvVar6 = _Src;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)_Src + -8),
       0x1f < (ulonglong)((longlong)_Src + (-8 - (longlong)pvVar6)))) {
LAB_180002de0:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



// ============================================================
// INDEX: 87/133
// FUNCTION: FUN_180002e30
// ENTRY: 180002e30
// RVA: 0x2E30
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180002e30(undefined8 * param_1, void * param_2, size_t param_3)
// ============================================================

void FUN_180002e30(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001650();
  }
  if (param_3 < 0x10) {
    param_1[2] = param_3;
    param_1[3] = 0xf;
    memcpy(param_1,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)param_1) = 0;
    return;
  }
  uVar2 = param_3 | 0xf;
  if (uVar2 < 0x8000000000000000) {
    if (uVar2 < 0x16) {
      uVar2 = 0x16;
    }
    uVar1 = uVar2 + 1;
    if (uVar1 == 0) {
      _Dst = (void *)0x0;
      goto LAB_180002ef5;
    }
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(uVar1);
      goto LAB_180002ef5;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800015b0();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_18000eeb0(uVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_180002ef5:
  *param_1 = _Dst;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  return;
}



// ============================================================
// INDEX: 88/133
// FUNCTION: FUN_180002fb0
// ENTRY: 180002fb0
// RVA: 0x2FB0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_180002fb0(longlong * param_1, void * param_2, undefined1 * param_3)
// ============================================================

undefined1 * FUN_180002fb0(longlong *param_1,void *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  void *pvVar3;
  code *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *_Dst;
  void *pvVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  size_t _Size;
  undefined1 *puVar10;
  
  lVar2 = *param_1;
  uVar9 = 0x7fffffffffffffff;
  if (param_1[1] - lVar2 == 0x7fffffffffffffff) {
    FUN_180003190();
    pcVar4 = (code *)swi(3);
    puVar8 = (undefined1 *)(*pcVar4)();
    return puVar8;
  }
  uVar6 = param_1[2] - lVar2;
  uVar1 = (param_1[1] - lVar2) + 1;
  if (0x7fffffffffffffff - (uVar6 >> 1) < uVar6) {
    uVar6 = 0x8000000000000026;
LAB_18000301e:
    lVar5 = FUN_18000eeb0(uVar6);
    if (lVar5 == 0) goto LAB_180003118;
    puVar8 = (undefined1 *)(lVar5 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar8 + -8) = lVar5;
  }
  else {
    uVar6 = (uVar6 >> 1) + uVar6;
    uVar9 = uVar1;
    if (uVar1 <= uVar6) {
      uVar9 = uVar6;
    }
    if (uVar9 == 0) {
      puVar8 = (undefined1 *)0x0;
    }
    else {
      if (0xfff < uVar9) {
        uVar6 = uVar9 + 0x27;
        if (uVar6 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_1800015b0();
        }
        goto LAB_18000301e;
      }
      puVar8 = (undefined1 *)FUN_18000eeb0(uVar9);
    }
  }
  puVar10 = puVar8 + ((longlong)param_2 - lVar2);
  *puVar10 = *param_3;
  pvVar3 = (void *)*param_1;
  if (param_2 == (void *)param_1[1]) {
    _Size = param_1[1] - (longlong)pvVar3;
    _Dst = puVar8;
    param_2 = pvVar3;
  }
  else {
    memmove(puVar8,pvVar3,(longlong)param_2 - (longlong)pvVar3);
    _Dst = puVar10 + 1;
    _Size = param_1[1] - (longlong)param_2;
  }
  memmove(_Dst,param_2,_Size);
  pvVar3 = (void *)*param_1;
  if (pvVar3 != (void *)0x0) {
    pvVar7 = pvVar3;
    if ((0xfff < (ulonglong)(param_1[2] - (longlong)pvVar3)) &&
       (pvVar7 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar7)))) {
LAB_180003118:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar7);
  }
  *param_1 = (longlong)puVar8;
  param_1[1] = (longlong)(puVar8 + uVar1);
  param_1[2] = (longlong)(puVar8 + uVar9);
  return puVar10;
}



// ============================================================
// INDEX: 89/133
// FUNCTION: FUN_180004260
// ENTRY: 180004260
// RVA: 0x4260
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180004260(longlong * param_1)
// ============================================================

void FUN_180004260(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b218 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b218)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
  return;
}



// ============================================================
// INDEX: 90/133
// FUNCTION: FUN_1800042a0
// ENTRY: 1800042a0
// RVA: 0x42A0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800042a0(longlong * param_1)
// ============================================================

void FUN_1800042a0(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b210 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b210)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
  return;
}



// ============================================================
// INDEX: 91/133
// FUNCTION: FUN_1800042e0
// ENTRY: 1800042e0
// RVA: 0x42E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800042e0(longlong * param_1)
// ============================================================

void FUN_1800042e0(longlong *param_1)

{
  undefined1 uVar1;
  
  if (DAT_18001b220 == (code *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (*DAT_18001b220)(*(undefined4 *)param_1[2]);
  }
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = uVar1;
  }
  return;
}



// ============================================================
// INDEX: 92/133
// FUNCTION: FUN_1800044b0
// ENTRY: 1800044b0
// RVA: 0x44B0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_1800044b0(undefined8 * param_1, undefined8 * param_2)
// ============================================================

undefined8 * FUN_1800044b0(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  void *_Dst;
  ulonglong uVar6;
  
  _Dst = (void *)0x0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar2 = param_2[2];
  if (0xf < (ulonglong)param_2[3]) {
    param_2 = (undefined8 *)*param_2;
  }
  if (0x7fffffffffffffff < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_180001650();
  }
  if (uVar2 < 0x10) {
    param_1[2] = uVar2;
    param_1[3] = 0xf;
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    return param_1;
  }
  uVar6 = uVar2 | 0xf;
  if (uVar6 < 0x8000000000000000) {
    if (uVar6 < 0x16) {
      uVar6 = 0x16;
    }
    uVar1 = uVar6 + 1;
    if (uVar1 == 0) goto LAB_18000458e;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18000eeb0(uVar1);
      goto LAB_18000458e;
    }
    uVar4 = uVar6 + 0x28;
    if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800015b0();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18000eeb0(uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_18000458e:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,uVar2 + 1);
  return param_1;
}



// ============================================================
// INDEX: 93/133
// FUNCTION: FUN_1800045d0
// ENTRY: 1800045d0
// RVA: 0x45D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800045d0(longlong param_1)
// ============================================================

void FUN_1800045d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 local_18 [2];
  
  if (*(ulonglong *)(param_1 + 0x10) != 0) {
    if (*(ulonglong *)(param_1 + 0x10) < *(ulonglong *)(param_1 + 0x38) >> 3) {
      FUN_1800047e0(param_1,(longlong *)**(longlong **)(param_1 + 8),*(longlong **)(param_1 + 8));
      return;
    }
    puVar1 = *(undefined8 **)(param_1 + 8);
    *(undefined8 *)puVar1[1] = 0;
    puVar1 = (undefined8 *)*puVar1;
    while (puVar1 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar1;
      FUN_180005510(puVar1 + 2);
      FUN_18000f264(puVar1);
      puVar1 = puVar2;
    }
    *(undefined8 *)*(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_1 + 8);
    *(longlong *)(*(longlong *)(param_1 + 8) + 8) = *(longlong *)(param_1 + 8);
    *(undefined8 *)(param_1 + 0x10) = 0;
    local_18[0] = *(undefined8 *)(param_1 + 8);
    FUN_180004f10(*(undefined8 **)(param_1 + 0x18),*(undefined8 **)(param_1 + 0x20),local_18);
  }
  return;
}



// ============================================================
// INDEX: 94/133
// FUNCTION: FUN_1800046a0
// ENTRY: 1800046a0
// RVA: 0x46A0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800046a0(ulonglong * param_1, ulonglong param_2, undefined8 param_3)
// ============================================================

void FUN_1800046a0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)*param_1;
  lVar3 = (longlong)param_1[1] - (longlong)puVar6;
  if ((ulonglong)(lVar3 >> 3) < param_2) {
    if (0x1fffffffffffffff < param_2) {
LAB_1800047d9:
                    /* WARNING: Subroutine does not return */
      FUN_1800015b0();
    }
    uVar5 = param_2 * 8;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else if (uVar5 < 0x1000) {
      puVar6 = (undefined8 *)FUN_18000eeb0(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) goto LAB_1800047d9;
      lVar3 = FUN_18000eeb0(uVar5 + 0x27);
      if (lVar3 == 0) goto LAB_1800047aa;
      puVar6 = (undefined8 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
      puVar6[-1] = lVar3;
    }
    pvVar2 = (void *)*param_1;
    lVar3 = (longlong)(param_1[2] - (longlong)pvVar2) >> 3;
    if (lVar3 != 0) {
      pvVar4 = pvVar2;
      if ((0xfff < (ulonglong)(lVar3 * 8)) &&
         (pvVar4 = *(void **)((longlong)pvVar2 - 8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
LAB_1800047aa:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar4);
    }
    puVar1 = puVar6 + param_2;
    *param_1 = (ulonglong)puVar6;
    param_1[1] = (ulonglong)puVar1;
    param_1[2] = (ulonglong)puVar1;
    for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
      *puVar6 = param_3;
    }
  }
  else {
    uVar5 = lVar3 + 7U >> 3;
    if ((undefined8 *)param_1[1] < puVar6) {
      uVar5 = 0;
    }
    if (uVar5 != 0) {
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar6 = param_3;
        puVar6 = puVar6 + 1;
      }
      return;
    }
  }
  return;
}



// ============================================================
// INDEX: 95/133
// FUNCTION: FUN_180005c30
// ENTRY: 180005c30
// RVA: 0x5C30
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: LPWSTR FUN_180005c30(LPWSTR param_1, UINT param_2, undefined8 * param_3)
// ============================================================

LPWSTR FUN_180005c30(LPWSTR param_1,UINT param_2,undefined8 *param_3)

{
  LPCSTR pCVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  LPWSTR pWVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  LPWSTR pWVar8;
  ulonglong uVar9;
  
  param_1[0] = L'\0';
  param_1[1] = L'\0';
  param_1[2] = L'\0';
  param_1[3] = L'\0';
  param_1[4] = L'\0';
  param_1[5] = L'\0';
  param_1[6] = L'\0';
  param_1[7] = L'\0';
  param_1[8] = L'\0';
  param_1[9] = L'\0';
  param_1[10] = L'\0';
  param_1[0xb] = L'\0';
  param_1[0xc] = L'\a';
  param_1[0xd] = L'\0';
  param_1[0xe] = L'\0';
  param_1[0xf] = L'\0';
  *param_1 = L'\0';
  uVar9 = param_3[1];
  if (uVar9 != 0) {
    if (0x7fffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_180005910();
    }
    pCVar1 = (LPCSTR)*param_3;
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,pCVar1,(int)uVar9,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
    uVar7 = (ulonglong)(int)uVar4;
    uVar2 = *(ulonglong *)(param_1 + 8);
    if (uVar2 < uVar7) {
      uVar6 = uVar7 - uVar2;
      if (*(ulonglong *)(param_1 + 0xc) - uVar2 < uVar6) {
        FUN_1800094b0((undefined8 *)param_1,uVar6,uVar9,uVar6);
      }
      else {
        *(ulonglong *)(param_1 + 8) = uVar7;
        pWVar5 = param_1;
        if (7 < *(ulonglong *)(param_1 + 0xc)) {
          pWVar5 = *(LPWSTR *)param_1;
        }
        pWVar8 = pWVar5 + uVar2;
        if (uVar6 != 0) {
          for (; uVar6 != 0; uVar6 = uVar6 - 1) {
            *pWVar8 = L'\0';
            pWVar8 = pWVar8 + 1;
          }
        }
        pWVar5[uVar7] = L'\0';
      }
    }
    else {
      *(ulonglong *)(param_1 + 8) = uVar7;
      pWVar5 = param_1;
      if (7 < *(ulonglong *)(param_1 + 0xc)) {
        pWVar5 = *(LPWSTR *)param_1;
      }
      pWVar5[uVar7] = L'\0';
    }
    pWVar5 = param_1;
    if (7 < *(ulonglong *)(param_1 + 0xc)) {
      pWVar5 = *(LPWSTR *)param_1;
    }
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,pCVar1,*(int *)(param_3 + 1),pWVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 96/133
// FUNCTION: FUN_180005da0
// ENTRY: 180005da0
// RVA: 0x5DA0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: uint * FUN_180005da0(uint * param_1, uint * param_2)
// ============================================================

uint * FUN_180005da0(uint *param_1,uint *param_2)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2 - (longlong)param_1 >> 1;
  if (lVar3 < 2) {
    return param_1;
  }
  uVar1 = *param_1;
  sVar2 = (short)(uVar1 >> 0x10);
  if ((uVar1 & 0xffffffdf) - 0x3a0041 < 0x1a) {
    return param_1 + 1;
  }
  if (((short)uVar1 != 0x5c) && ((short)uVar1 != 0x2f)) {
    return param_1;
  }
  if ((3 < lVar3) &&
     ((*(short *)((longlong)param_1 + 6) == 0x5c || (*(short *)((longlong)param_1 + 6) == 0x2f)))) {
    if ((lVar3 != 4) && (((short)param_1[2] == 0x5c || ((short)param_1[2] == 0x2f))))
    goto LAB_180005e69;
    sVar2 = *(short *)((longlong)param_1 + 2);
    if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) &&
        (((short)param_1[1] == 0x3f || ((short)param_1[1] == 0x2e)))) ||
       ((sVar2 == 0x3f && ((short)param_1[1] == 0x3f)))) {
      return (uint *)((longlong)param_1 + 6);
    }
  }
  if ((ulonglong)((longlong)param_2 - (longlong)param_1 >> 1) < 3) {
    return param_1;
  }
LAB_180005e69:
  if ((((sVar2 == 0x5c) || (sVar2 == 0x2f)) && ((short)param_1[1] != 0x5c)) &&
     (((short)param_1[1] != 0x2f && (param_1 = (uint *)((longlong)param_1 + 6), param_1 != param_2))
     )) {
    while (((short)*param_1 != 0x5c && ((short)*param_1 != 0x2f))) {
      param_1 = (uint *)((longlong)param_1 + 2);
      if (param_1 == param_2) {
        return param_1;
      }
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 97/133
// FUNCTION: FUN_180006190
// ENTRY: 180006190
// RVA: 0x6190
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: uint * FUN_180006190(uint * param_1, uint * param_2, uint * param_3)
// ============================================================

uint * FUN_180006190(uint *param_1,uint *param_2,uint *param_3)

{
  short sVar1;
  longlong lVar2;
  longlong lVar3;
  uint *puVar4;
  undefined2 *_Dst;
  ulonglong uVar5;
  longlong lVar6;
  uint *_Dst_00;
  
  lVar2 = *(longlong *)(param_3 + 4);
  puVar4 = param_3;
  if (7 < *(ulonglong *)(param_3 + 6)) {
    puVar4 = *(uint **)param_3;
  }
  if (((lVar2 == 0) ||
      (((3 < lVar2 * 2 && ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) || ((short)*puVar4 == 0x5c))))
     || ((short)*puVar4 == 0x2f)) {
    FUN_180006320((undefined8 *)param_1,(undefined8 *)param_2);
    FUN_180005eb0(param_1,param_3);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_180006276:
      sVar1 = *(short *)((longlong)param_2 + lVar3 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar6 = 1;
        goto LAB_180006238;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_180006276;
  lVar6 = 0;
LAB_180006238:
  uVar5 = lVar6 + lVar3 + lVar2;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 7;
  param_1[7] = 0;
  *(undefined2 *)param_1 = 0;
  if (uVar5 < 8) {
    *(ulonglong *)(param_1 + 4) = uVar5;
  }
  else {
    FUN_18000a2a0((undefined8 *)param_1,uVar5);
  }
  _Dst_00 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    _Dst_00 = *(uint **)param_1;
  }
  memcpy(_Dst_00,param_2,lVar3 * 2);
  _Dst = (undefined2 *)(lVar3 * 2 + (longlong)_Dst_00);
  if ((char)lVar6 != '\0') {
    *_Dst = 0x5c;
    _Dst = _Dst + 1;
  }
  memcpy(_Dst,puVar4,lVar2 * 2);
  *(ulonglong *)(param_1 + 4) = uVar5;
  puVar4 = param_1;
  if (7 < *(ulonglong *)(param_1 + 6)) {
    puVar4 = *(uint **)param_1;
  }
  *(undefined2 *)((longlong)puVar4 + uVar5 * 2) = 0;
  return param_1;
}



// ============================================================
// INDEX: 98/133
// FUNCTION: FUN_180006fc0
// ENTRY: 180006fc0
// RVA: 0x6FC0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180006fc0(longlong * param_1, longlong * param_2)
// ============================================================

void FUN_180006fc0(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  do {
    if (param_1 == param_2) {
      return;
    }
    if (0xf < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      pvVar2 = pvVar1;
      if ((0xfff < param_1[3] + 1U) &&
         (pvVar2 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar2);
    }
    param_1[2] = 0;
    param_1[3] = 0xf;
    *(undefined1 *)param_1 = 0;
    param_1 = param_1 + 4;
  } while( true );
}



// ============================================================
// INDEX: 99/133
// FUNCTION: FUN_1800070c0
// ENTRY: 1800070c0
// RVA: 0x70C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800070c0(longlong * param_1)
// ============================================================

void FUN_1800070c0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < (ulonglong)param_1[7]) {
    pvVar1 = (void *)param_1[4];
    pvVar2 = pvVar1;
    if ((0xfff < param_1[7] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180007163;
    FUN_18000f264(pvVar2);
  }
  param_1[6] = 0;
  param_1[7] = 0xf;
  *(undefined1 *)(param_1 + 4) = 0;
  if (0xf < (ulonglong)param_1[3]) {
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180007163:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar2);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ============================================================
// INDEX: 100/133
// FUNCTION: n_Wait
// ENTRY: 1800071e0
// RVA: 0x71E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void n_Wait(InfoBase * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* private: static void __cdecl rage::scrThread::n_Wait(class rage::scrThread::InfoBase * __ptr64)
    */

void __cdecl rage::scrThread::n_Wait(InfoBase *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 ****ppppuVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  ulonglong uVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  size_t sVar11;
  ulonglong uVar12;
  int iVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  undefined8 ***local_c8;
  undefined8 uStack_c0;
  ulonglong local_b8;
  ulonglong local_b0;
  undefined8 ***local_a8;
  undefined8 uStack_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined8 local_68 [2];
  undefined8 ***local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong local_40;
  ulonglong local_38;
  
                    /* 0x71e0  91  ?n_Wait@scrThread@rage@@CAXPEAVInfoBase@12@@Z */
  local_38 = DAT_180019240 ^ (ulonglong)auStack_e8;
  pvVar1 = (void *)FUN_180008a40();
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  uVar9 = 0;
  local_48 = 0;
  local_40 = 0;
  sVar11 = 0xffffffffffffffff;
  do {
    sVar11 = sVar11 + 1;
  } while (*(char *)((longlong)pvVar1 + sVar11) != '\0');
  FUN_180002e30(&local_58,pvVar1,sVar11);
  ppppuVar4 = &local_58;
  if (0xf < local_40) {
    ppppuVar4 = (undefined8 ****)local_58;
  }
  uVar10 = 0xcbf29ce484222325;
  iVar8 = 0;
  if (0x10 < local_48) {
    lVar6 = *(longlong *)((local_48 - 0x11) + (longlong)ppppuVar4) + -0x6c6c6168635f6373;
    if ((lVar6 == 0) &&
       (lVar6 = *(longlong *)((local_48 - 9) + (longlong)ppppuVar4) + -0x696e695f65676e65,
       lVar6 == 0)) {
      lVar6 = (ulonglong)*(byte *)((local_48 - 1) + (longlong)ppppuVar4) - 0x74;
    }
    if (lVar6 == 0) {
      local_a8 = (undefined8 ****)0x0;
      uStack_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_180002e30(&local_a8,"OnUpdatePerTick",0xf);
      uVar14 = local_90;
      ppppuVar4 = (undefined8 ****)local_a8;
      ppppuVar5 = &local_a8;
      if (0xf < local_90) {
        ppppuVar5 = (undefined8 ****)local_a8;
      }
      uVar12 = 0xcbf29ce484222325;
      uVar7 = uVar9;
      if (local_98 != 0) {
        do {
          uVar12 = (uVar12 ^ *(byte *)((longlong)ppppuVar5 + uVar7)) * 0x100000001b3;
          uVar7 = uVar7 + 1;
        } while (uVar7 < local_98);
      }
      puVar2 = FUN_180005360(uVar7,local_68,&local_a8,uVar12);
      if (puVar2[1] != 0) {
        plVar3 = FUN_180004c90(uVar7,local_78,(longlong *)&local_a8);
        if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          std::_Xbad_function_call();
        }
        (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
        ppppuVar4 = (undefined8 ****)local_a8;
        uVar14 = local_90;
      }
      if (0xf < uVar14) {
        ppppuVar5 = ppppuVar4;
        if ((0xfff < uVar14 + 1) &&
           (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
           0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(ppppuVar5);
      }
      local_98 = 0;
      local_90 = 0xf;
      local_a8 = (undefined8 ***)((ulonglong)local_a8 & 0xffffffffffffff00);
      iVar13 = iVar8;
      if (DAT_18001b208 != (int *)0x0) {
        iVar13 = *DAT_18001b208;
      }
      if (DAT_18001b180 != iVar13) {
        local_c8 = (undefined8 ****)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_180002e30(&local_c8,"OnUpdatePerFrame",0x10);
        uVar14 = local_b0;
        ppppuVar4 = (undefined8 ****)local_c8;
        ppppuVar5 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar5 = (undefined8 ****)local_c8;
        }
        uVar12 = 0xcbf29ce484222325;
        uVar7 = uVar9;
        if (local_b8 != 0) {
          do {
            uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)ppppuVar5)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_b8);
        }
        puVar2 = FUN_180005360(uVar7,local_78,&local_c8,uVar12);
        if (puVar2[1] != 0) {
          plVar3 = FUN_180004c90(uVar7,local_88,(longlong *)&local_c8);
          if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
          ppppuVar4 = (undefined8 ****)local_c8;
          uVar14 = local_b0;
        }
        if (0xf < uVar14) {
          ppppuVar5 = ppppuVar4;
          if ((0xfff < uVar14 + 1) &&
             (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
             0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18000f264(ppppuVar5);
        }
        local_b8 = 0;
        local_b0 = 0xf;
        local_c8 = (undefined8 ***)((ulonglong)local_c8 & 0xffffffffffffff00);
        DAT_18001b180 = iVar13;
      }
    }
  }
  if (DAT_18001b208 != (int *)0x0) {
    iVar8 = *DAT_18001b208;
  }
  iVar13 = DAT_18001b164;
  if (DAT_18001b164 != iVar8) {
    ppppuVar4 = &local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58;
    }
    if (9 < local_48) {
      lVar6 = *(longlong *)((local_48 - 10) + (longlong)ppppuVar4) + -0x6174737373657270;
      if (lVar6 == 0) {
        lVar6 = (ulonglong)*(ushort *)((local_48 - 2) + (longlong)ppppuVar4) - 0x7472;
      }
      if (lVar6 == 0) {
        local_c8 = (undefined8 ****)0x0;
        uStack_c0 = 0;
        local_b8 = 0;
        local_b0 = 0;
        FUN_180002e30(&local_c8,"OnPressStartScriptRunning",0x19);
        uVar14 = local_b0;
        ppppuVar4 = (undefined8 ****)local_c8;
        ppppuVar5 = &local_c8;
        if (0xf < local_b0) {
          ppppuVar5 = (undefined8 ****)local_c8;
        }
        uVar12 = 0xcbf29ce484222325;
        uVar7 = uVar9;
        if (local_b8 != 0) {
          do {
            uVar12 = (uVar12 ^ *(byte *)(uVar7 + (longlong)ppppuVar5)) * 0x100000001b3;
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_b8);
        }
        puVar2 = FUN_180005360(uVar7,local_88,&local_c8,uVar12);
        if (puVar2[1] != 0) {
          plVar3 = FUN_180004c90(uVar7,local_88,(longlong *)&local_c8);
          if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
            std::_Xbad_function_call();
          }
          (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
          ppppuVar4 = (undefined8 ****)local_c8;
          uVar14 = local_b0;
        }
        if (0xf < uVar14) {
          ppppuVar5 = ppppuVar4;
          if ((0xfff < uVar14 + 1) &&
             (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
             0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18000f264(ppppuVar5);
        }
      }
    }
    uVar14 = local_48;
    ppppuVar4 = &local_58;
    if (0xf < local_40) {
      ppppuVar4 = (undefined8 ****)local_58;
    }
    iVar13 = iVar8;
    if (0xb < local_48) {
      sVar11 = local_48 - 0xb;
      ppppuVar5 = ppppuVar4;
      while (plVar3 = memchr(ppppuVar5,99,sVar11), plVar3 != (longlong *)0x0) {
        if ((*plVar3 == 0x2f746e65746e6f63) && ((int)plVar3[1] == 0x6e69616d)) {
          if ((longlong)plVar3 - (longlong)ppppuVar4 != -1) {
            local_c8 = (undefined8 ****)0x0;
            uStack_c0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            FUN_180002e30(&local_c8,"OnMainScriptRunning",0x13);
            uVar14 = local_b0;
            ppppuVar4 = (undefined8 ****)local_c8;
            ppppuVar5 = &local_c8;
            if (0xf < local_b0) {
              ppppuVar5 = (undefined8 ****)local_c8;
            }
            if (local_b8 != 0) {
              do {
                uVar10 = (uVar10 ^ *(byte *)(uVar9 + (longlong)ppppuVar5)) * 0x100000001b3;
                uVar9 = uVar9 + 1;
              } while (uVar9 < local_b8);
            }
            puVar2 = FUN_180005360(ppppuVar5,local_88,&local_c8,uVar10);
            if (puVar2[1] != 0) {
              plVar3 = FUN_180004c90(ppppuVar5,local_88,(longlong *)&local_c8);
              if (*(longlong **)(*plVar3 + 0x68) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
                std::_Xbad_function_call();
              }
              (**(code **)(**(longlong **)(*plVar3 + 0x68) + 0x10))();
              ppppuVar4 = (undefined8 ****)local_c8;
              uVar14 = local_b0;
            }
            if (0xf < uVar14) {
              ppppuVar5 = ppppuVar4;
              if ((0xfff < uVar14 + 1) &&
                 (ppppuVar5 = (undefined8 ****)ppppuVar4[-1],
                 0x1f < (ulonglong)((longlong)ppppuVar4 + (-8 - (longlong)ppppuVar5)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(ppppuVar5);
            }
          }
          break;
        }
        ppppuVar5 = (undefined8 ****)((longlong)plVar3 + 1);
        sVar11 = (longlong)ppppuVar4 + ((uVar14 - 0xb) - (longlong)ppppuVar5);
      }
    }
  }
  DAT_18001b164 = iVar13;
  (*o_Wait)(param_1);
  if (0xf < local_40) {
    ppppuVar4 = (undefined8 ****)local_58;
    if ((0xfff < local_40 + 1) &&
       (ppppuVar4 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar4);
  }
  return;
}



// ============================================================
// INDEX: 101/133
// FUNCTION: n_QuitGame
// ENTRY: 1800077d0
// RVA: 0x77D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void n_QuitGame(void)
// ============================================================

/* private: static void __cdecl rage::scrThread::n_QuitGame(void) */

void __cdecl rage::scrThread::n_QuitGame(void)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 ****ppppuVar6;
  ulonglong uVar7;
  longlong local_38 [2];
  undefined8 ***local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
                    /* 0x77d0  89  ?n_QuitGame@scrThread@rage@@CAXXZ */
  local_28 = (undefined8 ****)0x0;
  uStack_20 = 0;
  uVar4 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_180002e30(&local_28,"OnQuitGame",10);
  uVar5 = local_10;
  ppppuVar6 = (undefined8 ****)local_28;
  ppppuVar3 = &local_28;
  if (0xf < local_10) {
    ppppuVar3 = (undefined8 ****)local_28;
  }
  uVar7 = 0xcbf29ce484222325;
  if (local_18 != 0) {
    do {
      uVar7 = (uVar7 ^ *(byte *)((longlong)ppppuVar3 + uVar4)) * 0x100000001b3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_18);
  }
  puVar1 = FUN_180005360(ppppuVar3,local_38,&local_28,uVar7);
  if (puVar1[1] != 0) {
    plVar2 = FUN_180004c90(ppppuVar3,local_38,(longlong *)&local_28);
    if (*(longlong **)(*plVar2 + 0x68) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
      std::_Xbad_function_call();
    }
    (**(code **)(**(longlong **)(*plVar2 + 0x68) + 0x10))();
    uVar5 = local_10;
    ppppuVar6 = (undefined8 ****)local_28;
  }
  if (0xf < uVar5) {
    ppppuVar3 = ppppuVar6;
    if ((0xfff < uVar5 + 1) &&
       (ppppuVar3 = (undefined8 ****)ppppuVar6[-1],
       0x1f < (ulonglong)((longlong)ppppuVar6 + (-8 - (longlong)ppppuVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(ppppuVar3);
  }
  return;
}



// ============================================================
// INDEX: 102/133
// FUNCTION: FUN_180007910
// ENTRY: 180007910
// RVA: 0x7910
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char FUN_180007910(undefined8 param_1, void * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_180007910(undefined8 param_1,void *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 ******ppppppuVar5;
  char cVar6;
  DWORD DVar7;
  longlong lVar8;
  ulonglong uVar9;
  char *pcVar10;
  LPCWSTR pWVar11;
  WCHAR *pWVar12;
  void *pvVar13;
  uint uVar14;
  undefined8 *******pppppppuVar15;
  size_t sVar16;
  char *pcVar17;
  undefined1 auStackY_178 [32];
  WCHAR *local_148;
  undefined **ppuStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 ******local_118;
  undefined8 local_110;
  undefined8 local_108;
  ulonglong uStack_100;
  WCHAR local_f8;
  undefined6 uStack_f6;
  undefined **local_e8;
  ulonglong local_e0;
  char local_d8;
  undefined7 uStack_d7;
  ulonglong local_c8;
  ulonglong local_c0;
  WCHAR *local_b8;
  undefined **ppuStack_b0;
  longlong local_a8;
  ulonglong local_a0;
  void *local_98 [3];
  ulonglong local_80;
  ulonglong local_78 [2];
  uint local_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = DAT_180019240 ^ (ulonglong)auStackY_178;
  cVar6 = (*DAT_18001b288)();
  if (cVar6 != '\0') {
    FUN_180006db0((uint *)local_98);
    if (param_2 != (void *)0x0) {
      local_138 = (void *)0x0;
      uStack_130 = 0;
      local_128 = 0;
      uStack_120 = 0;
      sVar16 = 0xffffffffffffffff;
      do {
        sVar16 = sVar16 + 1;
      } while (*(char *)((longlong)param_2 + sVar16) != '\0');
      FUN_180002e30(&local_138,param_2,sVar16);
      FUN_180006c20(&local_d8,&local_138);
      if (0xf < uStack_120) {
        pvVar13 = local_138;
        if ((0xfff < uStack_120 + 1) &&
           (pvVar13 = *(void **)((longlong)local_138 + -8),
           0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(pvVar13);
      }
      puVar4 = DAT_18001b238;
      for (puVar1 = (undefined8 *)*DAT_18001b238; puVar1 != puVar4; puVar1 = (undefined8 *)*puVar1)
      {
        pppppppuVar15 = (undefined8 *******)(puVar1 + 6);
        pcVar17 = (char *)(puVar1 + 2);
        if (0xf < (ulonglong)puVar1[5]) {
          pcVar17 = (char *)puVar1[2];
        }
        pcVar10 = &local_d8;
        if (0xf < local_c0) {
          pcVar10 = (char *)CONCAT71(uStack_d7,local_d8);
        }
        lVar8 = FUN_1800092a0(pcVar10,local_c8,sVar16,pcVar17,puVar1[4]);
        if (lVar8 != -1) {
          uVar2 = puVar1[8];
          if (0xf < (ulonglong)puVar1[9]) {
            pppppppuVar15 = (undefined8 *******)*pppppppuVar15;
          }
          uVar9 = FUN_18000e89c();
          local_118 = pppppppuVar15;
          local_110 = uVar2;
          FUN_180005c30((LPWSTR)&local_138,(UINT)uVar9,&local_118);
          FUN_180006190((uint *)&local_f8,(uint *)local_98,(uint *)&local_138);
          if (7 < uStack_120) {
            pvVar13 = local_138;
            if ((0xfff < uStack_120 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)local_138 + -8),
               0x1f < (ulonglong)((longlong)local_138 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18000f264(pvVar13);
          }
          local_128 = 0;
          uStack_120 = 7;
          local_138 = (void *)((ulonglong)local_138 & 0xffffffffffff0000);
          pWVar11 = &local_f8;
          if (7 < local_e0) {
            pWVar11 = (LPCWSTR)CONCAT62(uStack_f6,local_f8);
          }
          DVar7 = FUN_18000eafc(pWVar11,local_78,3,0xffffffff);
          sVar16 = (size_t)DVar7;
          if (DVar7 == 0) {
            pWVar11 = (LPCWSTR)(ulonglong)(local_68 >> 10);
            if ((local_68 >> 10 & 1) == 0) {
LAB_180007b4e:
              uVar14 = local_68 >> 4 & 1 | 2;
            }
            else if (local_64 == -0x5ffffff4) {
              uVar14 = 4;
            }
            else {
              if (local_64 != -0x5ffffffd) goto LAB_180007b4e;
              uVar14 = 10;
            }
          }
          else if ((((DVar7 == 2) || (DVar7 == 3)) || (DVar7 == 0x35)) ||
                  ((DVar7 == 0x7b || (uVar14 = 0, DVar7 == 0x10b)))) {
            uVar14 = 1;
          }
          local_148 = (WCHAR *)CONCAT44(local_148._4_4_,DVar7);
          ppuStack_140 = &PTR_vftable_1800192c8;
          local_b8 = local_148;
          ppuStack_b0 = &PTR_vftable_1800192c8;
          if (uVar14 == 0) {
            if (DVar7 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180006bc0(pWVar11,&local_b8,(undefined8 *)&local_f8);
            }
          }
          else if (uVar14 != 1) {
            local_148 = &local_f8;
            if (7 < local_e0) {
              local_148 = (WCHAR *)CONCAT62(uStack_f6,local_f8);
            }
            ppuStack_140 = local_e8;
            uVar9 = FUN_18000e89c();
            FUN_18000a140((longlong *)&local_b8,(UINT)uVar9,&local_148);
            local_148 = &local_f8;
            if (7 < local_e0) {
              local_148 = (WCHAR *)CONCAT62(uStack_f6,local_f8);
            }
            ppuStack_140 = local_e8;
            uVar9 = FUN_18000e89c();
            FUN_18000a140((longlong *)&local_118,(UINT)uVar9,&local_148);
            ppppppuVar5 = local_118;
            pppppppuVar15 = &local_118;
            if (0xf < uStack_100) {
              pppppppuVar15 = (undefined8 *******)local_118;
            }
            memcpy(param_2,pppppppuVar15,local_a8 + 1);
            if (0xf < uStack_100) {
              pppppppuVar15 = (undefined8 *******)ppppppuVar5;
              if ((0xfff < uStack_100 + 1) &&
                 (pppppppuVar15 = (undefined8 *******)ppppppuVar5[-1],
                 0x1f < (ulonglong)((longlong)ppppppuVar5 + (-8 - (longlong)pppppppuVar15)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(pppppppuVar15);
            }
            local_108 = _DAT_1800128f0;
            uStack_100 = _UNK_1800128f8;
            local_118 = (undefined8 ******)((ulonglong)local_118 & 0xffffffffffffff00);
            if (0xf < local_a0) {
              pWVar12 = local_b8;
              if ((0xfff < local_a0 + 1) &&
                 (pWVar12 = *(WCHAR **)(local_b8 + -4),
                 0x1f < (ulonglong)((longlong)local_b8 + (-8 - (longlong)pWVar12)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18000f264(pWVar12);
            }
            if (local_e0 < 8) {
LAB_180007dc8:
              local_e8 = (undefined **)0x0;
              local_e0 = 7;
              local_f8 = L'\0';
              if (0xf < local_c0) {
                pvVar3 = (void *)CONCAT71(uStack_d7,local_d8);
                pvVar13 = pvVar3;
                if ((0xfff < local_c0 + 1) &&
                   (pvVar13 = *(void **)((longlong)pvVar3 + -8),
                   0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18000f264(pvVar13);
              }
              local_c8 = 0;
              local_c0 = 0xf;
              local_d8 = '\0';
              if (7 < local_80) {
                pvVar13 = local_98[0];
                if ((0xfff < local_80 * 2 + 2) &&
                   (pvVar13 = *(void **)((longlong)local_98[0] + -8),
                   0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18000f264(pvVar13);
              }
              return '\x01';
            }
            pvVar3 = (void *)CONCAT62(uStack_f6,local_f8);
            pvVar13 = pvVar3;
            if ((local_e0 * 2 + 2 < 0x1000) ||
               (pvVar13 = *(void **)((longlong)pvVar3 + -8),
               (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)) < 0x20)) {
              FUN_18000f264(pvVar13);
              goto LAB_180007dc8;
            }
            goto LAB_180007e6e;
          }
          if (7 < local_e0) {
            pvVar3 = (void *)CONCAT62(uStack_f6,local_f8);
            pvVar13 = pvVar3;
            if ((0xfff < local_e0 * 2 + 2) &&
               (pvVar13 = *(void **)((longlong)pvVar3 + -8),
               0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
LAB_180007e6e:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18000f264(pvVar13);
          }
        }
      }
      if (0xf < local_c0) {
        pvVar3 = (void *)CONCAT71(uStack_d7,local_d8);
        pvVar13 = pvVar3;
        if ((0xfff < local_c0 + 1) &&
           (pvVar13 = *(void **)((longlong)pvVar3 + -8),
           0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18000f264(pvVar13);
      }
    }
    if (7 < local_80) {
      pvVar13 = local_98[0];
      if ((0xfff < local_80 * 2 + 2) &&
         (pvVar13 = *(void **)((longlong)local_98[0] + -8),
         0x1f < (ulonglong)((longlong)local_98[0] + (-8 - (longlong)pvVar13)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar13);
    }
  }
  return cVar6;
}



// ============================================================
// INDEX: 103/133
// FUNCTION: FUN_180007ef0
// ENTRY: 180007ef0
// RVA: 0x7EF0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180007ef0(longlong param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007ef0(longlong param_1)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  uStack_30 = 0;
  local_28 = 0;
  local_20 = 0;
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)**(undefined8 **)(param_1 + 0x10) + sVar2) != '\0');
  FUN_180002e30(&local_38,(void *)**(undefined8 **)(param_1 + 0x10),sVar2);
  if (local_28 != 0) {
    FUN_180006ca0(&local_38);
  }
  if (0xf < local_20) {
    pvVar1 = local_38;
    if ((0xfff < local_20 + 1) &&
       (pvVar1 = *(void **)((longlong)local_38 + -8),
       0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar1);
  }
  return;
}



// ============================================================
// INDEX: 104/133
// FUNCTION: FUN_180007fa0
// ENTRY: 180007fa0
// RVA: 0x7FA0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180007fa0(longlong param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180007fa0(longlong param_1)

{
  longlong lVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_58 [32];
  void *local_38;
  undefined8 uStack_30;
  longlong local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  lVar1 = FUN_180008c10();
  if (lVar1 != 0) {
    local_38 = (void *)0x0;
    uStack_30 = 0;
    local_28 = 0;
    local_20 = 0;
    sVar3 = 0xffffffffffffffff;
    do {
      sVar3 = sVar3 + 1;
    } while (*(char *)((longlong)**(undefined8 **)(param_1 + 0x10) + sVar3) != '\0');
    FUN_180002e30(&local_38,(void *)**(undefined8 **)(param_1 + 0x10),sVar3);
    if (local_28 != 0) {
      FUN_180006ca0(&local_38);
    }
    if (0xf < local_20) {
      pvVar2 = local_38;
      if ((0xfff < local_20 + 1) &&
         (pvVar2 = *(void **)((longlong)local_38 + -8),
         0x1f < (ulonglong)((longlong)local_38 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18000f264(pvVar2);
    }
  }
  return;
}



// ============================================================
// INDEX: 105/133
// FUNCTION: FUN_1800088c0
// ENTRY: 1800088c0
// RVA: 0x88C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800088c0(void)
// ============================================================

void FUN_1800088c0(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// INDEX: 106/133
// FUNCTION: FUN_1800088e0
// ENTRY: 1800088e0
// RVA: 0x88E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800088e0(longlong * param_1, UINT param_2, undefined8 * param_3)
// ============================================================

longlong * FUN_1800088e0(longlong *param_1,UINT param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180005910();
    }
    uVar4 = FUN_18000ea30(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_180009670(param_1,_Size,uVar2,_Size);
      }
      else {
        param_1[2] = uVar6;
        plVar5 = param_1;
        if (0xf < uVar2) {
          plVar5 = (longlong *)*param_1;
        }
        memset((void *)((longlong)plVar5 + uVar1),0,_Size);
        *(undefined1 *)((longlong)((longlong)plVar5 + uVar1) + _Size) = 0;
      }
    }
    else {
      param_1[2] = uVar6;
      plVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar5 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)plVar5 + uVar6) = 0;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    uVar4 = FUN_18000ea30(param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),(LPSTR)plVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 107/133
// FUNCTION: FUN_180009990
// ENTRY: 180009990
// RVA: 0x9990
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180009990(undefined8 param_1, longlong * param_2, longlong * param_3)
// ============================================================

longlong * FUN_180009990(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  size_t _Size;
  undefined8 *puVar1;
  code *pcVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 *_Buf1;
  undefined8 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_68;
  undefined8 *local_58;
  longlong lStack_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar4 = param_3;
  if (0xf < (ulonglong)param_3[3]) {
    plVar4 = (longlong *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar6 = 0;
  if (param_3[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)plVar4 + uVar6)) * 0x100000001b3;
      uVar6 = uVar6 + 1;
    } while (uVar6 < (ulonglong)param_3[2]);
  }
  FUN_18000a410(uVar6,&local_58,param_3,uVar11);
  if (lStack_50 != 0) {
    *param_2 = lStack_50;
    *(undefined1 *)(param_2 + 1) = 0;
    return param_2;
  }
  if (DAT_18001b240 == 0x333333333333333) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar2 = (code *)swi(3);
    plVar4 = (longlong *)(*pcVar2)();
    return plVar4;
  }
  local_48 = &DAT_18001b238;
  local_40 = (undefined8 *)0x0;
  puVar5 = (undefined8 *)FUN_18000eeb0(0x50);
  local_40 = puVar5;
  FUN_1800044b0(puVar5 + 2,param_3);
  FUN_1800044b0(puVar5 + 6,param_3 + 4);
  uVar6 = DAT_18001b268;
  if (DAT_18001b230 < (float)(DAT_18001b240 + 1) / (float)DAT_18001b268) {
    fVar12 = ceilf((float)(DAT_18001b240 + 1) / DAT_18001b230);
    lVar7 = 0;
    if ((DAT_1800128dc <= fVar12) && (fVar12 = fVar12 - DAT_1800128dc, fVar12 < DAT_1800128dc)) {
      lVar7 = -0x8000000000000000;
    }
    uVar8 = 8;
    if (8 < (ulonglong)((longlong)fVar12 + lVar7)) {
      uVar8 = (longlong)fVar12 + lVar7;
    }
    uVar10 = uVar6;
    if ((uVar6 < uVar8) && ((0x1ff < uVar6 || (uVar10 = uVar6 * 8, uVar6 * 8 < uVar8)))) {
      uVar10 = uVar8;
    }
    FUN_180009e90(uVar8,uVar10);
    local_68 = *(undefined8 **)(DAT_18001b248 + 8 + (DAT_18001b260 & uVar11) * 0x10);
    if (local_68 == DAT_18001b238) {
      local_68 = DAT_18001b238;
    }
    else {
      puVar1 = *(undefined8 **)(DAT_18001b248 + (DAT_18001b260 & uVar11) * 0x10);
      uVar6 = puVar5[5];
      _Size = puVar5[4];
      while( true ) {
        puVar9 = local_68 + 2;
        if (0xf < (ulonglong)local_68[5]) {
          puVar9 = (undefined8 *)*puVar9;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < uVar6) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == local_68[4]) &&
           ((_Size == 0 || (iVar3 = memcmp(_Buf1,puVar9,_Size), iVar3 == 0)))) break;
        if (local_68 == puVar1) goto LAB_180009bfe;
        local_68 = (undefined8 *)local_68[1];
      }
      local_68 = (undefined8 *)*local_68;
    }
LAB_180009bfe:
    local_58 = local_68;
  }
  puVar1 = (undefined8 *)local_58[1];
  DAT_18001b240 = DAT_18001b240 + 1;
  *puVar5 = local_58;
  puVar5[1] = puVar1;
  *puVar1 = puVar5;
  local_58[1] = puVar5;
  lVar7 = DAT_18001b248;
  uVar11 = DAT_18001b260 & uVar11;
  puVar9 = *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10);
  if (puVar9 == DAT_18001b238) {
    *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar9 == local_58) {
      *(undefined8 **)(DAT_18001b248 + uVar11 * 0x10) = puVar5;
      goto LAB_180009c6f;
    }
    if (*(undefined8 **)(DAT_18001b248 + 8 + uVar11 * 0x10) != puVar1) goto LAB_180009c6f;
  }
  *(undefined8 **)(lVar7 + 8 + uVar11 * 0x10) = puVar5;
LAB_180009c6f:
  *param_2 = (longlong)puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ============================================================
// INDEX: 108/133
// FUNCTION: FUN_18000a140
// ENTRY: 18000a140
// RVA: 0xA140
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18000a140(longlong * param_1, UINT param_2, undefined8 * param_3)
// ============================================================

longlong * FUN_18000a140(longlong *param_1,UINT param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong _Size;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uVar1 = param_3[1];
  if (uVar1 != 0) {
    if (0x7fffffff < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180005910();
    }
    uVar4 = __std_fs_convert_wide_to_narrow(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_180009670(param_1,_Size,uVar2,_Size);
      }
      else {
        param_1[2] = uVar6;
        plVar5 = param_1;
        if (0xf < uVar2) {
          plVar5 = (longlong *)*param_1;
        }
        memset((void *)((longlong)plVar5 + uVar1),0,_Size);
        *(undefined1 *)((longlong)((longlong)plVar5 + uVar1) + _Size) = 0;
      }
    }
    else {
      param_1[2] = uVar6;
      plVar5 = param_1;
      if (0xf < (ulonglong)param_1[3]) {
        plVar5 = (longlong *)*param_1;
      }
      *(undefined1 *)((longlong)plVar5 + uVar6) = 0;
    }
    plVar5 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      plVar5 = (longlong *)*param_1;
    }
    uVar4 = __std_fs_convert_wide_to_narrow
                      (param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),(LPSTR)plVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005bf0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 109/133
// FUNCTION: FUN_18000c140
// ENTRY: 18000c140
// RVA: 0xC140
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 FUN_18000c140(undefined8 param_1, int param_2)
// ============================================================

undefined8 FUN_18000c140(undefined8 param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  puVar2 = DAT_180019328;
  puVar1 = (undefined8 *)*DAT_180019328;
  while( true ) {
    if (puVar1 == puVar2) {
                    /* WARNING: Could not recover jumptable at 0x00018000c18d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (*DAT_18001b2a0)(param_1,param_2);
      return uVar4;
    }
    iVar3 = FUN_18000c490(puVar1[2]);
    if (iVar3 == param_2) break;
    puVar1 = (undefined8 *)*puVar1;
  }
  return puVar1[3];
}



// ============================================================
// INDEX: 110/133
// FUNCTION: FUN_18000c230
// ENTRY: 18000c230
// RVA: 0xC230
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000c230(undefined8 * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18000c230(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_180019240 ^ (ulonglong)auStack_58;
  local_20 = *(undefined8 *)param_1[2];
  local_38 = ((undefined8 *)param_1[2])[1];
  puVar2 = param_1;
  uVar1 = FUN_18000c680(param_1,(byte *)&local_20);
  if ((char)uVar1 == '\0') {
    FUN_18000c740(puVar2,local_30,(byte *)&local_20,&local_38);
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 1;
    }
  }
  else if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
    return;
  }
  return;
}



// ============================================================
// INDEX: 111/133
// FUNCTION: FUN_18000c2c0
// ENTRY: 18000c2c0
// RVA: 0xC2C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000c2c0(undefined8 * param_1)
// ============================================================

void FUN_18000c2c0(undefined8 *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong local_18 [2];
  
  uVar8 = *(ulonglong *)param_1[2];
  local_18[0] = uVar8;
  uVar5 = FUN_18000c680(param_1,(byte *)local_18);
  plVar4 = DAT_180019328;
  if ((char)uVar5 == '\0') {
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
  }
  else {
    plVar7 = (longlong *)
             (((((((((uVar8 >> 8 & 0xff ^ (uVar8 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                     0x100000001b3 ^ uVar8 >> 0x10 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x18 & 0xff) *
                   0x100000001b3 ^ uVar8 >> 0x20 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x28 & 0xff) *
                 0x100000001b3 ^ uVar8 >> 0x30 & 0xff) * 0x100000001b3 ^ uVar8 >> 0x38) *
               0x100000001b3 & DAT_180019350) * 0x10 + DAT_180019338);
    plVar1 = (longlong *)plVar7[1];
    if (plVar1 == DAT_180019328) {
LAB_18000c3b9:
      plVar6 = (longlong *)0x0;
    }
    else {
      uVar2 = plVar1[2];
      plVar6 = plVar1;
      while (uVar8 != uVar2) {
        if (plVar6 == (longlong *)*plVar7) goto LAB_18000c3b9;
        plVar6 = (longlong *)plVar6[1];
        uVar2 = plVar6[2];
      }
    }
    if (plVar6 != (longlong *)0x0) {
      if (plVar1 == plVar6) {
        if ((longlong *)*plVar7 == plVar6) {
          *plVar7 = (longlong)DAT_180019328;
          plVar7[1] = (longlong)plVar4;
        }
        else {
          plVar7[1] = plVar6[1];
        }
      }
      else if ((longlong *)*plVar7 == plVar6) {
        *plVar7 = *plVar6;
      }
      lVar3 = *plVar6;
      DAT_180019330 = DAT_180019330 + -1;
      *(longlong *)plVar6[1] = lVar3;
      *(longlong *)(lVar3 + 8) = plVar6[1];
      FUN_18000f264(plVar6);
    }
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 1;
      return;
    }
  }
  return;
}



// ============================================================
// INDEX: 112/133
// FUNCTION: FUN_18000d158
// ENTRY: 18000d158
// RVA: 0xD158
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: ulonglong FUN_18000d158(uint param_1)
// ============================================================

ulonglong FUN_18000d158(uint param_1)

{
  ulonglong uVar1;
  byte *pbVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong local_18 [2];
  
  uVar4 = 0;
  uVar3 = 0;
  if (DAT_18001b2dc != 0) {
    pbVar2 = (byte *)(DAT_18001b2d0 + 0x20);
    do {
      if ((*pbVar2 >> 1 & 1) != param_1) {
        if (uVar3 == 0xffffffff) {
          return 0;
        }
        FUN_18000d44c(local_18,0xffffffff,(uint)(param_1 != 0));
        uVar5 = DAT_18001b2dc;
        goto LAB_18000d1f4;
      }
      uVar3 = uVar3 + 1;
      pbVar2 = pbVar2 + 0x38;
    } while (uVar3 < DAT_18001b2dc);
  }
  return 0;
LAB_18000d1f4:
  if (uVar5 <= uVar3) {
LAB_18000d1f9:
    FUN_18000da28(local_18);
    return uVar4;
  }
  if ((*(byte *)((ulonglong)uVar3 * 0x38 + 0x20 + DAT_18001b2d0) >> 1 & 1) != param_1) {
    uVar1 = FUN_18000d2f8((ulonglong)uVar3,param_1);
    uVar4 = uVar1 & 0xffffffff;
    uVar5 = DAT_18001b2dc;
    if ((int)uVar1 != 0) goto LAB_18000d1f9;
  }
  uVar3 = uVar3 + 1;
  goto LAB_18000d1f4;
}



// ============================================================
// INDEX: 113/133
// FUNCTION: FUN_18000d218
// ENTRY: 18000d218
// RVA: 0xD218
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: ulonglong FUN_18000d218(longlong param_1, uint param_2)
// ============================================================

ulonglong FUN_18000d218(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  uint uVar3;
  longlong local_18 [2];
  
  FUN_18000d40c();
  uVar3 = 0;
  if (DAT_18001a9e8 == 0) {
    uVar1 = 2;
  }
  else if (param_1 == 0) {
    uVar1 = FUN_18000d158(param_2);
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    plVar2 = DAT_18001b2d0;
    if (DAT_18001b2dc != 0) {
      do {
        if (param_1 == *plVar2) goto LAB_18000d282;
        uVar3 = uVar3 + 1;
        plVar2 = plVar2 + 7;
      } while (uVar3 < DAT_18001b2dc);
    }
    uVar3 = 0xffffffff;
LAB_18000d282:
    if (uVar3 == 0xffffffff) {
      uVar1 = 4;
    }
    else if ((*(byte *)(DAT_18001b2d0 + (ulonglong)uVar3 * 7 + 4) >> 1 & 1) == param_2) {
      uVar1 = (ulonglong)(6 - (param_2 != 0));
    }
    else {
      FUN_18000d44c(local_18,uVar3,1);
      uVar1 = FUN_18000d2f8((ulonglong)uVar3,param_2);
      uVar1 = uVar1 & 0xffffffff;
      FUN_18000da28(local_18);
    }
  }
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



// ============================================================
// INDEX: 114/133
// FUNCTION: FUN_18000d740
// ENTRY: 18000d740
// RVA: 0xD740
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: uint FUN_18000d740(undefined8 * param_1, LPCVOID param_2, undefined8 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_18000d740(undefined8 *param_1,LPCVOID param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  LPCVOID local_70;
  undefined8 *local_68;
  undefined8 local_60;
  int local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_180019240 ^ (ulonglong)auStack_98;
  FUN_18000d40c();
  if (DAT_18001a9e8 == 0) {
    uVar1 = 2;
  }
  else {
    uVar2 = FUN_18000dd30(param_1);
    if (((int)uVar2 == 0) || (uVar2 = FUN_18000dd30(param_2), (int)uVar2 == 0)) {
      uVar1 = 7;
    }
    else {
      plVar5 = DAT_18001b2d0;
      uVar1 = 0;
      if (DAT_18001b2dc != 0) {
        do {
          if (param_1 == (undefined8 *)*plVar5) goto LAB_18000d7c8;
          uVar1 = uVar1 + 1;
          plVar5 = plVar5 + 7;
        } while (uVar1 < DAT_18001b2dc);
      }
      uVar1 = 0xffffffff;
LAB_18000d7c8:
      if (uVar1 == 0xffffffff) {
        puVar3 = (undefined8 *)FUN_18000daa0(param_1);
        if (puVar3 == (undefined8 *)0x0) {
          uVar1 = 9;
        }
        else {
          local_78 = param_1;
          local_70 = param_2;
          local_68 = puVar3;
          uVar2 = FUN_18000dd64((ulonglong *)&local_78);
          if ((int)uVar2 == 0) {
            uVar1 = 8;
          }
          else {
            puVar4 = FUN_18000d010();
            if (puVar4 != (undefined8 *)0x0) {
              *puVar4 = local_78;
              puVar4[1] = local_60;
              puVar4[2] = local_68;
              *(byte *)(puVar4 + 4) = *(byte *)(puVar4 + 4) & 0xf8 | (byte)local_58 & 1;
              *(uint *)((longlong)puVar4 + 0x24) =
                   *(uint *)((longlong)puVar4 + 0x24) ^
                   (*(uint *)((longlong)puVar4 + 0x24) ^ local_54) & 0xf;
              puVar4[5] = local_50;
              puVar4[6] = local_48;
              if (local_58 == 0) {
                *(undefined4 *)(puVar4 + 3) = *(undefined4 *)param_1;
                *(undefined1 *)((longlong)puVar4 + 0x1c) = *(undefined1 *)((longlong)param_1 + 4);
              }
              else {
                *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((longlong)param_1 + -5);
                *(undefined2 *)((longlong)puVar4 + 0x1c) = *(undefined2 *)((longlong)param_1 + -1);
                *(undefined1 *)((longlong)puVar4 + 0x1e) = *(undefined1 *)((longlong)param_1 + 1);
              }
              uVar1 = 0;
              if (param_3 != (undefined8 *)0x0) {
                *param_3 = puVar4[2];
                uVar1 = 0;
              }
              goto LAB_18000d8bd;
            }
            uVar1 = 9;
          }
          FUN_18000dac4(puVar3);
        }
      }
      else {
        uVar1 = 3;
      }
    }
  }
LAB_18000d8bd:
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



// ============================================================
// INDEX: 115/133
// FUNCTION: FUN_18000d8e0
// ENTRY: 18000d8e0
// RVA: 0xD8E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000d8e0(longlong param_1)
// ============================================================

void FUN_18000d8e0(longlong param_1)

{
  FUN_18000d218(param_1,0);
  return;
}



// ============================================================
// INDEX: 116/133
// FUNCTION: FUN_18000d8e8
// ENTRY: 18000d8e8
// RVA: 0xD8E8
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000d8e8(longlong param_1)
// ============================================================

void FUN_18000d8e8(longlong param_1)

{
  FUN_18000d218(param_1,1);
  return;
}



// ============================================================
// INDEX: 117/133
// FUNCTION: FUN_18000d8f4
// ENTRY: 18000d8f4
// RVA: 0xD8F4
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 FUN_18000d8f4(void)
// ============================================================

undefined8 FUN_18000d8f4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_18000d40c();
  if (DAT_18001a9e8 == (HANDLE)0x0) {
    DAT_18001a9e8 = HeapCreate(0,0,0);
    if (DAT_18001a9e8 == (HANDLE)0x0) {
      uVar1 = 9;
    }
    else {
      FUN_18000dd2c();
    }
  }
  else {
    uVar1 = 1;
  }
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar1;
}



// ============================================================
// INDEX: 118/133
// FUNCTION: FUN_18000d950
// ENTRY: 18000d950
// RVA: 0xD950
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: ulonglong FUN_18000d950(longlong param_1)
// ============================================================

ulonglong FUN_18000d950(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong local_18 [2];
  
  uVar3 = 0;
  FUN_18000d40c();
  if (DAT_18001a9e8 == 0) {
    uVar3 = 2;
  }
  else {
    plVar1 = DAT_18001b2d0;
    uVar2 = uVar3;
    if (DAT_18001b2dc != 0) {
      do {
        uVar4 = (uint)uVar2;
        if (param_1 == *plVar1) goto LAB_18000d9a9;
        plVar1 = plVar1 + 7;
        uVar2 = (ulonglong)(uVar4 + 1);
      } while (uVar4 + 1 < DAT_18001b2dc);
    }
    uVar4 = 0xffffffff;
LAB_18000d9a9:
    if (uVar4 == 0xffffffff) {
      uVar3 = 4;
    }
    else {
      if ((*(byte *)(DAT_18001b2d0 + (ulonglong)uVar4 * 7 + 4) & 2) != 0) {
        FUN_18000d44c(local_18,uVar4,0);
        uVar2 = FUN_18000d2f8((ulonglong)uVar4,0);
        uVar3 = uVar2 & 0xffffffff;
        FUN_18000da28(local_18);
        if ((int)uVar2 != 0) goto LAB_18000da09;
      }
      FUN_18000dac4((undefined8 *)DAT_18001b2d0[(ulonglong)uVar4 * 7 + 2]);
      FUN_18000d0b4(uVar4);
    }
  }
LAB_18000da09:
  LOCK();
  DAT_18001a9e0 = 0;
  UNLOCK();
  return uVar3;
}



// ============================================================
// INDEX: 119/133
// FUNCTION: FUN_18000daa0
// ENTRY: 18000daa0
// RVA: 0xDAA0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000daa0(undefined8 * param_1)
// ============================================================

void FUN_18000daa0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = FUN_18000db2c(param_1);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)puVar2[1];
    *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + 1;
    puVar2[1] = uVar1;
  }
  return;
}



// ============================================================
// INDEX: 120/133
// FUNCTION: CreateToolhelp32Snapshot
// ENTRY: 18000e75f
// RVA: 0xE75F
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined CreateToolhelp32Snapshot(void)
// ============================================================

void CreateToolhelp32Snapshot(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e75f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CreateToolhelp32Snapshot();
  return;
}



// ============================================================
// INDEX: 121/133
// FUNCTION: Thread32First
// ENTRY: 18000e765
// RVA: 0xE765
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined Thread32First(void)
// ============================================================

void Thread32First(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e765. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32First();
  return;
}



// ============================================================
// INDEX: 122/133
// FUNCTION: Thread32Next
// ENTRY: 18000e76b
// RVA: 0xE76B
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined Thread32Next(void)
// ============================================================

void Thread32Next(void)

{
                    /* WARNING: Could not recover jumptable at 0x00018000e76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Thread32Next();
  return;
}



// ============================================================
// INDEX: 123/133
// FUNCTION: FUN_18000e89c
// ENTRY: 18000e89c
// RVA: 0xE89C
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: ulonglong FUN_18000e89c(void)
// ============================================================

ulonglong FUN_18000e89c(void)

{
  UINT UVar1;
  BOOL BVar2;
  ulonglong uVar3;
  
  UVar1 = ___lc_codepage_func();
  uVar3 = 0xfde9;
  if (UVar1 != 0xfde9) {
    BVar2 = AreFileApisANSI();
    uVar3 = (ulonglong)(BVar2 == 0);
  }
  return uVar3;
}



// ============================================================
// INDEX: 124/133
// FUNCTION: __security_check_cookie
// ENTRY: 18000ee90
// RVA: 0xEE90
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void __security_check_cookie(uintptr_t _StackCookie)
// ============================================================

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_180019240) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18000f888();
  return;
}



// ============================================================
// INDEX: 125/133
// FUNCTION: FUN_18000eeb0
// ENTRY: 18000eeb0
// RVA: 0xEEB0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000eeb0(size_t param_1)
// ============================================================

void FUN_18000eeb0(size_t param_1)

{
  int iVar1;
  void *pvVar2;
  
  do {
    pvVar2 = malloc(param_1);
    if (pvVar2 != (void *)0x0) {
      return;
    }
    iVar1 = _callnewh(param_1);
  } while (iVar1 != 0);
  if (param_1 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_1800015b0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_18000f9f0();
}



// ============================================================
// INDEX: 126/133
// FUNCTION: atexit
// ENTRY: 18000f244
// RVA: 0xF244
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int atexit(_func_5014 * param_1)
// ============================================================

/* Library Function - Single Match
    atexit
   
   Library: Visual Studio 2019 Release */

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// ============================================================
// INDEX: 127/133
// FUNCTION: FUN_18000f264
// ENTRY: 18000f264
// RVA: 0xF264
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000f264(void * param_1)
// ============================================================

void FUN_18000f264(void *param_1)

{
  free(param_1);
  return;
}



// ============================================================
// INDEX: 128/133
// FUNCTION: _Init_thread_footer
// ENTRY: 18000f2d4
// RVA: 0xF2D4
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined _Init_thread_footer(int * param_1)
// ============================================================

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2019 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
  uVar1 = (ulonglong)_tls_index;
  DAT_180019224 = DAT_180019224 + 1;
  *param_1 = DAT_180019224;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 4) = DAT_180019224;
  ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
                    /* WARNING: Could not recover jumptable at 0x00018000f336. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WakeAllConditionVariable(&DAT_18001aa48);
  return;
}



// ============================================================
// INDEX: 129/133
// FUNCTION: FUN_18000f340
// ENTRY: 18000f340
// RVA: 0xF340
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18000f340(int * param_1)
// ============================================================

void FUN_18000f340(int *param_1)

{
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_18000f3a5:
                    /* WARNING: Could not recover jumptable at 0x00018000f3b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_18001aa50);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) =
           DAT_180019224;
      goto LAB_18000f3a5;
    }
    SleepConditionVariableSRW
              ((PCONDITION_VARIABLE)&DAT_18001aa48,(PSRWLOCK)&DAT_18001aa50,0xffffffff,0);
  } while( true );
}



// ============================================================
// INDEX: 130/133
// FUNCTION: `eh_vector_destructor_iterator'
// ENTRY: 18000f3b8
// RVA: 0xF3B8
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void `eh_vector_destructor_iterator'(void * param_1, __uint64 param_2, __uint64 param_3, _func_void_void_ptr * param_4)
// ============================================================

/* Library Function - Single Match
    void __cdecl `eh vector destructor iterator'(void * __ptr64,unsigned __int64,unsigned
   __int64,void (__cdecl*)(void * __ptr64))
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __cdecl
_eh_vector_destructor_iterator_
          (void *param_1,__uint64 param_2,__uint64 param_3,_func_void_void_ptr *param_4)

{
  void *pvVar1;
  
  pvVar1 = (void *)(param_2 * param_3 + (longlong)param_1);
  while( true ) {
    if (param_3 == 0) break;
    pvVar1 = (void *)((longlong)pvVar1 - param_2);
    (*(code *)PTR__guard_dispatch_icall_180011450)(pvVar1);
    param_3 = param_3 - 1;
  }
  return;
}



// ============================================================
// INDEX: 131/133
// FUNCTION: memset
// ENTRY: 18001000a
// RVA: 0x1000A
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void * memset(void * _Dst, int _Val, size_t _Size)
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018001000a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// INDEX: 132/133
// FUNCTION: FUN_180010950
// ENTRY: 180010950
// RVA: 0x10950
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180010950(void)
// ============================================================

void FUN_180010950(void)

{
  longlong *plVar1;
  
  if (DAT_18001b270 != (longlong *)0x0) {
    FUN_180006fc0(DAT_18001b270,DAT_18001b278);
    plVar1 = DAT_18001b270;
    if ((0xfff < (DAT_18001b280 - (longlong)DAT_18001b270 & 0xffffffffffffffe0U)) &&
       (plVar1 = (longlong *)DAT_18001b270[-1],
       0x1f < (ulonglong)((longlong)DAT_18001b270 + (-8 - (longlong)plVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(plVar1);
    DAT_18001b270 = (longlong *)0x0;
    DAT_18001b278 = (longlong *)0x0;
    DAT_18001b280 = 0;
  }
  return;
}



// ============================================================
// INDEX: 133/133
// FUNCTION: FUN_1800109d0
// ENTRY: 1800109d0
// RVA: 0x109D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800109d0(void)
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800109d0(void)

{
  void *pvVar1;
  
  if (DAT_18001b248 != (void *)0x0) {
    pvVar1 = DAT_18001b248;
    if ((0xfff < (DAT_18001b258 - (longlong)DAT_18001b248 & 0xfffffffffffffff8U)) &&
       (pvVar1 = *(void **)((longlong)DAT_18001b248 + -8),
       0x1f < (ulonglong)((longlong)DAT_18001b248 + (-8 - (longlong)pvVar1)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18000f264(pvVar1);
    DAT_18001b248 = (void *)0x0;
    _DAT_18001b250 = 0;
    DAT_18001b258 = 0;
  }
  FUN_1800087d0(&DAT_18001b238);
  return;
}



