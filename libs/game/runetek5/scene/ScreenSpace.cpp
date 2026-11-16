// libs/game/runetek5/scene/ScreenSpace.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class ScreenSpace {
    public:
        void ConvertToScreenSpace(math::Vector3T<float>& vector3, const World* world, bool arg3);
        void ConvertToScreenSpace(math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix441,
                                  const math::Matrix44T<float>& matrix442, bool arg4);
        void ConvertToScreenSpace(math::Vector3T<float>& vector3, const graphics::SceneViewData& sceneViewData,
                                  bool arg3);
    };

    // 0x100469020
    void ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>& vector3, const World* world, bool arg3) {
        Matrix44T<float>* matrix441;
        Matrix44T<float>* matrix442;

        if (world == nullptr) {
            vector3.Set(-1.0, -1.0, -1.0);
        } else {
            matrix441 = (Matrix44T<float>*)world->GetLastCameraViewMatrix();
            matrix442 = world->GetLastViewProjectionMatrix();
            ConvertToScreenSpace(vector3, matrix441, matrix442, arg3);
        }
    }

    // 0x100469080
    void ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>& vector3, const math::Matrix44T<float>& matrix441,
                                           const math::Matrix44T<float>& matrix442, bool arg4) {
        uint32_t* puVar3;
        uint8_t local_68[16];
        uint8_t local_48[16];

        float* pfVar1 = (float*)((matrix441 + 48))->second();
        float local_4c = *pfVar1;
        pfVar1 = (float*)matrix441.second();
        local_48._0_4_ = *pfVar1;
        pfVar1 = (float*)vector3.SSOBeginPtr();
        local_48._0_4_ = (float)local_48._0_4_ * *pfVar1;
        unsigned int* puVar2 = (unsigned int*)((matrix441 + 16))->second();
        local_68 = (unsigned __int128)(*puVar2);
        pfVar1 = (float*)vector3.y();
        local_68._0_4_ = (float)local_68._0_4_ * *pfVar1;
        pfVar1 = (float*)((matrix441 + 32))->second();
        float local_2c = *pfVar1;
        pfVar1 = (float*)vector3.second();
        local_2c = local_2c * *pfVar1;
        Vector4T<float> local_78(vector3, 1.0);
        local_78 *= matrix442;
        pfVar1 = (float*)local_78.qw();
        if (0.0 < *pfVar1 || *pfVar1 == 0.0) {
            local_68._0_4_ = (float)local_68._0_4_ + local_2c + (float)local_48._0_4_ + local_4c;
            pfVar1 = (float*)local_78.qw();
            local_48 = (unsigned __int128)((unsigned int)(1.0 / *pfVar1));
            pfVar1 = (float*)local_78.SSOBeginPtr();
            local_2c = *pfVar1 * (float)local_48._0_4_;
            pfVar1 = (float*)vector3.SSOBeginPtr();
            *pfVar1 = local_2c;
            pfVar1 = (float*)local_78.y();
            local_48._0_8_ =
                (((uint64_t)local_48._4_4_ << 32) | (uint32_t)(-(float)local_48._0_4_ * *pfVar1)) ^ 9223372036854775808;
            local_48._8_4_ = local_48._8_4_ ^ 2147483648;
            local_48._12_4_ = local_48._12_4_ ^ 2147483648;
            puVar3 = (uint32_t*)vector3.y();
            *puVar3 = local_48._0_4_;
            if (arg4) {
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
            if (!arg4) {
                local_48._0_4_ = 3212836864;
                local_48._4_4_ = 0;
                local_48._8_4_ = 0;
                local_48._12_4_ = 0;
            }
        }
        puVar3 = (uint32_t*)vector3.second();
        *puVar3 = local_48._0_4_;
    }

    // 0x100469240
    void ScreenSpace::ConvertToScreenSpace(math::Vector3T<float>& vector3, const graphics::SceneViewData& sceneViewData,
                                           bool arg3) {
        auto matrix441 = sceneViewData.GetScreen();
        auto matrix442 = sceneViewData.GetImmediateThreadPool();
        ConvertToScreenSpace(vector3, matrix441, matrix442, arg3);
    }

} // namespace jag::game
