// libs/oldscape/jagex3/dash3d/ModelLit.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "ModelLit.h"

namespace jag::oldscape::dash3d {
    // 0x100f37e00
    int32_t ModelLit::m_useAABBMouseCheck[4] = {1, 0, 0, 0};

    // 0x103936438
    shared_ptr<ModelLitImpl> ModelLitImpl::m_tempModel;

    // 0x103936448, set at startup by ___cxx_global_var_init.76
    Array<signed char> ModelLitImpl::m_tempFTran = Array<signed char>();

    // 0x103936460
    shared_ptr<ModelLitImpl> ModelLitImpl::m_tempModel2;

    // 0x103936470, set at startup by ___cxx_global_var_init.78
    Array<signed char> ModelLitImpl::m_tempFTran2 = Array<signed char>();

    // 0x103936490
    jag::math::Matrix44T<float> ModelLitImpl::m_sumMatrix;

    // 0x1039364d0
    jag::math::Matrix44T<float> ModelLitImpl::m_weightMatrix;

    // 0x103936510
    jag::math::Matrix44T<float> ModelLitImpl::m_skinMatrix;

    // 0x103936550
    int32_t ModelLitImpl::m_nextModelId;

    // 0x103936554
    int32_t ModelLitImpl::m_oX;

    // 0x103936558
    int32_t ModelLitImpl::m_oY;

    // 0x10393655c
    int32_t ModelLitImpl::m_oZ;

    // 0x10002a770: ModelLit::~ModelLit() has the same machine code as void eastl::destruct<rs2lib::CoordMapSquare*>(rs2lib::CoordMapSquare*, rs2lib::CoordMapSquare*)

