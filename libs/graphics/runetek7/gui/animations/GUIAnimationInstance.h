// libs/graphics/runetek7/gui/animations/GUIAnimationInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class GUIAnimationInstance {
    public:
        GetAnimation() const;
        Hook GetOnFinishHook() const;
        GetComponent() const;
        void GetTarget() const;
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(
            math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(
            math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&);
        void Bind<int>(int*);
        void BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(
            GUIAnimationRGB&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&);
        void BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(
            unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&);
        void Bind<unsigned char>(unsigned char*);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(
            math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(
            math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&);
        GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float,
                             unsigned int, float);
        GUIAnimationInstance(shared_ptr<GUIAnimation> const&, shared_ptr<ui::Component> const&, float, float,
                             unsigned int, float, game::Hook&&);
        uint Advance(float);
        bool Finished() const;
        void ApplyAnimation(float);
        void Start();
        void Restart(unsigned int);
        void Restart(float, float, unsigned int, float);
        void Kill(GUIAnimationKillBehaviour);
        void GetTargetMode() const;
        void SetOnFinishHook(game::Hook&&);
        void HasOnFinishHook() const;
        ~GUIAnimationInstance();

        // data members, from how the methods use this: 344 bytes
        char _unknown_0[8];
        long field_8; // offset 8
        char _unknown_16[16];
        float field_32; // offset 32
        float field_36; // offset 36
        float field_40; // offset 40
        uint field_44;  // offset 44
        float field_48; // offset 48
        char _unknown_52[4];
        Hook m_onFinishHook; // offset 56
        char _unknown_72[224];
        undefined1 field_296; // offset 296
        char _unknown_297[15];
        undefined1 field_312; // offset 312
        char _unknown_313[15];
        undefined* field_328; // offset 328
        char _unknown_336[8];
    };

    // 0x100692e80, 32 bytes, inline, placed by class name and debug map
    // GUIAnimationInstance::GetTarget() const
    void GUIAnimationInstance::GetTarget() {
        TextRun* this_00;

        this_00 = (TextRun*)shared_ptr<GUIAnimation>::operator->((shared_ptr<GUIAnimation>*)this);
        this_00->GetMaxLineWidth();
    }

    // 0x100692ea0, 80 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&)
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::__32>(
        Vector2T* param_1, __32* param_2) {
        undefined8 local_28;
        GUIAnimationInstance* local_20;

        local_28 = *(undefined8*)param_1;
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (Vector2T*)&local_28);
        local_28 = *(undefined8*)param_2;
        local_20 = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (Vector2T*)&local_28);
    }

    // 0x100692ef0, 80 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&)
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::__33>(
        Vector2T* param_1, __33* param_2) {
        undefined8 local_28;
        GUIAnimationInstance* local_20;

        local_28 = *(undefined8*)param_1;
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (Vector2T*)&local_28);
        local_28 = *(undefined8*)param_2;
        local_20 = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (Vector2T*)&local_28);
    }

    // 0x100692f40, 96 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&)
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::__34>(__34* param_1) {
        undefined8 local_30[2];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<true, 0>();
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (variant*)local_30);
        local_30[0] = *(undefined8*)param_1;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (__34*)local_30);
    }

    // 0x100692fa0, 112 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::Bind<int>(int*)
    void GUIAnimationInstance::Bind<int>(int* param_1) {
        int iVar1;
        code* pcVar2;
        int* local_20;
        int local_14;

        local_20 = param_1;
        iVar1 = GetTargetMode(this);
        local_14 = 0;
        if (iVar1 != 1) {
            local_14 = *local_20;
        }
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 &local_14);
        std::variant<unsigned char*, int*>::operator=((variant<unsigned char*, int*>*)&field_296, &local_20);
        iVar1 = GetTargetMode(this);
        pcVar2 = DefaultAnimationAdvanceCallback<int, int>;
        if (iVar1 == 2) {
            pcVar2 = DefaultAnimationAdvanceCallback<int, float>;
        }
        field_328 = pcVar2;
    }

    // 0x100693010, 96 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(GUIAnimationRGB&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&)
    void GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::__35>(
        GUIAnimationRGB* param_1, __35* param_2) {
        undefined2 uVar1;
        undefined1 local_28[16];

        local_28._4_2_ = param_1->field_4;
        uVar1 = param_1->field_0;
        local_28._2_2_ = param_1->field_2;
        local_28._0_2_ = uVar1;
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (GUIAnimationRGB*)local_28);
        local_28._0_8_ = *(undefined8*)param_2;
        local_28._8_8_ = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (GUIAnimationRGB*)local_28);
    }

    // 0x100693070, 80 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&)
    void GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::__36>(
        uint* param_1, __36* param_2) {
        undefined8 local_28;
        GUIAnimationInstance* local_20;

        local_28 = CONCAT44(local_28._4_4_, *param_1);
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (uint*)&local_28);
        local_28 = *(undefined8*)param_2;
        local_20 = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (uint*)&local_28);
    }

    // 0x1006930c0, 96 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&)
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::__37>(__37* param_1) {
        undefined8 local_30[2];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<true, 0>();
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (variant*)local_30);
        local_30[0] = *(undefined8*)param_1;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (__37*)local_30);
    }

    // 0x100693120, 128 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::Bind<unsigned char>(unsigned char*)
    void GUIAnimationInstance::Bind<unsigned char>(uchar* param_1) {
        int iVar1;
        code* pcVar2;
        uchar* local_20;
        uchar local_11;

        local_20 = param_1;
        iVar1 = GetTargetMode(this);
        if (iVar1 == 1) {
            local_11 = '\0';
        } else {
            local_11 = *local_20;
        }
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 &local_11);
        std::variant<unsigned char*, int*>::operator=((variant<unsigned char*, int*>*)&field_296, &local_20);
        iVar1 = GetTargetMode(this);
        pcVar2 = DefaultAnimationAdvanceCallback<unsigned char, unsigned char>;
        if (iVar1 == 2) {
            pcVar2 = DefaultAnimationAdvanceCallback<unsigned char, float>;
        }
        field_328 = pcVar2;
    }

    // 0x1006931a0, 80 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&)
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::__38>(
        Vector2T* param_1, __38* param_2) {
        undefined8 local_28;
        GUIAnimationInstance* local_20;

        local_28 = *(undefined8*)param_1;
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (Vector2T*)&local_28);
        local_28 = *(undefined8*)param_2;
        local_20 = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (Vector2T*)&local_28);
    }

    // 0x1006931f0, 80 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&)
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::__39>(
        Vector2T* param_1, __39* param_2) {
        undefined8 local_28;
        GUIAnimationInstance* local_20;

        local_28 = *(undefined8*)param_1;
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (Vector2T*)&local_28);
        local_28 = *(undefined8*)param_2;
        local_20 = this;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (Vector2T*)&local_28);
    }

    // 0x100693240, 96 bytes, inline, placed by class name and debug map
    // void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&)
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::__40>(__40* param_1) {
        undefined8 local_30[2];

        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::variant<true, 0>();
        std::variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>::operator=((variant<unsigned char, unsigned int, int, float,
                                                          math::Vector2T<float>, math::Vector2T<int>,
                                                          GUIAnimationRGB>*)&field_312,
                                                 (variant*)local_30);
        local_30[0] = *(undefined8*)param_1;
        eastl::function<void(GUIAnimationResult_const&)>::operator=(
            (function<void(GUIAnimationResult_const&)>*)&field_336, (__40*)local_30);
    }

    // 0x1006cb840, 96 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(math::Vector2T<int>&&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;
        Vector2T* pVVar3;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        pVVar3 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar3;
        pVVar3 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        /* WARNING: Load size is inaccurate */
        (GUIAnimationInstance&)
            ->BindAnimation()::$_32::operator()(*(__32**)(param_1 + 24), this, pVVar2, uVar1, *(undefined8*)pVVar3);
    }

    // 0x1006cbcc0, 96 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(math::Vector2T<int>&&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;
        Vector2T* pVVar3;
        __33* local_38;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        pVVar3 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar3;
        pVVar3 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        local_38._0_4_ = (__33*)uVar1;
        (GUIAnimationInstance&)
            ->BindAnimation()::$_33::operator()(local_38._0_4_, *(undefined8*)pVVar3, *(undefined4*)(param_1 + 24),
                                                this, pVVar2);
    }

    // 0x1006cce80, 80 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar2;
        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        /* WARNING: Load size is inaccurate */
        (GUIAnimationInstance&)
            ->BindAnimation()::$_34::operator()(*(__34**)(param_1 + 24), this, uVar1, *(undefined8*)pVVar2);
    }

    // 0x1006cd780, 112 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(GUIAnimationRGB&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<GUIAnimationRGB,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(GUIAnimationRGB&&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(
        GUIAnimationRGB&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        GUIAnimationRGB GVar1;
        GUIAnimationRGB GVar2;
        undefined8 unaff_RBX;
        undefined4 unaff_R12D;
        undefined8 unaff_R14;
        undefined4 unaff_R15D;

        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)param_1);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)(param_1 + 12));
        GVar1._8_4_ = unaff_R12D;
        GVar1.field_0 = (short)unaff_RBX;
        GVar1.field_2 = (short)((ulong)unaff_RBX >> 16);
        GVar1.field_4 = (short)((ulong)unaff_RBX >> 32);
        GVar1._6_2_ = (short)((ulong)unaff_RBX >> 48);
        GVar2._8_4_ = unaff_R15D;
        GVar2.field_0 = (short)unaff_R14;
        GVar2.field_2 = (short)((ulong)unaff_R14 >> 16);
        GVar2.field_4 = (short)((ulong)unaff_R14 >> 32);
        GVar2._6_2_ = (short)((ulong)unaff_R14 >> 48);
        (GUIAnimationInstance&)
            ->BindAnimation()::$_35::operator()((GUIAnimationRGB*)this, GVar1, GVar2, *(float*)(param_1 + 24));
    }

    // 0x1006cde20, 112 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<unsigned int&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(unsigned int&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(
        unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        GUIAnimationRGB GVar1;
        GUIAnimationRGB GVar2;
        undefined8 unaff_RBX;
        undefined4 unaff_R12D;
        undefined8 unaff_R14;
        undefined4 unaff_R15D;

        std::get<unsigned int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)param_1);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)(param_1 + 12));
        GVar1._8_4_ = unaff_R12D;
        GVar1.field_0 = (short)unaff_RBX;
        GVar1.field_2 = (short)((ulong)unaff_RBX >> 16);
        GVar1.field_4 = (short)((ulong)unaff_RBX >> 32);
        GVar1._6_2_ = (short)((ulong)unaff_RBX >> 48);
        GVar2._8_4_ = unaff_R15D;
        GVar2.field_0 = (short)unaff_R14;
        GVar2.field_2 = (short)((ulong)unaff_R14 >> 16);
        GVar2.field_4 = (short)((ulong)unaff_R14 >> 32);
        GVar2._6_2_ = (short)((ulong)unaff_R14 >> 48);
        (GUIAnimationInstance&)->BindAnimation()::$_36::operator()((uint*)this, GVar1, GVar2, *(float*)(param_1 + 24));
    }

    // 0x1006ce230, 96 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        GUIAnimationRGB GVar1;
        GUIAnimationRGB GVar2;
        undefined8 in_RAX;
        undefined4 unaff_EBX;
        undefined8 unaff_R14;
        undefined4 unaff_R15D;

        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)param_1);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>((variant*)(param_1 + 12));
        GVar1._8_4_ = unaff_EBX;
        GVar1.field_0 = (short)in_RAX;
        GVar1.field_2 = (short)((ulong)in_RAX >> 16);
        GVar1.field_4 = (short)((ulong)in_RAX >> 32);
        GVar1._6_2_ = (short)((ulong)in_RAX >> 48);
        GVar2._8_4_ = unaff_R15D;
        GVar2.field_0 = (short)unaff_R14;
        GVar2.field_2 = (short)((ulong)unaff_R14 >> 16);
        GVar2.field_4 = (short)((ulong)unaff_R14 >> 32);
        GVar2._6_2_ = (short)((ulong)unaff_R14 >> 48);
        (GUIAnimationInstance&)->BindAnimation()::$_37::operator()(GVar1, GVar2, *(float*)(param_1 + 24));
    }

    // 0x1006ce9e0, 96 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(math::Vector2T<int>&&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;
        Vector2T* pVVar3;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        pVVar3 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar3;
        pVVar3 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        /* WARNING: Load size is inaccurate */
        (GUIAnimationInstance&)
            ->BindAnimation()::$_38::operator()(*(__38**)(param_1 + 24), this, pVVar2, uVar1, *(undefined8*)pVVar3);
    }

    // 0x1006cec80, 96 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<math::Vector2T<int>,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(math::Vector2T<int>&&,
   ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;
        Vector2T* pVVar3;
        __39* local_38;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(*(long*)(this + 8) + 312));
        pVVar3 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar3;
        pVVar3 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        local_38._0_4_ = (__39*)uVar1;
        (GUIAnimationInstance&)
            ->BindAnimation()::$_39::operator()(local_38._0_4_, *(undefined8*)pVVar3, *(undefined4*)(param_1 + 24),
                                                this, pVVar2);
    }

    // 0x1006cef10, 80 bytes, inline, placed by class name
    // GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&)::{lambda(GUIAnimationResult const&)#1}::operator()(GUIAnimationResult const&) const
    /* GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&)::{lambda(GUIAnimationResult
   const&)#1}::TEMPNAMEPLACEHOLDERVALUE(GUIAnimationResult const&) const */

    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&)::{
        lambda(GUIAnimationResult_const&) #1
    }
    ::operator()(GUIAnimationResult * param_1) {
        undefined8 uVar1;
        Vector2T* pVVar2;

        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)param_1);
        uVar1 = *(undefined8*)pVVar2;
        pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                          math::Vector2T<int>, GUIAnimationRGB>((variant*)(param_1 + 12));
        /* WARNING: Load size is inaccurate */
        (GUIAnimationInstance&)
            ->BindAnimation()::$_40::operator()(*(__40**)(param_1 + 24), this, uVar1, *(undefined8*)pVVar2);
    }

    // 0x1008f69c0, 48 bytes, inline, placed by class name
    // GUIAnimationInstance::Finished() const
    bool GUIAnimationInstance::Finished() {
        char cVar1;
        bool bVar2;

        cVar1 = (&field_16)->unique();
        bVar2 = true;
        if (cVar1 == '\0') {
            bVar2 = field_44 == 0;
        }
        return bVar2;
    }

    // 0x1008f6cb0, 32 bytes, inline, placed by class name
    // GUIAnimationInstance::GetTargetMode() const
    void GUIAnimationInstance::GetTargetMode() {
        StockPlayerOffer* this_00;

        this_00 = (StockPlayerOffer*)shared_ptr<GUIAnimation>::operator->((shared_ptr<GUIAnimation>*)this);
        this_00->GetCompletedGold();
    }

    // 0x1008f81e0, 16 bytes, inline, placed by class name
    // GUIAnimationInstance::SetOnFinishHook(game::Hook&&)
    void GUIAnimationInstance::SetOnFinishHook(Hook* param_1) {
        game::Hook::operator=((Hook*)m_onFinishHook, param_1);
    }

    // 0x1008f8320, 16 bytes, inline, placed by class name
    // GUIAnimationInstance::HasOnFinishHook() const
    void GUIAnimationInstance::HasOnFinishHook() {
        m_onFinishHook->IsInit();
    }

    // 0x10090e900, 16 bytes, complete-object destructor, inline, placed by class name
    // GUIAnimationInstance::~GUIAnimationInstance(): jumps straight to the base-object destructor

    // 0x10090e910, 64 bytes, base-object destructor, inline, placed by class name
    // GUIAnimationInstance::~GUIAnimationInstance()
    void GUIAnimationInstance::~GUIAnimationInstance() {
        eastl::function<void()>::~function((function<void()>*)&field_336);
        m_onFinishHook->~Hook();
        (&field_16)->~shared_ptr();
        ~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x1006932f0, 48 bytes, inline, placed by debug map only (low confidence)
    // ComponentHelpers::EncodableDynamicID(int, int)
    bool ComponentHelpers::EncodableDynamicID(int param_1, int param_2) {
        bool bVar1;
        int iVar2;

        bVar1 = false;
        if (((uint)param_1 < 235) && (-1 < param_2)) {
            iVar2 = GetMaxDynamicID(param_1);
            bVar1 = param_2 < iVar2;
        }
        return bVar1;
    }

} // namespace jag::ui
