// RDRMP TARGETED DECOMPILATION
// Program: client-shared.dll
// Functions: 227
// ============================================================

// ============================================================
// INDEX: 1/227
// FUNCTION: LoadData
// ENTRY: 1800189c0
// RVA: 0x189C0
// PRIORITY: 155
// SEED TYPE: STRING,NAME
// SIGNATURE: bool LoadData(Config * this, basic_value<toml::discard_comments,std::unordered_map,std::vector> * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: bool __cdecl Config::LoadData(class toml::basic_value<struct toml::discard_comments,class
   std::unordered_map,class std::vector> & __ptr64)const __ptr64 */

bool __thiscall
Config::LoadData(Config *this,
                basic_value<toml::discard_comments,std::unordered_map,std::vector> *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  longlong *plVar8;
  undefined1 auStack_238 [48];
  Config *pCStack_208;
  undefined8 uStack_200;
  longlong alStack_1f8 [4];
  char acStack_1d8 [56];
  longlong *plStack_1a0;
  undefined8 **appuStack_190 [5];
  undefined8 auStack_168 [4];
  longlong alStack_148 [3];
  int iStack_12c;
  longlong alStack_128 [2];
  basic_streambuf<char,std::char_traits<char>_> abStack_118 [8];
  basic_istream<char,std::char_traits<char>_> abStack_110 [152];
  basic_ios<char,std::char_traits<char>_> abStack_78 [96];
  ulonglong uStack_18;
  
                    /* 0x189c0  90
                       ?LoadData@Config@@QEBA_NAEAV?$basic_value@Udiscard_comments@toml@@Vunordered_map@std@@Vvector@4@@toml@@@Z
                        */
  uStack_18 = DAT_18008d040 ^ (ulonglong)auStack_238;
  uVar5 = FUN_180006010((LPCWSTR)this);
  if ((char)uVar5 == '\0') {
    Log::Print(3,(char *)0x0,"Failed to load config data, file doesn\'t exist !");
    bVar4 = false;
  }
  else {
    memset(alStack_128,0,0x110);
    FUN_18003a240((basic_istream<char,std::char_traits<char>_> *)alStack_128,(wchar_t *)this);
    bVar4 = std::ios_base::good((ios_base *)
                                ((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)));
    if (!bVar4) {
      puVar7 = (ulonglong *)FUN_180001fe0((undefined4 *)&pCStack_208);
      plVar8 = FUN_180005600((undefined8 *)this,alStack_1f8);
      plVar8 = FUN_180027b60(auStack_168,0x18007a488,plVar8);
      plVar8 = FUN_180026af0(alStack_148,plVar8,&DAT_180078f4c);
      FUN_1800027a0(appuStack_190,plVar8,puVar7);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(appuStack_190,(ThrowInfo *)&DAT_180088ee8);
    }
    std::ios_base::exceptions
              ((ios_base *)((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)),6);
    pCStack_208 = this;
    if (7 < *(ulonglong *)(this + 0x18)) {
      pCStack_208 = *(Config **)this;
    }
    uStack_200 = *(undefined8 *)(this + 0x10);
    uVar6 = FUN_18006cde8();
    FUN_1800443c0(alStack_1f8,(UINT)uVar6,&pCStack_208);
    FUN_18003a370(acStack_1d8,alStack_128,alStack_1f8);
    *(undefined ***)((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(alStack_128[0] + 4)) =
         *(int *)(alStack_128[0] + 4) + -0xb0;
    FUN_18001a790(abStack_118);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (abStack_110);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_78);
    FUN_18001f780((char *)param_1,acStack_1d8);
    FUN_180022a30(acStack_1d8);
    if (plStack_1a0 != (longlong *)0x0) {
      LOCK();
      plVar8 = plStack_1a0 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plStack_1a0)(plStack_1a0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_1a0 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plStack_1a0 + 8))(plStack_1a0);
        }
      }
    }
    bVar4 = true;
  }
  return bVar4;
}



// ============================================================
// INDEX: 2/227
// FUNCTION: FUN_18000b160
// ENTRY: 18000b160
// RVA: 0xB160
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: byte * FUN_18000b160(byte * param_1, longlong param_2, longlong param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

byte * FUN_18000b160(byte *param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 ****ppppuVar3;
  basic_istream<char,struct_std::char_traits<char>_> *this;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined *puVar9;
  ulonglong uVar10;
  size_t sVar11;
  byte bVar12;
  undefined1 auStack_3d8 [48];
  undefined4 uStack_3a8;
  undefined8 ***pppuStack_3a0;
  undefined8 uStack_398;
  ulonglong uStack_390;
  ulonglong uStack_388;
  undefined ***pppuStack_378;
  undefined8 uStack_370;
  longlong alStack_368 [3];
  byte *pbStack_350;
  undefined8 auStack_348 [2];
  char acStack_338 [32];
  longlong alStack_318 [4];
  undefined4 auStack_2f8 [28];
  undefined8 auStack_288 [18];
  undefined4 auStack_1f8 [20];
  undefined4 auStack_1a8 [20];
  uint auStack_158 [2];
  undefined8 ***pppuStack_150;
  undefined8 uStack_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  int iStack_12c;
  undefined *apuStack_128 [2];
  undefined **ppuStack_118;
  basic_istream<char,std::char_traits<char>_> abStack_110 [120];
  basic_ios<char,std::char_traits<char>_> abStack_98 [96];
  ulonglong uStack_38;
  
  uStack_38 = DAT_18008d040 ^ (ulonglong)auStack_3d8;
  sVar11 = 0;
  uStack_3a8 = 0;
  puVar9 = *(undefined **)(param_2 + 0x38);
  pppuStack_3a0 = (undefined8 ****)0x0;
  uStack_398 = 0;
  uStack_390 = 0;
  uStack_388 = 0;
  if (puVar9 == *(undefined **)(param_2 + 0x40)) {
    puVar9 = &DAT_1800789f6;
  }
  else {
    sVar11 = (longlong)*(undefined **)(param_2 + 0x40) - (longlong)puVar9;
  }
  pbStack_350 = param_1;
  FUN_180027650(&pppuStack_3a0,puVar9,sVar11);
  uStack_3a8 = 6;
  pppuStack_150 = (undefined8 ****)0x0;
  uStack_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  if (uStack_390 != 0) {
    uVar10 = 0xffffffffffffffff;
    if (uStack_390 - 1 != 0xffffffffffffffff) {
      uVar10 = uStack_390 - 1;
    }
    ppppuVar3 = &pppuStack_3a0;
    if (0xf < uStack_388) {
      ppppuVar3 = (undefined8 ****)pppuStack_3a0;
    }
    if (uVar10 < 0x10) {
      FUN_180027650(&pppuStack_150,(void *)((longlong)ppppuVar3 + 1),uVar10);
      uVar10 = uStack_388;
    }
    else {
      memmove(ppppuVar3,(void *)((longlong)ppppuVar3 + 1),uVar10);
      ppppuVar3 = &pppuStack_3a0;
      if (0xf < uStack_388) {
        ppppuVar3 = (undefined8 ****)pppuStack_3a0;
      }
      uStack_390 = uVar10;
      *(undefined1 *)((longlong)ppppuVar3 + uVar10) = 0;
      pppuStack_150 = pppuStack_3a0;
      uStack_148 = uStack_398;
      uStack_140 = uStack_390;
      uStack_138 = uStack_388;
      pppuStack_3a0 = (undefined8 ***)((ulonglong)pppuStack_3a0 & 0xffffffffffffff00);
      uVar10 = 0xf;
    }
    uStack_3a8 = 0xe;
    if (0xf < uVar10) {
      ppppuVar3 = (undefined8 ****)pppuStack_3a0;
      if ((0xfff < uVar10 + 1) &&
         (ppppuVar3 = (undefined8 ****)pppuStack_3a0[-1],
         0x1f < (ulonglong)((longlong)pppuStack_3a0 + (-8 - (longlong)ppppuVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppuVar3);
    }
    memset(apuStack_128,0,0xf0);
    apuStack_128[0] = &DAT_18007b5b0;
    std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
              (abStack_98);
    uStack_3a8 = 0x1e;
    std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
              ((basic_istream<char,std::char_traits<char>_> *)apuStack_128,
               (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_118,false);
    *(undefined ***)((longlong)apuStack_128 + (longlong)*(int *)(apuStack_128[0] + 4)) =
         std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(apuStack_128[0] + 4)) =
         *(int *)(apuStack_128[0] + 4) + -0x90;
    pppuStack_378 = &ppuStack_118;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>
              ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_118);
    ppuStack_118 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    ppppuVar3 = &pppuStack_150;
    if (0xf < uStack_138) {
      ppppuVar3 = (undefined8 ****)pppuStack_150;
    }
    uVar10 = uStack_140;
    FUN_180024330((longlong)&ppuStack_118,ppppuVar3,uStack_140,2);
    this = std::basic_istream<char,std::char_traits<char>_>::operator>>
                     ((basic_istream<char,std::char_traits<char>_> *)apuStack_128,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002870);
    std::basic_istream<char,std::char_traits<char>_>::operator>>
              ((basic_istream<char,std::char_traits<char>_> *)this,auStack_158);
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0xf;
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    *param_1 = 0;
    uStack_3a8 = 0x1f;
    if (auStack_158[0] < 0x80) {
      param_1[0x10] = 1;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = (byte)auStack_158[0];
      param_1[1] = 0;
    }
    else if (auStack_158[0] < 0x800) {
      param_1[0x10] = 1;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      *param_1 = (byte)(auStack_158[0] >> 6) | 0xc0;
      param_1[1] = 0;
      param_1[0x10] = 2;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[1] = (byte)auStack_158[0] & 0x3f | 0x80;
      param_1[2] = 0;
    }
    else {
      if (auStack_158[0] < 0x10000) {
        if ((0xd7ff < auStack_158[0]) && (auStack_158[0] < 0xe000)) {
          puVar5 = FUN_180004170(auStack_1f8,param_3);
          FUN_1800205d0(alStack_368);
          puVar6 = FUN_180004170(auStack_1a8,param_3);
          FUN_180026f20(auStack_2f8,puVar6,"not a valid UTF-8 codepoint");
          puVar7 = FUN_18001f5f0(auStack_348,auStack_2f8,auStack_288);
          pppuStack_378 = (undefined ***)*puVar7;
          uStack_370 = puVar7[1];
          FUN_18001fb60(&pppuStack_3a0,(longlong *)&pppuStack_378);
          FUN_1800208c0((undefined8 *)acStack_338,
                        "toml::read_utf8_codepoint: codepoints in the range [0xD800, 0xDFFF] are not valid UTF-8."
                       );
          plVar8 = FUN_1800042c0(alStack_318,acStack_338,(longlong *)&pppuStack_3a0,alStack_368);
          FUN_1800051f0(auStack_288,plVar8,puVar5);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_288,(ThrowInfo *)&DAT_180088d60);
        }
        param_1[0x10] = 1;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = (byte)(auStack_158[0] >> 0xc) | 0xe0;
        param_1[1] = 0;
        param_1[0x10] = 2;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[1] = (byte)(auStack_158[0] >> 6) & 0x3f | 0x80;
        param_1[2] = 0;
      }
      else {
        if (0x10ffff < auStack_158[0]) {
          puVar5 = FUN_180004170(auStack_1a8,param_3);
          FUN_1800205d0(&pppuStack_3a0);
          puVar6 = FUN_180004170(auStack_1f8,param_3);
          FUN_180026f20(auStack_2f8,puVar6,"should be in [0x00..0x10FFFF]");
          puVar7 = FUN_18001f5f0(auStack_348,auStack_2f8,auStack_288);
          pppuStack_378 = (undefined ***)*puVar7;
          uStack_370 = puVar7[1];
          FUN_18001fb60(alStack_368,(longlong *)&pppuStack_378);
          FUN_1800208c0((undefined8 *)acStack_338,
                        "toml::read_utf8_codepoint: input codepoint is too large.");
          plVar8 = FUN_1800042c0(alStack_318,acStack_338,alStack_368,(longlong *)&pppuStack_3a0);
          FUN_1800051f0(auStack_288,plVar8,puVar5);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_288,(ThrowInfo *)&DAT_180088d60);
        }
        param_1[0x10] = 1;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        *param_1 = (byte)(auStack_158[0] >> 0x12) | 0xf0;
        param_1[1] = 0;
        param_1[0x10] = 2;
        param_1[0x11] = 0;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        param_1[0x14] = 0;
        param_1[0x15] = 0;
        param_1[0x16] = 0;
        param_1[0x17] = 0;
        param_1[1] = (byte)(auStack_158[0] >> 0xc) & 0x3f | 0x80;
        param_1[2] = 0;
        bVar12 = (byte)(auStack_158[0] >> 6) & 0x3f | 0x80;
        uVar1 = *(ulonglong *)(param_1 + 0x10);
        uVar2 = *(ulonglong *)(param_1 + 0x18);
        if (uVar1 < uVar2) {
          *(ulonglong *)(param_1 + 0x10) = uVar1 + 1;
          pbVar4 = param_1;
          if (0xf < uVar2) {
            pbVar4 = *(byte **)param_1;
          }
          pbVar4[uVar1] = bVar12;
          pbVar4[uVar1 + 1] = 0;
        }
        else {
          FUN_18002cf70((undefined8 *)param_1,uVar2,uVar10,bVar12);
        }
      }
      bVar12 = (byte)auStack_158[0] & 0x3f | 0x80;
      uVar1 = *(ulonglong *)(param_1 + 0x18);
      uVar2 = *(ulonglong *)(param_1 + 0x10);
      if (uVar2 < uVar1) {
        *(ulonglong *)(param_1 + 0x10) = uVar2 + 1;
        pbVar4 = param_1;
        if (0xf < uVar1) {
          pbVar4 = *(byte **)param_1;
        }
        pbVar4[uVar2 + 1] = 0;
        pbVar4[uVar2] = bVar12;
      }
      else {
        FUN_18002cf70((undefined8 *)param_1,uVar1,uVar10,bVar12);
      }
    }
    *(undefined ***)((longlong)apuStack_128 + (longlong)*(int *)(apuStack_128[0] + 4)) =
         std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(apuStack_128[0] + 4)) =
         *(int *)(apuStack_128[0] + 4) + -0x90;
    FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_118);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (abStack_110);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_98);
    if (0xf < uStack_138) {
      ppppuVar3 = (undefined8 ****)pppuStack_150;
      if ((0xfff < uStack_138 + 1) &&
         (ppppuVar3 = (undefined8 ****)pppuStack_150[-1],
         0x1f < (ulonglong)((longlong)pppuStack_150 + (-8 - (longlong)ppppuVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppuVar3);
    }
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_180020a20();
}



// ============================================================
// INDEX: 3/227
// FUNCTION: FUN_180029d50
// ENTRY: 180029d50
// RVA: 0x29D50
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined FUN_180029d50(void)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

wchar_t * FUN_180029d50(wchar_t *param_1,wchar_t *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  undefined1 auStack_1f8 [48];
  wchar_t *pwStack_1c8;
  undefined8 uStack_1c0;
  longlong alStack_1b0 [4];
  undefined8 **appuStack_190 [5];
  undefined8 auStack_168 [4];
  longlong alStack_148 [3];
  int iStack_12c;
  longlong alStack_128 [2];
  basic_streambuf<char,std::char_traits<char>_> abStack_118 [8];
  basic_istream<char,std::char_traits<char>_> abStack_110 [152];
  basic_ios<char,std::char_traits<char>_> abStack_78 [96];
  ulonglong uStack_18;
  
  uStack_18 = DAT_18008d040 ^ (ulonglong)auStack_1f8;
  pwStack_1c8 = param_1;
  memset(alStack_128,0,0x110);
  FUN_18003a240((basic_istream<char,std::char_traits<char>_> *)alStack_128,param_2);
  bVar1 = std::ios_base::good((ios_base *)
                              ((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)));
  if (bVar1) {
    std::ios_base::exceptions
              ((ios_base *)((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)),6);
    pwStack_1c8 = param_2;
    if (7 < *(ulonglong *)(param_2 + 0xc)) {
      pwStack_1c8 = *(wchar_t **)param_2;
    }
    uStack_1c0 = *(undefined8 *)(param_2 + 8);
    uVar2 = FUN_18006cde8();
    FUN_1800443c0(alStack_1b0,(UINT)uVar2,&pwStack_1c8);
    FUN_18003a510(param_1,alStack_128,alStack_1b0);
    *(undefined ***)((longlong)alStack_128 + (longlong)*(int *)(alStack_128[0] + 4)) =
         std::basic_ifstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(alStack_128[0] + 4)) =
         *(int *)(alStack_128[0] + 4) + -0xb0;
    FUN_18001a790(abStack_118);
    std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
              (abStack_110);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_78);
    return param_1;
  }
  puVar3 = (ulonglong *)FUN_180001fe0((undefined4 *)&pwStack_1c8);
  plVar4 = FUN_180005600((undefined8 *)param_2,alStack_1b0);
  plVar4 = FUN_180027b60(auStack_168,0x18007a488,plVar4);
  plVar4 = FUN_180026af0(alStack_148,plVar4,&DAT_180078f4c);
  FUN_1800027a0(appuStack_190,plVar4,puVar3);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(appuStack_190,(ThrowInfo *)&DAT_180088ee8);
}



// ============================================================
// INDEX: 4/227
// FUNCTION: FUN_180038500
// ENTRY: 180038500
// RVA: 0x38500
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined1 * FUN_180038500(undefined1 * param_1, undefined8 * * * * param_2, char * param_3, longlong * param_4, longlong * param_5, undefined * * * param_6, char param_7)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180038a77) */
/* WARNING: Removing unreachable block (ram,0x000180038c65) */

undefined1 *
FUN_180038500(undefined1 *param_1,undefined8 ****param_2,char *param_3,longlong *param_4,
             longlong *param_5,undefined ***param_6,char param_7)

{
  int *piVar1;
  undefined8 *****pppppuVar2;
  undefined8 ****ppppuVar3;
  undefined **ppuVar4;
  float *pfVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  undefined7 extraout_var;
  char *pcVar9;
  longlong *plVar10;
  longlong lVar11;
  short ******ppppppsVar12;
  undefined7 extraout_var_00;
  undefined8 ******ppppppuVar13;
  undefined ***pppuVar14;
  char *pcVar15;
  undefined8 uVar16;
  undefined7 extraout_var_01;
  longlong *plVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  longlong *plVar21;
  undefined1 *puVar22;
  undefined8 ******ppppppuVar23;
  undefined8 *puVar24;
  undefined8 *****pppppuVar25;
  ulonglong uVar26;
  undefined **ppuVar27;
  longlong lVar28;
  longlong *plVar29;
  size_t sVar30;
  undefined **ppuVar31;
  undefined1 auStackY_528 [32];
  bool abStack_4f8 [8];
  undefined8 *****pppppuStack_4f0;
  undefined8 uStack_4e8;
  ulonglong uStack_4e0;
  float *pfStack_4d8;
  char *pcStack_4d0;
  undefined ***pppuStack_4c8;
  longlong *plStack_4c0;
  undefined8 *****pppppuStack_4b8;
  undefined8 ****ppppuStack_4b0;
  ulonglong uStack_4a8;
  float *pfStack_4a0;
  float *pfStack_498;
  undefined8 *****pppppuStack_490;
  undefined1 *puStack_488;
  undefined **ppuStack_480;
  undefined **ppuStack_478;
  undefined **ppuStack_470;
  undefined ***pppuStack_458;
  undefined8 uStack_450;
  longlong alStack_438 [4];
  longlong alStack_418 [4];
  short *****pppppsStack_3f8;
  undefined8 uStack_3f0;
  longlong lStack_3e8;
  ulonglong uStack_3e0;
  float afStack_3d8 [2];
  longlong lStack_3d0;
  undefined8 uStack_3c8;
  ulonglong auStack_3c0 [9];
  undefined **appuStack_378 [7];
  longlong *plStack_340;
  undefined4 auStack_328 [28];
  undefined4 auStack_2b8 [28];
  longlong alStack_248 [4];
  undefined1 auStack_228 [112];
  undefined8 auStack_1b8 [14];
  undefined4 auStack_148 [28];
  undefined ***pppuStack_d8;
  undefined8 ****ppppuStack_d0;
  undefined8 ****ppppuStack_c8;
  undefined8 *****pppppuStack_c0;
  undefined **ppuStack_b8;
  undefined **ppuStack_b0;
  undefined8 uStack_a8;
  undefined **ppuStack_98;
  undefined **ppuStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  ulonglong uStack_48;
  
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStackY_528;
  pppuStack_458 = param_6;
  pppuStack_d8 = param_6;
  pcStack_4d0 = param_3;
  puStack_488 = param_1;
  if (param_4 == param_5) {
    pppppuStack_4f0 = (undefined8 ******)0x0;
    uStack_4e8 = 0;
    uStack_4e0 = 0;
    pfStack_4d8 = (float *)0x0;
    FUN_180027650(&pppppuStack_4f0,"toml::detail::insert_nested_key: never reach here",0x31);
    *param_1 = 0;
    *(undefined8 ******)(param_1 + 8) = pppppuStack_4f0;
    *(undefined8 *)(param_1 + 0x10) = uStack_4e8;
    *(ulonglong *)(param_1 + 0x18) = uStack_4e0;
    *(float **)(param_1 + 0x20) = pfStack_4d8;
  }
  else {
    pfStack_498 = (float *)0xf;
    plVar21 = param_4;
    while (plVar21 + 4 != param_5) {
      bVar6 = FUN_180046660((longlong)param_2,plVar21);
      if (CONCAT71(extraout_var,bVar6) == 0) {
        pppppuStack_490 = &pppppuStack_4f0;
        pppppuStack_4f0 = (undefined8 ******)0x0;
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        pppuStack_4c8 = &ppuStack_98;
        ppuStack_98 = toml::detail::region::vftable;
        if (param_6[2] != (undefined **)0x0) {
          LOCK();
          ppuVar27 = param_6[2] + 1;
          *(int *)ppuVar27 = *(int *)ppuVar27 + 1;
          UNLOCK();
        }
        ppuStack_90 = param_6[1];
        ppuStack_88 = param_6[2];
        FUN_180020900(&uStack_80,param_6 + 3);
        ppuStack_60 = param_6[7];
        ppuStack_58 = param_6[8];
        uStack_3c8 = 0;
        lStack_3d0 = FUN_18006d620(0x78);
        *(longlong *)lStack_3d0 = lStack_3d0;
        *(longlong *)(lStack_3d0 + 8) = lStack_3d0;
        auStack_3c0[0] = 0;
        auStack_3c0[1] = 0;
        auStack_3c0[2] = 0;
        auStack_3c0[3] = 7;
        auStack_3c0[4] = 8;
        afStack_3d8[0] = 1.0;
        FUN_180024cd0(auStack_3c0,0x10,lStack_3d0);
        pcVar9 = FUN_1800318b0((undefined1 *)appuStack_378,afStack_3d8,(longlong)&ppuStack_98,
                               (longlong *)&pppppuStack_4f0);
        plVar10 = FUN_18004a860((float *)param_2,&ppuStack_480,plVar21);
        FUN_18001f780((char *)(*plVar10 + 0x30),pcVar9);
        FUN_180022a30((char *)appuStack_378);
        plVar10 = plStack_340;
        if (plStack_340 != (longlong *)0x0) {
          LOCK();
          plVar29 = plStack_340 + 1;
          lVar11 = *plVar29;
          *(int *)plVar29 = (int)*plVar29 + -1;
          UNLOCK();
          if ((int)lVar11 == 1) {
            (**(code **)*plStack_340)(plStack_340);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 == 1) {
              (**(code **)(*plVar10 + 8))(plVar10);
            }
          }
        }
        FUN_180024e20((longlong)afStack_3d8);
      }
      pcVar9 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
      if (*pcVar9 == '\n') {
        lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
        if ((*(longlong **)(lVar11 + 0x30) != (longlong *)0x0) &&
           (cVar7 = (**(code **)(**(longlong **)(lVar11 + 0x30) + 0x10))(), cVar7 == '{')) {
          puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)appuStack_378);
          FUN_1800205d0(&pppppuStack_4f0);
          lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
          puVar19 = FUN_180031420(lVar11,(undefined4 *)&ppuStack_98);
          FUN_180026f20((undefined4 *)auStack_1b8,puVar19,"inline tables are immutable");
          puVar19 = FUN_180031420((longlong)pcStack_4d0,afStack_3d8);
          FUN_180026f20(auStack_148,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_1b8,&pppuStack_d8);
          pppuStack_458 = (undefined ***)*puVar20;
          uStack_450 = puVar20[1];
          FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_458);
          plVar21 = FUN_180046650((longlong *)&pppuStack_4c8,(longlong)plVar21);
          plVar21 = FUN_180046760((longlong *)&ppuStack_480,param_4,(undefined8 *)*plVar21);
          plVar21 = FUN_1800481e0(alStack_438,param_4,(char *)plVar21);
          plVar21 = FUN_1800042c0(alStack_418,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                  (longlong *)&pppppuStack_4f0);
          FUN_1800051f0(alStack_248,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(alStack_248,(ThrowInfo *)&DAT_180088d60);
        }
        plVar10 = FUN_18004a860((float *)param_2,&ppppuStack_d0,plVar21);
        lVar11 = *plVar10;
        cVar7 = *(char *)(lVar11 + 0x30);
        if (cVar7 != '\n') {
          FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18002a280((char *)&pppppuStack_4f0,cVar7,lVar11 + 0x30);
        }
        param_2 = *(undefined8 *****)(lVar11 + 0x38);
        plVar21 = plVar21 + 4;
      }
      else {
        pcVar9 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
        if (*pcVar9 != '\t') {
          puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
          FUN_1800205d0(&pppppuStack_4f0);
          lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
          puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
          plVar10 = plVar21;
          puVar22 = (undefined1 *)FUN_1800407f0((longlong)param_2,plVar21);
          abStack_4f8[0] = (bool)FUN_18001f770(puVar22);
          plVar10 = FUN_180048640((longlong *)afStack_3d8,plVar10,abStack_4f8);
          FUN_180027ab0(auStack_328,puVar19,plVar10);
          puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
          FUN_180026f20(auStack_2b8,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
          pppuStack_458 = (undefined ***)*puVar20;
          uStack_450 = puVar20[1];
          FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_458);
          plVar21 = FUN_180046650((longlong *)&pppuStack_4c8,(longlong)plVar21);
          plVar21 = FUN_180046760(alStack_418,param_4,(undefined8 *)*plVar21);
          plVar21 = FUN_180048410(alStack_438,param_4,(char *)plVar21);
          plVar21 = FUN_1800042c0((longlong *)&ppuStack_480,(char *)plVar21,
                                  (longlong *)&ppppuStack_d0,(longlong *)&pppppuStack_4f0);
          FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
        }
        plVar10 = FUN_18004a860((float *)param_2,&pppppuStack_4b8,plVar21);
        lVar11 = *plVar10;
        abStack_4f8[0] = *(bool *)(lVar11 + 0x30);
        if (abStack_4f8[0] != true) {
          FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18004a360((char *)&pppppuStack_4f0,abStack_4f8[0],lVar11 + 0x30);
        }
        ppppppuVar13 = *(undefined8 *******)(lVar11 + 0x38);
        pppppuVar25 = ppppppuVar13[1];
        pppppuStack_490 = ppppppuVar13;
        if (*(char *)(pppppuVar25 + -9) != '\n') {
          puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
          FUN_1800205d0(&pppppuStack_4f0);
          lVar11 = FUN_180040710((longlong)ppppppuVar13);
          pppuVar14 = appuStack_378;
          puVar19 = FUN_180031420(lVar11,(undefined4 *)pppuVar14);
          puVar22 = (undefined1 *)FUN_180040710((longlong)pppppuStack_490);
          abStack_4f8[0] = (bool)FUN_18001f770(puVar22);
          plVar10 = FUN_180048640((longlong *)afStack_3d8,pppuVar14,abStack_4f8);
          FUN_180027ab0(auStack_328,puVar19,plVar10);
          puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
          FUN_180026f20(auStack_2b8,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
          pppuStack_458 = (undefined ***)*puVar20;
          uStack_450 = puVar20[1];
          FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_458);
          plVar21 = FUN_180046650((longlong *)&pppuStack_4c8,(longlong)plVar21);
          plVar21 = FUN_180046760(alStack_418,param_4,(undefined8 *)*plVar21);
          plVar21 = FUN_180048410(alStack_438,param_4,(char *)plVar21);
          plVar21 = FUN_1800042c0((longlong *)&ppuStack_480,(char *)plVar21,
                                  (longlong *)&ppppuStack_d0,(longlong *)&pppppuStack_4f0);
          FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
        }
        pppppuVar2 = *ppppppuVar13;
        if (pppppuVar2 == pppppuVar25) {
          puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
          FUN_1800205d0(&pppppuStack_4f0);
          lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
          puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
          puVar20 = FUN_1800208c0((undefined8 *)afStack_3d8,"this array is not insertable");
          FUN_180027ab0(auStack_328,puVar19,puVar20);
          puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
          puVar20 = FUN_1800208c0(alStack_418,"appending it to the statically sized array");
          FUN_180027ab0(auStack_2b8,puVar19,puVar20);
          puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
          pppuStack_4c8 = (undefined ***)*puVar20;
          plStack_4c0 = (longlong *)puVar20[1];
          FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
          plVar21 = FUN_180046760(alStack_438,param_4,param_5);
          plVar21 = FUN_180048850((longlong *)&ppuStack_480,param_4,(char *)plVar21);
          plVar21 = FUN_1800042c0((longlong *)&pppuStack_458,(char *)plVar21,
                                  (longlong *)&ppppuStack_d0,(longlong *)&pppppuStack_4f0);
          FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
        }
        lVar11 = (longlong)pppppuVar25 - (longlong)pppppuVar2 >> 0x3f;
        if (((longlong)pppppuVar25 - (longlong)pppppuVar2) / 0x48 + lVar11 == lVar11) {
                    /* WARNING: Subroutine does not return */
          FUN_180022b00();
        }
        ppppuVar3 = pppppuVar2[6];
        cVar7 = '\t';
        if (ppppuVar3 != (undefined8 ****)0x0) {
          puVar20 = (undefined8 *)(*(code *)(*ppppuVar3)[3])(ppppuVar3,&pppppuStack_4f0);
          pppppsStack_3f8 = (short *****)0x0;
          uStack_3f0 = 0;
          lStack_3e8 = 0;
          uStack_3e0 = 0;
          sVar30 = 2;
          if ((ulonglong)puVar20[2] < 2) {
            sVar30 = puVar20[2];
          }
          puVar24 = puVar20;
          if (0xf < (ulonglong)puVar20[3]) {
            puVar24 = (undefined8 *)*puVar20;
          }
          if (sVar30 < 0x10) {
            FUN_180027650(&pppppsStack_3f8,puVar24,sVar30);
          }
          else {
            puVar20[2] = sVar30;
            puVar24 = puVar20;
            if (0xf < (ulonglong)puVar20[3]) {
              puVar24 = (undefined8 *)*puVar20;
            }
            *(undefined1 *)((longlong)puVar24 + sVar30) = 0;
            pppppsStack_3f8 = (short *****)*puVar20;
            uStack_3f0 = puVar20[1];
            lStack_3e8 = puVar20[2];
            uStack_3e0 = puVar20[3];
            puVar20[2] = 0;
            puVar20[3] = 0xf;
            *(undefined1 *)puVar20 = 0;
          }
          ppppppsVar12 = &pppppsStack_3f8;
          if (0xf < uStack_3e0) {
            ppppppsVar12 = (short ******)pppppsStack_3f8;
          }
          if (lStack_3e8 == 2) {
            abStack_4f8[0] = *(short *)ppppppsVar12 == 0x5b5b;
          }
          else {
            abStack_4f8[0] = false;
          }
          if (0xf < uStack_3e0) {
            ppppppsVar12 = (short ******)pppppsStack_3f8;
            if ((0xfff < uStack_3e0 + 1) &&
               (ppppppsVar12 = (short ******)pppppsStack_3f8[-1],
               0x1f < (ulonglong)((longlong)pppppsStack_3f8 + (-8 - (longlong)ppppppsVar12)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(ppppppsVar12);
          }
          if ((float *)0xf < pfStack_4d8) {
            ppppppuVar23 = (undefined8 ******)pppppuStack_4f0;
            if ((0xfff < (longlong)pfStack_4d8 + 1U) &&
               (ppppppuVar23 = (undefined8 ******)pppppuStack_4f0[-1],
               0x1f < (ulonglong)((longlong)pppppuStack_4f0 + (-8 - (longlong)ppppppuVar23)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(ppppppuVar23);
          }
          cVar7 = abStack_4f8[0];
          if (abStack_4f8[0] == false) {
            puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)appuStack_378);
            FUN_1800205d0(&pppppuStack_4f0);
            lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
            puVar19 = FUN_180031420(lVar11,(undefined4 *)&ppuStack_98);
            puVar20 = FUN_1800208c0(alStack_418,"this array of table has a static size");
            FUN_180027ab0(auStack_328,puVar19,puVar20);
            puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
            puVar20 = FUN_1800208c0(alStack_438,"appending it to the statically sized array");
            FUN_180027ab0(auStack_2b8,puVar19,puVar20);
            puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
            pppuStack_4c8 = (undefined ***)*puVar20;
            plStack_4c0 = (longlong *)puVar20[1];
            FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
            plVar21 = FUN_180046760((longlong *)&ppuStack_480,param_4,param_5);
            plVar21 = FUN_180048a80((longlong *)&pppuStack_458,param_4,(char *)plVar21);
            plVar21 = FUN_1800042c0((longlong *)afStack_3d8,(char *)plVar21,
                                    (longlong *)&ppppuStack_d0,(longlong *)&pppppuStack_4f0);
            FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
          }
        }
        abStack_4f8[0] = (bool)cVar7;
        pppppuVar25 = ppppppuVar13[1];
        cVar7 = *(char *)(pppppuVar25 + -9);
        if (cVar7 != '\n') {
          FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18002a280((char *)&pppppuStack_4f0,cVar7,(longlong)(pppppuVar25 + -9));
        }
        param_2 = pppppuVar25[-8];
        plVar21 = plVar21 + 4;
      }
    }
    bVar6 = FUN_180046660((longlong)param_2,plVar21);
    if (param_7 == '\0') {
      if (CONCAT71(extraout_var_00,bVar6) == 1) {
        pcVar15 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
        pcVar9 = pcStack_4d0;
        if (*pcVar15 == '\n') {
          if (*pcStack_4d0 == '\n') {
            lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
            uVar16 = FUN_1800474e0(lVar11,(longlong)pcVar9,param_4,plVar21,(longlong)param_5);
            if ((char)uVar16 == '\0') {
              puVar18 = FUN_180031420((longlong)pcVar9,(undefined4 *)alStack_248);
              FUN_1800205d0(&pppppuStack_4f0);
              lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
              puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
              FUN_180026f20(auStack_328,puVar19,"table already exists here");
              puVar19 = FUN_180031420((longlong)pcVar9,(undefined4 *)&ppuStack_98);
              FUN_180026f20(auStack_2b8,puVar19,"table defined twice");
              puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
              pppuStack_4c8 = (undefined ***)*puVar20;
              plStack_4c0 = (longlong *)puVar20[1];
              FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
              plVar21 = FUN_180046760((longlong *)afStack_3d8,param_4,param_5);
              plVar21 = FUN_180047cd0(alStack_418,"toml::insert_value: table (\"",(char *)plVar21);
              plVar21 = FUN_1800042c0(alStack_438,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                      (longlong *)&pppppuStack_4f0);
              FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
            }
            pcVar15 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
            abStack_4f8[0] = (bool)*pcVar15;
            if (abStack_4f8[0] != true) {
              FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18002a280((char *)&pppppuStack_4f0,abStack_4f8[0],(longlong)pcVar15);
            }
            pfStack_498 = *(float **)(pcVar15 + 8);
            cVar7 = *pcVar9;
            if (cVar7 != '\n') {
              FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18002a280((char *)&pppppuStack_4f0,cVar7,(longlong)pcVar9);
            }
            plVar10 = *(longlong **)(*(longlong *)(pcVar9 + 8) + 8);
            plVar29 = (longlong *)*plVar10;
            abStack_4f8[0] = true;
            if (plVar29 != plVar10) {
              abStack_4f8[0] = true;
              do {
                pppppuStack_490 = (undefined8 *****)FUN_1800407f0((longlong)param_2,plVar21);
                abStack_4f8[0] = *(bool *)pppppuStack_490;
                if (abStack_4f8[0] != true) {
                  FUN_1800208c0(&pppppuStack_4f0,"toml::value::contains(key): ");
                    /* WARNING: Subroutine does not return */
                  FUN_18002a280((char *)&pppppuStack_4f0,abStack_4f8[0],(longlong)pppppuStack_490);
                }
                bVar6 = FUN_180046660((longlong)pppppuStack_490[1],plVar29 + 2);
                if (CONCAT71(extraout_var_01,bVar6) != 0) {
                  puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
                  FUN_1800205d0(&pppppuStack_4f0);
                  lVar11 = FUN_1800407f0((longlong)pfStack_498,plVar29 + 2);
                  puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
                  FUN_180026f20(auStack_328,puVar19,"already exists here");
                  puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
                  FUN_180026f20(auStack_2b8,puVar19,"this defined twice");
                  puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
                  pppuStack_4c8 = (undefined ***)*puVar20;
                  plStack_4c0 = (longlong *)puVar20[1];
                  FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
                  plVar21 = FUN_180046760((longlong *)afStack_3d8,param_4,param_5);
                  plVar21 = FUN_180047cd0(alStack_418,"toml::insert_value: value (\"",
                                          (char *)plVar21);
                  plVar21 = FUN_1800042c0(alStack_438,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                          (longlong *)&pppppuStack_4f0);
                  FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
                  _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
                }
                plVar17 = FUN_18004a860(pfStack_498,&pppppuStack_4b8,plVar29 + 2);
                FUN_180041180((char *)(*plVar17 + 0x30),(char *)(plVar29 + 6));
                plVar29 = (longlong *)*plVar29;
                param_6 = pppuStack_458;
              } while (plVar29 != plVar10);
            }
            pppuStack_4c8 = appuStack_378;
            pppuVar14 = (undefined ***)FUN_180006cd0(appuStack_378,(longlong)param_6);
            pppuStack_458 = pppuVar14;
            lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
            plStack_4c0 = (longlong *)FUN_18006d620(0x58);
            *plStack_4c0 = 0;
            plStack_4c0[1] = 0;
            *(undefined4 *)(plStack_4c0 + 1) = 1;
            *(undefined4 *)((longlong)plStack_4c0 + 0xc) = 1;
            *plStack_4c0 = (longlong)std::_Ref_count_obj2<toml::detail::region>::vftable;
            pppuStack_4c8 = (undefined ***)(plStack_4c0 + 2);
            *pppuStack_4c8 = toml::detail::region::vftable;
            plStack_4c0[3] = 0;
            plStack_4c0[4] = 0;
            plStack_4c0[3] = (longlong)pppuVar14[1];
            plStack_4c0[4] = (longlong)pppuVar14[2];
            pppuVar14[1] = (undefined **)0x0;
            pppuVar14[2] = (undefined **)0x0;
            plStack_4c0[5] = 0;
            plStack_4c0[6] = 0;
            plStack_4c0[7] = 0;
            plStack_4c0[8] = 0;
            ppuVar27 = pppuVar14[4];
            plStack_4c0[5] = (longlong)pppuVar14[3];
            plStack_4c0[6] = (longlong)ppuVar27;
            ppuVar27 = pppuVar14[6];
            plStack_4c0[7] = (longlong)pppuVar14[5];
            plStack_4c0[8] = (longlong)ppuVar27;
            pppuVar14[5] = (undefined **)0x0;
            pppuVar14[6] = (undefined **)0xf;
            *(undefined1 *)(pppuVar14 + 3) = 0;
            plStack_4c0[9] = (longlong)pppuVar14[7];
            plStack_4c0[10] = (longlong)pppuVar14[8];
            FUN_18004be90((undefined8 *)(lVar11 + 0x30),&pppuStack_4c8);
            plVar21 = plStack_4c0;
            if (plStack_4c0 != (longlong *)0x0) {
              LOCK();
              plVar10 = plStack_4c0 + 1;
              lVar11 = *plVar10;
              *(int *)plVar10 = (int)*plVar10 + -1;
              UNLOCK();
              if ((int)lVar11 == 1) {
                (**(code **)*plStack_4c0)(plStack_4c0);
                LOCK();
                piVar1 = (int *)((longlong)plVar21 + 0xc);
                iVar8 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar8 == 1) {
                  (**(code **)(*plVar21 + 8))(plVar21);
                }
              }
            }
            FUN_180003d10((longlong)pppuVar14);
            *puStack_488 = 1;
            puStack_488[8] = 1;
            param_1 = puStack_488;
            goto LAB_180039258;
          }
        }
        else if ((*pcStack_4d0 == '\n') &&
                (pcVar15 = (char *)FUN_1800407f0((longlong)param_2,plVar21), *pcVar15 == '\t')) {
          pcVar15 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
          cVar7 = *pcVar15;
          if (cVar7 != '\t') {
            FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
            FUN_18004a360((char *)&pppppuStack_4f0,cVar7,(longlong)pcVar15);
          }
          lVar28 = (*(longlong **)(pcVar15 + 8))[1] - **(longlong **)(pcVar15 + 8);
          lVar11 = lVar28 >> 0x3f;
          if (lVar28 / 0x48 + lVar11 != lVar11) {
            pcVar15 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
            cVar7 = *pcVar15;
            if (cVar7 != '\t') {
              FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18004a360((char *)&pppppuStack_4f0,cVar7,(longlong)pcVar15);
            }
            if (*(char *)**(undefined8 **)(pcVar15 + 8) == '\n') {
              puVar18 = FUN_180031420((longlong)pcVar9,(undefined4 *)alStack_248);
              FUN_1800205d0(&pppppuStack_4f0);
              lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
              puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
              FUN_180026f20(auStack_328,puVar19,"array of tables defined here");
              puVar19 = FUN_180031420((longlong)pcVar9,(undefined4 *)&ppuStack_98);
              FUN_180048130(auStack_2b8,puVar19);
              puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
              pppuStack_4c8 = (undefined ***)*puVar20;
              plStack_4c0 = (longlong *)puVar20[1];
              FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
              plVar21 = FUN_180046760((longlong *)afStack_3d8,param_4,param_5);
              plVar21 = FUN_180047f00(alStack_418,param_4,(char *)plVar21);
              plVar21 = FUN_1800042c0(alStack_438,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                      (longlong *)&pppppuStack_4f0);
              FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
            }
          }
        }
        puVar18 = FUN_180031420((longlong)pcVar9,(undefined4 *)alStack_248);
        FUN_1800205d0(&pppppuStack_4f0);
        lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
        puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
        FUN_180026f20(auStack_328,puVar19,"value already exists here");
        puVar19 = FUN_180031420((longlong)pcVar9,(undefined4 *)&ppuStack_98);
        FUN_180026f20(auStack_2b8,puVar19,"value defined twice");
        puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
        pppuStack_4c8 = (undefined ***)*puVar20;
        plStack_4c0 = (longlong *)puVar20[1];
        FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
        plVar21 = FUN_180046760((longlong *)afStack_3d8,param_4,param_5);
        plVar21 = FUN_180047cd0(alStack_418,"toml::insert_value: value (\"",(char *)plVar21);
        plVar21 = FUN_1800042c0(alStack_438,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                (longlong *)&pppppuStack_4f0);
        FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
      }
      FUN_180020900(alStack_248,plVar21);
      FUN_18001f970(auStack_228,pcStack_4d0);
      FUN_18004bb40((float *)param_2,&pppppuStack_4b8,alStack_248);
      FUN_18003cf80(alStack_248);
      *puStack_488 = 1;
      puStack_488[8] = 1;
      param_1 = puStack_488;
    }
    else if (CONCAT71(extraout_var_00,bVar6) == 1) {
      pcVar9 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
      if (*pcVar9 == '\n') {
        puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
        FUN_1800205d0(&pppppuStack_4f0);
        lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
        puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
        FUN_180046a30(auStack_328,puVar19);
        puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
        FUN_180026f20(auStack_2b8,puVar19,"this conflicts with the previous table");
        puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
        pppuStack_4c8 = (undefined ***)*puVar20;
        plStack_4c0 = (longlong *)puVar20[1];
        FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
        plVar21 = FUN_180046760((longlong *)afStack_3d8,param_4,param_5);
        plVar21 = FUN_180046800(alStack_418,param_4,(char *)plVar21);
        plVar21 = FUN_1800042c0(alStack_438,(char *)plVar21,(longlong *)&ppppuStack_d0,
                                (longlong *)&pppppuStack_4f0);
        FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
      }
      pcVar9 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
      if (*pcVar9 != '\t') {
        puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
        FUN_1800205d0(&pppppuStack_4f0);
        lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
        puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
        puVar22 = (undefined1 *)FUN_1800407f0((longlong)param_2,plVar21);
        abStack_4f8[0] = (bool)FUN_18001f770(puVar22);
        plVar21 = FUN_180046d10((longlong *)afStack_3d8,plVar21,abStack_4f8);
        FUN_180027ab0(auStack_328,puVar19,plVar21);
        puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
        FUN_180046f30(auStack_2b8,puVar19);
        puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
        pppuStack_4c8 = (undefined ***)*puVar20;
        plStack_4c0 = (longlong *)puVar20[1];
        FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
        plVar21 = FUN_180046760(alStack_418,param_4,param_5);
        plVar21 = FUN_180046ae0(alStack_438,param_4,(char *)plVar21);
        plVar21 = FUN_1800042c0((longlong *)&ppuStack_480,(char *)plVar21,(longlong *)&ppppuStack_d0
                                ,(longlong *)&pppppuStack_4f0);
        FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
      }
      pcVar9 = (char *)FUN_1800407f0((longlong)param_2,plVar21);
      cVar7 = *pcVar9;
      if (cVar7 != '\t') {
        FUN_1800208c0(&pppppuStack_4f0,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
        FUN_18004a360((char *)&pppppuStack_4f0,cVar7,(longlong)pcVar9);
      }
      plVar10 = *(longlong **)(pcVar9 + 8);
      pcVar9 = (char *)*plVar10;
      if ((pcVar9 == (char *)plVar10[1]) || (*pcVar9 != '\n')) {
        puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
        FUN_1800205d0(&pppppuStack_4f0);
        lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
        puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
        puVar22 = (undefined1 *)FUN_1800407f0((longlong)param_2,plVar21);
        abStack_4f8[0] = (bool)FUN_18001f770(puVar22);
        plVar21 = FUN_180046d10((longlong *)afStack_3d8,plVar21,abStack_4f8);
        FUN_180027ab0(auStack_328,puVar19,plVar21);
        puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
        FUN_180046f30(auStack_2b8,puVar19);
        puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
        pppuStack_4c8 = (undefined ***)*puVar20;
        plStack_4c0 = (longlong *)puVar20[1];
        FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
        plVar21 = FUN_180046760(alStack_418,param_4,param_5);
        plVar21 = FUN_180046ae0(alStack_438,param_4,(char *)plVar21);
        plVar21 = FUN_1800042c0((longlong *)&ppuStack_480,(char *)plVar21,(longlong *)&ppppuStack_d0
                                ,(longlong *)&pppppuStack_4f0);
        FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
      }
      plVar29 = *(longlong **)(pcVar9 + 0x30);
      if (plVar29 != (longlong *)0x0) {
        puVar20 = (undefined8 *)(**(code **)(*plVar29 + 0x18))(plVar29,&pppppuStack_4b8);
        pppppuStack_4f0 = (undefined8 ******)0x0;
        uStack_4e8 = 0;
        uStack_4e0 = 0;
        pfStack_4d8 = (float *)0x0;
        uVar26 = 2;
        if ((ulonglong)puVar20[2] < 2) {
          uVar26 = puVar20[2];
        }
        puVar24 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar24 = (undefined8 *)*puVar20;
        }
        if (uVar26 < 0x10) {
          FUN_180027650(&pppppuStack_4f0,puVar24,uVar26);
        }
        else {
          puVar20[2] = uVar26;
          puVar24 = puVar20;
          if (0xf < (ulonglong)puVar20[3]) {
            puVar24 = (undefined8 *)*puVar20;
          }
          *(undefined1 *)((longlong)puVar24 + uVar26) = 0;
          pppppuStack_4f0 = (undefined8 *****)*puVar20;
          uStack_4e8 = puVar20[1];
          uStack_4e0 = puVar20[2];
          pfStack_4d8 = (float *)puVar20[3];
          puVar20[2] = 0;
          puVar20[3] = 0xf;
          *(undefined1 *)puVar20 = 0;
        }
        pppppuVar25 = pppppuStack_4f0;
        ppppppuVar13 = &pppppuStack_4f0;
        if ((float *)0xf < pfStack_4d8) {
          ppppppuVar13 = (undefined8 ******)pppppuStack_4f0;
        }
        if (uStack_4e0 == 2) {
          iVar8 = memcmp(ppppppuVar13,&DAT_18007aa08,2);
          abStack_4f8[0] = iVar8 == 0;
        }
        else {
          abStack_4f8[0] = false;
        }
        if ((float *)0xf < pfStack_4d8) {
          ppppppuVar13 = (undefined8 ******)pppppuVar25;
          if ((0xfff < (longlong)pfStack_4d8 + 1U) &&
             (ppppppuVar13 = (undefined8 ******)pppppuVar25[-1],
             0x1f < (ulonglong)((longlong)pppppuVar25 + (-8 - (longlong)ppppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(ppppppuVar13);
        }
        if ((float *)0xf < pfStack_4a0) {
          pppppuVar25 = pppppuStack_4b8;
          if ((0xfff < (longlong)pfStack_4a0 + 1U) &&
             (pppppuVar25 = (undefined8 *****)pppppuStack_4b8[-1],
             (undefined1 *)0x1f <
             (undefined1 *)((longlong)pppppuStack_4b8 + (-8 - (longlong)pppppuVar25)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pppppuVar25);
        }
        if (abStack_4f8[0] == false) {
          puVar18 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)alStack_248);
          FUN_1800205d0(&pppppuStack_4f0);
          lVar11 = FUN_1800407f0((longlong)param_2,plVar21);
          puVar19 = FUN_180031420(lVar11,(undefined4 *)appuStack_378);
          puVar22 = (undefined1 *)FUN_1800407f0((longlong)param_2,plVar21);
          abStack_4f8[0] = (bool)FUN_18001f770(puVar22);
          plVar21 = FUN_180047210((longlong *)afStack_3d8,plVar21,abStack_4f8);
          FUN_180027ab0(auStack_328,puVar19,plVar21);
          puVar19 = FUN_180031420((longlong)pcStack_4d0,(undefined4 *)&ppuStack_98);
          FUN_180047430(auStack_2b8,puVar19);
          puVar20 = FUN_18001f5f0(&pppppuStack_4b8,auStack_328,alStack_248);
          pppuStack_4c8 = (undefined ***)*puVar20;
          plStack_4c0 = (longlong *)puVar20[1];
          FUN_18001fb60(&ppppuStack_d0,(longlong *)&pppuStack_4c8);
          plVar21 = FUN_180046760(alStack_418,param_4,param_5);
          plVar21 = FUN_180046fe0(alStack_438,param_4,(char *)plVar21);
          plVar21 = FUN_1800042c0((longlong *)&ppuStack_480,(char *)plVar21,
                                  (longlong *)&ppppuStack_d0,(longlong *)&pppppuStack_4f0);
          FUN_1800051f0(auStack_1b8,plVar21,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1b8,(ThrowInfo *)&DAT_180088d60);
        }
      }
      puVar22 = (undefined1 *)plVar10[1];
      if (puVar22 == (undefined1 *)plVar10[2]) {
        FUN_18004d6d0(plVar10,puVar22,pcStack_4d0);
        *puStack_488 = 1;
        puStack_488[8] = 1;
        param_1 = puStack_488;
      }
      else {
        FUN_18001f970(puVar22,pcStack_4d0);
        plVar10[1] = plVar10[1] + 0x48;
        *puStack_488 = 1;
        puStack_488[8] = 1;
        param_1 = puStack_488;
      }
    }
    else {
      ppuStack_b8 = (undefined **)0x0;
      ppuStack_b0 = (undefined **)0x0;
      ppuVar31 = (undefined **)0x0;
      uStack_a8 = 0;
      ppuVar27 = param_6[7];
      pppppuStack_4f0 = (undefined8 ******)0x0;
      uStack_4e8 = 0;
      uStack_4e0 = 0;
      pfStack_4d8 = (float *)0x0;
      if (ppuVar27 == param_6[8]) {
        sVar30 = 0;
        ppuVar27 = (undefined **)&DAT_1800789f6;
      }
      else {
        sVar30 = (longlong)param_6[8] - (longlong)ppuVar27;
      }
      FUN_180027650(&pppppuStack_4f0,ppuVar27,sVar30);
      pppppuStack_4b8 = (undefined8 ******)0x0;
      ppppuStack_4b0 = (undefined8 ****)0x0;
      uStack_4a8 = 0;
      pfStack_4a0 = (float *)0x0;
      uVar26 = 2;
      if (uStack_4e0 < 2) {
        uVar26 = uStack_4e0;
      }
      ppppppuVar13 = &pppppuStack_4f0;
      if ((float *)0xf < pfStack_4d8) {
        ppppppuVar13 = (undefined8 ******)pppppuStack_4f0;
      }
      if (uVar26 < 0x10) {
        FUN_180027650(&pppppuStack_4b8,ppppppuVar13,uVar26);
        pfStack_498 = pfStack_4d8;
      }
      else {
        ppppppuVar13 = &pppppuStack_4f0;
        if ((float *)0xf < pfStack_4d8) {
          ppppppuVar13 = (undefined8 ******)pppppuStack_4f0;
        }
        uStack_4e0 = uVar26;
        *(undefined1 *)((longlong)ppppppuVar13 + uVar26) = 0;
        pppppuStack_4b8 = pppppuStack_4f0;
        ppppuStack_4b0 = (undefined8 ****)uStack_4e8;
        uStack_4a8 = uStack_4e0;
        pfStack_4a0 = pfStack_4d8;
        pppppuStack_4f0 = (undefined8 *****)((ulonglong)pppppuStack_4f0 & 0xffffffffffffff00);
      }
      pfVar5 = pfStack_4a0;
      pppppuVar25 = pppppuStack_4b8;
      ppppppuVar13 = &pppppuStack_4b8;
      if ((float *)0xf < pfStack_4a0) {
        ppppppuVar13 = (undefined8 ******)pppppuStack_4b8;
      }
      if (uStack_4a8 == 2) {
        iVar8 = memcmp(ppppppuVar13,&DAT_18007aa08,2);
        bVar6 = iVar8 == 0;
      }
      else {
        bVar6 = false;
      }
      if ((float *)0xf < pfVar5) {
        ppppppuVar13 = (undefined8 ******)pppppuVar25;
        if ((0xfff < (longlong)pfVar5 + 1U) &&
           (ppppppuVar13 = (undefined8 ******)pppppuVar25[-1],
           0x1f < (ulonglong)((longlong)pppppuVar25 + (-8 - (longlong)ppppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(ppppppuVar13);
      }
      if ((float *)0xf < pfStack_498) {
        ppppppuVar13 = (undefined8 ******)pppppuStack_4f0;
        if ((0xfff < (longlong)pfStack_498 + 1U) &&
           (ppppppuVar13 = (undefined8 ******)pppppuStack_4f0[-1],
           0x1f < (ulonglong)((longlong)pppppuStack_4f0 + (-8 - (longlong)ppppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(ppppppuVar13);
      }
      ppuStack_480 = ppuStack_b8;
      ppuStack_478 = ppuStack_b0;
      if (!bVar6) {
        pppuVar14 = (undefined ***)FUN_1800038c0((longlong)param_6,(longlong *)&pppppuStack_4f0);
        ppuStack_478 = ppuStack_b0;
        ppuStack_480 = ppuStack_b8;
        if (&ppuStack_b8 == pppuVar14) {
          FUN_180022bf0((longlong *)&pppppuStack_4f0);
          ppuVar31 = (undefined **)0x0;
        }
        else {
          ppuVar27 = *pppuVar14;
          ppuVar4 = pppuVar14[1];
          ppuVar31 = pppuVar14[2];
          *pppuVar14 = (undefined **)0x0;
          pppuVar14[1] = (undefined **)0x0;
          pppuVar14[2] = (undefined **)0x0;
          FUN_180022bf0((longlong *)&pppppuStack_4f0);
          ppuStack_480 = ppuVar27;
          ppuStack_478 = ppuVar4;
        }
      }
      ppuStack_98 = (undefined **)0x0;
      ppuStack_90 = (undefined **)0x0;
      ppuStack_88 = (undefined **)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_68 = 0;
      ppuStack_60 = (undefined **)0x0;
      ppuStack_58 = (undefined **)0x0;
      pppuStack_4c8 = &ppuStack_480;
      uStack_a8 = 0;
      ppuStack_b0 = (undefined **)0x0;
      ppuStack_b8 = (undefined **)0x0;
      pppuStack_458 = appuStack_378;
      ppuStack_470 = ppuVar31;
      puVar20 = FUN_180006cd0(appuStack_378,(longlong)param_6);
      pppppuStack_4b8 = (undefined8 *****)0x0;
      ppppuStack_4b0 = (undefined8 ****)0x0;
      uStack_4a8 = 0;
      FUN_18004b720((ulonglong *)&pppppuStack_4b8,1);
      pppppuVar25 = pppppuStack_4b8;
      pppppuStack_490 = &pppppuStack_4b8;
      ppppuStack_d0 = pppppuStack_4b8;
      ppppuStack_c8 = pppppuStack_4b8;
      pppppuStack_c0 = &pppppuStack_4b8;
      FUN_18001f970((undefined1 *)pppppuStack_4b8,pcStack_4d0);
      ppppuStack_4b0 = pppppuVar25 + 9;
      FUN_180041040((undefined1 *)&ppuStack_98,(longlong *)&pppppuStack_4b8,(longlong)puVar20,
                    (longlong *)&ppuStack_480);
      FUN_180025880((longlong *)&pppppuStack_4b8);
      FUN_180020900(alStack_248,plVar21);
      FUN_18001f970(auStack_228,(undefined1 *)&ppuStack_98);
      FUN_18004bb40((float *)param_2,&pppppuStack_4b8,alStack_248);
      FUN_18003cf80(alStack_248);
      param_1 = puStack_488;
      *puStack_488 = 1;
      puStack_488[8] = 1;
      FUN_180022a30((char *)&ppuStack_98);
      ppuVar27 = ppuStack_60;
      if (ppuStack_60 != (undefined **)0x0) {
        LOCK();
        ppuVar31 = ppuStack_60 + 1;
        iVar8 = *(int *)ppuVar31;
        *(int *)ppuVar31 = *(int *)ppuVar31 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)*ppuStack_60)(ppuStack_60);
          LOCK();
          piVar1 = (int *)((longlong)ppuVar27 + 0xc);
          iVar8 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (**(code **)(*ppuVar27 + 8))(ppuVar27);
          }
        }
      }
      FUN_180022bf0((longlong *)&ppuStack_b8);
    }
  }
LAB_180039258:
  FUN_180003d10((longlong)param_6);
  return param_1;
}



// ============================================================
// INDEX: 5/227
// FUNCTION: FUN_180046a30
// ENTRY: 180046a30
// RVA: 0x46A30
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined4 * FUN_180046a30(undefined4 * param_1, undefined4 * param_2)
// ============================================================

undefined4 * FUN_180046a30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_180027650((undefined8 *)(param_1 + 0x14),"table already defined",0x15);
  return param_1;
}



// ============================================================
// INDEX: 6/227
// FUNCTION: FUN_180046d10
// ENTRY: 180046d10
// RVA: 0x46D10
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: longlong * FUN_180046d10(longlong * param_1, undefined8 param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180046d10(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong *plStack_128;
  int iStack_11c;
  undefined *puStack_118;
  undefined **ppuStack_110;
  basic_ostream<char,std::char_traits<char>_> abStack_108 [16];
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_d8;
  ulonglong *puStack_d0;
  int *piStack_c0;
  ulonglong uStack_a8;
  uint uStack_a0;
  basic_ios<char,std::char_traits<char>_> abStack_90 [104];
  ulonglong uStack_28;
  ulonglong uVar3;
  
  uStack_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  uStack_148 = 0;
  plStack_128 = param_1;
  memset(&puStack_118,0,0xe8);
  puStack_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_90);
  uStack_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110,false);
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  ppuStack_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_a8 = 0;
  uStack_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,"this ");
  FUN_18004dea0((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,*param_3);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_118," value already exists")
  ;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_148 = 0x82;
  uStack_140 = 0;
  uStack_138 = 0;
  if ((((byte)uStack_a0 & 0x22) == 2) || (uVar3 = *puStack_d0, uVar3 == 0)) {
    if (((uStack_a0 & 4) == 0) && (*plStack_d8 != 0)) {
      pvVar1 = (void *)*plStack_f8;
      sVar2 = ((longlong)*piStack_c0 - (longlong)pvVar1) + *plStack_d8;
    }
    else {
      sVar2 = 0;
      pvVar1 = (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)*plStack_f0;
    if (uVar3 < uStack_a8) {
      uVar3 = uStack_a8;
    }
    sVar2 = uVar3 - (longlong)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar1,sVar2);
  }
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (abStack_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(abStack_90)
  ;
  return param_1;
}



// ============================================================
// INDEX: 7/227
// FUNCTION: FUN_180047cd0
// ENTRY: 180047cd0
// RVA: 0x47CD0
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: longlong * FUN_180047cd0(longlong * param_1, char * param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180047cd0(longlong *param_1,char *param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_178 [32];
  undefined4 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  longlong *plStack_138;
  int iStack_12c;
  undefined *puStack_128;
  undefined **ppuStack_120;
  basic_ostream<char,std::char_traits<char>_> abStack_118 [16];
  longlong *plStack_108;
  longlong *plStack_100;
  longlong *plStack_e8;
  ulonglong *puStack_e0;
  int *piStack_d0;
  ulonglong uStack_b8;
  uint uStack_b0;
  basic_ios<char,std::char_traits<char>_> abStack_a0 [104];
  ulonglong uStack_38;
  ulonglong uVar4;
  
  uStack_38 = DAT_18008d040 ^ (ulonglong)auStack_178;
  uStack_158 = 0;
  plStack_138 = param_1;
  memset(&puStack_128,0,0xe8);
  puStack_128 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_a0);
  uStack_158 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_128,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_120,false);
  *(undefined ***)((longlong)&puStack_128 + (longlong)*(int *)(puStack_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(puStack_128 + 4)) =
       *(int *)(puStack_128 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_120);
  ppuStack_120 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_b8 = 0;
  uStack_b0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&puStack_128,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_128,param_2);
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_128,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_128,"\") already exists.");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_158 = 0x82;
  uStack_150 = 0;
  uStack_148 = 0;
  if ((((byte)uStack_b0 & 0x22) == 2) || (uVar4 = *puStack_e0, uVar4 == 0)) {
    if (((uStack_b0 & 4) == 0) && (*plStack_e8 != 0)) {
      pvVar2 = (void *)*plStack_108;
      sVar3 = ((longlong)*piStack_d0 - (longlong)pvVar2) + *plStack_e8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*plStack_100;
    if (uVar4 < uStack_b8) {
      uVar4 = uStack_b8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&puStack_128 + (longlong)*(int *)(puStack_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(puStack_128 + 4)) =
       *(int *)(puStack_128 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_120);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (abStack_118);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(abStack_a0)
  ;
  return param_1;
}



// ============================================================
// INDEX: 8/227
// FUNCTION: FUN_180047f00
// ENTRY: 180047f00
// RVA: 0x47F00
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: longlong * FUN_180047f00(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180047f00(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong *plStack_128;
  int iStack_11c;
  undefined *puStack_118;
  undefined **ppuStack_110;
  basic_ostream<char,std::char_traits<char>_> abStack_108 [16];
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_d8;
  ulonglong *puStack_d0;
  int *piStack_c0;
  ulonglong uStack_a8;
  uint uStack_a0;
  basic_ios<char,std::char_traits<char>_> abStack_90 [104];
  ulonglong uStack_28;
  ulonglong uVar4;
  
  uStack_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  uStack_148 = 0;
  plStack_128 = param_1;
  memset(&puStack_118,0,0xe8);
  puStack_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_90);
  uStack_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110,false);
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  ppuStack_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_a8 = 0;
  uStack_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
                "toml::insert_value: array of tables (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,"\") already exists.");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_148 = 0x82;
  uStack_140 = 0;
  uStack_138 = 0;
  if ((((byte)uStack_a0 & 0x22) == 2) || (uVar4 = *puStack_d0, uVar4 == 0)) {
    if (((uStack_a0 & 4) == 0) && (*plStack_d8 != 0)) {
      pvVar2 = (void *)*plStack_f8;
      sVar3 = ((longlong)*piStack_c0 - (longlong)pvVar2) + *plStack_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*plStack_f0;
    if (uVar4 < uStack_a8) {
      uVar4 = uStack_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (abStack_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(abStack_90)
  ;
  return param_1;
}



// ============================================================
// INDEX: 9/227
// FUNCTION: FUN_18004ec90
// ENTRY: 18004ec90
// RVA: 0x4EC90
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: undefined1 * FUN_18004ec90(undefined1 * param_1, undefined8 * * * param_2, undefined8 * * * * * param_3, undefined8 * * * * * param_4, undefined8 * * * * * param_5, undefined * * * param_6, char param_7)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018004f22e) */
/* WARNING: Removing unreachable block (ram,0x00018004f41c) */

undefined1 *
FUN_18004ec90(undefined1 *param_1,undefined8 ***param_2,undefined8 *****param_3,
             undefined8 *****param_4,undefined8 *****param_5,undefined ***param_6,char param_7)

{
  int *piVar1;
  undefined8 *****pppppuVar2;
  longlong *plVar3;
  undefined **ppuVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  float *pfVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  undefined7 extraout_var;
  char *pcVar11;
  longlong *plVar12;
  longlong lVar13;
  short ****ppppsVar14;
  undefined7 extraout_var_00;
  undefined8 *******pppppppuVar15;
  undefined ***pppuVar16;
  undefined8 uVar17;
  undefined7 extraout_var_01;
  undefined4 *puVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  undefined1 *puVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *puVar23;
  undefined8 ******ppppppuVar24;
  ulonglong uVar25;
  undefined **ppuVar26;
  longlong lVar27;
  undefined8 ******ppppppuVar28;
  size_t sVar29;
  undefined8 ******ppppppuVar30;
  undefined8 ***pppuVar31;
  undefined8 *******pppppppuVar32;
  undefined **ppuVar33;
  undefined1 auStackY_558 [32];
  bool abStack_528 [8];
  undefined8 ******ppppppuStack_520;
  undefined8 uStack_518;
  undefined8 *****pppppuStack_510;
  float *pfStack_508;
  undefined8 *****pppppuStack_500;
  undefined ***pppuStack_4f8;
  longlong *plStack_4f0;
  undefined8 ******ppppppuStack_4e8;
  undefined8 *****pppppuStack_4e0;
  undefined8 *****pppppuStack_4d8;
  float *pfStack_4d0;
  float *pfStack_4c8;
  undefined8 ******ppppppuStack_4c0;
  undefined1 *puStack_4b8;
  undefined **ppuStack_4b0;
  undefined **ppuStack_4a8;
  undefined **ppuStack_4a0;
  undefined ***pppuStack_488;
  undefined8 uStack_480;
  longlong alStack_468 [4];
  longlong alStack_448 [4];
  undefined **ppuStack_428;
  undefined **ppuStack_420;
  undefined **ppuStack_418;
  undefined8 auStack_410 [4];
  undefined **ppuStack_3f0;
  undefined **ppuStack_3e8;
  short ***pppsStack_3d8;
  undefined8 uStack_3d0;
  longlong lStack_3c8;
  ulonglong uStack_3c0;
  float afStack_3b8 [2];
  longlong lStack_3b0;
  undefined8 uStack_3a8;
  ulonglong uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined4 auStack_358 [28];
  undefined4 auStack_2e8 [28];
  longlong alStack_278 [4];
  undefined1 auStack_258 [96];
  undefined8 auStack_1f8 [14];
  undefined4 auStack_188 [28];
  undefined ***pppuStack_118;
  undefined8 *****pppppuStack_110;
  undefined8 *****pppppuStack_108;
  undefined8 ******ppppppuStack_100;
  undefined **ppuStack_f8;
  undefined **ppuStack_f0;
  undefined8 uStack_e8;
  longlong lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  longlong *plStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulonglong uStack_48;
  
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStackY_558;
  pppuStack_488 = param_6;
  pppuStack_118 = param_6;
  pppppuStack_500 = param_3;
  puStack_4b8 = param_1;
  if (param_4 == param_5) {
    ppppppuStack_520 = (undefined8 *******)0x0;
    uStack_518 = 0;
    pppppuStack_510 = (undefined8 ******)0x0;
    pfStack_508 = (float *)0x0;
    FUN_180027650(&ppppppuStack_520,"toml::detail::insert_nested_key: never reach here",0x31);
    *param_1 = 0;
    *(undefined8 *******)(param_1 + 8) = ppppppuStack_520;
    *(undefined8 *)(param_1 + 0x10) = uStack_518;
    *(undefined8 ******)(param_1 + 0x18) = pppppuStack_510;
    *(float **)(param_1 + 0x20) = pfStack_508;
  }
  else {
    pfStack_4c8 = (float *)0xf;
    ppppppuVar28 = (undefined8 ******)param_4;
    pppppppuVar32 = (undefined8 *******)param_4;
    while (ppppppuVar28 + 4 != (undefined8 ******)param_5) {
      bVar8 = FUN_180046660((longlong)param_2,ppppppuVar28);
      if (CONCAT71(extraout_var,bVar8) == 0) {
        ppppppuStack_4c0 = &ppppppuStack_520;
        ppppppuStack_520 = (undefined8 *******)0x0;
        uStack_518 = 0;
        pppppuStack_510 = (undefined8 ******)0x0;
        pppuStack_4f8 = &ppuStack_428;
        ppuStack_428 = toml::detail::region::vftable;
        if (param_6[2] != (undefined **)0x0) {
          LOCK();
          ppuVar26 = param_6[2] + 1;
          *(int *)ppuVar26 = *(int *)ppuVar26 + 1;
          UNLOCK();
        }
        ppuStack_420 = param_6[1];
        ppuStack_418 = param_6[2];
        FUN_180020900(auStack_410,param_6 + 3);
        ppuStack_3f0 = param_6[7];
        ppuStack_3e8 = param_6[8];
        uStack_3a8 = 0;
        lStack_3b0 = FUN_18006d620(0x88);
        *(longlong *)lStack_3b0 = lStack_3b0;
        *(longlong *)(lStack_3b0 + 8) = lStack_3b0;
        uStack_3a0 = 0;
        uStack_398 = 0;
        uStack_390 = 0;
        uStack_388 = 7;
        uStack_380 = 8;
        afStack_3b8[0] = 1.0;
        FUN_180024cd0(&uStack_3a0,0x10,lStack_3b0);
        pppppppuVar32 = &ppppppuStack_520;
        pcVar11 = FUN_18004dc60((undefined1 *)&lStack_d8,afStack_3b8,(longlong)&ppuStack_428,
                                (longlong *)pppppppuVar32);
        plVar12 = FUN_18002d800((float *)param_2,&ppuStack_4b0,(longlong *)ppppppuVar28);
        FUN_180051890((char *)(*plVar12 + 0x30),pcVar11);
        FUN_1800225b0((char *)&lStack_d8);
        FUN_180022bf0(&lStack_98);
        plVar12 = plStack_a0;
        if (plStack_a0 != (longlong *)0x0) {
          LOCK();
          plVar3 = plStack_a0 + 1;
          lVar13 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*plStack_a0)(plStack_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar12 + 0xc);
            iVar10 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar10 == 1) {
              (**(code **)(*plVar12 + 8))(plVar12);
            }
          }
        }
        FUN_180020a50((longlong)afStack_3b8);
      }
      pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
      if (*pcVar11 == '\n') {
        lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
        if ((*(longlong **)(lVar13 + 0x30) != (longlong *)0x0) &&
           (cVar9 = (**(code **)(**(longlong **)(lVar13 + 0x30) + 0x10))(), cVar9 == '{')) {
          puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
          FUN_1800205d0(&ppppppuStack_520);
          lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
          puVar19 = FUN_180031420(lVar13,afStack_3b8);
          FUN_180026f20((undefined4 *)auStack_1f8,puVar19,"inline tables are immutable");
          puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)alStack_278);
          FUN_180026f20(auStack_188,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_1f8,&pppuStack_118);
          pppuStack_488 = (undefined ***)*puVar20;
          uStack_480 = puVar20[1];
          FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_488);
          plVar12 = FUN_180046650((longlong *)&pppuStack_4f8,(longlong)ppppppuVar28);
          plVar12 = FUN_180046760((longlong *)&ppuStack_4b0,param_4,(undefined8 *)*plVar12);
          plVar12 = FUN_1800481e0(alStack_468,param_4,(char *)plVar12);
          plVar12 = FUN_1800042c0(alStack_448,(char *)plVar12,(longlong *)&pppppuStack_110,
                                  (longlong *)&ppppppuStack_520);
          FUN_1800051f0(&lStack_d8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&lStack_d8,(ThrowInfo *)&DAT_180088d60);
        }
        param_3 = ppppppuVar28;
        plVar12 = FUN_18002d800((float *)param_2,&pppppuStack_110,(longlong *)ppppppuVar28);
        lVar13 = *plVar12;
        cVar9 = *(char *)(lVar13 + 0x30);
        if (cVar9 != '\n') {
          FUN_1800208c0(&ppppppuStack_520,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18002a280((char *)&ppppppuStack_520,cVar9,lVar13 + 0x30);
        }
        param_2 = *(undefined8 ****)(lVar13 + 0x38);
        ppppppuVar28 = ppppppuVar28 + 4;
      }
      else {
        pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
        if (*pcVar11 != '\t') {
          puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
          FUN_1800205d0(&ppppppuStack_520);
          lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
          puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
          ppppppuVar24 = ppppppuVar28;
          puVar21 = (undefined1 *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
          abStack_528[0] = (bool)FUN_18001f770(puVar21);
          plVar12 = FUN_180048640((longlong *)afStack_3b8,ppppppuVar24,abStack_528);
          FUN_180027ab0(auStack_358,puVar19,plVar12);
          puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
          FUN_180026f20(auStack_2e8,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
          pppuStack_488 = (undefined ***)*puVar20;
          uStack_480 = puVar20[1];
          FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_488);
          plVar12 = FUN_180046650((longlong *)&pppuStack_4f8,(longlong)ppppppuVar28);
          plVar12 = FUN_180046760(alStack_448,param_4,(undefined8 *)*plVar12);
          plVar12 = FUN_180048410(alStack_468,param_4,(char *)plVar12);
          plVar12 = FUN_1800042c0((longlong *)&ppuStack_4b0,(char *)plVar12,
                                  (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
          FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
        }
        plVar12 = FUN_18002d800((float *)param_2,&ppppppuStack_4e8,(longlong *)ppppppuVar28);
        lVar13 = *plVar12;
        abStack_528[0] = *(bool *)(lVar13 + 0x30);
        if (abStack_528[0] != true) {
          FUN_1800208c0(&ppppppuStack_520,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18004a360((char *)&ppppppuStack_520,abStack_528[0],lVar13 + 0x30);
        }
        pppppppuVar15 = *(undefined8 ********)(lVar13 + 0x38);
        ppppppuVar24 = pppppppuVar15[1];
        ppppppuStack_4c0 = pppppppuVar15;
        if (*(char *)(ppppppuVar24 + -0xb) != '\n') {
          puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
          FUN_1800205d0(&ppppppuStack_520);
          lVar13 = FUN_180051720((longlong)pppppppuVar15);
          plVar12 = alStack_278;
          puVar19 = FUN_180031420(lVar13,(undefined4 *)plVar12);
          puVar21 = (undefined1 *)FUN_180051720((longlong)ppppppuStack_4c0);
          abStack_528[0] = (bool)FUN_18001f770(puVar21);
          plVar12 = FUN_180048640((longlong *)afStack_3b8,plVar12,abStack_528);
          FUN_180027ab0(auStack_358,puVar19,plVar12);
          puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
          FUN_180026f20(auStack_2e8,puVar19,"inserting this");
          puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
          pppuStack_488 = (undefined ***)*puVar20;
          uStack_480 = puVar20[1];
          FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_488);
          plVar12 = FUN_180046650((longlong *)&pppuStack_4f8,(longlong)ppppppuVar28);
          plVar12 = FUN_180046760(alStack_448,param_4,(undefined8 *)*plVar12);
          plVar12 = FUN_180048410(alStack_468,param_4,(char *)plVar12);
          plVar12 = FUN_1800042c0((longlong *)&ppuStack_4b0,(char *)plVar12,
                                  (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
          FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
        }
        param_3 = *pppppppuVar15;
        if ((undefined8 ******)param_3 == ppppppuVar24) {
          puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
          FUN_1800205d0(&ppppppuStack_520);
          lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
          puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
          puVar20 = FUN_1800208c0((undefined8 *)afStack_3b8,"this array is not insertable");
          FUN_180027ab0(auStack_358,puVar19,puVar20);
          puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
          puVar20 = FUN_1800208c0(alStack_448,"appending it to the statically sized array");
          FUN_180027ab0(auStack_2e8,puVar19,puVar20);
          puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
          pppuStack_4f8 = (undefined ***)*puVar20;
          plStack_4f0 = (longlong *)puVar20[1];
          FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
          plVar12 = FUN_180046760(alStack_468,param_4,param_5);
          plVar12 = FUN_180048850((longlong *)&ppuStack_4b0,param_4,(char *)plVar12);
          plVar12 = FUN_1800042c0((longlong *)&pppuStack_488,(char *)plVar12,
                                  (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
          FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
        }
        lVar13 = (longlong)ppppppuVar24 - (longlong)param_3 >> 0x3f;
        if (((longlong)ppppppuVar24 - (longlong)param_3) / 0x58 + lVar13 == lVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180022b00();
        }
        pppppuVar2 = (undefined8 *****)param_3[6];
        cVar9 = '\t';
        if (pppppuVar2 != (undefined8 *****)0x0) {
          puVar20 = (undefined8 *)(*(code *)(*pppppuVar2)[3])(pppppuVar2,&ppppppuStack_520);
          pppsStack_3d8 = (short ***)0x0;
          uStack_3d0 = 0;
          lStack_3c8 = 0;
          uStack_3c0 = 0;
          param_3 = (undefined8 ******)0x2;
          if ((ulonglong)puVar20[2] < 2) {
            param_3 = (undefined8 ******)puVar20[2];
          }
          pppppppuVar32 = (undefined8 *******)puVar20[3];
          puVar23 = puVar20;
          if ((undefined8 *******)0xf < pppppppuVar32) {
            puVar23 = (undefined8 *)*puVar20;
          }
          if (param_3 < (undefined8 ******)0x10) {
            FUN_180027650(&pppsStack_3d8,puVar23,(size_t)param_3);
          }
          else {
            puVar20[2] = param_3;
            puVar23 = puVar20;
            if ((undefined8 *******)0xf < pppppppuVar32) {
              puVar23 = (undefined8 *)*puVar20;
            }
            *(undefined1 *)((longlong)puVar23 + (longlong)param_3) = 0;
            pppsStack_3d8 = (short ***)*puVar20;
            uStack_3d0 = puVar20[1];
            lStack_3c8 = puVar20[2];
            uStack_3c0 = puVar20[3];
            puVar20[2] = 0;
            puVar20[3] = 0xf;
            *(undefined1 *)puVar20 = 0;
          }
          ppppsVar14 = &pppsStack_3d8;
          if (0xf < uStack_3c0) {
            ppppsVar14 = (short ****)pppsStack_3d8;
          }
          if (lStack_3c8 == 2) {
            abStack_528[0] = *(short *)ppppsVar14 == 0x5b5b;
          }
          else {
            abStack_528[0] = false;
          }
          if (0xf < uStack_3c0) {
            ppppsVar14 = (short ****)pppsStack_3d8;
            if ((0xfff < uStack_3c0 + 1) &&
               (ppppsVar14 = (short ****)pppsStack_3d8[-1],
               0x1f < (ulonglong)((longlong)pppsStack_3d8 + (-8 - (longlong)ppppsVar14)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(ppppsVar14);
          }
          if ((float *)0xf < pfStack_508) {
            pppppppuVar22 = (undefined8 *******)ppppppuStack_520;
            if ((0xfff < (longlong)pfStack_508 + 1U) &&
               (pppppppuVar22 = (undefined8 *******)ppppppuStack_520[-1],
               0x1f < (ulonglong)((longlong)ppppppuStack_520 + (-8 - (longlong)pppppppuVar22)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pppppppuVar22);
          }
          cVar9 = abStack_528[0];
          if (abStack_528[0] == false) {
            puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)alStack_278);
            FUN_1800205d0(&ppppppuStack_520);
            lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
            puVar19 = FUN_180031420(lVar13,(undefined4 *)&ppuStack_428);
            puVar20 = FUN_1800208c0(alStack_448,"this array of table has a static size");
            FUN_180027ab0(auStack_358,puVar19,puVar20);
            puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
            puVar20 = FUN_1800208c0(alStack_468,"appending it to the statically sized array");
            FUN_180027ab0(auStack_2e8,puVar19,puVar20);
            puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
            pppuStack_4f8 = (undefined ***)*puVar20;
            plStack_4f0 = (longlong *)puVar20[1];
            FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
            plVar12 = FUN_180046760((longlong *)&ppuStack_4b0,param_4,param_5);
            plVar12 = FUN_180048a80((longlong *)&pppuStack_488,param_4,(char *)plVar12);
            plVar12 = FUN_1800042c0((longlong *)afStack_3b8,(char *)plVar12,
                                    (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
            FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
          }
        }
        abStack_528[0] = (bool)cVar9;
        ppppppuVar24 = pppppppuVar15[1];
        cVar9 = *(char *)(ppppppuVar24 + -0xb);
        if (cVar9 != '\n') {
          FUN_1800208c0(&ppppppuStack_520,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
          FUN_18002a280((char *)&ppppppuStack_520,cVar9,(longlong)(ppppppuVar24 + -0xb));
        }
        param_2 = ppppppuVar24[-10];
        ppppppuVar28 = ppppppuVar28 + 4;
      }
    }
    bVar8 = FUN_180046660((longlong)param_2,ppppppuVar28);
    if (param_7 == '\0') {
      if (CONCAT71(extraout_var_00,bVar8) == 1) {
        pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
        pppppuVar2 = pppppuStack_500;
        if (*pcVar11 == '\n') {
          if (*(char *)pppppuStack_500 == '\n') {
            lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
            ppppppuVar24 = ppppppuVar28;
            uVar17 = FUN_180053160(lVar13,(longlong)pppppuVar2,param_4,ppppppuVar28,
                                   (longlong)param_5);
            if ((char)uVar17 == '\0') {
              puVar18 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&lStack_d8);
              FUN_1800205d0(&ppppppuStack_520);
              lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
              puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
              FUN_180026f20(auStack_358,puVar19,"table already exists here");
              puVar19 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&ppuStack_428);
              FUN_180026f20(auStack_2e8,puVar19,"table defined twice");
              puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
              pppuStack_4f8 = (undefined ***)*puVar20;
              plStack_4f0 = (longlong *)puVar20[1];
              FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
              plVar12 = FUN_180046760((longlong *)afStack_3b8,param_4,param_5);
              plVar12 = FUN_180047cd0(alStack_448,"toml::insert_value: table (\"",(char *)plVar12);
              plVar12 = FUN_1800042c0(alStack_468,(char *)plVar12,(longlong *)&pppppuStack_110,
                                      (longlong *)&ppppppuStack_520);
              FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
            }
            pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
            abStack_528[0] = (bool)*pcVar11;
            if (abStack_528[0] != true) {
              FUN_1800208c0(&ppppppuStack_520,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18002a280((char *)&ppppppuStack_520,abStack_528[0],(longlong)pcVar11);
            }
            pfStack_4c8 = *(float **)(pcVar11 + 8);
            cVar9 = *(char *)pppppuVar2;
            if (cVar9 != '\n') {
              FUN_1800208c0(&ppppppuStack_520,"toml::value::as_table(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18002a280((char *)&ppppppuStack_520,cVar9,(longlong)pppppuVar2);
            }
            pppuVar5 = pppppuVar2[1][1];
            abStack_528[0] = true;
            for (pppuVar6 = (undefined8 ***)*pppuVar5; pppuVar6 != pppuVar5;
                pppuVar6 = (undefined8 ***)*pppuVar6) {
              ppppppuStack_4c0 = (undefined8 ******)FUN_1800407f0((longlong)param_2,ppppppuVar28);
              abStack_528[0] = *(bool *)ppppppuStack_4c0;
              if (abStack_528[0] != true) {
                FUN_1800208c0(&ppppppuStack_520,"toml::value::contains(key): ");
                    /* WARNING: Subroutine does not return */
                FUN_18002a280((char *)&ppppppuStack_520,abStack_528[0],(longlong)ppppppuStack_4c0);
              }
              bVar8 = FUN_180046660((longlong)ppppppuStack_4c0[1],pppuVar6 + 2);
              if (CONCAT71(extraout_var_01,bVar8) != 0) {
                puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
                FUN_1800205d0(&ppppppuStack_520);
                lVar13 = FUN_1800407f0((longlong)pfStack_4c8,pppuVar6 + 2);
                puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
                FUN_180026f20(auStack_358,puVar19,"already exists here");
                puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
                FUN_180026f20(auStack_2e8,puVar19,"this defined twice");
                puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
                pppuStack_4f8 = (undefined ***)*puVar20;
                plStack_4f0 = (longlong *)puVar20[1];
                FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
                plVar12 = FUN_180046760((longlong *)afStack_3b8,param_4,param_5);
                plVar12 = FUN_180047cd0(alStack_448,"toml::insert_value: value (\"",(char *)plVar12)
                ;
                plVar12 = FUN_1800042c0(alStack_468,(char *)plVar12,(longlong *)&pppppuStack_110,
                                        (longlong *)&ppppppuStack_520);
                FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
              }
              pppuVar31 = pppuVar6 + 2;
              plVar12 = FUN_18002d800(pfStack_4c8,&ppppppuStack_4e8,(longlong *)pppuVar31);
              FUN_180051a90((char *)(*plVar12 + 0x30),(char *)(pppuVar6 + 6),pppuVar31,ppppppuVar24)
              ;
              param_6 = pppuStack_488;
            }
            pppuStack_4f8 = &ppuStack_428;
            pppuVar16 = (undefined ***)FUN_180006cd0(&ppuStack_428,(longlong)param_6);
            pppuStack_488 = pppuVar16;
            lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
            plStack_4f0 = (longlong *)FUN_18006d620(0x58);
            *plStack_4f0 = 0;
            plStack_4f0[1] = 0;
            *(undefined4 *)(plStack_4f0 + 1) = 1;
            *(undefined4 *)((longlong)plStack_4f0 + 0xc) = 1;
            *plStack_4f0 = (longlong)std::_Ref_count_obj2<toml::detail::region>::vftable;
            pppuStack_4f8 = (undefined ***)(plStack_4f0 + 2);
            *pppuStack_4f8 = toml::detail::region::vftable;
            plStack_4f0[3] = 0;
            plStack_4f0[4] = 0;
            plStack_4f0[3] = (longlong)pppuVar16[1];
            plStack_4f0[4] = (longlong)pppuVar16[2];
            pppuVar16[1] = (undefined **)0x0;
            pppuVar16[2] = (undefined **)0x0;
            plStack_4f0[5] = 0;
            plStack_4f0[6] = 0;
            plStack_4f0[7] = 0;
            plStack_4f0[8] = 0;
            ppuVar26 = pppuVar16[4];
            plStack_4f0[5] = (longlong)pppuVar16[3];
            plStack_4f0[6] = (longlong)ppuVar26;
            ppuVar26 = pppuVar16[6];
            plStack_4f0[7] = (longlong)pppuVar16[5];
            plStack_4f0[8] = (longlong)ppuVar26;
            pppuVar16[5] = (undefined **)0x0;
            pppuVar16[6] = (undefined **)0xf;
            *(undefined1 *)(pppuVar16 + 3) = 0;
            plStack_4f0[9] = (longlong)pppuVar16[7];
            plStack_4f0[10] = (longlong)pppuVar16[8];
            FUN_18004be90((undefined8 *)(lVar13 + 0x30),&pppuStack_4f8);
            plVar12 = plStack_4f0;
            if (plStack_4f0 != (longlong *)0x0) {
              LOCK();
              plVar3 = plStack_4f0 + 1;
              lVar13 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar13 == 1) {
                (**(code **)*plStack_4f0)(plStack_4f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar10 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar10 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12);
                }
              }
            }
            FUN_180003d10((longlong)pppuVar16);
            *puStack_4b8 = 1;
            puStack_4b8[8] = 1;
            param_1 = puStack_4b8;
            goto LAB_18004fa12;
          }
        }
        else if ((*(char *)pppppuStack_500 == '\n') &&
                (pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28), *pcVar11 == '\t'))
        {
          pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
          cVar9 = *pcVar11;
          if (cVar9 != '\t') {
            FUN_1800208c0(&ppppppuStack_520,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
            FUN_18004a360((char *)&ppppppuStack_520,cVar9,(longlong)pcVar11);
          }
          lVar27 = (*(longlong **)(pcVar11 + 8))[1] - **(longlong **)(pcVar11 + 8);
          lVar13 = lVar27 >> 0x3f;
          if (lVar27 / 0x58 + lVar13 != lVar13) {
            pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
            cVar9 = *pcVar11;
            if (cVar9 != '\t') {
              FUN_1800208c0(&ppppppuStack_520,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
              FUN_18004a360((char *)&ppppppuStack_520,cVar9,(longlong)pcVar11);
            }
            if (*(char *)**(undefined8 **)(pcVar11 + 8) == '\n') {
              puVar18 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&lStack_d8);
              FUN_1800205d0(&ppppppuStack_520);
              lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
              puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
              FUN_180026f20(auStack_358,puVar19,"array of tables defined here");
              puVar19 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&ppuStack_428);
              FUN_180048130(auStack_2e8,puVar19);
              puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
              pppuStack_4f8 = (undefined ***)*puVar20;
              plStack_4f0 = (longlong *)puVar20[1];
              FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
              plVar12 = FUN_180046760((longlong *)afStack_3b8,param_4,param_5);
              plVar12 = FUN_180047f00(alStack_448,param_4,(char *)plVar12);
              plVar12 = FUN_1800042c0(alStack_468,(char *)plVar12,(longlong *)&pppppuStack_110,
                                      (longlong *)&ppppppuStack_520);
              FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
            }
          }
        }
        puVar18 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&lStack_d8);
        FUN_1800205d0(&ppppppuStack_520);
        lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
        puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
        FUN_180026f20(auStack_358,puVar19,"value already exists here");
        puVar19 = FUN_180031420((longlong)pppppuVar2,(undefined4 *)&ppuStack_428);
        FUN_180026f20(auStack_2e8,puVar19,"value defined twice");
        puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
        pppuStack_4f8 = (undefined ***)*puVar20;
        plStack_4f0 = (longlong *)puVar20[1];
        FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
        plVar12 = FUN_180046760((longlong *)afStack_3b8,param_4,param_5);
        plVar12 = FUN_180047cd0(alStack_448,"toml::insert_value: value (\"",(char *)plVar12);
        plVar12 = FUN_1800042c0(alStack_468,(char *)plVar12,(longlong *)&pppppuStack_110,
                                (longlong *)&ppppppuStack_520);
        FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
      }
      FUN_180020900(&lStack_d8,ppppppuVar28);
      FUN_180055ce0((undefined1 *)&uStack_b8,(undefined1 *)pppppuStack_500,param_3,pppppppuVar32);
      FUN_1800546a0((float *)param_2,&ppppppuStack_4e8,&lStack_d8);
      FUN_180051580(&lStack_d8);
      *puStack_4b8 = 1;
      puStack_4b8[8] = 1;
      param_1 = puStack_4b8;
    }
    else if (CONCAT71(extraout_var_00,bVar8) == 1) {
      pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
      if (*pcVar11 == '\n') {
        puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
        FUN_1800205d0(&ppppppuStack_520);
        lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
        puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
        FUN_180046a30(auStack_358,puVar19);
        puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
        FUN_180026f20(auStack_2e8,puVar19,"this conflicts with the previous table");
        puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
        pppuStack_4f8 = (undefined ***)*puVar20;
        plStack_4f0 = (longlong *)puVar20[1];
        FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
        plVar12 = FUN_180046760((longlong *)afStack_3b8,param_4,param_5);
        plVar12 = FUN_180046800(alStack_448,param_4,(char *)plVar12);
        plVar12 = FUN_1800042c0(alStack_468,(char *)plVar12,(longlong *)&pppppuStack_110,
                                (longlong *)&ppppppuStack_520);
        FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
      }
      pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
      if (*pcVar11 != '\t') {
        puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
        FUN_1800205d0(&ppppppuStack_520);
        lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
        puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
        puVar21 = (undefined1 *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
        abStack_528[0] = (bool)FUN_18001f770(puVar21);
        plVar12 = FUN_180046d10((longlong *)afStack_3b8,ppppppuVar28,abStack_528);
        FUN_180027ab0(auStack_358,puVar19,plVar12);
        puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
        FUN_180046f30(auStack_2e8,puVar19);
        puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
        pppuStack_4f8 = (undefined ***)*puVar20;
        plStack_4f0 = (longlong *)puVar20[1];
        FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
        plVar12 = FUN_180046760(alStack_448,param_4,param_5);
        plVar12 = FUN_180046ae0(alStack_468,param_4,(char *)plVar12);
        plVar12 = FUN_1800042c0((longlong *)&ppuStack_4b0,(char *)plVar12,
                                (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
        FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
      }
      pcVar11 = (char *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
      cVar9 = *pcVar11;
      if (cVar9 != '\t') {
        FUN_1800208c0(&ppppppuStack_520,"toml::value::as_array(): ");
                    /* WARNING: Subroutine does not return */
        FUN_18004a360((char *)&ppppppuStack_520,cVar9,(longlong)pcVar11);
      }
      plVar12 = *(longlong **)(pcVar11 + 8);
      pcVar11 = (char *)*plVar12;
      if ((pcVar11 == (char *)plVar12[1]) || (*pcVar11 != '\n')) {
        puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
        FUN_1800205d0(&ppppppuStack_520);
        lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
        puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
        puVar21 = (undefined1 *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
        abStack_528[0] = (bool)FUN_18001f770(puVar21);
        plVar12 = FUN_180046d10((longlong *)afStack_3b8,ppppppuVar28,abStack_528);
        FUN_180027ab0(auStack_358,puVar19,plVar12);
        puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
        FUN_180046f30(auStack_2e8,puVar19);
        puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
        pppuStack_4f8 = (undefined ***)*puVar20;
        plStack_4f0 = (longlong *)puVar20[1];
        FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
        plVar12 = FUN_180046760(alStack_448,param_4,param_5);
        plVar12 = FUN_180046ae0(alStack_468,param_4,(char *)plVar12);
        plVar12 = FUN_1800042c0((longlong *)&ppuStack_4b0,(char *)plVar12,
                                (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
        FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
      }
      plVar3 = *(longlong **)(pcVar11 + 0x30);
      if (plVar3 != (longlong *)0x0) {
        puVar20 = (undefined8 *)(**(code **)(*plVar3 + 0x18))(plVar3,&ppppppuStack_4e8);
        ppppppuStack_520 = (undefined8 *******)0x0;
        uStack_518 = 0;
        pppppppuVar32 = (undefined8 *******)0x0;
        pppppuStack_510 = (undefined8 ******)0x0;
        pfStack_508 = (float *)0x0;
        uVar25 = 2;
        if ((ulonglong)puVar20[2] < 2) {
          uVar25 = puVar20[2];
        }
        puVar23 = puVar20;
        if (0xf < (ulonglong)puVar20[3]) {
          puVar23 = (undefined8 *)*puVar20;
        }
        if (uVar25 < 0x10) {
          FUN_180027650(&ppppppuStack_520,puVar23,uVar25);
        }
        else {
          puVar20[2] = uVar25;
          puVar23 = puVar20;
          if (0xf < (ulonglong)puVar20[3]) {
            puVar23 = (undefined8 *)*puVar20;
          }
          *(undefined1 *)((longlong)puVar23 + uVar25) = 0;
          ppppppuStack_520 = (undefined8 ******)*puVar20;
          uStack_518 = puVar20[1];
          pppppuStack_510 = (undefined8 *****)puVar20[2];
          pfStack_508 = (float *)puVar20[3];
          puVar20[2] = 0;
          puVar20[3] = 0xf;
          *(undefined1 *)puVar20 = 0;
        }
        ppppppuVar24 = ppppppuStack_520;
        pppppppuVar15 = &ppppppuStack_520;
        if ((float *)0xf < pfStack_508) {
          pppppppuVar15 = (undefined8 *******)ppppppuStack_520;
        }
        param_3 = pppppuStack_510;
        if ((undefined8 ******)pppppuStack_510 == (undefined8 ******)0x2) {
          iVar10 = memcmp(pppppppuVar15,&DAT_18007aa08,2);
          abStack_528[0] = iVar10 == 0;
        }
        else {
          abStack_528[0] = false;
        }
        if ((float *)0xf < pfStack_508) {
          pppppppuVar15 = (undefined8 *******)ppppppuVar24;
          if ((0xfff < (longlong)pfStack_508 + 1U) &&
             (pppppppuVar15 = (undefined8 *******)ppppppuVar24[-1],
             0x1f < (ulonglong)((longlong)ppppppuVar24 + (-8 - (longlong)pppppppuVar15)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pppppppuVar15);
        }
        if ((float *)0xf < pfStack_4d0) {
          ppppppuVar24 = ppppppuStack_4e8;
          if ((0xfff < (longlong)pfStack_4d0 + 1U) &&
             (ppppppuVar24 = (undefined8 ******)ppppppuStack_4e8[-1],
             (undefined1 *)0x1f <
             (undefined1 *)((longlong)ppppppuStack_4e8 + (-8 - (longlong)ppppppuVar24)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(ppppppuVar24);
        }
        if (abStack_528[0] == false) {
          puVar18 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&lStack_d8);
          FUN_1800205d0(&ppppppuStack_520);
          lVar13 = FUN_1800407f0((longlong)param_2,ppppppuVar28);
          puVar19 = FUN_180031420(lVar13,(undefined4 *)alStack_278);
          puVar21 = (undefined1 *)FUN_1800407f0((longlong)param_2,ppppppuVar28);
          abStack_528[0] = (bool)FUN_18001f770(puVar21);
          plVar12 = FUN_180047210((longlong *)afStack_3b8,ppppppuVar28,abStack_528);
          FUN_180027ab0(auStack_358,puVar19,plVar12);
          puVar19 = FUN_180031420((longlong)pppppuStack_500,(undefined4 *)&ppuStack_428);
          FUN_180047430(auStack_2e8,puVar19);
          puVar20 = FUN_18001f5f0(&ppppppuStack_4e8,auStack_358,alStack_278);
          pppuStack_4f8 = (undefined ***)*puVar20;
          plStack_4f0 = (longlong *)puVar20[1];
          FUN_18001fb60(&pppppuStack_110,(longlong *)&pppuStack_4f8);
          plVar12 = FUN_180046760(alStack_448,param_4,param_5);
          plVar12 = FUN_180046fe0(alStack_468,param_4,(char *)plVar12);
          plVar12 = FUN_1800042c0((longlong *)&ppuStack_4b0,(char *)plVar12,
                                  (longlong *)&pppppuStack_110,(longlong *)&ppppppuStack_520);
          FUN_1800051f0(auStack_1f8,plVar12,puVar18);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_1f8,(ThrowInfo *)&DAT_180088d60);
        }
      }
      puVar21 = (undefined1 *)plVar12[1];
      if (puVar21 == (undefined1 *)plVar12[2]) {
        FUN_1800557d0(plVar12,puVar21,(undefined1 *)pppppuStack_500);
        *puStack_4b8 = 1;
        puStack_4b8[8] = 1;
        param_1 = puStack_4b8;
      }
      else {
        FUN_180055ce0(puVar21,(undefined1 *)pppppuStack_500,param_3,pppppppuVar32);
        plVar12[1] = plVar12[1] + 0x58;
        *puStack_4b8 = 1;
        puStack_4b8[8] = 1;
        param_1 = puStack_4b8;
      }
    }
    else {
      ppuStack_f8 = (undefined **)0x0;
      ppuStack_f0 = (undefined **)0x0;
      ppuVar33 = (undefined **)0x0;
      uStack_e8 = 0;
      ppuVar26 = param_6[7];
      ppppppuStack_520 = (undefined8 *******)0x0;
      uStack_518 = 0;
      pppppuStack_510 = (undefined8 ******)0x0;
      pfStack_508 = (float *)0x0;
      if (ppuVar26 == param_6[8]) {
        sVar29 = 0;
        ppuVar26 = (undefined **)&DAT_1800789f6;
      }
      else {
        sVar29 = (longlong)param_6[8] - (longlong)ppuVar26;
      }
      FUN_180027650(&ppppppuStack_520,ppuVar26,sVar29);
      ppppppuStack_4e8 = (undefined8 *******)0x0;
      pppppuStack_4e0 = (undefined8 *****)0x0;
      pppppuStack_4d8 = (undefined8 ******)0x0;
      pfStack_4d0 = (float *)0x0;
      ppppppuVar24 = (undefined8 ******)0x2;
      if (pppppuStack_510 < (undefined8 ******)0x2) {
        ppppppuVar24 = (undefined8 ******)pppppuStack_510;
      }
      pppppppuVar15 = &ppppppuStack_520;
      if ((float *)0xf < pfStack_508) {
        pppppppuVar15 = (undefined8 *******)ppppppuStack_520;
      }
      if (ppppppuVar24 < (undefined8 ******)0x10) {
        FUN_180027650(&ppppppuStack_4e8,pppppppuVar15,(size_t)ppppppuVar24);
        pfStack_4c8 = pfStack_508;
      }
      else {
        pppppppuVar15 = &ppppppuStack_520;
        if ((float *)0xf < pfStack_508) {
          pppppppuVar15 = (undefined8 *******)ppppppuStack_520;
        }
        pppppuStack_510 = ppppppuVar24;
        *(undefined1 *)((longlong)pppppppuVar15 + (longlong)ppppppuVar24) = 0;
        ppppppuStack_4e8 = ppppppuStack_520;
        pppppuStack_4e0 = (undefined8 *****)uStack_518;
        pppppuStack_4d8 = pppppuStack_510;
        pfStack_4d0 = pfStack_508;
        ppppppuStack_520 = (undefined8 ******)((ulonglong)ppppppuStack_520 & 0xffffffffffffff00);
      }
      pfVar7 = pfStack_4d0;
      ppppppuVar24 = ppppppuStack_4e8;
      pppppppuVar15 = &ppppppuStack_4e8;
      if ((float *)0xf < pfStack_4d0) {
        pppppppuVar15 = (undefined8 *******)ppppppuStack_4e8;
      }
      ppppppuVar30 = (undefined8 ******)pppppuStack_4d8;
      if ((undefined8 ******)pppppuStack_4d8 == (undefined8 ******)0x2) {
        iVar10 = memcmp(pppppppuVar15,&DAT_18007aa08,2);
        bVar8 = iVar10 == 0;
      }
      else {
        bVar8 = false;
      }
      if ((float *)0xf < pfVar7) {
        pppppppuVar15 = (undefined8 *******)ppppppuVar24;
        if ((0xfff < (longlong)pfVar7 + 1U) &&
           (pppppppuVar15 = (undefined8 *******)ppppppuVar24[-1],
           0x1f < (ulonglong)((longlong)ppppppuVar24 + (-8 - (longlong)pppppppuVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pppppppuVar15);
      }
      if ((float *)0xf < pfStack_4c8) {
        pppppppuVar15 = (undefined8 *******)ppppppuStack_520;
        if ((0xfff < (longlong)pfStack_4c8 + 1U) &&
           (pppppppuVar15 = (undefined8 *******)ppppppuStack_520[-1],
           0x1f < (ulonglong)((longlong)ppppppuStack_520 + (-8 - (longlong)pppppppuVar15)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pppppppuVar15);
      }
      ppuStack_4b0 = ppuStack_f8;
      ppuStack_4a8 = ppuStack_f0;
      if (!bVar8) {
        pppuVar16 = (undefined ***)FUN_1800038c0((longlong)param_6,(longlong *)&ppppppuStack_520);
        ppuStack_4a8 = ppuStack_f0;
        ppuStack_4b0 = ppuStack_f8;
        if (&ppuStack_f8 == pppuVar16) {
          FUN_180022bf0((longlong *)&ppppppuStack_520);
          ppuVar33 = (undefined **)0x0;
        }
        else {
          ppuVar26 = *pppuVar16;
          ppuVar4 = pppuVar16[1];
          ppuVar33 = pppuVar16[2];
          pppppppuVar32 = (undefined8 *******)0x0;
          *pppuVar16 = (undefined **)0x0;
          pppuVar16[1] = (undefined **)0x0;
          pppuVar16[2] = (undefined **)0x0;
          FUN_180022bf0((longlong *)&ppppppuStack_520);
          ppuStack_4b0 = ppuVar26;
          ppuStack_4a8 = ppuVar4;
        }
      }
      lStack_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      uStack_b0 = 0;
      uStack_a8 = 0;
      plStack_a0 = (longlong *)0x0;
      lStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      pppuStack_4f8 = &ppuStack_4b0;
      uStack_e8 = 0;
      ppuStack_f0 = (undefined **)0x0;
      ppuStack_f8 = (undefined **)0x0;
      pppuStack_488 = &ppuStack_428;
      ppuStack_4a0 = ppuVar33;
      puVar20 = FUN_180006cd0(&ppuStack_428,(longlong)param_6);
      ppppppuStack_4e8 = (undefined8 ******)0x0;
      pppppuStack_4e0 = (undefined8 *****)0x0;
      pppppuStack_4d8 = (undefined8 *****)0x0;
      FUN_180055b80((ulonglong *)&ppppppuStack_4e8,1);
      ppppppuVar24 = ppppppuStack_4e8;
      ppppppuStack_4c0 = &ppppppuStack_4e8;
      pppppuStack_110 = ppppppuStack_4e8;
      pppppuStack_108 = ppppppuStack_4e8;
      ppppppuStack_100 = &ppppppuStack_4e8;
      FUN_180055ce0((undefined1 *)ppppppuStack_4e8,(undefined1 *)pppppuStack_500,ppppppuVar30,
                    pppppppuVar32);
      pppppuStack_4e0 = ppppppuVar24 + 0xb;
      pppuVar16 = &ppuStack_4b0;
      FUN_180051730((undefined1 *)&lStack_d8,(longlong *)&ppppppuStack_4e8,(longlong)puVar20,
                    (longlong *)pppuVar16);
      FUN_1800257d0((longlong *)&ppppppuStack_4e8);
      FUN_180020900(alStack_278,ppppppuVar28);
      FUN_180055ce0(auStack_258,(undefined1 *)&lStack_d8,puVar20,pppuVar16);
      FUN_1800546a0((float *)param_2,&ppppppuStack_4e8,alStack_278);
      FUN_180051580(alStack_278);
      param_1 = puStack_4b8;
      *puStack_4b8 = 1;
      puStack_4b8[8] = 1;
      FUN_1800225b0((char *)&lStack_d8);
      FUN_180022bf0(&lStack_98);
      plVar12 = plStack_a0;
      if (plStack_a0 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_a0 + 1;
        lVar13 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar13 == 1) {
          (**(code **)*plStack_a0)(plStack_a0);
          LOCK();
          piVar1 = (int *)((longlong)plVar12 + 0xc);
          iVar10 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar12 + 8))(plVar12);
          }
        }
      }
      FUN_180022bf0((longlong *)&ppuStack_f8);
    }
  }
LAB_18004fa12:
  FUN_180003d10((longlong)param_6);
  return param_1;
}



// ============================================================
// INDEX: 10/227
// FUNCTION: Clear
// ENTRY: 18005e690
// RVA: 0x5E690
// PRIORITY: 100
// SEED TYPE: STRING
// SIGNATURE: void Clear(ThreadsPool * this)
// ============================================================

/* public: void __cdecl ThreadsPool::Clear(void) __ptr64 */

void __thiscall ThreadsPool::Clear(ThreadsPool *this)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
                    /* 0x5e690  71  ?Clear@ThreadsPool@@QEAAXXZ */
  plVar5 = (longlong *)**(longlong **)this;
  cVar1 = *(char *)((longlong)plVar5 + 0x19);
  while (cVar1 == '\0') {
    lVar2 = plVar5[8];
    *(undefined1 *)(lVar2 + 0x10) = 0;
    WaitForSingleObject(*(HANDLE *)(lVar2 + 8),0xffffffff);
    plVar3 = (longlong *)plVar5[2];
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar3 + 0x19);
      plVar5 = plVar3;
      plVar3 = (longlong *)*plVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar3 + 0x19);
        plVar5 = plVar3;
        plVar3 = (longlong *)*plVar3;
      }
    }
    else {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar4 = (longlong *)plVar5[1];
      plVar3 = plVar5;
      while ((plVar5 = plVar4, cVar1 == '\0' && (plVar3 == (longlong *)plVar5[2]))) {
        cVar1 = *(char *)(plVar5[1] + 0x19);
        plVar4 = (longlong *)plVar5[1];
        plVar3 = plVar5;
      }
    }
    cVar1 = *(char *)((longlong)plVar5 + 0x19);
  }
  FUN_18005e750((longlong *)this);
  Log::Print(1,(char *)0x0,"Threads pool cleaned !");
  return;
}



// ============================================================
// INDEX: 11/227
// FUNCTION: __std_fs_open_handle
// ENTRY: 18006d3e8
// RVA: 0x6D3E8
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
// INDEX: 12/227
// FUNCTION: Initialize
// ENTRY: 1800186f0
// RVA: 0x186F0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void Initialize(Config * this, path * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl Config::Initialize(class std::filesystem::path const & __ptr64) __ptr64 */

void __thiscall Config::Initialize(Config *this,path *param_1)

{
  Config *pCVar1;
  ushort uVar2;
  undefined8 uVar3;
  Config *pCVar4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  void *pvVar6;
  Config *pCVar7;
  Config *pCVar8;
  ulonglong in_R8;
  undefined1 auStack_198 [56];
  void *apvStack_160 [3];
  ulonglong uStack_148;
  Config *pCStack_140;
  undefined **ppuStack_138;
  int iStack_12c;
  longlong lStack_128;
  basic_streambuf<char,std::char_traits<char>_> abStack_120 [8];
  basic_ostream<char,std::char_traits<char>_> abStack_118 [152];
  basic_ios<char,std::char_traits<char>_> abStack_80 [104];
  ulonglong uStack_18;
  
                    /* 0x186f0  88  ?Initialize@Config@@QEAAXAEBVpath@filesystem@std@@@Z */
  uStack_18 = DAT_18008d040 ^ (ulonglong)auStack_198;
  FUN_180005650((longlong *)this,(longlong *)param_1,in_R8);
  uVar3 = FUN_180006010((LPCWSTR)this);
  if ((char)uVar3 == '\0') {
    pCVar8 = this;
    if (7 < *(ulonglong *)(this + 0x18)) {
      pCVar8 = *(Config **)this;
    }
    pCVar7 = pCVar8 + *(longlong *)(this + 0x10) * 2;
    pCVar4 = (Config *)FUN_1800054f0((uint *)pCVar8,(uint *)pCVar7);
    if (pCVar4 != pCVar7) {
      do {
        if ((*(short *)pCVar4 != 0x5c) && (*(short *)pCVar4 != 0x2f)) break;
        pCVar4 = pCVar4 + 2;
      } while (pCVar4 != pCVar7);
      do {
        if (pCVar4 == pCVar7) goto LAB_1800187ce;
        uVar2 = *(ushort *)(pCVar7 + -2);
        in_R8 = (ulonglong)uVar2;
        pCVar1 = pCVar7;
      } while ((uVar2 != 0x5c) && (pCVar7 = pCVar7 + -2, uVar2 != 0x2f));
      do {
        pCVar7 = pCVar1;
        if (pCVar4 == pCVar7) break;
        pCVar1 = pCVar7 + -2;
        uVar2 = *(ushort *)pCVar1;
        in_R8 = (ulonglong)uVar2;
      } while ((uVar2 == 0x5c) || (uVar2 == 0x2f));
    }
LAB_1800187ce:
    ppuStack_138 = (undefined **)((longlong)pCVar7 - (longlong)pCVar8 >> 1);
    pCStack_140 = pCVar8;
    FUN_180034a00(apvStack_160,&pCStack_140);
    pCStack_140 = (Config *)0x0;
    ppuStack_138 = &PTR_vftable_18008d0d8;
    FUN_180006120((uint *)apvStack_160,&pCStack_140,in_R8);
    if ((int)pCStack_140 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005f10("create_directories",&pCStack_140,apvStack_160);
    }
    if (7 < uStack_148) {
      pvVar6 = apvStack_160[0];
      if ((0xfff < uStack_148 * 2 + 2) &&
         (pvVar6 = *(void **)((longlong)apvStack_160[0] + -8),
         0x1f < (ulonglong)((longlong)apvStack_160[0] + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar6);
    }
    memset(&lStack_128,0,0x108);
    FUN_180029c20((basic_ostream<char,std::char_traits<char>_> *)&lStack_128,(wchar_t *)this);
    pbVar5 = FUN_180022820(abStack_120);
    if (pbVar5 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
      std::basic_ios<char,std::char_traits<char>_>::setstate
                ((basic_ios<char,std::char_traits<char>_> *)
                 (abStack_120 + (longlong)*(int *)(lStack_128 + 4) + -8),2,false);
    }
    Log::Print(1,(char *)0x0,"Created config file !");
    *(undefined ***)(abStack_120 + (longlong)*(int *)(lStack_128 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_12c + (longlong)*(int *)(lStack_128 + 4)) =
         *(int *)(lStack_128 + 4) + -0xa8;
    FUN_18001a790(abStack_120);
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              (abStack_118);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_80);
  }
  return;
}



// ============================================================
// INDEX: 13/227
// FUNCTION: SetValue
// ENTRY: 180018be0
// RVA: 0x18BE0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void SetValue(Config * this, basic_string<char,std::char_traits<char>,std::allocator<char>_> * param_1, basic_value<toml::discard_comments,std::unordered_map,std::vector> * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000180018fba) */
/* WARNING: Removing unreachable block (ram,0x000180018fdd) */
/* WARNING: Removing unreachable block (ram,0x000180019000) */
/* WARNING: Removing unreachable block (ram,0x000180019023) */
/* public: void __cdecl Config::SetValue(class std::basic_string<char,struct
   std::char_traits<char>,class std::allocator<char> > const & __ptr64,class
   toml::basic_value<struct toml::discard_comments,class std::unordered_map,class std::vector> const
   & __ptr64)const __ptr64 */

void __thiscall
Config::SetValue(Config *this,
                basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
                basic_value<toml::discard_comments,std::unordered_map,std::vector> *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  basic_value<toml::discard_comments,std::unordered_map,std::vector> bVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar10;
  void *pvVar11;
  undefined8 in_R9;
  undefined1 auStack_248 [48];
  basic_value<toml::discard_comments,std::unordered_map,std::vector> *pbStack_218;
  basic_value<toml::discard_comments,std::unordered_map,std::vector> *pbStack_210;
  basic_value<toml::discard_comments,std::unordered_map,std::vector> abStack_1e8 [8];
  void *apvStack_1e0 [3];
  ulonglong uStack_1c8;
  char acStack_1b8 [56];
  longlong *plStack_180;
  longlong alStack_178 [3];
  int iStack_15c;
  longlong lStack_158;
  basic_streambuf<char,std::char_traits<char>_> abStack_150 [8];
  basic_ostream<char,std::char_traits<char>_> abStack_148 [120];
  longlong lStack_d0;
  basic_ios<char,std::char_traits<char>_> abStack_b0 [104];
  ulonglong uStack_48;
  
                    /* 0x18be0  105
                       ?SetValue@Config@@QEBAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$basic_value@Udiscard_comments@toml@@Vunordered_map@std@@Vvector@4@@toml@@@Z
                        */
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStack_248;
  uVar8 = FUN_180006010((LPCWSTR)this);
  if ((char)uVar8 != '\0') {
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    acStack_1b8[0x18] = '\0';
    acStack_1b8[0x19] = '\0';
    acStack_1b8[0x1a] = '\0';
    acStack_1b8[0x1b] = '\0';
    acStack_1b8[0x1c] = '\0';
    acStack_1b8[0x1d] = '\0';
    acStack_1b8[0x1e] = '\0';
    acStack_1b8[0x1f] = '\0';
    acStack_1b8[0x20] = '\0';
    acStack_1b8[0x21] = '\0';
    acStack_1b8[0x22] = '\0';
    acStack_1b8[0x23] = '\0';
    acStack_1b8[0x24] = '\0';
    acStack_1b8[0x25] = '\0';
    acStack_1b8[0x26] = '\0';
    acStack_1b8[0x27] = '\0';
    acStack_1b8[0x28] = '\0';
    acStack_1b8[0x29] = '\0';
    acStack_1b8[0x2a] = '\0';
    acStack_1b8[0x2b] = '\0';
    acStack_1b8[0x2c] = '\0';
    acStack_1b8[0x2d] = '\0';
    acStack_1b8[0x2e] = '\0';
    acStack_1b8[0x2f] = '\0';
    acStack_1b8[0x30] = '\0';
    acStack_1b8[0x31] = '\0';
    acStack_1b8[0x32] = '\0';
    acStack_1b8[0x33] = '\0';
    acStack_1b8[0x34] = '\0';
    acStack_1b8[0x35] = '\0';
    acStack_1b8[0x36] = '\0';
    acStack_1b8[0x37] = '\0';
    plStack_180 = (longlong *)0x0;
    alStack_178[0] = 0;
    alStack_178[1] = 0;
    alStack_178[2] = 0;
    FUN_180029d50(acStack_1b8);
    uVar8 = 0x108;
    memset(&lStack_158,0,0x108);
    FUN_180029c20((basic_ostream<char,std::char_traits<char>_> *)&lStack_158,(wchar_t *)this);
    if (lStack_d0 != 0) {
      bVar5 = *param_2;
      if (bVar5 == (basic_value<toml::discard_comments,std::unordered_map,std::vector>)0x1) {
        bVar5 = param_2[8];
        pcVar9 = (char *)FUN_180019530(acStack_1b8,(longlong *)param_1,uVar8,in_R9);
        FUN_1800196d0(pcVar9,(char)bVar5);
      }
      else if (bVar5 == (basic_value<toml::discard_comments,std::unordered_map,std::vector>)0x2) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        pcVar9 = (char *)FUN_180019530(acStack_1b8,(longlong *)param_1,uVar8,in_R9);
        FUN_1800225b0(pcVar9);
        *pcVar9 = '\x02';
        pbStack_210 = (basic_value<toml::discard_comments,std::unordered_map,std::vector> *)
                      FUN_18006d620(0x18);
        *(undefined8 *)pbStack_210 = 0;
        *(undefined8 *)(pbStack_210 + 8) = 0;
        *(undefined4 *)(pbStack_210 + 8) = 1;
        *(undefined4 *)(pbStack_210 + 0xc) = 1;
        *(undefined ***)pbStack_210 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
        *(undefined ***)(pbStack_210 + 0x10) = toml::detail::region_base::vftable;
        *(basic_value<toml::discard_comments,std::unordered_map,std::vector> **)(pcVar9 + 0x30) =
             pbStack_210 + 0x10;
        plVar6 = *(longlong **)(pcVar9 + 0x38);
        *(basic_value<toml::discard_comments,std::unordered_map,std::vector> **)(pcVar9 + 0x38) =
             pbStack_210;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        *(undefined8 *)(pcVar9 + 8) = uVar4;
      }
      else if (bVar5 == (basic_value<toml::discard_comments,std::unordered_map,std::vector>)0x3) {
        uVar4 = *(undefined8 *)(param_2 + 8);
        pcVar9 = (char *)FUN_180019530(acStack_1b8,(longlong *)param_1,uVar8,in_R9);
        FUN_180029f00(pcVar9,uVar4,uVar8,in_R9);
      }
      else if (bVar5 == (basic_value<toml::discard_comments,std::unordered_map,std::vector>)0x4) {
        pbStack_218 = abStack_1e8;
        abStack_1e8[0] = param_2[8];
        FUN_180020900(apvStack_1e0,(undefined8 *)(param_2 + 0x10));
        pbStack_210 = abStack_1e8;
        pcVar9 = (char *)FUN_180019530(acStack_1b8,(longlong *)param_1,uVar8,in_R9);
        FUN_1800225b0(pcVar9);
        *pcVar9 = '\x04';
        pbStack_218 = (basic_value<toml::discard_comments,std::unordered_map,std::vector> *)
                      FUN_18006d620(0x18);
        *(undefined8 *)pbStack_218 = 0;
        *(undefined8 *)((longlong)pbStack_218 + 8) = 0;
        *(undefined4 *)((longlong)pbStack_218 + 8) = 1;
        *(undefined4 *)((longlong)pbStack_218 + 0xc) = 1;
        *(undefined ***)pbStack_218 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
        *(undefined8 *)((longlong)pbStack_218 + 0x10) = toml::detail::region_base::vftable;
        *(undefined8 **)(pcVar9 + 0x30) = (undefined8 *)((longlong)pbStack_218 + 0x10);
        plVar6 = *(longlong **)(pcVar9 + 0x38);
        *(basic_value<toml::discard_comments,std::unordered_map,std::vector> **)(pcVar9 + 0x38) =
             pbStack_218;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar6 + 1;
          lVar7 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar7 == 1) {
            (**(code **)*plVar6)(plVar6);
            LOCK();
            piVar2 = (int *)((longlong)plVar6 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar6 + 8))(plVar6);
            }
          }
        }
        *(basic_value<toml::discard_comments,std::unordered_map,std::vector> *)(pcVar9 + 8) =
             abStack_1e8[0];
        FUN_180020900((undefined8 *)(pcVar9 + 0x10),apvStack_1e0);
        if (0xf < uStack_1c8) {
          pvVar11 = apvStack_1e0[0];
          if ((0xfff < uStack_1c8 + 1) &&
             (pvVar11 = *(void **)((longlong)apvStack_1e0[0] + -8),
             0x1f < (ulonglong)((longlong)apvStack_1e0[0] + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar11);
        }
      }
      this_00 = FUN_180029fe0((basic_ostream<char,std::char_traits<char>_> *)&lStack_158,acStack_1b8
                             );
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,FUN_18002a240);
      pbVar10 = FUN_180022820(abStack_150);
      if (pbVar10 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   (abStack_150 + (longlong)*(int *)(lStack_158 + 4) + -8),2,false);
      }
    }
    *(undefined ***)(abStack_150 + (longlong)*(int *)(lStack_158 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(lStack_158 + 4)) =
         *(int *)(lStack_158 + 4) + -0xa8;
    FUN_18001a790(abStack_150);
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              (abStack_148);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_b0);
    FUN_1800225b0(acStack_1b8);
    FUN_180022bf0(alStack_178);
    plVar6 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_180 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
  }
  return;
}



// ============================================================
// INDEX: 14/227
// FUNCTION: SetCEFKeyValuePair
// ENTRY: 180019050
// RVA: 0x19050
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void SetCEFKeyValuePair(Config * this, scoped_refptr<CefListValue> * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: void __cdecl Config::SetCEFKeyValuePair(class scoped_refptr<class CefListValue> const &
   __ptr64)const __ptr64 */

void __thiscall Config::SetCEFKeyValuePair(Config *this,scoped_refptr<CefListValue> *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  longlong *plVar14;
  char *pcVar15;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  basic_streambuf<char,std::char_traits<char>_> *pbVar16;
  void *pvVar17;
  void *pvVar18;
  undefined8 uVar19;
  undefined8 in_R9;
  undefined1 auStack_288 [48];
  longlong *plStack_258;
  void *pvStack_250;
  char cStack_248;
  longlong *plStack_240;
  void *pvStack_238;
  char cStack_230;
  longlong alStack_228 [9];
  void *apvStack_1e0 [3];
  ulonglong uStack_1c8;
  char acStack_1b8 [56];
  longlong *plStack_180;
  longlong alStack_178 [3];
  int iStack_15c;
  longlong lStack_158;
  basic_streambuf<char,std::char_traits<char>_> abStack_150 [8];
  basic_ostream<char,std::char_traits<char>_> abStack_148 [120];
  longlong lStack_d0;
  basic_ios<char,std::char_traits<char>_> abStack_b0 [104];
  ulonglong uStack_48;
  
                    /* 0x19050  101
                       ?SetCEFKeyValuePair@Config@@QEBAXAEBV?$scoped_refptr@VCefListValue@@@@@Z */
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStack_288;
  lVar12 = (**(code **)(**(longlong **)param_1 + 0x38))();
  if (lVar12 == 2) {
    acStack_1b8[0] = '\0';
    acStack_1b8[1] = '\0';
    acStack_1b8[2] = '\0';
    acStack_1b8[3] = '\0';
    acStack_1b8[4] = '\0';
    acStack_1b8[5] = '\0';
    acStack_1b8[6] = '\0';
    acStack_1b8[7] = '\0';
    acStack_1b8[8] = '\0';
    acStack_1b8[9] = '\0';
    acStack_1b8[10] = '\0';
    acStack_1b8[0xb] = '\0';
    acStack_1b8[0xc] = '\0';
    acStack_1b8[0xd] = '\0';
    acStack_1b8[0xe] = '\0';
    acStack_1b8[0xf] = '\0';
    acStack_1b8[0x10] = '\0';
    acStack_1b8[0x11] = '\0';
    acStack_1b8[0x12] = '\0';
    acStack_1b8[0x13] = '\0';
    acStack_1b8[0x14] = '\0';
    acStack_1b8[0x15] = '\0';
    acStack_1b8[0x16] = '\0';
    acStack_1b8[0x17] = '\0';
    acStack_1b8[0x18] = '\0';
    acStack_1b8[0x19] = '\0';
    acStack_1b8[0x1a] = '\0';
    acStack_1b8[0x1b] = '\0';
    acStack_1b8[0x1c] = '\0';
    acStack_1b8[0x1d] = '\0';
    acStack_1b8[0x1e] = '\0';
    acStack_1b8[0x1f] = '\0';
    acStack_1b8[0x20] = '\0';
    acStack_1b8[0x21] = '\0';
    acStack_1b8[0x22] = '\0';
    acStack_1b8[0x23] = '\0';
    acStack_1b8[0x24] = '\0';
    acStack_1b8[0x25] = '\0';
    acStack_1b8[0x26] = '\0';
    acStack_1b8[0x27] = '\0';
    acStack_1b8[0x28] = '\0';
    acStack_1b8[0x29] = '\0';
    acStack_1b8[0x2a] = '\0';
    acStack_1b8[0x2b] = '\0';
    acStack_1b8[0x2c] = '\0';
    acStack_1b8[0x2d] = '\0';
    acStack_1b8[0x2e] = '\0';
    acStack_1b8[0x2f] = '\0';
    acStack_1b8[0x30] = '\0';
    acStack_1b8[0x31] = '\0';
    acStack_1b8[0x32] = '\0';
    acStack_1b8[0x33] = '\0';
    acStack_1b8[0x34] = '\0';
    acStack_1b8[0x35] = '\0';
    acStack_1b8[0x36] = '\0';
    acStack_1b8[0x37] = '\0';
    plStack_180 = (longlong *)0x0;
    alStack_178[0] = 0;
    alStack_178[1] = 0;
    alStack_178[2] = 0;
    FUN_180029d50(acStack_1b8);
    memset(&lStack_158,0,0x108);
    FUN_180029c20((basic_ostream<char,std::char_traits<char>_> *)&lStack_158,(wchar_t *)this);
    if (lStack_d0 != 0) {
      uVar19 = 0;
      plVar13 = (longlong *)
                (**(code **)(**(longlong **)param_1 + 0x78))(*(longlong **)param_1,&pvStack_250);
      FUN_180019940(plVar13,(longlong *)apvStack_1e0);
      if (pvStack_250 != (void *)0x0) {
        if (cStack_248 != '\0') {
          cef_string_utf16_clear();
          FUN_18006d9d4(pvStack_250);
        }
        pvStack_250 = (void *)0x0;
        cStack_248 = '\0';
      }
      iVar11 = (**(code **)(**(longlong **)param_1 + 0x50))(*(longlong **)param_1,1);
      if (iVar11 == 2) {
        cVar10 = (**(code **)(**(longlong **)param_1 + 0x60))(*(longlong **)param_1,1);
        pcVar15 = (char *)FUN_180019530(acStack_1b8,(longlong *)apvStack_1e0,uVar19,in_R9);
        FUN_1800196d0(pcVar15,cVar10);
      }
      else if (iVar11 == 3) {
        iVar11 = (**(code **)(**(longlong **)param_1 + 0x68))(*(longlong **)param_1,1);
        pcVar15 = (char *)FUN_180019530(acStack_1b8,(longlong *)apvStack_1e0,uVar19,in_R9);
        FUN_1800225b0(pcVar15);
        *pcVar15 = '\x02';
        plStack_258 = (longlong *)FUN_18006d620(0x18);
        *plStack_258 = 0;
        plStack_258[1] = 0;
        *(undefined4 *)(plStack_258 + 1) = 1;
        *(undefined4 *)((longlong)plStack_258 + 0xc) = 1;
        *plStack_258 = (longlong)std::_Ref_count_obj2<toml::detail::region_base>::vftable;
        plStack_258[2] = (longlong)toml::detail::region_base::vftable;
        *(longlong **)(pcVar15 + 0x30) = plStack_258 + 2;
        plVar13 = *(longlong **)(pcVar15 + 0x38);
        *(longlong **)(pcVar15 + 0x38) = plStack_258;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar14 = plVar13 + 1;
          lVar12 = *plVar14;
          *(int *)plVar14 = (int)*plVar14 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
        *(longlong *)(pcVar15 + 8) = (longlong)iVar11;
      }
      else if (iVar11 == 4) {
        uVar4 = (**(code **)(**(longlong **)param_1 + 0x70))(*(longlong **)param_1,1);
        pcVar15 = (char *)FUN_180019530(acStack_1b8,(longlong *)apvStack_1e0,uVar19,in_R9);
        FUN_180029f00(pcVar15,uVar4,uVar19,in_R9);
      }
      else if (iVar11 == 5) {
        plStack_240 = alStack_228;
        uVar19 = 1;
        plVar13 = (longlong *)
                  (**(code **)(**(longlong **)param_1 + 0x78))(*(longlong **)param_1,&pvStack_238);
        plVar14 = FUN_180019940(plVar13,alStack_228);
        plStack_258 = plVar14;
        pcVar15 = (char *)FUN_180019530(acStack_1b8,(longlong *)apvStack_1e0,uVar19,in_R9);
        FUN_1800225b0(pcVar15);
        *pcVar15 = '\x04';
        plStack_258 = (longlong *)FUN_18006d620(0x18);
        *plStack_258 = 0;
        plStack_258[1] = 0;
        *(undefined4 *)(plStack_258 + 1) = 1;
        *(undefined4 *)((longlong)plStack_258 + 0xc) = 1;
        *plStack_258 = (longlong)std::_Ref_count_obj2<toml::detail::region_base>::vftable;
        plStack_258[2] = (longlong)toml::detail::region_base::vftable;
        *(longlong **)(pcVar15 + 0x30) = plStack_258 + 2;
        plVar13 = *(longlong **)(pcVar15 + 0x38);
        *(longlong **)(pcVar15 + 0x38) = plStack_258;
        if (plVar13 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar13 + 1;
          lVar12 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar12 == 1) {
            (**(code **)*plVar13)(plVar13);
            LOCK();
            piVar2 = (int *)((longlong)plVar13 + 0xc);
            iVar11 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar11 == 1) {
              (**(code **)(*plVar13 + 8))(plVar13);
            }
          }
        }
        lVar12 = *plVar14;
        lVar7 = plVar14[1];
        lVar8 = plVar14[2];
        uVar5 = *(undefined4 *)((longlong)plVar14 + 0x14);
        lVar9 = plVar14[3];
        uVar6 = *(undefined4 *)((longlong)plVar14 + 0x1c);
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        pcVar15[8] = '\0';
        *(longlong *)(pcVar15 + 0x10) = lVar12;
        *(longlong *)(pcVar15 + 0x18) = lVar7;
        *(int *)(pcVar15 + 0x20) = (int)lVar8;
        *(undefined4 *)(pcVar15 + 0x24) = uVar5;
        *(int *)(pcVar15 + 0x28) = (int)lVar9;
        *(undefined4 *)(pcVar15 + 0x2c) = uVar6;
        if (0xf < (ulonglong)plVar14[3]) {
          pvVar18 = (void *)*plVar14;
          pvVar17 = pvVar18;
          if ((0xfff < plVar14[3] + 1U) &&
             (pvVar17 = *(void **)((longlong)pvVar18 + -8),
             0x1f < (ulonglong)((longlong)pvVar18 + (-8 - (longlong)pvVar17)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar17);
        }
        plVar14[2] = 0;
        plVar14[3] = 0xf;
        *(undefined1 *)plVar14 = 0;
        if ((pvStack_238 != (void *)0x0) && (cStack_230 != '\0')) {
          cef_string_utf16_clear();
          FUN_18006d9d4(pvStack_238);
        }
      }
      this_00 = FUN_180029fe0((basic_ostream<char,std::char_traits<char>_> *)&lStack_158,acStack_1b8
                             );
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,FUN_18002a240);
      pbVar16 = FUN_180022820(abStack_150);
      if (pbVar16 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
        std::basic_ios<char,std::char_traits<char>_>::setstate
                  ((basic_ios<char,std::char_traits<char>_> *)
                   (abStack_150 + (longlong)*(int *)(lStack_158 + 4) + -8),2,false);
      }
      if (0xf < uStack_1c8) {
        pvVar18 = apvStack_1e0[0];
        if ((0xfff < uStack_1c8 + 1) &&
           (pvVar18 = *(void **)((longlong)apvStack_1e0[0] + -8),
           0x1f < (ulonglong)((longlong)apvStack_1e0[0] + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar18);
      }
    }
    *(undefined ***)(abStack_150 + (longlong)*(int *)(lStack_158 + 4) + -8) =
         std::basic_ofstream<char,std::char_traits<char>_>::vftable;
    *(int *)((longlong)&iStack_15c + (longlong)*(int *)(lStack_158 + 4)) =
         *(int *)(lStack_158 + 4) + -0xa8;
    FUN_18001a790(abStack_150);
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              (abStack_148);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_b0);
    FUN_1800225b0(acStack_1b8);
    FUN_180022bf0(alStack_178);
    plVar13 = plStack_180;
    if (plStack_180 != (longlong *)0x0) {
      LOCK();
      plVar14 = plStack_180 + 1;
      lVar12 = *plVar14;
      *(int *)plVar14 = (int)*plVar14 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*plStack_180)(plStack_180);
        LOCK();
        piVar2 = (int *)((longlong)plVar13 + 0xc);
        iVar11 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (**(code **)(*plVar13 + 8))(plVar13);
        }
      }
    }
  }
  return;
}



// ============================================================
// INDEX: 15/227
// FUNCTION: FUN_180026900
// ENTRY: 180026900
// RVA: 0x26900
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180026900(basic_ostream<char,std::char_traits<char>_> * param_1, char * param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180026900(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  __int64 _Var5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  lVar7 = -1;
  do {
    lVar7 = lVar7 + 1;
  } while (param_2[lVar7] != '\0');
  lVar6 = *(longlong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if ((lVar6 < 1) || (lVar6 <= lVar7)) {
    lVar6 = 0;
  }
  else {
    lVar6 = lVar6 - lVar7;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar4 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_180026a59;
      }
    }
    _Var5 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       lVar7);
    if (_Var5 == lVar7) {
      for (; 0 < lVar6; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) goto LAB_180026a59;
      }
    }
    else {
LAB_180026a59:
      iVar4 = 4;
    }
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



// ============================================================
// INDEX: 16/227
// FUNCTION: FUN_180026bf0
// ENTRY: 180026bf0
// RVA: 0x26BF0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180026bf0(basic_ostream<char,std::char_traits<char>_> * param_1, char param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180026bf0(basic_ostream<char,std::char_traits<char>_> *param_1,char param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int iVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = 0;
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar3 = false;
  if (bVar2) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar3 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar3 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar3 != false) {
    lVar6 = *(longlong *)param_1;
    lVar7 = 0;
    if (1 < *(longlong *)(param_1 + (longlong)*(int *)(lVar6 + 4) + 0x28)) {
      lVar7 = *(longlong *)(param_1 + (longlong)*(int *)(lVar6 + 4) + 0x28) + -1;
    }
    iVar1 = iVar5;
    if ((*(uint *)(param_1 + (longlong)*(int *)(lVar6 + 4) + 0x18) & 0x1c0) == 0x40) {
LAB_180026ced:
      iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                        (*(basic_streambuf<char,std::char_traits<char>_> **)
                          (param_1 + (longlong)*(int *)(lVar6 + 4) + 0x48),param_2);
      iVar1 = iVar5;
      if (iVar4 == -1) {
        iVar1 = 4;
      }
      while ((iVar5 = iVar1, iVar5 == 0 && (0 < lVar7))) {
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        lVar7 = lVar7 + -1;
        iVar1 = 4;
        if (iVar4 != -1) {
          iVar1 = iVar5;
        }
      }
    }
    else {
      while (iVar5 = iVar1, iVar5 == 0) {
        if (lVar7 < 1) {
          lVar6 = *(longlong *)param_1;
          goto LAB_180026ced;
        }
        iVar4 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        lVar7 = lVar7 + -1;
        iVar1 = 4;
        if (iVar4 != -1) {
          iVar1 = iVar5;
        }
      }
    }
  }
  *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar5,false);
  iVar5 = std::uncaught_exceptions();
  if (iVar5 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



// ============================================================
// INDEX: 17/227
// FUNCTION: FUN_180029c20
// ENTRY: 180029c20
// RVA: 0x29C20
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180029c20(basic_ostream<char,std::char_traits<char>_> * param_1, wchar_t * param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180029c20(basic_ostream<char,std::char_traits<char>_> *param_1,wchar_t *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  *(undefined **)param_1 = &DAT_18007b470;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xa8));
  pbVar1 = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 8);
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            (param_1,pbVar1,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (pbVar1);
  *(undefined ***)pbVar1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x84] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  param_1[0x79] = (basic_ostream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(pbVar1);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x7c) = DAT_18008e3d0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  pbVar1 = FUN_180032e80(pbVar1,param_2,2);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xa8;
  return param_1;
}



// ============================================================
// INDEX: 18/227
// FUNCTION: FUN_180032e80
// ENTRY: 180032e80
// RVA: 0x32E80
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_streambuf<char,std::char_traits<char>_> * FUN_180032e80(basic_streambuf<char,std::char_traits<char>_> * param_1, wchar_t * param_2, int param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_streambuf<char,std::char_traits<char>_> *
FUN_180032e80(basic_streambuf<char,std::char_traits<char>_> *param_1,wchar_t *param_2,int param_3)

{
  bool bVar1;
  _iobuf *p_Var2;
  locale *plVar3;
  facet *this;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  longlong *plStack_30;
  ulonglong uStack_28;
  
  uStack_28 = DAT_18008d040 ^ (ulonglong)auStack_68;
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (p_Var2 = std::_Fiopen(param_2,param_3,0x40), p_Var2 != (_iobuf *)0x0)) {
    param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x1;
    param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
    std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
    _get_stream_buffer_pointers(p_Var2,&uStack_48,&uStack_40,&uStack_38);
    *(undefined8 *)(param_1 + 0x18) = uStack_48;
    *(undefined8 *)(param_1 + 0x20) = uStack_48;
    *(undefined8 *)(param_1 + 0x38) = uStack_40;
    *(undefined8 *)(param_1 + 0x40) = uStack_40;
    *(undefined8 *)(param_1 + 0x50) = uStack_38;
    *(undefined8 *)(param_1 + 0x58) = uStack_38;
    *(_iobuf **)(param_1 + 0x80) = p_Var2;
    *(undefined8 *)(param_1 + 0x74) = DAT_18008e3d0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    plVar3 = (locale *)std::basic_streambuf<char,std::char_traits<char>_>::getloc(param_1);
    this = FUN_18002a380(plVar3);
    bVar1 = std::codecvt_base::always_noconv((codecvt_base *)this);
    if (bVar1) {
      *(undefined8 *)(param_1 + 0x68) = 0;
    }
    else {
      *(facet **)(param_1 + 0x68) = this;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
    }
    if ((plStack_30 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*plStack_30 + 0x10))(), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)(puVar4,1);
    }
  }
  else {
    param_1 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  return param_1;
}



// ============================================================
// INDEX: 19/227
// FUNCTION: FUN_180034840
// ENTRY: 180034840
// RVA: 0x34840
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180034840(basic_ostream<char,std::char_traits<char>_> * param_1, char * param_2, ulonglong param_3)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180034840(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2,ulonglong param_3)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  iVar4 = 0;
  uVar5 = *(ulonglong *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28);
  if (((longlong)uVar5 < 1) || (uVar5 <= param_3)) {
    lVar6 = 0;
  }
  else {
    lVar6 = uVar5 - param_3;
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) + 8)
    )();
  }
  bVar1 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
  bVar2 = false;
  if (bVar1) {
    this = *(basic_ostream<char,std::char_traits<char>_> **)
            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x50);
    if ((this == (basic_ostream<char,std::char_traits<char>_> *)0x0) || (this == param_1)) {
      bVar2 = true;
    }
    else {
      std::basic_ostream<char,std::char_traits<char>_>::flush(this);
      bVar2 = std::ios_base::good((ios_base *)(param_1 + *(int *)(*(longlong *)param_1 + 4)));
    }
  }
  if (bVar2 == false) {
    iVar4 = 4;
  }
  else {
    if ((*(uint *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x18) & 0x1c0) != 0x40)
    {
      for (; lVar6 != 0; lVar6 = lVar6 + -1) {
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) {
          iVar4 = 4;
          goto LAB_180034954;
        }
      }
    }
    uVar5 = std::basic_streambuf<char,std::char_traits<char>_>::sputn
                      (*(basic_streambuf<char,std::char_traits<char>_> **)
                        (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),param_2,
                       param_3);
    if (uVar5 == param_3) {
LAB_180034954:
      do {
        if (lVar6 == 0) goto LAB_180034981;
        iVar3 = std::basic_streambuf<char,std::char_traits<char>_>::sputc
                          (*(basic_streambuf<char,std::char_traits<char>_> **)
                            (param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48),
                           (char)param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58]);
        if (iVar3 == -1) break;
        lVar6 = lVar6 + -1;
      } while( true );
    }
    iVar4 = 4;
LAB_180034981:
    *(undefined8 *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x28) = 0;
  }
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (param_1 + *(int *)(*(longlong *)param_1 + 4)),iVar4,false);
  iVar4 = std::uncaught_exceptions();
  if (iVar4 == 0) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx(param_1);
  }
  if (*(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) !=
      (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + 0x48) +
                0x10))();
  }
  return param_1;
}



// ============================================================
// INDEX: 20/227
// FUNCTION: FUN_18003a240
// ENTRY: 18003a240
// RVA: 0x3A240
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: basic_istream<char,std::char_traits<char>_> * FUN_18003a240(basic_istream<char,std::char_traits<char>_> * param_1, wchar_t * param_2)
// ============================================================

basic_istream<char,std::char_traits<char>_> *
FUN_18003a240(basic_istream<char,std::char_traits<char>_> *param_1,wchar_t *param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *pbVar1;
  
  if (7 < *(ulonglong *)(param_2 + 0xc)) {
    param_2 = *(wchar_t **)param_2;
  }
  *(undefined **)param_1 = &DAT_18007b560;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(param_1 + 0xb0));
  pbVar1 = (basic_streambuf<char,std::char_traits<char>_> *)(param_1 + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (param_1,pbVar1,false);
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (pbVar1);
  *(undefined ***)pbVar1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  param_1[0x8c] = (basic_istream<char,std::char_traits<char>_>)0x0;
  param_1[0x81] = (basic_istream<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(pbVar1);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x84) = DAT_18008e3d0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  pbVar1 = FUN_180032e80(pbVar1,param_2,0x21);
  if (pbVar1 == (basic_streambuf<char,std::char_traits<char>_> *)0x0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)
               (param_1 + *(int *)(*(longlong *)param_1 + 4)),2,false);
  }
  *(undefined ***)(param_1 + *(int *)(*(longlong *)param_1 + 4)) =
       std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(param_1 + (longlong)*(int *)(*(longlong *)param_1 + 4) + -4) =
       *(int *)(*(longlong *)param_1 + 4) + -0xb0;
  return param_1;
}



// ============================================================
// INDEX: 21/227
// FUNCTION: FUN_18005bf60
// ENTRY: 18005bf60
// RVA: 0x5BF60
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: uint * FUN_18005bf60(uint * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_18005bf60(uint *param_1)

{
  char *pcVar1;
  short sVar2;
  void *pvVar3;
  uint *puVar4;
  ulonglong uVar5;
  uint *puVar6;
  uint ****ppppuVar7;
  void *pvVar8;
  uint *puVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  uint *puStack_78;
  longlong lStack_70;
  WCHAR WStack_60;
  undefined6 uStack_5e;
  undefined8 uStack_50;
  ulonglong uStack_48;
  uint ***apppuStack_40 [2];
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  longlong lVar11;
  
  uStack_20 = DAT_18008d040 ^ (ulonglong)auStack_98;
  puStack_78 = param_1;
  GetModuleFileNameA((HMODULE)&IMAGE_DOS_HEADER_180000000,&DAT_18008e260,0x104);
  lVar11 = -1;
  do {
    lVar10 = lVar11 + 1;
    pcVar1 = &DAT_18008e261 + lVar11;
    lVar11 = lVar10;
  } while (*pcVar1 != '\0');
  uVar5 = FUN_18006cde8();
  puStack_78 = (uint *)&DAT_18008e260;
  lStack_70 = lVar10;
  FUN_18005b990((LPWSTR)apppuStack_40,(UINT)uVar5,&puStack_78);
  uVar5 = FUN_18006cde8();
  puStack_78 = (uint *)0x18007b910;
  lStack_70 = 7;
  FUN_18005b990(&WStack_60,(UINT)uVar5,&puStack_78);
  ppppuVar7 = apppuStack_40;
  if (7 < uStack_28) {
    ppppuVar7 = (uint ****)apppuStack_40[0];
  }
  puVar9 = (uint *)((longlong)ppppuVar7 + uStack_30 * 2);
  puVar6 = FUN_1800054f0((uint *)ppppuVar7,puVar9);
  if (puVar6 == puVar9) {
LAB_18005c05e:
    uVar5 = (longlong)puVar9 - (longlong)ppppuVar7 >> 1;
    if (uStack_30 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_180020a20();
    }
    ppppuVar7 = apppuStack_40;
    if (7 < uStack_28) {
      ppppuVar7 = (uint ****)apppuStack_40[0];
    }
    uStack_30 = uVar5;
    *(undefined2 *)((longlong)ppppuVar7 + uVar5 * 2) = 0;
    FUN_18005bd60(param_1,(uint *)apppuStack_40,(uint *)&WStack_60);
    if (7 < uStack_48) {
      pvVar3 = (void *)CONCAT62(uStack_5e,WStack_60);
      pvVar8 = pvVar3;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (pvVar8 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar8)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar8);
    }
    uStack_50 = _DAT_18007c610;
    uStack_48 = _UNK_18007c618;
    WStack_60 = L'\0';
    if (7 < uStack_28) {
      ppppuVar7 = (uint ****)apppuStack_40[0];
      if ((0xfff < uStack_28 * 2 + 2) &&
         (ppppuVar7 = (uint ****)apppuStack_40[0][-1],
         0x1f < (ulonglong)((longlong)apppuStack_40[0] + (-8 - (longlong)ppppuVar7)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppuVar7);
    }
    return param_1;
  }
  do {
    puVar4 = puVar9;
    if (((short)*puVar6 != 0x5c) && ((short)*puVar6 != 0x2f)) break;
    puVar6 = (uint *)((longlong)puVar6 + 2);
  } while (puVar6 != puVar9);
  do {
    puVar9 = puVar4;
    if (puVar6 == puVar9) goto LAB_18005c05e;
    sVar2 = *(short *)((longlong)puVar9 + -2);
    if ((sVar2 == 0x5c) || (puVar4 = (uint *)((longlong)puVar9 + -2), sVar2 == 0x2f))
    goto LAB_18005c05e;
  } while( true );
}



// ============================================================
// INDEX: 22/227
// FUNCTION: Print
// ENTRY: 18005c160
// RVA: 0x5C160
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void Print(LogType param_1, char * param_2, char * param_3, ...)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* public: static void __cdecl Log::Print(enum LogType,char const * __ptr64,char const *
   __ptr64,...) */

void __cdecl Log::Print(LogType param_1,char *param_2,char *param_3,...)

{
  char cVar1;
  code *pcVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  errno_t eVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  char ****ppppcVar13;
  ulonglong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  LPCWSTR ***ppppWVar17;
  undefined1 *puVar18;
  char *pcVar19;
  size_t sVar20;
  undefined8 in_R9;
  char **ppcVar21;
  undefined8 uStackX_20;
  undefined1 auStack_568 [32];
  char *pcStack_548;
  char ***pppcStack_540;
  undefined8 *puStack_538;
  tm tStack_528;
  undefined2 uStack_500;
  undefined6 uStack_4fe;
  undefined8 uStack_4f0;
  ulonglong uStack_4e8;
  undefined *puStack_4e0;
  FILE *pFStack_4d8;
  char ***pppcStack_4d0;
  undefined8 uStack_4c8;
  ulonglong uStack_4c0;
  ulonglong uStack_4b8;
  char **ppcStack_4a8;
  undefined8 uStack_4a0;
  LPCWSTR **apppWStack_498 [3];
  ulonglong uStack_480;
  undefined1 auStack_478 [512];
  undefined1 auStack_278 [544];
  ulonglong uStack_58;
  
                    /* 0x5c160  93  ?Print@Log@@SAXW4LogType@@PEBD1ZZ */
  uStack_58 = DAT_18008d040 ^ (ulonglong)auStack_568;
  puStack_4e0 = &DAT_18008d0f0;
  uStackX_20 = in_R9;
  iVar6 = _Mtx_lock();
  if (iVar6 != 0) {
    std::_Throw_Cpp_error(5);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (DAT_18008d13c == 0x7fffffff) {
    DAT_18008d13c = 0x7ffffffe;
    std::_Throw_Cpp_error(6);
  }
  ppcVar21 = &DAT_18008d158;
  if (param_1 == 0) {
    FUN_18005bf60((uint *)apppWStack_498);
    pcVar19 = (char *)apppWStack_498;
    if (7 < uStack_480) {
      pcVar19 = (char *)apppWStack_498[0];
    }
    uVar8 = __std_fs_create_directory((LPCWSTR)pcVar19);
    iVar6 = (int)((ulonglong)uVar8 >> 0x20);
    if (iVar6 != 0) goto LAB_18005c6e8;
    uVar9 = FUN_18006cde8();
    ppcStack_4a8 = (char **)0x18007b918;
    uStack_4a0 = 10;
    FUN_18005b990((LPWSTR)&tStack_528,(UINT)uVar9,&ppcStack_4a8);
    puVar10 = FUN_18005bd60((uint *)&uStack_500,(uint *)apppWStack_498,(uint *)&tStack_528);
    FUN_180005f70((longlong *)&DAT_18008d158,(longlong *)puVar10);
    if (7 < uStack_4e8) {
      pvVar3 = (void *)CONCAT62(uStack_4fe,uStack_500);
      pvVar15 = pvVar3;
      if ((0xfff < uStack_4e8 * 2 + 2) &&
         (pvVar15 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar15);
    }
    uStack_4f0 = _DAT_18007c610;
    uStack_4e8 = _UNK_18007c618;
    uStack_500 = 0;
    if (7 < (ulonglong)tStack_528._24_8_) {
      pvVar3 = (void *)CONCAT44(tStack_528.tm_min,tStack_528.tm_sec);
      pvVar15 = pvVar3;
      if ((0xfff < tStack_528._24_8_ * 2 + 2U) &&
         (pvVar15 = *(void **)((longlong)pvVar3 + -8),
         0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar15)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar15);
    }
    puVar5 = DAT_18008d148;
    uVar9 = ((longlong)DAT_18008d148 - DAT_18008d140) / 0x58;
    if (uVar9 < 0x101) {
      puVar11 = DAT_18008d148;
      if (uVar9 < 0x100) {
        if ((ulonglong)((DAT_18008d150 - DAT_18008d140) / 0x58) < 0x100) {
          FUN_18005d260();
          puVar11 = DAT_18008d148;
        }
        else {
          puVar11 = FUN_18005d4e0(DAT_18008d148,0x100 - uVar9);
        }
      }
    }
    else {
      puVar11 = (undefined1 *)(DAT_18008d140 + 0x5800);
      for (puVar18 = puVar11; puVar18 != puVar5; puVar18 = puVar18 + 0x58) {
        FUN_180049a60((longlong)puVar18);
      }
    }
    DAT_18008d148 = puVar11;
    if (7 < uStack_480) {
      ppppWVar17 = (LPCWSTR ***)apppWStack_498[0];
      if ((0xfff < uStack_480 * 2 + 2) &&
         (ppppWVar17 = (LPCWSTR ***)apppWStack_498[0][-1],
         0x1f < (ulonglong)((longlong)apppWStack_498[0] + (-8 - (longlong)ppppWVar17)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppWVar17);
    }
  }
  ppcStack_4a8 = (char **)_time64((__time64_t *)0x0);
  _localtime64_s(&tStack_528,(__time64_t *)&ppcStack_4a8);
  puVar12 = (undefined8 *)FUN_180001da0();
  pppcStack_540 = (char ***)0x0;
  uVar8 = 0x200;
  iVar6 = (int)((ulonglong)auStack_478 >> 0x20);
  pcStack_548 = param_3;
  puStack_538 = &uStackX_20;
  __stdio_common_vsnprintf_s(*puVar12);
  uStack_4c8 = 0;
  uStack_4c0 = 0;
  uStack_4b8 = 0xf;
  pppcStack_4d0 = (char ***)0x0;
  if (param_2 == (char *)0x0) {
    cVar1 = *(char *)((longlong)DAT_18008e660[1] + 0x19);
    puVar12 = (undefined8 *)DAT_18008e660[1];
    puVar4 = DAT_18008e660;
    while (puVar16 = puVar12, cVar1 == '\0') {
      if (*(int *)(puVar16 + 4) < (int)param_1) {
        puVar12 = (undefined8 *)puVar16[2];
        puVar16 = puVar4;
      }
      else {
        puVar12 = (undefined8 *)*puVar16;
      }
      cVar1 = *(char *)((longlong)puVar12 + 0x19);
      puVar4 = puVar16;
    }
    if ((*(char *)((longlong)puVar4 + 0x19) != '\0') || ((int)param_1 < *(int *)(puVar4 + 4))) {
      pcVar19 = "invalid map<K, T> key";
      std::_Xout_of_range("invalid map<K, T> key");
LAB_18005c6e8:
                    /* WARNING: Subroutine does not return */
      FUN_18005bef0(pcVar19,iVar6,apppWStack_498);
    }
    sVar20 = 0xffffffffffffffff;
    do {
      sVar20 = sVar20 + 1;
    } while (*(char *)((longlong)puVar4[5] + sVar20) != '\0');
    FUN_180022f50((longlong *)&pppcStack_4d0,(void *)puVar4[5],sVar20);
  }
  else {
    uStack_4c0 = 1;
    pppcStack_4d0 = (char ***)0x5b;
    FUN_1800205f0((longlong *)&pppcStack_4d0,param_2);
    if (uStack_4c0 < uStack_4b8) {
      ppppcVar13 = &pppcStack_4d0;
      if (0xf < uStack_4b8) {
        ppppcVar13 = (char ****)pppcStack_4d0;
      }
      pcVar19 = (char *)((longlong)ppppcVar13 + uStack_4c0);
      uStack_4c0 = uStack_4c0 + 1;
      pcVar19[0] = ']';
      pcVar19[1] = '\0';
    }
    else {
      FUN_18002cf70(&pppcStack_4d0,uStack_4b8,uVar8,0x5d);
    }
  }
  pppcStack_540 = (char ***)&pppcStack_4d0;
  if (0xf < uStack_4b8) {
    pppcStack_540 = pppcStack_4d0;
  }
  puStack_538 = (undefined8 *)auStack_478;
  pcStack_548 = (char *)CONCAT44(pcStack_548._4_4_,tStack_528.tm_sec);
  uVar9 = (ulonglong)(uint)tStack_528.tm_min;
  FUN_18005cd30(auStack_278,"[%02d:%02d:%02d] %s %s\n",(ulonglong)(uint)tStack_528.tm_hour,uVar9);
  pcVar19 = "a";
  if (param_1 == 0) {
    pcVar19 = "w";
  }
  if (7 < DAT_18008d170) {
    ppcVar21 = (char **)DAT_18008d158;
  }
  uStack_4a0 = DAT_18008d168;
  ppcStack_4a8 = ppcVar21;
  uVar14 = FUN_18006cde8();
  FUN_1800443c0((longlong *)apppWStack_498,(UINT)uVar14,&ppcStack_4a8);
  ppppWVar17 = apppWStack_498;
  if (0xf < uStack_480) {
    ppppWVar17 = (LPCWSTR ***)apppWStack_498[0];
  }
  eVar7 = fopen_s(&pFStack_4d8,(char *)ppppWVar17,pcVar19);
  if (0xf < uStack_480) {
    ppppWVar17 = (LPCWSTR ***)apppWStack_498[0];
    if ((0xfff < uStack_480 + 1) &&
       (ppppWVar17 = (LPCWSTR ***)apppWStack_498[0][-1],
       0x1f < (ulonglong)((longlong)apppWStack_498[0] + (-8 - (longlong)ppppWVar17)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppWVar17);
  }
  if (eVar7 == 0) {
    FUN_18005b920(pFStack_4d8,&DAT_18007b878,auStack_278,uVar9);
    fclose(pFStack_4d8);
    ppppcVar13 = &pppcStack_4d0;
    if (0xf < uStack_4b8) {
      ppppcVar13 = (char ****)pppcStack_4d0;
    }
    puStack_538 = (undefined8 *)auStack_478;
    pppcStack_540 = (char ***)CONCAT44(pppcStack_540._4_4_,tStack_528.tm_sec);
    pcStack_548 = (char *)CONCAT44(pcStack_548._4_4_,tStack_528.tm_min);
    AddToCache(param_1,(char *)ppppcVar13,"[%02d:%02d:%02d] %s",(ulonglong)(uint)tStack_528.tm_hour)
    ;
  }
  if (0xf < uStack_4b8) {
    ppppcVar13 = (char ****)pppcStack_4d0;
    if ((0xfff < uStack_4b8 + 1) &&
       (ppppcVar13 = (char ****)pppcStack_4d0[-1],
       (char *)0x1f < (char *)((longlong)pppcStack_4d0 + (-8 - (longlong)ppppcVar13)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar13);
  }
  uStack_4c0 = 0;
  uStack_4b8 = 0xf;
  pppcStack_4d0 = (char ***)((ulonglong)pppcStack_4d0 & 0xffffffffffffff00);
  _Mtx_unlock(&DAT_18008d0f0);
  return;
}



// ============================================================
// INDEX: 23/227
// FUNCTION: ~Thread
// ENTRY: 18005e3e0
// RVA: 0x5E3E0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: void ~Thread(Thread * this)
// ============================================================

/* public: __cdecl Thread::~Thread(void) __ptr64 */

void __thiscall Thread::~Thread(Thread *this)

{
                    /* 0x5e3e0  42  ??1Thread@@QEAA@XZ */
  *(undefined ***)this = vftable;
                    /* WARNING: Could not recover jumptable at 0x00018005e3ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CloseHandle(*(HANDLE *)(this + 8));
  return;
}



// ============================================================
// INDEX: 24/227
// FUNCTION: FUN_18005f700
// ENTRY: 18005f700
// RVA: 0x5F700
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined FUN_18005f700(longlong param_1)
// ============================================================

void FUN_18005f700(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = Thread::vftable;
    CloseHandle((HANDLE)puVar1[1]);
    FUN_18006d9d4(puVar1);
    return;
  }
  return;
}



// ============================================================
// INDEX: 25/227
// FUNCTION: FUN_18005f740
// ENTRY: 18005f740
// RVA: 0x5F740
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined FUN_18005f740(undefined8 * param_1)
// ============================================================

void FUN_18005f740(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = Thread::vftable;
    CloseHandle((HANDLE)puVar1[1]);
    FUN_18006d9d4(puVar1);
    return;
  }
  return;
}



// ============================================================
// INDEX: 26/227
// FUNCTION: __std_fs_convert_narrow_to_wide
// ENTRY: 18006ce10
// RVA: 0x6CE10
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
// INDEX: 27/227
// FUNCTION: __std_fs_convert_wide_to_narrow
// ENTRY: 18006ce58
// RVA: 0x6CE58
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
  BOOL aBStackX_8 [2];
  int iStack_28;
  DWORD DStack_24;
  
  if ((param_1 == 0xfde9) || (param_1 == 0xd698)) {
    iStack_28 = WideCharToMultiByte(param_1,0x80,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
  }
  else {
    aBStackX_8[0] = 0;
    iStack_28 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                    aBStackX_8);
    if (aBStackX_8[0] != 0) {
      iStack_28 = 0;
      DStack_24 = 0x459;
      goto LAB_18006cf5e;
    }
  }
  if (iStack_28 == 0) {
    DStack_24 = GetLastError();
  }
  else {
    DStack_24 = 0;
  }
  if (DStack_24 == 0x3ec) {
    iStack_28 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
    if (iStack_28 == 0) {
      DStack_24 = GetLastError();
    }
    else {
      DStack_24 = 0;
    }
  }
LAB_18006cf5e:
  return CONCAT44(DStack_24,iStack_28);
}



// ============================================================
// INDEX: 28/227
// FUNCTION: FUN_18006cf7c
// ENTRY: 18006cf7c
// RVA: 0x6CF7C
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_18006cf7c(UINT param_1, LPCWSTR param_2, int param_3, LPSTR param_4, int param_5)
// ============================================================

undefined8 FUN_18006cf7c(UINT param_1,LPCWSTR param_2,int param_3,LPSTR param_4,int param_5)

{
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = WideCharToMultiByte(param_1,0x400,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                  (LPBOOL)0x0);
  if (uStack_18 == 0) {
    uStack_14 = GetLastError();
  }
  else {
    uStack_14 = 0;
  }
  if (uStack_14 == 0x3ec) {
    uStack_18 = WideCharToMultiByte(param_1,0,param_2,param_3,param_4,param_5,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
    if (uStack_18 == 0) {
      uStack_14 = GetLastError();
    }
    else {
      uStack_14 = 0;
    }
  }
  return CONCAT44(uStack_14,uStack_18);
}



// ============================================================
// INDEX: 29/227
// FUNCTION: FUN_18006d0c0
// ENTRY: 18006d0c0
// RVA: 0x6D0C0
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: DWORD FUN_18006d0c0(LPCWSTR param_1, ulonglong * param_2, uint param_3, uint param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

DWORD FUN_18006d0c0(LPCWSTR param_1,ulonglong *param_2,uint param_3,uint param_4)

{
  BOOL BVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_2c8 [32];
  undefined8 uStack_2a8;
  uint auStack_2a0 [2];
  ulonglong uStack_298;
  undefined4 uStack_290;
  uint uStack_28c;
  DWORD DStack_288;
  DWORD DStack_284;
  uint uStack_280;
  _WIN32_FIND_DATAW _Stack_278;
  ulonglong uStack_28;
  
  uStack_28 = DAT_18008d040 ^ (ulonglong)auStack_2c8;
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
      BVar1 = GetFileAttributesExW(param_1,GetFileExInfoStandard,auStack_2a0);
      if (BVar1 == 0) {
        DVar2 = GetLastError();
        if (DVar2 != 0x20) {
          return DVar2;
        }
        pvVar3 = FindFirstFileW(param_1,&_Stack_278);
        if (pvVar3 == (HANDLE)0xffffffffffffffff) {
          DVar2 = GetLastError();
          return DVar2;
        }
        FindClose(pvVar3);
        uStack_28c = _Stack_278.ftLastWriteTime.dwLowDateTime;
        DStack_288 = _Stack_278.ftLastWriteTime.dwHighDateTime;
      }
      else {
        _Stack_278.ftLastWriteTime.dwHighDateTime = DStack_288;
        _Stack_278.ftLastWriteTime.dwLowDateTime = uStack_28c;
        _Stack_278.dwFileAttributes = auStack_2a0[0];
        _Stack_278.nFileSizeHigh = DStack_284;
        _Stack_278.nFileSizeLow = uStack_280;
      }
      if (((param_3 & 1) == 0) || ((_Stack_278.dwFileAttributes >> 10 & 1) == 0)) {
        *(DWORD *)(param_2 + 2) = _Stack_278.dwFileAttributes;
        param_2[1] = CONCAT44(_Stack_278.nFileSizeHigh,_Stack_278.nFileSizeLow);
        *param_2 = (ulonglong)_Stack_278.ftLastWriteTime & 0xffffffff00000000 |
                   (ulonglong)uStack_28c;
        uVar4 = uVar4 & 0xffffffd5;
        if (uVar4 == 0) {
          return 0;
        }
      }
    }
    DVar2 = __std_fs_open_handle
                      (&uStack_2a8,param_1,0x80,(((byte)param_3 & 1 ^ 1) + 0x10) * 0x200000);
    if (DVar2 == 0) {
      pvVar3 = (HANDLE)CONCAT44(uStack_2a8._4_4_,(undefined4)uStack_2a8);
      uVar5 = uVar4;
      if ((uVar4 & 0x26) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileBasicInfo,auStack_2a0,0x28);
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
        *param_2 = CONCAT44(uStack_28c,uStack_290);
        *(uint *)(param_2 + 2) = uStack_280;
        if ((uVar5 >> 2 & 1) != 0) {
          if ((uStack_280 >> 10 & 1) == 0) {
            *(undefined4 *)((longlong)param_2 + 0x14) = 0;
          }
          else {
            BVar1 = GetFileInformationByHandleEx(pvVar3,FileAttributeTagInfo,&uStack_2a8,8);
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
            *(undefined4 *)((longlong)param_2 + 0x14) = uStack_2a8._4_4_;
          }
          uVar5 = uVar4 & 0xffffffd9;
        }
      }
      if ((uVar5 & 0x18) != 0) {
        BVar1 = GetFileInformationByHandleEx(pvVar3,FileStandardInfo,auStack_2a0,0x18);
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
        param_2[1] = uStack_298;
        *(undefined4 *)(param_2 + 3) = uStack_290;
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
      if ((HANDLE)CONCAT44(uStack_2a8._4_4_,(undefined4)uStack_2a8) == (HANDLE)0xffffffffffffffff) {
        return DVar2;
      }
      BVar1 = CloseHandle((HANDLE)CONCAT44(uStack_2a8._4_4_,(undefined4)uStack_2a8));
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
// INDEX: 30/227
// FUNCTION: FUN_180072648
// ENTRY: 180072648
// RVA: 0x72648
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_180072648(undefined8 param_1, longlong param_2)
// ============================================================

undefined8 FUN_180072648(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x60) + 4) +
             (longlong)*(longlong **)(param_2 + 0x60)),4,true);
  return 0;
}



// ============================================================
// INDEX: 31/227
// FUNCTION: FUN_1800726a8
// ENTRY: 1800726a8
// RVA: 0x726A8
// PRIORITY: 60
// SEED TYPE: API
// SIGNATURE: undefined8 FUN_1800726a8(undefined8 param_1, longlong param_2)
// ============================================================

undefined8 FUN_1800726a8(undefined8 param_1,longlong param_2)

{
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             ((longlong)*(int *)(**(longlong **)(param_2 + 0x50) + 4) +
             (longlong)*(longlong **)(param_2 + 0x50)),4,true);
  return 0;
}



// ============================================================
// INDEX: 32/227
// FUNCTION: CreateFileW
// ENTRY: EXTERNAL:00000005
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE CreateFileW(LPCWSTR lpFileName, DWORD dwDesiredAccess, DWORD dwShareMode, LPSECURITY_ATTRIBUTES lpSecurityAttributes, DWORD dwCreationDisposition, DWORD dwFlagsAndAttributes, HANDLE hTemplateFile)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000005: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 33/227
// FUNCTION: GetModuleFileNameA
// ENTRY: EXTERNAL:0000000d
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetModuleFileNameA(HMODULE hModule, LPSTR lpFilename, DWORD nSize)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 34/227
// FUNCTION: GetFileInformationByHandleEx
// ENTRY: EXTERNAL:00000027
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL GetFileInformationByHandleEx(HANDLE hFile, FILE_INFO_BY_HANDLE_CLASS FileInformationClass, LPVOID lpFileInformation, DWORD dwBufferSize)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000027: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 35/227
// FUNCTION: GetFileAttributesExW
// ENTRY: EXTERNAL:00000029
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL GetFileAttributesExW(LPCWSTR lpFileName, GET_FILEEX_INFO_LEVELS fInfoLevelId, LPVOID lpFileInformation)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000029: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 36/227
// FUNCTION: FindFirstFileW
// ENTRY: EXTERNAL:0000002a
// RVA: unknown
// PRIORITY: 15
// SEED TYPE: CONTEXT
// SIGNATURE: HANDLE FindFirstFileW(LPCWSTR lpFileName, LPWIN32_FIND_DATAW lpFindFileData)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000002a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 37/227
// FUNCTION: cef_string_utf16_clear
// ENTRY: EXTERNAL:00000003
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined cef_string_utf16_clear(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000003: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 38/227
// FUNCTION: FindClose
// ENTRY: EXTERNAL:00000004
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL FindClose(HANDLE hFindFile)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000004: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 39/227
// FUNCTION: WaitForSingleObject
// ENTRY: EXTERNAL:0000000e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD WaitForSingleObject(HANDLE hHandle, DWORD dwMilliseconds)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 40/227
// FUNCTION: CloseHandle
// ENTRY: EXTERNAL:0000000f
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: BOOL CloseHandle(HANDLE hObject)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000000f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 41/227
// FUNCTION: GetLastError
// ENTRY: EXTERNAL:00000011
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: DWORD GetLastError(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000011: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 42/227
// FUNCTION: WideCharToMultiByte
// ENTRY: EXTERNAL:00000025
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int WideCharToMultiByte(UINT CodePage, DWORD dwFlags, LPCWSTR lpWideCharStr, int cchWideChar, LPSTR lpMultiByteStr, int cbMultiByte, LPCSTR lpDefaultChar, LPBOOL lpUsedDefaultChar)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000025: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 43/227
// FUNCTION: MultiByteToWideChar
// ENTRY: EXTERNAL:00000026
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int MultiByteToWideChar(UINT CodePage, DWORD dwFlags, LPCSTR lpMultiByteStr, int cbMultiByte, LPWSTR lpWideCharStr, int cchWideChar)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000026: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 44/227
// FUNCTION: setstate
// ENTRY: EXTERNAL:0000002e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void setstate(basic_ios<char,std::char_traits<char>_> * this, int param_1, bool param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000002e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 45/227
// FUNCTION: basic_ios<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000002f
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_ios<char,std::char_traits<char>_>(basic_ios<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000002f: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 46/227
// FUNCTION: basic_ostream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:00000030
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_ostream<char,std::char_traits<char>_>(basic_ostream<char,std::char_traits<char>_> * this, basic_streambuf<char,std::char_traits<char>_> * param_1, bool param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000030: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 47/227
// FUNCTION: basic_istream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:00000031
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_istream<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> * this, basic_streambuf<char,std::char_traits<char>_> * param_1, bool param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000031: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 48/227
// FUNCTION: ~basic_ios<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000003b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void ~basic_ios<char,std::char_traits<char>_>(basic_ios<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 49/227
// FUNCTION: ~basic_ostream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:0000003c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void ~basic_ostream<char,std::char_traits<char>_>(basic_ostream<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 50/227
// FUNCTION: operator<<
// ENTRY: EXTERNAL:0000003d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,struct_std::char_traits<char>_> * operator<<(basic_ostream<char,std::char_traits<char>_> * this, _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 51/227
// FUNCTION: operator<<
// ENTRY: EXTERNAL:0000003e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,struct_std::char_traits<char>_> * operator<<(basic_ostream<char,std::char_traits<char>_> * this, _func_ios_base_ptr_ios_base_ptr * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000003e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 52/227
// FUNCTION: ~basic_istream<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:00000040
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void ~basic_istream<char,std::char_traits<char>_>(basic_istream<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000040: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 53/227
// FUNCTION: operator>>
// ENTRY: EXTERNAL:00000041
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_istream<char,struct_std::char_traits<char>_> * operator>>(basic_istream<char,std::char_traits<char>_> * this, _func_ios_base_ptr_ios_base_ptr * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000041: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 54/227
// FUNCTION: operator>>
// ENTRY: EXTERNAL:00000042
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_istream<char,struct_std::char_traits<char>_> * operator>>(basic_istream<char,std::char_traits<char>_> * this, uint * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000042: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 55/227
// FUNCTION: exceptions
// ENTRY: EXTERNAL:00000047
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void exceptions(ios_base * this, int param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000047: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 56/227
// FUNCTION: good
// ENTRY: EXTERNAL:00000049
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: bool good(ios_base * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000049: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 57/227
// FUNCTION: always_noconv
// ENTRY: EXTERNAL:0000004a
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: bool always_noconv(codecvt_base * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 58/227
// FUNCTION: _Throw_Cpp_error
// ENTRY: EXTERNAL:0000004c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _Throw_Cpp_error(int param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 59/227
// FUNCTION: _Mtx_lock
// ENTRY: EXTERNAL:0000004d
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined _Mtx_lock(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004d: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 60/227
// FUNCTION: _Mtx_unlock
// ENTRY: EXTERNAL:0000004e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined _Mtx_unlock(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000004e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 61/227
// FUNCTION: flush
// ENTRY: EXTERNAL:00000051
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,struct_std::char_traits<char>_> * flush(basic_ostream<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000051: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 62/227
// FUNCTION: _Osfx
// ENTRY: EXTERNAL:00000052
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _Osfx(basic_ostream<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000052: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 63/227
// FUNCTION: _Init
// ENTRY: EXTERNAL:00000053
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _Init(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000053: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 64/227
// FUNCTION: basic_streambuf<char,std::char_traits<char>_>
// ENTRY: EXTERNAL:00000054
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined basic_streambuf<char,std::char_traits<char>_>(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000054: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 65/227
// FUNCTION: sputc
// ENTRY: EXTERNAL:00000057
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int sputc(basic_streambuf<char,std::char_traits<char>_> * this, char param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000057: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 66/227
// FUNCTION: sputn
// ENTRY: EXTERNAL:0000005c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: __int64 sputn(basic_streambuf<char,std::char_traits<char>_> * this, char * param_1, __int64 param_2)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000005c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 67/227
// FUNCTION: getloc
// ENTRY: EXTERNAL:0000005e
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: locale getloc(basic_streambuf<char,std::char_traits<char>_> * this)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000005e: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 68/227
// FUNCTION: _Fiopen
// ENTRY: EXTERNAL:00000066
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: _iobuf * _Fiopen(wchar_t * param_1, int param_2, int param_3)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000066: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 69/227
// FUNCTION: _Xout_of_range
// ENTRY: EXTERNAL:00000069
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _Xout_of_range(char * param_1)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000069: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 70/227
// FUNCTION: uncaught_exceptions
// ENTRY: EXTERNAL:0000006c
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int uncaught_exceptions(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000006c: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 71/227
// FUNCTION: _invalid_parameter_noinfo_noreturn
// ENTRY: EXTERNAL:0000008a
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _invalid_parameter_noinfo_noreturn(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000008a: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 72/227
// FUNCTION: abort
// ENTRY: EXTERNAL:00000096
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void abort(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:00000096: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 73/227
// FUNCTION: fclose
// ENTRY: EXTERNAL:0000009b
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int fclose(FILE * _File)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:0000009b: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 74/227
// FUNCTION: __stdio_common_vsnprintf_s
// ENTRY: EXTERNAL:000000a4
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined __stdio_common_vsnprintf_s(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:000000a4: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 75/227
// FUNCTION: _get_stream_buffer_pointers
// ENTRY: EXTERNAL:000000a8
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined _get_stream_buffer_pointers(void)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:000000a8: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 76/227
// FUNCTION: fopen_s
// ENTRY: EXTERNAL:000000ab
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: errno_t fopen_s(FILE * * _File, char * _Filename, char * _Mode)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:000000ab: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 77/227
// FUNCTION: _localtime64_s
// ENTRY: EXTERNAL:000000bd
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: errno_t _localtime64_s(tm * _Tm, __time64_t * _Time)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:000000bd: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 78/227
// FUNCTION: _time64
// ENTRY: EXTERNAL:000000be
// RVA: unknown
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: __time64_t _time64(__time64_t * _Time)
// ============================================================
// DECOMPILE FAILED: Exception while decompiling EXTERNAL:000000be: Cannot marshal address space: EXTERNAL


// ============================================================
// INDEX: 79/227
// FUNCTION: FUN_180001d40
// ENTRY: 180001d40
// RVA: 0x1D40
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180001d40(longlong * param_1)
// ============================================================

void FUN_180001d40(longlong *param_1)

{
  if (param_1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000180001d4d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,1);
    return;
  }
  return;
}



// ============================================================
// INDEX: 80/227
// FUNCTION: FUN_180001da0
// ENTRY: 180001da0
// RVA: 0x1DA0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined * FUN_180001da0(void)
// ============================================================

undefined * FUN_180001da0(void)

{
  return &DAT_18008e240;
}



// ============================================================
// INDEX: 81/227
// FUNCTION: FUN_180001fe0
// ENTRY: 180001fe0
// RVA: 0x1FE0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180001fe0(undefined4 * param_1)
// ============================================================

undefined4 * FUN_180001fe0(undefined4 *param_1)

{
  *param_1 = 1;
  *(undefined ***)(param_1 + 2) = &PTR_vftable_18008d0b8;
  return param_1;
}



// ============================================================
// INDEX: 82/227
// FUNCTION: FUN_1800027a0
// ENTRY: 1800027a0
// RVA: 0x27A0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * * * FUN_1800027a0(undefined8 * * * param_1, undefined8 * param_2, ulonglong * param_3)
// ============================================================

undefined8 *** FUN_1800027a0(undefined8 ***param_1,undefined8 *param_2,ulonglong *param_3)

{
  ulonglong uStack_18;
  ulonglong uStack_10;
  
  uStack_18 = *param_3;
  uStack_10 = param_3[1];
  FUN_180002000(param_1,&uStack_18,param_2);
  *param_1 = (undefined8 **)std::ios_base::failure::vftable;
  return param_1;
}



// ============================================================
// INDEX: 83/227
// FUNCTION: FUN_180002bb0
// ENTRY: 180002bb0
// RVA: 0x2BB0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180002bb0(basic_ostream<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180002bb0(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*(longlong *)param_1 + 4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18008e3f0) {
    FUN_18006d5a8(&DAT_18008e3f0);
    if (DAT_18008e3f0 == -1) {
      DAT_18008e3d8 = std::ios_base::xalloc();
      _Init_thread_footer(&DAT_18008e3f0);
    }
  }
  plVar2 = std::ios_base::iword((ios_base *)(param_1 + iVar1),DAT_18008e3d8);
  if (*plVar2 == 1) {
    FUN_180026900(param_1,"\x1b[00m");
  }
  return param_1;
}



// ============================================================
// INDEX: 84/227
// FUNCTION: FUN_180002c50
// ENTRY: 180002c50
// RVA: 0x2C50
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180002c50(basic_ostream<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180002c50(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*(longlong *)param_1 + 4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18008e3f0) {
    FUN_18006d5a8(&DAT_18008e3f0);
    if (DAT_18008e3f0 == -1) {
      DAT_18008e3d8 = std::ios_base::xalloc();
      _Init_thread_footer(&DAT_18008e3f0);
    }
  }
  plVar2 = std::ios_base::iword((ios_base *)(param_1 + iVar1),DAT_18008e3d8);
  if (*plVar2 == 1) {
    FUN_180026900(param_1,"\x1b[01m");
  }
  return param_1;
}



// ============================================================
// INDEX: 85/227
// FUNCTION: FUN_180002cf0
// ENTRY: 180002cf0
// RVA: 0x2CF0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180002cf0(basic_ostream<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180002cf0(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*(longlong *)param_1 + 4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18008e3f0) {
    FUN_18006d5a8(&DAT_18008e3f0);
    if (DAT_18008e3f0 == -1) {
      DAT_18008e3d8 = std::ios_base::xalloc();
      _Init_thread_footer(&DAT_18008e3f0);
    }
  }
  plVar2 = std::ios_base::iword((ios_base *)(param_1 + iVar1),DAT_18008e3d8);
  if (*plVar2 == 1) {
    FUN_180026900(param_1,"\x1b[31m");
  }
  return param_1;
}



// ============================================================
// INDEX: 86/227
// FUNCTION: FUN_180002d90
// ENTRY: 180002d90
// RVA: 0x2D90
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180002d90(basic_ostream<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_180002d90(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(*(longlong *)param_1 + 4);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4) <
      DAT_18008e3f0) {
    FUN_18006d5a8(&DAT_18008e3f0);
    if (DAT_18008e3f0 == -1) {
      DAT_18008e3d8 = std::ios_base::xalloc();
      _Init_thread_footer(&DAT_18008e3f0);
    }
  }
  plVar2 = std::ios_base::iword((ios_base *)(param_1 + iVar1),DAT_18008e3d8);
  if (*plVar2 == 1) {
    FUN_180026900(param_1,"\x1b[34m");
  }
  return param_1;
}



// ============================================================
// INDEX: 87/227
// FUNCTION: FUN_1800038c0
// ENTRY: 1800038c0
// RVA: 0x38C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800038c0(longlong param_1, longlong * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1800038c0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 (*pauVar8) [32];
  undefined8 *******pppppppuVar9;
  undefined1 (*pauVar10) [32];
  undefined1 (*pauVar11) [32];
  size_t sVar12;
  undefined8 *puVar13;
  undefined1 (*pauVar15) [32];
  longlong lVar16;
  ulonglong uVar17;
  undefined8 *puVar18;
  uint uVar19;
  undefined1 auStack_b8 [32];
  uint uStack_98;
  longlong *plStack_90;
  undefined8 *******pppppppuStack_88;
  longlong lStack_80;
  longlong lStack_78;
  ulonglong uStack_70;
  undefined8 *******pppppppuStack_68;
  longlong lStack_60;
  longlong lStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  undefined8 *puVar14;
  
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStack_b8;
  *param_2 = 0;
  param_2[1] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  uVar19 = 1;
  uStack_98 = 1;
  pauVar10 = *(undefined1 (**) [32])(param_1 + 0x38);
  pauVar11 = pauVar10;
  do {
    pauVar15 = pauVar11;
    if (pauVar15 == (undefined1 (*) [32])**(longlong **)(param_1 + 8)) break;
    pauVar11 = (undefined1 (*) [32])(pauVar15[-1] + 0x1f);
  } while ((*(undefined1 (*) [32])(pauVar15[-1] + 0x1f))[0] != '\n');
  while ((pauVar15 != pauVar10 && (((*pauVar15)[0] + 0xa5 & 0xdf) != 0))) {
    pauVar15 = (undefined1 (*) [32])(*pauVar15 + 1);
  }
  plStack_90 = param_2;
  if (pauVar10 == pauVar15) {
    do {
      pauVar11 = pauVar10;
      if (pauVar11 == (undefined1 (*) [32])**(longlong **)(param_1 + 8)) goto LAB_180003ade;
      pauVar10 = (undefined1 (*) [32])(pauVar11[-1] + 0x1f);
    } while ((*(undefined1 (*) [32])(pauVar11[-1] + 0x1f))[0] != '\n');
    do {
      pauVar15 = (undefined1 (*) [32])(pauVar11[-1] + 0x1f);
      pauVar10 = pauVar15;
      do {
        pauVar11 = pauVar10;
        if (pauVar11 == (undefined1 (*) [32])**(longlong **)(param_1 + 8)) break;
        pauVar10 = (undefined1 (*) [32])(pauVar11[-1] + 0x1f);
      } while ((*(undefined1 (*) [32])(pauVar11[-1] + 0x1f))[0] != '\n');
      pauVar8 = thunk_FUN_18006ccc0(pauVar11,pauVar15,0x23);
      pauVar10 = pauVar11;
      if (pauVar8 == pauVar15) break;
      for (; pauVar10 != pauVar8; pauVar10 = (undefined1 (*) [32])(*pauVar10 + 1)) {
        if (((*pauVar10)[0] != ' ') && ((*pauVar10)[0] != '\t')) goto LAB_180003ade;
      }
      pauVar10 = (undefined1 (*) [32])(*pauVar8 + 1);
      uVar19 = uVar19 | 2;
      lStack_78 = 0;
      uStack_70 = 0;
      pppppppuStack_88 = (undefined8 *******)0x0;
      lStack_80 = 0;
      if (pauVar10 == pauVar15) {
        sVar12 = 0;
        pauVar10 = (undefined1 (*) [32])&DAT_1800789f6;
      }
      else {
        sVar12 = (longlong)pauVar15 - (longlong)pauVar10;
      }
      FUN_180027650(&pppppppuStack_88,pauVar10,sVar12);
      if (lStack_78 != 0) {
        pppppppuVar9 = &pppppppuStack_88;
        if (0xf < uStack_70) {
          pppppppuVar9 = pppppppuStack_88;
        }
        lVar16 = lStack_78 + -1;
        if (*(char *)((longlong)pppppppuVar9 + lVar16) == '\r') {
          pppppppuVar9 = &pppppppuStack_88;
          if (0xf < uStack_70) {
            pppppppuVar9 = pppppppuStack_88;
          }
          lStack_78 = lVar16;
          *(undefined1 *)((longlong)pppppppuVar9 + lVar16) = 0;
        }
      }
      plVar1 = (longlong *)param_2[1];
      uStack_98 = uVar19;
      if (plVar1 == (longlong *)param_2[2]) {
        FUN_18003b740(param_2,plVar1,(longlong *)&pppppppuStack_88);
        uVar17 = uStack_70;
      }
      else {
        *plVar1 = (longlong)pppppppuStack_88;
        plVar1[1] = lStack_80;
        plVar1[2] = lStack_78;
        plVar1[3] = uStack_70;
        pppppppuStack_88 = (undefined8 *******)((ulonglong)pppppppuStack_88 & 0xffffffffffffff00);
        param_2[1] = param_2[1] + 0x20;
        uVar17 = 0xf;
      }
      if (0xf < uVar17) {
        pppppppuVar9 = pppppppuStack_88;
        if ((0xfff < uVar17 + 1) &&
           (pppppppuVar9 = (undefined8 *******)pppppppuStack_88[-1],
           0x1f < (ulonglong)((longlong)pppppppuStack_88 + (-8 - (longlong)pppppppuVar9))))
        goto LAB_180003c91;
        FUN_18006d9d4(pppppppuVar9);
      }
    } while (pauVar11 != (undefined1 (*) [32])**(longlong **)(param_1 + 8));
  }
LAB_180003ade:
  puVar13 = (undefined8 *)param_2[1];
  puVar18 = (undefined8 *)*param_2;
  if ((1 < (ulonglong)((longlong)puVar13 - (longlong)puVar18 >> 5)) && (puVar18 != puVar13)) {
    do {
      puVar14 = puVar13 + -4;
      if (puVar18 == puVar14) break;
      uVar2 = *puVar18;
      uVar3 = puVar18[1];
      uVar4 = puVar18[2];
      uVar5 = puVar18[3];
      uVar6 = puVar13[-3];
      *puVar18 = *puVar14;
      puVar18[1] = uVar6;
      uVar6 = puVar13[-1];
      puVar18[2] = puVar13[-2];
      puVar18[3] = uVar6;
      *puVar14 = uVar2;
      puVar13[-3] = uVar3;
      puVar13[-2] = uVar4;
      puVar13[-1] = uVar5;
      puVar18 = puVar18 + 4;
      puVar13 = puVar14;
    } while (puVar18 != puVar14);
  }
  pauVar10 = thunk_FUN_18006ccc0(*(undefined1 (**) [32])(param_1 + 0x40),
                                 *(undefined1 (**) [32])(*(longlong *)(param_1 + 8) + 8),10);
  pauVar10 = thunk_FUN_18006ccc0(*(undefined1 (**) [32])(param_1 + 0x40),pauVar10,0x23);
  pauVar11 = thunk_FUN_18006ccc0(*(undefined1 (**) [32])(param_1 + 0x40),
                                 *(undefined1 (**) [32])(*(longlong *)(param_1 + 8) + 8),10);
  if (pauVar10 != pauVar11) {
    pauVar11 = *(undefined1 (**) [32])(param_1 + 0x40);
    pauVar15 = pauVar11;
    if (pauVar11 == pauVar10) {
LAB_180003b9f:
      if (pauVar10 != pauVar15) {
        return param_2;
      }
    }
    else {
      do {
        if ((0x2c < (byte)(*pauVar15)[0]) ||
           ((0x100100000200U >> ((longlong)(char)(*pauVar15)[0] & 0x3fU) & 1) == 0))
        goto LAB_180003b9f;
        puVar7 = *pauVar15;
        pauVar15 = (undefined1 (*) [32])(puVar7 + 1);
      } while ((undefined1 (*) [32])(puVar7 + 1) != pauVar10);
    }
    pauVar11 = thunk_FUN_18006ccc0(pauVar11,*(undefined1 (**) [32])(*(longlong *)(param_1 + 8) + 8),
                                   10);
    pauVar10 = (undefined1 (*) [32])(*pauVar10 + 1);
    lStack_58 = 0;
    uStack_50 = 0;
    pppppppuStack_68 = (undefined8 *******)0x0;
    lStack_60 = 0;
    if (pauVar10 == pauVar11) {
      sVar12 = 0;
      pauVar10 = (undefined1 (*) [32])&DAT_1800789f6;
    }
    else {
      sVar12 = (longlong)pauVar11 - (longlong)pauVar10;
    }
    FUN_180027650(&pppppppuStack_68,pauVar10,sVar12);
    if (lStack_58 != 0) {
      pppppppuVar9 = &pppppppuStack_68;
      if (0xf < uStack_50) {
        pppppppuVar9 = pppppppuStack_68;
      }
      lVar16 = lStack_58 + -1;
      if (*(char *)(lVar16 + (longlong)pppppppuVar9) == '\r') {
        pppppppuVar9 = &pppppppuStack_68;
        if (0xf < uStack_50) {
          pppppppuVar9 = pppppppuStack_68;
        }
        lStack_58 = lVar16;
        *(undefined1 *)((longlong)pppppppuVar9 + lVar16) = 0;
      }
    }
    plVar1 = (longlong *)param_2[1];
    uStack_98 = uVar19 | 4;
    if (plVar1 == (longlong *)param_2[2]) {
      FUN_18003b740(param_2,plVar1,(longlong *)&pppppppuStack_68);
      uVar17 = uStack_50;
    }
    else {
      *plVar1 = (longlong)pppppppuStack_68;
      plVar1[1] = lStack_60;
      plVar1[2] = lStack_58;
      plVar1[3] = uStack_50;
      pppppppuStack_68 = (undefined8 *******)((ulonglong)pppppppuStack_68 & 0xffffffffffffff00);
      param_2[1] = param_2[1] + 0x20;
      uVar17 = 0xf;
    }
    if (0xf < uVar17) {
      pppppppuVar9 = pppppppuStack_68;
      if ((0xfff < uVar17 + 1) &&
         (pppppppuVar9 = (undefined8 *******)pppppppuStack_68[-1],
         0x1f < (ulonglong)((longlong)pppppppuStack_68 + (-8 - (longlong)pppppppuVar9)))) {
LAB_180003c91:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pppppppuVar9);
    }
  }
  return param_2;
}



// ============================================================
// INDEX: 88/227
// FUNCTION: FUN_180003d10
// ENTRY: 180003d10
// RVA: 0x3D10
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180003d10(longlong param_1)
// ============================================================

void FUN_180003d10(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  void *pvVar7;
  
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    pvVar4 = *(void **)(param_1 + 0x18);
    pvVar7 = pvVar4;
    if ((0xfff < *(ulonglong *)(param_1 + 0x30) + 1) &&
       (pvVar7 = *(void **)((longlong)pvVar4 + -8),
       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar7);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  plVar5 = *(longlong **)(param_1 + 0x10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
    }
  }
  return;
}



// ============================================================
// INDEX: 89/227
// FUNCTION: FUN_180004170
// ENTRY: 180004170
// RVA: 0x4170
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180004170(undefined4 * param_1, longlong param_2)
// ============================================================

undefined4 * FUN_180004170(undefined4 *param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 (*pauVar2) [32];
  char *pcVar3;
  undefined4 uVar4;
  undefined1 (*pauVar5) [32];
  void *pvVar6;
  undefined1 (*pauVar7) [32];
  size_t sVar8;
  void *apvStack_38 [3];
  ulonglong uStack_20;
  
  FUN_180002a60(apvStack_38,*(ulonglong *)(param_2 + 0x18));
  uVar4 = FUN_1800028d0((char *)apvStack_38);
  *param_1 = uVar4;
  if (0xf < uStack_20) {
    pvVar6 = apvStack_38[0];
    if ((0xfff < uStack_20 + 1) &&
       (pvVar6 = *(void **)((longlong)apvStack_38[0] + -8),
       0x1f < (ulonglong)((longlong)apvStack_38[0] + (-8 - (longlong)pvVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar6);
  }
  pcVar3 = *(char **)(param_2 + 0x40);
  do {
    pcVar1 = pcVar3;
    if (pcVar1 == (char *)**(undefined8 **)(param_2 + 8)) break;
    pcVar3 = pcVar1 + -1;
  } while (pcVar1[-1] != '\n');
  param_1[1] = ((int)*(char **)(param_2 + 0x40) - (int)pcVar1) + 1;
  param_1[2] = 1;
  FUN_180020900((undefined8 *)(param_1 + 4),(undefined8 *)(param_2 + 0x20));
  pauVar5 = thunk_FUN_18006ccc0(*(undefined1 (**) [32])(param_2 + 0x40),
                                *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8),10);
  pauVar2 = *(undefined1 (**) [32])(param_2 + 0x40);
  do {
    pauVar7 = pauVar2;
    if (pauVar7 == (undefined1 (*) [32])**(undefined8 **)(param_2 + 8)) break;
    pauVar2 = (undefined1 (*) [32])(pauVar7[-1] + 0x1f);
  } while ((*(undefined1 (*) [32])(pauVar7[-1] + 0x1f))[0] != '\n');
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  if (pauVar7 == pauVar5) {
    sVar8 = 0;
    pauVar7 = (undefined1 (*) [32])&DAT_1800789f6;
  }
  else {
    sVar8 = (longlong)pauVar5 - (longlong)pauVar7;
  }
  FUN_180027650((undefined8 *)(param_1 + 0xc),pauVar7,sVar8);
  return param_1;
}



// ============================================================
// INDEX: 90/227
// FUNCTION: FUN_1800042c0
// ENTRY: 1800042c0
// RVA: 0x42C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800042c0(longlong * param_1, char * param_2, longlong * param_3, longlong * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800042c0(longlong *param_1,char *param_2,longlong *param_3,longlong *param_4)

{
  ulonglong *puVar1;
  uint *puVar2;
  bool bVar3;
  longlong *plVar4;
  int iVar5;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  size_t sVar8;
  ulonglong uVar9;
  char ****ppppcVar10;
  longlong lVar11;
  undefined8 *_Buf1;
  char ****ppppcVar12;
  ulonglong uVar13;
  char *pcVar14;
  uint *puVar15;
  char *pcVar16;
  void *pvVar17;
  char *pcVar18;
  uint uVar19;
  longlong lVar20;
  size_t sVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  undefined1 auStack_1b8 [32];
  char ***pppcStack_198;
  undefined8 uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  uint uStack_178;
  ulonglong uStack_170;
  longlong *plStack_168;
  longlong *plStack_160;
  longlong *plStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined **ppuStack_140;
  basic_ostream<char,std::char_traits<char>_> abStack_138 [16];
  longlong *plStack_128;
  longlong *plStack_120;
  longlong *plStack_108;
  ulonglong *puStack_100;
  int *piStack_f0;
  ulonglong uStack_d8;
  uint uStack_d0;
  basic_ios<char,std::char_traits<char>_> abStack_c0 [104];
  ulonglong uStack_58;
  
  uStack_58 = DAT_18008d040 ^ (ulonglong)auStack_1b8;
  uStack_178 = 0;
  uVar22 = 0;
  for (puVar15 = (uint *)*param_3; puVar15 != (uint *)param_3[1]; puVar15 = puVar15 + 0x1c) {
    uVar19 = *puVar15;
    uVar13 = (ulonglong)uVar19;
    uVar9 = 0;
    while (uVar19 != 0) {
      uVar13 = uVar13 / 10;
      uVar9 = uVar9 + 1;
      uVar19 = (uint)uVar13;
    }
    if (uVar22 < uVar9) {
      uVar22 = uVar9;
    }
  }
  if (uVar22 == 0) {
    uVar22 = 1;
  }
  plStack_168 = param_3;
  plStack_160 = param_4;
  plStack_158 = param_1;
  uStack_150 = param_1;
  memset(&puStack_148,0,0xe8);
  puStack_148 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_c0);
  uVar19 = 0x40;
  uStack_178 = 0x40;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_140,false);
  *(undefined ***)((longlong)&puStack_148 + (longlong)*(int *)(puStack_148 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&uStack_150 + (longlong)*(int *)(puStack_148 + 4) + 4) =
       *(int *)(puStack_148 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_140);
  ppuStack_140 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_d8 = 0;
  uStack_d0 = 4;
  if (DAT_18008e238 != '\0') {
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002b20);
  }
  ppppcVar12 = (char ****)pppcStack_198;
  uVar13 = uStack_180;
  if (7 < *(ulonglong *)(param_2 + 0x10)) {
    pppcStack_198 = (char ***)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    pcVar14 = param_2;
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      pcVar14 = *(char **)param_2;
    }
    FUN_180027650(&pppcStack_198,pcVar14,7);
    uVar13 = uStack_180;
    ppppcVar12 = (char ****)pppcStack_198;
    uVar19 = 0x241;
    ppppcVar10 = &pppcStack_198;
    if (0xf < uStack_180) {
      ppppcVar10 = (char ****)pppcStack_198;
    }
    if ((uStack_188 == 7) && (iVar5 = memcmp(ppppcVar10,"[error]",7), iVar5 == 0)) {
      bVar3 = true;
      goto LAB_180004497;
    }
  }
  bVar3 = false;
LAB_180004497:
  if (((uVar19 & 1) != 0) && (uVar19 = uVar19 & 0xfffffffe, 0xf < uVar13)) {
    ppppcVar10 = ppppcVar12;
    if ((0xfff < uVar13 + 1) &&
       (ppppcVar10 = (char ****)ppppcVar12[-1],
       (char *)0x1f < (char *)((longlong)ppppcVar12 + (-8 - (longlong)ppppcVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar10);
  }
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002c50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002cf0);
  if (bVar3) {
    pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6,"[error]");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002c50);
    pppcStack_198 = (char ***)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    if (*(ulonglong *)(param_2 + 0x10) < 7) {
                    /* WARNING: Subroutine does not return */
      FUN_180020a20();
    }
    sVar8 = *(ulonglong *)(param_2 + 0x10) - 7;
    sVar21 = 0xffffffffffffffff;
    if (sVar8 != 0xffffffffffffffff) {
      sVar21 = sVar8;
    }
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    FUN_180027650(&pppcStack_198,param_2 + 7,sVar21);
    uVar19 = uVar19 | 0x100;
    ppppcVar12 = &pppcStack_198;
    if (0xf < uStack_180) {
      ppppcVar12 = (char ****)pppcStack_198;
    }
    pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar6,(char *)ppppcVar12,
                           uStack_188);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
    FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar6,'\n');
    if (0xf < uStack_180) {
      ppppcVar12 = (char ****)pppcStack_198;
      if ((0xfff < uStack_180 + 1) &&
         (ppppcVar12 = (char ****)pppcStack_198[-1],
         (char *)0x1f < (char *)((longlong)pppcStack_198 + (-8 - (longlong)ppppcVar12)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppcVar12);
    }
  }
  else {
    pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6,"[error] ");
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002c50);
    puVar1 = (ulonglong *)(param_2 + 0x10);
    if (0xf < *(ulonglong *)(param_2 + 0x18)) {
      param_2 = *(char **)param_2;
    }
    pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar6,param_2,*puVar1);
    pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
    FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar6,'\n');
  }
  uStack_170 = uVar22;
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002c50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
  pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," --> ");
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
  plVar4 = plStack_168;
  lVar20 = *plStack_168;
  pcVar14 = (char *)(lVar20 + 0x10);
  if (0xf < *(ulonglong *)(lVar20 + 0x28)) {
    pcVar14 = *(char **)pcVar14;
  }
  pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar6,pcVar14,
                         *(ulonglong *)(lVar20 + 0x20));
  FUN_180026bf0(pbVar7,'\n');
  uVar13 = uVar22 + 1;
  uVar19 = uVar19 | 0x80;
  if (uVar13 == 0) {
    pppcStack_198 = (char ***)0x0;
    uStack_190 = 0;
    uStack_188 = 0;
    uStack_180 = 0;
    FUN_180027650(&pppcStack_198,&DAT_1800789f6,0);
  }
  else {
    FUN_1800207b0(&pppcStack_198,uVar13,' ');
  }
  ppppcVar12 = &pppcStack_198;
  if (0xf < uStack_180) {
    ppppcVar12 = (char ****)pppcStack_198;
  }
  pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,
                         (char *)ppppcVar12,uStack_188);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002c50);
  pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
  pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," |\n");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
  if (0xf < uStack_180) {
    ppppcVar12 = (char ****)pppcStack_198;
    if ((0xfff < uStack_180 + 1) &&
       (ppppcVar12 = (char ****)pppcStack_198[-1],
       (char *)0x1f < (char *)((longlong)pppcStack_198 + (-8 - (longlong)ppppcVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar12);
  }
  FUN_180004cc0((longlong *)&uStack_170,(basic_ostream<char,std::char_traits<char>_> *)&puStack_148,
                (uint *)*plVar4,(char *)((uint *)*plVar4 + 0x14));
  lVar20 = *plVar4;
  uVar9 = (plVar4[1] - lVar20) / 0x70;
  if (uVar9 < 2) {
LAB_180004a4f:
    plVar4 = plStack_160;
    if (*plStack_160 != plStack_160[1]) {
      FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,'\n');
      uVar19 = uVar19 | 0x20;
      if (uVar22 + 1 == 0) {
        pppcStack_198 = (char ***)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        FUN_180027650(&pppcStack_198,&DAT_1800789f6,0);
      }
      else {
        FUN_1800207b0(&pppcStack_198,uVar22 + 1,' ');
      }
      ppppcVar12 = &pppcStack_198;
      if (0xf < uStack_180) {
        ppppcVar12 = (char ****)pppcStack_198;
      }
      FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,(char *)ppppcVar12,
                    uStack_188);
      if (0xf < uStack_180) {
        ppppcVar12 = (char ****)pppcStack_198;
        if ((0xfff < uStack_180 + 1) &&
           (ppppcVar12 = (char ****)pppcStack_198[-1],
           (char *)0x1f < (char *)((longlong)pppcStack_198 + (-8 - (longlong)ppppcVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(ppppcVar12);
      }
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002c50)
      ;
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
      pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," |");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
      pcVar14 = (char *)plVar4[1];
      for (pcVar18 = (char *)*plVar4; pcVar18 != pcVar14; pcVar18 = pcVar18 + 0x20) {
        pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                           ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,
                            FUN_180002c50);
        pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6,"\nHint: ");
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
        pcVar16 = pcVar18;
        if (0xf < *(ulonglong *)(pcVar18 + 0x18)) {
          pcVar16 = *(char **)pcVar18;
        }
        FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,pcVar16,
                      *(ulonglong *)(pcVar18 + 0x10));
      }
    }
    plVar4 = plStack_158;
    *plStack_158 = 0;
    plStack_158[1] = 0;
    plStack_158[2] = 0;
    plStack_158[3] = 0xf;
    *(undefined1 *)plStack_158 = 0;
    uStack_178 = uVar19 | 8;
    pppcStack_198 = (char ***)0x0;
    uStack_190 = 0;
    if ((((byte)uStack_d0 & 0x22) == 2) || (uVar22 = *puStack_100, uVar22 == 0)) {
      if (((uStack_d0 & 4) == 0) && (*plStack_108 != 0)) {
        pvVar17 = (void *)*plStack_128;
        sVar21 = ((longlong)*piStack_f0 - (longlong)pvVar17) + *plStack_108;
      }
      else {
        sVar21 = 0;
        pvVar17 = (void *)0x0;
      }
    }
    else {
      pvVar17 = (void *)*plStack_120;
      if (uVar22 < uStack_d8) {
        uVar22 = uStack_d8;
      }
      sVar21 = uVar22 - (longlong)pvVar17;
    }
    if (pvVar17 != (void *)0x0) {
      FUN_180022f50(plStack_158,pvVar17,sVar21);
    }
    *(undefined ***)((longlong)&puStack_148 + (longlong)*(int *)(puStack_148 + 4)) =
         std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((longlong)&uStack_150 + (longlong)*(int *)(puStack_148 + 4) + 4) =
         *(int *)(puStack_148 + 4) + -0x88;
    FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_140);
    std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
              (abStack_138);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              (abStack_c0);
    return plVar4;
  }
  lVar11 = 0;
  uVar23 = 1;
  lVar24 = 0x70;
  do {
    lVar11 = lVar20 + lVar11;
    if (uVar9 <= uVar23) break;
    puVar2 = (uint *)(lVar20 + lVar24);
    FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,'\n');
    puVar15 = puVar2 + 4;
    _Buf1 = (undefined8 *)(lVar11 + 0x10);
    if (0xf < *(ulonglong *)(puVar2 + 10)) {
      puVar15 = *(uint **)puVar15;
    }
    sVar21 = *(size_t *)(lVar11 + 0x20);
    if (0xf < *(ulonglong *)(lVar11 + 0x28)) {
      _Buf1 = (undefined8 *)*_Buf1;
    }
    if ((sVar21 == *(size_t *)(puVar2 + 8)) &&
       ((sVar21 == 0 || (iVar5 = memcmp(_Buf1,puVar15,sVar21), iVar5 == 0)))) {
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002c50)
      ;
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
      pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," ...\n");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
    }
    else {
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,FUN_180002c50)
      ;
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
      pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," --> ");
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
      puVar15 = puVar2 + 4;
      if (0xf < *(ulonglong *)(puVar2 + 10)) {
        puVar15 = *(uint **)puVar15;
      }
      pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar6,(char *)puVar15,
                             *(ulonglong *)(puVar2 + 8));
      FUN_180026bf0(pbVar7,'\n');
      uVar19 = uVar19 | 0x10;
      if (uVar13 == 0) {
        pppcStack_198 = (char ***)0x0;
        uStack_190 = 0;
        uStack_188 = 0;
        uStack_180 = 0;
        FUN_180027650(&pppcStack_198,&DAT_1800789f6,0);
      }
      else {
        FUN_1800207b0(&pppcStack_198,uVar13,' ');
      }
      ppppcVar12 = &pppcStack_198;
      if (0xf < uStack_180) {
        ppppcVar12 = (char ****)pppcStack_198;
      }
      pbVar7 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&puStack_148,
                             (char *)ppppcVar12,uStack_188);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002c50);
      pbVar6 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                         ((basic_ostream<char,std::char_traits<char>_> *)pbVar6,FUN_180002d90);
      pbVar7 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar6," |\n");
      std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar7,FUN_180002bb0);
      if (0xf < uStack_180) {
        ppppcVar12 = (char ****)pppcStack_198;
        if ((0xfff < uStack_180 + 1) &&
           (ppppcVar12 = (char ****)pppcStack_198[-1],
           (char *)0x1f < (char *)((longlong)pppcStack_198 + (-8 - (longlong)ppppcVar12)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(ppppcVar12);
      }
    }
    FUN_180004cc0((longlong *)&uStack_170,
                  (basic_ostream<char,std::char_traits<char>_> *)&puStack_148,puVar2,
                  (char *)(puVar2 + 0x14));
    lVar20 = *plStack_168;
    uVar9 = (plStack_168[1] - lVar20) / 0x70;
    if (uVar9 <= uVar23 + 1) goto LAB_180004a4f;
    bVar3 = uVar23 < uVar9;
    lVar11 = lVar24;
    uVar23 = uVar23 + 1;
    lVar24 = lVar24 + 0x70;
  } while (bVar3);
                    /* WARNING: Subroutine does not return */
  FUN_180022b00();
}



// ============================================================
// INDEX: 91/227
// FUNCTION: FUN_180004cc0
// ENTRY: 180004cc0
// RVA: 0x4CC0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180004cc0(longlong * param_1, basic_ostream<char,std::char_traits<char>_> * param_2, uint * param_3, char * param_4)
// ============================================================

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180004cc0(longlong *param_1,basic_ostream<char,std::char_traits<char>_> *param_2,
                  uint *param_3,char *param_4)

{
  ulonglong *puVar1;
  uint uVar2;
  basic_ostream<char,std::char_traits<char>_> *pbVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  undefined8 *puVar5;
  char ****ppppcVar6;
  uint *puVar7;
  ulonglong uVar8;
  char ***pppcStack_88;
  undefined8 uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  char ***pppcStack_68;
  undefined8 uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  
  pbVar3 = FUN_180026bf0(param_2,' ');
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002c50);
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,FUN_180002d90);
  puVar5 = (undefined8 *)std::setw((__int64)&pppcStack_68);
  (*(code *)*puVar5)(pbVar4 + *(int *)(*(longlong *)pbVar4 + 4),puVar5[1]);
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,
                      (_func_ios_base_ptr_ios_base_ptr *)&LAB_1800028b0);
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,*param_3);
  pbVar3 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar4," | ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002bb0);
  puVar7 = param_3 + 0xc;
  if (0xf < *(ulonglong *)(param_3 + 0x12)) {
    puVar7 = *(uint **)puVar7;
  }
  pbVar3 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar4,(char *)puVar7,
                         *(ulonglong *)(param_3 + 0x10));
  FUN_180026bf0(pbVar3,'\n');
  if (*param_1 + 1U == 0) {
    pppcStack_88 = (char ***)0x0;
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    FUN_180027650(&pppcStack_88,&DAT_1800789f6,0);
  }
  else {
    FUN_1800207b0(&pppcStack_88,*param_1 + 1U,' ');
  }
  ppppcVar6 = &pppcStack_88;
  if (0xf < uStack_70) {
    ppppcVar6 = (char ****)pppcStack_88;
  }
  pbVar3 = FUN_180034840(param_2,(char *)ppppcVar6,uStack_78);
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002c50);
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,FUN_180002d90);
  pbVar3 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar4," | ");
  pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002bb0);
  if (param_3[1] - 1 == 0) {
    pppcStack_68 = (char ***)0x0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    FUN_180027650(&pppcStack_68,&DAT_1800789f6,0);
  }
  else {
    FUN_1800207b0(&pppcStack_68,(ulonglong)(param_3[1] - 1),' ');
  }
  ppppcVar6 = &pppcStack_68;
  if (0xf < uStack_50) {
    ppppcVar6 = (char ****)pppcStack_68;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar4,(char *)ppppcVar6,uStack_58);
  if (0xf < uStack_50) {
    ppppcVar6 = (char ****)pppcStack_68;
    if ((0xfff < uStack_50 + 1) &&
       (ppppcVar6 = (char ****)pppcStack_68[-1],
       (char *)0x1f < (char *)((longlong)pppcStack_68 + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar6);
  }
  uStack_58 = _DAT_18007c620;
  uStack_50 = _UNK_18007c628;
  pppcStack_68 = (char ***)((ulonglong)pppcStack_68 & 0xffffffffffffff00);
  if (0xf < uStack_70) {
    ppppcVar6 = (char ****)pppcStack_88;
    if ((0xfff < uStack_70 + 1) &&
       (ppppcVar6 = (char ****)pppcStack_88[-1],
       (char *)0x1f < (char *)((longlong)pppcStack_88 + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar6);
  }
  uVar2 = param_3[2];
  if (uVar2 == 1) {
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,FUN_180002c50);
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,FUN_180002cf0);
    pbVar3 = FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)pbVar4,"^---");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002bb0);
  }
  else {
    uVar8 = (ulonglong)uVar2;
    if (*(ulonglong *)(param_3 + 0x10) < (ulonglong)uVar2) {
      uVar8 = *(ulonglong *)(param_3 + 0x10);
    }
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_2,FUN_180002c50);
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar4,FUN_180002cf0);
    if (uVar8 == 0) {
      pppcStack_88 = (char ***)0x0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      FUN_180027650(&pppcStack_88,&DAT_1800789f6,0);
    }
    else {
      FUN_1800207b0(&pppcStack_88,uVar8,'~');
    }
    ppppcVar6 = &pppcStack_88;
    if (0xf < uStack_70) {
      ppppcVar6 = (char ****)pppcStack_88;
    }
    pbVar3 = FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)pbVar4,(char *)ppppcVar6,
                           uStack_78);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar3,FUN_180002bb0);
    if (0xf < uStack_70) {
      ppppcVar6 = (char ****)pppcStack_88;
      if ((0xfff < uStack_70 + 1) &&
         (ppppcVar6 = (char ****)pppcStack_88[-1],
         (char *)0x1f < (char *)((longlong)pppcStack_88 + (-8 - (longlong)ppppcVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppcVar6);
    }
  }
  FUN_180026bf0(param_2,' ');
  puVar1 = (ulonglong *)(param_4 + 0x10);
  if (0xf < *(ulonglong *)(param_4 + 0x18)) {
    param_4 = *(char **)param_4;
  }
  FUN_180034840(param_2,param_4,*puVar1);
  return;
}



// ============================================================
// INDEX: 92/227
// FUNCTION: FUN_1800051f0
// ENTRY: 1800051f0
// RVA: 0x51F0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_1800051f0(undefined8 * param_1, undefined8 * param_2, undefined4 * param_3)
// ============================================================

undefined8 * FUN_1800051f0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = toml::exception::vftable;
  *(undefined4 *)(param_1 + 3) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x1c) = param_3[1];
  *(undefined4 *)(param_1 + 4) = param_3[2];
  FUN_180020900(param_1 + 5,(undefined8 *)(param_3 + 4));
  FUN_180020900(param_1 + 9,(undefined8 *)(param_3 + 0xc));
  *param_1 = toml::syntax_error::vftable;
  FUN_180020900(param_1 + 0xd,param_2);
  return param_1;
}



// ============================================================
// INDEX: 93/227
// FUNCTION: FUN_1800054f0
// ENTRY: 1800054f0
// RVA: 0x54F0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: uint * FUN_1800054f0(uint * param_1, uint * param_2)
// ============================================================

uint * FUN_1800054f0(uint *param_1,uint *param_2)

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
    goto LAB_1800055b9;
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
LAB_1800055b9:
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
// INDEX: 94/227
// FUNCTION: FUN_180005600
// ENTRY: 180005600
// RVA: 0x5600
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180005600(undefined8 * param_1, longlong * param_2)
// ============================================================

longlong * FUN_180005600(undefined8 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  undefined8 *puStack_18;
  undefined8 uStack_10;
  
  puStack_18 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puStack_18 = (undefined8 *)*param_1;
  }
  uStack_10 = param_1[2];
  uVar1 = FUN_18006cde8();
  FUN_1800443c0(param_2,(UINT)uVar1,&puStack_18);
  return param_2;
}



// ============================================================
// INDEX: 95/227
// FUNCTION: FUN_180005650
// ENTRY: 180005650
// RVA: 0x5650
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180005650(longlong * param_1, longlong * param_2, undefined8 param_3)
// ============================================================

longlong * FUN_180005650(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = param_2[2];
    if (7 < (ulonglong)param_2[3]) {
      param_2 = (longlong *)*param_2;
    }
    if (uVar1 <= (ulonglong)param_1[3]) {
      _Dst = param_1;
      if (7 < (ulonglong)param_1[3]) {
        _Dst = (longlong *)*param_1;
      }
      param_1[2] = uVar1;
      memmove(_Dst,param_2,uVar1 * 2);
      *(undefined2 *)(uVar1 * 2 + (longlong)_Dst) = 0;
      return param_1;
    }
    FUN_18002caf0(param_1,uVar1,param_3,param_2);
  }
  return param_1;
}



// ============================================================
// INDEX: 96/227
// FUNCTION: FUN_180005f10
// ENTRY: 180005f10
// RVA: 0x5F10
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180005f10(void * param_1, undefined8 * param_2, undefined8 * param_3)
// ============================================================

void FUN_180005f10(void *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 auStack_b8 [4];
  undefined8 **appuStack_98 [18];
  
  uStack_c8 = *param_2;
  uStack_c0 = param_2[1];
  FUN_1800208c0(auStack_b8,param_1);
  FUN_180005870(appuStack_98,auStack_b8,param_3,&uStack_c8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(appuStack_98,(ThrowInfo *)&DAT_180088e28);
}



// ============================================================
// INDEX: 97/227
// FUNCTION: FUN_180005f70
// ENTRY: 180005f70
// RVA: 0x5F70
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180005f70(longlong * param_1, longlong * param_2)
// ============================================================

longlong * FUN_180005f70(longlong *param_1,longlong *param_2)

{
  void *pvVar1;
  longlong lVar2;
  void *pvVar3;
  
  if (param_1 != param_2) {
    if (7 < (ulonglong)param_1[3]) {
      pvVar1 = (void *)*param_1;
      pvVar3 = pvVar1;
      if ((0xfff < param_1[3] * 2 + 2U) &&
         (pvVar3 = *(void **)((longlong)pvVar1 + -8),
         0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar3);
    }
    param_1[3] = 7;
    param_1[2] = 0;
    *(undefined2 *)param_1 = 0;
    lVar2 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar2;
    lVar2 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar2;
    param_2[2] = 0;
    param_2[3] = 7;
    *(undefined2 *)param_2 = 0;
  }
  return param_1;
}



// ============================================================
// INDEX: 98/227
// FUNCTION: FUN_180006010
// ENTRY: 180006010
// RVA: 0x6010
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 FUN_180006010(LPCWSTR param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_180006010(LPCWSTR param_1)

{
  DWORD DVar1;
  LPCWSTR pWVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  DWORD DStack_48;
  undefined4 uStack_44;
  undefined **ppuStack_40;
  ulonglong auStack_38 [2];
  uint uStack_28;
  int iStack_24;
  ulonglong uStack_18;
  
  uStack_18 = DAT_18008d040 ^ (ulonglong)auStack_68;
  pWVar2 = param_1;
  if (7 < *(ulonglong *)(param_1 + 0xc)) {
    pWVar2 = *(LPCWSTR *)param_1;
  }
  DVar1 = FUN_18006d0c0(pWVar2,auStack_38,3,0xffffffff);
  if (DVar1 != 0) {
    uStack_44 = 0xffff;
    if ((((DVar1 == 2) || (DVar1 == 3)) || (DVar1 == 0x35)) || ((DVar1 == 0x7b || (DVar1 == 0x10b)))
       ) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    goto LAB_1800060c8;
  }
  uStack_44 = 0x1ff;
  if ((uStack_28 & 1) != 0) {
    uStack_44 = 0x16d;
  }
  if ((uStack_28 >> 10 & 1) != 0) {
    if (iStack_24 == -0x5ffffff4) {
      uVar3 = 4;
      goto LAB_1800060c8;
    }
    if (iStack_24 == -0x5ffffffd) {
      uVar3 = 10;
      goto LAB_1800060c8;
    }
  }
  uVar3 = uStack_28 >> 4 & 1 | 2;
LAB_1800060c8:
  _DStack_48 = CONCAT44(uStack_44,DVar1);
  ppuStack_40 = &PTR_vftable_18008d0d8;
  if (uVar3 == 0) {
    bVar4 = false;
    if (DVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180005f10("exists",(undefined8 *)&DStack_48,(undefined8 *)param_1);
    }
  }
  else {
    bVar4 = uVar3 != 1;
  }
  return CONCAT71(0x18008d0,bVar4);
}



// ============================================================
// INDEX: 99/227
// FUNCTION: FUN_180006120
// ENTRY: 180006120
// RVA: 0x6120
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180006120(uint * param_1, undefined8 * param_2, size_t param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_180006120(uint *param_1,undefined8 *param_2,size_t param_3)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  LPCWSTR ***ppppWVar6;
  ulonglong uVar7;
  uint *_Src;
  ulonglong uVar8;
  undefined1 auStackY_b8 [32];
  int iStack_88;
  undefined8 uStack_80;
  undefined4 uStack_6c;
  LPCWSTR **pppWStack_60;
  undefined8 uStack_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_18008d040 ^ (ulonglong)auStackY_b8;
  if (*(longlong *)(param_1 + 4) == 0) {
    uStack_80 = CONCAT44((int)((ulonglong)param_2 >> 0x20),3);
    *param_2 = uStack_80;
    param_2[1] = &PTR_vftable_18008d0d8;
    puVar3 = &DAT_18008d000;
  }
  else {
    *(undefined4 *)param_2 = 0;
    param_2[1] = &PTR_vftable_18008d0d8;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 7;
    pppWStack_60 = (LPCWSTR **)0x0;
    uVar7 = *(ulonglong *)(param_1 + 4);
    if (7 < uVar7) {
      FUN_18002c980(&pppWStack_60,uVar7);
      uVar7 = *(ulonglong *)(param_1 + 4);
    }
    uVar8 = uStack_48;
    uStack_50 = 0;
    if (7 < *(ulonglong *)(param_1 + 6)) {
      param_1 = *(uint **)param_1;
    }
    puVar1 = (uint *)((longlong)param_1 + uVar7 * 2);
    for (puVar4 = FUN_1800054f0(param_1,puVar1);
        (puVar4 != puVar1 && (((short)*puVar4 == 0x5c || ((short)*puVar4 == 0x2f))));
        puVar4 = (uint *)((longlong)puVar4 + 2)) {
    }
    if ((((puVar4 != param_1) &&
         (5 < (longlong)((longlong)puVar1 - (longlong)puVar4 & 0xfffffffffffffffeU))) &&
        ((*puVar4 & 0xffffffdf) - 0x3a0041 < 0x1a)) &&
       (((short)puVar4[1] == 0x5c || ((short)puVar4[1] == 0x2f)))) {
      puVar4 = puVar4 + 1;
    }
    uVar7 = (longlong)puVar4 - (longlong)param_1 >> 1;
    if (uVar8 < uVar7) {
      FUN_18002cc50(&pppWStack_60,uVar7,param_3,param_1,uVar7);
    }
    else {
      ppppWVar6 = &pppWStack_60;
      if (7 < uVar8) {
        ppppWVar6 = (LPCWSTR ***)pppWStack_60;
      }
      param_3 = uVar7 * 2;
      uStack_50 = uVar7;
      memmove(ppppWVar6,param_1,param_3);
      *(WCHAR *)((longlong)ppppWVar6 + uVar7 * 2) = L'\0';
    }
    uVar7 = 0;
    iStack_88 = 0;
    iVar5 = 0;
    _Src = puVar4;
    if (puVar4 != puVar1) {
LAB_180006293:
      do {
        uVar7 = uStack_50;
        if (((short)*puVar4 == 0x5c) || ((short)*puVar4 == 0x2f)) {
          puVar4 = (uint *)((longlong)puVar4 + 2);
          if (puVar4 != puVar1) goto LAB_180006293;
        }
        for (; ((puVar4 != puVar1 && ((short)*puVar4 != 0x5c)) && ((short)*puVar4 != 0x2f));
            puVar4 = (uint *)((longlong)puVar4 + 2)) {
        }
        uVar8 = (longlong)puVar4 - (longlong)_Src >> 1;
        if (uStack_48 - uStack_50 < uVar8) {
          FUN_18002cc50(&pppWStack_60,uVar8,param_3,_Src,uVar8);
        }
        else {
          ppppWVar6 = &pppWStack_60;
          if (7 < uStack_48) {
            ppppWVar6 = (LPCWSTR ***)pppWStack_60;
          }
          lVar2 = uStack_50 * 2;
          param_3 = uVar8 * 2;
          uStack_50 = uVar8 + uStack_50;
          memmove((LPCWSTR)((longlong)ppppWVar6 + lVar2),_Src,param_3);
          *(WCHAR *)((longlong)ppppWVar6 + (uVar7 + uVar8) * 2) = L'\0';
        }
        ppppWVar6 = &pppWStack_60;
        if (7 < uStack_48) {
          ppppWVar6 = (LPCWSTR ***)pppWStack_60;
        }
        uVar7 = __std_fs_create_directory((LPCWSTR)ppppWVar6);
        iVar5 = (int)(uVar7 >> 0x20);
        if ((((iVar5 != 0) && (iVar5 != 2)) &&
            ((iVar5 != 3 && ((iVar5 != 0x35 && (iVar5 != 0x7b)))))) && (iVar5 != 0x10b)) {
          iStack_88 = iVar5;
        }
        _Src = puVar4;
      } while (puVar4 != puVar1);
      if ((iVar5 != 0) && (iStack_88 != 0)) {
        iVar5 = iStack_88;
      }
    }
    *param_2 = CONCAT44(uStack_6c,iVar5);
    param_2[1] = &PTR_vftable_18008d0d8;
    if (7 < uStack_48) {
      ppppWVar6 = (LPCWSTR ***)pppWStack_60;
      if ((0xfff < uStack_48 * 2 + 2) &&
         (ppppWVar6 = (LPCWSTR ***)pppWStack_60[-1],
         0x1f < (ulonglong)((longlong)pppWStack_60 + (-8 - (longlong)ppppWVar6)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(ppppWVar6);
    }
    puVar3 = (undefined4 *)(uVar7 & 0xff);
  }
  return puVar3;
}



// ============================================================
// INDEX: 100/227
// FUNCTION: FUN_180006cd0
// ENTRY: 180006cd0
// RVA: 0x6CD0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_180006cd0(undefined8 * param_1, longlong param_2)
// ============================================================

undefined8 * FUN_180006cd0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  
  *param_1 = toml::detail::region::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*(longlong *)(param_2 + 0x10) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  param_1[1] = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  FUN_180020900(param_1 + 3,(undefined8 *)(param_2 + 0x18));
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  return param_1;
}



// ============================================================
// INDEX: 101/227
// FUNCTION: FUN_18000b7d0
// ENTRY: 18000b7d0
// RVA: 0xB7D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * * FUN_18000b7d0(longlong * * param_1, longlong param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong ** FUN_18000b7d0(longlong **param_1,longlong param_2)

{
  undefined1 (*pauVar1) [32];
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  byte *pbVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined4 *puVar13;
  longlong *plVar14;
  undefined1 (*pauVar15) [32];
  void *pvVar16;
  undefined *puVar17;
  longlong **pplVar18;
  undefined1 auStack_328 [48];
  longlong *plStack_2f8;
  longlong *plStack_2f0;
  longlong *plStack_2e8;
  longlong *plStack_2e0;
  longlong **pplStack_2d8;
  longlong **pplStack_2d0;
  longlong *plStack_2c8;
  longlong *plStack_2c0;
  longlong *plStack_2b8;
  longlong *plStack_2b0;
  longlong *plStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  ulonglong uStack_290;
  longlong alStack_288 [3];
  longlong **pplStack_270;
  longlong *plStack_268;
  longlong *plStack_260;
  undefined8 uStack_258;
  void *pvStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  ulonglong uStack_238;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  longlong *plStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong *aplStack_198 [2];
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined8 uStack_178;
  ulonglong uStack_170;
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined8 uStack_158;
  ulonglong uStack_150;
  undefined8 uStack_148;
  undefined4 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  longlong **pplStack_c8;
  char acStack_b8 [16];
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined8 uStack_98;
  ulonglong uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 uStack_78;
  ulonglong uStack_70;
  void *apvStack_68 [3];
  ulonglong uStack_50;
  ulonglong uStack_48;
  
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStack_328;
  pauVar1 = *(undefined1 (**) [32])(param_2 + 0x40);
  pplStack_2d8 = param_1;
  if ((pauVar1 != *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) &&
     ((*pauVar1)[0] == '\\')) {
    lVar8 = thunk_FUN_18006cb20(pauVar1,(undefined1 (*) [32])(*pauVar1 + 1),10);
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
    lVar8 = *(longlong *)(param_2 + 0x40);
    pauVar15 = (undefined1 (*) [32])(lVar8 + 1);
    *(undefined1 (**) [32])(param_2 + 0x40) = pauVar15;
    switch((*pauVar15)[0]) {
    case 0x22:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f4c;
      break;
    default:
      plStack_1b8 = (longlong *)0x0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      FUN_180027650(&plStack_1b8,
                    "if you want to write backslash as just one backslash, use literal string like: regex    = \'<\\i\\c*\\s*>\'"
                    ,0x66);
      plStack_268 = (longlong *)0x0;
      plStack_260 = (longlong *)0x0;
      uStack_258 = 0;
      FUN_180024470((ulonglong *)&plStack_268,1);
      pplStack_2d8 = &plStack_268;
      pplVar18 = &plStack_1b8;
      plStack_d8 = plStack_268;
      pplStack_c8 = &plStack_268;
      plVar12 = plStack_268;
      do {
        plStack_d0 = plVar12;
        FUN_180020900(plVar12,pplVar18);
        plVar12 = plVar12 + 4;
        pplVar18 = pplVar18 + 4;
      } while (pplVar18 != aplStack_198);
      plStack_d0 = plVar12;
      FUN_18002c740(plVar12,plVar12);
      plStack_260 = plVar12;
      puVar13 = FUN_180004170((undefined4 *)aplStack_198,param_2);
      uStack_148._0_4_ = *puVar13;
      uStack_148._4_4_ = puVar13[1];
      uStack_140 = puVar13[2];
      uStack_138 = *(undefined8 *)(puVar13 + 4);
      uStack_130 = *(undefined8 *)(puVar13 + 6);
      uStack_128 = *(undefined8 *)(puVar13 + 8);
      uStack_120 = *(undefined8 *)(puVar13 + 10);
      *(undefined8 *)(puVar13 + 10) = 0xf;
      *(undefined8 *)(puVar13 + 8) = 0;
      *(undefined1 *)(puVar13 + 4) = 0;
      uStack_118 = *(undefined8 *)(puVar13 + 0xc);
      uStack_110 = *(undefined8 *)(puVar13 + 0xe);
      uStack_108 = *(undefined8 *)(puVar13 + 0x10);
      uStack_100 = *(undefined8 *)(puVar13 + 0x12);
      *(undefined8 *)(puVar13 + 0x10) = 0;
      *(undefined8 *)(puVar13 + 0x12) = 0xf;
      *(undefined1 *)(puVar13 + 0xc) = 0;
      uStack_f8 = 0;
      uStack_f0 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      FUN_180027650(&uStack_f8,"escape sequence is one of \\, \", b, t, n, f, r, uxxxx, Uxxxxxxxx",
                    0x3f);
      pplStack_2d8 = (longlong **)&uStack_148;
      pplStack_270 = &plStack_d8;
      alStack_288[0] = 0;
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      FUN_18002c400(alStack_288,1,&pplStack_2d8,&pplStack_270);
      pvStack_250 = (void *)0x0;
      uStack_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      FUN_180027650(&pvStack_250,"parse_escape_sequence: unknown escape sequence appeared.",0x38);
      FUN_1800042c0((longlong *)apvStack_68,(char *)&pvStack_250,alStack_288,
                    (longlong *)&plStack_268);
      if (0xf < uStack_238) {
        pvVar16 = pvStack_250;
        if ((0xfff < uStack_238 + 1) &&
           (pvVar16 = *(void **)((longlong)pvStack_250 + -8),
           0x1f < (ulonglong)((longlong)pvStack_250 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar16);
      }
      uVar7 = _UNK_18007c628;
      uVar6 = _DAT_18007c620;
      uStack_240 = _DAT_18007c620;
      uStack_238 = _UNK_18007c628;
      pvStack_250 = (void *)((ulonglong)pvStack_250 & 0xffffffffffffff00);
      FUN_180022b20(alStack_288);
      _eh_vector_destructor_iterator_(&uStack_148,0x70,1,FUN_180006d60);
      if (0xf < uStack_150) {
        pvVar5 = (void *)CONCAT71(uStack_167,uStack_168);
        pvVar16 = pvVar5;
        if ((0xfff < uStack_150 + 1) &&
           (pvVar16 = *(void **)((longlong)pvVar5 + -8),
           0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar16)))) goto LAB_18000bf9f;
        FUN_18006d9d4(pvVar16);
      }
      uStack_158 = uVar6;
      uStack_150 = uVar7;
      uStack_168 = 0;
      if (0xf < uStack_170) {
        pvVar5 = (void *)CONCAT71(uStack_187,uStack_188);
        pvVar16 = pvVar5;
        if ((0xfff < uStack_170 + 1) &&
           (pvVar16 = *(void **)((longlong)pvVar5 + -8),
           0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar16)))) {
LAB_18000bf9f:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar16);
      }
      uStack_178 = uVar6;
      uStack_170 = uVar7;
      uStack_188 = 0;
      FUN_180022bf0((longlong *)&plStack_268);
      _eh_vector_destructor_iterator_(&plStack_1b8,0x20,1,FUN_180001b70);
      pauVar15 = *(undefined1 (**) [32])(param_2 + 0x40);
      if ((longlong)pauVar15 - (longlong)pauVar1 < 0) {
        lVar8 = thunk_FUN_18006cb20(pauVar15,pauVar1,10);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
      }
      else {
        lVar8 = thunk_FUN_18006cb20(pauVar1,pauVar15,10);
        *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar8;
      }
      *(undefined1 (**) [32])(param_2 + 0x40) = pauVar1;
      FUN_180020900(&plStack_2c8,apvStack_68);
      *(undefined1 *)param_1 = 0;
      param_1[1] = plStack_2c8;
      param_1[2] = plStack_2c0;
      param_1[3] = plStack_2b8;
      param_1[4] = plStack_2b0;
      if (uStack_50 < 0x10) {
        return param_1;
      }
      pvVar16 = apvStack_68[0];
      if ((0xfff < uStack_50 + 1) &&
         (pvVar16 = *(void **)((longlong)apvStack_68[0] + -8),
         0x1f < (ulonglong)((longlong)apvStack_68[0] + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
      return param_1;
    case 0x55:
      FUN_18001e4a0((undefined ***)acStack_b8,param_2);
      if (acStack_b8[0] != '\0') {
        pcVar9 = FUN_18001fbd0(acStack_b8);
        pbVar10 = FUN_18000b160((byte *)&plStack_2f8,(longlong)pcVar9,param_2);
        puVar11 = FUN_180026fe0(&plStack_2c8,(undefined8 *)pbVar10);
        FUN_18001ea60((undefined1 *)param_1,puVar11);
        FUN_180001b70((longlong *)&plStack_2c8);
        FUN_180001b70((longlong *)&plStack_2f8);
        FUN_18001fc30(acStack_b8);
        return param_1;
      }
      alStack_288[0] = 0;
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      puVar13 = FUN_180004170((undefined4 *)aplStack_198,param_2);
      FUN_1800270c0(&uStack_228,puVar13);
      pplStack_2d0 = &plStack_1b8;
      pplStack_2d8 = (longlong **)&uStack_228;
      FUN_18001fb60(&plStack_2a8,(longlong *)&pplStack_2d8);
      FUN_1800208c0(&plStack_2c8,
                    "parse_escape_sequence: invalid token found in UTF-8 codepoint Uxxxxxxxx");
      plVar12 = FUN_1800042c0((longlong *)&pvStack_250,(char *)&plStack_2c8,(longlong *)&plStack_2a8
                              ,alStack_288);
      puVar11 = FUN_180026fe0(&plStack_2f8,plVar12);
      FUN_18001b550((undefined1 *)param_1,puVar11);
      FUN_180001b70((longlong *)&plStack_2f8);
      FUN_180001b70((longlong *)&pvStack_250);
      FUN_180001b70((longlong *)&plStack_2c8);
      FUN_180022b20((longlong *)&plStack_2a8);
      _eh_vector_destructor_iterator_(&uStack_228,0x70,1,FUN_180006d60);
      FUN_180005140((longlong)aplStack_198);
      FUN_180022bf0(alStack_288);
      FUN_18001fc30(acStack_b8);
      return param_1;
    case 0x5c:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f48;
      break;
    case 0x62:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f50;
      break;
    case 0x66:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f5c;
      break;
    case 0x6e:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f58;
      break;
    case 0x72:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
      *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
      plStack_2a8 = (longlong *)0x0;
      uStack_2a0 = 0;
      uStack_298 = 0;
      uStack_290 = 0;
      FUN_180027650(&plStack_2a8,&DAT_180078f60,1);
      plStack_2c8 = plStack_2a8;
      plStack_2c0 = (longlong *)uStack_2a0;
      plStack_2b8 = (longlong *)uStack_298;
      plStack_2b0 = (longlong *)uStack_290;
      uStack_298 = _DAT_18007c620;
      uStack_290 = _UNK_18007c628;
      plStack_2a8 = (longlong *)((ulonglong)plStack_2a8 & 0xffffffffffffff00);
      FUN_18001ea60((undefined1 *)param_1,&plStack_2c8);
      FUN_180001b70((longlong *)&plStack_2c8);
      FUN_180001b70((longlong *)&plStack_2a8);
      return param_1;
    case 0x74:
      lVar8 = thunk_FUN_18006cb20(pauVar15,(undefined1 (*) [32])(lVar8 + 2),10);
      puVar17 = &DAT_180078f54;
      break;
    case 0x75:
      FUN_18001e7c0((undefined ***)acStack_b8,param_2);
      if (acStack_b8[0] != '\0') {
        pcVar9 = FUN_18001fbd0(acStack_b8);
        pbVar10 = FUN_18000b160((byte *)&plStack_2f8,(longlong)pcVar9,param_2);
        puVar11 = FUN_180026fe0(&plStack_2c8,(undefined8 *)pbVar10);
        FUN_18001ea60((undefined1 *)param_1,puVar11);
        FUN_180001b70((longlong *)&plStack_2c8);
        FUN_180001b70((longlong *)&plStack_2f8);
        FUN_18001fc30(acStack_b8);
        return param_1;
      }
      alStack_288[0] = 0;
      alStack_288[1] = 0;
      alStack_288[2] = 0;
      puVar13 = FUN_180004170((undefined4 *)aplStack_198,param_2);
      FUN_1800270c0(&uStack_228,puVar13);
      pplStack_2d0 = &plStack_1b8;
      pplStack_2d8 = (longlong **)&uStack_228;
      FUN_18001fb60(&plStack_2a8,(longlong *)&pplStack_2d8);
      FUN_1800208c0(&plStack_2c8,
                    "parse_escape_sequence: invalid token found in UTF-8 codepoint uXXXX.");
      plVar12 = FUN_1800042c0((longlong *)&pvStack_250,(char *)&plStack_2c8,(longlong *)&plStack_2a8
                              ,alStack_288);
      puVar11 = FUN_180026fe0(&plStack_2f8,plVar12);
      FUN_18001b550((undefined1 *)param_1,puVar11);
      FUN_180001b70((longlong *)&plStack_2f8);
      FUN_180001b70((longlong *)&pvStack_250);
      FUN_180001b70((longlong *)&plStack_2c8);
      FUN_180022b20((longlong *)&plStack_2a8);
      _eh_vector_destructor_iterator_(&uStack_228,0x70,1,FUN_180006d60);
      FUN_180005140((longlong)aplStack_198);
      FUN_180022bf0(alStack_288);
      FUN_18001fc30(acStack_b8);
      return param_1;
    }
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
    plStack_2e8 = (longlong *)0x0;
    plStack_2e0 = (longlong *)0x0;
    plStack_2f8 = (longlong *)0x0;
    plStack_2f0 = (longlong *)0x0;
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
    FUN_180027650(&plStack_2f8,puVar17,1);
    *(undefined1 *)param_1 = 1;
    param_1[1] = plStack_2f8;
    param_1[2] = plStack_2f0;
    param_1[3] = plStack_2e8;
    param_1[4] = plStack_2e0;
    return param_1;
  }
  plStack_2a8 = (longlong *)0x0;
  uStack_2a0 = 0;
  uStack_298 = 0;
  puVar13 = FUN_180004170((undefined4 *)acStack_b8,param_2);
  uStack_228 = *puVar13;
  uStack_224 = puVar13[1];
  uStack_220 = puVar13[2];
  uStack_218 = *(undefined8 *)(puVar13 + 4);
  uStack_210 = *(undefined8 *)(puVar13 + 6);
  uStack_208 = *(undefined8 *)(puVar13 + 8);
  uStack_200 = *(undefined8 *)(puVar13 + 10);
  *(undefined8 *)(puVar13 + 10) = 0xf;
  *(undefined8 *)(puVar13 + 8) = 0;
  *(undefined1 *)(puVar13 + 4) = 0;
  uStack_1f8 = *(undefined8 *)(puVar13 + 0xc);
  uStack_1f0 = *(undefined8 *)(puVar13 + 0xe);
  uStack_1e8 = *(undefined8 *)(puVar13 + 0x10);
  uStack_1e0 = *(undefined8 *)(puVar13 + 0x12);
  *(undefined8 *)(puVar13 + 0x12) = 0xf;
  *(undefined8 *)(puVar13 + 0x10) = 0;
  *(undefined1 *)(puVar13 + 0xc) = 0;
  uStack_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c8 = 0;
  uStack_1c0 = 0;
  FUN_180027650(&uStack_1d8,"the next token is not a backslash \"\\\"",0x25);
  pplStack_2d8 = &plStack_1b8;
  plStack_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  pplStack_c8 = (longlong **)0x0;
  pplStack_270 = (longlong **)&uStack_228;
  FUN_18002c400(&plStack_d8,1,&pplStack_270,&pplStack_2d8);
  plStack_2f8 = (longlong *)0x0;
  plStack_2f0 = (longlong *)0x0;
  plStack_2e8 = (longlong *)0x0;
  plStack_2e0 = (longlong *)0x0;
  FUN_180027650(&plStack_2f8,"toml::parse_escape_sequence: ",0x1d);
  plVar14 = FUN_1800042c0((longlong *)&plStack_2c8,(char *)&plStack_2f8,(longlong *)&plStack_d8,
                          (longlong *)&plStack_2a8);
  plVar12 = (longlong *)*plVar14;
  plVar2 = (longlong *)plVar14[1];
  plVar3 = (longlong *)plVar14[2];
  plVar4 = (longlong *)plVar14[3];
  plVar14[2] = 0;
  plVar14[3] = 0xf;
  *(undefined1 *)plVar14 = 0;
  *(undefined1 *)param_1 = 0;
  param_1[1] = plVar12;
  param_1[2] = plVar2;
  param_1[3] = plVar3;
  param_1[4] = plVar4;
  if ((longlong *)0xf < plStack_2b0) {
    plVar12 = plStack_2c8;
    if ((0xfff < (longlong)plStack_2b0 + 1U) &&
       (plVar12 = (longlong *)plStack_2c8[-1],
       0x1f < (ulonglong)((longlong)plStack_2c8 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(plVar12);
  }
  uVar7 = _UNK_18007c628;
  uVar6 = _DAT_18007c620;
  plStack_2b8 = (longlong *)_DAT_18007c620;
  plStack_2b0 = (longlong *)_UNK_18007c628;
  plStack_2c8 = (longlong *)((ulonglong)plStack_2c8 & 0xffffffffffffff00);
  if (0xf < plStack_2e0) {
    plVar12 = plStack_2f8;
    if ((0xfff < (longlong)plStack_2e0 + 1U) &&
       (plVar12 = (longlong *)plStack_2f8[-1],
       0x1f < (ulonglong)((longlong)plStack_2f8 + (-8 - (longlong)plVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(plVar12);
  }
  plStack_2e8 = (longlong *)uVar6;
  plStack_2e0 = (longlong *)uVar7;
  plStack_2f8 = (longlong *)((ulonglong)plStack_2f8 & 0xffffffffffffff00);
  FUN_180022b20((longlong *)&plStack_d8);
  _eh_vector_destructor_iterator_(&uStack_228,0x70,1,FUN_180006d60);
  if (0xf < uStack_70) {
    pvVar5 = (void *)CONCAT71(uStack_87,uStack_88);
    pvVar16 = pvVar5;
    if ((0xfff < uStack_70 + 1) &&
       (pvVar16 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar16)))) goto LAB_18000c31a;
    FUN_18006d9d4(pvVar16);
  }
  uStack_78 = uVar6;
  uStack_70 = uVar7;
  uStack_88 = 0;
  if (0xf < uStack_90) {
    pvVar5 = (void *)CONCAT71(uStack_a7,uStack_a8);
    pvVar16 = pvVar5;
    if ((0xfff < uStack_90 + 1) &&
       (pvVar16 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar16)))) {
LAB_18000c31a:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar16);
  }
  uStack_98 = uVar6;
  uStack_90 = uVar7;
  uStack_a8 = 0;
  FUN_180022bf0((longlong *)&plStack_2a8);
  return param_1;
}



// ============================================================
// INDEX: 102/227
// FUNCTION: FUN_180012120
// ENTRY: 180012120
// RVA: 0x12120
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180012120(longlong param_1)
// ============================================================

void FUN_180012120(longlong param_1)

{
  FUN_180003d10(param_1 + 0x10);
  return;
}



// ============================================================
// INDEX: 103/227
// FUNCTION: FUN_180019530
// ENTRY: 180019530
// RVA: 0x19530
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong FUN_180019530(char * param_1, longlong * param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

longlong FUN_180019530(char *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  float *pfVar7;
  longlong *plVar8;
  float *apfStack_78 [4];
  float afStack_58 [2];
  longlong lStack_50;
  undefined8 uStack_48;
  ulonglong auStack_40 [5];
  
  cVar4 = *param_1;
  if (cVar4 == '\0') {
    uStack_48 = 0;
    lVar6 = FUN_18006d620(0x88);
    *(longlong *)lVar6 = lVar6;
    *(longlong *)(lVar6 + 8) = lVar6;
    auStack_40[0] = 0;
    auStack_40[1] = 0;
    auStack_40[2] = 0;
    auStack_40[3] = 7;
    auStack_40[4] = 8;
    afStack_58[0] = 1.0;
    lStack_50 = lVar6;
    FUN_180024cd0(auStack_40,0x10,lVar6);
    FUN_1800225b0(param_1);
    *param_1 = '\n';
    apfStack_78[0] = (float *)FUN_18006d620(0x18);
    apfStack_78[0][0] = 0.0;
    apfStack_78[0][1] = 0.0;
    apfStack_78[0][2] = 0.0;
    apfStack_78[0][3] = 0.0;
    apfStack_78[0][2] = 1.4013e-45;
    apfStack_78[0][3] = 1.4013e-45;
    *(undefined ***)apfStack_78[0] = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
    *(undefined ***)(apfStack_78[0] + 4) = toml::detail::region_base::vftable;
    *(float **)(param_1 + 0x30) = apfStack_78[0] + 4;
    plVar8 = *(longlong **)(param_1 + 0x38);
    *(float **)(param_1 + 0x38) = apfStack_78[0];
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar8 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*plVar8)(plVar8);
        LOCK();
        piVar2 = (int *)((longlong)plVar8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar8 + 8))(plVar8);
        }
      }
    }
    apfStack_78[0] = (float *)(param_1 + 8);
    apfStack_78[0] = (float *)FUN_18006d620(0x40);
    apfStack_78[0][0] = 0.0;
    apfStack_78[0][1] = 0.0;
    apfStack_78[0][2] = 0.0;
    apfStack_78[0][3] = 0.0;
    apfStack_78[0][4] = 0.0;
    apfStack_78[0][5] = 0.0;
    apfStack_78[0][6] = 0.0;
    apfStack_78[0][7] = 0.0;
    apfStack_78[0][8] = 0.0;
    apfStack_78[0][9] = 0.0;
    apfStack_78[0][10] = 0.0;
    apfStack_78[0][0xb] = 0.0;
    apfStack_78[0][0xc] = 0.0;
    apfStack_78[0][0xd] = 0.0;
    apfStack_78[0][0xe] = 0.0;
    apfStack_78[0][0xf] = 0.0;
    pfVar7 = FUN_180040660(apfStack_78[0],afStack_58,lVar6,param_4);
    *(float **)(param_1 + 8) = pfVar7;
    FUN_180020a50((longlong)afStack_58);
  }
  else if (cVar4 != '\n') {
    FUN_1800208c0(apfStack_78,"toml::value::operator[](key): ");
                    /* WARNING: Subroutine does not return */
    FUN_18002a280((char *)apfStack_78,cVar4,(longlong)param_1);
  }
  plVar8 = FUN_18002d800(*(float **)(param_1 + 8),apfStack_78,param_2);
  return *plVar8 + 0x30;
}



// ============================================================
// INDEX: 104/227
// FUNCTION: FUN_1800196d0
// ENTRY: 1800196d0
// RVA: 0x196D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_1800196d0(char * param_1, char param_2)
// ============================================================

char * FUN_1800196d0(char *param_1,char param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  FUN_1800225b0(param_1);
  *param_1 = '\x01';
  puVar6 = (undefined8 *)FUN_18006d620(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
  puVar6[2] = toml::detail::region_base::vftable;
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x30) = puVar6 + 2;
  *(undefined8 **)(param_1 + 0x38) = puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    param_1[8] = param_2;
    return param_1;
  }
  param_1[8] = param_2;
  return param_1;
}



// ============================================================
// INDEX: 105/227
// FUNCTION: FUN_180019940
// ENTRY: 180019940
// RVA: 0x19940
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180019940(longlong * param_1, longlong * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180019940(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  void *pvStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulonglong uStack_38;
  longlong *plStack_30;
  void *pvStack_28;
  size_t sStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = DAT_18008d040 ^ (ulonglong)auStack_78;
  uStack_58 = 0;
  puVar1 = (undefined8 *)*param_1;
  if ((puVar1 == (undefined8 *)0x0) || (puVar1[1] == 0)) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
  }
  else {
    pvStack_28 = (void *)0x0;
    sStack_20 = 0;
    uStack_18 = 0;
    plStack_30 = param_2;
    cef_string_utf16_to_utf8(*puVar1,puVar1[1],&pvStack_28);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0xf;
    *(undefined1 *)param_2 = 0;
    uStack_58 = 2;
    if (sStack_20 != 0) {
      pvStack_50 = (void *)0x0;
      uStack_48 = 0;
      uStack_40 = 0;
      uStack_38 = 0;
      FUN_180027650(&pvStack_50,pvStack_28,sStack_20);
      FUN_180020720(param_2,(longlong *)&pvStack_50);
      if (0xf < uStack_38) {
        pvVar2 = pvStack_50;
        if ((0xfff < uStack_38 + 1) &&
           (pvVar2 = *(void **)((longlong)pvStack_50 + -8),
           0x1f < (ulonglong)((longlong)pvStack_50 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar2);
      }
    }
    cef_string_utf8_clear(&pvStack_28);
  }
  return param_2;
}



// ============================================================
// INDEX: 106/227
// FUNCTION: FUN_18001a790
// ENTRY: 18001a790
// RVA: 0x1A790
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18001a790(basic_streambuf<char,std::char_traits<char>_> * param_1)
// ============================================================

void FUN_18001a790(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *(undefined ***)param_1 = std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(longlong *)(param_1 + 0x80) != 0) &&
     ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
      param_1 + 0x70)) {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    lVar2 = *(longlong *)(param_1 + 0x88);
    **(longlong **)(param_1 + 0x18) = lVar2;
    **(longlong **)(param_1 + 0x38) = lVar2;
    **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
  }
  if (param_1[0x7c] != (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    FUN_180022820(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00018001a7f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// ============================================================
// INDEX: 107/227
// FUNCTION: FUN_18001f5f0
// ENTRY: 18001f5f0
// RVA: 0x1F5F0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18001f5f0(undefined8 * param_1, undefined8 param_2, undefined8 param_3)
// ============================================================

undefined8 * FUN_18001f5f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// ============================================================
// INDEX: 108/227
// FUNCTION: FUN_18001f770
// ENTRY: 18001f770
// RVA: 0x1F770
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 FUN_18001f770(undefined1 * param_1)
// ============================================================

undefined1 FUN_18001f770(undefined1 *param_1)

{
  return *param_1;
}



// ============================================================
// INDEX: 109/227
// FUNCTION: FUN_18001f780
// ENTRY: 18001f780
// RVA: 0x1F780
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_18001f780(char * param_1, char * param_2)
// ============================================================

char * FUN_18001f780(char *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_180022a30(param_1);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
    plVar6 = *(longlong **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    cVar4 = *param_2;
    *param_1 = cVar4;
    switch(cVar4) {
    case '\x01':
      param_1[8] = param_2[8];
      return param_1;
    case '\x02':
    case '\x03':
      uVar8 = *(undefined8 *)(param_2 + 8);
      break;
    case '\x04':
      param_1[8] = param_2[8];
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      param_2[0x28] = '\x0f';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      param_2[0x10] = '\0';
      return param_1;
    case '\x05':
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      return param_1;
    case '\x06':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
      return param_1;
    case '\a':
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      return param_1;
    case '\b':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
      return param_1;
    case '\t':
    case '\n':
      uVar8 = *(undefined8 *)(param_2 + 8);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      break;
    default:
      goto switchD_18001f82c_default;
    }
    *(undefined8 *)(param_1 + 8) = uVar8;
  }
switchD_18001f82c_default:
  return param_1;
}



// ============================================================
// INDEX: 110/227
// FUNCTION: FUN_18001f970
// ENTRY: 18001f970
// RVA: 0x1F970
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18001f970(undefined1 * param_1, undefined1 * param_2)
// ============================================================

undefined1 * FUN_18001f970(undefined1 *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  float *pfVar5;
  float *pfVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  switch(*param_2) {
  case 1:
    param_1[8] = param_2[8];
    break;
  case 2:
  case 3:
    pfVar6 = *(float **)(param_2 + 8);
    goto LAB_18001faa6;
  case 4:
    param_1[8] = param_2[8];
    FUN_180020900((undefined8 *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10));
    break;
  case 5:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    break;
  case 6:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
    break;
  case 7:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    break;
  case 8:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
    break;
  case 9:
    plVar2 = *(longlong **)(param_2 + 8);
    puVar4 = (ulonglong *)FUN_18006d620(0x18);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    pfVar6 = (float *)FUN_180040720(puVar4,plVar2);
    goto LAB_18001faa6;
  case 10:
    pfVar6 = *(float **)(param_2 + 8);
    pfVar5 = (float *)FUN_18006d620(0x40);
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 0.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    pfVar5[10] = 0.0;
    pfVar5[0xb] = 0.0;
    pfVar5[0xc] = 0.0;
    pfVar5[0xd] = 0.0;
    pfVar5[0xe] = 0.0;
    pfVar5[0xf] = 0.0;
    pfVar6 = FUN_1800409f0(pfVar5,pfVar6);
LAB_18001faa6:
    *(float **)(param_1 + 8) = pfVar6;
  }
  return param_1;
}



// ============================================================
// INDEX: 111/227
// FUNCTION: FUN_18001fb60
// ENTRY: 18001fb60
// RVA: 0x1FB60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18001fb60(undefined8 * param_1, longlong * param_2)
// ============================================================

undefined8 * FUN_18001fb60(undefined8 *param_1,longlong *param_2)

{
  longlong alStackX_8 [2];
  longlong alStackX_18 [2];
  
  alStackX_18[0] = param_2[1];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  alStackX_8[0] = *param_2;
  FUN_18002c400(param_1,(alStackX_18[0] - alStackX_8[0]) / 0x70,alStackX_8,alStackX_18);
  return param_1;
}



// ============================================================
// INDEX: 112/227
// FUNCTION: FUN_1800201e0
// ENTRY: 1800201e0
// RVA: 0x201E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800201e0(basic_streambuf<char,std::char_traits<char>_> * param_1)
// ============================================================

void FUN_1800201e0(basic_streambuf<char,std::char_traits<char>_> *param_1)

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
    FUN_18006d9d4(pvVar2);
  }
  **(undefined8 **)(param_1 + 0x18) = 0;
  **(undefined8 **)(param_1 + 0x38) = 0;
  **(undefined4 **)(param_1 + 0x50) = 0;
  **(undefined8 **)(param_1 + 0x20) = 0;
  **(undefined8 **)(param_1 + 0x40) = 0;
  **(undefined4 **)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) & 0xfffffffe;
  *(undefined8 *)(param_1 + 0x68) = 0;
                    /* WARNING: Could not recover jumptable at 0x000180020289. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (param_1);
  return;
}



// ============================================================
// INDEX: 113/227
// FUNCTION: FUN_1800205d0
// ENTRY: 1800205d0
// RVA: 0x205D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_1800205d0(undefined8 * param_1)
// ============================================================

undefined8 * FUN_1800205d0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// ============================================================
// INDEX: 114/227
// FUNCTION: FUN_1800205f0
// ENTRY: 1800205f0
// RVA: 0x205F0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800205f0(longlong * param_1, void * param_2)
// ============================================================

longlong * FUN_1800205f0(longlong *param_1,void *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong _Size;
  
  _Size = 0xffffffffffffffff;
  do {
    _Size = _Size + 1;
  } while (*(char *)((longlong)param_2 + _Size) != '\0');
  uVar1 = param_1[3];
  lVar2 = param_1[2];
  if (_Size <= uVar1 - lVar2) {
    param_1[2] = lVar2 + _Size;
    plVar3 = param_1;
    if (0xf < uVar1) {
      plVar3 = (longlong *)*param_1;
    }
    memmove((void *)((longlong)plVar3 + lVar2),param_2,_Size);
    *(undefined1 *)((longlong)plVar3 + lVar2 + _Size) = 0;
    return param_1;
  }
  plVar3 = FUN_18002dea0(param_1,_Size,uVar1,param_2,_Size);
  return plVar3;
}



// ============================================================
// INDEX: 115/227
// FUNCTION: FUN_1800208c0
// ENTRY: 1800208c0
// RVA: 0x208C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_1800208c0(undefined8 * param_1, void * param_2)
// ============================================================

undefined8 * FUN_1800208c0(undefined8 *param_1,void *param_2)

{
  size_t sVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  sVar1 = 0xffffffffffffffff;
  do {
    sVar1 = sVar1 + 1;
  } while (*(char *)((longlong)param_2 + sVar1) != '\0');
  FUN_180027650(param_1,param_2,sVar1);
  return param_1;
}



// ============================================================
// INDEX: 116/227
// FUNCTION: FUN_180020900
// ENTRY: 180020900
// RVA: 0x20900
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_180020900(undefined8 * param_1, undefined8 * param_2)
// ============================================================

undefined8 * FUN_180020900(undefined8 *param_1,undefined8 *param_2)

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
    FUN_180001e10();
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
    if (uVar1 == 0) goto LAB_1800209de;
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18006d620(uVar1);
      goto LAB_1800209de;
    }
    uVar4 = uVar6 + 0x28;
    if (uVar4 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
  }
  else {
    uVar4 = 0x8000000000000027;
    uVar6 = 0x7fffffffffffffff;
  }
  lVar5 = FUN_18006d620(uVar4);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar5 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar5;
LAB_1800209de:
  *param_1 = _Dst;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  memcpy(_Dst,param_2,uVar2 + 1);
  return param_1;
}



// ============================================================
// INDEX: 117/227
// FUNCTION: FUN_180020a20
// ENTRY: 180020a20
// RVA: 0x20A20
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180020a20(void)
// ============================================================

void FUN_180020a20(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid string position");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// INDEX: 118/227
// FUNCTION: FUN_180020a50
// ENTRY: 180020a50
// RVA: 0x20A50
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180020a50(longlong param_1)
// ============================================================

void FUN_180020a50(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_180022540((longlong *)(param_1 + 8));
  return;
}



// ============================================================
// INDEX: 119/227
// FUNCTION: FUN_1800225b0
// ENTRY: 1800225b0
// RVA: 0x225B0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800225b0(char * param_1)
// ============================================================

void FUN_1800225b0(char *param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      pvVar2 = *(void **)(param_1 + 0x10);
      pvVar4 = pvVar2;
      if ((0xfff < *(ulonglong *)(param_1 + 0x28) + 1) &&
         (pvVar4 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar4);
    }
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\x0f';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x10] = '\0';
  }
  else if (cVar1 == '\t') {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      FUN_1800257d0(plVar3);
      FUN_18006d9d4(plVar3);
      return;
    }
  }
  else if ((cVar1 == '\n') && (pvVar2 = *(void **)(param_1 + 8), pvVar2 != (void *)0x0)) {
    FUN_180020a50((longlong)pvVar2);
    FUN_18006d9d4(pvVar2);
    return;
  }
  return;
}



// ============================================================
// INDEX: 120/227
// FUNCTION: FUN_180022820
// ENTRY: 180022820
// RVA: 0x22820
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_streambuf<char,std::char_traits<char>_> * FUN_180022820(basic_streambuf<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_streambuf<char,std::char_traits<char>_> *
FUN_180022820(basic_streambuf<char,std::char_traits<char>_> *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  basic_streambuf<char,std::char_traits<char>_> *pbVar5;
  basic_streambuf<char,std::char_traits<char>_> *pbVar6;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    pbVar6 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  else {
    if ((basic_streambuf<char,std::char_traits<char>_> *)**(longlong **)(param_1 + 0x18) ==
        param_1 + 0x70) {
      uVar1 = *(undefined8 *)(param_1 + 0x90);
      lVar2 = *(longlong *)(param_1 + 0x88);
      **(longlong **)(param_1 + 0x18) = lVar2;
      **(longlong **)(param_1 + 0x38) = lVar2;
      **(int **)(param_1 + 0x50) = (int)uVar1 - (int)lVar2;
    }
    bVar3 = FUN_180022730((longlong *)param_1);
    pbVar5 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    if (bVar3) {
      pbVar5 = param_1;
    }
    iVar4 = fclose(*(FILE **)(param_1 + 0x80));
    pbVar6 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    if (iVar4 == 0) {
      pbVar6 = pbVar5;
    }
  }
  param_1[0x7c] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  param_1[0x71] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(param_1);
  *(undefined8 *)(param_1 + 0x74) = DAT_18008e3d0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  return pbVar6;
}



// ============================================================
// INDEX: 121/227
// FUNCTION: FUN_180022a30
// ENTRY: 180022a30
// RVA: 0x22A30
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180022a30(char * param_1)
// ============================================================

void FUN_180022a30(char *param_1)

{
  char cVar1;
  void *pvVar2;
  longlong *plVar3;
  void *pvVar4;
  
  cVar1 = *param_1;
  if (cVar1 == '\x04') {
    if (0xf < *(ulonglong *)(param_1 + 0x28)) {
      pvVar2 = *(void **)(param_1 + 0x10);
      pvVar4 = pvVar2;
      if ((0xfff < *(ulonglong *)(param_1 + 0x28) + 1) &&
         (pvVar4 = *(void **)((longlong)pvVar2 + -8),
         0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar4);
    }
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
    param_1[0x28] = '\x0f';
    param_1[0x29] = '\0';
    param_1[0x2a] = '\0';
    param_1[0x2b] = '\0';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    param_1[0x2f] = '\0';
    param_1[0x10] = '\0';
  }
  else if (cVar1 == '\t') {
    plVar3 = *(longlong **)(param_1 + 8);
    if (plVar3 != (longlong *)0x0) {
      FUN_180025880(plVar3);
      FUN_18006d9d4(plVar3);
      return;
    }
  }
  else if ((cVar1 == '\n') && (pvVar2 = *(void **)(param_1 + 8), pvVar2 != (void *)0x0)) {
    FUN_180024e20((longlong)pvVar2);
    FUN_18006d9d4(pvVar2);
    return;
  }
  return;
}



// ============================================================
// INDEX: 122/227
// FUNCTION: FUN_180022b00
// ENTRY: 180022b00
// RVA: 0x22B00
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180022b00(void)
// ============================================================

void FUN_180022b00(void)

{
  code *pcVar1;
  
  std::_Xout_of_range("invalid vector subscript");
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ============================================================
// INDEX: 123/227
// FUNCTION: FUN_180022bf0
// ENTRY: 180022bf0
// RVA: 0x22BF0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180022bf0(longlong * param_1)
// ============================================================

void FUN_180022bf0(longlong *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    FUN_18002c740((longlong *)*param_1,(longlong *)param_1[1]);
    pvVar1 = (void *)*param_1;
    pvVar2 = pvVar1;
    if ((0xfff < (param_1[2] - (longlong)pvVar1 & 0xffffffffffffffe0U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar2);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// ============================================================
// INDEX: 124/227
// FUNCTION: FUN_180022f50
// ENTRY: 180022f50
// RVA: 0x22F50
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180022f50(longlong * param_1, void * param_2, size_t param_3)
// ============================================================

longlong * FUN_180022f50(longlong *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  void *pvVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  longlong *_Dst;
  ulonglong uVar7;
  void *_Dst_00;
  
  uVar2 = param_1[3];
  if (param_3 <= uVar2) {
    _Dst = param_1;
    if (0xf < uVar2) {
      _Dst = (longlong *)*param_1;
    }
    param_1[2] = param_3;
    memmove(_Dst,param_2,param_3);
    *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
    return param_1;
  }
  uVar7 = 0x7fffffffffffffff;
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001e10();
  }
  uVar5 = param_3 | 0xf;
  if ((uVar5 < 0x8000000000000000) && (uVar2 <= 0x7fffffffffffffff - (uVar2 >> 1))) {
    uVar1 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar5;
    if (uVar5 < uVar1) {
      uVar7 = uVar1;
    }
    uVar1 = uVar7 + 1;
    if (uVar1 == 0) {
      _Dst_00 = (void *)0x0;
    }
    else {
      if (0xfff < uVar1) {
        uVar5 = uVar7 + 0x28;
        if (uVar5 <= uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_1800016c0();
        }
        goto LAB_18002300e;
      }
      _Dst_00 = (void *)FUN_18006d620(uVar1);
    }
  }
  else {
    uVar5 = 0x8000000000000027;
LAB_18002300e:
    lVar4 = FUN_18006d620(uVar5);
    if (lVar4 == 0) goto LAB_180023095;
    _Dst_00 = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst_00 - 8) = lVar4;
  }
  param_1[2] = param_3;
  param_1[3] = uVar7;
  memcpy(_Dst_00,param_2,param_3);
  *(undefined1 *)((longlong)_Dst_00 + param_3) = 0;
  if (0xf < uVar2) {
    pvVar3 = (void *)*param_1;
    pvVar6 = pvVar3;
    if ((0xfff < uVar2 + 1) &&
       (pvVar6 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar6)))) {
LAB_180023095:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar6);
  }
  *param_1 = (longlong)_Dst_00;
  return param_1;
}



// ============================================================
// INDEX: 125/227
// FUNCTION: FUN_180024330
// ENTRY: 180024330
// RVA: 0x24330
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180024330(longlong param_1, void * param_2, ulonglong param_3, uint param_4)
// ============================================================

void FUN_180024330(longlong param_1,void *param_2,ulonglong param_3,uint param_4)

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
      _Dst = (void *)FUN_18006d620(param_3);
    }
    else {
      if (param_3 + 0x27 <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_1800016c0();
      }
      lVar2 = FUN_18006d620(param_3 + 0x27);
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
// INDEX: 126/227
// FUNCTION: FUN_180024cd0
// ENTRY: 180024cd0
// RVA: 0x24CD0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180024cd0(ulonglong * param_1, ulonglong param_2, undefined8 param_3)
// ============================================================

void FUN_180024cd0(ulonglong *param_1,ulonglong param_2,undefined8 param_3)

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
LAB_180024e09:
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
    uVar5 = param_2 * 8;
    if (uVar5 == 0) {
      puVar6 = (undefined8 *)0x0;
    }
    else if (uVar5 < 0x1000) {
      puVar6 = (undefined8 *)FUN_18006d620(uVar5);
    }
    else {
      if (uVar5 + 0x27 <= uVar5) goto LAB_180024e09;
      lVar3 = FUN_18006d620(uVar5 + 0x27);
      if (lVar3 == 0) goto LAB_180024dda;
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
LAB_180024dda:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar4);
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
// INDEX: 127/227
// FUNCTION: FUN_180024e20
// ENTRY: 180024e20
// RVA: 0x24E20
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180024e20(longlong param_1)
// ============================================================

void FUN_180024e20(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  if (pvVar1 != (void *)0x0) {
    pvVar2 = pvVar1;
    if ((0xfff < (*(longlong *)(param_1 + 0x28) - (longlong)pvVar1 & 0xfffffffffffffff8U)) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar2);
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  FUN_180025200((longlong *)(param_1 + 8));
  return;
}



// ============================================================
// INDEX: 128/227
// FUNCTION: FUN_1800257d0
// ENTRY: 1800257d0
// RVA: 0x257D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_1800257d0(longlong * param_1)
// ============================================================

void FUN_1800257d0(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x58) {
      FUN_1800197a0(lVar3);
    }
    pvVar2 = (void *)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x58) * 0x58)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// ============================================================
// INDEX: 129/227
// FUNCTION: FUN_180025880
// ENTRY: 180025880
// RVA: 0x25880
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180025880(longlong * param_1)
// ============================================================

void FUN_180025880(longlong *param_1)

{
  longlong lVar1;
  void *pvVar2;
  longlong lVar3;
  void *pvVar4;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar1 = param_1[1];
    for (; lVar3 != lVar1; lVar3 = lVar3 + 0x48) {
      FUN_18001faf0(lVar3);
    }
    pvVar2 = (void *)*param_1;
    pvVar4 = pvVar2;
    if ((0xfff < (ulonglong)(((param_1[2] - (longlong)pvVar2) / 0x48) * 0x48)) &&
       (pvVar4 = *(void **)((longlong)pvVar2 + -8),
       0x1f < (ulonglong)((longlong)pvVar2 + (-8 - (longlong)pvVar4)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar4);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



// ============================================================
// INDEX: 130/227
// FUNCTION: FUN_180026af0
// ENTRY: 180026af0
// RVA: 0x26AF0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180026af0(longlong * param_1, longlong * param_2, void * param_3)
// ============================================================

longlong * FUN_180026af0(longlong *param_1,longlong *param_2,void *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  size_t sVar3;
  
  sVar3 = 0xffffffffffffffff;
  do {
    sVar3 = sVar3 + 1;
  } while (*(char *)((longlong)param_3 + sVar3) != '\0');
  plVar2 = FUN_1800230b0(param_2,param_3,sVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  lVar1 = plVar2[1];
  *param_1 = *plVar2;
  param_1[1] = lVar1;
  lVar1 = plVar2[3];
  param_1[2] = plVar2[2];
  param_1[3] = lVar1;
  plVar2[2] = 0;
  plVar2[3] = 0xf;
  *(undefined1 *)plVar2 = 0;
  return param_1;
}



// ============================================================
// INDEX: 131/227
// FUNCTION: FUN_180026dc0
// ENTRY: 180026dc0
// RVA: 0x26DC0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180026dc0(longlong * param_1, UINT param_2, undefined8 * param_3)
// ============================================================

longlong * FUN_180026dc0(longlong *param_1,UINT param_2,undefined8 *param_3)

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
      FUN_180002330();
    }
    uVar4 = FUN_18006cf7c(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800026a0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_18002dd10(param_1,_Size,uVar2,_Size);
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
    uVar4 = FUN_18006cf7c(param_2,(LPCWSTR)*param_3,*(int *)(param_3 + 1),(LPSTR)plVar5,(int)uVar4);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800026a0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 132/227
// FUNCTION: FUN_180026f20
// ENTRY: 180026f20
// RVA: 0x26F20
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180026f20(undefined4 * param_1, undefined4 * param_2, void * param_3)
// ============================================================

undefined4 * FUN_180026f20(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  undefined8 uVar1;
  size_t sVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  sVar2 = 0xffffffffffffffff;
  do {
    sVar2 = sVar2 + 1;
  } while (*(char *)((longlong)param_3 + sVar2) != '\0');
  FUN_180027650((undefined8 *)(param_1 + 0x14),param_3,sVar2);
  return param_1;
}



// ============================================================
// INDEX: 133/227
// FUNCTION: FUN_180027650
// ENTRY: 180027650
// RVA: 0x27650
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180027650(undefined8 * param_1, void * param_2, size_t param_3)
// ============================================================

void FUN_180027650(undefined8 *param_1,void *param_2,size_t param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  void *_Dst;
  
  if (0x7fffffffffffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_180001e10();
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
      goto LAB_180027715;
    }
    if (uVar1 < 0x1000) {
      _Dst = (void *)FUN_18006d620(uVar1);
      goto LAB_180027715;
    }
    uVar3 = uVar2 + 0x28;
    if (uVar3 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
  }
  else {
    uVar3 = 0x8000000000000027;
    uVar2 = 0x7fffffffffffffff;
  }
  lVar4 = FUN_18006d620(uVar3);
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    _invalid_parameter_noinfo_noreturn();
  }
  _Dst = (void *)(lVar4 + 0x27U & 0xffffffffffffffe0);
  *(longlong *)((longlong)_Dst - 8) = lVar4;
LAB_180027715:
  *param_1 = _Dst;
  param_1[2] = param_3;
  param_1[3] = uVar2;
  memcpy(_Dst,param_2,param_3);
  *(undefined1 *)(param_3 + (longlong)_Dst) = 0;
  return;
}



// ============================================================
// INDEX: 134/227
// FUNCTION: FUN_180027ab0
// ENTRY: 180027ab0
// RVA: 0x27AB0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180027ab0(undefined4 * param_1, undefined4 * param_2, undefined8 * param_3)
// ============================================================

undefined4 * FUN_180027ab0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  uVar1 = param_3[1];
  *(undefined8 *)(param_1 + 0x14) = *param_3;
  *(undefined8 *)(param_1 + 0x16) = uVar1;
  uVar1 = param_3[3];
  *(undefined8 *)(param_1 + 0x18) = param_3[2];
  *(undefined8 *)(param_1 + 0x1a) = uVar1;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}



// ============================================================
// INDEX: 135/227
// FUNCTION: FUN_180027b60
// ENTRY: 180027b60
// RVA: 0x27B60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_180027b60(undefined8 * param_1, longlong param_2, undefined8 * param_3)
// ============================================================

undefined8 * FUN_180027b60(undefined8 *param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(param_2 + uVar3) != '\0');
  puVar2 = FUN_1800330f0(param_3,param_2,(undefined8 *)param_2,uVar3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  uVar1 = puVar2[3];
  param_1[2] = puVar2[2];
  param_1[3] = uVar1;
  puVar2[2] = 0;
  puVar2[3] = 0xf;
  *(undefined1 *)puVar2 = 0;
  return param_1;
}



// ============================================================
// INDEX: 136/227
// FUNCTION: FUN_1800287d0
// ENTRY: 1800287d0
// RVA: 0x287D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * * * * FUN_1800287d0(undefined8 * * * * param_1, longlong param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 **** FUN_1800287d0(undefined8 ****param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  void *pvVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  undefined1 *puVar7;
  undefined ***pppuVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulonglong *puVar13;
  undefined4 *puVar14;
  longlong *plVar15;
  undefined8 ***pppuVar16;
  undefined8 *******pppppppuVar17;
  void *pvVar18;
  undefined **ppuVar19;
  longlong lVar20;
  size_t sVar21;
  undefined1 auStackY_438 [32];
  undefined8 ***pppuStack_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 ***pppuStack_3e8;
  undefined8 ***pppuStack_3e0;
  undefined8 ***pppuStack_3d8;
  undefined8 ***pppuStack_3d0;
  undefined8 ***pppuStack_3c8;
  undefined8 ***pppuStack_3c0;
  undefined8 ****ppppuStack_3b8;
  undefined8 ****ppppuStack_3b0;
  undefined8 ****ppppuStack_3a8;
  undefined8 ****ppppuStack_398;
  float afStack_390 [2];
  longlong lStack_388;
  undefined8 uStack_380;
  ulonglong auStack_378 [6];
  undefined **ppuStack_348;
  undefined8 auStack_340 [6];
  longlong *plStack_310;
  longlong alStack_2f8 [4];
  undefined **ppuStack_2d8;
  float fStack_2d0;
  undefined4 uStack_2cc;
  longlong *plStack_2c8;
  undefined8 uStack_2c0;
  void *pvStack_2b8;
  longlong *plStack_2a0;
  longlong lStack_298;
  undefined8 *******pppppppuStack_288;
  longlong lStack_280;
  longlong lStack_278;
  ulonglong uStack_270;
  longlong lStack_268;
  longlong *plStack_260;
  longlong *plStack_258;
  char acStack_248 [8];
  undefined1 uStack_240;
  undefined7 uStack_23f;
  longlong *plStack_238;
  undefined8 uStack_230;
  ulonglong auStack_228 [10];
  undefined8 ***pppuStack_1d8;
  longlong lStack_1d0;
  ulonglong uStack_1c8;
  ulonglong auStack_1c0 [5];
  undefined **ppuStack_198;
  undefined8 uStack_190;
  undefined8 ***pppuStack_188;
  undefined8 ***pppuStack_180;
  undefined8 ***pppuStack_178;
  longlong *plStack_160;
  undefined **ppuStack_148;
  undefined8 uStack_140;
  longlong *plStack_138;
  void *apvStack_130 [3];
  ulonglong uStack_118;
  longlong lStack_110;
  longlong lStack_108;
  char acStack_f8 [8];
  undefined1 auStack_f0 [72];
  char acStack_a8 [8];
  undefined1 auStack_a0 [56];
  undefined *puStack_68;
  undefined *puStack_60;
  ulonglong uStack_58;
  
  uStack_58 = DAT_18008d040 ^ (ulonglong)auStackY_438;
  lVar20 = *(longlong *)(param_2 + 0x40);
  lStack_110 = lVar20;
  if (lVar20 == *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
    ppppuStack_3a8 = &pppuStack_3d8;
    pppuStack_3d8 = (undefined8 ***)0x0;
    pppuStack_3d0 = (undefined8 ***)0x0;
    pppuStack_3c8 = (undefined8 ***)0x0;
    ppppuStack_398 = (undefined8 ****)&ppuStack_148;
    ppuStack_148 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_140 = *(undefined8 *)(param_2 + 8);
    plStack_138 = *(longlong **)(param_2 + 0x10);
    FUN_180020900(apvStack_130,(undefined8 *)(param_2 + 0x20));
    uStack_380 = 0;
    lStack_108 = lVar20;
    lStack_388 = FUN_18006d620(0x78);
    *(longlong *)lStack_388 = lStack_388;
    *(longlong *)(lStack_388 + 8) = lStack_388;
    auStack_378[0] = 0;
    auStack_378[1] = 0;
    auStack_378[2] = 0;
    auStack_378[3] = 7;
    auStack_378[4] = 8;
    afStack_390[0] = 1.0;
    FUN_180024cd0(auStack_378,0x10,lStack_388);
    puVar7 = FUN_1800318b0((undefined1 *)&ppuStack_198,afStack_390,(longlong)&ppuStack_148,
                           (longlong *)&pppuStack_3d8);
    FUN_180032fc0((undefined1 *)&ppuStack_2d8,puVar7);
    *(undefined1 *)param_1 = 1;
    FUN_180032fc0((undefined1 *)(param_1 + 1),(undefined1 *)&ppuStack_2d8);
    FUN_180022a30((char *)&ppuStack_2d8);
    if (plStack_2a0 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_2a0 + 1;
      lVar20 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plStack_2a0)(plStack_2a0);
        LOCK();
        piVar1 = (int *)((longlong)plStack_2a0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_2a0 + 8))(plStack_2a0);
        }
      }
    }
    FUN_180022a30((char *)&ppuStack_198);
    if (plStack_160 != (longlong *)0x0) {
      LOCK();
      plVar15 = plStack_160 + 1;
      lVar20 = *plVar15;
      *(int *)plVar15 = (int)*plVar15 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*plStack_160)(plStack_160);
        LOCK();
        piVar1 = (int *)((longlong)plStack_160 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_160 + 8))(plStack_160);
        }
      }
    }
    FUN_180024e20((longlong)afStack_390);
  }
  else {
    ppuStack_148 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uStack_140 = *(undefined8 *)(param_2 + 8);
    plStack_138 = *(longlong **)(param_2 + 0x10);
    ppppuStack_3a8 = param_1;
    FUN_180020900(apvStack_130,(undefined8 *)(param_2 + 0x20));
    lStack_268 = 0;
    plStack_260 = (longlong *)0x0;
    plStack_258 = (longlong *)0x0;
    lStack_108 = lVar20 + 1;
    FUN_180031460(acStack_a8,param_2);
    pppuVar6 = _UNK_18007c628;
    pppuVar5 = _DAT_18007c620;
    if (acStack_a8[0] != '\0') {
      pppuStack_3f8 = (undefined8 ***)0x0;
      pppuStack_3f0 = (undefined8 ***)0x0;
      pppuStack_3e8 = (undefined8 ***)0x0;
      pppuStack_3e0 = (undefined8 ***)0x0;
      if (puStack_68 == puStack_60) {
        sVar21 = 0;
        puStack_68 = &DAT_1800789f6;
      }
      else {
        sVar21 = (longlong)puStack_60 - (longlong)puStack_68;
      }
      FUN_180027650(&pppuStack_3f8,puStack_68,sVar21);
      FUN_180020900(&pppuStack_3d8,(undefined8 *)(param_2 + 0x20));
      FUN_1800030f0(&ppuStack_2d8,(longlong *)&pppuStack_3d8,(longlong *)&pppuStack_3f8);
      if (0xf < pppuStack_3e0) {
        pppuVar16 = pppuStack_3f8;
        if ((0xfff < (longlong)pppuStack_3e0 + 1U) &&
           (pppuVar16 = (undefined8 ***)pppuStack_3f8[-1],
           0x1f < (ulonglong)((longlong)pppuStack_3f8 + (-8 - (longlong)pppuVar16)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pppuVar16);
      }
      pppuStack_3e8 = pppuVar5;
      pppuStack_3e0 = pppuVar6;
      pppuStack_3f8 = (undefined8 ***)((ulonglong)pppuStack_3f8 & 0xffffffffffffff00);
      if (lStack_298 != *(longlong *)(CONCAT44(uStack_2cc,fStack_2d0) + 8)) {
        do {
          FUN_1800228e0(acStack_f8,(longlong)&ppuStack_2d8);
          if (acStack_f8[0] != '\0') {
            FUN_180003d10((longlong)auStack_f0);
          }
          FUN_1800216c0(acStack_f8,(longlong)&ppuStack_2d8);
          if (acStack_f8[0] == '\0') {
            FUN_180023a50(&ppuStack_348,(longlong)&ppuStack_2d8);
          }
          else {
            ppuStack_348._0_1_ = acStack_f8[0];
            FUN_180006cd0(auStack_340,(longlong)auStack_f0);
          }
          if (acStack_f8[0] != '\0') {
            FUN_180003d10((longlong)auStack_f0);
          }
          if ((char)ppuStack_348 != '\0') {
            FUN_180003d10((longlong)auStack_340);
            break;
          }
          pppuVar8 = FUN_180031590(&ppuStack_198,(longlong)&ppuStack_2d8);
          if (*(char *)pppuVar8 == '\0') {
            plVar15 = FUN_18002c560((longlong *)afStack_390);
            puVar11 = FUN_180027b60(alStack_2f8,0x18007a300,plVar15);
            FUN_180001e30(&pppuStack_3f8,puVar11);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&pppuStack_3f8,(ThrowInfo *)&DAT_180088cf0);
          }
          ppuVar19 = pppuVar8[8];
          lStack_278 = 0;
          uStack_270 = 0;
          pppppppuStack_288 = (undefined8 *******)0x0;
          lStack_280 = 0;
          if (ppuVar19 == pppuVar8[9]) {
            sVar21 = 0;
            ppuVar19 = (undefined **)&DAT_1800789f6;
          }
          else {
            sVar21 = (longlong)pppuVar8[9] - (longlong)ppuVar19;
          }
          FUN_180027650(&pppppppuStack_288,ppuVar19,sVar21);
          if ((char)ppuStack_198 != '\0') {
            FUN_180003d10((longlong)&uStack_190);
          }
          pppppppuVar17 = &pppppppuStack_288;
          if (0xf < uStack_270) {
            pppppppuVar17 = pppppppuStack_288;
          }
          lVar20 = lStack_278 - (ulonglong)(lStack_278 != 0);
          memmove(pppppppuVar17,(void *)((ulonglong)(lStack_278 != 0) + (longlong)pppppppuVar17),
                  lVar20 + 1);
          if (plStack_260 == plStack_258) {
            lStack_278 = lVar20;
            FUN_18003b740(&lStack_268,plStack_260,(longlong *)&pppppppuStack_288);
          }
          else {
            *plStack_260 = 0;
            plStack_260[1] = 0;
            plStack_260[2] = 0;
            plStack_260[3] = 0;
            *plStack_260 = (longlong)pppppppuStack_288;
            plStack_260[1] = lStack_280;
            plStack_260[2] = lVar20;
            plStack_260[3] = uStack_270;
            lStack_278 = 0;
            uStack_270 = 0xf;
            pppppppuStack_288 =
                 (undefined8 *******)((ulonglong)pppppppuStack_288 & 0xffffffffffffff00);
            plStack_260 = plStack_260 + 4;
          }
          FUN_1800216c0(acStack_f8,(longlong)&ppuStack_2d8);
          if (acStack_f8[0] == '\0') {
            FUN_180023a50(&ppuStack_348,(longlong)&ppuStack_2d8);
          }
          else {
            ppuStack_348._0_1_ = acStack_f8[0];
            FUN_180006cd0(auStack_340,(longlong)auStack_f0);
          }
          if (acStack_f8[0] != '\0') {
            FUN_180003d10((longlong)auStack_f0);
          }
          if ((char)ppuStack_348 != '\0') {
            FUN_180003d10((longlong)auStack_340);
          }
          if (0xf < uStack_270) {
            pppppppuVar17 = pppppppuStack_288;
            if ((0xfff < uStack_270 + 1) &&
               (pppppppuVar17 = (undefined8 *******)pppppppuStack_288[-1],
               0x1f < (ulonglong)((longlong)pppppppuStack_288 + (-8 - (longlong)pppppppuVar17)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pppppppuVar17);
          }
        } while (lStack_298 != *(longlong *)(CONCAT44(uStack_2cc,fStack_2d0) + 8));
      }
      if ((longlong *)0xf < plStack_2a0) {
        pvVar18 = pvStack_2b8;
        if ((0xfff < (longlong)plStack_2a0 + 1U) &&
           (pvVar18 = *(void **)((longlong)pvStack_2b8 + -8),
           0x1f < (ulonglong)((longlong)pvStack_2b8 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar18);
      }
      plVar15 = plStack_2c8;
      if (plStack_2c8 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_2c8 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_2c8)(plStack_2c8);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        }
      }
    }
    if (acStack_a8[0] != '\0') {
      FUN_180003d10((longlong)auStack_a0);
    }
    auStack_1c0[0] = 0;
    auStack_1c0[1] = 0;
    auStack_1c0[2] = 0;
    auStack_1c0[3] = 0;
    auStack_1c0[4] = 0;
    pppuStack_1d8 = (undefined8 ***)0x0;
    lStack_1d0 = 0;
    uStack_1c8 = 0;
    lStack_1d0 = FUN_18006d620(0x78);
    *(longlong *)lStack_1d0 = lStack_1d0;
    *(longlong *)(lStack_1d0 + 8) = lStack_1d0;
    auStack_1c0[0] = 0;
    auStack_1c0[1] = 0;
    auStack_1c0[2] = 0;
    auStack_1c0[3] = 7;
    auStack_1c0[4] = 8;
    pppuStack_1d8._0_4_ = 1.0;
    FUN_180024cd0(auStack_1c0,0x10,lStack_1d0);
    FUN_180037890(&ppuStack_2d8,param_2);
    if ((char)ppuStack_2d8 == '\0') {
      FUN_180020900(&ppuStack_198,(undefined8 *)&fStack_2d0);
      *(undefined1 *)param_1 = 0;
      param_1[1] = (undefined8 ***)CONCAT71(ppuStack_198._1_7_,(char)ppuStack_198);
      param_1[2] = (undefined8 ***)CONCAT71(uStack_190._1_7_,(undefined1)uStack_190);
      param_1[3] = pppuStack_188;
      param_1[4] = pppuStack_180;
      if ((char)ppuStack_2d8 == '\0') {
        if ((void *)0xf < pvStack_2b8) {
          pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
          pvVar18 = pvVar4;
          if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
             (pvVar18 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) goto LAB_1800299c6;
          FUN_18006d9d4(pvVar18);
        }
        uStack_2c0 = 0;
        pvStack_2b8 = (void *)0xf;
        fStack_2d0 = (float)((uint)fStack_2d0 & 0xffffff00);
      }
      else {
        FUN_180024e20((longlong)&fStack_2d0);
      }
      FUN_180024e20((longlong)&pppuStack_1d8);
      FUN_180022bf0(&lStack_268);
      if (0xf < uStack_118) {
        pvVar18 = apvStack_130[0];
        if ((0xfff < uStack_118 + 1) &&
           (pvVar18 = *(void **)((longlong)apvStack_130[0] + -8),
           0x1f < (ulonglong)((longlong)apvStack_130[0] + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar18);
      }
      plVar15 = plStack_138;
      if (plStack_138 != (longlong *)0x0) {
        LOCK();
        plVar2 = plStack_138 + 1;
        lVar20 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_138)(plStack_138);
          LOCK();
          piVar1 = (int *)((longlong)plVar15 + 0xc);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar15 + 8))(plVar15);
          }
        }
      }
    }
    else {
      ppppuStack_3b8 = &pppuStack_1d8;
      pppuStack_1d8._0_4_ = fStack_2d0;
      FUN_18003c300(&lStack_1d0,(undefined8 *)*plStack_2c8,plStack_2c8);
      uVar9 = FUN_180032de0((float *)&pppuStack_1d8,uStack_1c8);
      FUN_180032b30((longlong)&pppuStack_1d8,uVar9);
      if ((char)ppuStack_2d8 == '\0') {
        if ((void *)0xf < pvStack_2b8) {
          pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
          pvVar18 = pvVar4;
          if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
             (pvVar18 = *(void **)((longlong)pvVar4 + -8),
             0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
LAB_1800299c6:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar18);
        }
      }
      else {
        FUN_180024e20((longlong)&fStack_2d0);
      }
      if (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
        do {
          FUN_180017b20(acStack_248,param_2);
          if (acStack_248[0] != '\0') {
            FUN_180037890(&ppuStack_2d8,param_2);
            if ((char)ppuStack_2d8 == '\0') {
              FUN_180020900(&pppuStack_3f8,(undefined8 *)&fStack_2d0);
              *(undefined1 *)param_1 = 0;
              param_1[1] = pppuStack_3f8;
              param_1[2] = pppuStack_3f0;
              param_1[3] = pppuStack_3e8;
              param_1[4] = pppuStack_3e0;
              pppuStack_3e8 = pppuVar5;
              pppuStack_3e0 = pppuVar6;
              pppuStack_3f8 = (undefined8 ***)((ulonglong)pppuStack_3f8 & 0xffffffffffffff00);
              FUN_180001b70((longlong *)&pppuStack_3f8);
              if ((char)ppuStack_2d8 == '\0') {
                if ((void *)0xf < pvStack_2b8) {
                  pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
                  pvVar18 = pvVar4;
                  if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                     0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))))
                  goto LAB_1800295ae;
                  FUN_18006d9d4(pvVar18);
                }
                uStack_2c0 = 0;
                pvStack_2b8 = (void *)0xf;
                fStack_2d0 = (float)((uint)fStack_2d0 & 0xffffff00);
              }
              else {
                FUN_180024e20((longlong)&fStack_2d0);
              }
              if (acStack_248[0] == '\0') {
                if (0xf < auStack_228[0]) {
                  pvVar4 = (void *)CONCAT71(uStack_23f,uStack_240);
                  pvVar18 = pvVar4;
                  if ((0xfff < auStack_228[0] + 1) &&
                     (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                     0x1f < (ulonglong)
                            ((longlong)pvVar4 + (-8 - (longlong)*(void **)((longlong)pvVar4 + -8))))
                     ) goto LAB_180029628;
LAB_18002962f:
                  FUN_18006d9d4(pvVar18);
                }
LAB_18002963b:
                uStack_230 = 0;
                auStack_228[0] = 0xf;
                uStack_240 = 0;
                goto LAB_18002964d;
              }
            }
            else {
              if (acStack_248[0] == '\0') {
                pcVar12 = (char *)FUN_180022a20((longlong)acStack_248);
                plVar15 = FUN_18002a850((longlong *)afStack_390,pcVar12);
                puVar11 = FUN_180027b60(alStack_2f8,0x18007a300,plVar15);
                FUN_180001e30(&pppuStack_3f8,puVar11);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&pppuStack_3f8,(ThrowInfo *)&DAT_180088cf0);
              }
              ppppuStack_3b8 = (undefined8 ****)acStack_a8;
              pppuVar8 = (undefined ***)
                         FUN_180006cd0((undefined8 *)acStack_a8,(longlong)auStack_228);
              plVar2 = plStack_238;
              plVar15 = (longlong *)CONCAT71(uStack_23f,uStack_240);
              ppppuStack_398 = &pppuStack_3f8;
              plVar10 = FUN_1800038c0((longlong)auStack_228,(longlong *)&pppuStack_3f8);
              ppppuStack_3a8 = (undefined8 ****)acStack_f8;
              puVar11 = FUN_180006cd0((undefined8 *)acStack_f8,(longlong)auStack_228);
              if ((char)ppuStack_2d8 == '\0') {
                pcVar12 = (char *)FUN_180022a20((longlong)&ppuStack_2d8);
                plVar15 = FUN_18002a850((longlong *)afStack_390,pcVar12);
                puVar11 = FUN_180027b60(alStack_2f8,0x18007a300,plVar15);
                FUN_180001e30(&pppuStack_3d8,puVar11);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&pppuStack_3d8,(ThrowInfo *)&DAT_180088cf0);
              }
              pcVar12 = FUN_1800318b0((undefined1 *)&ppuStack_348,&fStack_2d0,(longlong)puVar11,
                                      plVar10);
              FUN_180038500((undefined1 *)&ppuStack_198,&pppuStack_1d8,pcVar12,plVar15,plVar2,
                            pppuVar8,'\x01');
              FUN_180022a30((char *)&ppuStack_348);
              plVar15 = plStack_310;
              if (plStack_310 != (longlong *)0x0) {
                LOCK();
                plVar2 = plStack_310 + 1;
                lVar20 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*plStack_310)(plStack_310);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar15 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar15 + 8))(plVar15);
                  }
                }
              }
              if ((char)ppuStack_198 != '\0') {
                if ((char)ppuStack_2d8 == '\0') {
                  if ((void *)0xf < pvStack_2b8) {
                    pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
                    pvVar18 = pvVar4;
                    if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
                       (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))))
                    goto LAB_1800295ae;
                    FUN_18006d9d4(pvVar18);
                  }
                  uStack_2c0 = 0;
                  pvStack_2b8 = (void *)0xf;
                  fStack_2d0 = (float)((uint)fStack_2d0 & 0xffffff00);
                }
                else {
                  FUN_180024e20((longlong)&fStack_2d0);
                }
                if (acStack_248[0] == '\0') {
                  if (0xf < auStack_228[0]) {
                    pvVar4 = (void *)CONCAT71(uStack_23f,uStack_240);
                    pvVar18 = pvVar4;
                    if ((0xfff < auStack_228[0] + 1) &&
                       (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                       0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18))))
                    goto LAB_180029628;
                    FUN_18006d9d4(pvVar18);
                  }
                }
                else {
                  FUN_180003d10((longlong)auStack_228);
                  FUN_180022bf0((longlong *)&uStack_240);
                }
                goto LAB_180029340;
              }
              FUN_180020900(&pppuStack_3d8,&uStack_190);
              *(undefined1 *)param_1 = 0;
              param_1[1] = pppuStack_3d8;
              param_1[2] = pppuStack_3d0;
              param_1[3] = pppuStack_3c8;
              param_1[4] = pppuStack_3c0;
              pppuStack_3c8 = pppuVar5;
              pppuStack_3c0 = pppuVar6;
              pppuStack_3d8 = (undefined8 ***)((ulonglong)pppuStack_3d8 & 0xffffffffffffff00);
              FUN_180001b70((longlong *)&pppuStack_3d8);
              if ((char)ppuStack_198 == '\0') {
                if ((undefined8 ***)0xf < pppuStack_178) {
                  pvVar4 = (void *)CONCAT71(uStack_190._1_7_,(undefined1)uStack_190);
                  pvVar18 = pvVar4;
                  if ((0xfff < (longlong)pppuStack_178 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                     0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                pppuStack_180 = (undefined8 ***)0x0;
                pppuStack_178 = (undefined8 ***)0xf;
                uStack_190._0_1_ = 0;
              }
              if ((char)ppuStack_2d8 == '\0') {
                if ((void *)0xf < pvStack_2b8) {
                  pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
                  pvVar18 = pvVar4;
                  if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                     0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
LAB_1800295ae:
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                uStack_2c0 = 0;
                pvStack_2b8 = (void *)0xf;
                fStack_2d0 = (float)((uint)fStack_2d0 & 0xffffff00);
              }
              else {
                FUN_180024e20((longlong)&fStack_2d0);
              }
              if (acStack_248[0] == '\0') {
                if (0xf < auStack_228[0]) {
                  pvVar4 = (void *)CONCAT71(uStack_23f,uStack_240);
                  pvVar18 = pvVar4;
                  if ((0xfff < auStack_228[0] + 1) &&
                     (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                     0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
LAB_180029628:
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                goto LAB_18002963b;
              }
            }
LAB_1800295d6:
            FUN_180003d10((longlong)auStack_228);
            FUN_180022bf0((longlong *)&uStack_240);
            goto LAB_18002964d;
          }
          if (0xf < auStack_228[0]) {
            pvVar4 = (void *)CONCAT71(uStack_23f,uStack_240);
            pvVar18 = pvVar4;
            if ((0xfff < auStack_228[0] + 1) &&
               (pvVar18 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar18);
          }
          FUN_180017010(acStack_248,param_2);
          if (acStack_248[0] == '\0') {
            FUN_18001bbc0(acStack_248);
            pppuStack_3d8 = (undefined8 ***)0x0;
            pppuStack_3d0 = (undefined8 ***)0x0;
            pppuStack_3c8 = (undefined8 ***)0x0;
            puVar14 = FUN_180004170((undefined4 *)acStack_f8,param_2);
            FUN_180026f20((undefined4 *)acStack_248,puVar14,"unknown format");
            ppppuStack_3b8 = (undefined8 ****)acStack_248;
            ppppuStack_3b0 = &pppuStack_1d8;
            FUN_18001fb60(&pppuStack_3f8,(longlong *)&ppppuStack_3b8);
            FUN_1800208c0(&ppuStack_198,"toml::parse_toml_file: unknown line appeared");
            plVar15 = FUN_1800042c0((longlong *)afStack_390,(char *)&ppuStack_198,
                                    (longlong *)&pppuStack_3f8,(longlong *)&pppuStack_3d8);
            puVar11 = FUN_180026fe0(alStack_2f8,plVar15);
            FUN_18001b550((undefined1 *)param_1,puVar11);
            FUN_180001b70(alStack_2f8);
            FUN_180001b70((longlong *)afStack_390);
            FUN_180001b70((longlong *)&ppuStack_198);
            FUN_180022b20((longlong *)&pppuStack_3f8);
            _eh_vector_destructor_iterator_(acStack_248,0x70,1,FUN_180006d60);
            FUN_180005140((longlong)acStack_f8);
            FUN_180022bf0((longlong *)&pppuStack_3d8);
            goto LAB_18002964d;
          }
          FUN_180037890(&ppuStack_2d8,param_2);
          if ((char)ppuStack_2d8 == '\0') {
            FUN_180020900(&pppuStack_3f8,(undefined8 *)&fStack_2d0);
            *(undefined1 *)param_1 = 0;
            param_1[1] = pppuStack_3f8;
            param_1[2] = pppuStack_3f0;
            param_1[3] = pppuStack_3e8;
            param_1[4] = pppuStack_3e0;
            pppuStack_3e8 = pppuVar5;
            pppuStack_3e0 = pppuVar6;
            pppuStack_3f8 = (undefined8 ***)((ulonglong)pppuStack_3f8 & 0xffffffffffffff00);
            FUN_180001b70((longlong *)&pppuStack_3f8);
            if ((char)ppuStack_2d8 == '\0') {
              if ((void *)0xf < pvStack_2b8) {
                pvVar4 = (void *)CONCAT44(uStack_2cc,fStack_2d0);
                pvVar18 = pvVar4;
                if ((0xfff < (longlong)pvStack_2b8 + 1U) &&
                   (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar18);
              }
              uStack_2c0 = 0;
              pvStack_2b8 = (void *)0xf;
              fStack_2d0 = (float)((uint)fStack_2d0 & 0xffffff00);
            }
            else {
              FUN_180024e20((longlong)&fStack_2d0);
            }
            if (acStack_248[0] == '\0') {
              if (0xf < auStack_228[0]) {
                pvVar4 = (void *)CONCAT71(uStack_23f,uStack_240);
                pvVar18 = pvVar4;
                if ((0xfff < auStack_228[0] + 1) &&
                   (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_18002962f;
              }
              goto LAB_18002963b;
            }
            goto LAB_1800295d6;
          }
          if (acStack_248[0] == '\0') {
            pcVar12 = (char *)FUN_180022a20((longlong)acStack_248);
            plVar15 = FUN_18002a850((longlong *)afStack_390,pcVar12);
            puVar11 = FUN_180027b60(alStack_2f8,0x18007a300,plVar15);
            FUN_180001e30(&pppuStack_3f8,puVar11);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&pppuStack_3f8,(ThrowInfo *)&DAT_180088cf0);
          }
          ppppuStack_3b8 = (undefined8 ****)acStack_f8;
          pppuVar8 = (undefined ***)FUN_180006cd0((undefined8 *)acStack_f8,(longlong)auStack_228);
          plVar2 = plStack_238;
          plVar15 = (longlong *)CONCAT71(uStack_23f,uStack_240);
          ppppuStack_398 = &pppuStack_3f8;
          plVar10 = FUN_1800038c0((longlong)auStack_228,(longlong *)&pppuStack_3f8);
          ppppuStack_3a8 = (undefined8 ****)acStack_a8;
          puVar11 = FUN_180006cd0((undefined8 *)acStack_a8,(longlong)auStack_228);
          if ((char)ppuStack_2d8 == '\0') {
            pcVar12 = (char *)FUN_180022a20((longlong)&ppuStack_2d8);
            plVar15 = FUN_18002a850((longlong *)afStack_390,pcVar12);
            puVar11 = FUN_180027b60(alStack_2f8,0x18007a300,plVar15);
            FUN_180001e30(&pppuStack_3d8,puVar11);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&pppuStack_3d8,(ThrowInfo *)&DAT_180088cf0);
          }
          pcVar12 = FUN_1800318b0((undefined1 *)&ppuStack_348,&fStack_2d0,(longlong)puVar11,plVar10)
          ;
          FUN_180038500((undefined1 *)&ppuStack_198,&pppuStack_1d8,pcVar12,plVar15,plVar2,pppuVar8,
                        '\0');
          FUN_180022a30((char *)&ppuStack_348);
          plVar15 = plStack_310;
          if (plStack_310 != (longlong *)0x0) {
            LOCK();
            plVar2 = plStack_310 + 1;
            lVar20 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*plStack_310)(plStack_310);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15);
              }
            }
          }
          if ((char)ppuStack_198 == '\0') {
            FUN_180020900(&pppuStack_3d8,&uStack_190);
            *(undefined1 *)param_1 = 0;
            param_1[1] = pppuStack_3d8;
            param_1[2] = pppuStack_3d0;
            param_1[3] = pppuStack_3c8;
            param_1[4] = pppuStack_3c0;
            pppuStack_3c8 = pppuVar5;
            pppuStack_3c0 = pppuVar6;
            pppuStack_3d8 = (undefined8 ***)((ulonglong)pppuStack_3d8 & 0xffffffffffffff00);
            FUN_180001b70((longlong *)&pppuStack_3d8);
            if ((char)ppuStack_198 == '\0') {
              if ((undefined8 ***)0xf < pppuStack_178) {
                pvVar4 = (void *)CONCAT71(uStack_190._1_7_,(undefined1)uStack_190);
                pvVar18 = pvVar4;
                if ((0xfff < (longlong)pppuStack_178 + 1U) &&
                   (pvVar18 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar18);
              }
              pppuStack_180 = pppuVar5;
              pppuStack_178 = pppuVar6;
              uStack_190._0_1_ = 0;
            }
            if ((char)ppuStack_2d8 == '\0') {
              FUN_180001b70((longlong *)&fStack_2d0);
            }
            else {
              FUN_180024e20((longlong)&fStack_2d0);
            }
            FUN_18001bbc0(acStack_248);
            goto LAB_18002964d;
          }
          FUN_18001b4e0((char *)&ppuStack_198);
          FUN_180031220((char *)&ppuStack_2d8);
          FUN_18001bbc0(acStack_248);
LAB_180029340:
        } while (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8));
      }
      ppppuStack_3b8 = &pppuStack_3f8;
      puVar13 = FUN_180020410((ulonglong *)&pppuStack_3f8,&lStack_268);
      puVar11 = FUN_180006cd0((undefined8 *)acStack_f8,(longlong)&ppuStack_148);
      puVar7 = FUN_1800318b0(acStack_a8,(float *)&pppuStack_1d8,(longlong)puVar11,
                             (longlong *)puVar13);
      FUN_180032fc0((undefined1 *)&ppuStack_348,puVar7);
      FUN_180031440((undefined1 *)param_1,(undefined1 *)&ppuStack_348);
      FUN_18001faf0((longlong)&ppuStack_348);
      FUN_18001faf0((longlong)acStack_a8);
LAB_18002964d:
      FUN_180024e20((longlong)&pppuStack_1d8);
      FUN_180022bf0(&lStack_268);
      FUN_180003d10((longlong)&ppuStack_148);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 137/227
// FUNCTION: FUN_180029f00
// ENTRY: 180029f00
// RVA: 0x29F00
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_180029f00(char * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

char * FUN_180029f00(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  FUN_1800225b0(param_1);
  *param_1 = '\x03';
  puVar6 = (undefined8 *)FUN_18006d620(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
  puVar6[2] = toml::detail::region_base::vftable;
  plVar4 = *(longlong **)(param_1 + 0x38);
  *(undefined8 **)(param_1 + 0x30) = puVar6 + 2;
  *(undefined8 **)(param_1 + 0x38) = puVar6;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
    *(undefined8 *)(param_1 + 8) = param_2;
    return param_1;
  }
  *(undefined8 *)(param_1 + 8) = param_2;
  return param_1;
}



// ============================================================
// INDEX: 138/227
// FUNCTION: FUN_180029fe0
// ENTRY: 180029fe0
// RVA: 0x29FE0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_180029fe0(basic_ostream<char,std::char_traits<char>_> * param_1, char * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_ostream<char,std::char_traits<char>_> *
FUN_180029fe0(basic_ostream<char,std::char_traits<char>_> *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long *plVar5;
  basic_ostream<char,std::char_traits<char>_> *pbVar6;
  longlong lVar7;
  char ****ppppcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 auStack_c8 [32];
  char cStack_a8;
  undefined2 uStack_a7;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  longlong lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  longlong lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  char ***apppcStack_60 [2];
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  
  uStack_40 = DAT_18008d040 ^ (ulonglong)auStack_c8;
  lVar7 = (longlong)*(int *)(*(longlong *)param_1 + 4);
  uVar3 = *(undefined8 *)(param_1 + lVar7 + 0x28);
  uVar1 = *(undefined4 *)(param_1 + lVar7 + 0x20);
  *(undefined8 *)(param_1 + lVar7 + 0x28) = 0;
  iVar2 = *(int *)(*(longlong *)param_1 + 4);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 4)
       < DAT_18008e3c4) && (FUN_18006d5a8(&DAT_18008e3c4), DAT_18008e3c4 == -1)) {
    DAT_18008e3c0 = std::ios_base::xalloc();
    _Init_thread_footer(&DAT_18008e3c4);
  }
  plVar5 = std::ios_base::iword((ios_base *)(param_1 + iVar2),DAT_18008e3c0);
  iVar2 = *plVar5;
  if ((iVar2 != 1) && (*param_2 == '\n')) {
    pcVar10 = *(char **)(param_2 + 0x40);
    pcVar4 = *(char **)(param_2 + 0x48);
    if (pcVar10 != pcVar4) {
      do {
        pbVar6 = FUN_180026bf0(param_1,'#');
        pcVar9 = pcVar10;
        if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
          pcVar9 = *(char **)pcVar10;
        }
        pbVar6 = FUN_180034840(pbVar6,pcVar9,*(ulonglong *)(pcVar10 + 0x10));
        FUN_180026bf0(pbVar6,'\n');
        pcVar10 = pcVar10 + 0x20;
      } while (pcVar10 != pcVar4);
      FUN_180026bf0(param_1,'\n');
    }
  }
  uStack_a7 = 0;
  uStack_70 = 0;
  uStack_78 = 0;
  lStack_80 = 0;
  lStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  cStack_a8 = iVar2 == 1;
  uStack_a4 = uVar1;
  uStack_a0 = uVar3;
  FUN_180022bf0(&lStack_80);
  FUN_18003a6b0((longlong *)apppcStack_60,&cStack_a8,param_2);
  FUN_180022bf0(&lStack_98);
  ppppcVar8 = apppcStack_60;
  if (0xf < uStack_48) {
    ppppcVar8 = (char ****)apppcStack_60[0];
  }
  FUN_180034840(param_1,(char *)ppppcVar8,uStack_50);
  if (((iVar2 != 1) && (*param_2 != '\n')) &&
     (*(longlong *)(param_2 + 0x40) != *(longlong *)(param_2 + 0x48))) {
    FUN_180026900(param_1," #");
    pcVar4 = *(char **)(param_2 + 0x48);
    for (pcVar10 = *(char **)(param_2 + 0x40); pcVar10 != pcVar4; pcVar10 = pcVar10 + 0x20) {
      pcVar9 = pcVar10;
      if (0xf < *(ulonglong *)(pcVar10 + 0x18)) {
        pcVar9 = *(char **)pcVar10;
      }
      FUN_180034840(param_1,pcVar9,*(ulonglong *)(pcVar10 + 0x10));
    }
  }
  if (0xf < uStack_48) {
    ppppcVar8 = (char ****)apppcStack_60[0];
    if ((0xfff < uStack_48 + 1) &&
       (ppppcVar8 = (char ****)apppcStack_60[0][-1],
       (char *)0x1f < (char *)((longlong)apppcStack_60[0] + (-8 - (longlong)ppppcVar8)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppcVar8);
  }
  return param_1;
}



// ============================================================
// INDEX: 139/227
// FUNCTION: FUN_18002a240
// ENTRY: 18002a240
// RVA: 0x2A240
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_18002a240(basic_ostream<char,std::char_traits<char>_> * param_1)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_18002a240(basic_ostream<char,std::char_traits<char>_> *param_1)

{
  char cVar1;
  
  cVar1 = std::basic_ios<char,std::char_traits<char>_>::widen
                    ((basic_ios<char,std::char_traits<char>_> *)
                     (param_1 + *(int *)(*(longlong *)param_1 + 4)),'\n');
  std::basic_ostream<char,std::char_traits<char>_>::put(param_1,cVar1);
  std::basic_ostream<char,std::char_traits<char>_>::flush(param_1);
  return param_1;
}



// ============================================================
// INDEX: 140/227
// FUNCTION: FUN_18002a280
// ENTRY: 18002a280
// RVA: 0x2A280
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18002a280(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18002a280(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 10;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 141/227
// FUNCTION: FUN_18002a380
// ENTRY: 18002a380
// RVA: 0x2A380
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: facet * FUN_18002a380(locale * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

facet * FUN_18002a380(locale *param_1)

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
  
  local_10 = DAT_18008d040 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  local_28 = DAT_18008e248;
  _Var2 = std::locale::id::operator_unsigned___int64((id *)id_exref);
  lVar1 = *(longlong *)(param_1 + 8);
  if (_Var2 < *(ulonglong *)(lVar1 + 0x18)) {
    pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(lVar1 + 0x10));
    if (pfVar4 != (facet *)0x0) goto LAB_18002a457;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(lVar1 + 0x24) == '\0') {
LAB_18002a40d:
    if (pfVar4 != (facet *)0x0) goto LAB_18002a457;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (_Var2 < *(ulonglong *)(p_Var3 + 0x18)) {
      pfVar4 = *(facet **)(_Var2 * 8 + *(longlong *)(p_Var3 + 0x10));
      goto LAB_18002a40d;
    }
  }
  pfVar4 = local_28;
  if (local_28 == (facet *)0x0) {
    _Var2 = std::codecvt<char,char,_Mbstatet>::_Getcat(&local_28,param_1);
    pfVar4 = local_28;
    if (_Var2 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_180002710();
    }
    local_18 = local_28;
    FUN_18006d448(local_28);
    (**(code **)(*(longlong *)pfVar4 + 8))(pfVar4);
    DAT_18008e248 = local_28;
    pfVar4 = local_28;
  }
LAB_18002a457:
  std::_Lockit::~_Lockit(local_20);
  return pfVar4;
}



// ============================================================
// INDEX: 142/227
// FUNCTION: FUN_18002a850
// ENTRY: 18002a850
// RVA: 0x2A850
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18002a850(longlong * param_1, char * param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18002a850(longlong *param_1,char *param_2)

{
  ulonglong *puVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  puVar1 = (ulonglong *)(param_2 + 0x10);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_2,*puVar1);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 10;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 143/227
// FUNCTION: FUN_18002c000
// ENTRY: 18002c000
// RVA: 0x2C000
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18002c000(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18002c000(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 4;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 144/227
// FUNCTION: FUN_18002c100
// ENTRY: 18002c100
// RVA: 0x2C100
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18002c100(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18002c100(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 3;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 145/227
// FUNCTION: FUN_18002c200
// ENTRY: 18002c200
// RVA: 0x2C200
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18002c200(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18002c200(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 2;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 146/227
// FUNCTION: FUN_18002c300
// ENTRY: 18002c300
// RVA: 0x2C300
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18002c300(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18002c300(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 1;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 147/227
// FUNCTION: FUN_18002c560
// ENTRY: 18002c560
// RVA: 0x2C560
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18002c560(longlong * param_1)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18002c560(longlong *param_1)

{
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_158 [32];
  undefined4 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  longlong *plStack_118;
  int iStack_10c;
  undefined *puStack_108;
  undefined **ppuStack_100;
  basic_ostream<char,std::char_traits<char>_> abStack_f8 [16];
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_c8;
  ulonglong *puStack_c0;
  int *piStack_b0;
  ulonglong uStack_98;
  uint uStack_90;
  basic_ios<char,std::char_traits<char>_> abStack_80 [104];
  ulonglong uStack_18;
  ulonglong uVar3;
  
  uStack_18 = DAT_18008d040 ^ (ulonglong)auStack_158;
  uStack_138 = 0;
  plStack_118 = param_1;
  memset(&puStack_108,0,0xe8);
  puStack_108 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_80);
  uStack_138 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_108,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_100,false);
  *(undefined ***)((longlong)&puStack_108 + (longlong)*(int *)(puStack_108 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_10c + (longlong)*(int *)(puStack_108 + 4)) =
       *(int *)(puStack_108 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_100);
  ppuStack_100 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_98 = 0;
  uStack_90 = 4;
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_108,"none");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_138 = 10;
  uStack_130 = 0;
  uStack_128 = 0;
  if ((((byte)uStack_90 & 0x22) == 2) || (uVar3 = *puStack_c0, uVar3 == 0)) {
    if (((uStack_90 & 4) == 0) && (*plStack_c8 != 0)) {
      pvVar1 = (void *)*plStack_e8;
      sVar2 = ((longlong)*piStack_b0 - (longlong)pvVar1) + *plStack_c8;
    }
    else {
      sVar2 = 0;
      pvVar1 = (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)*plStack_e0;
    if (uVar3 < uStack_98) {
      uVar3 = uStack_98;
    }
    sVar2 = uVar3 - (longlong)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar1,sVar2);
  }
  *(undefined ***)((longlong)&puStack_108 + (longlong)*(int *)(puStack_108 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_10c + (longlong)*(int *)(puStack_108 + 4)) =
       *(int *)(puStack_108 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_100);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (abStack_f8);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(abStack_80)
  ;
  return param_1;
}



// ============================================================
// INDEX: 148/227
// FUNCTION: FUN_18002cf70
// ENTRY: 18002cf70
// RVA: 0x2CF70
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18002cf70(undefined8 * param_1, undefined8 param_2, undefined8 param_3, undefined1 param_4)
// ============================================================

undefined8 *
FUN_18002cf70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

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
    FUN_180001e10();
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
          FUN_1800016c0();
        }
        goto LAB_18002d015;
      }
      _Dst = (void *)FUN_18006d620(uVar1);
    }
  }
  else {
    uVar4 = 0x8000000000000027;
LAB_18002d015:
    lVar3 = FUN_18006d620(uVar4);
    if (lVar3 == 0) goto LAB_18002d090;
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
LAB_18002d090:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar6);
  }
  *param_1 = _Dst;
  return param_1;
}



// ============================================================
// INDEX: 149/227
// FUNCTION: FUN_18002d800
// ENTRY: 18002d800
// RVA: 0x2D800
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18002d800(float * param_1, undefined8 * param_2, longlong * param_3)
// ============================================================

undefined8 * FUN_18002d800(float *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *_Buf2;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_78;
  
  uVar7 = param_3[2];
  uVar1 = param_3[3];
  plVar9 = param_3;
  if (0xf < uVar1) {
    plVar9 = (longlong *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)plVar9 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
  local_78 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != local_78) {
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    while( true ) {
      puVar10 = puVar5 + 2;
      if (0xf < (ulonglong)puVar5[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      plVar9 = param_3;
      if (0xf < uVar1) {
        plVar9 = (longlong *)*param_3;
      }
      if ((uVar7 == puVar5[4]) &&
         ((uVar7 == 0 || (iVar4 = memcmp(plVar9,puVar10,uVar7), iVar4 == 0)))) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      local_78 = puVar5;
      if (puVar5 == puVar6) break;
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1e1e1e1e1e1e1e1) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_18006d620(0x88);
  FUN_180020900(puVar5 + 2,param_3);
  *(undefined1 *)(puVar5 + 6) = 0;
  puVar6 = (undefined8 *)FUN_18006d620(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
  puVar6[2] = toml::detail::region_base::vftable;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = puVar6 + 2;
  puVar5[0xd] = puVar6;
  puVar5[0xe] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar12 && fVar12 != *param_1) {
    uVar7 = FUN_180032de0(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_180032b30((longlong)param_1,uVar7);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    local_78 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != local_78) {
      puVar10 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Size = puVar5[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) break;
        local_78 = puVar6;
        if (puVar6 == puVar10) goto LAB_18002dac7;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_78 = (undefined8 *)*puVar6;
    }
  }
LAB_18002dac7:
  puVar6 = (undefined8 *)local_78[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_78;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  local_78[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar10 = *(undefined8 **)(lVar2 + uVar11 * 0x10);
  if (puVar10 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar10 == local_78) {
      *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar5;
      goto LAB_18002db15;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) != puVar6) goto LAB_18002db15;
  }
  *(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) = puVar5;
LAB_18002db15:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ============================================================
// INDEX: 150/227
// FUNCTION: FUN_180031420
// ENTRY: 180031420
// RVA: 0x31420
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180031420(longlong param_1, undefined4 * param_2)
// ============================================================

undefined4 * FUN_180031420(longlong param_1,undefined4 *param_2)

{
  FUN_180003db0(param_2,*(longlong **)(param_1 + 0x30));
  return param_2;
}



// ============================================================
// INDEX: 151/227
// FUNCTION: FUN_1800318b0
// ENTRY: 1800318b0
// RVA: 0x318B0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_1800318b0(undefined1 * param_1, float * param_2, longlong param_3, longlong * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1800318b0(undefined1 *param_1,float *param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  float *pfVar2;
  undefined1 auStack_78 [32];
  float *local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_78;
  *param_1 = 10;
  local_50 = param_1;
  local_48 = param_3;
  local_40 = param_4;
  local_58 = (float *)FUN_18006d620(0x58);
  *(undefined8 *)local_58 = 0;
  *(undefined8 *)((longlong)local_58 + 8) = 0;
  *(undefined4 *)((longlong)local_58 + 8) = 1;
  *(undefined4 *)((longlong)local_58 + 0xc) = 1;
  *(undefined ***)local_58 = std::_Ref_count_obj2<toml::detail::region>::vftable;
  *(undefined8 *)((longlong)local_58 + 0x10) = toml::detail::region::vftable;
  *(undefined8 *)((longlong)local_58 + 0x18) = 0;
  *(undefined8 *)((longlong)local_58 + 0x20) = 0;
  *(undefined8 *)((longlong)local_58 + 0x18) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)((longlong)local_58 + 0x20) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)local_58 + 0x28) = 0;
  *(undefined8 *)((longlong)local_58 + 0x30) = 0;
  *(undefined8 *)((longlong)local_58 + 0x38) = 0;
  *(undefined8 *)((longlong)local_58 + 0x40) = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)((longlong)local_58 + 0x28) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)((longlong)local_58 + 0x30) = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)((longlong)local_58 + 0x38) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)((longlong)local_58 + 0x40) = uVar1;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0xf;
  *(undefined1 *)(param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)local_58 + 0x48) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)((longlong)local_58 + 0x50) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 **)(param_1 + 0x30) = (undefined8 *)((longlong)local_58 + 0x10);
  *(float **)(param_1 + 0x38) = local_58;
  local_58 = (float *)FUN_18006d620(0x40);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_58[4] = 0.0;
  local_58[5] = 0.0;
  local_58[6] = 0.0;
  local_58[7] = 0.0;
  local_58[8] = 0.0;
  local_58[9] = 0.0;
  local_58[10] = 0.0;
  local_58[0xb] = 0.0;
  local_58[0xc] = 0.0;
  local_58[0xd] = 0.0;
  local_58[0xe] = 0.0;
  local_58[0xf] = 0.0;
  pfVar2 = FUN_1800409f0(local_58,param_2);
  *(float **)(param_1 + 8) = pfVar2;
  FUN_180003d10(param_3);
  FUN_180022bf0(param_4);
  return param_1;
}



// ============================================================
// INDEX: 152/227
// FUNCTION: FUN_180034630
// ENTRY: 180034630
// RVA: 0x34630
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180034630(longlong * param_1, undefined8 param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180034630(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  undefined4 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  longlong *plStack_128;
  int iStack_11c;
  undefined *puStack_118;
  undefined **ppuStack_110;
  basic_ostream<char,std::char_traits<char>_> abStack_108 [16];
  longlong *plStack_f8;
  longlong *plStack_f0;
  longlong *plStack_d8;
  ulonglong *puStack_d0;
  int *piStack_c0;
  ulonglong uStack_a8;
  uint uStack_a0;
  basic_ios<char,std::char_traits<char>_> abStack_90 [104];
  ulonglong uStack_28;
  ulonglong uVar3;
  
  uStack_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  uStack_148 = 0;
  plStack_128 = param_1;
  memset(&puStack_118,0,0xe8);
  puStack_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(abStack_90);
  uStack_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110,false);
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  ppuStack_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  uStack_a8 = 0;
  uStack_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,"the actual type is ");
  FUN_18004dea0((basic_ostream<char,std::char_traits<char>_> *)&puStack_118,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  uStack_148 = 0x42;
  uStack_140 = 0;
  uStack_138 = 0;
  if ((((byte)uStack_a0 & 0x22) == 2) || (uVar3 = *puStack_d0, uVar3 == 0)) {
    if (((uStack_a0 & 4) == 0) && (*plStack_d8 != 0)) {
      pvVar1 = (void *)*plStack_f8;
      sVar2 = ((longlong)*piStack_c0 - (longlong)pvVar1) + *plStack_d8;
    }
    else {
      sVar2 = 0;
      pvVar1 = (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)*plStack_f0;
    if (uVar3 < uStack_a8) {
      uVar3 = uStack_a8;
    }
    sVar2 = uVar3 - (longlong)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar1,sVar2);
  }
  *(undefined ***)((longlong)&puStack_118 + (longlong)*(int *)(puStack_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(puStack_118 + 4)) =
       *(int *)(puStack_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&ppuStack_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (abStack_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(abStack_90)
  ;
  return param_1;
}



// ============================================================
// INDEX: 153/227
// FUNCTION: FUN_180034a00
// ENTRY: 180034a00
// RVA: 0x34A00
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_180034a00(undefined8 * param_1, undefined8 * param_2)
// ============================================================

undefined8 * FUN_180034a00(undefined8 *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  void *_Src;
  ulonglong uVar2;
  longlong lVar3;
  size_t sVar4;
  void *_Dst;
  
  uVar1 = param_2[1];
  _Dst = (void *)0x0;
  _Src = (void *)*param_2;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (0x7ffffffffffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180001e10();
  }
  if (uVar1 < 8) {
    param_1[2] = uVar1;
    param_1[3] = 7;
    memcpy(param_1,_Src,uVar1 * 2);
    *(undefined2 *)(uVar1 * 2 + (longlong)param_1) = 0;
    return param_1;
  }
  uVar2 = uVar1 | 7;
  if (uVar2 < 0x7fffffffffffffff) {
    if (uVar2 < 10) {
      uVar2 = 10;
    }
    if (0x7fffffffffffffff < uVar2 + 1) goto LAB_180034b3e;
    sVar4 = (uVar2 + 1) * 2;
    if (sVar4 == 0) goto LAB_180034afb;
  }
  else {
    sVar4 = 0xfffffffffffffffe;
    uVar2 = 0x7ffffffffffffffe;
  }
  if (sVar4 < 0x1000) {
    _Dst = (void *)FUN_18006d620(sVar4);
  }
  else {
    if (sVar4 + 0x27 <= sVar4) {
LAB_180034b3e:
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
    lVar3 = FUN_18006d620(sVar4 + 0x27);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    _Dst = (void *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)((longlong)_Dst - 8) = lVar3;
  }
LAB_180034afb:
  param_1[2] = uVar1;
  *param_1 = _Dst;
  param_1[3] = uVar2;
  memcpy(_Dst,_Src,uVar1 * 2);
  *(undefined2 *)(uVar1 * 2 + (longlong)_Dst) = 0;
  return param_1;
}



// ============================================================
// INDEX: 154/227
// FUNCTION: FUN_180036790
// ENTRY: 180036790
// RVA: 0x36790
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180036790(undefined4 * param_1, longlong param_2, ulonglong param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_180036790(undefined4 *param_1,longlong param_2,ulonglong param_3)

{
  int *piVar1;
  byte bVar2;
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  void *pvVar16;
  undefined1 auStackY_4b8 [32];
  undefined4 *puStack_478;
  undefined8 uStack_470;
  longlong alStack_468 [3];
  longlong lStack_450;
  undefined8 uStack_448;
  ulonglong uStack_440;
  ulonglong uStack_438;
  longlong alStack_430 [3];
  undefined **ppuStack_418;
  undefined8 uStack_410;
  void *pvStack_408;
  undefined1 uStack_400;
  undefined7 uStack_3ff;
  ulonglong uStack_3f8;
  ulonglong uStack_3f0;
  void *pvStack_3e8;
  undefined1 (*pauStack_3e0) [32];
  ulonglong uStack_3d8;
  ulonglong uStack_3d0;
  undefined1 *apuStack_3c8 [2];
  void *pvStack_3b8;
  undefined8 uStack_3b0;
  ulonglong uStack_3a8;
  ulonglong uStack_3a0;
  float afStack_398 [16];
  undefined **ppuStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  ulonglong uStack_340;
  ulonglong uStack_338;
  ulonglong uStack_330;
  void *pvStack_328;
  undefined1 (*pauStack_320) [32];
  ulonglong uStack_318;
  undefined4 uStack_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined1 auStack_288 [32];
  undefined8 auStack_268 [18];
  undefined **ppuStack_1d8;
  void *pvStack_1d0;
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong uStack_1b8;
  ulonglong uStack_1b0;
  void *pvStack_1a8;
  undefined1 (*pauStack_1a0) [32];
  ulonglong uStack_198;
  undefined8 ***pppuStack_188;
  longlong lStack_180;
  undefined8 uStack_178;
  ulonglong auStack_170 [5];
  char acStack_148 [8];
  undefined1 uStack_140;
  undefined7 uStack_13f;
  longlong *plStack_138;
  undefined8 uStack_130;
  ulonglong auStack_128 [9];
  char acStack_e0 [72];
  char acStack_98 [8];
  undefined1 auStack_90 [72];
  ulonglong uStack_48;
  
  uStack_48 = DAT_18008d040 ^ (ulonglong)auStackY_4b8;
  puStack_478 = param_1;
  if (0x40 < param_3) {
    puVar12 = FUN_180004170((undefined4 *)acStack_98,param_2);
    puVar14 = FUN_1800208c0(&lStack_450,"toml::parse_inline_table: recursion limit (64) exceeded");
    FUN_1800051f0((undefined8 *)afStack_398,puVar14,puVar12);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(afStack_398,(ThrowInfo *)&DAT_180088d60);
  }
  pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
  auStack_170[0] = 0;
  auStack_170[1] = 0;
  auStack_170[2] = 0;
  auStack_170[3] = 0;
  auStack_170[4] = 0;
  pppuStack_188 = (undefined8 ***)0x0;
  lStack_180 = 0;
  uStack_178 = 0;
  lStack_180 = FUN_18006d620(0x78);
  *(longlong *)lStack_180 = lStack_180;
  *(longlong *)(lStack_180 + 8) = lStack_180;
  auStack_170[0] = 0;
  auStack_170[1] = 0;
  auStack_170[2] = 0;
  auStack_170[3] = 7;
  auStack_170[4] = 8;
  pppuStack_188 = (undefined8 ***)CONCAT44(pppuStack_188._4_4_,0x3f800000);
  FUN_180024cd0(auStack_170,0x10,lStack_180);
  pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
  if ((pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) || ((*pauVar4)[0] != '{')
     ) {
    alStack_430[0] = 0;
    alStack_430[1] = 0;
    alStack_430[2] = 0;
    puVar12 = FUN_180004170((undefined4 *)&ppuStack_418,param_2);
    uStack_2f8 = *puVar12;
    uStack_2f4 = puVar12[1];
    uStack_2f0 = puVar12[2];
    uStack_2e8 = *(undefined8 *)(puVar12 + 4);
    uStack_2e0 = *(undefined8 *)(puVar12 + 6);
    uStack_2d8 = *(undefined8 *)(puVar12 + 8);
    uStack_2d0 = *(undefined8 *)(puVar12 + 10);
    *(undefined8 *)(puVar12 + 10) = 0xf;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined1 *)(puVar12 + 4) = 0;
    uStack_2c8 = *(undefined8 *)(puVar12 + 0xc);
    uStack_2c0 = *(undefined8 *)(puVar12 + 0xe);
    uStack_2b8 = *(undefined8 *)(puVar12 + 0x10);
    uStack_2b0 = *(undefined8 *)(puVar12 + 0x12);
    *(undefined8 *)(puVar12 + 0x12) = 0xf;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    uStack_2a8 = 0;
    uStack_2a0 = 0;
    uStack_298 = 0;
    uStack_290 = 0;
    FUN_180027650(&uStack_2a8,"the next token is not an inline table",0x25);
    puStack_478 = &uStack_2f8;
    apuStack_3c8[0] = auStack_288;
    alStack_468[0] = 0;
    alStack_468[1] = 0;
    alStack_468[2] = 0;
    FUN_18002c400(alStack_468,1,&puStack_478,apuStack_3c8);
    pvStack_3b8 = (void *)0x0;
    uStack_3b0 = 0;
    uStack_3a8 = 0;
    uStack_3a0 = 0;
    FUN_180027650(&pvStack_3b8,"toml::parse_inline_table: ",0x1a);
    plVar15 = FUN_1800042c0(&lStack_450,(char *)&pvStack_3b8,alStack_468,alStack_430);
    lVar9 = *plVar15;
    lVar5 = plVar15[1];
    lVar6 = plVar15[2];
    lVar7 = plVar15[3];
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    *(undefined1 *)param_1 = 0;
    *(longlong *)(param_1 + 2) = lVar9;
    *(longlong *)(param_1 + 4) = lVar5;
    *(longlong *)(param_1 + 6) = lVar6;
    *(longlong *)(param_1 + 8) = lVar7;
    if (0xf < uStack_438) {
      pvVar8 = (void *)CONCAT71(lStack_450._1_7_,(undefined1)lStack_450);
      pvVar16 = pvVar8;
      if ((0xfff < uStack_438 + 1) &&
         (pvVar16 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    uStack_440 = _DAT_18007c620;
    uStack_438 = _UNK_18007c628;
    lStack_450._0_1_ = 0;
    if (0xf < uStack_3a0) {
      pvVar16 = pvStack_3b8;
      if ((0xfff < uStack_3a0 + 1) &&
         (pvVar16 = *(void **)((longlong)pvStack_3b8 + -8),
         0x1f < (ulonglong)((longlong)pvStack_3b8 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    uStack_3a8 = _DAT_18007c620;
    uStack_3a0 = _UNK_18007c628;
    pvStack_3b8 = (void *)((ulonglong)pvStack_3b8 & 0xffffffffffffff00);
    FUN_180022b20(alStack_468);
    _eh_vector_destructor_iterator_(&uStack_2f8,0x70,1,FUN_180006d60);
    if (0xf < uStack_3d0) {
      pvVar16 = pvStack_3e8;
      if ((0xfff < uStack_3d0 + 1) &&
         (pvVar16 = *(void **)((longlong)pvStack_3e8 + -8),
         0x1f < (ulonglong)((longlong)pvStack_3e8 + (-8 - (longlong)pvVar16)))) goto LAB_180037163;
      FUN_18006d9d4(pvVar16);
    }
    uStack_3d8 = _DAT_18007c620;
    uStack_3d0 = _UNK_18007c628;
    pvStack_3e8 = (void *)((ulonglong)pvStack_3e8 & 0xffffffffffffff00);
    if (0xf < uStack_3f0) {
      pvVar16 = pvStack_408;
      if ((0xfff < uStack_3f0 + 1) &&
         (pvVar16 = *(void **)((longlong)pvStack_408 + -8),
         0x1f < (ulonglong)((longlong)pvStack_408 + (-8 - (longlong)pvVar16)))) {
LAB_180037163:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    uStack_3f8 = _DAT_18007c620;
    uStack_3f0 = _UNK_18007c628;
    pvStack_408 = (void *)((ulonglong)pvStack_408 & 0xffffffffffffff00);
    FUN_180022bf0(alStack_430);
  }
  else {
    lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
    FUN_1800228e0(acStack_98,param_2);
    if (acStack_98[0] != '\0') {
      FUN_180003d10((longlong)auStack_90);
    }
    pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
    if (pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) {
LAB_180037209:
      FUN_180003310(param_2,pauVar3);
      puVar12 = FUN_180004170(&uStack_2f8,param_2);
      FUN_1800205d0(alStack_430);
      puVar13 = FUN_180004170((undefined4 *)acStack_98,param_2);
      FUN_180026f20(afStack_398,puVar13,"should be closed");
      puVar14 = FUN_18001f5f0(apuStack_3c8,afStack_398,&pvStack_328);
      puStack_478 = (undefined4 *)*puVar14;
      uStack_470 = puVar14[1];
      FUN_18001fb60(alStack_468,(longlong *)&puStack_478);
      FUN_1800208c0(&lStack_450,"toml::parse_inline_table: inline table did not closed by `}`");
      plVar15 = FUN_1800042c0((longlong *)&pvStack_3b8,(char *)&lStack_450,alStack_468,alStack_430);
      FUN_1800051f0(auStack_268,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088d60);
    }
    if ((*pauVar4)[0] != '}') {
      do {
        FUN_180045340((longlong **)acStack_148,param_2,param_3 + 1);
        if (acStack_148[0] == '\0') {
          FUN_180020900(&lStack_450,(undefined8 *)&uStack_140);
          *(undefined1 *)param_1 = 0;
          *(ulonglong *)(param_1 + 2) = CONCAT71(lStack_450._1_7_,(undefined1)lStack_450);
          *(undefined8 *)(param_1 + 4) = uStack_448;
          *(ulonglong *)(param_1 + 6) = uStack_440;
          *(ulonglong *)(param_1 + 8) = uStack_438;
          if (acStack_148[0] == '\0') {
            if (0xf < auStack_128[0]) {
              pvVar8 = (void *)CONCAT71(uStack_13f,uStack_140);
              pvVar16 = pvVar8;
              if ((0xfff < auStack_128[0] + 1) &&
                 (pvVar16 = *(void **)((longlong)pvVar8 + -8),
                 0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) {
LAB_180036ea0:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
LAB_180036de2:
              FUN_18006d9d4(pvVar16);
            }
LAB_180036de7:
            uStack_130 = 0;
            auStack_128[0] = 0xf;
            uStack_140 = 0;
          }
          else {
LAB_180036d92:
            FUN_180043080((longlong *)&uStack_140);
          }
          goto LAB_18003718a;
        }
        pppuVar10 = (undefined ***)FUN_180006cd0(&ppuStack_418,(longlong)auStack_128);
        FUN_180038500((undefined1 *)&ppuStack_1d8,&pppuStack_188,acStack_e0,
                      (longlong *)CONCAT71(uStack_13f,uStack_140),plStack_138,pppuVar10,'\0');
        if ((char)ppuStack_1d8 == '\0') {
          puVar12 = FUN_180004170(&uStack_2f8,param_2);
          pcVar11 = FUN_180019ab0((char *)&ppuStack_1d8);
          puVar14 = FUN_180043d90(&lStack_450,param_2,(undefined8 *)pcVar11);
          FUN_180005460(auStack_268,puVar14,puVar12);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088e60);
        }
        FUN_180040aa0(acStack_98,param_2);
        if (acStack_98[0] == '\0') {
          FUN_1800228e0((char *)&ppuStack_418,param_2);
          if ((char)ppuStack_418 != '\0') {
            FUN_180003d10((longlong)&uStack_410);
          }
          pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
          if (pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) {
            puVar12 = FUN_180004170(&uStack_2f8,param_2);
            FUN_1800205d0(alStack_430);
            puVar13 = FUN_180004170((undefined4 *)&ppuStack_418,param_2);
            FUN_180026f20(afStack_398,puVar13,"should be `}`");
            puVar14 = FUN_18001f5f0(apuStack_3c8,afStack_398,&pvStack_328);
            puStack_478 = (undefined4 *)*puVar14;
            uStack_470 = puVar14[1];
            FUN_18001fb60(alStack_468,(longlong *)&puStack_478);
            FUN_1800208c0(&lStack_450,"toml::parse_inline_table: missing table separator `}` ");
            plVar15 = FUN_1800042c0((longlong *)&pvStack_3b8,(char *)&lStack_450,alStack_468,
                                    alStack_430);
            FUN_1800051f0(auStack_268,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088d60);
          }
          bVar2 = (*pauVar4)[0];
          if (bVar2 != 0x7d) {
            if ((bVar2 < 0x24) && ((0x800002400U >> ((longlong)(char)bVar2 & 0x3fU) & 1) != 0)) {
              puVar12 = FUN_180004170(&uStack_2f8,param_2);
              FUN_1800205d0(alStack_430);
              puVar13 = FUN_180004170((undefined4 *)&ppuStack_418,param_2);
              FUN_180026f20(afStack_398,puVar13,"should be `}`");
              puVar14 = FUN_18001f5f0(apuStack_3c8,afStack_398,&pvStack_328);
              puStack_478 = (undefined4 *)*puVar14;
              uStack_470 = puVar14[1];
              FUN_18001fb60(alStack_468,(longlong *)&puStack_478);
              FUN_1800208c0(&lStack_450,"toml::parse_inline_table: missing curly brace `}`");
              plVar15 = FUN_1800042c0((longlong *)&pvStack_3b8,(char *)&lStack_450,alStack_468,
                                      alStack_430);
              FUN_1800051f0(auStack_268,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088d60);
            }
            puVar12 = FUN_180004170(&uStack_2f8,param_2);
            FUN_1800205d0(alStack_430);
            puVar13 = FUN_180004170((undefined4 *)&ppuStack_418,param_2);
            FUN_180026f20(afStack_398,puVar13,"should be `,`");
            puVar14 = FUN_18001f5f0(apuStack_3c8,afStack_398,&pvStack_328);
            puStack_478 = (undefined4 *)*puVar14;
            uStack_470 = puVar14[1];
            FUN_18001fb60(alStack_468,(longlong *)&puStack_478);
            FUN_1800208c0(&lStack_450,"toml::parse_inline_table: missing table separator `,` ");
            plVar15 = FUN_1800042c0((longlong *)&pvStack_3b8,(char *)&lStack_450,alStack_468,
                                    alStack_430);
            FUN_1800051f0(auStack_268,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088d60);
          }
          lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
          uStack_318 = *(longlong *)(param_2 + 0x40) + 1;
          *(ulonglong *)(param_2 + 0x40) = uStack_318;
          ppuStack_418 = toml::detail::region::vftable;
          if (*(longlong *)(param_2 + 0x10) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          uStack_410 = *(undefined8 *)(param_2 + 8);
          pvStack_408 = *(void **)(param_2 + 0x10);
          FUN_180020900((undefined8 *)&uStack_400,(undefined8 *)(param_2 + 0x20));
          pauStack_3e0 = pauVar3;
          uStack_3d8 = uStack_318;
          FUN_1800409f0(afStack_398,(float *)&pppuStack_188);
          ppuStack_358 = toml::detail::region::vftable;
          uStack_350 = uStack_410;
          uStack_348 = pvStack_408;
          uStack_410 = 0;
          pvStack_408 = (void *)0x0;
          uStack_340 = CONCAT71(uStack_3ff,uStack_400);
          uStack_338 = uStack_3f8;
          uStack_330 = uStack_3f0;
          pvStack_328 = pvStack_3e8;
          uStack_3f0 = 0;
          pvStack_3e8 = (void *)0xf;
          uStack_400 = 0;
          pauStack_320 = pauVar3;
          FUN_18003cee0(&uStack_2f8,afStack_398);
          *(undefined1 *)param_1 = 1;
          FUN_18003cee0(param_1 + 2,&uStack_2f8);
          FUN_180003d10((longlong)&uStack_2b8);
          FUN_180024e20((longlong)&uStack_2f8);
          FUN_180003d10((longlong)&ppuStack_358);
          FUN_180024e20((longlong)afStack_398);
          if (acStack_98[0] != '\0') {
            FUN_180003d10((longlong)auStack_90);
          }
          if ((char)ppuStack_1d8 == '\0') {
            if (0xf < uStack_1b8) {
              pvVar16 = pvStack_1d0;
              if ((0xfff < uStack_1b8 + 1) &&
                 (pvVar16 = *(void **)((longlong)pvStack_1d0 + -8),
                 0x1f < (ulonglong)((longlong)pvStack_1d0 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18006d9d4(pvVar16);
            }
            uStack_1c0 = 0;
            uStack_1b8 = 0xf;
            pvStack_1d0 = (void *)((ulonglong)pvStack_1d0 & 0xffffffffffffff00);
          }
          if (acStack_148[0] != '\0') goto LAB_180036d92;
          if (0xf < auStack_128[0]) {
            pvVar8 = (void *)CONCAT71(uStack_13f,uStack_140);
            pvVar16 = pvVar8;
            if ((0xfff < auStack_128[0] + 1) &&
               (pvVar16 = *(void **)((longlong)pvVar8 + -8),
               0x1f < (ulonglong)
                      ((longlong)pvVar8 + (-8 - (longlong)*(void **)((longlong)pvVar8 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_180036de2;
          }
          goto LAB_180036de7;
        }
        FUN_1800228e0((char *)&ppuStack_418,param_2);
        if ((char)ppuStack_418 != '\0') {
          FUN_180003d10((longlong)&uStack_410);
        }
        if ((*(char **)(param_2 + 0x40) != *(char **)(*(longlong *)(param_2 + 8) + 8)) &&
           (**(char **)(param_2 + 0x40) == '}')) {
          puVar12 = FUN_180004170((undefined4 *)&ppuStack_418,param_2);
          FUN_1800205d0(alStack_430);
          puVar13 = FUN_180004170(&uStack_2f8,param_2);
          FUN_180026f20(afStack_398,puVar13,"should be `}`");
          puVar14 = FUN_18001f5f0(apuStack_3c8,afStack_398,&pvStack_328);
          puStack_478 = (undefined4 *)*puVar14;
          uStack_470 = puVar14[1];
          FUN_18001fb60(alStack_468,(longlong *)&puStack_478);
          FUN_1800208c0(&lStack_450,
                        "toml::parse_inline_table: trailing comma is not allowed in an inline table"
                       );
          plVar15 = FUN_1800042c0((longlong *)&pvStack_3b8,(char *)&lStack_450,alStack_468,
                                  alStack_430);
          FUN_1800051f0(auStack_268,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(auStack_268,(ThrowInfo *)&DAT_180088d60);
        }
        if (acStack_98[0] != '\0') {
          FUN_180003d10((longlong)auStack_90);
        }
        if ((char)ppuStack_1d8 == '\0') {
          if (0xf < uStack_1b8) {
            pvVar16 = pvStack_1d0;
            if ((0xfff < uStack_1b8 + 1) &&
               (pvVar16 = *(void **)((longlong)pvStack_1d0 + -8),
               0x1f < (ulonglong)((longlong)pvStack_1d0 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar16);
          }
          uStack_1c0 = 0;
          uStack_1b8 = 0xf;
          pvStack_1d0 = (void *)((ulonglong)pvStack_1d0 & 0xffffffffffffff00);
        }
        if (acStack_148[0] == '\0') {
          if (0xf < auStack_128[0]) {
            pvVar8 = (void *)CONCAT71(uStack_13f,uStack_140);
            pvVar16 = pvVar8;
            if ((0xfff < auStack_128[0] + 1) &&
               (pvVar16 = *(void **)((longlong)pvVar8 + -8),
               0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) goto LAB_180036ea0;
            FUN_18006d9d4(pvVar16);
          }
        }
        else {
          FUN_180043080((longlong *)&uStack_140);
        }
      } while (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8));
      goto LAB_180037209;
    }
    lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
    uStack_318 = *(longlong *)(param_2 + 0x40) + 1;
    *(ulonglong *)(param_2 + 0x40) = uStack_318;
    ppuStack_1d8 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    pvStack_1d0 = *(void **)(param_2 + 8);
    uStack_1c8 = *(undefined8 *)(param_2 + 0x10);
    FUN_180020900(&uStack_1c0,(undefined8 *)(param_2 + 0x20));
    pauStack_1a0 = pauVar3;
    uStack_198 = uStack_318;
    FUN_1800409f0(afStack_398,(float *)&pppuStack_188);
    ppuStack_358 = toml::detail::region::vftable;
    uStack_350 = pvStack_1d0;
    uStack_348 = uStack_1c8;
    pvStack_1d0 = (void *)0x0;
    uStack_1c8 = 0;
    uStack_340 = uStack_1c0;
    uStack_338 = uStack_1b8;
    uStack_330 = uStack_1b0;
    pvStack_328 = pvStack_1a8;
    uStack_1b0 = 0;
    pvStack_1a8 = (void *)0xf;
    uStack_1c0 = uStack_1c0 & 0xffffffffffffff00;
    pauStack_320 = pauVar3;
    FUN_18003cee0(&uStack_2f8,afStack_398);
    *(undefined1 *)param_1 = 1;
    FUN_18003cee0(param_1 + 2,&uStack_2f8);
    FUN_180003d10((longlong)&uStack_2b8);
    FUN_180024e20((longlong)&uStack_2f8);
    FUN_180003d10((longlong)&ppuStack_358);
    FUN_180024e20((longlong)afStack_398);
  }
LAB_18003718a:
  FUN_180024e20((longlong)&pppuStack_188);
  return param_1;
}



// ============================================================
// INDEX: 155/227
// FUNCTION: FUN_180037890
// ENTRY: 180037890
// RVA: 0x37890
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined * * * FUN_180037890(undefined * * * param_1, longlong param_2)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *** FUN_180037890(undefined ***param_1,longlong param_2)

{
  byte bVar1;
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  void *pvVar4;
  int iVar5;
  undefined4 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 ****ppppuVar9;
  void *pvVar10;
  undefined8 *puVar11;
  size_t sVar12;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined1 auStackY_368 [32];
  undefined ***local_328 [2];
  undefined8 local_318;
  undefined **ppuStack_310;
  undefined **local_308;
  undefined **ppuStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  undefined8 uStack_2d0;
  undefined **local_2c8;
  undefined **ppuStack_2c0;
  void *local_2b0;
  undefined8 uStack_2a8;
  undefined **local_2a0;
  undefined **ppuStack_298;
  undefined **local_290;
  undefined **ppuStack_288;
  undefined **local_280;
  undefined **ppuStack_278;
  longlong local_270 [3];
  undefined8 local_258;
  undefined **local_248;
  void *local_240;
  void *pvStack_238;
  undefined8 local_230;
  undefined **local_228;
  undefined **ppuStack_220;
  undefined1 local_218;
  undefined7 uStack_217;
  longlong local_210;
  undefined **local_208;
  undefined **ppuStack_200;
  undefined8 ***local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  ulonglong auStack_1c0 [5];
  longlong local_198;
  undefined1 local_190;
  undefined7 uStack_18f;
  undefined **local_188;
  undefined **ppuStack_180;
  ulonglong local_178;
  undefined8 local_158;
  uint local_150;
  undefined4 uStack_14c;
  longlong *local_148;
  undefined8 uStack_140;
  ulonglong local_138;
  void *pvStack_130;
  void *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined **local_f8;
  longlong lStack_f0;
  undefined1 local_e8 [64];
  char local_a8 [8];
  undefined1 local_a0 [72];
  ulonglong local_58;
  size_t sVar13;
  
  local_58 = DAT_18008d040 ^ (ulonglong)auStackY_368;
  local_328[0] = param_1;
  if (*(longlong *)(param_2 + 0x40) == *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
    local_308 = (undefined **)0x0;
    ppuStack_310 = (undefined **)FUN_18006d620(0x78);
    *ppuStack_310 = (undefined *)ppuStack_310;
    ppuStack_310[1] = (undefined *)ppuStack_310;
    ppuStack_300 = (undefined **)0x0;
    uStack_2f8 = 0;
    local_2f0 = 0;
    local_2e8 = 7;
    local_2e0 = 8;
    local_318._0_4_ = 1.0;
    FUN_180024cd0((ulonglong *)&ppuStack_300,0x10,ppuStack_310);
    FUN_180040900((undefined4 *)&local_198,(undefined4 *)&local_318);
    *(undefined1 *)param_1 = 1;
    FUN_180040900((undefined4 *)(param_1 + 1),(undefined4 *)&local_198);
    FUN_180024e20((longlong)&local_198);
    ppppuVar9 = (undefined8 ****)&local_318;
  }
  else {
    FUN_18001a800(local_a8,param_2);
    if (local_a8[0] != '\0') {
      FUN_180003d10((longlong)local_a0);
    }
    FUN_18001b6c0(local_a8,param_2);
    if (local_a8[0] != '\0') {
      FUN_180003d10((longlong)local_a0);
    }
    auStack_1c0[0] = 0;
    auStack_1c0[1] = 0;
    auStack_1c0[2] = 0;
    auStack_1c0[3] = 0;
    auStack_1c0[4] = 0;
    local_1d8 = (undefined8 ***)0x0;
    lStack_1d0 = 0;
    local_1c8 = 0;
    lStack_1d0 = FUN_18006d620(0x78);
    *(longlong *)lStack_1d0 = lStack_1d0;
    *(longlong *)(lStack_1d0 + 8) = lStack_1d0;
    auStack_1c0[0] = 0;
    auStack_1c0[1] = 0;
    auStack_1c0[2] = 0;
    auStack_1c0[3] = 7;
    auStack_1c0[4] = 8;
    local_1d8 = (undefined8 ***)CONCAT44(local_1d8._4_4_,0x3f800000);
    FUN_180024cd0(auStack_1c0,0x10,lStack_1d0);
    if (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
LAB_180037a70:
      FUN_18001b6c0((undefined1 *)&local_248,param_2);
      if ((char)local_248 != '\0') {
        FUN_180003d10((longlong)&local_240);
      }
      pauVar2 = *(undefined1 (**) [32])(param_2 + 0x40);
      FUN_180017b20((undefined1 *)&local_248,param_2);
      if ((char)local_248 == '\0') {
        if ((undefined **)0xf < local_228) {
          pvVar10 = local_240;
          if ((0xfff < (longlong)local_228 + 1U) &&
             (pvVar10 = *(void **)((longlong)local_240 + -8),
             0x1f < (ulonglong)((longlong)local_240 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar10);
        }
        FUN_180017010((undefined1 *)&local_248,param_2);
        if ((char)local_248 != '\0') {
          pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
          if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
            lVar8 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
          }
          else {
            lVar8 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar8;
          }
          *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
          FUN_1800409f0((float *)&local_318,(float *)&local_1d8);
          *(undefined1 *)param_1 = 1;
          FUN_180040900((undefined4 *)(param_1 + 1),(undefined4 *)&local_318);
          FUN_180024e20((longlong)&local_318);
          if ((char)local_248 == '\0') {
            if ((undefined **)0xf < local_228) {
              pvVar10 = local_240;
              if ((0xfff < (longlong)local_228 + 1U) &&
                 (pvVar10 = *(void **)((longlong)local_240 + -8),
                 0x1f < (ulonglong)
                        ((longlong)local_240 + (-8 - (longlong)*(void **)((longlong)local_240 + -8))
                        ))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              goto LAB_18003843b;
            }
            goto LAB_180038440;
          }
          goto LAB_1800383eb;
        }
        if ((undefined **)0xf < local_228) {
          pvVar10 = local_240;
          if ((0xfff < (longlong)local_228 + 1U) &&
             (pvVar10 = *(void **)((longlong)local_240 + -8),
             0x1f < (ulonglong)((longlong)local_240 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar10);
        }
        FUN_180045340((longlong **)&local_158,param_2,0);
        if ((char)local_158 == '\0') {
          FUN_180020900(&local_318,(undefined8 *)&local_150);
          *(undefined1 *)param_1 = 0;
          param_1[1] = (undefined **)CONCAT44(local_318._4_4_,(float)local_318);
          param_1[2] = ppuStack_310;
          param_1[3] = local_308;
          param_1[4] = ppuStack_300;
          if ((char)local_158 == '\0') {
            if (0xf < local_138) {
              pvVar4 = (void *)CONCAT44(uStack_14c,local_150);
              pvVar10 = pvVar4;
              if ((0xfff < local_138 + 1) &&
                 (pvVar10 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
LAB_180038382:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
LAB_1800382f0:
              FUN_18006d9d4(pvVar10);
            }
LAB_1800382f5:
            uStack_140 = 0;
            local_138 = 0xf;
            local_150 = local_150 & 0xffffff00;
          }
          else {
LAB_1800382a0:
            FUN_180043080((longlong *)&local_150);
          }
        }
        else {
          local_328[0] = &local_248;
          local_248 = toml::detail::region::vftable;
          if (local_128 != (void *)0x0) {
            LOCK();
            *(int *)((longlong)local_128 + 8) = *(int *)((longlong)local_128 + 8) + 1;
            UNLOCK();
          }
          local_240 = pvStack_130;
          pvStack_238 = local_128;
          FUN_180020900(&local_230,&uStack_120);
          local_210 = lStack_100;
          local_208 = local_f8;
          FUN_180038500((undefined1 *)&local_198,&local_1d8,(char *)&lStack_f0,
                        (longlong *)CONCAT44(uStack_14c,local_150),local_148,&local_248,'\0');
          if ((char)local_198 == '\0') {
            FUN_180020900(&local_318,(undefined8 *)&local_190);
            *(undefined1 *)param_1 = 0;
            param_1[1] = (undefined **)CONCAT44(local_318._4_4_,(float)local_318);
            param_1[2] = ppuStack_310;
            param_1[3] = local_308;
            param_1[4] = ppuStack_300;
            if ((char)local_198 == '\0') {
              if (0xf < local_178) {
                pvVar4 = (void *)CONCAT71(uStack_18f,local_190);
                pvVar10 = pvVar4;
                if ((0xfff < local_178 + 1) &&
                   (pvVar10 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar10);
              }
              ppuStack_180 = (undefined **)0x0;
              local_178 = 0xf;
              local_190 = 0;
            }
            if ((char)local_158 == '\0') {
              if (0xf < local_138) {
                pvVar4 = (void *)CONCAT44(uStack_14c,local_150);
                pvVar10 = pvVar4;
                if ((0xfff < local_138 + 1) &&
                   (pvVar10 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)
                          ((longlong)pvVar4 + (-8 - (longlong)*(void **)((longlong)pvVar4 + -8)))))
                {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_1800382f0;
              }
              goto LAB_1800382f5;
            }
            goto LAB_1800382a0;
          }
          if ((char)local_158 == '\0') {
            if (0xf < local_138) {
              pvVar4 = (void *)CONCAT44(uStack_14c,local_150);
              pvVar10 = pvVar4;
              if ((0xfff < local_138 + 1) &&
                 (pvVar10 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10))))
              goto LAB_180038382;
              FUN_18006d9d4(pvVar10);
            }
          }
          else {
            FUN_180043080((longlong *)&local_150);
          }
          FUN_18001b6c0((undefined1 *)&local_248,param_2);
          if ((char)local_248 != '\0') {
            FUN_180003d10((longlong)&local_240);
          }
          FUN_180031590(&local_248,param_2);
          if ((char)local_248 != '\0') {
            FUN_180003d10((longlong)&local_240);
          }
          FUN_18001a800(local_a8,param_2);
          if ((local_a8[0] != '\0') ||
             (pauVar2 = *(undefined1 (**) [32])(param_2 + 0x40),
             pauVar2 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)))
          goto LAB_180037cb6;
          FUN_18001b6c0((undefined1 *)&local_248,param_2);
          if ((char)local_248 != '\0') {
            FUN_180003d10((longlong)&local_240);
          }
          local_290 = (undefined **)0x0;
          ppuStack_288 = (undefined **)0x0;
          local_280 = (undefined **)0x0;
          puVar6 = FUN_180004170((undefined4 *)&local_248,param_2);
          bVar1 = **(byte **)(param_2 + 0x40);
          iVar5 = isgraph((uint)bVar1);
          if (iVar5 == 0) {
            local_258 = (undefined1 *)((ulonglong)local_258 & 0xffffff0000000000);
            FUN_180001db0(&local_258,5,"0x%02x",(ulonglong)bVar1);
            local_2d8 = (void *)0x0;
            uStack_2d0 = 0;
            local_2c8 = (undefined **)0x0;
            ppuStack_2c0 = (undefined **)0x0;
            sVar13 = 0xffffffffffffffff;
            do {
              sVar12 = sVar13 + 1;
              lVar8 = sVar13 + 1;
              sVar13 = sVar12;
            } while (*(char *)((longlong)&local_258 + lVar8) != '\0');
            puVar11 = &local_258;
            FUN_180027650(&local_2d8,puVar11,sVar12);
          }
          else {
            puVar11 = (undefined8 *)0x1;
            FUN_1800207b0(&local_2d8,1,bVar1);
          }
          plVar7 = FUN_180043b60(&local_318,puVar11,(char *)&local_2d8);
          local_158._0_4_ = *puVar6;
          local_158._4_4_ = puVar6[1];
          local_150 = puVar6[2];
          local_148 = *(longlong **)(puVar6 + 4);
          uStack_140 = *(undefined8 *)(puVar6 + 6);
          local_138 = *(ulonglong *)(puVar6 + 8);
          pvStack_130 = *(void **)(puVar6 + 10);
          *(undefined8 *)(puVar6 + 10) = 0xf;
          *(undefined8 *)(puVar6 + 8) = 0;
          *(undefined1 *)(puVar6 + 4) = 0;
          local_128 = *(void **)(puVar6 + 0xc);
          uStack_120 = *(undefined8 *)(puVar6 + 0xe);
          local_118 = *(undefined8 *)(puVar6 + 0x10);
          uStack_110 = *(undefined8 *)(puVar6 + 0x12);
          *(undefined8 *)(puVar6 + 0x12) = 0xf;
          *(undefined8 *)(puVar6 + 0x10) = 0;
          *(undefined1 *)(puVar6 + 0xc) = 0;
          local_108 = *plVar7;
          lStack_100 = plVar7[1];
          local_f8 = (undefined **)plVar7[2];
          lStack_f0 = plVar7[3];
          plVar7[2] = 0;
          plVar7[3] = 0xf;
          *(undefined1 *)plVar7 = 0;
          local_328[0] = (undefined ***)&local_158;
          local_258 = local_e8;
          local_270[0] = 0;
          local_270[1] = 0;
          local_270[2] = 0;
          FUN_18002c400(local_270,1,local_328,&local_258);
          local_2b0 = (void *)0x0;
          uStack_2a8 = 0;
          local_2a0 = (undefined **)0x0;
          ppuStack_298 = (undefined **)0x0;
          FUN_180027650(&local_2b0,"toml::parse_table: invalid line format",0x26);
          FUN_1800042c0(&local_198,(char *)&local_2b0,local_270,(longlong *)&local_290);
          if (0xf < ppuStack_298) {
            pvVar10 = local_2b0;
            if ((0xfff < (longlong)ppuStack_298 + 1U) &&
               (pvVar10 = *(void **)((longlong)local_2b0 + -8),
               0x1f < (ulonglong)((longlong)local_2b0 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          ppuVar15 = _UNK_18007c628;
          ppuVar14 = _DAT_18007c620;
          local_2a0 = _DAT_18007c620;
          ppuStack_298 = _UNK_18007c628;
          local_2b0 = (void *)((ulonglong)local_2b0 & 0xffffffffffffff00);
          FUN_180022b20(local_270);
          _eh_vector_destructor_iterator_(&local_158,0x70,1,FUN_180006d60);
          if ((undefined **)0xf < ppuStack_300) {
            pvVar4 = (void *)CONCAT44(local_318._4_4_,(float)local_318);
            pvVar10 = pvVar4;
            if ((0xfff < (longlong)ppuStack_300 + 1U) &&
               (pvVar10 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          local_308 = ppuVar14;
          ppuStack_300 = ppuVar15;
          local_318._0_4_ = (float)((uint)(float)local_318 & 0xffffff00);
          if ((undefined **)0xf < ppuStack_2c0) {
            pvVar10 = local_2d8;
            if ((0xfff < (longlong)ppuStack_2c0 + 1U) &&
               (pvVar10 = *(void **)((longlong)local_2d8 + -8),
               0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          local_2c8 = ppuVar14;
          ppuStack_2c0 = ppuVar15;
          local_2d8 = (void *)((ulonglong)local_2d8 & 0xffffffffffffff00);
          if ((undefined **)0xf < ppuStack_200) {
            pvVar4 = (void *)CONCAT71(uStack_217,local_218);
            pvVar10 = pvVar4;
            if ((0xfff < (longlong)ppuStack_200 + 1U) &&
               (pvVar10 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) goto LAB_18003812c;
            FUN_18006d9d4(pvVar10);
          }
          local_208 = ppuVar14;
          ppuStack_200 = ppuVar15;
          local_218 = 0;
          if ((undefined **)0xf < ppuStack_220) {
            pvVar10 = pvStack_238;
            if ((0xfff < (longlong)ppuStack_220 + 1U) &&
               (pvVar10 = *(void **)((longlong)pvStack_238 + -8),
               0x1f < (ulonglong)((longlong)pvStack_238 + (-8 - (longlong)pvVar10)))) {
LAB_18003812c:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          local_228 = ppuVar14;
          ppuStack_220 = ppuVar15;
          pvStack_238 = (void *)((ulonglong)pvStack_238 & 0xffffffffffffff00);
          FUN_180022bf0((longlong *)&local_290);
          pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
          if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
            lVar8 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
          }
          else {
            lVar8 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar8;
          }
          *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
          FUN_180020900(&local_290,&local_198);
          *(undefined1 *)param_1 = 0;
          param_1[1] = local_290;
          param_1[2] = ppuStack_288;
          param_1[3] = local_280;
          param_1[4] = ppuStack_278;
          if ((undefined **)0xf < ppuStack_180) {
            pvVar4 = (void *)CONCAT71(local_198._1_7_,(char)local_198);
            pvVar10 = pvVar4;
            if ((0xfff < (longlong)ppuStack_180 + 1U) &&
               (pvVar10 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          local_188 = ppuVar14;
          ppuStack_180 = ppuVar15;
          local_198._0_1_ = '\0';
          if (local_a8[0] != '\0') {
            FUN_180003d10((longlong)local_a0);
          }
        }
      }
      else {
        pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
        if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
          lVar8 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar8;
        }
        else {
          lVar8 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar8;
        }
        *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
        FUN_1800409f0((float *)&local_318,(float *)&local_1d8);
        *(undefined1 *)param_1 = 1;
        FUN_180040900((undefined4 *)(param_1 + 1),(undefined4 *)&local_318);
        FUN_180024e20((longlong)&local_318);
        if ((char)local_248 == '\0') {
          if ((undefined **)0xf < local_228) {
            pvVar10 = local_240;
            if ((0xfff < (longlong)local_228 + 1U) &&
               (pvVar10 = *(void **)((longlong)local_240 + -8),
               0x1f < (ulonglong)((longlong)local_240 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
LAB_18003843b:
            FUN_18006d9d4(pvVar10);
          }
LAB_180038440:
          local_230 = 0;
          local_228 = (undefined **)0xf;
          local_240 = (void *)((ulonglong)local_240 & 0xffffffffffffff00);
        }
        else {
LAB_1800383eb:
          FUN_180003d10((longlong)&local_228);
          FUN_180022bf0((longlong *)&local_240);
        }
      }
      goto LAB_180037d43;
    }
LAB_180037d14:
    FUN_1800409f0((float *)&local_318,(float *)&local_1d8);
    *(undefined1 *)param_1 = 1;
    FUN_180040900((undefined4 *)(param_1 + 1),(undefined4 *)&local_318);
    FUN_180024e20((longlong)&local_318);
LAB_180037d43:
    ppppuVar9 = &local_1d8;
  }
  FUN_180024e20((longlong)ppppuVar9);
  return param_1;
LAB_180037cb6:
  FUN_18001b6c0((undefined1 *)&local_248,param_2);
  if ((char)local_248 != '\0') {
    FUN_180003d10((longlong)&local_240);
  }
  FUN_180031590(&local_248,param_2);
  if ((char)local_248 != '\0') {
    FUN_180003d10((longlong)&local_240);
  }
  if (local_a8[0] != '\0') {
    FUN_180003d10((longlong)local_a0);
  }
  if (*(longlong *)(param_2 + 0x40) == *(longlong *)(*(longlong *)(param_2 + 8) + 8))
  goto LAB_180037d14;
  goto LAB_180037a70;
}



// ============================================================
// INDEX: 156/227
// FUNCTION: FUN_18003a370
// ENTRY: 18003a370
// RVA: 0x3A370
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18003a370(undefined1 * param_1, basic_istream<char,std::char_traits<char>_> * param_2, longlong * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_18003a370(undefined1 *param_1,basic_istream<char,std::char_traits<char>_> *param_2,
             longlong *param_3)

{
  void *pvVar1;
  char *pcVar2;
  void *pvVar3;
  ulonglong _Size;
  undefined1 auStack_e8 [48];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_98;
  char *local_90;
  char *pcStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_18008d040 ^ (ulonglong)auStack_e8;
  local_98 = param_3;
  std::basic_istream<char,std::char_traits<char>_>::tellg(param_2);
  std::basic_istream<char,std::char_traits<char>_>::seekg(param_2,0,2);
  std::basic_istream<char,std::char_traits<char>_>::tellg(param_2);
  _Size = ((local_58 - CONCAT44(uStack_6c,uStack_70)) - CONCAT44(uStack_74,local_78)) + local_60;
  local_b8 = local_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  local_a8 = local_68;
  std::basic_istream<char,std::char_traits<char>_>::seekg(param_2,&local_b8);
  local_90 = (char *)0x0;
  pcStack_88 = (char *)0x0;
  local_80 = 0;
  if (_Size != 0) {
    FUN_1800319f0((ulonglong *)&local_90,_Size);
    pcVar2 = local_90 + _Size;
    memset(local_90,0,_Size);
    pcStack_88 = pcVar2;
  }
  std::basic_istream<char,std::char_traits<char>_>::read(param_2,local_90,_Size);
  FUN_180048cb0(param_1,(longlong *)&local_90,param_3);
  if (local_90 != (char *)0x0) {
    pcVar2 = local_90;
    if ((0xfff < (ulonglong)(local_80 - (longlong)local_90)) &&
       (pcVar2 = *(char **)(local_90 + -8), (char *)0x1f < local_90 + (-8 - (longlong)pcVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pcVar2);
    local_90 = (char *)0x0;
    pcStack_88 = (char *)0x0;
    local_80 = 0;
  }
  if (0xf < (ulonglong)param_3[3]) {
    pvVar1 = (void *)*param_3;
    pvVar3 = pvVar1;
    if ((0xfff < param_3[3] + 1U) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar3);
  }
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}



// ============================================================
// INDEX: 157/227
// FUNCTION: FUN_18003a510
// ENTRY: 18003a510
// RVA: 0x3A510
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18003a510(undefined1 * param_1, basic_istream<char,std::char_traits<char>_> * param_2, longlong * param_3, undefined8 * * * * * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 *
FUN_18003a510(undefined1 *param_1,basic_istream<char,std::char_traits<char>_> *param_2,
             longlong *param_3,undefined8 *****param_4)

{
  void *pvVar1;
  char *pcVar2;
  void *pvVar3;
  ulonglong _Size;
  undefined1 auStack_e8 [48];
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_98;
  char *local_90;
  char *pcStack_88;
  longlong local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_18008d040 ^ (ulonglong)auStack_e8;
  local_98 = param_3;
  std::basic_istream<char,std::char_traits<char>_>::tellg(param_2);
  std::basic_istream<char,std::char_traits<char>_>::seekg(param_2,0,2);
  std::basic_istream<char,std::char_traits<char>_>::tellg(param_2);
  _Size = ((local_58 - CONCAT44(uStack_6c,uStack_70)) - CONCAT44(uStack_74,local_78)) + local_60;
  local_b8 = local_78;
  uStack_b4 = uStack_74;
  uStack_b0 = uStack_70;
  uStack_ac = uStack_6c;
  local_a8 = local_68;
  std::basic_istream<char,std::char_traits<char>_>::seekg(param_2,&local_b8);
  local_90 = (char *)0x0;
  pcStack_88 = (char *)0x0;
  local_80 = 0;
  if (_Size != 0) {
    FUN_1800319f0((ulonglong *)&local_90,_Size);
    pcVar2 = local_90 + _Size;
    memset(local_90,0,_Size);
    pcStack_88 = pcVar2;
  }
  std::basic_istream<char,std::char_traits<char>_>::read(param_2,local_90,_Size);
  FUN_180048f80(param_1,(longlong *)&local_90,param_3,param_4);
  if (local_90 != (char *)0x0) {
    pcVar2 = local_90;
    if ((0xfff < (ulonglong)(local_80 - (longlong)local_90)) &&
       (pcVar2 = *(char **)(local_90 + -8), (char *)0x1f < local_90 + (-8 - (longlong)pcVar2))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pcVar2);
    local_90 = (char *)0x0;
    pcStack_88 = (char *)0x0;
    local_80 = 0;
  }
  if (0xf < (ulonglong)param_3[3]) {
    pvVar1 = (void *)*param_3;
    pvVar3 = pvVar1;
    if ((0xfff < param_3[3] + 1U) &&
       (pvVar3 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar3)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar3);
  }
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  return param_1;
}



// ============================================================
// INDEX: 158/227
// FUNCTION: FUN_18003aa40
// ENTRY: 18003aa40
// RVA: 0x3AA40
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18003aa40(longlong * param_1, char * param_2, undefined8 param_3, undefined1 * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18003aa40(longlong *param_1,char *param_2,undefined8 param_3,undefined1 *param_4)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_138;
  int iStack_12c;
  undefined *local_128;
  undefined **local_120;
  basic_ostream<char,std::char_traits<char>_> local_118 [16];
  longlong *local_108;
  longlong *local_100;
  longlong *local_e8;
  ulonglong *local_e0;
  int *local_d0;
  ulonglong local_b8;
  uint local_b0;
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_138 = param_1;
  memset(&local_128,0,0xe8);
  local_128 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a0);
  local_158 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_120,false);
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  local_120 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_b8 = 0;
  local_b0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_128,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  puVar1 = (ulonglong *)(param_2 + 0x10);
  if (0xf < *(ulonglong *)(param_2 + 0x18)) {
    param_2 = *(char **)param_2;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_128,param_2,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_128,"bad_cast to ");
  FUN_18004dea0((basic_ostream<char,std::char_traits<char>_> *)&local_128,*param_4);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_158 = 0x82;
  local_150 = 0;
  uStack_148 = 0;
  if ((((byte)local_b0 & 0x22) == 2) || (uVar4 = *local_e0, uVar4 == 0)) {
    if (((local_b0 & 4) == 0) && (*local_e8 != 0)) {
      pvVar2 = (void *)*local_108;
      sVar3 = ((longlong)*local_d0 - (longlong)pvVar2) + *local_e8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_100;
    if (uVar4 < local_b8) {
      uVar4 = local_b8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_118);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  return param_1;
}



// ============================================================
// INDEX: 159/227
// FUNCTION: FUN_18003cf80
// ENTRY: 18003cf80
// RVA: 0x3CF80
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18003cf80(longlong * param_1)
// ============================================================

void FUN_18003cf80(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  void *pvVar7;
  
  FUN_180022a30((char *)(param_1 + 4));
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    pvVar5 = (void *)*param_1;
    pvVar7 = pvVar5;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar7 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar7);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ============================================================
// INDEX: 160/227
// FUNCTION: FUN_18003eb00
// ENTRY: 18003eb00
// RVA: 0x3EB00
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18003eb00(undefined8 param_1, longlong * param_2, short * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18003eb00(undefined8 param_1,longlong *param_2,short *param_3)

{
  int iVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  undefined8 *puVar3;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar4;
  char cVar5;
  void *pvVar6;
  int iVar7;
  size_t sVar8;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_138;
  int iStack_12c;
  undefined *local_128;
  undefined **local_120;
  basic_ostream<char,std::char_traits<char>_> local_118 [16];
  longlong *local_108;
  longlong *local_100;
  longlong *local_e8;
  ulonglong *local_e0;
  int *local_d0;
  ulonglong local_b8;
  uint local_b0;
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  ulonglong local_38;
  ulonglong uVar9;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_138 = param_2;
  memset(&local_128,0,0xe8);
  local_128 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a0);
  local_158 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_120,false);
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  local_120 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_b8 = 0;
  local_b0 = 4;
  pbVar2 = FUN_18004a280((basic_ostream<char,std::char_traits<char>_> *)&local_128,param_3);
  pbVar2 = FUN_180026bf0(pbVar2,'T');
  pbVar2 = FUN_18004a0c0(pbVar2,(byte *)(param_3 + 2));
  if (((char)param_3[7] == '\0') && (*(char *)((longlong)param_3 + 0xf) == '\0')) {
    FUN_180026bf0(pbVar2,'Z');
  }
  else {
    iVar7 = (char)param_3[7] * 0x3c + (int)*(char *)((longlong)param_3 + 0xf);
    if (iVar7 < 0) {
      iVar1 = -iVar7;
      if (-iVar7 < 0) {
        iVar1 = iVar7;
      }
      iVar7 = iVar1;
      cVar5 = '-';
    }
    else {
      cVar5 = '+';
    }
    FUN_180026bf0(pbVar2,cVar5);
    pbVar2[(longlong)*(int *)(*(longlong *)pbVar2 + 4) + 0x58] =
         (basic_ostream<char,std::char_traits<char>_>)0x30;
    puVar3 = (undefined8 *)std::setw((__int64)&local_150);
    (*(code *)*puVar3)(pbVar2 + *(int *)(*(longlong *)pbVar2 + 4),puVar3[1]);
    pbVar4 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar7 / 0x3c);
    FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar4,':');
    pbVar2[(longlong)*(int *)(*(longlong *)pbVar2 + 4) + 0x58] =
         (basic_ostream<char,std::char_traits<char>_>)0x30;
    puVar3 = (undefined8 *)std::setw((__int64)&local_150);
    (*(code *)*puVar3)(pbVar2 + *(int *)(*(longlong *)pbVar2 + 4),puVar3[1]);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar7 % 0x3c);
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_158 = 10;
  local_150 = 0;
  uStack_148 = 0;
  if ((((byte)local_b0 & 0x22) == 2) || (uVar9 = *local_e0, uVar9 == 0)) {
    if (((local_b0 & 4) == 0) && (*local_e8 != 0)) {
      pvVar6 = (void *)*local_108;
      sVar8 = ((longlong)*local_d0 - (longlong)pvVar6) + *local_e8;
    }
    else {
      sVar8 = 0;
      pvVar6 = (void *)0x0;
    }
  }
  else {
    pvVar6 = (void *)*local_100;
    if (uVar9 < local_b8) {
      uVar9 = local_b8;
    }
    sVar8 = uVar9 - (longlong)pvVar6;
  }
  if (pvVar6 != (void *)0x0) {
    FUN_180022f50(param_2,pvVar6,sVar8);
  }
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_118);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  return param_2;
}



// ============================================================
// INDEX: 161/227
// FUNCTION: FUN_18003edd0
// ENTRY: 18003edd0
// RVA: 0x3EDD0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_18003edd0(undefined8 param_1, longlong * param_2, short * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_18003edd0(undefined8 param_1,longlong *param_2,short *param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_178 [32];
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  longlong *local_138;
  int iStack_12c;
  undefined *local_128;
  undefined **local_120;
  basic_ostream<char,std::char_traits<char>_> local_118 [16];
  longlong *local_108;
  longlong *local_100;
  longlong *local_e8;
  ulonglong *local_e0;
  int *local_d0;
  ulonglong local_b8;
  uint local_b0;
  basic_ios<char,std::char_traits<char>_> local_a0 [104];
  ulonglong local_38;
  ulonglong uVar4;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_178;
  local_158 = 0;
  local_138 = param_2;
  memset(&local_128,0,0xe8);
  local_128 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_a0);
  local_158 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_128,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_120,false);
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  local_120 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_b8 = 0;
  local_b0 = 4;
  pbVar1 = FUN_18004a280((basic_ostream<char,std::char_traits<char>_> *)&local_128,param_3);
  pbVar1 = FUN_180026bf0(pbVar1,'T');
  FUN_18004a0c0(pbVar1,(byte *)(param_3 + 2));
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0xf;
  *(undefined1 *)param_2 = 0;
  local_158 = 10;
  local_150 = 0;
  uStack_148 = 0;
  if ((((byte)local_b0 & 0x22) == 2) || (uVar4 = *local_e0, uVar4 == 0)) {
    if (((local_b0 & 4) == 0) && (*local_e8 != 0)) {
      pvVar2 = (void *)*local_108;
      sVar3 = ((longlong)*local_d0 - (longlong)pvVar2) + *local_e8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_100;
    if (uVar4 < local_b8) {
      uVar4 = local_b8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_2,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_128 + (longlong)*(int *)(local_128 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_12c + (longlong)*(int *)(local_128 + 4)) =
       *(int *)(local_128 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_120);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_118);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_a0);
  return param_2;
}



// ============================================================
// INDEX: 162/227
// FUNCTION: FUN_180040710
// ENTRY: 180040710
// RVA: 0x40710
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong FUN_180040710(longlong param_1)
// ============================================================

longlong FUN_180040710(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + -0x48;
}



// ============================================================
// INDEX: 163/227
// FUNCTION: FUN_1800407f0
// ENTRY: 1800407f0
// RVA: 0x407F0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong FUN_1800407f0(longlong param_1, undefined8 * param_2)
// ============================================================

longlong FUN_1800407f0(longlong param_1,undefined8 *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong _Size;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *_Buf1;
  ulonglong uVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  
  uVar2 = param_2[3];
  _Size = param_2[2];
  puVar8 = param_2;
  if (0xf < uVar2) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar9 = 0xcbf29ce484222325;
  if (_Size != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < _Size);
  }
  uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar9 * 0x10);
  if (lVar6 != *(longlong *)(param_1 + 8)) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar9 * 0x10);
    while( true ) {
      puVar8 = (undefined8 *)(lVar6 + 0x10);
      if (0xf < *(ulonglong *)(lVar6 + 0x28)) {
        puVar8 = (undefined8 *)*puVar8;
      }
      _Buf1 = param_2;
      if (0xf < uVar2) {
        _Buf1 = (undefined8 *)*param_2;
      }
      if ((_Size == *(ulonglong *)(lVar6 + 0x20)) &&
         ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar8,_Size), iVar5 == 0)))) break;
      if (lVar6 == lVar3) goto LAB_1800408e3;
      lVar6 = *(longlong *)(lVar6 + 8);
    }
    if (lVar6 != 0) {
      return lVar6 + 0x30;
    }
  }
LAB_1800408e3:
  std::_Xout_of_range("invalid unordered_map<K, T> key");
  pcVar4 = (code *)swi(3);
  lVar6 = (*pcVar4)();
  return lVar6;
}



// ============================================================
// INDEX: 164/227
// FUNCTION: FUN_180041040
// ENTRY: 180041040
// RVA: 0x41040
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_180041040(undefined1 * param_1, longlong * param_2, longlong param_3, longlong * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_180041040(undefined1 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  undefined8 uVar1;
  ulonglong *puVar2;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_78;
  *param_1 = 9;
  local_50 = param_1;
  local_48 = param_3;
  local_40 = param_4;
  local_58 = (ulonglong *)FUN_18006d620(0x58);
  *local_58 = 0;
  local_58[1] = 0;
  *(undefined4 *)(local_58 + 1) = 1;
  *(undefined4 *)((longlong)local_58 + 0xc) = 1;
  *local_58 = (ulonglong)std::_Ref_count_obj2<toml::detail::region>::vftable;
  local_58[2] = (ulonglong)toml::detail::region::vftable;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[3] = *(undefined8 *)(param_3 + 8);
  local_58[4] = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  uVar1 = *(undefined8 *)(param_3 + 0x20);
  local_58[5] = *(undefined8 *)(param_3 + 0x18);
  local_58[6] = uVar1;
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  local_58[7] = *(undefined8 *)(param_3 + 0x28);
  local_58[8] = uVar1;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0xf;
  *(undefined1 *)(param_3 + 0x18) = 0;
  local_58[9] = *(undefined8 *)(param_3 + 0x38);
  local_58[10] = *(undefined8 *)(param_3 + 0x40);
  *(ulonglong **)(param_1 + 0x30) = local_58 + 2;
  *(ulonglong **)(param_1 + 0x38) = local_58;
  local_58 = (ulonglong *)FUN_18006d620(0x18);
  *local_58 = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  puVar2 = FUN_180040720(local_58,param_2);
  *(ulonglong **)(param_1 + 8) = puVar2;
  FUN_180003d10(param_3);
  FUN_180022bf0(param_4);
  return param_1;
}



// ============================================================
// INDEX: 165/227
// FUNCTION: FUN_180041180
// ENTRY: 180041180
// RVA: 0x41180
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_180041180(char * param_1, char * param_2)
// ============================================================

char * FUN_180041180(char *param_1,char *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong *puVar8;
  float *pfVar9;
  float *pfVar10;
  
  if (param_1 != param_2) {
    FUN_180022a30(param_1);
    if (*(longlong *)(param_2 + 0x38) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    plVar6 = *(longlong **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    cVar4 = *param_2;
    *param_1 = cVar4;
    switch(cVar4) {
    case '\x01':
      param_1[8] = param_2[8];
      return param_1;
    case '\x02':
    case '\x03':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      return param_1;
    case '\x04':
      param_1[8] = param_2[8];
      FUN_180020900((undefined8 *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10));
      return param_1;
    case '\x05':
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      return param_1;
    case '\x06':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
      return param_1;
    case '\a':
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      return param_1;
    case '\b':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
      return param_1;
    case '\t':
      plVar6 = *(longlong **)(param_2 + 8);
      puVar8 = (ulonglong *)FUN_18006d620(0x18);
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = 0;
      pfVar10 = (float *)FUN_180040720(puVar8,plVar6);
      break;
    case '\n':
      pfVar10 = *(float **)(param_2 + 8);
      pfVar9 = (float *)FUN_18006d620(0x40);
      pfVar9[0] = 0.0;
      pfVar9[1] = 0.0;
      pfVar9[2] = 0.0;
      pfVar9[3] = 0.0;
      pfVar9[4] = 0.0;
      pfVar9[5] = 0.0;
      pfVar9[6] = 0.0;
      pfVar9[7] = 0.0;
      pfVar9[8] = 0.0;
      pfVar9[9] = 0.0;
      pfVar9[10] = 0.0;
      pfVar9[0xb] = 0.0;
      pfVar9[0xc] = 0.0;
      pfVar9[0xd] = 0.0;
      pfVar9[0xe] = 0.0;
      pfVar9[0xf] = 0.0;
      pfVar10 = FUN_1800409f0(pfVar9,pfVar10);
      break;
    default:
      goto switchD_180041217_default;
    }
    *(float **)(param_1 + 8) = pfVar10;
  }
switchD_180041217_default:
  return param_1;
}



// ============================================================
// INDEX: 166/227
// FUNCTION: FUN_180043b60
// ENTRY: 180043b60
// RVA: 0x43B60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180043b60(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180043b60(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "expected newline, but got \'");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,"\'.");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 167/227
// FUNCTION: FUN_1800443c0
// ENTRY: 1800443c0
// RVA: 0x443C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800443c0(longlong * param_1, UINT param_2, undefined8 * param_3)
// ============================================================

longlong * FUN_1800443c0(longlong *param_1,UINT param_2,undefined8 *param_3)

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
      FUN_180002330();
    }
    uVar4 = __std_fs_convert_wide_to_narrow(param_2,(LPCWSTR)*param_3,(int)uVar1,(LPSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800026a0(iVar3);
    }
    uVar6 = (ulonglong)(int)uVar4;
    uVar1 = param_1[2];
    if (uVar1 < uVar6) {
      _Size = uVar6 - uVar1;
      uVar2 = param_1[3];
      if (uVar2 - uVar1 < _Size) {
        FUN_18002dd10(param_1,_Size,uVar2,_Size);
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
      FUN_1800026a0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 168/227
// FUNCTION: FUN_180046650
// ENTRY: 180046650
// RVA: 0x46650
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180046650(longlong * param_1, longlong param_2)
// ============================================================

longlong * FUN_180046650(longlong *param_1,longlong param_2)

{
  *param_1 = param_2 + 0x20;
  return param_1;
}



// ============================================================
// INDEX: 169/227
// FUNCTION: FUN_180046660
// ENTRY: 180046660
// RVA: 0x46660
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: bool FUN_180046660(longlong param_1, undefined8 * param_2)
// ============================================================

bool FUN_180046660(longlong param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  ulonglong _Size;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *_Buf1;
  ulonglong uVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  
  uVar1 = param_2[3];
  _Size = param_2[2];
  puVar6 = param_2;
  if (0xf < uVar1) {
    puVar6 = (undefined8 *)*param_2;
  }
  uVar7 = 0;
  uVar5 = 0xcbf29ce484222325;
  uVar3 = uVar7;
  if (_Size != 0) {
    do {
      uVar4 = uVar3 + 1;
      uVar5 = (uVar5 ^ *(byte *)((longlong)puVar6 + uVar3)) * 0x100000001b3;
      uVar3 = uVar4;
    } while (uVar4 < _Size);
  }
  uVar5 = *(ulonglong *)(param_1 + 0x30) & uVar5;
  uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar5 * 0x10);
  uVar4 = uVar7;
  if (uVar3 != *(ulonglong *)(param_1 + 8)) {
    uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0x18) + uVar5 * 0x10);
    while( true ) {
      puVar6 = (undefined8 *)(uVar3 + 0x10);
      if (0xf < *(ulonglong *)(uVar3 + 0x28)) {
        puVar6 = (undefined8 *)*puVar6;
      }
      _Buf1 = param_2;
      if (0xf < uVar1) {
        _Buf1 = (undefined8 *)*param_2;
      }
      if (((_Size == *(ulonglong *)(uVar3 + 0x20)) &&
          ((uVar4 = uVar3, _Size == 0 || (iVar2 = memcmp(_Buf1,puVar6,_Size), iVar2 == 0)))) ||
         (uVar4 = uVar7, uVar3 == uVar5)) break;
      uVar3 = *(ulonglong *)(uVar3 + 8);
    }
  }
  return uVar4 != 0;
}



// ============================================================
// INDEX: 170/227
// FUNCTION: FUN_180046760
// ENTRY: 180046760
// RVA: 0x46760
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180046760(longlong * param_1, undefined8 * param_2, undefined8 * param_3)
// ============================================================

longlong * FUN_180046760(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  puVar4 = param_3;
  FUN_180020900(param_1,param_2);
  while (param_2 = param_2 + 4, param_2 != param_3) {
    uVar1 = param_1[2];
    uVar2 = param_1[3];
    if (uVar1 < uVar2) {
      param_1[2] = uVar1 + 1;
      plVar3 = param_1;
      if (0xf < uVar2) {
        plVar3 = (longlong *)*param_1;
      }
      *(undefined2 *)((longlong)plVar3 + uVar1) = 0x2e;
    }
    else {
      FUN_18002cf70(param_1,uVar2,puVar4,0x2e);
    }
    FUN_180020680(param_1,param_2,puVar4);
  }
  return param_1;
}



// ============================================================
// INDEX: 171/227
// FUNCTION: FUN_180046800
// ENTRY: 180046800
// RVA: 0x46800
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180046800(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180046800(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: array of table (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,"\") cannot be defined");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 172/227
// FUNCTION: FUN_180046ae0
// ENTRY: 180046ae0
// RVA: 0x46AE0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180046ae0(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180046ae0(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: array of table (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "\") collides with existing value");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 173/227
// FUNCTION: FUN_180046f30
// ENTRY: 180046f30
// RVA: 0x46F30
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180046f30(undefined4 * param_1, undefined4 * param_2)
// ============================================================

undefined4 * FUN_180046f30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_180027650((undefined8 *)(param_1 + 0x14),"while inserting this array-of-tables",0x24);
  return param_1;
}



// ============================================================
// INDEX: 174/227
// FUNCTION: FUN_180046fe0
// ENTRY: 180046fe0
// RVA: 0x46FE0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180046fe0(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180046fe0(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: array of table (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "\") collides with existing array-of-tables");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 175/227
// FUNCTION: FUN_180047210
// ENTRY: 180047210
// RVA: 0x47210
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180047210(longlong * param_1, undefined8 param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180047210(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar3;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,"this ");
  FUN_18004dea0((basic_ostream<char,std::char_traits<char>_> *)&local_118,*param_3);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118," value has static size");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar3 = *local_d0, uVar3 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar1 = (void *)*local_f8;
      sVar2 = ((longlong)*local_c0 - (longlong)pvVar1) + *local_d8;
    }
    else {
      sVar2 = 0;
      pvVar1 = (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)*local_f0;
    if (uVar3 < local_a8) {
      uVar3 = local_a8;
    }
    sVar2 = uVar3 - (longlong)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar1,sVar2);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 176/227
// FUNCTION: FUN_180047430
// ENTRY: 180047430
// RVA: 0x47430
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180047430(undefined4 * param_1, undefined4 * param_2)
// ============================================================

undefined4 * FUN_180047430(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_180027650((undefined8 *)(param_1 + 0x14),"appending it to the statically sized array",0x2a);
  return param_1;
}



// ============================================================
// INDEX: 177/227
// FUNCTION: FUN_1800474e0
// ENTRY: 1800474e0
// RVA: 0x474E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 FUN_1800474e0(longlong param_1, longlong param_2, undefined8 * param_3, undefined8 * param_4, longlong param_5)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_1800474e0(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  void **ppvVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined1 auStack_2a8 [32];
  void *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270;
  longlong local_260 [4];
  undefined8 local_240 [4];
  void *local_220;
  void *pvStack_218;
  void *local_210;
  void *pvStack_208;
  void *local_200;
  void *pvStack_1f8;
  void *local_1f0;
  void *pvStack_1e8;
  char local_1d8 [8];
  void *local_1d0;
  longlong local_1c8;
  ulonglong local_1b8 [10];
  undefined8 local_168 [2];
  longlong *local_158;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 local_138;
  ulonglong uStack_130;
  undefined8 local_118 [2];
  longlong *local_108;
  void *local_f8;
  ulonglong local_e0;
  char local_c8 [8];
  void *local_c0 [3];
  ulonglong local_a8 [5];
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_2a8;
  local_200 = (void *)0x0;
  pvStack_1f8 = (void *)0x0;
  local_1f0 = (void *)0x0;
  pvStack_1e8 = (void *)0x0;
  FUN_180027650(&local_200,&DAT_1800789f6,0);
  plVar8 = *(longlong **)(param_2 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    ppvVar5 = (void **)(**(code **)(*plVar8 + 0x18))(plVar8,&local_288);
    if (&local_200 != ppvVar5) {
      if ((void *)0xf < pvStack_1e8) {
        pvVar10 = local_200;
        if ((0xfff < (longlong)pvStack_1e8 + 1U) &&
           (pvVar10 = *(void **)((longlong)local_200 + -8),
           0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pvVar10)))) goto LAB_180047602;
        FUN_18006d9d4(pvVar10);
      }
      local_200 = *ppvVar5;
      pvStack_1f8 = ppvVar5[1];
      local_1f0 = ppvVar5[2];
      pvStack_1e8 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
    if (0xf < local_270) {
      pvVar10 = local_288;
      if ((0xfff < local_270 + 1) &&
         (pvVar10 = *(void **)((longlong)local_288 + -8),
         0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)pvVar10)))) {
LAB_180047602:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
  }
  local_288 = (void *)0x0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  FUN_180027650(&local_288,"internal",8);
  FUN_1800030f0(local_168,(longlong *)&local_288,(longlong *)&local_200);
  FUN_180036790((undefined4 *)local_c8,(longlong)local_168,0);
  if (local_c8[0] != '\0') {
    FUN_180003d10((longlong)local_80);
    FUN_180024e20((longlong)local_c0);
    uVar6 = 0;
    goto LAB_180047b91;
  }
  if (0xf < local_a8[0]) {
    pvVar10 = local_c0[0];
    if ((0xfff < local_a8[0] + 1) &&
       (pvVar10 = *(void **)((longlong)local_c0[0] + -8),
       0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  local_220 = (void *)0x0;
  pvStack_218 = (void *)0x0;
  local_210 = (void *)0x0;
  pvStack_208 = (void *)0x0;
  FUN_180027650(&local_220,&DAT_1800789f6,0);
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    ppvVar5 = (void **)(**(code **)(*plVar8 + 0x18))(plVar8,&local_288);
    if (&local_220 != ppvVar5) {
      if ((void *)0xf < pvStack_208) {
        pvVar10 = local_220;
        if ((0xfff < (longlong)pvStack_208 + 1U) &&
           (pvVar10 = *(void **)((longlong)local_220 + -8),
           0x1f < (ulonglong)((longlong)local_220 + (-8 - (longlong)pvVar10)))) goto LAB_1800477b9;
        FUN_18006d9d4(pvVar10);
      }
      local_220 = *ppvVar5;
      pvStack_218 = ppvVar5[1];
      local_210 = ppvVar5[2];
      pvStack_208 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
    if (0xf < local_270) {
      pvVar10 = local_288;
      if ((0xfff < local_270 + 1) &&
         (pvVar10 = *(void **)((longlong)local_288 + -8),
         0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)pvVar10)))) {
LAB_1800477b9:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
  }
  local_288 = (void *)0x0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  FUN_180027650(&local_288,"internal",8);
  ppvVar5 = &local_220;
  FUN_1800030f0(local_118,(longlong *)&local_288,(longlong *)ppvVar5);
  FUN_180017010(local_1d8,(longlong)local_118);
  if (local_1d8[0] == '\0') {
    if (0xf < local_1b8[0]) {
      pvVar10 = local_1d0;
      if ((0xfff < local_1b8[0] + 1) &&
         (pvVar10 = *(void **)((longlong)local_1d0 + -8),
         0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
    FUN_180017b20(local_1d8,(longlong)local_118);
    if (local_1d8[0] == '\0') {
      if (0xf < local_1b8[0]) {
        pvVar10 = local_1d0;
        if ((0xfff < local_1b8[0] + 1) &&
           (pvVar10 = *(void **)((longlong)local_1d0 + -8),
           0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar10);
      }
      FUN_1800141f0(local_1d8,(longlong)local_118,ppvVar5);
      if (local_1d8[0] == '\0') {
        if (0xf < local_1b8[0]) {
          pvVar10 = local_1d0;
          if ((0xfff < local_1b8[0] + 1) &&
             (pvVar10 = *(void **)((longlong)local_1d0 + -8),
             0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10))))
          goto LAB_180047ab7;
          FUN_18006d9d4(pvVar10);
        }
        uVar6 = 0;
      }
      else {
        FUN_180017010(local_c8,(longlong)local_168);
        if (local_c8[0] == '\0') {
          if (0xf < local_a8[0]) {
            pvVar10 = local_c0[0];
            if ((0xfff < local_a8[0] + 1) &&
               (pvVar10 = *(void **)((longlong)local_c0[0] + -8),
               0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          if (local_1d8[0] == '\0') {
            pcVar7 = (char *)FUN_180022a20((longlong)local_1d8);
            plVar8 = FUN_18002a850(local_260,pcVar7);
            puVar9 = FUN_180027b60(local_240,0x18007a300,plVar8);
            FUN_180001e30(&local_288,puVar9);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_288,(ThrowInfo *)&DAT_180088cf0);
          }
          if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_4) & 0xffffffffffffffe0U
              ) == 0) {
            uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_4);
            if ((char)uVar6 != '\0') {
              uVar6 = 0;
              goto LAB_180047a34;
            }
          }
          uVar6 = 1;
        }
        else {
          FUN_180003d10((longlong)local_a8);
          FUN_180022bf0((longlong *)local_c0);
          uVar6 = 0;
        }
LAB_180047a34:
        if (local_1d8[0] == '\0') {
          if (0xf < local_1b8[0]) {
            pvVar10 = local_1d0;
            if ((0xfff < local_1b8[0] + 1) &&
               (pvVar10 = *(void **)((longlong)local_1d0 + -8),
               0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
LAB_180047ab7:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
        }
        else {
          FUN_180003d10((longlong)local_1b8);
          FUN_180022bf0((longlong *)&local_1d0);
        }
      }
    }
    else {
      if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_3) & 0xffffffffffffffe0U) ==
          0) {
        uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_3);
        if ((char)uVar6 == '\0') goto LAB_1800478f4;
        uVar6 = 0;
      }
      else {
LAB_1800478f4:
        uVar6 = 1;
      }
      FUN_180003d10((longlong)local_1b8);
      FUN_180022bf0((longlong *)&local_1d0);
    }
  }
  else {
    if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_3) & 0xffffffffffffffe0U) == 0
       ) {
      uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_3);
      if ((char)uVar6 == '\0') goto LAB_180047850;
      uVar6 = 0;
    }
    else {
LAB_180047850:
      uVar6 = 1;
    }
    FUN_180003d10((longlong)local_1b8);
    FUN_180022bf0((longlong *)&local_1d0);
  }
  if (0xf < local_e0) {
    pvVar10 = local_f8;
    if ((0xfff < local_e0 + 1) &&
       (pvVar10 = *(void **)((longlong)local_f8 + -8),
       0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_108 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_108 + 8))(local_108);
      }
    }
  }
  if ((void *)0xf < pvStack_208) {
    pvVar10 = local_220;
    if ((0xfff < (longlong)pvStack_208 + 1U) &&
       (pvVar10 = *(void **)((longlong)local_220 + -8),
       0x1f < (ulonglong)((longlong)local_220 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  local_210 = (void *)_DAT_18007c620;
  pvStack_208 = (void *)_UNK_18007c628;
  local_220 = (void *)((ulonglong)local_220 & 0xffffffffffffff00);
LAB_180047b91:
  if (0xf < uStack_130) {
    pvVar3 = (void *)CONCAT71(uStack_147,local_148);
    pvVar10 = pvVar3;
    if ((0xfff < uStack_130 + 1) &&
       (pvVar10 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  uStack_130 = _UNK_18007c628;
  local_138 = _DAT_18007c620;
  local_148 = 0;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_158 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_158 + 8))(local_158);
      }
    }
  }
  if ((void *)0xf < pvStack_1e8) {
    pvVar10 = local_200;
    if ((0xfff < (longlong)pvStack_1e8 + 1U) &&
       (pvVar10 = *(void **)((longlong)local_200 + -8),
       0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  return uVar6;
}



// ============================================================
// INDEX: 178/227
// FUNCTION: FUN_180048130
// ENTRY: 180048130
// RVA: 0x48130
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180048130(undefined4 * param_1, undefined4 * param_2)
// ============================================================

undefined4 * FUN_180048130(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  uVar1 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = uVar1;
  *(undefined8 *)(param_2 + 10) = 0xf;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined1 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = uVar1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  *(undefined8 *)(param_2 + 0x12) = 0xf;
  *(undefined1 *)(param_2 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  FUN_180027650((undefined8 *)(param_1 + 0x14),"table conflicts with the previous array of table",
                0x30);
  return param_1;
}



// ============================================================
// INDEX: 179/227
// FUNCTION: FUN_1800481e0
// ENTRY: 1800481e0
// RVA: 0x481E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_1800481e0(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_1800481e0(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: inserting to an inline table (");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                ") but inline tables are immutable");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 180/227
// FUNCTION: FUN_180048410
// ENTRY: 180048410
// RVA: 0x48410
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180048410(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180048410(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: target (");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                ") is neither table nor an array of tables");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 181/227
// FUNCTION: FUN_180048640
// ENTRY: 180048640
// RVA: 0x48640
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180048640(longlong * param_1, undefined8 param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180048640(longlong *param_1,undefined8 param_2,undefined1 *param_3)

{
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar1;
  size_t sVar2;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar3;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,"actual type is ");
  FUN_18004dea0((basic_ostream<char,std::char_traits<char>_> *)&local_118,*param_3);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x42;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar3 = *local_d0, uVar3 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar1 = (void *)*local_f8;
      sVar2 = ((longlong)*local_c0 - (longlong)pvVar1) + *local_d8;
    }
    else {
      sVar2 = 0;
      pvVar1 = (void *)0x0;
    }
  }
  else {
    pvVar1 = (void *)*local_f0;
    if (uVar3 < local_a8) {
      uVar3 = local_a8;
    }
    sVar2 = uVar3 - (longlong)pvVar1;
  }
  if (pvVar1 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar1,sVar2);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 182/227
// FUNCTION: FUN_180048850
// ENTRY: 180048850
// RVA: 0x48850
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180048850(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180048850(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: table (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "\") conflicts with existing value");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 183/227
// FUNCTION: FUN_180048a80
// ENTRY: 180048a80
// RVA: 0x48A80
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong * FUN_180048a80(longlong * param_1, undefined8 param_2, char * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_180048a80(longlong *param_1,undefined8 param_2,char *param_3)

{
  ulonglong *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *this;
  void *pvVar2;
  size_t sVar3;
  undefined1 auStack_168 [32];
  undefined4 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong *local_128;
  int iStack_11c;
  undefined *local_118;
  undefined **local_110;
  basic_ostream<char,std::char_traits<char>_> local_108 [16];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  ulonglong *local_d0;
  int *local_c0;
  ulonglong local_a8;
  uint local_a0;
  basic_ios<char,std::char_traits<char>_> local_90 [104];
  ulonglong local_28;
  ulonglong uVar4;
  
  local_28 = DAT_18008d040 ^ (ulonglong)auStack_168;
  local_148 = 0;
  local_128 = param_1;
  memset(&local_118,0,0xe8);
  local_118 = &DAT_18007b590;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_90);
  local_148 = 2;
  std::basic_ostream<char,std::char_traits<char>_>::basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
             (basic_streambuf<char,std::char_traits<char>_> *)&local_110,false);
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  local_110 = std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_a8 = 0;
  local_a0 = 4;
  this = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                   ((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                    (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002840);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this,
             (_func_ios_base_ptr_ios_base_ptr *)&LAB_180002850);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "toml::insert_value: a table (\"");
  puVar1 = (ulonglong *)(param_3 + 0x10);
  if (0xf < *(ulonglong *)(param_3 + 0x18)) {
    param_3 = *(char **)param_3;
  }
  FUN_180034840((basic_ostream<char,std::char_traits<char>_> *)&local_118,param_3,*puVar1);
  FUN_180026900((basic_ostream<char,std::char_traits<char>_> *)&local_118,
                "\") cannot be inserted to an existing inline array-of-tables");
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  local_148 = 0x82;
  local_140 = 0;
  uStack_138 = 0;
  if ((((byte)local_a0 & 0x22) == 2) || (uVar4 = *local_d0, uVar4 == 0)) {
    if (((local_a0 & 4) == 0) && (*local_d8 != 0)) {
      pvVar2 = (void *)*local_f8;
      sVar3 = ((longlong)*local_c0 - (longlong)pvVar2) + *local_d8;
    }
    else {
      sVar3 = 0;
      pvVar2 = (void *)0x0;
    }
  }
  else {
    pvVar2 = (void *)*local_f0;
    if (uVar4 < local_a8) {
      uVar4 = local_a8;
    }
    sVar3 = uVar4 - (longlong)pvVar2;
  }
  if (pvVar2 != (void *)0x0) {
    FUN_180022f50(param_1,pvVar2,sVar3);
  }
  *(undefined ***)((longlong)&local_118 + (longlong)*(int *)(local_118 + 4)) =
       std::basic_ostringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((longlong)&iStack_11c + (longlong)*(int *)(local_118 + 4)) =
       *(int *)(local_118 + 4) + -0x88;
  FUN_1800201e0((basic_streambuf<char,std::char_traits<char>_> *)&local_110);
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            (local_108);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_90);
  return param_1;
}



// ============================================================
// INDEX: 184/227
// FUNCTION: FUN_180049a60
// ENTRY: 180049a60
// RVA: 0x49A60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180049a60(longlong param_1)
// ============================================================

void FUN_180049a60(longlong param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (0xf < *(ulonglong *)(param_1 + 0x50)) {
    pvVar1 = *(void **)(param_1 + 0x38);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x50) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) goto LAB_180049b05;
    FUN_18006d9d4(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0xf;
  *(undefined1 *)(param_1 + 0x38) = 0;
  if (0xf < *(ulonglong *)(param_1 + 0x30)) {
    pvVar1 = *(void **)(param_1 + 0x18);
    pvVar2 = pvVar1;
    if ((0xfff < *(ulonglong *)(param_1 + 0x30) + 1) &&
       (pvVar2 = *(void **)((longlong)pvVar1 + -8),
       0x1f < (ulonglong)((longlong)pvVar1 + (-8 - (longlong)pvVar2)))) {
LAB_180049b05:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar2);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0xf;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// ============================================================
// INDEX: 185/227
// FUNCTION: FUN_18004a0c0
// ENTRY: 18004a0c0
// RVA: 0x4A0C0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_18004a0c0(basic_ostream<char,std::char_traits<char>_> * param_1, byte * param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_18004a0c0(basic_ostream<char,std::char_traits<char>_> *param_1,byte *param_2)

{
  undefined8 *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  undefined1 local_18 [16];
  
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,(uint)*param_2);
  FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar2,':');
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,(uint)param_2[1]);
  FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar2,':');
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,(uint)param_2[2]);
  if (((*(short *)(param_2 + 4) != 0) || (*(short *)(param_2 + 6) != 0)) ||
     (*(short *)(param_2 + 8) != 0)) {
    FUN_180026bf0(param_1,'.');
    param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
         (basic_ostream<char,std::char_traits<char>_>)0x30;
    puVar1 = (undefined8 *)std::setw((__int64)local_18);
    (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              (param_1,(uint)*(ushort *)(param_2 + 4));
    if ((*(short *)(param_2 + 6) != 0) || (*(short *)(param_2 + 8) != 0)) {
      param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
           (basic_ostream<char,std::char_traits<char>_>)0x30;
      puVar1 = (undefined8 *)std::setw((__int64)local_18);
      (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                (param_1,(uint)*(ushort *)(param_2 + 6));
      if (*(short *)(param_2 + 8) != 0) {
        param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
             (basic_ostream<char,std::char_traits<char>_>)0x30;
        puVar1 = (undefined8 *)std::setw((__int64)local_18);
        (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<
                  (param_1,(uint)*(ushort *)(param_2 + 8));
      }
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 186/227
// FUNCTION: FUN_18004a280
// ENTRY: 18004a280
// RVA: 0x4A280
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_18004a280(basic_ostream<char,std::char_traits<char>_> * param_1, short * param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_18004a280(basic_ostream<char,std::char_traits<char>_> *param_1,short *param_2)

{
  undefined8 *puVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  undefined1 local_18 [16];
  
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(param_1,(int)*param_2);
  FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar2,'-');
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                     (param_1,*(byte *)(param_2 + 1) + 1);
  FUN_180026bf0((basic_ostream<char,std::char_traits<char>_> *)pbVar2,'-');
  param_1[(longlong)*(int *)(*(longlong *)param_1 + 4) + 0x58] =
       (basic_ostream<char,std::char_traits<char>_>)0x30;
  puVar1 = (undefined8 *)std::setw((__int64)local_18);
  (*(code *)*puVar1)(param_1 + *(int *)(*(longlong *)param_1 + 4),puVar1[1]);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (param_1,(uint)*(byte *)((longlong)param_2 + 3));
  return param_1;
}



// ============================================================
// INDEX: 187/227
// FUNCTION: FUN_18004a360
// ENTRY: 18004a360
// RVA: 0x4A360
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18004a360(char * param_1, undefined1 param_2, longlong param_3)
// ============================================================

void FUN_18004a360(char *param_1,undefined1 param_2,longlong param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 local_278 [16];
  longlong local_268;
  longlong lStack_260;
  longlong local_258 [3];
  longlong local_240 [3];
  undefined8 local_228 [2];
  longlong local_218 [4];
  longlong local_1f8 [4];
  longlong local_1d8 [4];
  undefined4 local_1b8 [28];
  undefined8 local_148 [18];
  undefined4 local_b8 [20];
  undefined4 local_68 [20];
  
  local_278[0] = param_2;
  puVar1 = FUN_180031420(param_3,local_b8);
  FUN_1800205d0(local_258);
  puVar4 = local_68;
  puVar2 = FUN_180031420(param_3,puVar4);
  plVar3 = FUN_180034630(local_218,puVar4,local_278);
  FUN_180027ab0(local_1b8,puVar2,plVar3);
  puVar5 = local_148;
  plVar3 = FUN_18001f5f0(local_228,local_1b8,puVar5);
  local_268 = *plVar3;
  lStack_260 = plVar3[1];
  FUN_18001fb60(local_240,&local_268);
  local_278[0] = 9;
  plVar3 = FUN_18003aa40(local_1f8,param_1,puVar5,local_278);
  plVar3 = FUN_1800042c0(local_1d8,(char *)plVar3,local_240,local_258);
  FUN_1800053d0(local_148,plVar3,puVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_148,(ThrowInfo *)&DAT_180088d80);
}



// ============================================================
// INDEX: 188/227
// FUNCTION: FUN_18004a860
// ENTRY: 18004a860
// RVA: 0x4A860
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18004a860(float * param_1, undefined8 * param_2, longlong * param_3)
// ============================================================

undefined8 * FUN_18004a860(float *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *_Buf2;
  ulonglong uVar11;
  float fVar12;
  undefined8 *local_78;
  
  uVar7 = param_3[2];
  uVar1 = param_3[3];
  plVar9 = param_3;
  if (0xf < uVar1) {
    plVar9 = (longlong *)*param_3;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)plVar9 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  puVar5 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
  local_78 = *(undefined8 **)(param_1 + 2);
  if (puVar5 != local_78) {
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    while( true ) {
      puVar10 = puVar5 + 2;
      if (0xf < (ulonglong)puVar5[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      plVar9 = param_3;
      if (0xf < uVar1) {
        plVar9 = (longlong *)*param_3;
      }
      if ((uVar7 == puVar5[4]) &&
         ((uVar7 == 0 || (iVar4 = memcmp(plVar9,puVar10,uVar7), iVar4 == 0)))) {
        *param_2 = puVar5;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      local_78 = puVar5;
      if (puVar5 == puVar6) break;
      puVar5 = (undefined8 *)puVar5[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar5 = (undefined8 *)(*pcVar3)();
    return puVar5;
  }
  puVar5 = (undefined8 *)FUN_18006d620(0x78);
  FUN_180020900(puVar5 + 2,param_3);
  *(undefined1 *)(puVar5 + 6) = 0;
  puVar6 = (undefined8 *)FUN_18006d620(0x18);
  *puVar6 = 0;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 1) = 1;
  *(undefined4 *)((longlong)puVar6 + 0xc) = 1;
  *puVar6 = std::_Ref_count_obj2<toml::detail::region_base>::vftable;
  puVar6[2] = toml::detail::region_base::vftable;
  puVar5[0xc] = 0;
  puVar5[0xd] = 0;
  puVar5[0xd] = 0;
  puVar5[0xc] = puVar6 + 2;
  puVar5[0xd] = puVar6;
  fVar12 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar12 && fVar12 != *param_1) {
    uVar7 = FUN_180032de0(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_180032b30((longlong)param_1,uVar7);
    puVar6 = *(undefined8 **)
              (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
    local_78 = *(undefined8 **)(param_1 + 2);
    if (puVar6 != local_78) {
      puVar10 = *(undefined8 **)
                 (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar11) * 0x10);
      _Size = puVar5[4];
      while( true ) {
        _Buf2 = puVar6 + 2;
        if (0xf < (ulonglong)puVar6[5]) {
          _Buf2 = (undefined8 *)*_Buf2;
        }
        _Buf1 = puVar5 + 2;
        if (0xf < (ulonglong)puVar5[5]) {
          _Buf1 = (undefined8 *)puVar5[2];
        }
        if ((_Size == puVar6[4]) &&
           ((_Size == 0 || (iVar4 = memcmp(_Buf1,_Buf2,_Size), iVar4 == 0)))) break;
        local_78 = puVar6;
        if (puVar6 == puVar10) goto LAB_18004ab17;
        puVar6 = (undefined8 *)puVar6[1];
      }
      local_78 = (undefined8 *)*puVar6;
    }
  }
LAB_18004ab17:
  puVar6 = (undefined8 *)local_78[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar5 = local_78;
  puVar5[1] = puVar6;
  *puVar6 = puVar5;
  local_78[1] = puVar5;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar11 = *(ulonglong *)(param_1 + 0xc) & uVar11;
  puVar10 = *(undefined8 **)(lVar2 + uVar11 * 0x10);
  if (puVar10 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar5;
  }
  else {
    if (puVar10 == local_78) {
      *(undefined8 **)(lVar2 + uVar11 * 0x10) = puVar5;
      goto LAB_18004ab65;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) != puVar6) goto LAB_18004ab65;
  }
  *(undefined8 **)(lVar2 + 8 + uVar11 * 0x10) = puVar5;
LAB_18004ab65:
  *param_2 = puVar5;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ============================================================
// INDEX: 189/227
// FUNCTION: FUN_18004b720
// ENTRY: 18004b720
// RVA: 0x4B720
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18004b720(ulonglong * param_1, ulonglong param_2)
// ============================================================

void FUN_18004b720(ulonglong *param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0x38e38e38e38e38e < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180022bd0();
  }
  uVar1 = param_2 * 0x48;
  if (uVar1 == 0) {
    uVar3 = 0;
  }
  else if (uVar1 < 0x1000) {
    uVar3 = FUN_18006d620(uVar1);
  }
  else {
    if (uVar1 + 0x27 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
    lVar2 = FUN_18006d620(uVar1 + 0x27);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar3 = lVar2 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar3 - 8) = lVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar3;
  param_1[2] = uVar3 + uVar1;
  return;
}



// ============================================================
// INDEX: 190/227
// FUNCTION: FUN_18004bb40
// ENTRY: 18004bb40
// RVA: 0x4BB40
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18004bb40(float * param_1, undefined8 * param_2, undefined8 * param_3)
// ============================================================

undefined8 * FUN_18004bb40(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar7 = param_3[2];
  uVar1 = param_3[3];
  puVar6 = param_3;
  if (0xf < uVar1) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)((longlong)puVar6 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar6 != *(undefined8 **)(param_1 + 2)) {
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    while( true ) {
      puVar10 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar9 = param_3;
      if (0xf < uVar1) {
        puVar9 = (undefined8 *)*param_3;
      }
      if ((uVar7 == puVar6[4]) &&
         ((uVar7 == 0 || (iVar5 = memcmp(puVar9,puVar10,uVar7), iVar5 == 0)))) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      puVar10 = puVar6;
      if (puVar6 == puVar11) break;
      puVar6 = (undefined8 *)puVar6[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x222222222222222) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar3)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_18006d620(0x78);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar4 = param_3[1];
  puVar6[2] = *param_3;
  puVar6[3] = uVar4;
  uVar4 = param_3[3];
  puVar6[4] = param_3[2];
  puVar6[5] = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_180032fc0((undefined1 *)(puVar6 + 6),(undefined1 *)(param_3 + 4));
  fVar13 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar13 && fVar13 != *param_1) {
    uVar7 = FUN_180032de0(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_180032b30((longlong)param_1,uVar7);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != *(undefined8 **)(param_1 + 2)) {
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
      uVar7 = puVar6[5];
      _Size = puVar6[4];
      while( true ) {
        puVar10 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        _Buf1 = puVar6 + 2;
        if (0xf < uVar7) {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar10,_Size), iVar5 == 0)))) break;
        puVar10 = puVar11;
        if (puVar11 == puVar9) goto LAB_18004bd8e;
        puVar11 = (undefined8 *)puVar11[1];
      }
      puVar10 = (undefined8 *)*puVar11;
    }
  }
LAB_18004bd8e:
  puVar11 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar10;
  puVar6[1] = puVar11;
  *puVar11 = puVar6;
  puVar10[1] = puVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar9 = *(undefined8 **)(lVar2 + uVar12 * 0x10);
  if (puVar9 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar12 * 0x10) = puVar6;
  }
  else {
    if (puVar9 == puVar10) {
      *(undefined8 **)(lVar2 + uVar12 * 0x10) = puVar6;
      goto LAB_18004bdd9;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar12 * 0x10) != puVar11) goto LAB_18004bdd9;
  }
  *(undefined8 **)(lVar2 + 8 + uVar12 * 0x10) = puVar6;
LAB_18004bdd9:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ============================================================
// INDEX: 191/227
// FUNCTION: FUN_18004be90
// ENTRY: 18004be90
// RVA: 0x4BE90
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_18004be90(undefined8 * param_1, undefined8 * param_2)
// ============================================================

undefined8 * FUN_18004be90(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  *param_2 = 0;
  param_2[1] = 0;
  plVar6 = (longlong *)param_1[1];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar6 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6);
      }
    }
    return param_1;
  }
  return param_1;
}



// ============================================================
// INDEX: 192/227
// FUNCTION: FUN_18004bf10
// ENTRY: 18004bf10
// RVA: 0x4BF10
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * * * FUN_18004bf10(undefined8 * * * param_1, longlong param_2, undefined8 param_3, undefined8 * * * * * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ***
FUN_18004bf10(undefined8 ***param_1,longlong param_2,undefined8 param_3,undefined8 *****param_4)

{
  int *piVar1;
  undefined8 *****pppppuVar2;
  longlong *plVar3;
  int iVar4;
  void *pvVar5;
  undefined8 **ppuVar6;
  undefined8 **ppuVar7;
  undefined1 *puVar8;
  undefined ***pppuVar9;
  ulonglong uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *****pppppuVar13;
  ulonglong *puVar14;
  undefined4 *puVar15;
  char *pcVar16;
  undefined8 **ppuVar17;
  void *pvVar18;
  undefined **ppuVar19;
  longlong lVar20;
  size_t sVar21;
  undefined1 auStackY_478 [32];
  undefined8 **local_438;
  undefined8 **ppuStack_430;
  undefined8 **local_428;
  undefined8 **ppuStack_420;
  undefined8 **local_418;
  undefined8 **ppuStack_410;
  undefined8 **local_408;
  undefined8 **ppuStack_400;
  undefined8 ***local_3f8;
  undefined8 ***pppuStack_3f0;
  undefined8 ***local_3e8;
  undefined8 ***local_3d8;
  undefined4 local_3d0 [2];
  longlong local_3c8 [10];
  longlong local_378 [4];
  char local_358 [56];
  longlong *local_320;
  longlong local_318 [4];
  char local_2f8 [8];
  float local_2f0;
  undefined4 uStack_2ec;
  undefined8 *****local_2e8;
  undefined8 local_2e0;
  void *local_2d8;
  ulonglong local_2c0;
  longlong local_2b8;
  undefined8 ****local_2a8;
  longlong lStack_2a0;
  longlong local_298;
  ulonglong uStack_290;
  longlong local_288;
  longlong *plStack_280;
  longlong *local_278;
  undefined8 **local_268;
  undefined1 local_260;
  undefined7 uStack_25f;
  undefined8 *****local_258;
  undefined8 local_250;
  ulonglong local_248 [10];
  undefined8 **local_1f8;
  longlong lStack_1f0;
  ulonglong local_1e8;
  ulonglong auStack_1e0 [5];
  undefined **local_1b8;
  undefined8 local_1b0;
  longlong *plStack_1a8;
  void *local_1a0 [3];
  ulonglong local_188;
  longlong local_180;
  longlong local_178;
  char local_168 [8];
  undefined1 local_160 [48];
  longlong *local_130;
  longlong local_128 [4];
  char local_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined8 **ppuStack_f8;
  undefined8 **local_f0;
  undefined8 **ppuStack_e8;
  char local_b8 [8];
  undefined1 local_b0 [48];
  longlong *local_80;
  undefined *local_78;
  undefined *local_70;
  ulonglong local_58;
  
  local_58 = DAT_18008d040 ^ (ulonglong)auStackY_478;
  lVar20 = *(longlong *)(param_2 + 0x40);
  local_180 = lVar20;
  if (lVar20 == *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
    local_3e8 = &local_418;
    local_418 = (undefined8 **)0x0;
    ppuStack_410 = (undefined8 **)0x0;
    local_408 = (undefined8 **)0x0;
    local_3d8 = (undefined8 ***)&local_1b8;
    local_1b8 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1b0 = *(undefined8 *)(param_2 + 8);
    plStack_1a8 = *(longlong **)(param_2 + 0x10);
    FUN_180020900(local_1a0,(undefined8 *)(param_2 + 0x20));
    local_3c8[1] = 0;
    local_178 = lVar20;
    local_3c8[0] = FUN_18006d620(0x88);
    *(longlong *)local_3c8[0] = local_3c8[0];
    *(longlong *)(local_3c8[0] + 8) = local_3c8[0];
    local_3c8[2] = 0;
    local_3c8[3] = 0;
    local_3c8[4] = 0;
    local_3c8[5] = 7;
    local_3c8[6] = 8;
    local_3d0[0] = 1.0;
    FUN_180024cd0((ulonglong *)(local_3c8 + 2),0x10,local_3c8[0]);
    puVar8 = FUN_18004dc60(local_b8,(float *)local_3d0,(longlong)&local_1b8,(longlong *)&local_418);
    FUN_18004b5c0(local_168,puVar8);
    *(undefined1 *)param_1 = 1;
    FUN_18004b5c0((undefined1 *)(param_1 + 1),local_168);
    FUN_1800225b0(local_168);
    FUN_180022bf0(local_128);
    if (local_130 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_130 + 1;
      lVar20 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_130)(local_130);
        LOCK();
        piVar1 = (int *)((longlong)local_130 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_130 + 8))(local_130);
        }
      }
    }
    FUN_1800225b0(local_b8);
    FUN_180022bf0((longlong *)&local_78);
    if (local_80 != (longlong *)0x0) {
      LOCK();
      plVar11 = local_80 + 1;
      lVar20 = *plVar11;
      *(int *)plVar11 = (int)*plVar11 + -1;
      UNLOCK();
      if ((int)lVar20 == 1) {
        (**(code **)*local_80)(local_80);
        LOCK();
        piVar1 = (int *)((longlong)local_80 + 0xc);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_80 + 8))(local_80);
        }
      }
    }
    FUN_180020a50((longlong)local_3d0);
  }
  else {
    local_1b8 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1b0 = *(undefined8 *)(param_2 + 8);
    plStack_1a8 = *(longlong **)(param_2 + 0x10);
    local_3e8 = param_1;
    FUN_180020900(local_1a0,(undefined8 *)(param_2 + 0x20));
    local_288 = 0;
    plStack_280 = (longlong *)0x0;
    local_278 = (longlong *)0x0;
    local_178 = lVar20 + 1;
    FUN_180031460(local_b8,param_2);
    ppuVar7 = _UNK_18007c628;
    ppuVar6 = _DAT_18007c620;
    if (local_b8[0] != '\0') {
      local_438 = (undefined8 **)0x0;
      ppuStack_430 = (undefined8 **)0x0;
      local_428 = (undefined8 **)0x0;
      ppuStack_420 = (undefined8 **)0x0;
      if (local_78 == local_70) {
        sVar21 = 0;
        local_78 = &DAT_1800789f6;
      }
      else {
        sVar21 = (longlong)local_70 - (longlong)local_78;
      }
      FUN_180027650(&local_438,local_78,sVar21);
      FUN_180020900(&local_418,(undefined8 *)(param_2 + 0x20));
      FUN_1800030f0((undefined8 *)local_2f8,(longlong *)&local_418,(longlong *)&local_438);
      if (0xf < ppuStack_420) {
        ppuVar17 = local_438;
        if ((0xfff < (longlong)ppuStack_420 + 1U) &&
           (ppuVar17 = (undefined8 **)local_438[-1],
           0x1f < (ulonglong)((longlong)local_438 + (-8 - (longlong)ppuVar17)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(ppuVar17);
      }
      local_428 = ppuVar6;
      ppuStack_420 = ppuVar7;
      local_438 = (undefined8 **)((ulonglong)local_438 & 0xffffffffffffff00);
      if (local_2b8 != *(longlong *)(CONCAT44(uStack_2ec,local_2f0) + 8)) {
        do {
          FUN_1800228e0(local_168,(longlong)local_2f8);
          if (local_168[0] != '\0') {
            FUN_180003d10((longlong)local_160);
          }
          FUN_1800216c0(local_168,(longlong)local_2f8);
          if (local_168[0] == '\0') {
            FUN_180023a50((undefined ***)local_3d0,(longlong)local_2f8);
          }
          else {
            local_3d0[0] = (float)CONCAT31(local_3d0[0]._1_3_,local_168[0]);
            FUN_180006cd0(local_3c8,(longlong)local_160);
          }
          if (local_168[0] != '\0') {
            FUN_180003d10((longlong)local_160);
          }
          if ((char)local_3d0[0] != '\0') {
            FUN_180003d10((longlong)local_3c8);
            break;
          }
          pppuVar9 = FUN_180031590((undefined ***)&local_108,(longlong)local_2f8);
          if (*(char *)pppuVar9 == '\0') {
            plVar11 = FUN_18002c560((longlong *)local_3d0);
            puVar12 = FUN_180027b60(local_378,0x18007a300,plVar11);
            FUN_180001e30(&local_438,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_438,(ThrowInfo *)&DAT_180088cf0);
          }
          ppuVar19 = pppuVar9[8];
          local_298 = 0;
          uStack_290 = 0;
          local_2a8 = (undefined8 *****)0x0;
          lStack_2a0 = 0;
          if (ppuVar19 == pppuVar9[9]) {
            sVar21 = 0;
            ppuVar19 = (undefined **)&DAT_1800789f6;
          }
          else {
            sVar21 = (longlong)pppuVar9[9] - (longlong)ppuVar19;
          }
          FUN_180027650(&local_2a8,ppuVar19,sVar21);
          if (local_108 != '\0') {
            FUN_180003d10((longlong)&uStack_100);
          }
          param_4 = (undefined8 *****)0x0;
          pppppuVar13 = &local_2a8;
          if (0xf < uStack_290) {
            pppppuVar13 = (undefined8 *****)local_2a8;
          }
          lVar20 = local_298 - (ulonglong)(local_298 != 0);
          memmove(pppppuVar13,(void *)((ulonglong)(local_298 != 0) + (longlong)pppppuVar13),
                  lVar20 + 1);
          if (plStack_280 == local_278) {
            local_298 = lVar20;
            FUN_18003b740(&local_288,plStack_280,(longlong *)&local_2a8);
          }
          else {
            *plStack_280 = 0;
            plStack_280[1] = 0;
            plStack_280[2] = 0;
            plStack_280[3] = 0;
            *plStack_280 = (longlong)local_2a8;
            plStack_280[1] = lStack_2a0;
            plStack_280[2] = lVar20;
            plStack_280[3] = uStack_290;
            local_298 = 0;
            uStack_290 = 0xf;
            local_2a8 = (undefined8 ****)((ulonglong)local_2a8 & 0xffffffffffffff00);
            plStack_280 = plStack_280 + 4;
          }
          FUN_1800216c0(local_168,(longlong)local_2f8);
          if (local_168[0] == '\0') {
            FUN_180023a50((undefined ***)local_3d0,(longlong)local_2f8);
          }
          else {
            local_3d0[0] = (float)CONCAT31(local_3d0[0]._1_3_,local_168[0]);
            FUN_180006cd0(local_3c8,(longlong)local_160);
          }
          if (local_168[0] != '\0') {
            FUN_180003d10((longlong)local_160);
          }
          if ((char)local_3d0[0] != '\0') {
            FUN_180003d10((longlong)local_3c8);
          }
          if (0xf < uStack_290) {
            pppppuVar13 = (undefined8 *****)local_2a8;
            if ((0xfff < uStack_290 + 1) &&
               (pppppuVar13 = (undefined8 *****)local_2a8[-1],
               0x1f < (ulonglong)((longlong)local_2a8 + (-8 - (longlong)pppppuVar13)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pppppuVar13);
          }
        } while (local_2b8 != *(longlong *)(CONCAT44(uStack_2ec,local_2f0) + 8));
      }
      if (0xf < local_2c0) {
        pvVar18 = local_2d8;
        if ((0xfff < local_2c0 + 1) &&
           (pvVar18 = *(void **)((longlong)local_2d8 + -8),
           0x1f < (ulonglong)((longlong)local_2d8 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar18);
      }
      pppppuVar13 = local_2e8;
      if (local_2e8 != (undefined8 *****)0x0) {
        LOCK();
        pppppuVar2 = local_2e8 + 1;
        iVar4 = *(int *)pppppuVar2;
        *(int *)pppppuVar2 = *(int *)pppppuVar2 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (*(code *)**local_2e8)(local_2e8);
          LOCK();
          piVar1 = (int *)((longlong)pppppuVar13 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (*(code *)(*pppppuVar13)[1])(pppppuVar13);
          }
        }
      }
    }
    if (local_b8[0] != '\0') {
      FUN_180003d10((longlong)local_b0);
    }
    auStack_1e0[0] = 0;
    auStack_1e0[1] = 0;
    auStack_1e0[2] = 0;
    auStack_1e0[3] = 0;
    auStack_1e0[4] = 0;
    local_1f8 = (undefined8 **)0x0;
    lStack_1f0 = 0;
    local_1e8 = 0;
    lVar20 = FUN_18006d620(0x88);
    *(longlong *)lVar20 = lVar20;
    *(longlong *)(lVar20 + 8) = lVar20;
    auStack_1e0[0] = 0;
    auStack_1e0[1] = 0;
    auStack_1e0[2] = 0;
    auStack_1e0[3] = 7;
    auStack_1e0[4] = 8;
    local_1f8._0_4_ = 1.0;
    lStack_1f0 = lVar20;
    FUN_180024cd0(auStack_1e0,0x10,lVar20);
    FUN_18004e020((undefined ***)local_2f8,param_2,lVar20,param_4);
    if (local_2f8[0] == '\0') {
      FUN_180020900((undefined8 *)&local_108,(undefined8 *)&local_2f0);
      *(undefined1 *)param_1 = 0;
      param_1[1] = (undefined8 **)CONCAT71(uStack_107,local_108);
      param_1[2] = (undefined8 **)CONCAT71(uStack_ff,uStack_100);
      param_1[3] = ppuStack_f8;
      param_1[4] = local_f0;
      if (local_2f8[0] == '\0') {
        if ((void *)0xf < local_2d8) {
          pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
          pvVar18 = pvVar5;
          if ((0xfff < (longlong)local_2d8 + 1U) &&
             (pvVar18 = *(void **)((longlong)pvVar5 + -8),
             0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) goto LAB_18004d1c7;
          FUN_18006d9d4(pvVar18);
        }
        local_2e0 = 0;
        local_2d8 = (void *)0xf;
        local_2f0 = (float)((uint)local_2f0 & 0xffffff00);
      }
      else {
        FUN_180020a50((longlong)&local_2f0);
      }
      FUN_180020a50((longlong)&local_1f8);
      FUN_180022bf0(&local_288);
      if (0xf < local_188) {
        pvVar18 = local_1a0[0];
        if ((0xfff < local_188 + 1) &&
           (pvVar18 = *(void **)((longlong)local_1a0[0] + -8),
           0x1f < (ulonglong)((longlong)local_1a0[0] + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar18);
      }
      plVar11 = plStack_1a8;
      if (plStack_1a8 != (longlong *)0x0) {
        LOCK();
        plVar3 = plStack_1a8 + 1;
        lVar20 = *plVar3;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)lVar20 == 1) {
          (**(code **)*plStack_1a8)(plStack_1a8);
          LOCK();
          piVar1 = (int *)((longlong)plVar11 + 0xc);
          iVar4 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar4 == 1) {
            (**(code **)(*plVar11 + 8))(plVar11);
          }
        }
      }
    }
    else {
      local_3f8 = &local_1f8;
      local_1f8._0_4_ = local_2f0;
      FUN_180051330(&lStack_1f0,(size_t *)*local_2e8,(size_t *)local_2e8,param_4);
      uVar10 = FUN_180032de0((float *)&local_1f8,local_1e8);
      FUN_180032b30((longlong)&local_1f8,uVar10);
      if (local_2f8[0] == '\0') {
        pppppuVar13 = local_2e8;
        if ((void *)0xf < local_2d8) {
          pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
          pvVar18 = pvVar5;
          if ((0xfff < (longlong)local_2d8 + 1U) &&
             (pvVar18 = *(void **)((longlong)pvVar5 + -8),
             0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
LAB_18004d1c7:
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar18);
          pppppuVar13 = local_2e8;
        }
      }
      else {
        FUN_180020a50((longlong)&local_2f0);
        pppppuVar13 = local_2e8;
      }
      if (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
        do {
          FUN_180017b20((undefined1 *)&local_268,param_2);
          if ((char)local_268 != '\0') {
            FUN_18004e020((undefined ***)local_2f8,param_2,pppppuVar13,param_4);
            if (local_2f8[0] == '\0') {
              FUN_180020900(&local_438,(undefined8 *)&local_2f0);
              *(undefined1 *)param_1 = 0;
              param_1[1] = local_438;
              param_1[2] = ppuStack_430;
              param_1[3] = local_428;
              param_1[4] = ppuStack_420;
              local_428 = ppuVar6;
              ppuStack_420 = ppuVar7;
              local_438 = (undefined8 **)((ulonglong)local_438 & 0xffffffffffffff00);
              FUN_180001b70((longlong *)&local_438);
              if (local_2f8[0] == '\0') {
                if ((void *)0xf < local_2d8) {
                  pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
                  pvVar18 = pvVar5;
                  if ((0xfff < (longlong)local_2d8 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                     0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18))))
                  goto LAB_18004cd95;
                  FUN_18006d9d4(pvVar18);
                }
                local_2e0 = 0;
                local_2d8 = (void *)0xf;
                local_2f0 = (float)((uint)local_2f0 & 0xffffff00);
              }
              else {
                FUN_180020a50((longlong)&local_2f0);
              }
              if ((char)local_268 == '\0') {
                if (0xf < local_248[0]) {
                  pvVar5 = (void *)CONCAT71(uStack_25f,local_260);
                  pvVar18 = pvVar5;
                  if ((0xfff < local_248[0] + 1) &&
                     (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                     0x1f < (ulonglong)
                            ((longlong)pvVar5 + (-8 - (longlong)*(void **)((longlong)pvVar5 + -8))))
                     ) goto LAB_18004ce15;
LAB_18004ce1c:
                  FUN_18006d9d4(pvVar18);
                }
LAB_18004ce28:
                local_250 = 0;
                local_248[0] = 0xf;
                local_260 = 0;
                goto LAB_18004ce3a;
              }
            }
            else {
              if ((char)local_268 == '\0') {
                pcVar16 = (char *)FUN_180022a20((longlong)&local_268);
                plVar11 = FUN_18002a850((longlong *)local_3d0,pcVar16);
                puVar12 = FUN_180027b60(local_378,0x18007a300,plVar11);
                FUN_180001e30(&local_438,puVar12);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&local_438,(ThrowInfo *)&DAT_180088cf0);
              }
              local_3f8 = (undefined8 ***)local_b8;
              pppuVar9 = (undefined ***)FUN_180006cd0((undefined8 *)local_b8,(longlong)local_248);
              pppppuVar2 = local_258;
              param_4 = (undefined8 *****)CONCAT71(uStack_25f,local_260);
              local_3d8 = &local_438;
              plVar11 = FUN_1800038c0((longlong)local_248,(longlong *)&local_438);
              local_3e8 = (undefined8 ***)local_168;
              puVar12 = FUN_180006cd0((undefined8 *)local_168,(longlong)local_248);
              if (local_2f8[0] == '\0') {
                pcVar16 = (char *)FUN_180022a20((longlong)local_2f8);
                plVar11 = FUN_18002a850((longlong *)local_3d0,pcVar16);
                puVar12 = FUN_180027b60(local_378,0x18007a300,plVar11);
                FUN_180001e30(&local_418,puVar12);
                    /* WARNING: Subroutine does not return */
                _CxxThrowException(&local_418,(ThrowInfo *)&DAT_180088cf0);
              }
              pppppuVar13 = (undefined8 *****)
                            FUN_18004dc60(local_358,&local_2f0,(longlong)puVar12,plVar11);
              FUN_18004ec90(&local_108,&local_1f8,pppppuVar13,param_4,pppppuVar2,pppuVar9,'\x01');
              FUN_1800225b0(local_358);
              FUN_180022bf0(local_318);
              plVar11 = local_320;
              if (local_320 != (longlong *)0x0) {
                LOCK();
                plVar3 = local_320 + 1;
                lVar20 = *plVar3;
                *(int *)plVar3 = (int)*plVar3 + -1;
                UNLOCK();
                if ((int)lVar20 == 1) {
                  (**(code **)*local_320)(local_320);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar11 + 0xc);
                  iVar4 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar4 == 1) {
                    (**(code **)(*plVar11 + 8))(plVar11);
                  }
                }
              }
              if (local_108 != '\0') {
                if (local_2f8[0] == '\0') {
                  if ((void *)0xf < local_2d8) {
                    pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
                    pvVar18 = pvVar5;
                    if ((0xfff < (longlong)local_2d8 + 1U) &&
                       (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18))))
                    goto LAB_18004cd95;
                    FUN_18006d9d4(pvVar18);
                  }
                  local_2e0 = 0;
                  local_2d8 = (void *)0xf;
                  local_2f0 = (float)((uint)local_2f0 & 0xffffff00);
                }
                else {
                  FUN_180020a50((longlong)&local_2f0);
                }
                if ((char)local_268 == '\0') {
                  if (0xf < local_248[0]) {
                    pvVar5 = (void *)CONCAT71(uStack_25f,local_260);
                    pvVar18 = pvVar5;
                    if ((0xfff < local_248[0] + 1) &&
                       (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18))))
                    goto LAB_18004ce15;
                    FUN_18006d9d4(pvVar18);
                  }
                }
                else {
                  FUN_180003d10((longlong)local_248);
                  FUN_180022bf0((longlong *)&local_260);
                }
                goto LAB_18004cb0c;
              }
              FUN_180020900(&local_418,(undefined8 *)&uStack_100);
              *(undefined1 *)param_1 = 0;
              param_1[1] = local_418;
              param_1[2] = ppuStack_410;
              param_1[3] = local_408;
              param_1[4] = ppuStack_400;
              local_408 = ppuVar6;
              ppuStack_400 = ppuVar7;
              local_418 = (undefined8 **)((ulonglong)local_418 & 0xffffffffffffff00);
              FUN_180001b70((longlong *)&local_418);
              if (local_108 == '\0') {
                if ((undefined8 **)0xf < ppuStack_e8) {
                  pvVar5 = (void *)CONCAT71(uStack_ff,uStack_100);
                  pvVar18 = pvVar5;
                  if ((0xfff < (longlong)ppuStack_e8 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                     0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                local_f0 = (undefined8 **)0x0;
                ppuStack_e8 = (undefined8 **)0xf;
                uStack_100 = 0;
              }
              if (local_2f8[0] == '\0') {
                if ((void *)0xf < local_2d8) {
                  pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
                  pvVar18 = pvVar5;
                  if ((0xfff < (longlong)local_2d8 + 1U) &&
                     (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                     0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
LAB_18004cd95:
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                local_2e0 = 0;
                local_2d8 = (void *)0xf;
                local_2f0 = (float)((uint)local_2f0 & 0xffffff00);
              }
              else {
                FUN_180020a50((longlong)&local_2f0);
              }
              if ((char)local_268 == '\0') {
                if (0xf < local_248[0]) {
                  pvVar5 = (void *)CONCAT71(uStack_25f,local_260);
                  pvVar18 = pvVar5;
                  if ((0xfff < local_248[0] + 1) &&
                     (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                     0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
LAB_18004ce15:
                    /* WARNING: Subroutine does not return */
                    _invalid_parameter_noinfo_noreturn();
                  }
                  FUN_18006d9d4(pvVar18);
                }
                goto LAB_18004ce28;
              }
            }
LAB_18004cdc3:
            FUN_180003d10((longlong)local_248);
            FUN_180022bf0((longlong *)&local_260);
            goto LAB_18004ce3a;
          }
          if (0xf < local_248[0]) {
            pvVar5 = (void *)CONCAT71(uStack_25f,local_260);
            pvVar18 = pvVar5;
            if ((0xfff < local_248[0] + 1) &&
               (pvVar18 = *(void **)((longlong)pvVar5 + -8),
               0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar18);
          }
          FUN_180017010((undefined1 *)&local_268,param_2);
          if ((char)local_268 == '\0') {
            FUN_18001bbc0((char *)&local_268);
            local_418 = (undefined8 **)0x0;
            ppuStack_410 = (undefined8 **)0x0;
            local_408 = (undefined8 **)0x0;
            puVar15 = FUN_180004170((undefined4 *)local_168,param_2);
            FUN_180026f20((undefined4 *)&local_268,puVar15,"unknown format");
            local_3f8 = &local_268;
            pppuStack_3f0 = &local_1f8;
            FUN_18001fb60(&local_438,(longlong *)&local_3f8);
            FUN_1800208c0((undefined8 *)&local_108,"toml::parse_toml_file: unknown line appeared");
            plVar11 = FUN_1800042c0((longlong *)local_3d0,&local_108,(longlong *)&local_438,
                                    (longlong *)&local_418);
            puVar12 = FUN_180026fe0(local_378,plVar11);
            FUN_18001b550((undefined1 *)param_1,puVar12);
            FUN_180001b70(local_378);
            FUN_180001b70((longlong *)local_3d0);
            FUN_180001b70((longlong *)&local_108);
            FUN_180022b20((longlong *)&local_438);
            _eh_vector_destructor_iterator_(&local_268,0x70,1,FUN_180006d60);
            FUN_180005140((longlong)local_168);
            FUN_180022bf0((longlong *)&local_418);
            goto LAB_18004ce3a;
          }
          FUN_18004e020((undefined ***)local_2f8,param_2,pppppuVar13,param_4);
          if (local_2f8[0] == '\0') {
            FUN_180020900(&local_438,(undefined8 *)&local_2f0);
            *(undefined1 *)param_1 = 0;
            param_1[1] = local_438;
            param_1[2] = ppuStack_430;
            param_1[3] = local_428;
            param_1[4] = ppuStack_420;
            local_428 = ppuVar6;
            ppuStack_420 = ppuVar7;
            local_438 = (undefined8 **)((ulonglong)local_438 & 0xffffffffffffff00);
            FUN_180001b70((longlong *)&local_438);
            if (local_2f8[0] == '\0') {
              if ((void *)0xf < local_2d8) {
                pvVar5 = (void *)CONCAT44(uStack_2ec,local_2f0);
                pvVar18 = pvVar5;
                if ((0xfff < (longlong)local_2d8 + 1U) &&
                   (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                   0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar18);
              }
              local_2e0 = 0;
              local_2d8 = (void *)0xf;
              local_2f0 = (float)((uint)local_2f0 & 0xffffff00);
            }
            else {
              FUN_180020a50((longlong)&local_2f0);
            }
            if ((char)local_268 == '\0') {
              if (0xf < local_248[0]) {
                pvVar5 = (void *)CONCAT71(uStack_25f,local_260);
                pvVar18 = pvVar5;
                if ((0xfff < local_248[0] + 1) &&
                   (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                   0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_18004ce1c;
              }
              goto LAB_18004ce28;
            }
            goto LAB_18004cdc3;
          }
          if ((char)local_268 == '\0') {
            pcVar16 = (char *)FUN_180022a20((longlong)&local_268);
            plVar11 = FUN_18002a850((longlong *)local_3d0,pcVar16);
            puVar12 = FUN_180027b60(local_378,0x18007a300,plVar11);
            FUN_180001e30(&local_438,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_438,(ThrowInfo *)&DAT_180088cf0);
          }
          local_3f8 = (undefined8 ***)local_168;
          pppuVar9 = (undefined ***)FUN_180006cd0((undefined8 *)local_168,(longlong)local_248);
          pppppuVar2 = local_258;
          param_4 = (undefined8 *****)CONCAT71(uStack_25f,local_260);
          local_3d8 = &local_438;
          plVar11 = FUN_1800038c0((longlong)local_248,(longlong *)&local_438);
          local_3e8 = (undefined8 ***)local_b8;
          puVar12 = FUN_180006cd0((undefined8 *)local_b8,(longlong)local_248);
          if (local_2f8[0] == '\0') {
            pcVar16 = (char *)FUN_180022a20((longlong)local_2f8);
            plVar11 = FUN_18002a850((longlong *)local_3d0,pcVar16);
            puVar12 = FUN_180027b60(local_378,0x18007a300,plVar11);
            FUN_180001e30(&local_418,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_418,(ThrowInfo *)&DAT_180088cf0);
          }
          pppppuVar13 = (undefined8 *****)
                        FUN_18004dc60(local_358,&local_2f0,(longlong)puVar12,plVar11);
          FUN_18004ec90(&local_108,&local_1f8,pppppuVar13,param_4,pppppuVar2,pppuVar9,'\0');
          FUN_1800225b0(local_358);
          FUN_180022bf0(local_318);
          plVar11 = local_320;
          if (local_320 != (longlong *)0x0) {
            LOCK();
            plVar3 = local_320 + 1;
            lVar20 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar20 == 1) {
              (**(code **)*local_320)(local_320);
              LOCK();
              piVar1 = (int *)((longlong)plVar11 + 0xc);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                (**(code **)(*plVar11 + 8))(plVar11);
              }
            }
          }
          if (local_108 == '\0') {
            FUN_180020900(&local_418,(undefined8 *)&uStack_100);
            *(undefined1 *)param_1 = 0;
            param_1[1] = local_418;
            param_1[2] = ppuStack_410;
            param_1[3] = local_408;
            param_1[4] = ppuStack_400;
            local_408 = ppuVar6;
            ppuStack_400 = ppuVar7;
            local_418 = (undefined8 **)((ulonglong)local_418 & 0xffffffffffffff00);
            FUN_180001b70((longlong *)&local_418);
            if (local_108 == '\0') {
              if ((undefined8 **)0xf < ppuStack_e8) {
                pvVar5 = (void *)CONCAT71(uStack_ff,uStack_100);
                pvVar18 = pvVar5;
                if ((0xfff < (longlong)ppuStack_e8 + 1U) &&
                   (pvVar18 = *(void **)((longlong)pvVar5 + -8),
                   0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar18)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar18);
              }
              local_f0 = ppuVar6;
              ppuStack_e8 = ppuVar7;
              uStack_100 = 0;
            }
            FUN_18004dbc0(local_2f8);
            FUN_18001bbc0((char *)&local_268);
            goto LAB_18004ce3a;
          }
          FUN_18001b4e0(&local_108);
          FUN_18004dbc0(local_2f8);
          FUN_18001bbc0((char *)&local_268);
LAB_18004cb0c:
        } while (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8));
      }
      local_3f8 = &local_438;
      puVar14 = FUN_180020410((ulonglong *)&local_438,&local_288);
      puVar12 = FUN_180006cd0((undefined8 *)local_168,(longlong)&local_1b8);
      puVar8 = FUN_18004dc60(local_b8,(float *)&local_1f8,(longlong)puVar12,(longlong *)puVar14);
      FUN_18004b5c0(local_358,puVar8);
      FUN_18004dc40((undefined1 *)param_1,local_358);
      FUN_1800197a0((longlong)local_358);
      FUN_1800197a0((longlong)local_b8);
LAB_18004ce3a:
      FUN_180020a50((longlong)&local_1f8);
      FUN_180022bf0(&local_288);
      FUN_180003d10((longlong)&local_1b8);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 193/227
// FUNCTION: FUN_18004d6d0
// ENTRY: 18004d6d0
// RVA: 0x4D6D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18004d6d0(longlong * param_1, undefined1 * param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_18004d6d0(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  size_t sVar4;
  longlong lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_18008d040 ^ (ulonglong)auStack_a8;
  lVar11 = *param_1;
  lVar5 = ((longlong)param_2 - lVar11) / 0x12 + ((longlong)param_2 - lVar11 >> 0x3f);
  lVar9 = (param_1[1] - lVar11) / 0x48;
  if (lVar9 == 0x38e38e38e38e38e) {
                    /* WARNING: Subroutine does not return */
    FUN_180022bd0();
  }
  local_78 = lVar9 + 1;
  uVar1 = (param_1[2] - lVar11) / 0x48;
  if (uVar1 <= 0x38e38e38e38e38e - (uVar1 >> 1)) {
    uVar1 = (uVar1 >> 1) + uVar1;
    uVar12 = local_78;
    if (local_78 <= uVar1) {
      uVar12 = uVar1;
    }
    if (uVar12 < 0x38e38e38e38e38f) {
      sVar4 = uVar12 * 0x48;
      local_80 = uVar12;
      if (sVar4 == 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else if (sVar4 < 0x1000) {
        puVar7 = (undefined1 *)FUN_18006d620(sVar4);
      }
      else {
        if (sVar4 + 0x27 <= sVar4) goto LAB_18004d90a;
        lVar11 = FUN_18006d620(sVar4 + 0x27);
        if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        puVar7 = (undefined1 *)(lVar11 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar7 + -8) = lVar11;
      }
      lVar11 = ((lVar5 >> 2) - (lVar5 >> 0x3f)) * 0x48;
      puVar10 = puVar7 + lVar11;
      local_88 = puVar10 + 0x48;
      local_70 = puVar10;
      local_68 = local_88;
      local_60 = puVar7;
      FUN_18001f970(puVar10,param_3);
      puVar2 = (undefined1 *)param_1[1];
      puVar6 = (undefined1 *)*param_1;
      puVar8 = puVar7;
      local_88 = puVar10;
      puVar10 = puVar7;
      plVar3 = param_1;
      if (param_2 == puVar2) {
        for (; local_48 = plVar3, local_58 = puVar10, puStack_50 = puVar8, puVar6 != puVar2;
            puVar6 = puVar6 + 0x48) {
          FUN_18001f970(puVar8,puVar6);
          puVar8 = puVar8 + 0x48;
          puVar10 = local_58;
          plVar3 = local_48;
        }
      }
      else {
        if (puVar6 != param_2) {
          lVar9 = (longlong)puVar7 - (longlong)puVar6;
          do {
            FUN_180032fc0(puVar6 + lVar9,puVar6);
            puVar6 = puVar6 + 0x48;
          } while (puVar6 != param_2);
        }
        puVar10 = (undefined1 *)param_1[1];
        local_88 = puVar7;
        if (param_2 != puVar10) {
          lVar11 = lVar11 - (longlong)param_2;
          do {
            FUN_180032fc0(puVar7 + lVar11 + 0x48 + (longlong)param_2,param_2);
            param_2 = param_2 + 0x48;
          } while (param_2 != puVar10);
        }
      }
      FUN_18004ddc0(param_1,(longlong)puVar7,local_78,uVar12);
      return local_70;
    }
  }
LAB_18004d90a:
                    /* WARNING: Subroutine does not return */
  FUN_1800016c0();
}



// ============================================================
// INDEX: 194/227
// FUNCTION: FUN_18004dc60
// ENTRY: 18004dc60
// RVA: 0x4DC60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18004dc60(undefined1 * param_1, float * param_2, longlong param_3, longlong * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_18004dc60(undefined1 *param_1,float *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined1 auStack_78 [32];
  float *local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_78;
  *param_1 = 10;
  lVar6 = param_3;
  plVar7 = param_4;
  local_50 = param_1;
  local_48 = param_3;
  local_40 = param_4;
  local_58 = (float *)FUN_18006d620(0x58);
  *(undefined8 *)local_58 = 0;
  *(undefined8 *)((longlong)local_58 + 8) = 0;
  *(undefined4 *)((longlong)local_58 + 8) = 1;
  *(undefined4 *)((longlong)local_58 + 0xc) = 1;
  *(undefined ***)local_58 = std::_Ref_count_obj2<toml::detail::region>::vftable;
  *(undefined8 *)((longlong)local_58 + 0x10) = toml::detail::region::vftable;
  *(undefined8 *)((longlong)local_58 + 0x18) = 0;
  *(undefined8 *)((longlong)local_58 + 0x20) = 0;
  *(undefined8 *)((longlong)local_58 + 0x18) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)((longlong)local_58 + 0x20) = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  *(undefined8 *)((longlong)local_58 + 0x28) = 0;
  *(undefined8 *)((longlong)local_58 + 0x30) = 0;
  *(undefined8 *)((longlong)local_58 + 0x38) = 0;
  *(undefined8 *)((longlong)local_58 + 0x40) = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)((longlong)local_58 + 0x28) = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)((longlong)local_58 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)((longlong)local_58 + 0x38) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)((longlong)local_58 + 0x40) = uVar4;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0xf;
  *(undefined1 *)(param_3 + 0x18) = 0;
  *(undefined8 *)((longlong)local_58 + 0x48) = *(undefined8 *)(param_3 + 0x38);
  *(undefined8 *)((longlong)local_58 + 0x50) = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 **)(param_1 + 0x30) = (undefined8 *)((longlong)local_58 + 0x10);
  *(float **)(param_1 + 0x38) = local_58;
  lVar1 = param_4[2];
  param_4[2] = 0;
  lVar2 = param_4[1];
  param_4[1] = 0;
  lVar3 = *param_4;
  *param_4 = 0;
  *(longlong *)(param_1 + 0x40) = lVar3;
  *(longlong *)(param_1 + 0x48) = lVar2;
  *(longlong *)(param_1 + 0x50) = lVar1;
  local_58 = (float *)FUN_18006d620(0x40);
  local_58[0] = 0.0;
  local_58[1] = 0.0;
  local_58[2] = 0.0;
  local_58[3] = 0.0;
  local_58[4] = 0.0;
  local_58[5] = 0.0;
  local_58[6] = 0.0;
  local_58[7] = 0.0;
  local_58[8] = 0.0;
  local_58[9] = 0.0;
  local_58[10] = 0.0;
  local_58[0xb] = 0.0;
  local_58[0xc] = 0.0;
  local_58[0xd] = 0.0;
  local_58[0xe] = 0.0;
  local_58[0xf] = 0.0;
  pfVar5 = FUN_180040660(local_58,param_2,lVar6,plVar7);
  *(float **)(param_1 + 8) = pfVar5;
  FUN_180003d10(param_3);
  FUN_180022bf0(param_4);
  return param_1;
}



// ============================================================
// INDEX: 195/227
// FUNCTION: FUN_18004dea0
// ENTRY: 18004dea0
// RVA: 0x4DEA0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: basic_ostream<char,std::char_traits<char>_> * FUN_18004dea0(basic_ostream<char,std::char_traits<char>_> * param_1, undefined1 param_2)
// ============================================================

basic_ostream<char,std::char_traits<char>_> *
FUN_18004dea0(basic_ostream<char,std::char_traits<char>_> *param_1,undefined1 param_2)

{
  switch(param_2) {
  case 0:
    FUN_180026900(param_1,"empty");
    return param_1;
  case 1:
    FUN_180026900(param_1,"boolean");
    return param_1;
  case 2:
    FUN_180026900(param_1,"integer");
    return param_1;
  case 3:
    FUN_180026900(param_1,"floating");
    return param_1;
  case 4:
    FUN_180026900(param_1,"string");
    return param_1;
  case 5:
    FUN_180026900(param_1,"offset_datetime");
    return param_1;
  case 6:
    FUN_180026900(param_1,"local_datetime");
    return param_1;
  case 7:
    FUN_180026900(param_1,"local_date");
    return param_1;
  case 8:
    FUN_180026900(param_1,"local_time");
    return param_1;
  case 9:
    FUN_180026900(param_1,"array");
    return param_1;
  case 10:
    FUN_180026900(param_1,"table");
    return param_1;
  default:
    FUN_180026900(param_1,"unknown");
    return param_1;
  }
}



// ============================================================
// INDEX: 196/227
// FUNCTION: FUN_18004e020
// ENTRY: 18004e020
// RVA: 0x4E020
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined * * * FUN_18004e020(undefined * * * param_1, longlong param_2, undefined8 param_3, undefined8 * * * * * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined ***
FUN_18004e020(undefined ***param_1,longlong param_2,undefined8 param_3,undefined8 *****param_4)

{
  byte bVar1;
  undefined1 (*pauVar2) [32];
  undefined1 (*pauVar3) [32];
  void *pvVar4;
  int iVar5;
  undefined8 *****pppppuVar6;
  undefined4 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 ***pppuVar10;
  void *pvVar11;
  undefined8 *puVar12;
  size_t sVar13;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined1 auStackY_378 [32];
  undefined ***local_338 [2];
  undefined8 local_328;
  undefined **ppuStack_320;
  undefined **local_318;
  undefined **ppuStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  void *local_2e8;
  undefined8 uStack_2e0;
  undefined **local_2d8;
  undefined **ppuStack_2d0;
  void *local_2c0;
  undefined8 uStack_2b8;
  undefined **local_2b0;
  undefined **ppuStack_2a8;
  undefined **local_2a0;
  undefined **ppuStack_298;
  undefined **local_290;
  undefined **ppuStack_288;
  longlong local_280 [3];
  undefined8 local_268;
  undefined **local_258;
  void *local_250;
  void *pvStack_248;
  undefined8 local_240;
  undefined **local_238;
  undefined **ppuStack_230;
  undefined1 local_228;
  undefined7 uStack_227;
  longlong local_220;
  undefined **local_218;
  undefined **ppuStack_210;
  undefined8 **local_1e8;
  undefined8 *****pppppuStack_1e0;
  undefined8 local_1d8;
  ulonglong auStack_1d0 [5];
  longlong local_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  undefined **local_198;
  undefined **ppuStack_190;
  ulonglong local_188;
  undefined8 local_168;
  uint local_160;
  undefined4 uStack_15c;
  undefined8 *****local_158;
  undefined8 uStack_150;
  ulonglong local_148;
  void *pvStack_140;
  void *local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined **local_108;
  undefined8 ****ppppuStack_100;
  undefined1 local_f8 [80];
  char local_a8 [8];
  undefined1 local_a0 [72];
  ulonglong local_58;
  size_t sVar14;
  
  local_58 = DAT_18008d040 ^ (ulonglong)auStackY_378;
  local_338[0] = param_1;
  if (*(longlong *)(param_2 + 0x40) == *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
    local_318 = (undefined **)0x0;
    ppuStack_320 = (undefined **)FUN_18006d620(0x88);
    *ppuStack_320 = (undefined *)ppuStack_320;
    ppuStack_320[1] = (undefined *)ppuStack_320;
    ppuStack_310 = (undefined **)0x0;
    uStack_308 = 0;
    local_300 = 0;
    local_2f8 = 7;
    local_2f0 = 8;
    local_328._0_4_ = 1.0;
    FUN_180024cd0((ulonglong *)&ppuStack_310,0x10,ppuStack_320);
    FUN_180051cc0((undefined4 *)&local_1a8,(undefined4 *)&local_328);
    *(undefined1 *)param_1 = 1;
    FUN_180051cc0((undefined4 *)(param_1 + 1),(undefined4 *)&local_1a8);
    FUN_180020a50((longlong)&local_1a8);
    pppuVar10 = (undefined8 ***)&local_328;
  }
  else {
    FUN_18001a800(local_a8,param_2);
    if (local_a8[0] != '\0') {
      FUN_180003d10((longlong)local_a0);
    }
    FUN_18001b6c0(local_a8,param_2);
    if (local_a8[0] != '\0') {
      FUN_180003d10((longlong)local_a0);
    }
    auStack_1d0[0] = 0;
    auStack_1d0[1] = 0;
    auStack_1d0[2] = 0;
    auStack_1d0[3] = 0;
    auStack_1d0[4] = 0;
    local_1e8 = (undefined8 **)0x0;
    pppppuStack_1e0 = (undefined8 *****)0x0;
    local_1d8 = 0;
    pppppuVar6 = (undefined8 *****)FUN_18006d620(0x88);
    *pppppuVar6 = pppppuVar6;
    pppppuVar6[1] = pppppuVar6;
    auStack_1d0[0] = 0;
    auStack_1d0[1] = 0;
    auStack_1d0[2] = 0;
    auStack_1d0[3] = 7;
    auStack_1d0[4] = 8;
    local_1e8 = (undefined8 **)CONCAT44(local_1e8._4_4_,0x3f800000);
    pppppuStack_1e0 = pppppuVar6;
    FUN_180024cd0(auStack_1d0,0x10,pppppuVar6);
    if (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8)) {
LAB_18004e200:
      FUN_18001b6c0((undefined1 *)&local_258,param_2);
      if ((char)local_258 != '\0') {
        FUN_180003d10((longlong)&local_250);
      }
      pauVar2 = *(undefined1 (**) [32])(param_2 + 0x40);
      FUN_180017b20((undefined1 *)&local_258,param_2);
      if ((char)local_258 == '\0') {
        if ((undefined **)0xf < local_238) {
          pvVar11 = local_250;
          if ((0xfff < (longlong)local_238 + 1U) &&
             (pvVar11 = *(void **)((longlong)local_250 + -8),
             0x1f < (ulonglong)((longlong)local_250 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar11);
        }
        FUN_180017010((undefined1 *)&local_258,param_2);
        if ((char)local_258 != '\0') {
          pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
          uVar15 = CONCAT71((int7)((ulonglong)pppppuVar6 >> 8),10);
          if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
            lVar9 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
          }
          else {
            lVar9 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar9;
          }
          *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
          FUN_180040660((float *)&local_328,(float *)&local_1e8,uVar15,param_4);
          *(undefined1 *)param_1 = 1;
          FUN_180051cc0((undefined4 *)(param_1 + 1),(undefined4 *)&local_328);
          FUN_180020a50((longlong)&local_328);
          if ((char)local_258 == '\0') {
            if ((undefined **)0xf < local_238) {
              pvVar11 = local_250;
              if ((0xfff < (longlong)local_238 + 1U) &&
                 (pvVar11 = *(void **)((longlong)local_250 + -8),
                 0x1f < (ulonglong)
                        ((longlong)local_250 + (-8 - (longlong)*(void **)((longlong)local_250 + -8))
                        ))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              goto LAB_18004ebcb;
            }
            goto LAB_18004ebd0;
          }
          goto LAB_18004eb7b;
        }
        if ((undefined **)0xf < local_238) {
          pvVar11 = local_250;
          if ((0xfff < (longlong)local_238 + 1U) &&
             (pvVar11 = *(void **)((longlong)local_250 + -8),
             0x1f < (ulonglong)((longlong)local_250 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
            _invalid_parameter_noinfo_noreturn();
          }
          FUN_18006d9d4(pvVar11);
        }
        FUN_180051e30((longlong **)&local_168,param_2,0,param_4);
        if ((char)local_168 == '\0') {
          FUN_180020900(&local_328,(undefined8 *)&local_160);
          *(undefined1 *)param_1 = 0;
          param_1[1] = (undefined **)CONCAT44(local_328._4_4_,(float)local_328);
          param_1[2] = ppuStack_320;
          param_1[3] = local_318;
          param_1[4] = ppuStack_310;
          if ((char)local_168 == '\0') {
            if (0xf < local_148) {
              pvVar4 = (void *)CONCAT44(uStack_15c,local_160);
              pvVar11 = pvVar4;
              if ((0xfff < local_148 + 1) &&
                 (pvVar11 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
LAB_18004eb12:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
LAB_18004ea80:
              FUN_18006d9d4(pvVar11);
            }
LAB_18004ea85:
            uStack_150 = 0;
            local_148 = 0xf;
            local_160 = local_160 & 0xffffff00;
          }
          else {
LAB_18004ea30:
            FUN_180051db0((longlong *)&local_160);
          }
        }
        else {
          local_338[0] = &local_258;
          local_258 = toml::detail::region::vftable;
          if (local_138 != (void *)0x0) {
            LOCK();
            *(int *)((longlong)local_138 + 8) = *(int *)((longlong)local_138 + 8) + 1;
            UNLOCK();
          }
          local_250 = pvStack_140;
          pvStack_248 = local_138;
          FUN_180020900(&local_240,&uStack_130);
          local_220 = lStack_110;
          local_218 = local_108;
          param_4 = (undefined8 *****)CONCAT44(uStack_15c,local_160);
          pppppuVar6 = &ppppuStack_100;
          FUN_18004ec90((undefined1 *)&local_1a8,&local_1e8,pppppuVar6,param_4,local_158,&local_258,
                        '\0');
          if ((char)local_1a8 == '\0') {
            FUN_180020900(&local_328,(undefined8 *)&local_1a0);
            *(undefined1 *)param_1 = 0;
            param_1[1] = (undefined **)CONCAT44(local_328._4_4_,(float)local_328);
            param_1[2] = ppuStack_320;
            param_1[3] = local_318;
            param_1[4] = ppuStack_310;
            if ((char)local_1a8 == '\0') {
              if (0xf < local_188) {
                pvVar4 = (void *)CONCAT71(uStack_19f,local_1a0);
                pvVar11 = pvVar4;
                if ((0xfff < local_188 + 1) &&
                   (pvVar11 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                FUN_18006d9d4(pvVar11);
              }
              ppuStack_190 = (undefined **)0x0;
              local_188 = 0xf;
              local_1a0 = 0;
            }
            if ((char)local_168 == '\0') {
              if (0xf < local_148) {
                pvVar4 = (void *)CONCAT44(uStack_15c,local_160);
                pvVar11 = pvVar4;
                if ((0xfff < local_148 + 1) &&
                   (pvVar11 = *(void **)((longlong)pvVar4 + -8),
                   0x1f < (ulonglong)
                          ((longlong)pvVar4 + (-8 - (longlong)*(void **)((longlong)pvVar4 + -8)))))
                {
                    /* WARNING: Subroutine does not return */
                  _invalid_parameter_noinfo_noreturn();
                }
                goto LAB_18004ea80;
              }
              goto LAB_18004ea85;
            }
            goto LAB_18004ea30;
          }
          if ((char)local_168 == '\0') {
            if (0xf < local_148) {
              pvVar4 = (void *)CONCAT44(uStack_15c,local_160);
              pvVar11 = pvVar4;
              if ((0xfff < local_148 + 1) &&
                 (pvVar11 = *(void **)((longlong)pvVar4 + -8),
                 0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11))))
              goto LAB_18004eb12;
              FUN_18006d9d4(pvVar11);
            }
          }
          else {
            FUN_180051db0((longlong *)&local_160);
          }
          FUN_18001b6c0((undefined1 *)&local_258,param_2);
          if ((char)local_258 != '\0') {
            FUN_180003d10((longlong)&local_250);
          }
          FUN_180031590(&local_258,param_2);
          if ((char)local_258 != '\0') {
            FUN_180003d10((longlong)&local_250);
          }
          FUN_18001a800(local_a8,param_2);
          if ((local_a8[0] != '\0') ||
             (pauVar2 = *(undefined1 (**) [32])(param_2 + 0x40),
             pauVar2 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)))
          goto LAB_18004e446;
          FUN_18001b6c0((undefined1 *)&local_258,param_2);
          if ((char)local_258 != '\0') {
            FUN_180003d10((longlong)&local_250);
          }
          local_2a0 = (undefined **)0x0;
          ppuStack_298 = (undefined **)0x0;
          local_290 = (undefined **)0x0;
          puVar7 = FUN_180004170((undefined4 *)&local_258,param_2);
          bVar1 = **(byte **)(param_2 + 0x40);
          iVar5 = isgraph((uint)bVar1);
          if (iVar5 == 0) {
            local_268 = (undefined1 *)((ulonglong)local_268 & 0xffffff0000000000);
            FUN_180001db0(&local_268,5,"0x%02x",(ulonglong)bVar1);
            local_2e8 = (void *)0x0;
            uStack_2e0 = 0;
            local_2d8 = (undefined **)0x0;
            ppuStack_2d0 = (undefined **)0x0;
            sVar14 = 0xffffffffffffffff;
            do {
              sVar13 = sVar14 + 1;
              lVar9 = sVar14 + 1;
              sVar14 = sVar13;
            } while (*(char *)((longlong)&local_268 + lVar9) != '\0');
            puVar12 = &local_268;
            FUN_180027650(&local_2e8,puVar12,sVar13);
          }
          else {
            puVar12 = (undefined8 *)0x1;
            FUN_1800207b0(&local_2e8,1,bVar1);
          }
          plVar8 = FUN_180043b60(&local_328,puVar12,(char *)&local_2e8);
          local_168._0_4_ = *puVar7;
          local_168._4_4_ = puVar7[1];
          local_160 = puVar7[2];
          local_158 = *(undefined8 ******)(puVar7 + 4);
          uStack_150 = *(undefined8 *)(puVar7 + 6);
          local_148 = *(ulonglong *)(puVar7 + 8);
          pvStack_140 = *(void **)(puVar7 + 10);
          *(undefined8 *)(puVar7 + 10) = 0xf;
          *(undefined8 *)(puVar7 + 8) = 0;
          *(undefined1 *)(puVar7 + 4) = 0;
          local_138 = *(void **)(puVar7 + 0xc);
          uStack_130 = *(undefined8 *)(puVar7 + 0xe);
          local_128 = *(undefined8 *)(puVar7 + 0x10);
          uStack_120 = *(undefined8 *)(puVar7 + 0x12);
          *(undefined8 *)(puVar7 + 0x12) = 0xf;
          *(undefined8 *)(puVar7 + 0x10) = 0;
          *(undefined1 *)(puVar7 + 0xc) = 0;
          local_118 = *plVar8;
          lStack_110 = plVar8[1];
          local_108 = (undefined **)plVar8[2];
          ppppuStack_100 = (undefined8 ****)plVar8[3];
          plVar8[2] = 0;
          plVar8[3] = 0xf;
          *(undefined1 *)plVar8 = 0;
          local_338[0] = (undefined ***)&local_168;
          local_268 = local_f8;
          local_280[0] = 0;
          local_280[1] = 0;
          local_280[2] = 0;
          FUN_18002c400(local_280,1,local_338,&local_268);
          local_2c0 = (void *)0x0;
          uStack_2b8 = 0;
          local_2b0 = (undefined **)0x0;
          ppuStack_2a8 = (undefined **)0x0;
          FUN_180027650(&local_2c0,"toml::parse_table: invalid line format",0x26);
          FUN_1800042c0(&local_1a8,(char *)&local_2c0,local_280,(longlong *)&local_2a0);
          if (0xf < ppuStack_2a8) {
            pvVar11 = local_2c0;
            if ((0xfff < (longlong)ppuStack_2a8 + 1U) &&
               (pvVar11 = *(void **)((longlong)local_2c0 + -8),
               0x1f < (ulonglong)((longlong)local_2c0 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar11);
          }
          ppuVar17 = _UNK_18007c628;
          ppuVar16 = _DAT_18007c620;
          local_2b0 = _DAT_18007c620;
          ppuStack_2a8 = _UNK_18007c628;
          local_2c0 = (void *)((ulonglong)local_2c0 & 0xffffffffffffff00);
          FUN_180022b20(local_280);
          _eh_vector_destructor_iterator_(&local_168,0x70,1,FUN_180006d60);
          if ((undefined **)0xf < ppuStack_310) {
            pvVar4 = (void *)CONCAT44(local_328._4_4_,(float)local_328);
            pvVar11 = pvVar4;
            if ((0xfff < (longlong)ppuStack_310 + 1U) &&
               (pvVar11 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar11);
          }
          local_318 = ppuVar16;
          ppuStack_310 = ppuVar17;
          local_328._0_4_ = (float)((uint)(float)local_328 & 0xffffff00);
          if ((undefined **)0xf < ppuStack_2d0) {
            pvVar11 = local_2e8;
            if ((0xfff < (longlong)ppuStack_2d0 + 1U) &&
               (pvVar11 = *(void **)((longlong)local_2e8 + -8),
               0x1f < (ulonglong)((longlong)local_2e8 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar11);
          }
          local_2d8 = ppuVar16;
          ppuStack_2d0 = ppuVar17;
          local_2e8 = (void *)((ulonglong)local_2e8 & 0xffffffffffffff00);
          if ((undefined **)0xf < ppuStack_210) {
            pvVar4 = (void *)CONCAT71(uStack_227,local_228);
            pvVar11 = pvVar4;
            if ((0xfff < (longlong)ppuStack_210 + 1U) &&
               (pvVar11 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) goto LAB_18004e8bc;
            FUN_18006d9d4(pvVar11);
          }
          local_218 = ppuVar16;
          ppuStack_210 = ppuVar17;
          local_228 = 0;
          if ((undefined **)0xf < ppuStack_230) {
            pvVar11 = pvStack_248;
            if ((0xfff < (longlong)ppuStack_230 + 1U) &&
               (pvVar11 = *(void **)((longlong)pvStack_248 + -8),
               0x1f < (ulonglong)((longlong)pvStack_248 + (-8 - (longlong)pvVar11)))) {
LAB_18004e8bc:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar11);
          }
          local_238 = ppuVar16;
          ppuStack_230 = ppuVar17;
          pvStack_248 = (void *)((ulonglong)pvStack_248 & 0xffffffffffffff00);
          FUN_180022bf0((longlong *)&local_2a0);
          pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
          if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
            lVar9 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
          }
          else {
            lVar9 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
            *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar9;
          }
          *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
          FUN_180020900(&local_2a0,&local_1a8);
          *(undefined1 *)param_1 = 0;
          param_1[1] = local_2a0;
          param_1[2] = ppuStack_298;
          param_1[3] = local_290;
          param_1[4] = ppuStack_288;
          if ((undefined **)0xf < ppuStack_190) {
            pvVar4 = (void *)CONCAT71(local_1a8._1_7_,(char)local_1a8);
            pvVar11 = pvVar4;
            if ((0xfff < (longlong)ppuStack_190 + 1U) &&
               (pvVar11 = *(void **)((longlong)pvVar4 + -8),
               0x1f < (ulonglong)((longlong)pvVar4 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar11);
          }
          local_198 = ppuVar16;
          ppuStack_190 = ppuVar17;
          local_1a8._0_1_ = '\0';
          if (local_a8[0] != '\0') {
            FUN_180003d10((longlong)local_a0);
          }
        }
      }
      else {
        pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
        uVar15 = CONCAT71((int7)((ulonglong)pppppuVar6 >> 8),10);
        if ((longlong)pauVar3 - (longlong)pauVar2 < 0) {
          lVar9 = thunk_FUN_18006cb20(pauVar3,pauVar2,10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
        }
        else {
          lVar9 = thunk_FUN_18006cb20(pauVar2,pauVar3,10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) - lVar9;
        }
        *(undefined1 (**) [32])(param_2 + 0x40) = pauVar2;
        FUN_180040660((float *)&local_328,(float *)&local_1e8,uVar15,param_4);
        *(undefined1 *)param_1 = 1;
        FUN_180051cc0((undefined4 *)(param_1 + 1),(undefined4 *)&local_328);
        FUN_180020a50((longlong)&local_328);
        if ((char)local_258 == '\0') {
          if ((undefined **)0xf < local_238) {
            pvVar11 = local_250;
            if ((0xfff < (longlong)local_238 + 1U) &&
               (pvVar11 = *(void **)((longlong)local_250 + -8),
               0x1f < (ulonglong)((longlong)local_250 + (-8 - (longlong)pvVar11)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
LAB_18004ebcb:
            FUN_18006d9d4(pvVar11);
          }
LAB_18004ebd0:
          local_240 = 0;
          local_238 = (undefined **)0xf;
          local_250 = (void *)((ulonglong)local_250 & 0xffffffffffffff00);
        }
        else {
LAB_18004eb7b:
          FUN_180003d10((longlong)&local_238);
          FUN_180022bf0((longlong *)&local_250);
        }
      }
      goto LAB_18004e4d3;
    }
LAB_18004e4a4:
    FUN_180040660((float *)&local_328,(float *)&local_1e8,pppppuVar6,param_4);
    *(undefined1 *)param_1 = 1;
    FUN_180051cc0((undefined4 *)(param_1 + 1),(undefined4 *)&local_328);
    FUN_180020a50((longlong)&local_328);
LAB_18004e4d3:
    pppuVar10 = &local_1e8;
  }
  FUN_180020a50((longlong)pppuVar10);
  return param_1;
LAB_18004e446:
  FUN_18001b6c0((undefined1 *)&local_258,param_2);
  if ((char)local_258 != '\0') {
    FUN_180003d10((longlong)&local_250);
  }
  FUN_180031590(&local_258,param_2);
  if ((char)local_258 != '\0') {
    FUN_180003d10((longlong)&local_250);
  }
  if (local_a8[0] != '\0') {
    FUN_180003d10((longlong)local_a0);
  }
  if (*(longlong *)(param_2 + 0x40) == *(longlong *)(*(longlong *)(param_2 + 8) + 8))
  goto LAB_18004e4a4;
  goto LAB_18004e200;
}



// ============================================================
// INDEX: 197/227
// FUNCTION: FUN_180051580
// ENTRY: 180051580
// RVA: 0x51580
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180051580(longlong * param_1)
// ============================================================

void FUN_180051580(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  void *pvVar5;
  longlong lVar6;
  void *pvVar7;
  
  FUN_1800225b0((char *)(param_1 + 4));
  FUN_180022bf0(param_1 + 0xc);
  plVar4 = (longlong *)param_1[0xb];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4);
      }
    }
  }
  if (0xf < (ulonglong)param_1[3]) {
    pvVar5 = (void *)*param_1;
    pvVar7 = pvVar5;
    if ((0xfff < param_1[3] + 1U) &&
       (pvVar7 = *(void **)((longlong)pvVar5 + -8),
       0x1f < (ulonglong)((longlong)pvVar5 + (-8 - (longlong)pvVar7)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar7);
  }
  param_1[2] = 0;
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}



// ============================================================
// INDEX: 198/227
// FUNCTION: FUN_180051720
// ENTRY: 180051720
// RVA: 0x51720
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: longlong FUN_180051720(longlong param_1)
// ============================================================

longlong FUN_180051720(longlong param_1)

{
  return *(longlong *)(param_1 + 8) + -0x58;
}



// ============================================================
// INDEX: 199/227
// FUNCTION: FUN_180051730
// ENTRY: 180051730
// RVA: 0x51730
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_180051730(undefined1 * param_1, longlong * param_2, longlong param_3, longlong * param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_180051730(undefined1 *param_1,longlong *param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong *puVar5;
  undefined1 auStack_78 [32];
  ulonglong *local_58;
  undefined1 *local_50;
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_78;
  *param_1 = 9;
  local_50 = param_1;
  local_48 = param_3;
  local_40 = param_4;
  local_58 = (ulonglong *)FUN_18006d620(0x58);
  *local_58 = 0;
  local_58[1] = 0;
  *(undefined4 *)(local_58 + 1) = 1;
  *(undefined4 *)((longlong)local_58 + 0xc) = 1;
  *local_58 = (ulonglong)std::_Ref_count_obj2<toml::detail::region>::vftable;
  local_58[2] = (ulonglong)toml::detail::region::vftable;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[3] = *(undefined8 *)(param_3 + 8);
  local_58[4] = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 8) = 0;
  *(undefined8 *)(param_3 + 0x10) = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  local_58[5] = *(undefined8 *)(param_3 + 0x18);
  local_58[6] = uVar4;
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  local_58[7] = *(undefined8 *)(param_3 + 0x28);
  local_58[8] = uVar4;
  *(undefined8 *)(param_3 + 0x28) = 0;
  *(undefined8 *)(param_3 + 0x30) = 0xf;
  *(undefined1 *)(param_3 + 0x18) = 0;
  local_58[9] = *(undefined8 *)(param_3 + 0x38);
  local_58[10] = *(undefined8 *)(param_3 + 0x40);
  *(ulonglong **)(param_1 + 0x30) = local_58 + 2;
  *(ulonglong **)(param_1 + 0x38) = local_58;
  lVar1 = param_4[2];
  param_4[2] = 0;
  lVar2 = param_4[1];
  param_4[1] = 0;
  lVar3 = *param_4;
  *param_4 = 0;
  *(longlong *)(param_1 + 0x40) = lVar3;
  *(longlong *)(param_1 + 0x48) = lVar2;
  *(longlong *)(param_1 + 0x50) = lVar1;
  local_58 = (ulonglong *)FUN_18006d620(0x18);
  *local_58 = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  puVar5 = FUN_180055c10(local_58,param_2);
  *(ulonglong **)(param_1 + 8) = puVar5;
  FUN_180003d10(param_3);
  FUN_180022bf0(param_4);
  return param_1;
}



// ============================================================
// INDEX: 200/227
// FUNCTION: FUN_180051890
// ENTRY: 180051890
// RVA: 0x51890
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_180051890(char * param_1, char * param_2)
// ============================================================

char * FUN_180051890(char *param_1,char *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  if (param_1 != param_2) {
    FUN_1800225b0(param_1);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    param_2[0x30] = '\0';
    param_2[0x31] = '\0';
    param_2[0x32] = '\0';
    param_2[0x33] = '\0';
    param_2[0x34] = '\0';
    param_2[0x35] = '\0';
    param_2[0x36] = '\0';
    param_2[0x37] = '\0';
    param_2[0x38] = '\0';
    param_2[0x39] = '\0';
    param_2[0x3a] = '\0';
    param_2[0x3b] = '\0';
    param_2[0x3c] = '\0';
    param_2[0x3d] = '\0';
    param_2[0x3e] = '\0';
    param_2[0x3f] = '\0';
    plVar6 = *(longlong **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar1 = plVar6 + 1;
      lVar7 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    FUN_180020360((longlong *)(param_1 + 0x40),(longlong *)(param_2 + 0x40));
    cVar4 = *param_2;
    *param_1 = cVar4;
    switch(cVar4) {
    case '\x01':
      param_1[8] = param_2[8];
      return param_1;
    case '\x02':
    case '\x03':
      uVar8 = *(undefined8 *)(param_2 + 8);
      break;
    case '\x04':
      param_1[8] = param_2[8];
      param_1[0x10] = '\0';
      param_1[0x11] = '\0';
      param_1[0x12] = '\0';
      param_1[0x13] = '\0';
      param_1[0x14] = '\0';
      param_1[0x15] = '\0';
      param_1[0x16] = '\0';
      param_1[0x17] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      param_1[0x20] = '\0';
      param_1[0x21] = '\0';
      param_1[0x22] = '\0';
      param_1[0x23] = '\0';
      param_1[0x24] = '\0';
      param_1[0x25] = '\0';
      param_1[0x26] = '\0';
      param_1[0x27] = '\0';
      param_1[0x28] = '\0';
      param_1[0x29] = '\0';
      param_1[0x2a] = '\0';
      param_1[0x2b] = '\0';
      param_1[0x2c] = '\0';
      param_1[0x2d] = '\0';
      param_1[0x2e] = '\0';
      param_1[0x2f] = '\0';
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      uVar8 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = uVar8;
      param_2[0x20] = '\0';
      param_2[0x21] = '\0';
      param_2[0x22] = '\0';
      param_2[0x23] = '\0';
      param_2[0x24] = '\0';
      param_2[0x25] = '\0';
      param_2[0x26] = '\0';
      param_2[0x27] = '\0';
      param_2[0x28] = '\x0f';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      param_2[0x10] = '\0';
      return param_1;
    case '\x05':
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar8;
      return param_1;
    case '\x06':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
      return param_1;
    case '\a':
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      return param_1;
    case '\b':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
      return param_1;
    case '\t':
    case '\n':
      uVar8 = *(undefined8 *)(param_2 + 8);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      break;
    default:
      goto switchD_180051949_default;
    }
    *(undefined8 *)(param_1 + 8) = uVar8;
  }
switchD_180051949_default:
  return param_1;
}



// ============================================================
// INDEX: 201/227
// FUNCTION: FUN_180051a90
// ENTRY: 180051a90
// RVA: 0x51A90
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: char * FUN_180051a90(char * param_1, char * param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

char * FUN_180051a90(char *param_1,char *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong lVar7;
  float *pfVar8;
  float *pfVar9;
  ulonglong *puVar10;
  
  if (param_1 != param_2) {
    FUN_1800225b0(param_1);
    if (*(longlong *)(param_2 + 0x38) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    plVar6 = *(longlong **)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x38) = uVar5;
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar6 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
    }
    puVar10 = (ulonglong *)(param_2 + 0x40);
    if ((ulonglong *)(param_1 + 0x40) != puVar10) {
      plVar6 = (longlong *)*puVar10;
      puVar10 = (ulonglong *)(*(longlong *)(param_2 + 0x48) - (longlong)plVar6 >> 5);
      FUN_18002c7d0((ulonglong *)(param_1 + 0x40),plVar6,(ulonglong)puVar10);
    }
    cVar4 = *param_2;
    *param_1 = cVar4;
    switch(cVar4) {
    case '\x01':
      param_1[8] = param_2[8];
      return param_1;
    case '\x02':
    case '\x03':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      return param_1;
    case '\x04':
      param_1[8] = param_2[8];
      FUN_180020900((undefined8 *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10));
      return param_1;
    case '\x05':
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      return param_1;
    case '\x06':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
      return param_1;
    case '\a':
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      return param_1;
    case '\b':
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
      return param_1;
    case '\t':
      plVar6 = *(longlong **)(param_2 + 8);
      puVar10 = (ulonglong *)FUN_18006d620(0x18);
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
      pfVar9 = (float *)FUN_180055c10(puVar10,plVar6);
      break;
    case '\n':
      pfVar9 = *(float **)(param_2 + 8);
      pfVar8 = (float *)FUN_18006d620(0x40);
      pfVar8[0] = 0.0;
      pfVar8[1] = 0.0;
      pfVar8[2] = 0.0;
      pfVar8[3] = 0.0;
      pfVar8[4] = 0.0;
      pfVar8[5] = 0.0;
      pfVar8[6] = 0.0;
      pfVar8[7] = 0.0;
      pfVar8[8] = 0.0;
      pfVar8[9] = 0.0;
      pfVar8[10] = 0.0;
      pfVar8[0xb] = 0.0;
      pfVar8[0xc] = 0.0;
      pfVar8[0xd] = 0.0;
      pfVar8[0xe] = 0.0;
      pfVar8[0xf] = 0.0;
      pfVar9 = FUN_180040660(pfVar8,pfVar9,puVar10,param_4);
      break;
    default:
      goto switchD_180051b47_default;
    }
    *(float **)(param_1 + 8) = pfVar9;
  }
switchD_180051b47_default:
  return param_1;
}



// ============================================================
// INDEX: 202/227
// FUNCTION: FUN_180053160
// ENTRY: 180053160
// RVA: 0x53160
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 FUN_180053160(longlong param_1, longlong param_2, undefined8 * param_3, undefined8 * param_4, longlong param_5)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_180053160(longlong param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
             longlong param_5)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong lVar4;
  void **ppvVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  void *pvVar10;
  undefined1 auStack_2a8 [32];
  void *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  ulonglong local_270;
  longlong local_260 [4];
  undefined8 local_240 [4];
  void *local_220;
  void *pvStack_218;
  void *local_210;
  void *pvStack_208;
  void *local_200;
  void *pvStack_1f8;
  void *local_1f0;
  void *pvStack_1e8;
  char local_1d8 [8];
  void *local_1d0;
  longlong local_1c8;
  ulonglong local_1b8 [10];
  undefined8 local_168 [2];
  longlong *local_158;
  undefined1 local_148;
  undefined7 uStack_147;
  undefined8 local_138;
  ulonglong uStack_130;
  undefined8 local_118 [2];
  longlong *local_108;
  void *local_f8;
  ulonglong local_e0;
  char local_c8 [8];
  void *local_c0 [3];
  ulonglong local_a8 [5];
  undefined1 local_80 [72];
  ulonglong local_38;
  
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_2a8;
  local_200 = (void *)0x0;
  pvStack_1f8 = (void *)0x0;
  local_1f0 = (void *)0x0;
  pvStack_1e8 = (void *)0x0;
  puVar9 = param_4;
  FUN_180027650(&local_200,&DAT_1800789f6,0);
  plVar8 = *(longlong **)(param_2 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    ppvVar5 = (void **)(**(code **)(*plVar8 + 0x18))(plVar8,&local_288);
    if (&local_200 != ppvVar5) {
      if ((void *)0xf < pvStack_1e8) {
        pvVar10 = local_200;
        if ((0xfff < (longlong)pvStack_1e8 + 1U) &&
           (pvVar10 = *(void **)((longlong)local_200 + -8),
           0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pvVar10)))) goto LAB_180053282;
        FUN_18006d9d4(pvVar10);
      }
      local_200 = *ppvVar5;
      pvStack_1f8 = ppvVar5[1];
      local_1f0 = ppvVar5[2];
      pvStack_1e8 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
    if (0xf < local_270) {
      pvVar10 = local_288;
      if ((0xfff < local_270 + 1) &&
         (pvVar10 = *(void **)((longlong)local_288 + -8),
         0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)pvVar10)))) {
LAB_180053282:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
  }
  local_288 = (void *)0x0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  FUN_180027650(&local_288,"internal",8);
  FUN_1800030f0(local_168,(longlong *)&local_288,(longlong *)&local_200);
  FUN_180054960((undefined4 *)local_c8,(longlong)local_168,0,puVar9);
  if (local_c8[0] != '\0') {
    FUN_180003d10((longlong)local_80);
    FUN_180020a50((longlong)local_c0);
    uVar6 = 0;
    goto LAB_180053811;
  }
  if (0xf < local_a8[0]) {
    pvVar10 = local_c0[0];
    if ((0xfff < local_a8[0] + 1) &&
       (pvVar10 = *(void **)((longlong)local_c0[0] + -8),
       0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  local_220 = (void *)0x0;
  pvStack_218 = (void *)0x0;
  local_210 = (void *)0x0;
  pvStack_208 = (void *)0x0;
  FUN_180027650(&local_220,&DAT_1800789f6,0);
  plVar8 = *(longlong **)(param_1 + 0x30);
  if (plVar8 != (longlong *)0x0) {
    ppvVar5 = (void **)(**(code **)(*plVar8 + 0x18))(plVar8,&local_288);
    if (&local_220 != ppvVar5) {
      if ((void *)0xf < pvStack_208) {
        pvVar10 = local_220;
        if ((0xfff < (longlong)pvStack_208 + 1U) &&
           (pvVar10 = *(void **)((longlong)local_220 + -8),
           0x1f < (ulonglong)((longlong)local_220 + (-8 - (longlong)pvVar10)))) goto LAB_180053439;
        FUN_18006d9d4(pvVar10);
      }
      local_220 = *ppvVar5;
      pvStack_218 = ppvVar5[1];
      local_210 = ppvVar5[2];
      pvStack_208 = ppvVar5[3];
      ppvVar5[2] = (void *)0x0;
      ppvVar5[3] = (void *)0xf;
      *(undefined1 *)ppvVar5 = 0;
    }
    if (0xf < local_270) {
      pvVar10 = local_288;
      if ((0xfff < local_270 + 1) &&
         (pvVar10 = *(void **)((longlong)local_288 + -8),
         0x1f < (ulonglong)((longlong)local_288 + (-8 - (longlong)pvVar10)))) {
LAB_180053439:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
  }
  local_288 = (void *)0x0;
  uStack_280 = 0;
  local_278 = 0;
  local_270 = 0;
  FUN_180027650(&local_288,"internal",8);
  ppvVar5 = &local_220;
  FUN_1800030f0(local_118,(longlong *)&local_288,(longlong *)ppvVar5);
  FUN_180017010(local_1d8,(longlong)local_118);
  if (local_1d8[0] == '\0') {
    if (0xf < local_1b8[0]) {
      pvVar10 = local_1d0;
      if ((0xfff < local_1b8[0] + 1) &&
         (pvVar10 = *(void **)((longlong)local_1d0 + -8),
         0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar10);
    }
    FUN_180017b20(local_1d8,(longlong)local_118);
    if (local_1d8[0] == '\0') {
      if (0xf < local_1b8[0]) {
        pvVar10 = local_1d0;
        if ((0xfff < local_1b8[0] + 1) &&
           (pvVar10 = *(void **)((longlong)local_1d0 + -8),
           0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar10);
      }
      FUN_1800141f0(local_1d8,(longlong)local_118,ppvVar5);
      if (local_1d8[0] == '\0') {
        if (0xf < local_1b8[0]) {
          pvVar10 = local_1d0;
          if ((0xfff < local_1b8[0] + 1) &&
             (pvVar10 = *(void **)((longlong)local_1d0 + -8),
             0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10))))
          goto LAB_180053737;
          FUN_18006d9d4(pvVar10);
        }
        uVar6 = 0;
      }
      else {
        FUN_180017010(local_c8,(longlong)local_168);
        if (local_c8[0] == '\0') {
          if (0xf < local_a8[0]) {
            pvVar10 = local_c0[0];
            if ((0xfff < local_a8[0] + 1) &&
               (pvVar10 = *(void **)((longlong)local_c0[0] + -8),
               0x1f < (ulonglong)((longlong)local_c0[0] + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
          if (local_1d8[0] == '\0') {
            pcVar7 = (char *)FUN_180022a20((longlong)local_1d8);
            plVar8 = FUN_18002a850(local_260,pcVar7);
            puVar9 = FUN_180027b60(local_240,0x18007a300,plVar8);
            FUN_180001e30(&local_288,puVar9);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(&local_288,(ThrowInfo *)&DAT_180088cf0);
          }
          if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_4) & 0xffffffffffffffe0U
              ) == 0) {
            uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_4);
            if ((char)uVar6 != '\0') {
              uVar6 = 0;
              goto LAB_1800536b4;
            }
          }
          uVar6 = 1;
        }
        else {
          FUN_180003d10((longlong)local_a8);
          FUN_180022bf0((longlong *)local_c0);
          uVar6 = 0;
        }
LAB_1800536b4:
        if (local_1d8[0] == '\0') {
          if (0xf < local_1b8[0]) {
            pvVar10 = local_1d0;
            if ((0xfff < local_1b8[0] + 1) &&
               (pvVar10 = *(void **)((longlong)local_1d0 + -8),
               0x1f < (ulonglong)((longlong)local_1d0 + (-8 - (longlong)pvVar10)))) {
LAB_180053737:
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar10);
          }
        }
        else {
          FUN_180003d10((longlong)local_1b8);
          FUN_180022bf0((longlong *)&local_1d0);
        }
      }
    }
    else {
      if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_3) & 0xffffffffffffffe0U) ==
          0) {
        uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_3);
        if ((char)uVar6 == '\0') goto LAB_180053574;
        uVar6 = 0;
      }
      else {
LAB_180053574:
        uVar6 = 1;
      }
      FUN_180003d10((longlong)local_1b8);
      FUN_180022bf0((longlong *)&local_1d0);
    }
  }
  else {
    if (((local_1c8 - (longlong)local_1d0 ^ param_5 - (longlong)param_3) & 0xffffffffffffffe0U) == 0
       ) {
      uVar6 = FUN_18004be00((longlong)local_1d0,local_1c8,param_3);
      if ((char)uVar6 == '\0') goto LAB_1800534d0;
      uVar6 = 0;
    }
    else {
LAB_1800534d0:
      uVar6 = 1;
    }
    FUN_180003d10((longlong)local_1b8);
    FUN_180022bf0((longlong *)&local_1d0);
  }
  if (0xf < local_e0) {
    pvVar10 = local_f8;
    if ((0xfff < local_e0 + 1) &&
       (pvVar10 = *(void **)((longlong)local_f8 + -8),
       0x1f < (ulonglong)((longlong)local_f8 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  if (local_108 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_108 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_108)(local_108);
      LOCK();
      piVar1 = (int *)((longlong)local_108 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_108 + 8))(local_108);
      }
    }
  }
  if ((void *)0xf < pvStack_208) {
    pvVar10 = local_220;
    if ((0xfff < (longlong)pvStack_208 + 1U) &&
       (pvVar10 = *(void **)((longlong)local_220 + -8),
       0x1f < (ulonglong)((longlong)local_220 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  local_210 = (void *)_DAT_18007c620;
  pvStack_208 = (void *)_UNK_18007c628;
  local_220 = (void *)((ulonglong)local_220 & 0xffffffffffffff00);
LAB_180053811:
  if (0xf < uStack_130) {
    pvVar3 = (void *)CONCAT71(uStack_147,local_148);
    pvVar10 = pvVar3;
    if ((0xfff < uStack_130 + 1) &&
       (pvVar10 = *(void **)((longlong)pvVar3 + -8),
       0x1f < (ulonglong)((longlong)pvVar3 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  uStack_130 = _UNK_18007c628;
  local_138 = _DAT_18007c620;
  local_148 = 0;
  if (local_158 != (longlong *)0x0) {
    LOCK();
    plVar8 = local_158 + 1;
    lVar4 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_158)(local_158);
      LOCK();
      piVar1 = (int *)((longlong)local_158 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_158 + 8))(local_158);
      }
    }
  }
  if ((void *)0xf < pvStack_1e8) {
    pvVar10 = local_200;
    if ((0xfff < (longlong)pvStack_1e8 + 1U) &&
       (pvVar10 = *(void **)((longlong)local_200 + -8),
       0x1f < (ulonglong)((longlong)local_200 + (-8 - (longlong)pvVar10)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(pvVar10);
  }
  return uVar6;
}



// ============================================================
// INDEX: 203/227
// FUNCTION: FUN_1800546a0
// ENTRY: 1800546a0
// RVA: 0x546A0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 * FUN_1800546a0(float * param_1, undefined8 * param_2, undefined8 * param_3)
// ============================================================

undefined8 * FUN_1800546a0(float *param_1,undefined8 *param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  size_t _Size;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *_Buf1;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  float fVar13;
  
  uVar7 = param_3[2];
  uVar1 = param_3[3];
  puVar6 = param_3;
  if (0xf < uVar1) {
    puVar6 = (undefined8 *)*param_3;
  }
  uVar12 = 0xcbf29ce484222325;
  uVar8 = 0;
  if (uVar7 != 0) {
    do {
      uVar12 = (uVar12 ^ *(byte *)((longlong)puVar6 + uVar8)) * 0x100000001b3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < uVar7);
  }
  puVar6 = *(undefined8 **)
            (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
  puVar10 = *(undefined8 **)(param_1 + 2);
  if (puVar6 != *(undefined8 **)(param_1 + 2)) {
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    while( true ) {
      puVar10 = puVar6 + 2;
      if (0xf < (ulonglong)puVar6[5]) {
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar9 = param_3;
      if (0xf < uVar1) {
        puVar9 = (undefined8 *)*param_3;
      }
      if ((uVar7 == puVar6[4]) &&
         ((uVar7 == 0 || (iVar5 = memcmp(puVar9,puVar10,uVar7), iVar5 == 0)))) {
        *param_2 = puVar6;
        *(undefined1 *)(param_2 + 1) = 0;
        return param_2;
      }
      puVar10 = puVar6;
      if (puVar6 == puVar11) break;
      puVar6 = (undefined8 *)puVar6[1];
    }
  }
  if (*(longlong *)(param_1 + 4) == 0x1e1e1e1e1e1e1e1) {
    std::_Xlength_error("unordered_map/set too long");
    pcVar3 = (code *)swi(3);
    puVar6 = (undefined8 *)(*pcVar3)();
    return puVar6;
  }
  puVar6 = (undefined8 *)FUN_18006d620(0x88);
  puVar6[2] = 0;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[5] = 0;
  uVar4 = param_3[1];
  puVar6[2] = *param_3;
  puVar6[3] = uVar4;
  uVar4 = param_3[3];
  puVar6[4] = param_3[2];
  puVar6[5] = uVar4;
  param_3[2] = 0;
  param_3[3] = 0xf;
  *(undefined1 *)param_3 = 0;
  FUN_18004b5c0((undefined1 *)(puVar6 + 6),(undefined1 *)(param_3 + 4));
  fVar13 = (float)(*(longlong *)(param_1 + 4) + 1U) / (float)*(ulonglong *)(param_1 + 0xe);
  if (*param_1 <= fVar13 && fVar13 != *param_1) {
    uVar7 = FUN_180032de0(param_1,*(longlong *)(param_1 + 4) + 1U);
    FUN_180032b30((longlong)param_1,uVar7);
    puVar11 = *(undefined8 **)
               (*(longlong *)(param_1 + 6) + 8 + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
    puVar10 = *(undefined8 **)(param_1 + 2);
    if (puVar11 != *(undefined8 **)(param_1 + 2)) {
      puVar9 = *(undefined8 **)
                (*(longlong *)(param_1 + 6) + (*(ulonglong *)(param_1 + 0xc) & uVar12) * 0x10);
      uVar7 = puVar6[5];
      _Size = puVar6[4];
      while( true ) {
        puVar10 = puVar11 + 2;
        if (0xf < (ulonglong)puVar11[5]) {
          puVar10 = (undefined8 *)*puVar10;
        }
        _Buf1 = puVar6 + 2;
        if (0xf < uVar7) {
          _Buf1 = (undefined8 *)puVar6[2];
        }
        if ((_Size == puVar11[4]) &&
           ((_Size == 0 || (iVar5 = memcmp(_Buf1,puVar10,_Size), iVar5 == 0)))) break;
        puVar10 = puVar11;
        if (puVar11 == puVar9) goto LAB_1800548ee;
        puVar11 = (undefined8 *)puVar11[1];
      }
      puVar10 = (undefined8 *)*puVar11;
    }
  }
LAB_1800548ee:
  puVar11 = (undefined8 *)puVar10[1];
  *(longlong *)(param_1 + 4) = *(longlong *)(param_1 + 4) + 1;
  *puVar6 = puVar10;
  puVar6[1] = puVar11;
  *puVar11 = puVar6;
  puVar10[1] = puVar6;
  lVar2 = *(longlong *)(param_1 + 6);
  uVar12 = *(ulonglong *)(param_1 + 0xc) & uVar12;
  puVar9 = *(undefined8 **)(lVar2 + uVar12 * 0x10);
  if (puVar9 == *(undefined8 **)(param_1 + 2)) {
    *(undefined8 **)(lVar2 + uVar12 * 0x10) = puVar6;
  }
  else {
    if (puVar9 == puVar10) {
      *(undefined8 **)(lVar2 + uVar12 * 0x10) = puVar6;
      goto LAB_180054939;
    }
    if (*(undefined8 **)(lVar2 + 8 + uVar12 * 0x10) != puVar11) goto LAB_180054939;
  }
  *(undefined8 **)(lVar2 + 8 + uVar12 * 0x10) = puVar6;
LAB_180054939:
  *param_2 = puVar6;
  *(undefined1 *)(param_2 + 1) = 1;
  return param_2;
}



// ============================================================
// INDEX: 204/227
// FUNCTION: FUN_180054960
// ENTRY: 180054960
// RVA: 0x54960
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined4 * FUN_180054960(undefined4 * param_1, longlong param_2, ulonglong param_3, undefined8 param_4)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_180054960(undefined4 *param_1,longlong param_2,ulonglong param_3,undefined8 *****param_4)

{
  int *piVar1;
  byte bVar2;
  undefined1 (*pauVar3) [32];
  undefined1 (*pauVar4) [32];
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  void *pvVar8;
  longlong lVar9;
  undefined ***pppuVar10;
  char *pcVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  void *pvVar16;
  undefined8 uVar17;
  undefined8 *****pppppuVar18;
  undefined1 auStackY_4c8 [32];
  undefined4 *local_488;
  undefined8 uStack_480;
  longlong local_478 [3];
  longlong local_460;
  undefined8 uStack_458;
  ulonglong local_450;
  ulonglong uStack_448;
  longlong local_440 [3];
  undefined **local_428;
  undefined8 local_420;
  void *local_418;
  undefined1 local_410;
  undefined7 uStack_40f;
  ulonglong uStack_408;
  ulonglong local_400;
  void *pvStack_3f8;
  undefined1 (*local_3f0) [32];
  ulonglong local_3e8;
  ulonglong uStack_3e0;
  undefined1 *local_3d8 [2];
  void *local_3c8;
  undefined8 uStack_3c0;
  ulonglong local_3b8;
  ulonglong uStack_3b0;
  float local_3a8 [16];
  undefined **local_368;
  undefined8 local_360;
  undefined8 local_358;
  ulonglong local_350;
  ulonglong uStack_348;
  ulonglong local_340;
  void *pvStack_338;
  undefined1 (*local_330) [32];
  ulonglong local_328;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [32];
  undefined8 local_278 [18];
  undefined **local_1e8;
  void *local_1e0;
  undefined8 local_1d8;
  ulonglong local_1d0;
  ulonglong uStack_1c8;
  ulonglong local_1c0;
  void *pvStack_1b8;
  undefined1 (*local_1b0) [32];
  ulonglong local_1a8;
  undefined8 **local_198;
  longlong lStack_190;
  undefined8 local_188;
  ulonglong auStack_180 [5];
  char local_158 [8];
  undefined1 local_150 [72];
  char local_108 [8];
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined8 *****local_f8;
  undefined8 local_f0;
  ulonglong local_e8 [9];
  undefined8 ****local_a0 [11];
  ulonglong local_48;
  
  local_48 = DAT_18008d040 ^ (ulonglong)auStackY_4c8;
  local_488 = param_1;
  if (0x40 < param_3) {
    puVar12 = FUN_180004170((undefined4 *)local_158,param_2);
    puVar14 = FUN_1800208c0(&local_460,"toml::parse_inline_table: recursion limit (64) exceeded");
    FUN_1800051f0((undefined8 *)local_3a8,puVar14,puVar12);
                    /* WARNING: Subroutine does not return */
    _CxxThrowException(local_3a8,(ThrowInfo *)&DAT_180088d60);
  }
  pauVar3 = *(undefined1 (**) [32])(param_2 + 0x40);
  auStack_180[0] = 0;
  auStack_180[1] = 0;
  auStack_180[2] = 0;
  auStack_180[3] = 0;
  auStack_180[4] = 0;
  local_198 = (undefined8 **)0x0;
  lStack_190 = 0;
  local_188 = 0;
  lVar9 = FUN_18006d620(0x88);
  *(longlong *)lVar9 = lVar9;
  *(longlong *)(lVar9 + 8) = lVar9;
  auStack_180[0] = 0;
  auStack_180[1] = 0;
  auStack_180[2] = 0;
  auStack_180[3] = 7;
  auStack_180[4] = 8;
  local_198 = (undefined8 **)CONCAT44(local_198._4_4_,0x3f800000);
  lStack_190 = lVar9;
  FUN_180024cd0(auStack_180,0x10,lVar9);
  pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
  if ((pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) || ((*pauVar4)[0] != '{')
     ) {
    local_440[0] = 0;
    local_440[1] = 0;
    local_440[2] = 0;
    puVar12 = FUN_180004170((undefined4 *)&local_428,param_2);
    local_308 = *puVar12;
    local_304 = puVar12[1];
    local_300 = puVar12[2];
    local_2f8 = *(undefined8 *)(puVar12 + 4);
    uStack_2f0 = *(undefined8 *)(puVar12 + 6);
    local_2e8 = *(undefined8 *)(puVar12 + 8);
    uStack_2e0 = *(undefined8 *)(puVar12 + 10);
    *(undefined8 *)(puVar12 + 10) = 0xf;
    *(undefined8 *)(puVar12 + 8) = 0;
    *(undefined1 *)(puVar12 + 4) = 0;
    local_2d8 = *(undefined8 *)(puVar12 + 0xc);
    uStack_2d0 = *(undefined8 *)(puVar12 + 0xe);
    local_2c8 = *(undefined8 *)(puVar12 + 0x10);
    uStack_2c0 = *(undefined8 *)(puVar12 + 0x12);
    *(undefined8 *)(puVar12 + 0x12) = 0xf;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    *(undefined1 *)(puVar12 + 0xc) = 0;
    local_2b8 = 0;
    uStack_2b0 = 0;
    local_2a8 = 0;
    uStack_2a0 = 0;
    FUN_180027650(&local_2b8,"the next token is not an inline table",0x25);
    local_488 = &local_308;
    local_3d8[0] = local_298;
    local_478[0] = 0;
    local_478[1] = 0;
    local_478[2] = 0;
    FUN_18002c400(local_478,1,&local_488,local_3d8);
    local_3c8 = (void *)0x0;
    uStack_3c0 = 0;
    local_3b8 = 0;
    uStack_3b0 = 0;
    FUN_180027650(&local_3c8,"toml::parse_inline_table: ",0x1a);
    plVar15 = FUN_1800042c0(&local_460,(char *)&local_3c8,local_478,local_440);
    lVar9 = *plVar15;
    lVar5 = plVar15[1];
    lVar6 = plVar15[2];
    lVar7 = plVar15[3];
    plVar15[2] = 0;
    plVar15[3] = 0xf;
    *(undefined1 *)plVar15 = 0;
    *(undefined1 *)param_1 = 0;
    *(longlong *)(param_1 + 2) = lVar9;
    *(longlong *)(param_1 + 4) = lVar5;
    *(longlong *)(param_1 + 6) = lVar6;
    *(longlong *)(param_1 + 8) = lVar7;
    if (0xf < uStack_448) {
      pvVar8 = (void *)CONCAT71(local_460._1_7_,(undefined1)local_460);
      pvVar16 = pvVar8;
      if ((0xfff < uStack_448 + 1) &&
         (pvVar16 = *(void **)((longlong)pvVar8 + -8),
         0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    local_450 = _DAT_18007c620;
    uStack_448 = _UNK_18007c628;
    local_460._0_1_ = 0;
    if (0xf < uStack_3b0) {
      pvVar16 = local_3c8;
      if ((0xfff < uStack_3b0 + 1) &&
         (pvVar16 = *(void **)((longlong)local_3c8 + -8),
         0x1f < (ulonglong)((longlong)local_3c8 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    local_3b8 = _DAT_18007c620;
    uStack_3b0 = _UNK_18007c628;
    local_3c8 = (void *)((ulonglong)local_3c8 & 0xffffffffffffff00);
    FUN_180022b20(local_478);
    _eh_vector_destructor_iterator_(&local_308,0x70,1,FUN_180006d60);
    if (0xf < uStack_3e0) {
      pvVar16 = pvStack_3f8;
      if ((0xfff < uStack_3e0 + 1) &&
         (pvVar16 = *(void **)((longlong)pvStack_3f8 + -8),
         0x1f < (ulonglong)((longlong)pvStack_3f8 + (-8 - (longlong)pvVar16)))) goto LAB_180055333;
      FUN_18006d9d4(pvVar16);
    }
    local_3e8 = _DAT_18007c620;
    uStack_3e0 = _UNK_18007c628;
    pvStack_3f8 = (void *)((ulonglong)pvStack_3f8 & 0xffffffffffffff00);
    if (0xf < local_400) {
      pvVar16 = local_418;
      if ((0xfff < local_400 + 1) &&
         (pvVar16 = *(void **)((longlong)local_418 + -8),
         0x1f < (ulonglong)((longlong)local_418 + (-8 - (longlong)pvVar16)))) {
LAB_180055333:
                    /* WARNING: Subroutine does not return */
        _invalid_parameter_noinfo_noreturn();
      }
      FUN_18006d9d4(pvVar16);
    }
    uStack_408 = _DAT_18007c620;
    local_400 = _UNK_18007c628;
    local_418 = (void *)((ulonglong)local_418 & 0xffffffffffffff00);
    FUN_180022bf0(local_440);
  }
  else {
    uVar17 = CONCAT71((int7)((ulonglong)lVar9 >> 8),10);
    lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + 1;
    FUN_1800228e0(local_158,param_2);
    if (local_158[0] != '\0') {
      FUN_180003d10((longlong)local_150);
    }
    pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
    if (pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) {
LAB_1800553d9:
      FUN_180003310(param_2,pauVar3);
      puVar12 = FUN_180004170(&local_308,param_2);
      FUN_1800205d0(local_440);
      puVar13 = FUN_180004170((undefined4 *)local_158,param_2);
      FUN_180026f20(local_3a8,puVar13,"should be closed");
      puVar14 = FUN_18001f5f0(local_3d8,local_3a8,&pvStack_338);
      local_488 = (undefined4 *)*puVar14;
      uStack_480 = puVar14[1];
      FUN_18001fb60(local_478,(longlong *)&local_488);
      FUN_1800208c0(&local_460,"toml::parse_inline_table: inline table did not closed by `}`");
      plVar15 = FUN_1800042c0((longlong *)&local_3c8,(char *)&local_460,local_478,local_440);
      FUN_1800051f0(local_278,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088d60);
    }
    if ((*pauVar4)[0] != '}') {
      do {
        FUN_180051e30((longlong **)local_108,param_2,param_3 + 1,param_4);
        if (local_108[0] == '\0') {
          FUN_180020900(&local_460,(undefined8 *)&local_100);
          *(undefined1 *)param_1 = 0;
          *(ulonglong *)(param_1 + 2) = CONCAT71(local_460._1_7_,(undefined1)local_460);
          *(undefined8 *)(param_1 + 4) = uStack_458;
          *(ulonglong *)(param_1 + 6) = local_450;
          *(ulonglong *)(param_1 + 8) = uStack_448;
          if (local_108[0] == '\0') {
            if (0xf < local_e8[0]) {
              pvVar8 = (void *)CONCAT71(uStack_ff,local_100);
              pvVar16 = pvVar8;
              if ((0xfff < local_e8[0] + 1) &&
                 (pvVar16 = *(void **)((longlong)pvVar8 + -8),
                 0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) {
LAB_180055070:
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
LAB_180054fb2:
              FUN_18006d9d4(pvVar16);
            }
LAB_180054fb7:
            local_f0 = 0;
            local_e8[0] = 0xf;
            local_100 = 0;
          }
          else {
LAB_180054f62:
            FUN_180051db0((longlong *)&local_100);
          }
          goto LAB_18005535a;
        }
        pppuVar10 = (undefined ***)FUN_180006cd0(&local_428,(longlong)local_e8);
        param_4 = (undefined8 *****)CONCAT71(uStack_ff,local_100);
        pppppuVar18 = local_a0;
        FUN_18004ec90((undefined1 *)&local_1e8,&local_198,pppppuVar18,param_4,local_f8,pppuVar10,
                      '\0');
        if ((char)local_1e8 == '\0') {
          puVar12 = FUN_180004170(&local_308,param_2);
          pcVar11 = FUN_180019ab0((char *)&local_1e8);
          puVar14 = FUN_180043d90(&local_460,param_2,(undefined8 *)pcVar11);
          FUN_180005460(local_278,puVar14,puVar12);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088e60);
        }
        FUN_180040aa0(local_158,param_2);
        if (local_158[0] == '\0') {
          FUN_1800228e0((char *)&local_428,param_2);
          if ((char)local_428 != '\0') {
            FUN_180003d10((longlong)&local_420);
          }
          pauVar4 = *(undefined1 (**) [32])(param_2 + 0x40);
          if (pauVar4 == *(undefined1 (**) [32])(*(longlong *)(param_2 + 8) + 8)) {
            puVar12 = FUN_180004170(&local_308,param_2);
            FUN_1800205d0(local_440);
            puVar13 = FUN_180004170((undefined4 *)&local_428,param_2);
            FUN_180026f20(local_3a8,puVar13,"should be `}`");
            puVar14 = FUN_18001f5f0(local_3d8,local_3a8,&pvStack_338);
            local_488 = (undefined4 *)*puVar14;
            uStack_480 = puVar14[1];
            FUN_18001fb60(local_478,(longlong *)&local_488);
            FUN_1800208c0(&local_460,"toml::parse_inline_table: missing table separator `}` ");
            plVar15 = FUN_1800042c0((longlong *)&local_3c8,(char *)&local_460,local_478,local_440);
            FUN_1800051f0(local_278,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088d60);
          }
          bVar2 = (*pauVar4)[0];
          if (bVar2 != 0x7d) {
            if ((bVar2 < 0x24) && ((0x800002400U >> ((longlong)(char)bVar2 & 0x3fU) & 1) != 0)) {
              puVar12 = FUN_180004170(&local_308,param_2);
              FUN_1800205d0(local_440);
              puVar13 = FUN_180004170((undefined4 *)&local_428,param_2);
              FUN_180026f20(local_3a8,puVar13,"should be `}`");
              puVar14 = FUN_18001f5f0(local_3d8,local_3a8,&pvStack_338);
              local_488 = (undefined4 *)*puVar14;
              uStack_480 = puVar14[1];
              FUN_18001fb60(local_478,(longlong *)&local_488);
              FUN_1800208c0(&local_460,"toml::parse_inline_table: missing curly brace `}`");
              plVar15 = FUN_1800042c0((longlong *)&local_3c8,(char *)&local_460,local_478,local_440)
              ;
              FUN_1800051f0(local_278,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
              _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088d60);
            }
            puVar12 = FUN_180004170(&local_308,param_2);
            FUN_1800205d0(local_440);
            puVar13 = FUN_180004170((undefined4 *)&local_428,param_2);
            FUN_180026f20(local_3a8,puVar13,"should be `,`");
            puVar14 = FUN_18001f5f0(local_3d8,local_3a8,&pvStack_338);
            local_488 = (undefined4 *)*puVar14;
            uStack_480 = puVar14[1];
            FUN_18001fb60(local_478,(longlong *)&local_488);
            FUN_1800208c0(&local_460,"toml::parse_inline_table: missing table separator `,` ");
            plVar15 = FUN_1800042c0((longlong *)&local_3c8,(char *)&local_460,local_478,local_440);
            FUN_1800051f0(local_278,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
            _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088d60);
          }
          uVar17 = CONCAT71((int7)((ulonglong)pppppuVar18 >> 8),10);
          lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
          *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
          local_328 = *(longlong *)(param_2 + 0x40) + 1;
          *(ulonglong *)(param_2 + 0x40) = local_328;
          local_428 = toml::detail::region::vftable;
          if (*(longlong *)(param_2 + 0x10) != 0) {
            LOCK();
            piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
            *piVar1 = *piVar1 + 1;
            UNLOCK();
          }
          local_420 = *(undefined8 *)(param_2 + 8);
          local_418 = *(void **)(param_2 + 0x10);
          FUN_180020900((undefined8 *)&local_410,(undefined8 *)(param_2 + 0x20));
          local_3f0 = pauVar3;
          local_3e8 = local_328;
          FUN_180040660(local_3a8,(float *)&local_198,uVar17,param_4);
          local_368 = toml::detail::region::vftable;
          local_360 = local_420;
          local_358 = local_418;
          local_420 = 0;
          local_418 = (void *)0x0;
          local_350 = CONCAT71(uStack_40f,local_410);
          uStack_348 = uStack_408;
          local_340 = local_400;
          pvStack_338 = pvStack_3f8;
          local_400 = 0;
          pvStack_3f8 = (void *)0xf;
          local_410 = 0;
          local_330 = pauVar3;
          FUN_180055e70(&local_308,local_3a8);
          *(undefined1 *)param_1 = 1;
          FUN_180055e70(param_1 + 2,&local_308);
          FUN_180003d10((longlong)&local_2c8);
          FUN_180020a50((longlong)&local_308);
          FUN_180003d10((longlong)&local_368);
          FUN_180020a50((longlong)local_3a8);
          if (local_158[0] != '\0') {
            FUN_180003d10((longlong)local_150);
          }
          if ((char)local_1e8 == '\0') {
            if (0xf < uStack_1c8) {
              pvVar16 = local_1e0;
              if ((0xfff < uStack_1c8 + 1) &&
                 (pvVar16 = *(void **)((longlong)local_1e0 + -8),
                 0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
                _invalid_parameter_noinfo_noreturn();
              }
              FUN_18006d9d4(pvVar16);
            }
            local_1d0 = 0;
            uStack_1c8 = 0xf;
            local_1e0 = (void *)((ulonglong)local_1e0 & 0xffffffffffffff00);
          }
          if (local_108[0] != '\0') goto LAB_180054f62;
          if (0xf < local_e8[0]) {
            pvVar8 = (void *)CONCAT71(uStack_ff,local_100);
            pvVar16 = pvVar8;
            if ((0xfff < local_e8[0] + 1) &&
               (pvVar16 = *(void **)((longlong)pvVar8 + -8),
               0x1f < (ulonglong)
                      ((longlong)pvVar8 + (-8 - (longlong)*(void **)((longlong)pvVar8 + -8))))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            goto LAB_180054fb2;
          }
          goto LAB_180054fb7;
        }
        FUN_1800228e0((char *)&local_428,param_2);
        if ((char)local_428 != '\0') {
          FUN_180003d10((longlong)&local_420);
        }
        if ((*(char **)(param_2 + 0x40) != *(char **)(*(longlong *)(param_2 + 8) + 8)) &&
           (**(char **)(param_2 + 0x40) == '}')) {
          puVar12 = FUN_180004170((undefined4 *)&local_428,param_2);
          FUN_1800205d0(local_440);
          puVar13 = FUN_180004170(&local_308,param_2);
          FUN_180026f20(local_3a8,puVar13,"should be `}`");
          puVar14 = FUN_18001f5f0(local_3d8,local_3a8,&pvStack_338);
          local_488 = (undefined4 *)*puVar14;
          uStack_480 = puVar14[1];
          FUN_18001fb60(local_478,(longlong *)&local_488);
          FUN_1800208c0(&local_460,
                        "toml::parse_inline_table: trailing comma is not allowed in an inline table"
                       );
          plVar15 = FUN_1800042c0((longlong *)&local_3c8,(char *)&local_460,local_478,local_440);
          FUN_1800051f0(local_278,plVar15,puVar12);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(local_278,(ThrowInfo *)&DAT_180088d60);
        }
        if (local_158[0] != '\0') {
          FUN_180003d10((longlong)local_150);
        }
        if ((char)local_1e8 == '\0') {
          if (0xf < uStack_1c8) {
            pvVar16 = local_1e0;
            if ((0xfff < uStack_1c8 + 1) &&
               (pvVar16 = *(void **)((longlong)local_1e0 + -8),
               0x1f < (ulonglong)((longlong)local_1e0 + (-8 - (longlong)pvVar16)))) {
                    /* WARNING: Subroutine does not return */
              _invalid_parameter_noinfo_noreturn();
            }
            FUN_18006d9d4(pvVar16);
          }
          local_1d0 = 0;
          uStack_1c8 = 0xf;
          local_1e0 = (void *)((ulonglong)local_1e0 & 0xffffffffffffff00);
        }
        if (local_108[0] == '\0') {
          if (0xf < local_e8[0]) {
            pvVar8 = (void *)CONCAT71(uStack_ff,local_100);
            pvVar16 = pvVar8;
            if ((0xfff < local_e8[0] + 1) &&
               (pvVar16 = *(void **)((longlong)pvVar8 + -8),
               0x1f < (ulonglong)((longlong)pvVar8 + (-8 - (longlong)pvVar16)))) goto LAB_180055070;
            FUN_18006d9d4(pvVar16);
          }
        }
        else {
          FUN_180051db0((longlong *)&local_100);
        }
      } while (*(longlong *)(param_2 + 0x40) != *(longlong *)(*(longlong *)(param_2 + 8) + 8));
      goto LAB_1800553d9;
    }
    uVar17 = CONCAT71((int7)((ulonglong)uVar17 >> 8),10);
    lVar9 = thunk_FUN_18006cb20(pauVar4,(undefined1 (*) [32])(*pauVar4 + 1),10);
    *(longlong *)(param_2 + 0x18) = *(longlong *)(param_2 + 0x18) + lVar9;
    local_328 = *(longlong *)(param_2 + 0x40) + 1;
    *(ulonglong *)(param_2 + 0x40) = local_328;
    local_1e8 = toml::detail::region::vftable;
    if (*(longlong *)(param_2 + 0x10) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_2 + 0x10) + 8);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    local_1e0 = *(void **)(param_2 + 8);
    local_1d8 = *(undefined8 *)(param_2 + 0x10);
    FUN_180020900(&local_1d0,(undefined8 *)(param_2 + 0x20));
    local_1b0 = pauVar3;
    local_1a8 = local_328;
    FUN_180040660(local_3a8,(float *)&local_198,uVar17,param_4);
    local_368 = toml::detail::region::vftable;
    local_360 = local_1e0;
    local_358 = local_1d8;
    local_1e0 = (void *)0x0;
    local_1d8 = 0;
    local_350 = local_1d0;
    uStack_348 = uStack_1c8;
    local_340 = local_1c0;
    pvStack_338 = pvStack_1b8;
    local_1c0 = 0;
    pvStack_1b8 = (void *)0xf;
    local_1d0 = local_1d0 & 0xffffffffffffff00;
    local_330 = pauVar3;
    FUN_180055e70(&local_308,local_3a8);
    *(undefined1 *)param_1 = 1;
    FUN_180055e70(param_1 + 2,&local_308);
    FUN_180003d10((longlong)&local_2c8);
    FUN_180020a50((longlong)&local_308);
    FUN_180003d10((longlong)&local_368);
    FUN_180020a50((longlong)local_3a8);
  }
LAB_18005535a:
  FUN_180020a50((longlong)&local_198);
  return param_1;
}



// ============================================================
// INDEX: 205/227
// FUNCTION: FUN_1800557d0
// ENTRY: 1800557d0
// RVA: 0x557D0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_1800557d0(longlong * param_1, undefined1 * param_2, undefined1 * param_3)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_1800557d0(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  size_t sVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *puStack_50;
  longlong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_18008d040 ^ (ulonglong)auStack_a8;
  lVar10 = *param_1;
  lVar4 = (longlong)param_2 - lVar10;
  lVar12 = (param_1[1] - lVar10) / 0x58;
  if (lVar12 == 0x2e8ba2e8ba2e8ba) {
                    /* WARNING: Subroutine does not return */
    FUN_180022bd0();
  }
  uVar9 = lVar12 + 1;
  uVar1 = (param_1[2] - lVar10) / 0x58;
  local_78 = uVar9;
  if (uVar1 <= 0x2e8ba2e8ba2e8ba - (uVar1 >> 1)) {
    uVar1 = (uVar1 >> 1) + uVar1;
    uVar13 = uVar9;
    if (uVar9 <= uVar1) {
      uVar13 = uVar1;
    }
    if (uVar13 < 0x2e8ba2e8ba2e8bb) {
      sVar5 = uVar13 * 0x58;
      local_80 = uVar13;
      if (sVar5 == 0) {
        puVar7 = (undefined1 *)0x0;
      }
      else if (sVar5 < 0x1000) {
        puVar7 = (undefined1 *)FUN_18006d620(sVar5);
      }
      else {
        if (sVar5 + 0x27 <= sVar5) goto LAB_1800559fa;
        lVar12 = FUN_18006d620(sVar5 + 0x27);
        if (lVar12 == 0) {
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        puVar7 = (undefined1 *)(lVar12 + 0x27U & 0xffffffffffffffe0);
        *(longlong *)(puVar7 + -8) = lVar12;
      }
      lVar12 = (lVar4 / 0x58) * 0x58;
      puVar11 = puVar7 + lVar12;
      local_88 = puVar11 + 0x58;
      local_70 = puVar11;
      local_68 = local_88;
      local_60 = puVar7;
      FUN_180055ce0(puVar11,param_3,lVar10,uVar9);
      puVar2 = (undefined1 *)param_1[1];
      puVar6 = (undefined1 *)*param_1;
      puVar8 = puVar7;
      local_88 = puVar11;
      puVar11 = puVar7;
      plVar3 = param_1;
      if (param_2 == puVar2) {
        for (; local_48 = plVar3, local_58 = puVar11, puStack_50 = puVar8, puVar6 != puVar2;
            puVar6 = puVar6 + 0x58) {
          FUN_180055ce0(puVar8,puVar6,lVar10,uVar9);
          puVar8 = puVar8 + 0x58;
          puVar11 = local_58;
          plVar3 = local_48;
        }
      }
      else {
        if (puVar6 != param_2) {
          lVar10 = (longlong)puVar7 - (longlong)puVar6;
          do {
            FUN_18004b5c0(puVar6 + lVar10,puVar6);
            puVar6 = puVar6 + 0x58;
          } while (puVar6 != param_2);
        }
        puVar11 = (undefined1 *)param_1[1];
        local_88 = puVar7;
        if (param_2 != puVar11) {
          lVar12 = lVar12 - (longlong)param_2;
          do {
            FUN_18004b5c0(puVar7 + lVar12 + 0x58 + (longlong)param_2,param_2);
            param_2 = param_2 + 0x58;
          } while (param_2 != puVar11);
        }
      }
      FUN_180055aa0(param_1,(longlong)puVar7,local_78,uVar13);
      return local_70;
    }
  }
LAB_1800559fa:
                    /* WARNING: Subroutine does not return */
  FUN_1800016c0();
}



// ============================================================
// INDEX: 206/227
// FUNCTION: FUN_180055b80
// ENTRY: 180055b80
// RVA: 0x55B80
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_180055b80(ulonglong * param_1, ulonglong param_2)
// ============================================================

void FUN_180055b80(ulonglong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (0x2e8ba2e8ba2e8ba < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_180022bd0();
  }
  uVar3 = param_2 * 0x58;
  if (uVar3 == 0) {
    uVar2 = 0;
  }
  else if (uVar3 < 0x1000) {
    uVar2 = FUN_18006d620(uVar3);
  }
  else {
    if (uVar3 + 0x27 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_1800016c0();
    }
    lVar1 = FUN_18006d620(uVar3 + 0x27);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    uVar2 = lVar1 + 0x27U & 0xffffffffffffffe0;
    *(longlong *)(uVar2 - 8) = lVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar2;
  param_1[2] = uVar2 + uVar3;
  return;
}



// ============================================================
// INDEX: 207/227
// FUNCTION: FUN_180055ce0
// ENTRY: 180055ce0
// RVA: 0x55CE0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_180055ce0(undefined1 * param_1, undefined1 * param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

undefined1 *
FUN_180055ce0(undefined1 *param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 uVar3;
  ulonglong *puVar4;
  float *pfVar5;
  float *pfVar6;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x38) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_2 + 0x38) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  FUN_180020410((ulonglong *)(param_1 + 0x40),(longlong *)(param_2 + 0x40));
  switch(*param_2) {
  case 1:
    param_1[8] = param_2[8];
    break;
  case 2:
  case 3:
    pfVar6 = *(float **)(param_2 + 8);
    goto LAB_180055e26;
  case 4:
    param_1[8] = param_2[8];
    FUN_180020900((undefined8 *)(param_1 + 0x10),(undefined8 *)(param_2 + 0x10));
    break;
  case 5:
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    break;
  case 6:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined2 *)(param_1 + 0x14) = *(undefined2 *)(param_2 + 0x14);
    break;
  case 7:
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    break;
  case 8:
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
    break;
  case 9:
    plVar2 = *(longlong **)(param_2 + 8);
    puVar4 = (ulonglong *)FUN_18006d620(0x18);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    pfVar6 = (float *)FUN_180055c10(puVar4,plVar2);
    goto LAB_180055e26;
  case 10:
    pfVar6 = *(float **)(param_2 + 8);
    pfVar5 = (float *)FUN_18006d620(0x40);
    pfVar5[0] = 0.0;
    pfVar5[1] = 0.0;
    pfVar5[2] = 0.0;
    pfVar5[3] = 0.0;
    pfVar5[4] = 0.0;
    pfVar5[5] = 0.0;
    pfVar5[6] = 0.0;
    pfVar5[7] = 0.0;
    pfVar5[8] = 0.0;
    pfVar5[9] = 0.0;
    pfVar5[10] = 0.0;
    pfVar5[0xb] = 0.0;
    pfVar5[0xc] = 0.0;
    pfVar5[0xd] = 0.0;
    pfVar5[0xe] = 0.0;
    pfVar5[0xf] = 0.0;
    pfVar6 = FUN_180040660(pfVar5,pfVar6,param_3,param_4);
LAB_180055e26:
    *(float **)(param_1 + 8) = pfVar6;
  }
  return param_1;
}



// ============================================================
// INDEX: 208/227
// FUNCTION: Run
// ENTRY: 18005b720
// RVA: 0x5B720
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void Run(LUAFiber * this)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: virtual void __cdecl LUAFiber::Run(void) __ptr64 */

void __thiscall LUAFiber::Run(LUAFiber *this)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  byte bVar10;
  void *pvVar11;
  undefined8 ****ppppuVar12;
  size_t sVar13;
  longlong in_R9;
  longlong lVar14;
  undefined1 auStack_78 [32];
  undefined8 ***local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  
                    /* 0x5b720  99  ?Run@LUAFiber@@UEAAXXZ */
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_78;
  lVar2 = *(longlong *)(this + 0x48);
  puVar8 = FUN_1800656c0(*(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x40),
                         (longlong)*(int *)(this + 0x50));
  puVar3 = *(undefined8 **)(lVar2 + 0x10);
  if ((*(byte *)(puVar8 + 1) & 0xf) == 0) {
    *(undefined1 *)(puVar3 + 1) = 0;
  }
  else {
    *puVar3 = *puVar8;
    *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar8 + 1);
  }
  *(longlong *)(lVar2 + 0x10) = *(longlong *)(lVar2 + 0x10) + 0x10;
  lVar2 = *(longlong *)(this + 0x48);
  local_58 = (undefined8 ***)(*(longlong *)(lVar2 + 0x10) + -0x10);
  pvVar11 = (void *)0x0;
  uStack_50 = (ulonglong)uStack_50._4_4_ << 0x20;
  lVar14 = (longlong)local_58 - *(longlong *)(lVar2 + 0x30);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar1 = *(undefined1 *)(lVar2 + 0xb);
  uVar5 = *(undefined8 *)(lVar2 + 0xa8);
  *(undefined8 *)(lVar2 + 0xa8) = 0;
  ppppuVar12 = &local_58;
  iVar6 = FUN_180066e70(lVar2,&LAB_18005f7b0,ppppuVar12);
  iVar7 = 0;
  if (iVar6 != 0) {
    *(undefined8 *)(lVar2 + 0x20) = uVar4;
    *(undefined1 *)(lVar2 + 0xb) = uVar1;
    iVar7 = FUN_180068000(lVar2,lVar14,iVar6);
    ppppuVar12 = (undefined8 ****)(*(longlong *)(lVar2 + 0x30) + lVar14);
    FUN_180066d40(lVar2,iVar7,(longlong *)ppppuVar12);
    FUN_1800671b0(lVar2);
  }
  *(undefined8 *)(lVar2 + 0xa8) = uVar5;
  if (iVar7 == 0) {
    return;
  }
  lVar2 = *(longlong *)(this + 0x48);
  plVar9 = (longlong *)(*(longlong *)(lVar2 + 0x10) + -0x10);
  bVar10 = *(byte *)(*(longlong *)(lVar2 + 0x10) + -8) & 0xf;
  if (bVar10 != 4) {
    if (bVar10 != 3) goto LAB_18005b85d;
    FUN_1800661a0(lVar2,plVar9,ppppuVar12,in_R9);
    if (0 < *(longlong *)(*(longlong *)(lVar2 + 0x18) + 0x18)) {
      FUN_18006ab10(lVar2);
    }
    plVar9 = (longlong *)(*(longlong *)(lVar2 + 0x10) + -0x10);
  }
  pvVar11 = (void *)(*plVar9 + 0x18);
LAB_18005b85d:
  local_58 = (undefined8 ****)0x0;
  uStack_50 = 0;
  local_48 = 0;
  uStack_40 = 0;
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (*(char *)((longlong)pvVar11 + sVar13) != '\0');
  FUN_180027650(&local_58,pvVar11,sVar13);
  ppppuVar12 = &local_58;
  if (0xf < uStack_40) {
    ppppuVar12 = (undefined8 ****)local_58;
  }
  Log::Print(3,(char *)0x0,"%s",ppppuVar12);
  if (0xf < uStack_40) {
    ppppuVar12 = (undefined8 ****)local_58;
    if ((0xfff < uStack_40 + 1) &&
       (ppppuVar12 = (undefined8 ****)local_58[-1],
       0x1f < (ulonglong)((longlong)local_58 + (-8 - (longlong)ppppuVar12)))) {
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppuVar12);
  }
  return;
}



// ============================================================
// INDEX: 209/227
// FUNCTION: FUN_18005b920
// ENTRY: 18005b920
// RVA: 0x5B920
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18005b920(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

void FUN_18005b920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar1 = (undefined8 *)FUN_180001da0();
  __stdio_common_vfprintf_s(*puVar1,param_1,param_2,0,&local_res18);
  return;
}



// ============================================================
// INDEX: 210/227
// FUNCTION: FUN_18005b990
// ENTRY: 18005b990
// RVA: 0x5B990
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: LPWSTR FUN_18005b990(LPWSTR param_1, UINT param_2, undefined8 * param_3)
// ============================================================

LPWSTR FUN_18005b990(LPWSTR param_1,UINT param_2,undefined8 *param_3)

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
      FUN_180002330();
    }
    pCVar1 = (LPCSTR)*param_3;
    uVar4 = __std_fs_convert_narrow_to_wide(param_2,pCVar1,(int)uVar9,(LPWSTR)0x0,0);
    iVar3 = (int)((ulonglong)uVar4 >> 0x20);
    if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1800026a0(iVar3);
    }
    uVar7 = (ulonglong)(int)uVar4;
    uVar2 = *(ulonglong *)(param_1 + 8);
    if (uVar2 < uVar7) {
      uVar6 = uVar7 - uVar2;
      if (*(ulonglong *)(param_1 + 0xc) - uVar2 < uVar6) {
        FUN_18005cf20((undefined8 *)param_1,uVar6,uVar9,uVar6);
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
      FUN_1800026a0(iVar3);
    }
  }
  return param_1;
}



// ============================================================
// INDEX: 211/227
// FUNCTION: FUN_18005bd60
// ENTRY: 18005bd60
// RVA: 0x5BD60
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: uint * FUN_18005bd60(uint * param_1, uint * param_2, uint * param_3)
// ============================================================

uint * FUN_18005bd60(uint *param_1,uint *param_2,uint *param_3)

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
    puVar4 = param_3;
    FUN_180005740((undefined8 *)param_1,(undefined8 *)param_2);
    FUN_18005bb00(param_1,param_3,(ulonglong)puVar4);
    return param_1;
  }
  lVar3 = *(longlong *)(param_2 + 4);
  if (7 < *(ulonglong *)(param_2 + 6)) {
    param_2 = *(uint **)param_2;
  }
  if (lVar3 == 2) {
    if (0x19 < (*param_2 & 0xffffffdf) - 0x3a0041) {
LAB_18005be46:
      sVar1 = *(short *)((longlong)param_2 + lVar3 * 2 + -2);
      if ((sVar1 != 0x5c) && (sVar1 != 0x2f)) {
        lVar6 = 1;
        goto LAB_18005be08;
      }
    }
  }
  else if (lVar3 != 0) goto LAB_18005be46;
  lVar6 = 0;
LAB_18005be08:
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
    FUN_18002c980((undefined8 *)param_1,uVar5);
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
// INDEX: 212/227
// FUNCTION: FUN_18005bef0
// ENTRY: 18005bef0
// RVA: 0x5BEF0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18005bef0(undefined8 param_1, undefined4 param_2, undefined8 * param_3)
// ============================================================

void FUN_18005bef0(undefined8 param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8 [4];
  undefined8 local_b8 [4];
  undefined8 **local_98 [18];
  
  puVar1 = (undefined8 *)FUN_180002680(local_c8,param_2);
  local_d8 = *puVar1;
  uStack_d0 = puVar1[1];
  FUN_1800208c0(local_b8,"create_directory");
  FUN_180005870(local_98,local_b8,param_3,&local_d8);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException(local_98,(ThrowInfo *)&DAT_180088e28);
}



// ============================================================
// INDEX: 213/227
// FUNCTION: AddToCache
// ENTRY: 18005c730
// RVA: 0x5C730
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void AddToCache(LogType param_1, char * param_2, char * param_3, ...)
// ============================================================

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* public: static void __cdecl Log::AddToCache(enum LogType,char const * __ptr64,char const *
   __ptr64,...) */

void __cdecl Log::AddToCache(LogType param_1,char *param_2,char *param_3,...)

{
  char *pcVar1;
  char cVar2;
  code *pcVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 ****ppppuVar9;
  size_t sVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  size_t sVar13;
  undefined8 in_R9;
  undefined8 local_res20;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined8 local_120;
  undefined8 *local_118;
  byte local_108 [16];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  void *pvStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong local_c8;
  void *pvStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined1 local_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 ***local_80;
  undefined8 uStack_78;
  size_t local_70;
  ulonglong local_68;
  undefined8 ***local_60;
  undefined8 uStack_58;
  size_t local_50;
  ulonglong local_48;
  ulonglong local_38;
  
                    /* 0x5c730  69  ?AddToCache@Log@@SAXW4LogType@@PEBD1ZZ */
  local_38 = DAT_18008d040 ^ (ulonglong)auStack_148;
  local_98 = 0;
  local_94 = 0;
  uStack_8c = 0;
  uStack_78 = 0;
  uVar12 = 0;
  local_70 = 0;
  local_68 = 0xf;
  local_80 = (undefined8 ****)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_48 = 0xf;
  local_60 = (undefined8 ****)0x0;
  cVar2 = *(char *)((longlong)DAT_18008e650[1] + 0x19);
  puVar6 = (undefined8 *)DAT_18008e650[1];
  puVar4 = DAT_18008e650;
  while (puVar7 = puVar6, cVar2 == '\0') {
    if (*(int *)((longlong)puVar7 + 0x1c) < (int)param_1) {
      puVar6 = (undefined8 *)puVar7[2];
      puVar7 = puVar4;
    }
    else {
      puVar6 = (undefined8 *)*puVar7;
    }
    cVar2 = *(char *)((longlong)puVar6 + 0x19);
    puVar4 = puVar7;
  }
  local_res20 = in_R9;
  if ((*(char *)((longlong)puVar4 + 0x19) != '\0') ||
     ((int)param_1 < *(int *)((longlong)puVar4 + 0x1c))) {
    std::_Xout_of_range("invalid map<K, T> key");
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_94 = puVar4[4];
  uStack_8c = puVar4[5];
  sVar13 = 0xffffffffffffffff;
  do {
    sVar13 = sVar13 + 1;
  } while (param_2[sVar13] != '\0');
  FUN_180022f50((longlong *)&local_80,param_2,sVar13);
  local_108[0] = 0x5b;
  FUN_18005d0f0((undefined1 (*) [32])&local_80,local_108);
  local_108[0] = 0x5d;
  FUN_18005d0f0((undefined1 (*) [32])&local_80,local_108);
  puVar6 = (undefined8 *)FUN_180001da0();
  local_120 = 0;
  local_128 = param_3;
  local_118 = &local_res20;
  __stdio_common_vsnprintf_s(*puVar6,&DAT_18008e420,0x220);
  sVar13 = 0xffffffffffffffff;
  do {
    sVar10 = sVar13 + 1;
    pcVar1 = &DAT_18008e421 + sVar13;
    sVar13 = sVar10;
  } while (*pcVar1 != '\0');
  FUN_180022f50((longlong *)&local_60,&DAT_18008e420,sVar10);
  if (0xff < DAT_18008e258) {
    do {
      lVar5 = DAT_18008d140;
      local_f8 = 0;
      uStack_e4 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      uStack_e8 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      local_c8 = 0xf;
      pvStack_e0 = (void *)0x0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = 0xf;
      pvStack_c0 = (void *)0x0;
      *(undefined1 *)(uVar12 + DAT_18008d140) = 0;
      puVar6 = (undefined8 *)(uVar12 + 4 + lVar5);
      *puVar6 = 0;
      puVar6[1] = 0;
      FUN_180020720((longlong *)(lVar5 + 0x18 + uVar12),(longlong *)&pvStack_e0);
      FUN_180020720((longlong *)(lVar5 + 0x38 + uVar12),(longlong *)&pvStack_c0);
      if (0xf < local_a8) {
        pvVar8 = pvStack_c0;
        if ((0xfff < local_a8 + 1) &&
           (pvVar8 = *(void **)((longlong)pvStack_c0 + -8),
           0x1f < (ulonglong)((longlong)pvStack_c0 + (-8 - (longlong)pvVar8)))) goto LAB_18005caa8;
        FUN_18006d9d4(pvVar8);
      }
      if (0xf < local_c8) {
        pvVar8 = pvStack_e0;
        if ((0xfff < local_c8 + 1) &&
           (pvVar8 = *(void **)((longlong)pvStack_e0 + -8),
           0x1f < (ulonglong)((longlong)pvStack_e0 + (-8 - (longlong)pvVar8)))) {
LAB_18005caa8:
                    /* WARNING: Subroutine does not return */
          _invalid_parameter_noinfo_noreturn();
        }
        FUN_18006d9d4(pvVar8);
      }
      uVar12 = uVar12 + 0x58;
    } while (uVar12 < 0x5800);
    DAT_18008e258 = 0;
  }
  local_98 = 1;
  puVar11 = (undefined1 *)((longlong)DAT_18008e258 * 0x58 + DAT_18008d140);
  *puVar11 = 1;
  *(undefined8 *)(puVar11 + 4) = local_94;
  *(undefined8 *)(puVar11 + 0xc) = uStack_8c;
  if ((undefined8 ****)(puVar11 + 0x18) != &local_80) {
    ppppuVar9 = &local_80;
    if (0xf < local_68) {
      ppppuVar9 = (undefined8 ****)local_80;
    }
    FUN_180022f50((longlong *)(puVar11 + 0x18),ppppuVar9,local_70);
  }
  if ((undefined8 ****)(puVar11 + 0x38) != &local_60) {
    ppppuVar9 = &local_60;
    if (0xf < local_48) {
      ppppuVar9 = (undefined8 ****)local_60;
    }
    FUN_180022f50((longlong *)(puVar11 + 0x38),ppppuVar9,local_50);
  }
  if (DAT_18008e3b8 != (longlong *)0x0) {
    (**(code **)(*DAT_18008e3b8 + 0x10))();
  }
  DAT_18008e258 = DAT_18008e258 + 1;
  if (0xf < local_48) {
    ppppuVar9 = (undefined8 ****)local_60;
    if ((0xfff < local_48 + 1) &&
       (ppppuVar9 = (undefined8 ****)local_60[-1],
       0x1f < (ulonglong)((longlong)local_60 + (-8 - (longlong)ppppuVar9)))) goto LAB_18005caa1;
    FUN_18006d9d4(ppppuVar9);
  }
  local_50 = 0;
  local_48 = 0xf;
  local_60 = (undefined8 ***)((ulonglong)local_60 & 0xffffffffffffff00);
  if (0xf < local_68) {
    ppppuVar9 = (undefined8 ****)local_80;
    if ((0xfff < local_68 + 1) &&
       (ppppuVar9 = (undefined8 ****)local_80[-1],
       0x1f < (ulonglong)((longlong)local_80 + (-8 - (longlong)ppppuVar9)))) {
LAB_18005caa1:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(ppppuVar9);
  }
  return;
}



// ============================================================
// INDEX: 214/227
// FUNCTION: FUN_18005cd30
// ENTRY: 18005cd30
// RVA: 0x5CD30
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int FUN_18005cd30(undefined8 param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4)
// ============================================================

int FUN_18005cd30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  puVar2 = (undefined8 *)FUN_180001da0();
  iVar1 = __stdio_common_vsprintf_s(*puVar2,param_1,0x220,param_2,0,&local_res18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// ============================================================
// INDEX: 215/227
// FUNCTION: FUN_18005d260
// ENTRY: 18005d260
// RVA: 0x5D260
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18005d260(void)
// ============================================================

void FUN_18005d260(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  undefined1 *puVar10;
  
  lVar1 = ((longlong)DAT_18008d148 - (longlong)DAT_18008d140) / 0x58;
  uVar9 = (DAT_18008d150 - (longlong)DAT_18008d140) / 0x58;
  if (0x2e8ba2e8ba2e8ba - (uVar9 >> 1) < uVar9) {
LAB_18005d4cb:
                    /* WARNING: Subroutine does not return */
    FUN_1800016c0();
  }
  uVar9 = (uVar9 >> 1) + uVar9;
  puVar10 = (undefined1 *)0x0;
  if (uVar9 < 0x100) {
    uVar9 = 0x5800;
    sVar4 = 0x5827;
LAB_18005d331:
    lVar3 = FUN_18006d620(sVar4);
    if (lVar3 == 0) goto LAB_18005d4c4;
    puVar10 = (undefined1 *)(lVar3 + 0x27U & 0xffffffffffffffe0);
    *(longlong *)(puVar10 + -8) = lVar3;
  }
  else {
    if (0x2e8ba2e8ba2e8ba < uVar9) goto LAB_18005d4cb;
    uVar9 = uVar9 * 0x58;
    if (uVar9 != 0) {
      if (0xfff < uVar9) {
        sVar4 = uVar9 + 0x27;
        if (sVar4 <= uVar9) goto LAB_18005d4cb;
        goto LAB_18005d331;
      }
      puVar10 = (undefined1 *)FUN_18006d620(uVar9);
    }
  }
  FUN_18005d4e0(puVar10 + lVar1 * 0x58,0x100 - lVar1);
  puVar8 = DAT_18008d148;
  if (DAT_18008d140 != DAT_18008d148) {
    puVar5 = (undefined8 *)(puVar10 + 0x30);
    puVar6 = (undefined8 *)(DAT_18008d140 + 0x28);
    puVar7 = DAT_18008d140;
    do {
      *(undefined1 *)(puVar5 + -6) = *puVar7;
      uVar2 = *(undefined8 *)((longlong)puVar6 + -0x1c);
      puVar7 = puVar7 + 0x58;
      *(undefined8 *)((longlong)puVar5 + -0x2c) = *(undefined8 *)((longlong)puVar6 + -0x24);
      *(undefined8 *)((longlong)puVar5 + -0x24) = uVar2;
      puVar5[-3] = 0;
      puVar5[-2] = 0;
      puVar5[-1] = 0;
      *puVar5 = 0;
      uVar2 = puVar6[-1];
      puVar5[-3] = puVar6[-2];
      puVar5[-2] = uVar2;
      uVar2 = puVar6[1];
      puVar5[-1] = *puVar6;
      *puVar5 = uVar2;
      puVar6[1] = 0xf;
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + -2) = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      puVar5[4] = 0;
      uVar2 = puVar6[3];
      puVar5[1] = puVar6[2];
      puVar5[2] = uVar2;
      uVar2 = puVar6[5];
      puVar5[3] = puVar6[4];
      puVar5[4] = uVar2;
      puVar6[4] = 0;
      puVar6[5] = 0xf;
      *(undefined1 *)(puVar6 + 2) = 0;
      puVar5 = puVar5 + 0xb;
      puVar6 = puVar6 + 0xb;
    } while (puVar7 != puVar8);
  }
  puVar7 = DAT_18008d148;
  puVar8 = DAT_18008d140;
  if (DAT_18008d140 != (undefined1 *)0x0) {
    for (; puVar8 != puVar7; puVar8 = puVar8 + 0x58) {
      FUN_180049a60((longlong)puVar8);
    }
    puVar8 = DAT_18008d140;
    if ((0xfff < (ulonglong)(((DAT_18008d150 - (longlong)DAT_18008d140) / 0x58) * 0x58)) &&
       (puVar8 = *(undefined1 **)(DAT_18008d140 + -8),
       (undefined1 *)0x1f < DAT_18008d140 + (-8 - (longlong)puVar8))) {
LAB_18005d4c4:
                    /* WARNING: Subroutine does not return */
      _invalid_parameter_noinfo_noreturn();
    }
    FUN_18006d9d4(puVar8);
  }
  DAT_18008d148 = puVar10 + 0x5800;
  DAT_18008d150 = (longlong)(puVar10 + uVar9);
  DAT_18008d140 = puVar10;
  return;
}



// ============================================================
// INDEX: 216/227
// FUNCTION: FUN_18005d4e0
// ENTRY: 18005d4e0
// RVA: 0x5D4E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined1 * FUN_18005d4e0(undefined1 * param_1, longlong param_2)
// ============================================================

undefined1 * FUN_18005d4e0(undefined1 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x30);
    do {
      *(undefined8 *)(param_1 + 1) = 0;
      *(undefined8 *)(param_1 + 9) = 0;
      *(undefined8 *)(param_1 + 0x11) = 0;
      *(undefined8 *)(param_1 + 0x19) = 0;
      *(undefined8 *)(param_1 + 0x21) = 0;
      *(undefined8 *)(param_1 + 0x29) = 0;
      *(undefined8 *)(param_1 + 0x31) = 0;
      *(undefined8 *)(param_1 + 0x39) = 0;
      *(undefined8 *)(param_1 + 0x41) = 0;
      *(undefined8 *)(param_1 + 0x49) = 0;
      *(undefined4 *)(param_1 + 0x51) = 0;
      *(undefined2 *)(param_1 + 0x55) = 0;
      param_1[0x57] = 0;
      *param_1 = 0;
      param_1 = param_1 + 0x58;
      *(undefined8 *)((longlong)puVar1 + -0x2c) = 0;
      *(undefined8 *)((longlong)puVar1 + -0x24) = 0;
      puVar1[-3] = 0;
      puVar1[-2] = 0;
      puVar1[-1] = 0;
      *puVar1 = 0xf;
      *(undefined1 *)(puVar1 + -3) = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0xf;
      *(undefined1 *)(puVar1 + 1) = 0;
      param_2 = param_2 + -1;
      puVar1 = puVar1 + 0xb;
    } while (param_2 != 0);
  }
  return param_1;
}



// ============================================================
// INDEX: 217/227
// FUNCTION: FUN_18005e750
// ENTRY: 18005e750
// RVA: 0x5E750
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18005e750(longlong * param_1)
// ============================================================

void FUN_18005e750(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  plVar4 = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_18005f2d0(param_1,param_1,(longlong *)plVar4[2]);
    plVar3 = (longlong *)*plVar4;
    FUN_18005f650(plVar4 + 4);
    FUN_18006d9d4(plVar4);
    plVar4 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}



// ============================================================
// INDEX: 218/227
// FUNCTION: FUN_18006cde8
// ENTRY: 18006cde8
// RVA: 0x6CDE8
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: ulonglong FUN_18006cde8(void)
// ============================================================

ulonglong FUN_18006cde8(void)

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
// INDEX: 219/227
// FUNCTION: __std_fs_create_directory
// ENTRY: 18006d048
// RVA: 0x6D048
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined8 __std_fs_create_directory(LPCWSTR param_1)
// ============================================================

/* Library Function - Single Match
    __std_fs_create_directory
   
   Library: Visual Studio 2019 Release */

undefined8 __std_fs_create_directory(LPCWSTR param_1)

{
  BOOL BVar1;
  uint local_res10;
  DWORD DStackX_14;
  ulonglong local_28 [2];
  uint local_18;
  
  BVar1 = CreateDirectoryW(param_1,(LPSECURITY_ATTRIBUTES)0x0);
  if (BVar1 == 0) {
    DStackX_14 = GetLastError();
    if (DStackX_14 == 0xb7) {
      DStackX_14 = FUN_18006d0c0(param_1,local_28,3,0xffffffff);
      if ((DStackX_14 == 0) && ((local_18 >> 4 & 1) == 0)) {
        DStackX_14 = 0xb7;
      }
    }
    local_res10 = local_res10 & 0xffffff00;
  }
  else {
    DStackX_14 = 0;
    local_res10 = CONCAT31(local_res10._1_3_,1);
  }
  return CONCAT44(DStackX_14,local_res10);
}



// ============================================================
// INDEX: 220/227
// FUNCTION: __security_check_cookie
// ENTRY: 18006d4e0
// RVA: 0x6D4E0
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void __security_check_cookie(uintptr_t _StackCookie)
// ============================================================

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_18008d040) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
  FUN_18006df4c();
  return;
}



// ============================================================
// INDEX: 221/227
// FUNCTION: FUN_18006d620
// ENTRY: 18006d620
// RVA: 0x6D620
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18006d620(size_t param_1)
// ============================================================

void FUN_18006d620(size_t param_1)

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
    FUN_1800016c0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_18006e3fc();
}



// ============================================================
// INDEX: 222/227
// FUNCTION: FUN_18006d9d4
// ENTRY: 18006d9d4
// RVA: 0x6D9D4
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: undefined FUN_18006d9d4(void * param_1)
// ============================================================

void FUN_18006d9d4(void *param_1)

{
  free(param_1);
  return;
}



// ============================================================
// INDEX: 223/227
// FUNCTION: memmove
// ENTRY: 18006e72e
// RVA: 0x6E72E
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void * memmove(void * _Dst, void * _Src, size_t _Size)
// ============================================================

void * __cdecl memmove(void *_Dst,void *_Src,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018006e72e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memmove(_Dst,_Src,_Size);
  return pvVar1;
}



// ============================================================
// INDEX: 224/227
// FUNCTION: _CxxThrowException
// ENTRY: 18006e746
// RVA: 0x6E746
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void _CxxThrowException(void * pExceptionObject, ThrowInfo * pThrowInfo)
// ============================================================

void __stdcall _CxxThrowException(void *pExceptionObject,ThrowInfo *pThrowInfo)

{
                    /* WARNING: Could not recover jumptable at 0x00018006e746. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _CxxThrowException(pExceptionObject,pThrowInfo);
  return;
}



// ============================================================
// INDEX: 225/227
// FUNCTION: memset
// ENTRY: 18006e74c
// RVA: 0x6E74C
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void * memset(void * _Dst, int _Val, size_t _Size)
// ============================================================

void * __cdecl memset(void *_Dst,int _Val,size_t _Size)

{
  void *pvVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018006e74c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pvVar1 = memset(_Dst,_Val,_Size);
  return pvVar1;
}



// ============================================================
// INDEX: 226/227
// FUNCTION: free
// ENTRY: 18006e758
// RVA: 0x6E758
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: void free(void * _Memory)
// ============================================================

void __cdecl free(void *_Memory)

{
                    /* WARNING: Could not recover jumptable at 0x00018006e758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free(_Memory);
  return;
}



// ============================================================
// INDEX: 227/227
// FUNCTION: memcmp
// ENTRY: 18006e7b5
// RVA: 0x6E7B5
// PRIORITY: 0
// SEED TYPE: CONTEXT
// SIGNATURE: int memcmp(void * _Buf1, void * _Buf2, size_t _Size)
// ============================================================

int __cdecl memcmp(void *_Buf1,void *_Buf2,size_t _Size)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00018006e7b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = memcmp(_Buf1,_Buf2,_Size);
  return iVar1;
}