    // 0x10034be50
    void ModelLitImpl::PrepareForAppend(shared_ptr<ModelLit>& modelLit, const ModelAppendList& modelAppendList) {
        shared_ptr<ModelLit> local_40;

        auto pMVar1 = m_tempModel.end();
        if ((pMVar1 == this) || (pMVar1 = (ModelLitImpl*)m_tempModel2.end(), pMVar1 == this)) {
            PrepareThisForAppend(modelAppendList);
            return;
        }
        pMVar1 = (ModelLitImpl*)modelLit.end();
        if (pMVar1 != this) {
            LogAssert("apendeeOut.get() == this",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ModelLit.cpp",
                      50, nullptr);
        }
        Create<>();
        modelLit = local_40;
        pMVar1 = (ModelLitImpl*)*modelLit;
  PrepareForAppend(shared_ptr<ModelLit>&,ModelAppendList const&)::IterPlusMe::IterPlusMe(ModelAppendList const&,ModelLitImpl__(&local_40,modelAppendList,this);
  PrepareThisForAppend(pMVar1,&local_40);
  AppendModel(pMVar1,(ModelLit *)this);
    }

    // 0x10034bf40
    void ModelLitImpl::PrepareThisForAppend(const ModelAppendList& modelAppendList) {
        unsigned long uVar5;
        long* plVar6;
        Array<signed char>* pAVar7;
        unsigned long uVar8;

        int iVar10 = field_20;
        int iVar9 = field_96;
        int iVar3 = field_316;
        if ((**(void (**)(...))modelAppendList.field_0)(modelAppendList) != 0) {
            uVar8 = 0;
            do {
                plVar6 = (long*)(**(void (**)(...))(modelAppendList.field_0 + 8))(modelAppendList, uVar8);
                if ((**(void (**)(...))(*plVar6 + 56))(plVar6) != '\0') {
                    LogAssert("secondary.IsForRSeven() == false",
                              "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                              "dash3d/ModelLit.cpp",
                              105, nullptr);
                }
                iVar10 = iVar10 + *(int*)((long)plVar6 + 20);
                iVar9 = iVar9 + (int)plVar6[12];
                iVar3 = iVar3 + *(int*)((long)plVar6 + 316);
                uVar8 = uVar8 + 1;
                uVar5 = (**(void (**)(...))modelAppendList.field_0)(modelAppendList);
            } while (uVar8 < uVar5);
        }
        if (iVar9 != field_96) {
            uVar8 = (unsigned long)iVar10;
            field_24.set_max_size(uVar8, 7);
            field_48.set_max_size(uVar8, 7);
            field_72.set_max_size(uVar8, 7);
            uVar8 = (unsigned long)iVar9;
            field_104.set_max_size(uVar8, 7);
            field_128.set_max_size(uVar8, 7);
            field_152.set_max_size(uVar8, 7);
            field_176.set_max_size(uVar8, 7);
            field_200.set_max_size(uVar8, 7);
            field_224.set_max_size(uVar8, 7);
            if (*field_248 != nullptr) {
                pAVar7 = (Array<signed char>*)(*field_248).operator->();
                pAVar7->set_max_size(uVar8, 7);
            }
            if (*field_264 != nullptr) {
                pAVar7 = (Array<signed char>*)(*field_264).operator->();
                pAVar7->set_max_size(uVar8, 7);
            }
            if (*field_296 != nullptr) {
                ((Array<short>*)(*field_296).operator->())->set_max_size(uVar8, 7);
            }
            if (*field_280 != nullptr) {
                pAVar7 = (Array<signed char>*)(*field_280).operator->();
                pAVar7->set_max_size(uVar8, 7);
            }
            if (0 < iVar3) {
                uVar8 = (unsigned long)iVar3;
                field_320.set_max_size(uVar8, 7);
                field_344.set_max_size(uVar8, 7);
                field_368.set_max_size(uVar8, 7);
            }
        }
    }

    // 0x10034c2c0
    void ModelLitImpl::AppendModel(const ModelLit* modelLit) {
        (*modelLit->_vptr[3]._x7e___2)(modelLit);
    }

    // 0x10034c960
    void ModelLitImpl::AllocateFaceBuffersForModel(const ModelLitImpl& modelLitImpl) {
        ReturnValue local_40;
        unsigned short local_2a;

        unsigned long local_48 = field_104.end();
        bool cVar1 = field_248->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = modelLitImpl.field_248->operator_cast_to_bool();
            if ((cVar1) || (field_312[0] != modelLitImpl.field_312[0])) {
                make_shared<Array<signed char>, unsigned long&, signed char>(&local_40, &local_48, field_312);
                *field_248 = local_40;
            }
        }
        cVar1 = field_264->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = modelLitImpl.field_264->operator_cast_to_bool();
            if (cVar1) {
                local_2a = local_2a & 65280;
                make_shared<Array<signed char>, unsigned long&, signed char>(&local_40, &local_48, (schar*)&local_2a);
                *field_264 = local_40;
            }
        }
        cVar1 = field_296->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = modelLitImpl.field_296->operator_cast_to_bool();
            if (cVar1) {
                local_2a = 65535;
                make_shared<Array<short>, unsigned long&, short>(&local_40, &local_48, (short*)&local_2a);
                *field_296 = local_40;
            }
        }
        cVar1 = field_280->operator_cast_to_bool();
        if (!cVar1) {
            cVar1 = modelLitImpl.field_280->operator_cast_to_bool();
            if (cVar1) {
                local_2a = (((uint16_t)local_2a._1_1_ << 8) | (uint8_t)255);
                make_shared<Array<signed char>, unsigned long&, signed char>(&local_40, &local_48, (schar*)&local_2a);
                *field_280 = local_40;
            }
        }
    }

    // 0x10034cb90
    void ModelLitImpl::ResetBoundingCalculations() {
        field_504 = 0;
        field_528.clear(false);
        field_492 = 1;
    }

    // 0x10034cbc0
    ModelLitImpl* ModelLitImpl::HillSkewCopy(int arg1, int arg2, int arg3, int arg4, int arg5) {
        Array<signed char>* pAVar5;
        uint32_t in_register_00000034;
        int in_stack_00000008;
        ReturnValue local_50;
        shared_ptr<ModelLitImpl> local_40;

        long lVar9 = (((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1);
        make_shared<ModelLitImpl>();
        uint32_t uVar2 = *(uint32_t*)(lVar9 + 20);
        long lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 20) = uVar2;
        uVar2 = *(uint32_t*)(lVar9 + 96);
        lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 96) = uVar2;
        uVar2 = *(uint32_t*)(lVar9 + 316);
        lVar4 = local_40.operator->();
        *(uint32_t*)(lVar4 + 316) = uVar2;
        lVar4 = local_40.operator->();
        (*((lVar4 + 24))) = (*((lVar9 + 24)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 72))) = (*((lVar9 + 72)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 104))) = (*((lVar9 + 104)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 128))) = (*((lVar9 + 128)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 152))) = (*((lVar9 + 152)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 176))) = (*((lVar9 + 176)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 200))) = (*((lVar9 + 200)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 224))) = (*((lVar9 + 224)));
        if (!(((lVar9 + 248))->operator_cast_to_bool())) {
            local_50 = shared_ptr();
        } else {
            pAVar5 = (Array<signed char>*)*(*((lVar9 + 248)));
            make_shared<Array<signed char>, Array<signed char>&>(&local_50, pAVar5);
        }
        lVar4 = local_40.operator->();
        (*((lVar4 + 248))) = local_50;
        if (!(((lVar9 + 264))->operator_cast_to_bool())) {
            local_50 = shared_ptr();
        } else {
            pAVar5 = (Array<signed char>*)*(*((lVar9 + 264)));
            make_shared<Array<signed char>, Array<signed char>&>(&local_50, pAVar5);
        }
        lVar4 = local_40.operator->();
        (*((lVar4 + 264))) = local_50;
        if (!(((lVar9 + 280))->operator_cast_to_bool())) {
            local_50 = shared_ptr();
        } else {
            pAVar5 = (Array<signed char>*)*(*((lVar9 + 280)));
            make_shared<Array<signed char>, Array<signed char>&>(&local_50, pAVar5);
        }
        lVar4 = local_40.operator->();
        (*((lVar4 + 280))) = local_50;
        lVar4 = local_40.operator->();
        (*((lVar4 + 296))) = (*((lVar9 + 296)));
        uint8_t uVar1 = *(uint8_t*)(lVar9 + 312);
        lVar4 = local_40.operator->();
        *(uint8_t*)(lVar4 + 312) = uVar1;
        lVar4 = local_40.operator->();
        (*((lVar4 + 320))) = (*((lVar9 + 320)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 344))) = (*((lVar9 + 344)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 368))) = (*((lVar9 + 368)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 392))) = (*((lVar9 + 392)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 408))) = (*((lVar9 + 408)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 424))) = (*((lVar9 + 424)));
        lVar4 = local_40.operator->();
        (*((lVar4 + 440))) = (*((lVar9 + 440)));
        uVar1 = *(uint8_t*)(lVar9 + 16);
        lVar4 = local_40.operator->();
        *(uint8_t*)(lVar4 + 16) = uVar1;
        lVar4 = local_40.operator->();
        long lVar6 = local_40.operator->();
        ((lVar4 + 48))->set_max_size((long)*(int*)(lVar6 + 20), 5);
        lVar4 = local_40.operator->();
        void* pvVar7 = (void*)((lVar4 + 48))->data();
        void* pvVar8 = (void*)((lVar9 + 48))->data();
        _memcpy(pvVar7, pvVar8, (long)*(int*)(lVar9 + 20) << 2);
        HillSkew((ModelLitImpl*)local_40.operator->(), arg2, arg3, arg4, arg5, in_stack_00000008);
        static_pointer_cast<ClientEntity, shared_ptr<ClientNpc>>((shared_ptr<ClientNpc>*)this);
        return this;
    }

    // 0x10034d200
    void ModelLitImpl::HillSkew(int arg1, int arg2, int arg3, int arg4, int arg5) {
        ModelLitImpl* local_d8[2];
        uint8_t local_c8[16];
        function<jag::math::Vector3T<int>(int)> local_98[48];
        function<void(int, int)> local_68[48];
        long local_38;

        CalcBoundingCylinder();
        new (local_c8) HillSkewBuildInput();
        local_c8._0_4_ = arg1;
        new (local_d8) rs2lib::worldmap::LocationData(arg2, arg3, arg4);
        (*((local_c8 + 4))) = *local_d8;
        int local_b4 = m_radiusCylinder;
        int local_a4 = field_8;
        int local_a0 = field_20;
        local_d8[0] = this;
        int local_b8 = arg5;
        int local_b0 = local_b4;
        int local_ac = local_b4;
        int local_a8 = local_b4;
        local_98->operator=(local_d8);
        local_d8[0] = this;
        local_68->operator=(local_d8);
        ClientBuild::PerformHillSkew(*local_c8);
        ResetBoundingCalculations();
    }

    // 0x10034d350
    void ModelLitImpl::CalcBoundingCylinder() {
        int iVar1;
        int iVar2;
        int iVar3;
        int* piVar4;
        unsigned long arg1;
        double dVar5;
        double dVar6;

        if (field_504 != 1) {
            field_504 = 1;
            field_508 = 0;
            field_8 = 0;
            m_radiusCylinder = 0;
            if (0 < field_20) {
                arg1 = 0;
                do {
                    piVar4 = &field_24[arg1];
                    iVar3 = *piVar4;
                    piVar4 = &field_48[arg1];
                    iVar1 = *piVar4;
                    piVar4 = &field_72[arg1];
                    iVar2 = *piVar4;
                    if (field_8 < -iVar1) {
                        field_8 = -iVar1;
                    }
                    if (field_508 < iVar1) {
                        field_508 = iVar1;
                    }
                    iVar3 = iVar2 * iVar2 + iVar3 * iVar3;
                    if (m_radiusCylinder < iVar3) {
                        m_radiusCylinder = iVar3;
                    }
                    arg1 = arg1 + 1;
                } while ((long)arg1 < (long)field_20);
            }
            dVar5 = (double)sqrt<int>(m_radiusCylinder);
            iVar3 = (int)(dVar5 + 0.99);
            m_radiusCylinder = iVar3;
            dVar5 = (double)sqrt<int>(field_8 * field_8 + iVar3 * iVar3);
            field_520 = (int)(dVar5 + 0.99);
            dVar6 = (double)sqrt<int>(field_508 * field_508 + iVar3 * iVar3);
            field_516 = (int)(dVar6 + 0.99) + (int)(dVar5 + 0.99) + 1;
        }
    }

    // 0x10034d580
    auto ModelLitImpl::CopyForAnim(bool arg1, int arg2) {
        int iVar1;
        int iVar2;
        shared_ptr<ModelLitImpl>* this_00;
        Array<signed char>* this_01;

        if (arg2 == 1) {
            this_01 = (Array<signed char>*)&m_tempFTran;
            if (arg1) {
                this_00 = (shared_ptr<ModelLitImpl>*)&m_tempModel;
                goto LAB_10034d609;
            }
            iVar1 = m_tempFTran.end();
            iVar2 = field_96;
            this_00 = (shared_ptr<ModelLitImpl>*)&m_tempModel;
            if (iVar2 <= iVar1)
                goto LAB_10034d609;
        } else {
            this_01 = (Array<signed char>*)&m_tempFTran2;
            if (arg1) {
                this_00 = (shared_ptr<ModelLitImpl>*)&m_tempModel2;
                goto LAB_10034d609;
            }
            iVar1 = m_tempFTran2.end();
            iVar2 = field_96;
            this_00 = (shared_ptr<ModelLitImpl>*)&m_tempModel2;
            if (iVar2 <= iVar1)
                goto LAB_10034d609;
        }
        this_01->set_max_size((long)(iVar2 + 100), 1);
    LAB_10034d609:
        ModelLitImpl* modelLitImpl = (ModelLitImpl*)**this_00;
        CopyForAnim(this, arg1, modelLitImpl, this_01);
        return auto(this_00);
    }

    // 0x10034d640
    void ModelLitImpl::CopyForAnim(bool arg1, ModelLitImpl& modelLitImpl, Array<signed char>& arg3) {
        uint8_t uVar2;
        uint32_t uVar3;
        uint32_t* puVar6;
        Array<signed char>* pAVar7;
        uint8_t* puVar8;
        uint8_t* puVar9;
        uint64_t in_register_00000031;
        unsigned long uVar10;
        ReturnValue local_88;
        unsigned long local_78;
        Array<int>* local_70;
        Array<int>* local_68;
        Array<int>* local_60;
        Array<int>* local_58;

        uint32_t local_3c = (uint32_t)(((uint64_t)in_register_00000031 << 8) | (uint8_t)arg1);
        modelLitImpl.field_20 = field_20;
        modelLitImpl.field_96 = field_96;
        modelLitImpl.field_316 = field_316;
        uint8_t* puVar1 = &modelLitImpl.field_24;
        int iVar5 = puVar1->end();
        if (iVar5 < field_20) {
            puVar1->set_max_size((long)field_20 + 100, 5);
            modelLitImpl.field_48.set_max_size((long)field_20 + 100, 5);
            modelLitImpl.field_72.set_max_size((long)field_20 + 100, 5);
        }
        ModelLitImpl* local_38 = modelLitImpl;
        if (0 < field_20) {
            local_70 = (Array<int>*)&field_24;
            local_68 = (Array<int>*)&field_48;
            local_60 = (Array<int>*)&modelLitImpl.field_48;
            local_58 = (Array<int>*)&field_72;
            uVar10 = 0;
            do {
                puVar6 = (uint32_t*)(*local_70)[uVar10];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*puVar1)[uVar10];
                this = this;
                *puVar6 = uVar3;
                puVar6 = (uint32_t*)(*local_68)[uVar10];
                uVar3 = *puVar6;
                puVar6 = (uint32_t*)(*local_60)[uVar10];
                *puVar6 = uVar3;
                puVar6 = (uint32_t*)(*local_58)[uVar10];
                uVar3 = *puVar6;
                puVar6 = &modelLitImpl.field_72[uVar10];
                *puVar6 = uVar3;
                uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)field_20);
        }
        ModelLitImpl* this_00 = local_38;
        if ((char)local_3c == '\0') {
            local_78 = arg3.end();
            make_shared<Array<signed char>, unsigned long>(&local_88, &local_78);
            this_00 = local_38;
            puVar1 = local_38->field_264;
            *puVar1 = local_88;
            puVar8 = field_264;
            if (*puVar8 == nullptr) {
                if (0 < field_96) {
                    uVar10 = 0;
                    do {
                        pAVar7 = (Array<signed char>*)**puVar1;
                        puVar8 = (uint8_t*)(*pAVar7)[uVar10];
                        *puVar8 = 0;
                        uVar10 = uVar10 + 1;
                    } while ((long)uVar10 < (long)field_96);
                }
            } else if (0 < field_96) {
                uVar10 = 0;
                do {
                    pAVar7 = (Array<signed char>*)**puVar8;
                    puVar9 = (uint8_t*)(*pAVar7)[uVar10];
                    uVar2 = *puVar9;
                    pAVar7 = (Array<signed char>*)**puVar1;
                    puVar9 = (uint8_t*)(*pAVar7)[uVar10];
                    *puVar9 = uVar2;
                    uVar10 = uVar10 + 1;
                    this = this;
                } while ((long)uVar10 < (long)field_96);
            }
        } else {
            *local_38->field_264 = *field_264;
        }
        this_00->field_104 = field_104;
        this_00->field_128 = field_128;
        this_00->field_152 = field_152;
        this_00->field_176 = field_176;
        this_00->field_200 = field_200;
        this_00->field_224 = field_224;
        *this_00->field_248 = *field_248;
        *this_00->field_280 = *field_280;
        *this_00->field_296 = *field_296;
        this_00->field_312[0] = field_312[0];
        this_00->field_320 = field_320;
        this_00->field_344 = field_344;
        this_00->field_368 = field_368;
        this_00->field_392 = field_392;
        this_00->field_408 = field_408;
        this_00->field_424 = field_424;
        this_00->field_440 = field_440;
        this_00->field_456 = field_456;
        this_00->field_472 = field_472;
        this_00->field_16[0] = field_16[0];
        iVar5 = AllocModelId();
        this_00->field_488 = iVar5 + 2;
        this_00->field_500 = 1;
        ResetBoundingCalculations(this_00);
        this_00->field_747 = '\0';
    }

    // 0x10034db80
    void ModelLitImpl::CalcAABB(int arg1) {
        unsigned int uVar1;
        Array<int>* this_01;
        int arg4;
        unsigned int uVar3;
        unsigned int uVar4;
        unsigned long uVar5;
        Logger* this_02;
        uint64_t uVar6;
        int* piVar7;
        unsigned int* puVar8;
        uint64_t* puVar9;
        int iVar10;
        unsigned long uVar11;
        unsigned long uVar12;
        unsigned long arg1_00;
        unsigned long local_b0;
        unsigned long local_a8;
        unsigned long local_a0;
        Array<int>* local_90;
        Array<int>* local_88;
        hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>>* local_80;
        Array<int>* local_78;
        int local_6c;
        unsigned long local_50;
        unsigned long local_48;
        unsigned long local_40;
        int local_38;

        uint8_t* this_00 = &field_528;
        auto local_c0 = this_00->find(arg1);
        AABB local_68 = this_00->end();
        if (local_c0 != local_68 == '\0') {
            uVar5 = this_00->size();
            if (8 < uVar5) {
                this_02 = logger::default_logger();
                uVar1 = field_488;
                uVar6 = this_00->size();
                this_02->Log(false, 3,
                             "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/"
                             "dash3d/ModelLit.cpp",
                             453, "Model with modelid: %d has an AABB cache with size: %d", (unsigned long)uVar1,
                             uVar6);
                this_00->clear();
            }
            uVar5 = (unsigned long)arg1;
            local_80 = (hash_map<int, ModelLit::AABB, eastl::hash<int>, eastl::equal_to<int>,
                                 eastl::fixed_hashtable_allocator<3ul, 40ul, 1ul, 4ul, 0ul, true>>*)this_00;
            piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[uVar5];
            iVar10 = *piVar7;
            piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[uVar5];
            if (field_20 < 1) {
                local_50 = 0;
                uVar11 = 0;
                local_40 = 0;
                uVar12 = 0;
                local_48 = 0;
                uVar5 = 0;
            } else {
                local_6c = *piVar7;
                local_90 = (Array<int>*)&field_24;
                local_78 = (Array<int>*)&field_72;
                local_88 = (Array<int>*)&field_48;
                arg1_00 = 0;
                uVar5 = 0;
                local_48 = 0;
                uVar12 = 0;
                local_40 = 0;
                uVar11 = 0;
                local_50 = 0;
                local_38 = iVar10;
                do {
                    this_01 = local_90;
                    local_b0 = uVar11;
                    local_a8 = uVar12;
                    local_a0 = uVar5;
                    piVar7 = (int*)(*local_90)[arg1_00];
                    iVar10 = *piVar7;
                    piVar7 = (int*)(*local_78)[arg1_00];
                    arg4 = local_6c;
                    uVar3 = Pix3D::RotateXAroundY(iVar10, *piVar7, local_38, local_6c);
                    puVar8 = (unsigned int*)(*local_88)[arg1_00];
                    uVar1 = *puVar8;
                    piVar7 = (int*)(*this_01)[arg1_00];
                    iVar10 = *piVar7;
                    piVar7 = (int*)(*local_78)[arg1_00];
                    uVar11 = local_a0;
                    uVar4 = Pix3D::RotateZAroundY(iVar10, *piVar7, local_38, arg4);
                    uVar5 = uVar11 & 4294967295;
                    if ((int)uVar3 < (int)uVar11) {
                        uVar5 = (unsigned long)uVar3;
                    }
                    iVar10 = (int)local_40;
                    local_40 = local_40 & 4294967295;
                    if (iVar10 < (int)uVar3) {
                        local_40 = (unsigned long)uVar3;
                    }
                    iVar10 = (int)local_48;
                    local_48 = local_48 & 4294967295;
                    if ((int)uVar1 < iVar10) {
                        local_48 = (unsigned long)uVar1;
                    }
                    iVar10 = (int)local_50;
                    local_50 = local_50 & 4294967295;
                    if (iVar10 < (int)uVar1) {
                        local_50 = (unsigned long)uVar1;
                    }
                    uVar12 = local_a8 & 4294967295;
                    if ((int)uVar4 < (int)local_a8) {
                        uVar12 = (unsigned long)uVar4;
                    }
                    uVar11 = local_b0 & 4294967295;
                    if ((int)local_b0 < (int)uVar4) {
                        uVar11 = (unsigned long)uVar4;
                    }
                    arg1_00 = arg1_00 + 1;
                    this = this;
                } while ((long)arg1_00 < (long)field_20);
            }
            local_68 = ModelLit::AABB();
            local_68.field_0 = ((int)uVar5 + (int)local_40) / 2;
            local_68.field_4 = ((int)local_48 + (int)local_50) / 2;
            local_68.field_8 = ((int)uVar12 + (int)uVar11) / 2;
            iVar10 = (int)local_40 - (int)uVar5;
            local_68.field_12 = (iVar10 - (iVar10 + 1 >> 31)) + 1 >> 1;
            iVar10 = (int)local_50 - (int)local_48;
            local_68.field_16 = (iVar10 - (iVar10 + 1 >> 31)) + 1 >> 1;
            iVar10 = (int)uVar11 - (int)uVar12;
            local_68.field_20 = (iVar10 - (iVar10 + 1 >> 31)) + 1 >> 1;
            MousePickingHelper::AdjustAABBRadiiForPicking(local_68.field_12, local_68.field_20, (bool)field_16[0]);
            puVar9 = (uint64_t*)(*local_80)[arg1];
            *puVar9 = (((uint64_t)local_68.field_4 << 32) | (uint32_t)local_68.field_0);
            puVar9[1] = (((uint64_t)local_68.field_12 << 32) | (uint32_t)local_68.field_8);
            puVar9[2] = (((uint64_t)local_68.field_20 << 32) | (uint32_t)local_68.field_16);
        }
    }

    // 0x10034df60
    void ModelLitImpl::CalcBoundingSphere() {
        int iVar1;
        int* piVar2;
        unsigned long arg1;
        int iVar3;
        double dVar4;

        if (field_504 != 2) {
            field_504 = 2;
            m_radiusCylinder = 0;
            if (0 < field_20) {
                arg1 = 0;
                do {
                    piVar2 = &field_24[arg1];
                    iVar3 = *piVar2;
                    piVar2 = &field_48[arg1];
                    iVar1 = *piVar2;
                    piVar2 = &field_72[arg1];
                    iVar3 = iVar1 * iVar1 + iVar3 * iVar3 + *piVar2 * *piVar2;
                    if (m_radiusCylinder < iVar3) {
                        m_radiusCylinder = iVar3;
                    }
                    arg1 = arg1 + 1;
                } while ((long)arg1 < (long)field_20);
            }
            dVar4 = (double)sqrt<int>(m_radiusCylinder);
            iVar3 = (int)(dVar4 + 0.99);
            m_radiusCylinder = iVar3;
            field_520 = iVar3;
            field_516 = iVar3 * 2 + 1;
        }
    }

    // 0x10034e060
    int ModelLitImpl::GetRadiusCylinder() {
        CalcBoundingCylinder();
        return m_radiusCylinder;
    }

    // 0x10034e080
    int ModelLitImpl::GetRadiusSphere() {
        CalcBoundingSphere();
        return m_radiusCylinder;
    }

    // 0x10034e0f0
    void ModelLitImpl::Animate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2) {
        int iVar1;
        int arg1;
        int arg4;
        Array<AnimFrame>* this_00;
        shared_ptr<GroundDecor>* groundDecor;
        long lVar3;
        int* piVar4;
        vector<int>* arg2_00;
        unsigned long uVar5;
        shared_ptr<Decor> local_50;
        shared_ptr<GroundDecor>* local_40;

        if ((!field_392 == nullptr) && (arg2 != -1)) {
            this_00 = (Array<AnimFrame>*)animFrameSet.operator->();
            groundDecor = (shared_ptr<GroundDecor>*)(*this_00)[(long)arg2];
            local_50 = shared_ptr(groundDecor);
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            local_40 = groundDecor + 24;
            if (0 < *(int*)(groundDecor + 16)) {
                uVar5 = 0;
                do {
                    lVar3 = local_50.operator->();
                    piVar4 = (int*)(*local_40)[uVar5];
                    piVar4 = (int*)(*((lVar3 + 8)))[(long)*piVar4];
                    if (*piVar4 == 5)
                        break;
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)*(int*)(groundDecor + 16));
            }
            if (0 < *(int*)(groundDecor + 16)) {
                uVar5 = 0;
                do {
                    piVar4 = (int*)(*local_40)[uVar5];
                    iVar1 = *piVar4;
                    lVar3 = local_50.operator->();
                    piVar4 = (int*)(*((lVar3 + 8)))[(long)iVar1];
                    arg1 = *piVar4;
                    lVar3 = local_50.operator->();
                    arg2_00 = (vector<int>*)(*((lVar3 + 40)))[(long)iVar1];
                    piVar4 = (int*)(*((groundDecor + 48)))[uVar5];
                    iVar1 = *piVar4;
                    piVar4 = (int*)(*((groundDecor + 72)))[uVar5];
                    arg4 = *piVar4;
                    piVar4 = (int*)(*((groundDecor + 96)))[uVar5];
                    Animate2(arg1, *arg2_00, iVar1, arg4, *piVar4);
                    uVar5 = uVar5 + 1;
                } while ((long)uVar5 < (long)*(int*)(groundDecor + 16));
            }
            ResetBoundingCalculations();
        }
    }

    // 0x10034e2d0
    void ModelLitImpl::Animate2(int arg1, const eastl::vector<int>& arg2, int arg3, int arg4, int arg5) {
        int iVar1;
        int iVar2;
        shared_ptr<Array<Array<int>>>* psVar3;
        bool bVar4;
        int iVar6;
        int iVar7;
        int iVar8;
        int iVar9;
        shared_ptr<Array<Array<int>>>* this_00;
        int* piVar10;
        vector<EntityHighlight*, BucketAllocatorEASTL>* pvVar11;
        Array<Array<int>>* pAVar12;
        Array<int>* arg1_00;
        long lVar13;
        Array<signed char>* pAVar14;
        uint8_t* pbVar15;
        uint8_t* puVar16;
        unsigned long uVar17;
        unsigned long uVar18;
        Array<int>* this_01;
        Array<int>* pAVar19;
        Array<int>* pAVar20;
        uint8_t* puVar21;
        Array<int> local_a8;
        unsigned long local_90;
        shared_ptr<Array<Array<int>>>* local_80;
        unsigned long local_78;
        uint8_t* local_70;
        vector<EntityHighlight*, BucketAllocatorEASTL>* local_68;
        shared_ptr<Array<Array<int>>>* local_60;
        unsigned long local_58;
        uint64_t local_50;
        Array<int>* local_48;
        Array<int>* local_40;
        Array<int>* local_38;

        local_78 = (((uint64_t)local_78._4_4_ << 32) | (uint32_t)arg5);
        local_68 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(((uint64_t)local_68._4_4_ << 32) | (uint32_t)arg4);
        local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)arg3);
        unsigned int uVar5 = arg2.size();
        switch (arg1) {
        case 0:
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            iVar8 = (int)local_58;
            iVar9 = (int)local_68;
            if ((int)uVar5 < 1) {
                local_50 = nullptr;
            } else {
                local_60 = (shared_ptr<Array<Array<int>>>*)&field_392;
                local_38 = (Array<int>*)&field_48;
                local_48 = (Array<int>*)&field_72;
                local_70 = (uint8_t*)(unsigned long)uVar5;
                local_40 = nullptr;
                local_50 = (shared_ptr<Array<Array<int>>>*)((unsigned long)local_50._4_4_ << 32);
                local_80 = (shared_ptr<Array<Array<int>>>*)&field_24;
                do {
                    piVar10 = &arg2[(unsigned long)local_40];
                    psVar3 = local_60;
                    iVar7 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_60).operator->();
                    iVar6 = pvVar11->end();
                    if (iVar7 < iVar6) {
                        pAVar12 = (Array<Array<int>>*)**psVar3;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar7];
                        iVar7 = pvVar11->end();
                        pAVar19 = local_48;
                        if (0 < iVar7) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = &field_24[uVar17];
                                m_oX = m_oX + *piVar10;
                                piVar10 = (int*)(*local_38)[uVar17];
                                m_oY = m_oY + *piVar10;
                                piVar10 = (int*)(*pAVar19)[uVar17];
                                m_oZ = m_oZ + *piVar10;
                                uVar18 = uVar18 + 1;
                                iVar8 = pvVar11->end();
                            } while ((long)uVar18 < (long)iVar8);
                            local_50 = (shared_ptr<Array<Array<int>>>*)(((uint64_t)local_50._4_4_ << 32) |
                                                                        (uint32_t)((int)local_50 + (int)uVar18));
                            iVar8 = (int)local_58;
                            iVar9 = (int)local_68;
                        }
                    }
                    local_40 = (Array<int>*)((long)local_40 + 1);
                } while (local_40 != (Array<int>*)local_70);
            }
            if ((int)local_50 < 1) {
                m_oX = iVar8;
                m_oY = iVar9;
            } else {
                local_78._0_4_ = m_oZ / (int)local_50 + (int)local_78;
                m_oX = m_oX / (int)local_50 + iVar8;
                m_oY = m_oY / (int)local_50 + iVar9;
            }
            m_oZ = (int)local_78;
            break;
        case 1:
            if (0 < (int)uVar5) {
                local_60 = (shared_ptr<Array<Array<int>>>*)&field_392;
                local_38 = (Array<int>*)&field_24;
                local_48 = (Array<int>*)&field_72;
                local_50 = (shared_ptr<Array<Array<int>>>*)(unsigned long)uVar5;
                local_40 = nullptr;
                iVar8 = (int)local_78;
                local_70 = &field_48;
                do {
                    piVar10 = &arg2[(unsigned long)local_40];
                    iVar9 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_60).operator->();
                    iVar7 = pvVar11->end();
                    if (iVar9 < iVar7) {
                        pAVar12 = (Array<Array<int>>*)**local_60;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar9];
                        iVar9 = pvVar11->end();
                        if (0 < iVar9) {
                            uVar18 = 0;
                            do {
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = (int*)(*local_38)[uVar17];
                                *piVar10 = *piVar10 + (int)local_58;
                                piVar10 = &field_48[uVar17];
                                *piVar10 = *piVar10 + (int)local_68;
                                piVar10 = (int*)(*local_48)[uVar17];
                                *piVar10 = *piVar10 + iVar8;
                                uVar18 = uVar18 + 1;
                                iVar9 = pvVar11->end();
                            } while ((long)uVar18 < (long)iVar9);
                        }
                    }
                    local_40 = (Array<int>*)((long)local_40 + 1);
                } while (local_40 != (Array<int>*)local_50);
            }
            break;
        case 2:
            if (0 < (int)uVar5) {
                local_80 = (shared_ptr<Array<Array<int>>>*)&field_392;
                pAVar19 = (Array<int>*)&field_24;
                pAVar20 = (Array<int>*)&field_48;
                local_48 = (Array<int>*)&field_72;
                local_60 = (shared_ptr<Array<Array<int>>>*)((local_58 & 255) << 3);
                local_70 = (uint8_t*)(((unsigned long)local_68 & 255) << 3);
                local_78 = (local_78 & 255) << 3;
                local_90 = (unsigned long)uVar5;
                local_50 = nullptr;
                local_40 = pAVar19;
                local_38 = pAVar20;
                do {
                    piVar10 = &arg2[(unsigned long)local_50];
                    iVar8 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_80).operator->();
                    iVar9 = pvVar11->end();
                    this_01 = local_48;
                    if (iVar8 < iVar9) {
                        pAVar12 = (Array<Array<int>>*)**local_80;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*pAVar12)[(long)iVar8];
                        iVar8 = pvVar11->end();
                        if (0 < iVar8) {
                            uVar18 = 0;
                            local_68 = pvVar11;
                            do {
                                local_58 = uVar18;
                                piVar10 = (int*)(*pvVar11)[uVar18];
                                iVar8 = m_oX;
                                uVar17 = (unsigned long)*piVar10;
                                piVar10 = (int*)(*pAVar19)[uVar17];
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)(*pAVar20)[uVar17];
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)(*this_01)[uVar17];
                                uVar18 = local_78;
                                *piVar10 = *piVar10 - iVar8;
                                if (local_78 != 0) {
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[local_78];
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[uVar18];
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    pAVar19 = local_40;
                                    *piVar10 = iVar9 * iVar1 - iVar8 * iVar2 >> 16;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    *piVar10 = iVar6 * iVar9 + iVar7 * iVar8 >> 16;
                                }
                                psVar3 = local_60;
                                if (local_60 != nullptr) {
                                    piVar10 =
                                        (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(unsigned long)local_60];
                                    iVar8 = *piVar10;
                                    piVar10 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(unsigned long)psVar3];
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    pAVar20 = local_48;
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*local_48)[uVar17];
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)(*pAVar20)[uVar17];
                                    pAVar19 = local_40;
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*pAVar20)[uVar17];
                                    *piVar10 = iVar9 * iVar2 + iVar8 * iVar1 >> 16;
                                    piVar10 = (int*)(*local_38)[uVar17];
                                    *piVar10 = iVar7 * iVar9 - iVar6 * iVar8 >> 16;
                                }
                                pAVar20 = local_48;
                                puVar21 = local_70;
                                this_01 = local_48;
                                if (local_70 != nullptr) {
                                    piVar10 =
                                        (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(unsigned long)local_70];
                                    iVar8 = *piVar10;
                                    piVar10 =
                                        (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(unsigned long)puVar21];
                                    iVar9 = *piVar10;
                                    piVar10 = (int*)(*pAVar20)[uVar17];
                                    iVar7 = *piVar10;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    this_01 = local_48;
                                    iVar6 = *piVar10;
                                    piVar10 = (int*)(*local_48)[uVar17];
                                    iVar1 = *piVar10;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    iVar2 = *piVar10;
                                    piVar10 = (int*)(*this_01)[uVar17];
                                    pAVar19 = local_40;
                                    *piVar10 = iVar9 * iVar1 - iVar8 * iVar2 >> 16;
                                    piVar10 = (int*)(*local_40)[uVar17];
                                    *piVar10 = iVar6 * iVar9 + iVar7 * iVar8 >> 16;
                                }
                                iVar8 = m_oX;
                                piVar10 = (int*)(*pAVar19)[uVar17];
                                pAVar20 = local_38;
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)(*local_38)[uVar17];
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)(*this_01)[uVar17];
                                pvVar11 = local_68;
                                *piVar10 = *piVar10 + iVar8;
                                uVar18 = local_58 + 1;
                                iVar8 = local_68->end();
                            } while ((long)uVar18 < (long)iVar8);
                        }
                    }
                    local_50 = (shared_ptr<Array<Array<int>>>*)((long)local_50 + 1);
                } while (local_50 != (shared_ptr<Array<Array<int>>>*)local_90);
            }
            break;
        case 3:
            if (0 < (int)uVar5) {
                local_50 = (shared_ptr<Array<Array<int>>>*)&field_392;
                pAVar19 = (Array<int>*)&field_24;
                local_80 = (shared_ptr<Array<Array<int>>>*)&field_48;
                local_48 = (Array<int>*)&field_72;
                local_90 = (unsigned long)uVar5;
                local_70 = nullptr;
                local_38 = pAVar19;
                do {
                    piVar10 = &arg2[(unsigned long)local_70];
                    iVar8 = *piVar10;
                    pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_50).operator->();
                    iVar9 = pvVar11->end();
                    psVar3 = local_80;
                    if (iVar8 < iVar9) {
                        pAVar12 = (Array<Array<int>>*)**local_50;
                        this_00 = (shared_ptr<Array<Array<int>>>*)(*pAVar12)[(long)iVar8];
                        lVar13 = this_00->end();
                        if (lVar13 != 0) {
                            local_40 = nullptr;
                            local_60 = this_00;
                            do {
                                piVar10 = (int*)(*this_00)[(unsigned long)local_40];
                                iVar8 = m_oX;
                                uVar18 = (unsigned long)*piVar10;
                                piVar10 = (int*)(*pAVar19)[uVar18];
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)(*psVar3)[uVar18];
                                pAVar19 = local_48;
                                *piVar10 = *piVar10 - iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)(*local_48)[uVar18];
                                *piVar10 = *piVar10 - iVar8;
                                piVar10 = (int*)(*local_38)[uVar18];
                                iVar9 = *piVar10 * (int)local_58;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)(*local_38)[uVar18];
                                *piVar10 = iVar8 >> 7;
                                piVar10 = (int*)(*psVar3)[uVar18];
                                iVar9 = *piVar10 * (int)local_68;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)(*psVar3)[uVar18];
                                *piVar10 = iVar8 >> 7;
                                piVar10 = (int*)(*pAVar19)[uVar18];
                                iVar9 = *piVar10 * (int)local_78;
                                iVar8 = iVar9 + 127;
                                if (-1 < iVar9) {
                                    iVar8 = iVar9;
                                }
                                piVar10 = (int*)(*pAVar19)[uVar18];
                                *piVar10 = iVar8 >> 7;
                                iVar8 = m_oX;
                                piVar10 = (int*)(*local_38)[uVar18];
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oY;
                                piVar10 = (int*)(*psVar3)[uVar18];
                                this_00 = local_60;
                                *piVar10 = *piVar10 + iVar8;
                                iVar8 = m_oZ;
                                piVar10 = (int*)(*pAVar19)[uVar18];
                                pAVar19 = local_38;
                                *piVar10 = *piVar10 + iVar8;
                                local_40 = (Array<int>*)((long)local_40 + 1);
                                uVar18 = this_00->end();
                            } while (local_40 < uVar18);
                        }
                    }
                    local_70 = (uint8_t*)((long)local_70 + 1);
                } while (local_70 != (uint8_t*)local_90);
            }
            break;
        case 5:
            local_48 = (Array<int>*)&field_408;
            bVar4 = *local_48 != nullptr;
            if (bVar4) {
                puVar21 = field_264;
                bVar4 = *puVar21 != nullptr;
                if ((bVar4) && (0 < (int)uVar5)) {
                    local_58 = (((uint64_t)local_58._4_4_ << 32) | (uint32_t)((int)local_58 << 3));
                    pAVar19 = (Array<int>*)(unsigned long)uVar5;
                    local_38 = nullptr;
                    local_40 = pAVar19;
                    do {
                        piVar10 = &arg2[(unsigned long)local_38];
                        iVar8 = *piVar10;
                        pvVar11 = (vector<EntityHighlight*, BucketAllocatorEASTL>*)(*local_48).operator->();
                        iVar9 = pvVar11->end();
                        if (iVar8 < iVar9) {
                            pAVar12 = (Array<Array<int>>*)**local_48;
                            arg1_00 = (Array<int>*)(*pAVar12)[(long)iVar8];
                            local_a8 = Array<int>(arg1_00);
                            lVar13 = local_a8.end();
                            if (lVar13 != 0) {
                                uVar18 = 0;
                                do {
                                    piVar10 = &local_a8[uVar18];
                                    iVar8 = *piVar10;
                                    pAVar14 = (Array<signed char>*)**puVar21;
                                    pbVar15 = (uint8_t*)(*pAVar14)[(long)iVar8];
                                    iVar9 = (unsigned int)*pbVar15 + (int)local_58;
                                    if (254 < iVar9) {
                                        iVar9 = 255;
                                    }
                                    if (iVar9 < 1) {
                                        iVar9 = 0;
                                    }
                                    pAVar14 = (Array<signed char>*)**puVar21;
                                    puVar16 = (uint8_t*)(*pAVar14)[(long)iVar8];
                                    *puVar16 = (char)iVar9;
                                    uVar18 = uVar18 + 1;
                                    uVar17 = local_a8.end();
                                } while (uVar18 < uVar17);
                            }
                            pAVar19 = local_40;
                        }
                        local_38 = (Array<int>*)((long)local_38 + 1);
                    } while (local_38 != pAVar19);
                }
            }
        }
    }

    // 0x10034eca0
    void ModelLitImpl::Animate(const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                               int arg2) {
        int arg2_00;
        Skeleton* this_02;

        auto pOVar3 = oldscapeAnimKeyFrameSet.operator->();
        auto this_00 = pOVar3->GetBase();
        AnimBase* this_01 = (AnimBase*)**this_00;
        auto local_40 = this_01->GetSkeleton();
        bool bVar1 = local_40 != nullptr;
        if (bVar1) {
            local_40 = this_01->GetSkeleton();
            this_02 = (Skeleton*)*local_40;
            pOVar3 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet;
            this_02->Animate(*pOVar3, arg2);
            pOVar3 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet.operator->();
            arg2_00 = pOVar3->GetBind();
            Pose(*this_02, arg2_00);
        }
        pOVar3 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet.operator->();
        if (pOVar3->GetTransAnim() != '\0') {
            pOVar3 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet;
            AnimateKeyFramedTransparency(*pOVar3, arg2);
        }
        ResetBoundingCalculations();
    }

    // 0x10034ee90
    void ModelLitImpl::Pose(Skeleton& skeleton, int arg2) {
        PoseSmooth(skeleton, arg2);
    }

    // 0x10034eea0
    void
    ModelLitImpl::AnimateKeyFramedTransparency(graphics::animation::OldscapeAnimKeyFrameSet& oldscapeAnimKeyFrameSet,
                                               int arg2) {
        function<void(int, float)> local_68[56];
        long local_30;

        if (field_408 != nullptr) {
            if (*field_264 != nullptr) {
                std::function<void(int, float)>::function<ModelLitImpl::AnimateKeyFramedTransparency(
                                                              graphics::animation::OldscapeAnimKeyFrameSet&, int)::__2,
                                                          void>(local_68, (__2*)this);
                oldscapeAnimKeyFrameSet.AnimateKeyFramedTransparency(arg2, local_68);
            }
        }
    }

    // 0x10034ef70
    void ModelLitImpl::PoseSmooth(Skeleton& skeleton, int arg2) {
        int iVar3;
        Array<Array<int>>* pAVar4;
        Array<game::VarValue>* this_00;
        int* piVar6;
        shared_ptr<GroundDecor>* groundDecor;
        Matrix44T<float>* matrix44;
        unsigned long uVar7;
        Vector3T<float> local_b8;
        shared_ptr<RSevenDebugPresetProvider> local_78;
        Array<int>* local_60;
        unsigned long local_50;
        shared_ptr<Array<Array<int>>>* local_48;

        shared_ptr<Array<Array<int>>>* local_58 = (shared_ptr<Array<Array<int>>>*)&field_456;
        bool bVar1 = *local_58 == nullptr;
        if ((!bVar1) && (0 < field_20)) {
            local_48 = (shared_ptr<Array<Array<int>>>*)&field_472;
            uVar7 = 0;
            do {
                pAVar4 = (Array<Array<int>>*)**local_58;
                this_00 = (Array<game::VarValue>*)(*pAVar4)[uVar7];
                if (this_00->empty() == '\0') {
                    if (this_00->end() != 0) {
                        pAVar4 = (Array<Array<int>>*)**local_48;
                        local_50 = uVar7;
                        local_60 = (Array<int>*)(*pAVar4)[uVar7];
                        m_sumMatrix = *PTR_ZERO_100ee6728;
                        iVar3 = this_00->end();
                        if (0 < iVar3) {
                            uVar7 = 0;
                            do {
                                piVar6 = (int*)(*this_00)[uVar7];
                                groundDecor = (shared_ptr<GroundDecor>*)skeleton.GetJoint(*piVar6);
                                local_78 = shared_ptr(groundDecor);
                                bVar1 = local_78 == nullptr;
                                if (!bVar1) {
                                    piVar6 = (int*)(*local_60)[uVar7];
                                    local_b8 = jag::math::Vector3T((float)*piVar6 * 0.003921569f);
                                    m_weightMatrix.SetToDiagonal(local_b8);
                                    matrix44 = ((OldscapeJoint*)local_78.operator->())->GetSkinningMatrix(arg2);
                                    m_skinMatrix = jag::math::Matrix44T<float>::Set(*matrix44);
                                    m_skinMatrix *= &m_weightMatrix;
                                    local_b8 + m_sumMatrix;
                                    m_sumMatrix = local_b8;
                                }
                                uVar7 = uVar7 + 1;
                                iVar3 = this_00->end();
                            } while ((long)uVar7 < (long)iVar3);
                        }
                        this = this;
                        uVar7 = local_50;
                        TransformPoint((int)local_50, m_sumMatrix);
                    }
                }
                uVar7 = uVar7 + 1;
            } while ((long)uVar7 < (long)field_20);
        }
    }

    // 0x10034f190
    void ModelLitImpl::SplitAnimate(const shared_ptr<AnimFrameSet>& animFrameSet1, int arg2,
                                    const shared_ptr<AnimFrameSet>& animFrameSet2, int arg4, int* arg5) {
        int iVar1;
        int iVar2;
        Array<AnimFrame>* pAVar3;
        AnimFrame* pAVar4;
        int* piVar5;
        long lVar6;
        vector<int>* pvVar7;
        int iVar8;
        int iVar9;
        unsigned long uVar10;
        uint8_t local_160[48];
        Array<int> local_130;
        Array<int> local_118;
        Array<int> local_100;
        uint8_t local_e0[48];
        Array<int> local_b0;
        Array<int> local_98;
        Array<int> local_80;
        shared_ptr<Decor> local_60;
        int local_3c;
        unsigned long local_38;

        if (arg2 != -1) {
            if ((arg5 == nullptr) || (arg4 == -1)) {
                Animate(animFrameSet1, arg2);
            } else {
                pAVar3 = (Array<AnimFrame>*)animFrameSet1.operator->();
                pAVar4 = (AnimFrame*)(*pAVar3)[(long)arg2];
                new (local_e0) AnimFrame(*pAVar4);
                pAVar3 = (Array<AnimFrame>*)animFrameSet2.operator->();
                pAVar4 = (AnimFrame*)(*pAVar3)[(long)arg4];
                new (local_160) AnimFrame(*pAVar4);
                local_60 = shared_ptr(local_e0);
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < (int)local_e0._16_4_) {
                    iVar8 = *arg5;
                    iVar9 = 1;
                    uVar10 = 0;
                    do {
                        local_38 = uVar10;
                        piVar5 = (int*)(*((local_e0 + 24)))[uVar10];
                        iVar1 = *piVar5;
                        uVar10 = (unsigned long)iVar1;
                        if (iVar8 < iVar1) {
                            piVar5 = arg5 + iVar9;
                            do {
                                iVar8 = *piVar5;
                                piVar5 = piVar5 + 1;
                                iVar9 = iVar9 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                            lVar6 = local_60.operator->();
                            piVar5 = (int*)(*((lVar6 + 8)))[uVar10];
                            if (*piVar5 == 0)
                                goto LAB_10034f2e2;
                        } else {
                        LAB_10034f2e2:
                            lVar6 = local_60.operator->();
                            piVar5 = (int*)(*((lVar6 + 8)))[uVar10];
                            local_3c = *piVar5;
                            lVar6 = local_60.operator->();
                            pvVar7 = (vector<int>*)(*((lVar6 + 40)))[uVar10];
                            piVar5 = &local_b0[local_38];
                            iVar1 = *piVar5;
                            piVar5 = &local_98[local_38];
                            iVar2 = *piVar5;
                            piVar5 = &local_80[local_38];
                            Animate2(local_3c, *pvVar7, iVar1, iVar2, *piVar5);
                        }
                        uVar10 = local_38 + 1;
                    } while ((long)uVar10 < (long)(int)local_e0._16_4_);
                }
                m_oX = 0;
                m_oY = 0;
                m_oZ = 0;
                if (0 < (int)local_160._16_4_) {
                    iVar8 = *arg5;
                    iVar9 = 1;
                    uVar10 = 0;
                    do {
                        local_38 = uVar10;
                        piVar5 = (int*)(*((local_160 + 24)))[uVar10];
                        iVar1 = *piVar5;
                        uVar10 = (unsigned long)iVar1;
                        if (iVar8 < iVar1) {
                            piVar5 = arg5 + iVar9;
                            do {
                                iVar8 = *piVar5;
                                piVar5 = piVar5 + 1;
                                iVar9 = iVar9 + 1;
                            } while (iVar8 < iVar1);
                        }
                        if (iVar1 == iVar8) {
                        LAB_10034f432:
                            lVar6 = local_60.operator->();
                            piVar5 = (int*)(*((lVar6 + 8)))[uVar10];
                            local_3c = *piVar5;
                            lVar6 = local_60.operator->();
                            pvVar7 = (vector<int>*)(*((lVar6 + 40)))[uVar10];
                            piVar5 = &local_130[local_38];
                            iVar1 = *piVar5;
                            piVar5 = &local_118[local_38];
                            iVar2 = *piVar5;
                            piVar5 = &local_100[local_38];
                            Animate2(local_3c, *pvVar7, iVar1, iVar2, *piVar5);
                        } else {
                            lVar6 = local_60.operator->();
                            piVar5 = (int*)(*((lVar6 + 8)))[uVar10];
                            if (*piVar5 == 0)
                                goto LAB_10034f432;
                        }
                        uVar10 = local_38 + 1;
                    } while ((long)uVar10 < (long)(int)local_160._16_4_);
                }
                ResetBoundingCalculations();
            }
        }
    }

    // 0x10034f550
    void
    ModelLitImpl::MaskAnimate(const shared_ptr<AnimBase>& animBase,
                              const shared_ptr<graphics::animation::OldscapeAnimKeyFrameSet>& oldscapeAnimKeyFrameSet,
                              int arg3, Array<bool> arg4, bool arg5, bool arg6) {
        int arg2;
        Skeleton* this_00;
        OldscapeAnimKeyFrameSet* pOVar4;

        auto pAVar3 = animBase.operator->();
        auto local_50 = pAVar3->GetSkeleton();
        bool bVar1 = local_50 != nullptr;
        if (bVar1) {
            pAVar3 = (AnimBase*)animBase.operator->();
            local_50 = pAVar3->GetSkeleton();
            this_00 = (Skeleton*)*local_50;
            pOVar4 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet;
            this_00->Animate(*pOVar4, arg3, *arg4, arg5);
            if (arg6) {
                pOVar4 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet.operator->();
                arg2 = pOVar4->GetBind();
                Pose(*this_00, arg2);
            }
        }
        if (!arg5) {
            pOVar4 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet.operator->();
            if (pOVar4->GetTransAnim() != '\0') {
                pOVar4 = (OldscapeAnimKeyFrameSet*)oldscapeAnimKeyFrameSet;
                AnimateKeyFramedTransparency(*pOVar4, arg3);
            }
        }
    }

    // 0x10034f670
    void ModelLitImpl::MaskAnimate(const shared_ptr<AnimFrameSet>& animFrameSet, int arg2, const Array<int>& arg3,
                                   bool arg4) {
        int iVar1;
        int arg4_00;
        Array<AnimFrame>* this_00;
        shared_ptr<GroundDecor>* groundDecor;
        int* piVar3;
        long lVar4;
        vector<int>* arg2_00;
        uint64_t in_register_00000081;
        int iVar5;
        unsigned long arg1;
        unsigned long uVar6;
        shared_ptr<Decor> local_58;
        int local_44;
        unsigned long local_40;

        uint32_t local_34 = (uint32_t)(((uint64_t)in_register_00000081 << 8) | (uint8_t)arg4);
        if (arg3.empty() == '\0') {
            this_00 = (Array<AnimFrame>*)animFrameSet.operator->();
            groundDecor = (shared_ptr<GroundDecor>*)(*this_00)[(long)arg2];
            local_58 = shared_ptr(groundDecor);
            piVar3 = &arg3[0];
            iVar5 = *piVar3;
            m_oX = 0;
            m_oY = 0;
            m_oZ = 0;
            if (0 < *(int*)(groundDecor + 16)) {
                arg1 = 1;
                uVar6 = 0;
                do {
                    local_40 = uVar6;
                    piVar3 = (int*)(*((groundDecor + 24)))[uVar6];
                    iVar1 = *piVar3;
                    uVar6 = (unsigned long)iVar1;
                    if (iVar5 < iVar1) {
                        arg1 = (unsigned long)(int)arg1;
                        do {
                            piVar3 = &arg3[arg1];
                            arg1 = arg1 + 1;
                            iVar5 = *piVar3;
                        } while (iVar5 < iVar1);
                    }
                    if ((char)local_34 == '\0') {
                    LAB_10034f7e0:
                        if (iVar1 != iVar5)
                            goto LAB_10034f810;
                        lVar4 = local_58.operator->();
                        piVar3 = (int*)(*((lVar4 + 8)))[uVar6];
                        if (*piVar3 == 0)
                            goto LAB_10034f810;
                    } else {
                        if (iVar1 != iVar5) {
                            lVar4 = local_58.operator->();
                            piVar3 = (int*)(*((lVar4 + 8)))[uVar6];
                            if (*piVar3 != 0) {
                                if ((char)local_34 == '\0')
                                    goto LAB_10034f7e0;
                                goto LAB_10034f750;
                            }
                        }
                    LAB_10034f810:
                        lVar4 = local_58.operator->();
                        piVar3 = (int*)(*((lVar4 + 8)))[uVar6];
                        local_44 = *piVar3;
                        lVar4 = local_58.operator->();
                        arg2_00 = (vector<int>*)(*((lVar4 + 40)))[uVar6];
                        piVar3 = (int*)(*((groundDecor + 48)))[local_40];
                        iVar1 = *piVar3;
                        piVar3 = (int*)(*((groundDecor + 72)))[local_40];
                        arg4_00 = *piVar3;
                        piVar3 = (int*)(*((groundDecor + 96)))[local_40];
                        Animate2(local_44, *arg2_00, iVar1, arg4_00, *piVar3);
                    }
                LAB_10034f750:
                    uVar6 = local_40 + 1;
                } while ((long)uVar6 < (long)*(int*)(groundDecor + 16));
            }
            ResetBoundingCalculations();
        } else {
            Animate(animFrameSet, arg2);
        }
    }

    // 0x10034fa80
    void ModelLitImpl::Rotate90() {
        int iVar1;
        uint32_t uVar2;
        int* piVar3;
        uint32_t* puVar4;
        unsigned long arg1;

        if (0 < field_20) {
            arg1 = 0;
            do {
                piVar3 = &field_24[arg1];
                iVar1 = *piVar3;
                puVar4 = &field_72[arg1];
                uVar2 = *puVar4;
                puVar4 = &field_24[arg1];
                *puVar4 = uVar2;
                piVar3 = &field_72[arg1];
                *piVar3 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_20);
        }
        ResetBoundingCalculations();
    }

    // 0x10034fb20
    void ModelLitImpl::Rotate180() {
        int iVar1;
        int* piVar2;
        unsigned long arg1;

        if (0 < field_20) {
            arg1 = 0;
            do {
                piVar2 = &field_24[arg1];
                iVar1 = *piVar2;
                piVar2 = &field_24[arg1];
                *piVar2 = -iVar1;
                piVar2 = &field_72[arg1];
                iVar1 = *piVar2;
                piVar2 = &field_72[arg1];
                *piVar2 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_20);
        }
        ResetBoundingCalculations();
    }

    // 0x10034fbc0
    void ModelLitImpl::Rotate270() {
        int iVar1;
        uint32_t uVar2;
        int* piVar3;
        uint32_t* puVar4;
        unsigned long arg1;

        if (0 < field_20) {
            arg1 = 0;
            do {
                piVar3 = &field_72[arg1];
                iVar1 = *piVar3;
                puVar4 = &field_24[arg1];
                uVar2 = *puVar4;
                puVar4 = &field_72[arg1];
                *puVar4 = uVar2;
                piVar3 = &field_24[arg1];
                *piVar3 = -iVar1;
                arg1 = arg1 + 1;
            } while ((long)arg1 < (long)field_20);
        }
        ResetBoundingCalculations();
    }

    // 0x10034fc60
    void ModelLitImpl::RotateXAxis(int arg1) {
        uint8_t* this_00;
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int* piVar7;
        uint8_t* this_01;
        unsigned long arg1_00;

        if (arg1 != 0) {
            piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_sinTable))[(long)arg1];
            iVar1 = *piVar7;
            piVar7 = (int*)(*((array<int, 2048ul>*)&Pix3D::m_cosTable))[(long)arg1];
            if (0 < field_20) {
                iVar2 = *piVar7;
                this_00 = &field_48;
                this_01 = &field_72;
                arg1_00 = 0;
                do {
                    piVar7 = (int*)(*this_00)[arg1_00];
                    iVar3 = *piVar7;
                    piVar7 = (int*)(*this_01)[arg1_00];
                    iVar4 = *piVar7;
                    piVar7 = (int*)(*this_00)[arg1_00];
                    iVar5 = *piVar7;
                    piVar7 = (int*)(*this_01)[arg1_00];
                    iVar6 = *piVar7;
                    piVar7 = (int*)(*this_01)[arg1_00];
                    *piVar7 = iVar6 * iVar2 + iVar5 * iVar1 >> 16;
                    piVar7 = (int*)(*this_00)[arg1_00];
                    *piVar7 = iVar3 * iVar2 - iVar4 * iVar1 >> 16;
                    arg1_00 = arg1_00 + 1;
                } while ((long)arg1_00 < (long)field_20);
            }
            ResetBoundingCalculations();
        }
    }

    // 0x10034fd90
    void ModelLitImpl::Translate(int arg1, int arg2, int arg3) {
        int* piVar1;
        unsigned long arg1_00;

        if (0 < field_20) {
            arg1_00 = 0;
            do {
                piVar1 = &field_24[arg1_00];
                *piVar1 = *piVar1 + arg1;
                piVar1 = &field_48[arg1_00];
                *piVar1 = *piVar1 + arg2;
                piVar1 = &field_72[arg1_00];
                *piVar1 = *piVar1 + arg3;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_20);
        }
        ResetBoundingCalculations();
    }

    // 0x10034fe30
    void ModelLitImpl::Resize(int arg1, int arg2, int arg3) {
        int iVar1;
        int* piVar2;
        unsigned long arg1_00;
        int iVar3;

        if (0 < field_20) {
            arg1_00 = 0;
            do {
                piVar2 = &field_24[arg1_00];
                iVar1 = *piVar2 * arg1;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_24[arg1_00];
                *piVar2 = iVar3 >> 7;
                piVar2 = &field_48[arg1_00];
                iVar1 = *piVar2 * arg2;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_48[arg1_00];
                *piVar2 = iVar3 >> 7;
                piVar2 = &field_72[arg1_00];
                iVar1 = *piVar2 * arg3;
                iVar3 = iVar1 + 127;
                if (-1 < iVar1) {
                    iVar3 = iVar1;
                }
                piVar2 = &field_72[arg1_00];
                *piVar2 = iVar3 >> 7;
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_20);
        }
        ResetBoundingCalculations();
    }

    // 0x10034ff40
    void ModelLitImpl::DiscardAnimLabels() {

        shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata> local_28;
        field_392 = local_28;
        local_28 = shared_ptr();
        field_408 = local_28;
        local_28 = shared_ptr();
        field_424 = local_28;
        local_28 = shared_ptr();
        field_440 = local_28;
    }

    // 0x1003500b0
    ModelLitImpl* ModelLitImpl::GetTempModel(int arg1) {
        uint32_t in_register_00000034;

        auto local_28 =
            ((weak_ptr<rs2lib::IfType>*)((((uint64_t)in_register_00000034 << 32) | (uint32_t)arg1) + 752))->lock();
        shared_ptr<FileRSevenDebugPresetProvider, void>(local_28);
        return this;
    }

    // 0x100350110
    void ModelLitImpl::TransformPoint(int arg1, const jag::math::Matrix44T<float>& matrix44) {
        int* piVar5 = &field_24[(unsigned long)arg1];
        float fVar6 = (float)*piVar5;
        piVar5 = &field_48[(unsigned long)arg1];
        float fVar7 = (float)-*piVar5;
        piVar5 = &field_72[(unsigned long)arg1];
        float fVar8 = (float)-*piVar5;
        float fVar1 = *(float*)matrix44;
        float fVar2 = *(float*)(matrix44 + 16);
        float fVar3 = *(float*)(matrix44 + 32);
        float fVar4 = *(float*)(matrix44 + 48);
        piVar5 = &field_24[(unsigned long)arg1];
        *piVar5 = (int)(fVar3 * fVar8 + fVar2 * fVar7 + fVar1 * fVar6 + fVar4);
        fVar1 = *(float*)(matrix44 + 4);
        fVar2 = *(float*)(matrix44 + 20);
        fVar3 = *(float*)(matrix44 + 36);
        fVar4 = *(float*)(matrix44 + 52);
        piVar5 = &field_48[(unsigned long)arg1];
        *piVar5 = -(int)(fVar3 * fVar8 + fVar2 * fVar7 + fVar1 * fVar6 + fVar4);
        fVar1 = *(float*)(matrix44 + 8);
        fVar2 = *(float*)(matrix44 + 24);
        fVar3 = *(float*)(matrix44 + 40);
        fVar4 = *(float*)(matrix44 + 56);
        piVar5 = &field_72[(unsigned long)arg1];
        *piVar5 = -(int)(fVar8 * fVar3 + fVar7 * fVar2 + fVar6 * fVar1 + fVar4);
    }

    // 0x100350420
    void ModelLitImpl::PoseRigid(Skeleton& skeleton, int arg2) {
        Array<Array<int>>* this_00;
        Array<int>* arg1;
        int* piVar4;
        shared_ptr<configdecoder::ObjType>* objType;
        Matrix44T<float>* matrix44;
        unsigned long arg1_00;
        Array<int> local_58;

        bool bVar1 = field_456 == nullptr;
        if ((!bVar1) && (0 < field_20)) {
            arg1_00 = 0;
            do {
                this_00 = (Array<Array<int>>*)*field_456;
                arg1 = (Array<int>*)(*this_00)[arg1_00];
                local_58 = Array<int>(arg1);
                if (local_58.empty() == '\0') {
                LAB_1003504c0:
                    piVar4 = &local_58[0];
                    objType = (shared_ptr<configdecoder::ObjType>*)skeleton.GetJoint(*piVar4);
                    bVar1 = *objType == nullptr;
                    if (!bVar1) {
                        matrix44 = ((OldscapeJoint*)(*objType).operator->())->GetSkinningMatrix(arg2);
                        TransformPoint((int)arg1_00, *matrix44);
                    }
                } else {
                    if (local_58.end() != 0)
                        goto LAB_1003504c0;
                }
                arg1_00 = arg1_00 + 1;
            } while ((long)arg1_00 < (long)field_20);
        }
    }

    // 0x100350530
    void ModelLitImpl::Tint(signed char arg1, signed char arg2, signed char arg3, unsigned char arg4) {
        field_744 = arg1;
        field_745 = arg2;
        field_746 = arg3;
        field_747 = arg4;
        field_748 = (short)field_96;
        field_492 = 1;
    }

    // 0x100c92b50: ModelLit::~ModelLit() has the same machine code as InlineFatalBreak()

} // namespace jag::oldscape::dash3d

