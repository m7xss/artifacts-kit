bool BootstrapPe(uint8_t* pTargetPeBuf, uint8_t** ppNewPeImageBase, uint8_t** ppNewPeEntryPoint, uint32_t* pdwNewSizeOfImage, uint8_t* pDestPeBuf, uint32_t dwDestPeBufSize, uint64_t qwImplantFlags, uint32_t dwMoatSize);
int32_t BootstrapImports(uint8_t* pMappedPeBase, bool bIatPreInit);