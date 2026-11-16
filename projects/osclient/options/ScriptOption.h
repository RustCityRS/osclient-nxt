// projects/osclient/options/ScriptOption.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::option {
    template <
        typename...> // 7 instantiations, e.g. <bool, DeviceOptionScriptID>, <bool, GameOptionScriptID>, <float, GameOptionScriptID>
    class ScriptOption {
    public:
        // virtual methods in vtable order
        virtual ~ScriptOption();
        virtual void SetValue(int);
        virtual void GetValue() const;
        virtual void GetRange(int&, int&) const;
        ScriptOption(DeviceOptionScriptID, Option<bool>&);
        ScriptOption(DeviceOptionScriptID, Option<int>&);
        ScriptOption(DeviceOptionScriptID, Option<ScaledUIQuality>&);
        ScriptOption(GameOptionScriptID, Option<bool>&);
        ScriptOption(GameOptionScriptID, Option<int>&);
        ScriptOption(GameOptionScriptID, Option<ChatTimestampMode>&);
        ScriptOption(GameOptionScriptID, Option<float>&);
    };

    // 0x100021df0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScriptOption<bool, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<bool>&): jumps straight to the base-object constructor

    // 0x100021e00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScriptOption<int, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<int>&): jumps straight to the base-object constructor

    // 0x100021e10, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<ScaledUIQuality>&): jumps straight to the base-object constructor

    // 0x100022b10, 16 bytes, complete-object destructor, inline, placed by class name and debug map
    // ScriptOption<int, DeviceOptionScriptID>::~ScriptOption(): jumps straight to the base-object destructor

    // 0x100023ae0, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptOption<bool, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<bool>&): jumps straight to the base-object constructor

    // 0x100023b00, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptOption<int, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<int>&): jumps straight to the base-object constructor

    // 0x100023b20, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptOption<ChatTimestampMode, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<ChatTimestampMode>&): jumps straight to the base-object constructor

    // 0x100023b50, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptOption<float, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<float>&): jumps straight to the base-object constructor

    // 0x10004a620, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<bool, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<bool>&)
    void ScriptOption<bool, DeviceOptionScriptID>::ScriptOption(
        ScriptOption<bool, DeviceOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a40 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x10004a690, 32 bytes, deleting destructor, inline, placed by class name
    // ScriptOption<bool, DeviceOptionScriptID>::~ScriptOption()
    /* ScriptOption<int,
   DeviceOptionScriptID>::~ScriptOption() */

    void ScriptOption<int, DeviceOptionScriptID>::~ScriptOption(ScriptOption<int, DeviceOptionScriptID>* this) {
        pair* in_RSI;

        ~ScriptOption(in_RSI);
        operator_delete(this);
    }

    // 0x10004a6b0, 64 bytes, inline, placed by class name
    // ScriptOption<bool, DeviceOptionScriptID>::SetValue(int)
    /* ScriptOption<bool,
   GameOptionScriptID>::SetValue(int) */

    void ScriptOption<bool, GameOptionScriptID>::SetValue(ScriptOption<bool, GameOptionScriptID>* this, int param_1) {
        long* plVar1;
        bool bVar2;
        undefined1 uVar3;
        undefined4 in_register_00000034;

        bVar2 = ((ulong)(uint)param_1)->IsValidValue((BucketAllocatorSTL*)CONCAT44(in_register_00000034, param_1));
        if (bVar2) {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<bool>::IntegerToValueType(param_1);
            (**(code**)(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x10004a6f0, 32 bytes, inline, placed by class name
    // ScriptOption<bool, DeviceOptionScriptID>::GetValue() const
    /* ScriptOption<bool, GameOptionScriptID>::GetValue()
   const */

    void ScriptOption<bool, GameOptionScriptID>::GetValue(ScriptOption<bool, GameOptionScriptID>* this) {
        undefined1* puVar1;

        puVar1 = (undefined1*)(**(code**)(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(*puVar1);
    }

    // 0x10004a710, 96 bytes, inline, placed by class name
    // ScriptOption<bool, DeviceOptionScriptID>::GetRange(int&, int&) const
    /* ScriptOption<bool,
   GameOptionScriptID>::GetRange(int&, int&) const */

    void ScriptOption<bool, GameOptionScriptID>::GetRange(ScriptOption<bool, GameOptionScriptID>* this, int* param_1,
                                                          int* param_2) {
        char cVar1;
        int iVar2;
        undefined1 local_1a;
        undefined1 local_19;

        cVar1 = (**(code**)(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_1a, &local_19);
        if (cVar1 == '\0') {
            *param_1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_1a);
            *param_1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_19);
        }
        *param_2 = iVar2;
    }

    // 0x10004a790, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<int, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<int>&)
    void ScriptOption<int, DeviceOptionScriptID>::ScriptOption(
        ScriptOption<int, DeviceOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a58 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x10004a7e0, 64 bytes, inline, placed by class name
    // ScriptOption<int, DeviceOptionScriptID>::SetValue(int)
    /* ScriptOption<int,
   GameOptionScriptID>::SetValue(int) */

    void ScriptOption<int, GameOptionScriptID>::SetValue(ScriptOption<int, GameOptionScriptID>* this, int param_1) {
        long* plVar1;
        bool bVar2;
        undefined4 uVar3;
        undefined4 in_register_00000034;

        bVar2 = ((ulong)(uint)param_1)->IsValidValue((BucketAllocatorSTL*)CONCAT44(in_register_00000034, param_1));
        if (bVar2) {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_1);
            (**(code**)(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x10004a820, 32 bytes, inline, placed by class name
    // ScriptOption<int, DeviceOptionScriptID>::GetValue() const
    /* ScriptOption<ScaledUIQuality,
   DeviceOptionScriptID>::GetValue() const */

    void option::ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::GetValue(
        ScriptOption<ScaledUIQuality, DeviceOptionScriptID>* this) {
        undefined4* puVar1;

        puVar1 = (undefined4*)(**(code**)(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(*puVar1);
    }

    // 0x10004a840, 96 bytes, inline, placed by class name
    // ScriptOption<int, DeviceOptionScriptID>::GetRange(int&, int&) const
    /* ScriptOption<ScaledUIQuality,
   DeviceOptionScriptID>::GetRange(int&, int&) const */

    void option::ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::GetRange(
        ScriptOption<ScaledUIQuality, DeviceOptionScriptID>* this, int* param_1, int* param_2) {
        char cVar1;
        int iVar2;
        undefined4 local_20;
        undefined4 local_1c;

        cVar1 = (**(code**)(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_20, &local_1c);
        if (cVar1 == '\0') {
            *param_1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_20);
            *param_1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(local_1c);
        }
        *param_2 = iVar2;
    }

    // 0x10004a8a0, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::ScriptOption(DeviceOptionScriptID, Option<ScaledUIQuality>&)
    void option::ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::ScriptOption(
        ScriptOption<ScaledUIQuality, DeviceOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a28 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x10004a8f0, 64 bytes, inline, placed by class name
    // ScriptOption<ScaledUIQuality, DeviceOptionScriptID>::SetValue(int)
    /* ScriptOption<ChatTimestampMode,
   GameOptionScriptID>::SetValue(int) */

    void option::ScriptOption<ChatTimestampMode, GameOptionScriptID>::SetValue(
        ScriptOption<ChatTimestampMode, GameOptionScriptID>* this, int param_1) {
        long* plVar1;
        undefined4 uVar3;

        if (transforms::EnumToValueTypeTransform<ChatTimestampMode>::CanTransformToValueType(param_1) != '\0') {
            plVar1 = *(long**)(this + 16);
            uVar3 = transforms::IntegerToValueTypeTransform<int>::IntegerToValueType(param_1);
            (**(code**)(*plVar1 + 80))(plVar1, uVar3, 1);
        }
    }

    // 0x100050ea0, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<bool, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<bool>&)
    void ScriptOption<bool, GameOptionScriptID>::ScriptOption(
        ScriptOption<bool, GameOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a38 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x100050fb0, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<int, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<int>&)
    void ScriptOption<int, GameOptionScriptID>::ScriptOption(
        ScriptOption<int, GameOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a50 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x100051530, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<ChatTimestampMode, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<ChatTimestampMode>&)
    void option::ScriptOption<ChatTimestampMode, GameOptionScriptID>::ScriptOption(
        ScriptOption<ChatTimestampMode, GameOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a30 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x1000519a0, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptOption<float, GameOptionScriptID>::ScriptOption(GameOptionScriptID, Option<float>&)
    void ScriptOption<float, GameOptionScriptID>::ScriptOption(
        ScriptOption<float, GameOptionScriptID>* this, int param_2,
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* param_3) {
        OptionStore* this_00;

        new (this) IScriptOption(param_2);
        *(undefined**)this = PTR_vtable_100ee8a48 + 16;
        *(vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>**)(this + 16) = param_3;
        this_00 = (OptionStore*)eastl::vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>::end(param_3);
        this_00->Register(this);
    }

    // 0x1000519f0, 64 bytes, inline, placed by class name
    // ScriptOption<float, GameOptionScriptID>::SetValue(int)
    void ScriptOption<float, GameOptionScriptID>::SetValue(ScriptOption<float, GameOptionScriptID>* this, int param_1) {
        long* plVar1;
        bool bVar2;
        undefined4 in_register_00000034;

        bVar2 = ((ulong)(uint)param_1)->IsValidValue((BucketAllocatorSTL*)CONCAT44(in_register_00000034, param_1));
        if (bVar2) {
            plVar1 = *(long**)(this + 16);
            transforms::IntegerToValueTypeTransform<float>::IntegerToValueType(param_1);
            (**(code**)(*plVar1 + 80))(plVar1, 1);
        }
    }

    // 0x100051a30, 32 bytes, inline, placed by class name
    // ScriptOption<float, GameOptionScriptID>::GetValue() const
    void ScriptOption<float, GameOptionScriptID>::GetValue(ScriptOption<float, GameOptionScriptID>* this) {
        float* pfVar1;

        pfVar1 = (float*)(**(code**)(**(long**)(this + 16) + 88))();
        transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(*pfVar1);
    }

    // 0x100051a50, 96 bytes, inline, placed by class name
    // ScriptOption<float, GameOptionScriptID>::GetRange(int&, int&) const
    void ScriptOption<float, GameOptionScriptID>::GetRange(ScriptOption<float, GameOptionScriptID>* this, int* param_1,
                                                           int* param_2) {
        char cVar1;
        int iVar2;
        float local_20;
        float local_1c;

        cVar1 = (**(code**)(**(long**)(this + 16) + 96))(*(long**)(this + 16), &local_20, &local_1c);
        if (cVar1 == '\0') {
            *param_1 = -1;
            iVar2 = -1;
        } else {
            iVar2 = transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(local_20);
            *param_1 = iVar2;
            iVar2 = transforms::IntegerToValueTypeTransform<float>::ValueTypeToInteger(local_1c);
        }
        *param_2 = iVar2;
    }

} // namespace jag::oldscape::option

namespace jag::game {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeLong::~BaseVarTypeLong();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeString::~BaseVarTypeString();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeInteger::~BaseVarTypeInteger();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    VarDomainTypeNormal::~VarDomainTypeNormal();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeCoordFine::~BaseVarTypeCoordFine();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeLong::~BaseVarTypeLong();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeString::~BaseVarTypeString();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeInteger::~BaseVarTypeInteger();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    VarDomainTypeNormal::~VarDomainTypeNormal();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    BaseVarTypeCoordFine::~BaseVarTypeCoordFine();

} // namespace jag::game

namespace jag {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::SpriteLayer::~SpriteLayer();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::ChildAnimLayer::~ChildAnimLayer();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::RectLayer::~RectLayer();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::SpriteLayer::~SpriteLayer();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::ChildAnimLayer::~ChildAnimLayer();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    LoadingScreenScript::RectLayer::~RectLayer();

} // namespace jag

namespace jag::graphics::particlemodules {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Flow::~Flow();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Flipbook::~Flipbook();

    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Lighting::~Lighting();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Flow::~Flow();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Flipbook::~Flipbook();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    Lighting::~Lighting();

} // namespace jag::graphics::particlemodules

namespace jag::oldscape::dash3d {
    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredModelHighlight::~DeferredModelHighlight();

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredGroundFineHighlight::~DeferredGroundFineHighlight();

    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredGroundGridHighlight::~DeferredGroundGridHighlight();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredModelHighlight::~DeferredModelHighlight();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredGroundFineHighlight::~DeferredGroundFineHighlight();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DeferredGroundGridHighlight::~DeferredGroundGridHighlight();

} // namespace jag::oldscape::dash3d

namespace jag::testframework {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GaiaConsoleSink::~GaiaConsoleSink();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    GaiaConsoleSink::~GaiaConsoleSink();

} // namespace jag::testframework

namespace jag::logger {
    // 0x100022b10: the linker folded this into oldscape::option::ScriptOption<int, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOutputSink::~DebugOutputSink();

    // 0x10004a690: the linker folded this into oldscape::option::ScriptOption<bool, oldscape::option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    DebugOutputSink::~DebugOutputSink();

} // namespace jag::logger

namespace jag::oldscape::sound {
    // 0x100022b10: the linker folded this into option::ScriptOption<int, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    NXTPCMPlayerFactory::~NXTPCMPlayerFactory();

    // 0x10004a690: the linker folded this into option::ScriptOption<bool, option::DeviceOptionScriptID>::~ScriptOption(), which has identical code
    NXTPCMPlayerFactory::~NXTPCMPlayerFactory();

} // namespace jag::oldscape::sound