namespace jag {
    // 0x10034d040
    shared_ptr_if_not_array<Array<signed char>>::type
    make_shared<Array<signed char>, Array<signed char>&>(Array<signed char>& arg1) {
        ref_counter_shared<Array<signed char> _>* ref_counter_shared;
        int local_34;
        Array<signed char>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<signed char>>::type result;
        } else {
            local_30[0] = placement_new<Array<signed char>, Array<signed char>&>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<signed char>>, int, Array<signed char>*&>(
                arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10034dac0
    shared_ptr_if_not_array<Array<signed char>>::type
    make_shared<Array<signed char>, unsigned long>(unsigned long&& arg1) {
        ref_counter_shared<Array<signed char> _>* ref_counter_shared;
        int local_34;
        Array<signed char>* local_30[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<signed char>>::type result;
        } else {
            local_30[0] = placement_new<Array<signed char>, unsigned long>((void*)((long)arg1_00 + 32), arg1);
            local_34 = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<signed char>>, int, Array<signed char>*&>(
                arg1_00, &local_34, local_30);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_30[0]);
        }
        return result;
    }

    // 0x10034f8d0
    shared_ptr_if_not_array<Array<signed char>>::type
    make_shared<Array<signed char>, unsigned long&, signed char&>(unsigned long& arg1, signed char& arg2) {
        ref_counter_shared<Array<signed char> _>* ref_counter_shared;
        int local_3c;
        Array<signed char>* local_38[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<signed char>>::type result;
        } else {
            local_38[0] =
                placement_new<Array<signed char>, unsigned long&, signed char>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_shared = placement_new<ref_counter_shared<Array<signed char>>, int, Array<signed char>*&>(
                arg1_00, &local_3c, local_38);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_38[0]);
        }
        return result;
    }

