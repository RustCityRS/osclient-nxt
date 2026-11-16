// libs/game/runetek5/camera/IPositionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag {
    // 0x100641120
    ref_counter_shared<game::PositionPoint>::ref_counter_shared(unsigned long arg1, game::PositionPoint* positionPoint)
        : ref_counter_base() {}

    // 0x1006411e0
    game::PositionEntity* placement_new<game::PositionEntity>(void* arg1) {
        new (arg1) game::PositionEntity();
        return arg1;
    }

    // 0x100641200
    ref_counter_shared<game::PositionEntity>*
    placement_new<ref_counter_shared<game::PositionEntity>, int, game::PositionEntity*&>(void* arg1, int&& arg2,
                                                                                         game::PositionEntity*& arg3) {
        new (arg1) ref_counter_shared<game::PositionEntity>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100641440
    ref_counter_shared<game::PositionEntity>::ref_counter_shared(unsigned long arg1,
                                                                 game::PositionEntity* positionEntity)
        : ref_counter_base() {}

    // 0x100641480
    void ref_counter_shared<game::PositionEntity>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::PositionEntity> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::PositionEntity> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 360;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1006414e0
    game::PositionSpline* placement_new<game::PositionSpline, game::PositionMode&>(void* arg1,
                                                                                   game::PositionMode& positionMode) {
        new (arg1) game::PositionSpline(positionMode);
        return arg1;
    }

    // 0x100641500
    ref_counter_shared<game::PositionSpline>*
    placement_new<ref_counter_shared<game::PositionSpline>, int, game::PositionSpline*&>(void* arg1, int&& arg2,
                                                                                         game::PositionSpline*& arg3) {
        new (arg1) ref_counter_shared<game::PositionSpline>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100641530
    ref_counter_shared<game::PositionSpline>::ref_counter_shared(unsigned long arg1,
                                                                 game::PositionSpline* positionSpline)
        : ref_counter_base() {}

    // 0x100641e80
    game::camera::Shake* placement_new<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        void* arg1, int& arg2, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg3) {
        new (arg1) game::camera::Shake(arg2, arg3);
        return arg1;
    }

    // 0x100641ea0
    ref_counter_shared<game::camera::Shake>*
    placement_new<ref_counter_shared<game::camera::Shake>, int, game::camera::Shake*&>(void* arg1, int&& arg2,
                                                                                       game::camera::Shake*& arg3) {
        new (arg1) ref_counter_shared<game::camera::Shake>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100641ed0
    ref_counter_shared<game::camera::Shake>::ref_counter_shared(unsigned long arg1, game::camera::Shake* shake)
        : ref_counter_base() {}

    // 0x100641f10
    game::camera::ZTilt* placement_new<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        void* arg1, int& arg2, PacketT<Array<unsigned char, BucketAllocatorEASTL>>& arg3) {
        new (arg1) game::camera::ZTilt(arg2, arg3);
        return arg1;
    }

    // 0x100641f30
    ref_counter_shared<game::camera::ZTilt>*
    placement_new<ref_counter_shared<game::camera::ZTilt>, int, game::camera::ZTilt*&>(void* arg1, int&& arg2,
                                                                                       game::camera::ZTilt*& arg3) {
        new (arg1) ref_counter_shared<game::camera::ZTilt>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100641f60
    ref_counter_shared<game::camera::ZTilt>::ref_counter_shared(unsigned long arg1, game::camera::ZTilt* zTilt)
        : ref_counter_base() {}

    // 0x100641fa0
    void ref_counter_shared<game::camera::ZTilt>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::camera::ZTilt> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::camera::ZTilt> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 24;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::game {
    class IPositionManager {
    public:
        // virtual methods in vtable order
        virtual ~IPositionManager();
        virtual bool IsSpline() const;
        virtual void Update(float arg1, const math::Vector3T<double>& arg2, const math::Vector3T<double>& arg3);
        void DrawDebug(unsigned int arg1);
        PositionMode GetMode() const;
        uint64_t GetRollAngle() const;
        uint64_t GetDeclination() const;
        uint64_t GetFollowAngle(math::Point<int>& arg1) const;
        uint64_t GetFollowAngle() const;
        Option<unsigned char>* GetPositionEntity() const;
        void ToString(eastl::fixed_string<char, 512>& str) const;
        IPositionManager(PositionMode positionMode);

    private:
        PositionMode m_mode;
        uint8_t _unknown_12[4];
    };

    // 0x100009e70: IPositionManager::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: IPositionManager::DrawDebug(unsigned int) has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100009e70: IPositionManager::~IPositionManager() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100024170: IPositionManager::GetMode() const has the same machine code as oldscape::option::IScriptOption::GetId() const

    // 0x100029ea0: IPositionManager::IsSpline() const has the same machine code as oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x10014d2f0: IPositionManager::GetRollAngle() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x10014d2f0: IPositionManager::GetDeclination() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x10014d2f0: IPositionManager::GetFollowAngle(math::Point<int>&) const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x10014d2f0: IPositionManager::GetFollowAngle() const has the same machine code as oldscape::ApplicationContext::GetScreenRatio()

    // 0x1005f9e90: IPositionManager::GetPositionEntity() const has the same machine code as option::Option<int>::GetValueLabels() const

    // 0x100640a50: IPositionManager::ToString(eastl::fixed_string<char, 512>&) const has the same machine code as ILookatManager::ToString(eastl::fixed_string<char, 512>&) const

    // 0x1006410f0
    IPositionManager::IPositionManager(PositionMode positionMode) : m_mode(positionMode) {}

} // namespace jag::game

namespace jag::math {
    // 0x100641400
    QuaternionT<double>::QuaternionT(double arg1, double arg2, double arg3, double arg4) {
        Set(this, arg1, arg2, arg3, arg4);
    }

    // 0x100641410
    QuaternionT<double>* QuaternionT<double>::Set(double arg1, double arg2, double arg3, double arg4) {
        *(double*)this = arg1;
        *(double*)(this + 8) = arg2;
        *(double*)(this + 16) = arg3;
        *(double*)(this + 24) = arg4;
        return this;
    }

    // 0x100641570
    double QuaternionT<double>::Length() const {
        double dVar1 = (double)LengthSq(this);
        return SQRT(dVar1);
    }

    // 0x100641580
    QuaternionT<double>* QuaternionT<double>::operator/=(double arg1) {
        double dVar1 = 1.0 / arg1;
        *(double*)this = *(double*)this * dVar1;
        *(double*)(this + 8) = *(double*)(this + 8) * dVar1;
        *(double*)(this + 16) = *(double*)(this + 16) * dVar1;
        *(double*)(this + 24) = dVar1 * *(double*)(this + 24);
        return this;
    }

    // 0x1006415d0
    double QuaternionDot<double>(const QuaternionT<double>& quaternion1, const QuaternionT<double>& quaternion2) {
        auto pdVar8 = quaternion1.SSOBeginPtr();
        double dVar1 = *pdVar8;
        pdVar8 = (double*)quaternion2.SSOBeginPtr();
        double dVar2 = *pdVar8;
        pdVar8 = (double*)quaternion1.second();
        double dVar3 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        double dVar4 = *pdVar8;
        pdVar8 = (double*)quaternion1.GetScreen();
        double dVar5 = *pdVar8;
        pdVar8 = (double*)quaternion2.GetScreen();
        double dVar6 = *pdVar8;
        pdVar8 = (double*)quaternion1.second();
        double dVar7 = *pdVar8;
        pdVar8 = (double*)quaternion2.second();
        return dVar7 * *pdVar8 + dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2;
    }

    // 0x100641690
    QuaternionT<double>* QuaternionT<double>::Set(const Vector3T<double>& vector3, double arg2) {
        auto puVar1 = vector3.SSOBeginPtr();
        *(uint64_t*)this = *puVar1;
        puVar1 = (uint64_t*)vector3.second();
        *(uint64_t*)(this + 8) = *puVar1;
        puVar1 = (uint64_t*)vector3.GetScreen();
        *(uint64_t*)(this + 16) = *puVar1;
        *(double*)(this + 24) = arg2;
        return this;
    }

} // namespace jag::math
