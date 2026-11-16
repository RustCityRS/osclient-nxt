// libs/game/runetek5/scene/ObjStackList.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class ObjStackList : public ZoneEntityManager // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~ObjStackList();
        virtual void MainLogic(graphics::RT7Core& rt7Core, game::AssetBuilder& assetBuilder);
        ObjStackList(const math::Point<int>& point, int arg2);
        void ClearObjStack();
        void AddObjStack(const shared_ptr<game::World>& world, const game::ConfigProvider* configProvider,
                         const game::CoordGrid& coordGrid, unsigned int arg4, unsigned int arg5);
        void DelObjStack(const game::CoordGrid& coordGrid, unsigned int arg2);
        void AdjustCount(const game::CoordGrid& coordGrid, unsigned int arg2, unsigned int arg3, unsigned int arg4);

    private:
        uint8_t _unknown_8[48];
        Skybox field_56;
    };

} // namespace jag
