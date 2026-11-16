// projects/osclient/options/ScriptOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <
        typename...> // 7 instantiations, e.g. <bool, DeviceOptionScriptID>, <bool, GameOptionScriptID>, <float, GameOptionScriptID>
    class ScriptOption {
    public:
        // virtual methods in vtable order
        virtual ~ScriptOption();
        virtual void SetValue(int arg1);
        virtual void GetValue() const;
        virtual void GetRange(int& arg1, int& arg2) const;
        ScriptOption(DeviceOptionScriptID deviceOptionScriptID, Option<bool>& option);
        ScriptOption(DeviceOptionScriptID deviceOptionScriptID, Option<int>& option);
        ScriptOption(DeviceOptionScriptID deviceOptionScriptID, Option<ScaledUIQuality>& option);
        ScriptOption(GameOptionScriptID gameOptionScriptID, Option<bool>& option);
        ScriptOption(GameOptionScriptID gameOptionScriptID, Option<int>& option);
        ScriptOption(GameOptionScriptID gameOptionScriptID, Option<ChatTimestampMode>& option);
        ScriptOption(GameOptionScriptID gameOptionScriptID, Option<float>& option);
    };

    // 0x10004a620
    ScriptOption<bool, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID deviceOptionScriptID,
                                                           Option<bool>& option)
        : IScriptOption(deviceOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a40 + 16;
        *(Option<bool>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x10004a690
    ScriptOption<bool, DeviceOptionScriptID>::~ScriptOption() {
        operator delete(this);
    }

    // 0x10004a6b0
    void ScriptOption<bool, DeviceOptionScriptID>::SetValue(int arg1) {
        long* plVar1;
        uint8_t uVar3;

        if (((unsigned long)(unsigned int)arg1)->IsValidValue() != '\0') {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<bool>::IntegerToValueType(arg1);
            (**(void (**)(...))(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x10004a6f0
    void ScriptOption<bool, DeviceOptionScriptID>::GetValue() const {
        uint8_t* pbVar1 = (uint8_t*)(**(void (**)(...))(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<int>::IntegerToValueType((unsigned int)*pbVar1);
    }

    // 0x10004a710
    void ScriptOption<bool, DeviceOptionScriptID>::GetRange(int& arg1, int& arg2) const {
        int iVar2;
        uint8_t local_1a;
        uint8_t local_19;

        if ((**(void (**)(...))(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_1a, &local_19) == '\0') {
            arg1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType((unsigned int)local_1a);
            arg1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType((unsigned int)local_19);
        }
        arg2 = iVar2;
    }

    // 0x10004a790
    ScriptOption<int, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID deviceOptionScriptID,
                                                          Option<int>& option)
        : IScriptOption(deviceOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a58 + 16;
        *(Option<int>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x10004a7e0
    void ScriptOption<int, DeviceOptionScriptID>::SetValue(int arg1) {
        long* plVar1;
        uint32_t uVar3;

        if (((unsigned long)(unsigned int)arg1)->IsValidValue() != '\0') {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(arg1);
            (**(void (**)(...))(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x10004a820
    void ScriptOption<int, DeviceOptionScriptID>::GetValue() const {
        int* piVar1 = (int*)(**(void (**)(...))(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(*piVar1);
    }

    // 0x10004a840
    void ScriptOption<int, DeviceOptionScriptID>::GetRange(int& arg1, int& arg2) const {
        int iVar2;
        int local_20;
        int local_1c;

        if ((**(void (**)(...))(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_20, &local_1c) == '\0') {
            arg1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_20);
            arg1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_1c);
        }
        arg2 = iVar2;
    }

    // 0x10004a8a0
    ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID deviceOptionScriptID,
                                                                      Option<ScaledUIQuality>& option)
        : IScriptOption(deviceOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a28 + 16;
        *(Option<ScaledUIQuality>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x10004a8f0
    void ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::SetValue(int arg1) {
        long* plVar1;
        uint32_t uVar3;

        if (((EnumToValueTypeTransform<ChatTimestampMode>*)(unsigned long)(unsigned int)arg1)
                ->CanTransformToValueType(arg1) != '\0') {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(arg1);
            (**(void (**)(...))(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x100050ea0
    ScriptOption<bool, GameOptionScriptID>::ScriptOption(GameOptionScriptID gameOptionScriptID, Option<bool>& option)
        : IScriptOption(gameOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a38 + 16;
        *(Option<bool>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x100050fb0
    ScriptOption<int, GameOptionScriptID>::ScriptOption(GameOptionScriptID gameOptionScriptID, Option<int>& option)
        : IScriptOption(gameOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a50 + 16;
        *(Option<int>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x100051530
    ScriptOption<ChatTimestampMode, GameOptionScriptID>::ScriptOption(GameOptionScriptID gameOptionScriptID,
                                                                      Option<ChatTimestampMode>& option)
        : IScriptOption(gameOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a30 + 16;
        *(Option<ChatTimestampMode>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x1000519a0
    ScriptOption<float, GameOptionScriptID>::ScriptOption(GameOptionScriptID gameOptionScriptID, Option<float>& option)
        : IScriptOption(gameOptionScriptID) {
        *(uint8_t**)this = PTR_vtable_100ee8a48 + 16;
        *(Option<float>**)(this + 16) = option;
        ((OptionStore*)option.end())->Register(this);
    }

    // 0x1000519f0
    void ScriptOption<float, GameOptionScriptID>::SetValue(int arg1) {
        long* plVar1;

        if (((unsigned long)(unsigned int)arg1)->IsValidValue() != '\0') {
            plVar1 = *(long**)(this + 16);
            transforms::IntegerToValueTypeTransform<float>::IntegerToValueType(arg1);
            (**(void (**)(...))(*plVar1 + 80))(plVar1, 1);
        }
    }

    // 0x100051a30
    void ScriptOption<float, GameOptionScriptID>::GetValue() const {
        float* pfVar1 = (float*)(**(void (**)(...))(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(*pfVar1);
    }

    // 0x100051a50
    void ScriptOption<float, GameOptionScriptID>::GetRange(int& arg1, int& arg2) const {
        int iVar2;
        float local_20;
        float local_1c;

        if ((**(void (**)(...))(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_20, &local_1c) == '\0') {
            arg1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(local_20);
            arg1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(local_1c);
        }
        arg2 = iVar2;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100022b10: BaseVarTypeLong::~BaseVarTypeLong() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: BaseVarTypeString::~BaseVarTypeString() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: BaseVarTypeInteger::~BaseVarTypeInteger() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: VarDomainTypeNormal::~VarDomainTypeNormal() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: BaseVarTypeCoordFine::~BaseVarTypeCoordFine() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::game

namespace jag {
    // 0x100022b10: LoadingScreenScript::SpriteLayer::~SpriteLayer() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: LoadingScreenScript::ChildAnimLayer::~ChildAnimLayer() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: LoadingScreenScript::RectLayer::~RectLayer() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag

namespace jag::graphics::particlemodules {
    // 0x100022b10: Flow::~Flow() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: Flipbook::~Flipbook() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: Lighting::~Lighting() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::graphics::particlemodules

namespace jag::oldscape::dash3d {
    // 0x100022b10: DeferredModelHighlight::~DeferredModelHighlight() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: DeferredGroundFineHighlight::~DeferredGroundFineHighlight() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

    // 0x100022b10: DeferredGroundGridHighlight::~DeferredGroundGridHighlight() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::oldscape::dash3d

namespace jag::testframework {
    // 0x100022b10: GaiaConsoleSink::~GaiaConsoleSink() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::testframework

namespace jag::logger {
    // 0x100022b10: DebugOutputSink::~DebugOutputSink() has the same machine code as oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::logger

namespace jag::oldscape::sound {
    // 0x100022b10: NXTPCMPlayerFactory::~NXTPCMPlayerFactory() has the same machine code as option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption()

} // namespace jag::oldscape::sound
