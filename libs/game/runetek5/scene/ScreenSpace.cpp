// libs/game/runetek5/scene/ScreenSpace.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class ScreenSpace {
    public:
        void ConvertToScreenSpace(math::Vector3T<float>&, World const*, bool);
        void ConvertToScreenSpace(math::Vector3T<float>&, math::Matrix44T<float> const&, math::Matrix44T<float> const&,
                                  bool);
        void ConvertToScreenSpace(math::Vector3T<float>&, graphics::SceneViewData const&, bool);
    };

    // 0x100469020, 96 bytes, placed by class name and debug map
    // ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>&, World const*, bool)
    void ScreenSpace::ConvertToScreenSpace(Vector3T* param_1, World* param_2, bool param_3) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        if (param_2 == (World*)0) {
            param_1->Set(-1.0, -1.0, -1.0);
        } else {
            pMVar1 = (Matrix44T*)param_2->GetLastCameraViewMatrix();
            pMVar2 = (Matrix44T*)param_2->GetLastViewProjectionMatrix();
            ConvertToScreenSpace(param_1, pMVar1, pMVar2, param_3);
        }
    }

    // 0x100469080, 448 bytes, placed by class name and debug map
    // ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>&, math::Matrix44T<float> const&, math::Matrix44T<float> const&, bool)
    void ScreenSpace::ConvertToScreenSpace(Vector3T* param_1, Matrix44T* param_2, Matrix44T* param_3, bool param_4) {
        float* pfVar1;
        vector* pvVar2;
        uint* puVar3;
        undefined4* puVar4;
        Matrix44T* pMVar5;
        Vector4T<float> local_78[16];
        undefined1 local_68[16];
        float local_4c;
        undefined1 local_48[16];
        float local_2c;

        pMVar5 = param_2;
        pfVar1 = (float*)(&param_2->field_48)->second();
        local_4c = *pfVar1;
        pfVar1 = (float*)param_2->second();
        local_48._0_4_ = *pfVar1;
        pvVar2 = param_1->SSOBeginPtr(pMVar5);
        local_48._0_4_ = (float)local_48._0_4_ * *(float*)pvVar2;
        puVar3 = (uint*)(&param_2->field_16)->second();
        local_68 = ZEXT416(*puVar3);
        pfVar1 = (float*)param_1->y();
        local_68._0_4_ = (float)local_68._0_4_ * *pfVar1;
        pfVar1 = (float*)(&param_2->field_32)->second();
        local_2c = *pfVar1;
        pfVar1 = (float*)param_1->second();
        local_2c = local_2c * *pfVar1;
        math::Vector4T<float>::Vector4T(local_78, param_1, 1.0);
        math::Vector4T<float>::operator*=(local_78, param_3);
        pfVar1 = (float*)local_78->qw();
        if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
            local_68._0_4_ = (float)local_68._0_4_ + local_2c + (float)local_48._0_4_ + local_4c;
            pfVar1 = (float*)local_78->qw();
            local_48 = ZEXT416((uint)(1.0 / *pfVar1));
            pvVar2 = local_78->SSOBeginPtr(param_3);
            local_2c = *(float*)pvVar2 * (float)local_48._0_4_;
            pvVar2 = param_1->SSOBeginPtr(param_3);
            *(float*)pvVar2 = local_2c;
            pfVar1 = (float*)local_78->y();
            local_48._0_8_ = CONCAT44(local_48._4_4_, -(float)local_48._0_4_ * *pfVar1) ^ 9223372036854775808;
            local_48._8_4_ = local_48._8_4_ ^ 2147483648;
            local_48._12_4_ = local_48._12_4_ ^ 2147483648;
            puVar4 = (undefined4*)param_1->y();
            *puVar4 = local_48._0_4_;
            if (param_4) {
                local_48._0_4_ = local_68._0_4_;
                local_48._4_4_ = local_68._4_4_;
                local_48._8_4_ = local_68._8_4_;
                local_48._12_4_ = local_68._12_4_;
            } else {
                local_48._0_4_ = local_68._0_4_ ^ 2147483648;
                local_48._4_4_ = local_68._4_4_ ^ 2147483648;
                local_48._8_4_ = local_68._8_4_ ^ 2147483648;
                local_48._12_4_ = local_68._12_4_ ^ 2147483648;
            }
        } else {
            local_48._0_4_ = 1065353216;
            local_48._4_4_ = 0;
            local_48._8_4_ = 0;
            local_48._12_4_ = 0;
            if (!param_4) {
                local_48._0_4_ = 3212836864;
                local_48._4_4_ = 0;
                local_48._8_4_ = 0;
                local_48._12_4_ = 0;
            }
        }
        puVar4 = (undefined4*)param_1->second();
        *puVar4 = local_48._0_4_;
    }

    // 0x100469240, 80 bytes, placed by class name and debug map
    // ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>&, graphics::SceneViewData const&, bool)
    void ScreenSpace::ConvertToScreenSpace(Vector3T* param_1, SceneViewData* param_2, bool param_3) {
        Matrix44T* pMVar1;
        Matrix44T* pMVar2;

        pMVar1 = (Matrix44T*)param_2->GetScreen();
        pMVar2 = (Matrix44T*)param_2->GetImmediateThreadPool();
        ConvertToScreenSpace(param_1, pMVar1, pMVar2, param_3);
    }

} // namespace jag::game
