// libs/game/runetek5/config/vartype/bit/VarBitTypeList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.game.runetek5

namespace jag::game {
    class VarBitTypeList {
    public:
        // virtual methods in vtable order
        virtual ~VarBitTypeList();
        ConfigProvider* GetConfigProvider();
        VarBitTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy, const ModeGame* modeGame,
                       const Language* language, Js5ResourceProvider& js5ResourceProvider,
                       ConfigProvider& configProvider);

    private:
        uint8_t _unknown_8[104];
        ConfigProvider* m_configProvider;
    };

    // 0x1004c5ce0
    ConfigProvider* VarBitTypeList::GetConfigProvider() {
        return m_pDomain;
    }

    // 0x1005875d0
    VarBitTypeList::VarBitTypeList(ConfigTypeListContainerStrategy configTypeListContainerStrategy,
                                   const ModeGame* modeGame, const Language* language,
                                   Js5ResourceProvider& js5ResourceProvider, ConfigProvider& configProvider)
        : BaseTemplateConfigTypeList<VarBitType>(configTypeListContainerStrategy, modeGame, language,
                                                 js5ResourceProvider, *(Js5Archive::JS5_CONFIG),
                                                 (Js5ConfigGroup*)Js5ConfigGroup::VAR_BIT, 512),
          m_configProvider(configProvider) {}

    // 0x100587ad0: VarBitTypeList::~VarBitTypeList() has the same machine code as BaseTemplateConfigTypeList<VarBitType>::~BaseTemplateConfigTypeList()

} // namespace jag::game