    // 0x10034f980
    shared_ptr_if_not_array<Array<short>>::type make_shared<Array<short>, unsigned long&, short>(unsigned long& arg1,
                                                                                                 short&& arg2) {
        ref_counter_shared<Array<short> _>* ref_counter_shared;
        int local_3c;
        Array<short>* local_38[2];

        auto arg1_00 = aligned_alloc(56, 8);
        if (arg1_00 == nullptr) {
            shared_ptr_if_not_array<Array<short>>::type result;
        } else {
            local_38[0] = placement_new<Array<short>, unsigned long&, short>((void*)((long)arg1_00 + 32), arg1, arg2);
            local_3c = 1;
            ref_counter_shared =
                placement_new<ref_counter_shared<Array<short>>, int, Array<short>*&>(arg1_00, &local_3c, local_38);
            ref_counter_shared->~AutoSingleton();
            ref_counter_shared->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(ref_counter_shared, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag

namespace jag::math {
    // 0x100350390
    Matrix44T<float> operator+ <float>(const Matrix44T<float>& matrix441, const Matrix44T<float>& matrix442) {
        Vector4T<float>* in_RDX;
        uint64_t local_68[2];
        uint64_t local_58[2];
        uint64_t local_48[2];
        uint64_t local_38[3];

        local_68[0] = matrix442 + *in_RDX;
        local_58[0] = (*((matrix442 + 16))) + (*(in_RDX + 16));
        local_48[0] = (*((matrix442 + 32))) + (*(in_RDX + 32));
        local_38[0] = (*((matrix442 + 48))) + (*(in_RDX + 48));
        new (matrix441) Matrix44T<float>(*local_68, *local_58, *local_48, *local_38);
        return matrix441;
    }

} // namespace jag::math
