// libs/game/runetek5/camera/IPositionManager.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag {
    // 0x100641110, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionPoint>::ref_counter_shared(unsigned long, game::PositionPoint*): jumps straight to the base-object constructor

    // 0x100641120, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionPoint>::ref_counter_shared(unsigned long, game::PositionPoint*)
    void ref_counter_shared<game::PositionPoint>::ref_counter_shared(ulong param_1, PositionPoint* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7310 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PositionPoint**)(this + 24) = param_2;
    }

    // 0x1006411e0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::PositionEntity* placement_new<game::PositionEntity>(void*)
    PositionEntity* placement_new<game::PositionEntity>(void* param_1) {
        game::PositionEntity::PositionEntity(param_1);
        return param_1;
    }

    // 0x100641200, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionEntity>* placement_new<ref_counter_shared<game::PositionEntity>, int, game::PositionEntity*&>(void*, int&&, game::PositionEntity*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::PositionEntity>, int, game::PositionEntity*&>(
        void* param_1, int* param_2, PositionEntity** param_3) {
        ref_counter_shared<game::PositionEntity>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100641430, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionEntity>::ref_counter_shared(unsigned long, game::PositionEntity*): jumps straight to the base-object constructor

    // 0x100641440, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionEntity>::ref_counter_shared(unsigned long, game::PositionEntity*)
    void ref_counter_shared<game::PositionEntity>::ref_counter_shared(ulong param_1, PositionEntity* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7320 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PositionEntity**)(this + 24) = param_2;
    }

    // 0x100641480, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionEntity>::DeleteData()
    void ref_counter_shared<game::PositionEntity>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 360;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1006414e0, 32 bytes, inline, placed by debug map only (low confidence)
    // game::PositionSpline* placement_new<game::PositionSpline, game::PositionMode&>(void*, game::PositionMode&)
    PositionSpline* placement_new<game::PositionSpline, game::PositionMode&>(void* param_1, PositionMode* param_2) {
        game::PositionSpline::PositionSpline(param_1, *(undefined4*)param_2);
        return param_1;
    }

    // 0x100641500, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionSpline>* placement_new<ref_counter_shared<game::PositionSpline>, int, game::PositionSpline*&>(void*, int&&, game::PositionSpline*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<game::PositionSpline>, int, game::PositionSpline*&>(
        void* param_1, int* param_2, PositionSpline** param_3) {
        ref_counter_shared<game::PositionSpline>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100641520, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionSpline>::ref_counter_shared(unsigned long, game::PositionSpline*): jumps straight to the base-object constructor

    // 0x100641530, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::PositionSpline>::ref_counter_shared(unsigned long, game::PositionSpline*)
    void ref_counter_shared<game::PositionSpline>::ref_counter_shared(ulong param_1, PositionSpline* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7328 + 16;
        *(ulong*)(this + 16) = param_1;
        *(PositionSpline**)(this + 24) = param_2;
    }

    // 0x100641e80, 32 bytes, inline, placed by debug map only (low confidence)
    // game::camera::Shake* placement_new<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&>(void*, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    Shake* jag::placement_new<game::camera::Shake, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        void* param_1, int* param_2, PacketT* param_3) {
        game::camera::Shake::Shake(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100641ea0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::Shake>* placement_new<ref_counter_shared<game::camera::Shake>, int, game::camera::Shake*&>(void*, int&&, game::camera::Shake*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::camera::Shake>, int, game::camera::Shake*&>(void* param_1, int* param_2,
                                                                                       Shake** param_3) {
        ref_counter_shared<game::camera::Shake>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100641ec0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::Shake>::ref_counter_shared(unsigned long, game::camera::Shake*): jumps straight to the base-object constructor

    // 0x100641ed0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::Shake>::ref_counter_shared(unsigned long, game::camera::Shake*)
    void ref_counter_shared<game::camera::Shake>::ref_counter_shared(ulong param_1, Shake* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73b8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Shake**)(this + 24) = param_2;
    }

    // 0x100641f10, 32 bytes, inline, placed by debug map only (low confidence)
    // game::camera::ZTilt* placement_new<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&>(void*, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL> >&)
    ZTilt* jag::placement_new<game::camera::ZTilt, int&, PacketT<Array<unsigned char, BucketAllocatorEASTL>>&>(
        void* param_1, int* param_2, PacketT* param_3) {
        game::camera::ZTilt::ZTilt(param_1, *param_2, param_3);
        return param_1;
    }

    // 0x100641f30, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::ZTilt>* placement_new<ref_counter_shared<game::camera::ZTilt>, int, game::camera::ZTilt*&>(void*, int&&, game::camera::ZTilt*&)
    ref_counter_shared*
    placement_new<ref_counter_shared<game::camera::ZTilt>, int, game::camera::ZTilt*&>(void* param_1, int* param_2,
                                                                                       ZTilt** param_3) {
        ref_counter_shared<game::camera::ZTilt>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100641f50, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::ZTilt>::ref_counter_shared(unsigned long, game::camera::ZTilt*): jumps straight to the base-object constructor

    // 0x100641f60, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::ZTilt>::ref_counter_shared(unsigned long, game::camera::ZTilt*)
    void ref_counter_shared<game::camera::ZTilt>::ref_counter_shared(ulong param_1, ZTilt* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73c0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ZTilt**)(this + 24) = param_2;
    }

    // 0x100641fa0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<game::camera::ZTilt>::DeleteData()
    void ref_counter_shared<game::camera::ZTilt>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 24;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::game {
    class IPositionManager {
    public:
        // virtual methods in vtable order
        virtual ~IPositionManager();
        virtual IsSpline() const;
        virtual Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);
        DrawDebug(unsigned int);
        uint GetMode() const;
        GetRollAngle() const;
        GetDeclination() const;
        GetFollowAngle(math::Point<int>&) const;
        GetFollowAngle() const;
        GetPositionEntity() const;
        void ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;
        IPositionManager(PositionMode);

        // data members, from how the methods use this: 16 bytes
        undefined* field_0; // offset 0, vtable pointer
        uint m_mode;        // offset 8
        char _unknown_12[4];
    };

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IPositionManager::Update(float, math::Vector3T<double> const&, math::Vector3T<double> const&);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IPositionManager::DrawDebug(unsigned int);

    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    IPositionManager::~IPositionManager();

    // 0x100024170: the linker folded this into oldscape::option::IScriptOption::GetId() const, which has identical code
    uint IPositionManager::GetMode() const;

    // 0x100029ea0: the linker folded this into oldscape::InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long), which has identical code
    IPositionManager::IsSpline() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    IPositionManager::GetRollAngle() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    IPositionManager::GetDeclination() const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    IPositionManager::GetFollowAngle(math::Point<int>&) const;

    // 0x10014d2f0: the linker folded this into oldscape::ApplicationContext::GetScreenRatio(), which has identical code
    IPositionManager::GetFollowAngle() const;

    // 0x1005f9e90: the linker folded this into option::Option<int>::GetValueLabels() const, which has identical code
    IPositionManager::GetPositionEntity() const;

    // 0x100640a50: the linker folded this into ILookatManager::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const, which has identical code
    IPositionManager::ToString(eastl::fixed_string<char, 512, true, eastl::allocator>&) const;

    // 0x1006410f0, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // IPositionManager::IPositionManager(PositionMode)
    void IPositionManager::IPositionManager(uint param_2) {
        field_0 = PTR_vtable_100ee7f90 + 16;
        m_mode = param_2;
    }

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IPositionManager::~IPositionManager();

    // 0x100c92b50: the linker folded this into InlineFatalBreak(), which has identical code
    IPositionManager::~IPositionManager();

} // namespace jag::game

namespace jag::math {
    // 0x100641380, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::QuaternionT(double, double, double, double): jumps straight to the base-object constructor

    // 0x100641400, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::QuaternionT(double, double, double, double)
    void QuaternionT<double>::QuaternionT(double param_1, double param_2, double param_3, double param_4) {
        Set(this, param_1, param_2, param_3, param_4);
    }

    // 0x100641410, 32 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::Set(double, double, double, double)
    QuaternionT<double>* QuaternionT<double>::Set(double param_1, double param_2, double param_3, double param_4) {
        *(double*)this = param_1;
        *(double*)(this + 8) = param_2;
        *(double*)(this + 16) = param_3;
        *(double*)(this + 24) = param_4;
        return this;
    }

    // 0x100641570, 16 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::Length() const
    double QuaternionT<double>::Length() {
        double dVar1;

        dVar1 = (double)LengthSq(this);
        return SQRT(dVar1);
    }

    // 0x100641580, 80 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::operator/=(double)
    /* QuaternionT<double>::TEMPNAMEPLACEHOLDERVALUE(double) */

    QuaternionT<double>* QuaternionT<double>::operator/=(double param_1) {
        double dVar1;

        dVar1 = 1.0 / param_1;
        *(double*)this = *(double*)this * dVar1;
        *(double*)(this + 8) = *(double*)(this + 8) * dVar1;
        *(double*)(this + 16) = *(double*)(this + 16) * dVar1;
        *(double*)(this + 24) = dVar1 * *(double*)(this + 24);
        return this;
    }

    // 0x1006415d0, 192 bytes, inline, placed by debug map only (low confidence)
    // double QuaternionDot<double>(QuaternionT<double> const&, QuaternionT<double> const&)
    double QuaternionDot<double>(QuaternionT* param_1, QuaternionT* param_2) {
        double dVar1;
        double dVar2;
        double dVar3;
        double dVar4;
        double dVar5;
        double dVar6;
        double dVar7;
        vector* pvVar8;
        double* pdVar9;

        pvVar8 = param_1->SSOBeginPtr(param_2);
        dVar1 = *(double*)pvVar8;
        pvVar8 = param_2->SSOBeginPtr(param_2);
        dVar2 = *(double*)pvVar8;
        pdVar9 = (double*)param_1->second();
        dVar3 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        dVar4 = *pdVar9;
        pdVar9 = (double*)param_1->GetScreen();
        dVar5 = *pdVar9;
        pdVar9 = (double*)param_2->GetScreen();
        dVar6 = *pdVar9;
        pdVar9 = (double*)param_1->second();
        dVar7 = *pdVar9;
        pdVar9 = (double*)param_2->second();
        return dVar7 * *pdVar9 + dVar5 * dVar6 + dVar3 * dVar4 + dVar1 * dVar2;
    }

    // 0x100641690, 96 bytes, inline, placed by debug map only (low confidence)
    // QuaternionT<double>::Set(Vector3T<double> const&, double)
    QuaternionT<double>* QuaternionT<double>::Set(Vector3T* param_1, double param_2) {
        vector* pvVar1;
        undefined8* puVar2;

        pvVar1 = param_1->SSOBeginPtr(param_1);
        *(undefined8*)this = *(undefined8*)pvVar1;
        puVar2 = (undefined8*)param_1->second();
        *(undefined8*)(this + 8) = *puVar2;
        puVar2 = (undefined8*)param_1->GetScreen();
        *(undefined8*)(this + 16) = *puVar2;
        *(double*)(this + 24) = param_2;
        return this;
    }

} // namespace jag::math
