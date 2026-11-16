// libs/graphics/runetek7/gui/animations/GUIAnimationInstance.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class GUIAnimationInstance {
    public:
        void GetAnimation() const;
        Hook GetOnFinishHook() const;
        uint8_t* GetComponent() const;
        void GetTarget() const;
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(
            math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&& arg2);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(
            math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&& arg2);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&& arg1);
        void Bind<int>(int* arg1);
        void BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(
            GUIAnimationRGB&& guiAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&& arg2);
        void BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(
            unsigned int& arg1, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&& arg2);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&& arg1);
        void Bind<unsigned char>(unsigned char* arg1);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(
            math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&& arg2);
        void BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(
            math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&& arg2);
        void BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(
            ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&& arg1);
        GUIAnimationInstance(const shared_ptr<GUIAnimation>& guiAnimation, const shared_ptr<ui::Component>& component,
                             float arg3, float arg4, unsigned int arg5, float arg6);
        GUIAnimationInstance(const shared_ptr<GUIAnimation>& guiAnimation, const shared_ptr<ui::Component>& component,
                             float arg3, float arg4, unsigned int arg5, float arg6, game::Hook&& hook);
        unsigned int Advance(float arg1);
        bool Finished() const;
        void ApplyAnimation(float arg1);
        void Start();
        void Restart(unsigned int arg1);
        void Restart(float arg1, float arg2, unsigned int arg3, float arg4);
        void Kill(GUIAnimationKillBehaviour guiAnimationKillBehaviour);
        void GetTargetMode() const;
        void SetOnFinishHook(game::Hook&& hook);
        void HasOnFinishHook() const;
        ~GUIAnimationInstance();

    private:
        uint8_t _unknown_0[8];
        long field_8;
        uint8_t _unknown_16[16];
        float field_32;
        float field_36;
        float field_40;
        unsigned int field_44;
        float field_48;
        uint8_t _unknown_52[4];
        Hook m_onFinishHook;
        uint8_t _unknown_72[224];
        uint8_t field_296;
        uint8_t _unknown_297[15];
        uint8_t field_312;
        uint8_t _unknown_313[15];
        uint8_t* field_328;
        uint8_t _unknown_336[8];
    };

    // 0x100692e80
    void GUIAnimationInstance::GetTarget() const {
        ((TextRun*)(*this).operator->())->GetMaxLineWidth();
    }

    // 0x100692ea0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(
        math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&& arg2) {
        long local_28 = *(long*)vector2;
        field_312 = local_28;
        local_28 = arg2.field_0;
        GUIAnimationInstance* local_20 = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_28);
    }

    // 0x100692ef0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(
        math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&& arg2) {
        long local_28 = *(long*)vector2;
        field_312 = local_28;
        local_28 = arg2.field_0;
        GUIAnimationInstance* local_20 = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_28);
    }

    // 0x100692f40
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&& arg1) {
        __34 local_30;

        local_30.variant<true, 0>();
        field_312 = local_30;
        local_30[0].field_0 = arg1.field_0;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_30);
    }

    // 0x100692fa0
    void GUIAnimationInstance::Bind<int>(int* arg1) {
        int* local_20 = arg1;
        int iVar1 = GetTargetMode();
        int local_14 = 0;
        if (iVar1 != 1) {
            local_14 = *local_20;
        }
        field_312 = local_14;
        (&field_296)->operator=(&local_20);
        iVar1 = GetTargetMode();
        void* pcVar2 = DefaultAnimationAdvanceCallback<int, int>;
        if (iVar1 == 2) {
            pcVar2 = DefaultAnimationAdvanceCallback<int, float>;
        }
        field_328 = pcVar2;
    }

    // 0x100693010
    void GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(
        GUIAnimationRGB&& guiAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&& arg2) {
        uint8_t local_28[16];

        local_28._4_2_ = guiAnimationRGB.field_4;
        uint16_t uVar1 = guiAnimationRGB.field_0;
        local_28._2_2_ = guiAnimationRGB.field_2;
        local_28._0_2_ = uVar1;
        field_312 = *local_28;
        local_28._0_8_ = arg2.field_0;
        local_28._8_8_ = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(local_28);
    }

    // 0x100693070
    void GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(
        unsigned int& arg1, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&& arg2) {
        __36 local_28;

        local_28.field_0._0_4_ = arg1;
        field_312 = local_28;
        local_28.field_0 = arg2.field_0;
        GUIAnimationInstance* local_20 = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_28);
    }

    // 0x1006930c0
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&& arg1) {
        __37 local_30;

        local_30.variant<true, 0>();
        field_312 = local_30;
        local_30[0].field_0 = arg1.field_0;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_30);
    }

    // 0x100693120
    void GUIAnimationInstance::Bind<unsigned char>(unsigned char* arg1) {
        unsigned char local_11;

        unsigned char* local_20 = arg1;
        int iVar1 = GetTargetMode();
        if (iVar1 == 1) {
            local_11 = '\0';
        } else {
            local_11 = *local_20;
        }
        field_312 = local_11;
        (&field_296)->operator=(&local_20);
        iVar1 = GetTargetMode();
        void* pcVar2 = DefaultAnimationAdvanceCallback<unsigned char, unsigned char>;
        if (iVar1 == 2) {
            pcVar2 = DefaultAnimationAdvanceCallback<unsigned char, float>;
        }
        field_328 = pcVar2;
    }

    // 0x1006931a0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(
        math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&& arg2) {
        long* local_28 = *(long**)vector2;
        field_312 = local_28;
        local_28 = arg2.field_0;
        GUIAnimationInstance* local_20 = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_28);
    }

    // 0x1006931f0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(
        math::Vector2T<int>&& vector2, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&& arg2) {
        long* local_28 = *(long**)vector2;
        field_312 = local_28;
        local_28 = arg2.field_0;
        GUIAnimationInstance* local_20 = this;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_28);
    }

    // 0x100693240
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&& arg1) {
        __40 local_30;

        local_30.variant<true, 0>();
        field_312 = local_30;
        local_30[0].field_0 = arg1.field_0;
        ((function<void(GUIAnimationResult const&)>*)&field_336)->operator=(&local_30);
    }

    // 0x1006cb840
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_32&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        auto vector21 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                 math::Vector2T<int>, GUIAnimationRGB>(
            *((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                       GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        auto pVVar1 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        pVVar1 = *(Vector2T<int>**)pVVar1;
        auto pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        (GUIAnimationInstance&)
            ->BindAnimation()::$_32::operator()((__32*)this, vector21, pVVar1, *(Vector2T<int>**)pVVar2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006cbcc0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_33&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        Vector2T<float>* in_RCX;
        Vector2T<float>* vector22;

        auto vector21 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                 math::Vector2T<int>, GUIAnimationRGB>(
            *((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                       GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        auto pVVar2 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        uint64_t uVar1 = *(uint64_t*)pVVar2;
        std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                 math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        float local_38 = (float)uVar1;
        (GUIAnimationInstance&)->BindAnimation()::$_33::operator()((__33*)this, vector21, vector22, in_RCX, local_38);
    }

    // 0x1006cce80
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_34>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_34&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        auto pVVar1 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        pVVar1 = *(Vector2T<int>**)pVVar1;
        auto pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        (GUIAnimationInstance&)
            ->BindAnimation()::$_34::operator()((__34*)this, pVVar1, *(Vector2T<int>**)pVVar2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006cd780
    void GUIAnimationInstance::BindIndirect<GUIAnimationRGB, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35>(
        GUIAnimationRGB&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_35&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        GUIAnimationRGB guiAnimationRGB2;
        GUIAnimationRGB guiAnimationRGB3;
        uint64_t unaff_RBX;
        uint32_t unaff_R12D;
        uint64_t unaff_R14;
        uint32_t unaff_R15D;

        auto guiAnimationRGB1 = std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float,
                                         math::Vector2T<float>, math::Vector2T<int>, GUIAnimationRGB>(
            *((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                       GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(guiAnimationResult);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(*((guiAnimationResult + 12)));
        guiAnimationRGB2._8_4_ = unaff_R12D;
        guiAnimationRGB2.field_0 = (short)unaff_RBX;
        guiAnimationRGB2.field_2 = (short)((unsigned long)unaff_RBX >> 16);
        guiAnimationRGB2.field_4 = (short)((unsigned long)unaff_RBX >> 32);
        guiAnimationRGB2._6_2_ = (short)((unsigned long)unaff_RBX >> 48);
        guiAnimationRGB3._8_4_ = unaff_R15D;
        guiAnimationRGB3.field_0 = (short)unaff_R14;
        guiAnimationRGB3.field_2 = (short)((unsigned long)unaff_R14 >> 16);
        guiAnimationRGB3.field_4 = (short)((unsigned long)unaff_R14 >> 32);
        guiAnimationRGB3._6_2_ = (short)((unsigned long)unaff_R14 >> 48);
        (GUIAnimationInstance&)
            ->BindAnimation()::$_35::operator()((__35*)this, guiAnimationRGB1, guiAnimationRGB2, guiAnimationRGB3,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006cde20
    void GUIAnimationInstance::BindIndirect<unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36>(
        unsigned int&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_36&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        GUIAnimationRGB guiAnimationRGB1;
        GUIAnimationRGB guiAnimationRGB2;
        uint64_t unaff_RBX;
        uint32_t unaff_R12D;
        uint64_t unaff_R14;
        uint32_t unaff_R15D;

        auto arg1 =
            std::get<unsigned int, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                     GUIAnimationRGB>(*((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                                 math::Vector2T<int>, GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(guiAnimationResult);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(*((guiAnimationResult + 12)));
        guiAnimationRGB1._8_4_ = unaff_R12D;
        guiAnimationRGB1.field_0 = (short)unaff_RBX;
        guiAnimationRGB1.field_2 = (short)((unsigned long)unaff_RBX >> 16);
        guiAnimationRGB1.field_4 = (short)((unsigned long)unaff_RBX >> 32);
        guiAnimationRGB1._6_2_ = (short)((unsigned long)unaff_RBX >> 48);
        guiAnimationRGB2._8_4_ = unaff_R15D;
        guiAnimationRGB2.field_0 = (short)unaff_R14;
        guiAnimationRGB2.field_2 = (short)((unsigned long)unaff_R14 >> 16);
        guiAnimationRGB2.field_4 = (short)((unsigned long)unaff_R14 >> 32);
        guiAnimationRGB2._6_2_ = (short)((unsigned long)unaff_R14 >> 48);
        (GUIAnimationInstance&)
            ->BindAnimation()::$_36::operator()((__36*)this, arg1, guiAnimationRGB1, guiAnimationRGB2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006ce230
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_37>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_37&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        GUIAnimationRGB guiAnimationRGB1;
        GUIAnimationRGB guiAnimationRGB2;
        uint64_t in_RAX;
        uint32_t unaff_EBX;
        uint64_t unaff_R14;
        uint32_t unaff_R15D;

        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(guiAnimationResult);
        std::get<GUIAnimationRGB, unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                 GUIAnimationRGB>(*((guiAnimationResult + 12)));
        guiAnimationRGB1._8_4_ = unaff_EBX;
        guiAnimationRGB1.field_0 = (short)in_RAX;
        guiAnimationRGB1.field_2 = (short)((unsigned long)in_RAX >> 16);
        guiAnimationRGB1.field_4 = (short)((unsigned long)in_RAX >> 32);
        guiAnimationRGB1._6_2_ = (short)((unsigned long)in_RAX >> 48);
        guiAnimationRGB2._8_4_ = unaff_R15D;
        guiAnimationRGB2.field_0 = (short)unaff_R14;
        guiAnimationRGB2.field_2 = (short)((unsigned long)unaff_R14 >> 16);
        guiAnimationRGB2.field_4 = (short)((unsigned long)unaff_R14 >> 32);
        guiAnimationRGB2._6_2_ = (short)((unsigned long)unaff_R14 >> 48);
        (GUIAnimationInstance&)
            ->BindAnimation()::$_37::operator()((__37*)this, guiAnimationRGB1, guiAnimationRGB2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006ce9e0
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_38&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        auto vector21 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                 math::Vector2T<int>, GUIAnimationRGB>(
            *((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                       GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        auto pVVar1 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        pVVar1 = *(Vector2T<int>**)pVVar1;
        auto pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        (GUIAnimationInstance&)
            ->BindAnimation()::$_38::operator()((__38*)this, vector21, pVVar1, *(Vector2T<int>**)pVVar2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1006cec80
    void
    GUIAnimationInstance::BindIndirect<math::Vector2T<int>, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39>(
        math::Vector2T<int>&&, ui::Component::BindAnimation(GUIAnimationInstance&)::$_39&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        Vector2T<float>* in_RCX;
        Vector2T<float>* vector22;

        auto vector21 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                                 math::Vector2T<int>, GUIAnimationRGB>(
            *((variant<unsigned char, unsigned int, int, float, math::Vector2T<float>, math::Vector2T<int>,
                       GUIAnimationRGB>*)(*(long*)(this + 8) + 312)));
        auto pVVar2 = std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        uint64_t uVar1 = *(uint64_t*)pVVar2;
        std::get<math::Vector2T<float>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                 math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        float local_38 = (float)uVar1;
        (GUIAnimationInstance&)->BindAnimation()::$_39::operator()((__39*)this, vector21, vector22, in_RCX, local_38);
    }

    // 0x1006cef10
    void GUIAnimationInstance::BindIndirect<ui::Component::BindAnimation(GUIAnimationInstance&)::$_40>(
        ui::Component::BindAnimation(GUIAnimationInstance&)::$_40&&)::{
        lambda(GUIAnimationResult const&) #1
    }
    ::operator()(const GUIAnimationResult & guiAnimationResult) const {
        auto pVVar1 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(guiAnimationResult);
        pVVar1 = *(Vector2T<int>**)pVVar1;
        auto pVVar2 = std::get<math::Vector2T<int>, unsigned char, unsigned int, int, float, math::Vector2T<float>,
                               math::Vector2T<int>, GUIAnimationRGB>(*((guiAnimationResult + 12)));
        (GUIAnimationInstance&)
            ->BindAnimation()::$_40::operator()((__40*)this, pVVar1, *(Vector2T<int>**)pVVar2,
                                                *(float*)(guiAnimationResult + 24));
    }

    // 0x1008f69c0
    bool GUIAnimationInstance::Finished() const {
        bool cVar1 = field_16.unique();
        bool bVar2 = true;
        if (!cVar1) {
            bVar2 = field_44 == 0;
        }
        return bVar2;
    }

    // 0x1008f6cb0
    void GUIAnimationInstance::GetTargetMode() const {
        ((StockPlayerOffer*)(*this).operator->())->GetCompletedGold();
    }

    // 0x1008f81e0
    void GUIAnimationInstance::SetOnFinishHook(game::Hook&& hook) {
        *m_onFinishHook = hook;
    }

    // 0x1008f8320
    void GUIAnimationInstance::HasOnFinishHook() const {
        m_onFinishHook->IsInit();
    }

    // 0x10090e910
    GUIAnimationInstance::~GUIAnimationInstance() {
        field_336.~function();
        m_onFinishHook->~Hook();
        field_16.~shared_ptr();
    }

} // namespace jag::graphics

namespace jag::ui {
    // 0x1006932f0
    bool ComponentHelpers::EncodableDynamicID(int arg1, int arg2) {
        int iVar2;

        bool bVar1 = false;
        if (((unsigned int)arg1 < 235) && (-1 < arg2)) {
            iVar2 = GetMaxDynamicID(arg1);
            bVar1 = arg2 < iVar2;
        }
        return bVar1;
    }

} // namespace jag::ui
