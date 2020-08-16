#pragma once

// ANAREA (4.24) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class PlayFab.PlayFabAdminAPI
// 0x07A0 (0x07C8 - 0x0028)
class UPlayFabAdminAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x728];                                     // 0x0038(0x0728) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0760(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0768(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0770(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0778(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAdminAPI");
		return ptr;
	}


	class UPlayFabAdminAPI* STATIC_UpdateUserTitleDisplayName(struct FAdminUpdateUserTitleDisplayNameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserReadOnlyData(struct FAdminUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherReadOnlyData(struct FAdminUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherInternalData(struct FAdminUpdateUserInternalDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserPublisherData(struct FAdminUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserInternalData(struct FAdminUpdateUserInternalDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateUserData(struct FAdminUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateTask(struct FAdminUpdateTaskRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateStoreItems(struct FAdminUpdateStoreItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateRandomResultTables(struct FAdminUpdateRandomResultTablesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdatePolicy(struct FAdminUpdatePolicyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdatePlayerStatisticDefinition(struct FAdminUpdatePlayerStatisticDefinitionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdatePlayerSharedSecret(struct FAdminUpdatePlayerSharedSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateOpenIdConnection(struct FAdminUpdateOpenIdConnectionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateCloudScript(struct FAdminUpdateCloudScriptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateCatalogItems(struct FAdminUpdateCatalogItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_UpdateBans(struct FAdminUpdateBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SubtractUserVirtualCurrency(struct FAdminSubtractUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetupPushNotification(struct FAdminSetupPushNotificationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetTitleInternalData(struct FAdminSetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetTitleData(struct FAdminSetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetStoreItems(struct FAdminUpdateStoreItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetPublisherData(struct FAdminSetPublisherDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetPublishedRevision(struct FAdminSetPublishedRevisionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetPlayerSecret(struct FAdminSetPlayerSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SetCatalogItems(struct FAdminUpdateCatalogItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_SendAccountRecoveryEmail(struct FAdminSendAccountRecoveryEmailRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RunTask(struct FAdminRunTaskRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RevokeInventoryItems(struct FAdminRevokeInventoryItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RevokeInventoryItem(struct FAdminRevokeInventoryItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RevokeBans(struct FAdminRevokeBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RevokeAllBansForUser(struct FAdminRevokeAllBansForUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ResolvePurchaseDispute(struct FAdminResolvePurchaseDisputeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ResetUserStatistics(struct FAdminResetUserStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ResetPassword(struct FAdminResetPasswordRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ResetCharacterStatistics(struct FAdminResetCharacterStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RemoveVirtualCurrencyTypes(struct FAdminRemoveVirtualCurrencyTypesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RemoveServerBuild(struct FAdminRemoveServerBuildRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RemovePlayerTag(struct FAdminRemovePlayerTagRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_RefundPurchase(struct FAdminRefundPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ModifyServerBuild(struct FAdminModifyServerBuildRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ModifyMatchmakerGameModes(struct FAdminModifyMatchmakerGameModesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ListVirtualCurrencyTypes(struct FAdminListVirtualCurrencyTypesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ListServerBuilds(struct FAdminListBuildsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ListOpenIdConnection(struct FAdminListOpenIdConnectionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_IncrementPlayerStatisticVersion(struct FAdminIncrementPlayerStatisticVersionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_IncrementLimitedEditionItemAvailability(struct FAdminIncrementLimitedEditionItemAvailabilityRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperUpdateUserTitleDisplayName(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateTask(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateStoreItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateRandomResultTables(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdatePolicy(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdatePlayerStatisticDefinition(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdatePlayerSharedSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateOpenIdConnection(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCloudScript(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCatalogItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSubtractUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetupPushNotification(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetTitleInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetTitleData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetStoreItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPublishedRevision(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPlayerSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetCatalogItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendAccountRecoveryEmail(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRunTask(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeInventoryItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeInventoryItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeAllBansForUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperResolvePurchaseDispute(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperResetUserStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperResetPassword(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperResetCharacterStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveVirtualCurrencyTypes(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveServerBuild(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemovePlayerTag(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRefundPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperModifyServerBuild(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperModifyMatchmakerGameModes(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListVirtualCurrencyTypes(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListServerBuilds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListOpenIdConnection(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperIncrementPlayerStatisticVersion(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperIncrementLimitedEditionItemAvailability(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantItemsToUsers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserInventory(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserAccountInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTasks(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTaskInstances(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetStoreItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetServerBuildUploadUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetServerBuildInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetRandomResultTables(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPolicy(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatisticVersions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatisticDefinitions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayersInSegment(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerSharedSecrets(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerSegments(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerProfile(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerIdFromAuthToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayedTitleList(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMatchmakerGameModes(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMatchmakerGameInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetDataReport(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetContentUploadUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetContentList(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCloudScriptVersions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCloudScriptTaskInstance(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCloudScriptRevision(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCatalogItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAllSegments(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetActionsOnPlayersInSegmentTaskInstance(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperExportMasterPlayerData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteTitle(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteTask(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteStore(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeletePlayerSharedSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeletePlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteOpenIdConnection(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteMasterPlayerAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteContent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreatePlayerStatisticDefinition(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreatePlayerSharedSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateOpenIdConnection(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateCloudScriptTask(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateActionsOnPlayersInSegmentTask(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCheckLimitedEditionItemAvailability(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperBanUsers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddVirtualCurrencyTypes(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddServerBuild(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddPlayerTag(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddNews(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddLocalizedNews(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAbortTaskInstance(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabAdminAPI* STATIC_GrantItemsToUsers(struct FAdminGrantItemsToUsersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserReadOnlyData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherReadOnlyData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherInternalData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserPublisherData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserInventory(struct FAdminGetUserInventoryRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserInternalData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserData(struct FAdminGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserBans(struct FAdminGetUserBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetUserAccountInfo(struct FAdminLookupUserAccountInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetTitleInternalData(struct FAdminGetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetTitleData(struct FAdminGetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetTasks(struct FAdminGetTasksRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetTaskInstances(struct FAdminGetTaskInstancesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetStoreItems(struct FAdminGetStoreItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetServerBuildUploadUrl(struct FAdminGetServerBuildUploadURLRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetServerBuildInfo(struct FAdminGetServerBuildInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetRandomResultTables(struct FAdminGetRandomResultTablesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPublisherData(struct FAdminGetPublisherDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPolicy(struct FAdminGetPolicyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerTags(struct FAdminGetPlayerTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerStatisticVersions(struct FAdminGetPlayerStatisticVersionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerStatisticDefinitions(struct FAdminGetPlayerStatisticDefinitionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayersInSegment(struct FAdminGetPlayersInSegmentRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerSharedSecrets(struct FAdminGetPlayerSharedSecretsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerSegments(struct FAdminGetPlayersSegmentsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerProfile(struct FAdminGetPlayerProfileRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayerIdFromAuthToken(struct FAdminGetPlayerIdFromAuthTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetPlayedTitleList(struct FAdminGetPlayedTitleListRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetMatchmakerGameModes(struct FAdminGetMatchmakerGameModesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetMatchmakerGameInfo(struct FAdminGetMatchmakerGameInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetDataReport(struct FAdminGetDataReportRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetContentUploadUrl(struct FAdminGetContentUploadUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetContentList(struct FAdminGetContentListRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptVersions(struct FAdminGetCloudScriptVersionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptTaskInstance(struct FAdminGetTaskInstanceRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetCloudScriptRevision(struct FAdminGetCloudScriptRevisionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetCatalogItems(struct FAdminGetCatalogItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetAllSegments(struct FAdminGetAllSegmentsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_GetActionsOnPlayersInSegmentTaskInstance(struct FAdminGetTaskInstanceRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_ExportMasterPlayerData(struct FAdminExportMasterPlayerDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteTitle(struct FAdminDeleteTitleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteTask(struct FAdminDeleteTaskRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteStore(struct FAdminDeleteStoreRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeletePlayerSharedSecret(struct FAdminDeletePlayerSharedSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeletePlayer(struct FAdminDeletePlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteOpenIdConnection(struct FAdminDeleteOpenIdConnectionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteMasterPlayerAccount(struct FAdminDeleteMasterPlayerAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_DeleteContent(struct FAdminDeleteContentRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(struct FAdminUpdateUserTitleDisplayNameResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(struct FAdminUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateTask__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateStoreItems__DelegateSignature(struct FAdminUpdateStoreItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateRandomResultTables__DelegateSignature(struct FAdminUpdateRandomResultTablesResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdatePolicy__DelegateSignature(struct FAdminUpdatePolicyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdatePlayerStatisticDefinition__DelegateSignature(struct FAdminUpdatePlayerStatisticDefinitionResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdatePlayerSharedSecret__DelegateSignature(struct FAdminUpdatePlayerSharedSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateOpenIdConnection__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCloudScript__DelegateSignature(struct FAdminUpdateCloudScriptResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCatalogItems__DelegateSignature(struct FAdminUpdateCatalogItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(struct FAdminUpdateBansResult* Result, class UObject** customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(struct FAdminModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessSetupPushNotification__DelegateSignature(struct FAdminSetupPushNotificationResult* Result, class UObject** customData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(struct FAdminSetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(struct FAdminSetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetStoreItems__DelegateSignature(struct FAdminUpdateStoreItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(struct FAdminSetPublisherDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPublishedRevision__DelegateSignature(struct FAdminSetPublishedRevisionResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(struct FAdminSetPlayerSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessSetCatalogItems__DelegateSignature(struct FAdminUpdateCatalogItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(struct FAdminSendAccountRecoveryEmailResult* Result, class UObject** customData);
	void DelegateOnSuccessRunTask__DelegateSignature(struct FAdminRunTaskResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(struct FAdminRevokeInventoryItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(struct FAdminRevokeInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(struct FAdminRevokeBansResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(struct FAdminRevokeAllBansForUserResult* Result, class UObject** customData);
	void DelegateOnSuccessResolvePurchaseDispute__DelegateSignature(struct FAdminResolvePurchaseDisputeResponse* Result, class UObject** customData);
	void DelegateOnSuccessResetUserStatistics__DelegateSignature(struct FAdminResetUserStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessResetPassword__DelegateSignature(struct FAdminResetPasswordResult* Result, class UObject** customData);
	void DelegateOnSuccessResetCharacterStatistics__DelegateSignature(struct FAdminResetCharacterStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveVirtualCurrencyTypes__DelegateSignature(struct FAdminBlankResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveServerBuild__DelegateSignature(struct FAdminRemoveServerBuildResult* Result, class UObject** customData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(struct FAdminRemovePlayerTagResult* Result, class UObject** customData);
	void DelegateOnSuccessRefundPurchase__DelegateSignature(struct FAdminRefundPurchaseResponse* Result, class UObject** customData);
	void DelegateOnSuccessModifyServerBuild__DelegateSignature(struct FAdminModifyServerBuildResult* Result, class UObject** customData);
	void DelegateOnSuccessModifyMatchmakerGameModes__DelegateSignature(struct FAdminModifyMatchmakerGameModesResult* Result, class UObject** customData);
	void DelegateOnSuccessListVirtualCurrencyTypes__DelegateSignature(struct FAdminListVirtualCurrencyTypesResult* Result, class UObject** customData);
	void DelegateOnSuccessListServerBuilds__DelegateSignature(struct FAdminListBuildsResult* Result, class UObject** customData);
	void DelegateOnSuccessListOpenIdConnection__DelegateSignature(struct FAdminListOpenIdConnectionResponse* Result, class UObject** customData);
	void DelegateOnSuccessIncrementPlayerStatisticVersion__DelegateSignature(struct FAdminIncrementPlayerStatisticVersionResult* Result, class UObject** customData);
	void DelegateOnSuccessIncrementLimitedEditionItemAvailability__DelegateSignature(struct FAdminIncrementLimitedEditionItemAvailabilityResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(struct FAdminGrantItemsToUsersResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(struct FAdminGetUserInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(struct FAdminGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(struct FAdminGetUserBansResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(struct FAdminLookupUserAccountInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(struct FAdminGetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(struct FAdminGetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTasks__DelegateSignature(struct FAdminGetTasksResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTaskInstances__DelegateSignature(struct FAdminGetTaskInstancesResult* Result, class UObject** customData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(struct FAdminGetStoreItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetServerBuildUploadUrl__DelegateSignature(struct FAdminGetServerBuildUploadURLResult* Result, class UObject** customData);
	void DelegateOnSuccessGetServerBuildInfo__DelegateSignature(struct FAdminGetServerBuildInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(struct FAdminGetRandomResultTablesResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(struct FAdminGetPublisherDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPolicy__DelegateSignature(struct FAdminGetPolicyResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(struct FAdminGetPlayerTagsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(struct FAdminGetPlayerStatisticVersionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatisticDefinitions__DelegateSignature(struct FAdminGetPlayerStatisticDefinitionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(struct FAdminGetPlayersInSegmentResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerSharedSecrets__DelegateSignature(struct FAdminGetPlayerSharedSecretsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(struct FAdminGetPlayerSegmentsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(struct FAdminGetPlayerProfileResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerIdFromAuthToken__DelegateSignature(struct FAdminGetPlayerIdFromAuthTokenResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayedTitleList__DelegateSignature(struct FAdminGetPlayedTitleListResult* Result, class UObject** customData);
	void DelegateOnSuccessGetMatchmakerGameModes__DelegateSignature(struct FAdminGetMatchmakerGameModesResult* Result, class UObject** customData);
	void DelegateOnSuccessGetMatchmakerGameInfo__DelegateSignature(struct FAdminGetMatchmakerGameInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetDataReport__DelegateSignature(struct FAdminGetDataReportResult* Result, class UObject** customData);
	void DelegateOnSuccessGetContentUploadUrl__DelegateSignature(struct FAdminGetContentUploadUrlResult* Result, class UObject** customData);
	void DelegateOnSuccessGetContentList__DelegateSignature(struct FAdminGetContentListResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCloudScriptVersions__DelegateSignature(struct FAdminGetCloudScriptVersionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCloudScriptTaskInstance__DelegateSignature(struct FAdminGetCloudScriptTaskInstanceResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCloudScriptRevision__DelegateSignature(struct FAdminGetCloudScriptRevisionResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(struct FAdminGetCatalogItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(struct FAdminGetAllSegmentsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetActionsOnPlayersInSegmentTaskInstance__DelegateSignature(struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult* Result, class UObject** customData);
	void DelegateOnSuccessExportMasterPlayerData__DelegateSignature(struct FAdminExportMasterPlayerDataResult* Result, class UObject** customData);
	void DelegateOnSuccessDeleteTitle__DelegateSignature(struct FAdminDeleteTitleResult* Result, class UObject** customData);
	void DelegateOnSuccessDeleteTask__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteStore__DelegateSignature(struct FAdminDeleteStoreResult* Result, class UObject** customData);
	void DelegateOnSuccessDeletePlayerSharedSecret__DelegateSignature(struct FAdminDeletePlayerSharedSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(struct FAdminDeletePlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessDeleteOpenIdConnection__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteMasterPlayerAccount__DelegateSignature(struct FAdminDeleteMasterPlayerAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessDeleteContent__DelegateSignature(struct FAdminBlankResult* Result, class UObject** customData);
	void DelegateOnSuccessCreatePlayerStatisticDefinition__DelegateSignature(struct FAdminCreatePlayerStatisticDefinitionResult* Result, class UObject** customData);
	void DelegateOnSuccessCreatePlayerSharedSecret__DelegateSignature(struct FAdminCreatePlayerSharedSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateOpenIdConnection__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateCloudScriptTask__DelegateSignature(struct FAdminCreateTaskResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateActionsOnPlayersInSegmentTask__DelegateSignature(struct FAdminCreateTaskResult* Result, class UObject** customData);
	void DelegateOnSuccessCheckLimitedEditionItemAvailability__DelegateSignature(struct FAdminCheckLimitedEditionItemAvailabilityResult* Result, class UObject** customData);
	void DelegateOnSuccessBanUsers__DelegateSignature(struct FAdminBanUsersResult* Result, class UObject** customData);
	void DelegateOnSuccessAddVirtualCurrencyTypes__DelegateSignature(struct FAdminBlankResult* Result, class UObject** customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(struct FAdminModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessAddServerBuild__DelegateSignature(struct FAdminAddServerBuildResult* Result, class UObject** customData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(struct FAdminAddPlayerTagResult* Result, class UObject** customData);
	void DelegateOnSuccessAddNews__DelegateSignature(struct FAdminAddNewsResult* Result, class UObject** customData);
	void DelegateOnSuccessAddLocalizedNews__DelegateSignature(struct FAdminAddLocalizedNewsResult* Result, class UObject** customData);
	void DelegateOnSuccessAbortTaskInstance__DelegateSignature(struct FAdminEmptyResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CreatePlayerStatisticDefinition(struct FAdminCreatePlayerStatisticDefinitionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CreatePlayerSharedSecret(struct FAdminCreatePlayerSharedSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CreateOpenIdConnection(struct FAdminCreateOpenIdConnectionRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CreateCloudScriptTask(struct FAdminCreateCloudScriptTaskRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CreateActionsOnPlayersInSegmentTask(struct FAdminCreateActionsOnPlayerSegmentTaskRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_CheckLimitedEditionItemAvailability(struct FAdminCheckLimitedEditionItemAvailabilityRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_BanUsers(struct FAdminBanUsersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddVirtualCurrencyTypes(struct FAdminAddVirtualCurrencyTypesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddUserVirtualCurrency(struct FAdminAddUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddServerBuild(struct FAdminAddServerBuildRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddPlayerTag(struct FAdminAddPlayerTagRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddNews(struct FAdminAddNewsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AddLocalizedNews(struct FAdminAddLocalizedNewsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabAdminAPI* STATIC_AbortTaskInstance(struct FAdminAbortTaskInstanceRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabAdminModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabAdminModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAdminModelDecoder");
		return ptr;
	}


	struct FAdminUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateStoreItemsResult STATIC_decodeUpdateStoreItemsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateRandomResultTablesResult STATIC_decodeUpdateRandomResultTablesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdatePolicyResponse STATIC_decodeUpdatePolicyResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdatePlayerStatisticDefinitionResult STATIC_decodeUpdatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdatePlayerSharedSecretResult STATIC_decodeUpdatePlayerSharedSecretResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateCloudScriptResult STATIC_decodeUpdateCloudScriptResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateCatalogItemsResult STATIC_decodeUpdateCatalogItemsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSetupPushNotificationResult STATIC_decodeSetupPushNotificationResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSetPublishedRevisionResult STATIC_decodeSetPublishedRevisionResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject** response);
	struct FAdminSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRunTaskResult STATIC_decodeRunTaskResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject** response);
	struct FAdminResolvePurchaseDisputeResponse STATIC_decodeResolvePurchaseDisputeResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminResetUserStatisticsResult STATIC_decodeResetUserStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminResetPasswordResult STATIC_decodeResetPasswordResultResponse(class UPlayFabJsonObject** response);
	struct FAdminResetCharacterStatisticsResult STATIC_decodeResetCharacterStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRemoveServerBuildResult STATIC_decodeRemoveServerBuildResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject** response);
	struct FAdminRefundPurchaseResponse STATIC_decodeRefundPurchaseResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject** response);
	struct FAdminModifyServerBuildResult STATIC_decodeModifyServerBuildResultResponse(class UPlayFabJsonObject** response);
	struct FAdminModifyMatchmakerGameModesResult STATIC_decodeModifyMatchmakerGameModesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminLookupUserAccountInfoResult STATIC_decodeLookupUserAccountInfoResultResponse(class UPlayFabJsonObject** response);
	struct FAdminListVirtualCurrencyTypesResult STATIC_decodeListVirtualCurrencyTypesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminListOpenIdConnectionResponse STATIC_decodeListOpenIdConnectionResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminListBuildsResult STATIC_decodeListBuildsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminIncrementPlayerStatisticVersionResult STATIC_decodeIncrementPlayerStatisticVersionResultResponse(class UPlayFabJsonObject** response);
	struct FAdminIncrementLimitedEditionItemAvailabilityResult STATIC_decodeIncrementLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetTasksResult STATIC_decodeGetTasksResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetTaskInstancesResult STATIC_decodeGetTaskInstancesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetServerBuildUploadURLResult STATIC_decodeGetServerBuildUploadURLResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetServerBuildInfoResult STATIC_decodeGetServerBuildInfoResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPolicyResponse STATIC_decodeGetPolicyResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerStatisticDefinitionsResult STATIC_decodeGetPlayerStatisticDefinitionsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerSharedSecretsResult STATIC_decodeGetPlayerSharedSecretsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayerIdFromAuthTokenResult STATIC_decodeGetPlayerIdFromAuthTokenResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetPlayedTitleListResult STATIC_decodeGetPlayedTitleListResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetMatchmakerGameModesResult STATIC_decodeGetMatchmakerGameModesResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetMatchmakerGameInfoResult STATIC_decodeGetMatchmakerGameInfoResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetDataReportResult STATIC_decodeGetDataReportResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetContentUploadUrlResult STATIC_decodeGetContentUploadUrlResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetContentListResult STATIC_decodeGetContentListResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetCloudScriptVersionsResult STATIC_decodeGetCloudScriptVersionsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetCloudScriptTaskInstanceResult STATIC_decodeGetCloudScriptTaskInstanceResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetCloudScriptRevisionResult STATIC_decodeGetCloudScriptRevisionResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult STATIC_decodeGetActionsOnPlayersInSegmentTaskInstanceResultResponse(class UPlayFabJsonObject** response);
	struct FAdminExportMasterPlayerDataResult STATIC_decodeExportMasterPlayerDataResultResponse(class UPlayFabJsonObject** response);
	struct FAdminEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject** response);
	struct FAdminDeleteTitleResult STATIC_decodeDeleteTitleResultResponse(class UPlayFabJsonObject** response);
	struct FAdminDeleteStoreResult STATIC_decodeDeleteStoreResultResponse(class UPlayFabJsonObject** response);
	struct FAdminDeletePlayerSharedSecretResult STATIC_decodeDeletePlayerSharedSecretResultResponse(class UPlayFabJsonObject** response);
	struct FAdminDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject** response);
	struct FAdminDeleteMasterPlayerAccountResult STATIC_decodeDeleteMasterPlayerAccountResultResponse(class UPlayFabJsonObject** response);
	struct FAdminCreateTaskResult STATIC_decodeCreateTaskResultResponse(class UPlayFabJsonObject** response);
	struct FAdminCreatePlayerStatisticDefinitionResult STATIC_decodeCreatePlayerStatisticDefinitionResultResponse(class UPlayFabJsonObject** response);
	struct FAdminCreatePlayerSharedSecretResult STATIC_decodeCreatePlayerSharedSecretResultResponse(class UPlayFabJsonObject** response);
	struct FAdminCheckLimitedEditionItemAvailabilityResult STATIC_decodeCheckLimitedEditionItemAvailabilityResultResponse(class UPlayFabJsonObject** response);
	struct FAdminBlankResult STATIC_decodeBlankResultResponse(class UPlayFabJsonObject** response);
	struct FAdminBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject** response);
	struct FAdminAddServerBuildResult STATIC_decodeAddServerBuildResultResponse(class UPlayFabJsonObject** response);
	struct FAdminAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject** response);
	struct FAdminAddNewsResult STATIC_decodeAddNewsResultResponse(class UPlayFabJsonObject** response);
	struct FAdminAddLocalizedNewsResult STATIC_decodeAddLocalizedNewsResultResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabAuthenticationAPI
// 0x00E0 (0x0108 - 0x0028)
class UPlayFabAuthenticationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x68];                                      // 0x0038(0x0068) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAuthenticationAPI");
		return ptr;
	}


	class UPlayFabAuthenticationAPI* STATIC_ValidateEntityToken(struct FAuthenticationValidateEntityTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperValidateEntityToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetEntityToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabAuthenticationAPI* STATIC_GetEntityToken(struct FAuthenticationGetEntityTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessValidateEntityToken__DelegateSignature(struct FAuthenticationValidateEntityTokenResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetEntityToken__DelegateSignature(struct FAuthenticationGetEntityTokenResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
};


// Class PlayFab.PlayFabAuthenticationModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabAuthenticationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabAuthenticationModelDecoder");
		return ptr;
	}


	struct FAuthenticationValidateEntityTokenResponse STATIC_decodeValidateEntityTokenResponseResponse(class UPlayFabJsonObject** response);
	struct FAuthenticationGetEntityTokenResponse STATIC_decodeGetEntityTokenResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabClientAPI
// 0x0A80 (0x0AA8 - 0x0028)
class UPlayFabClientAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0xA08];                                     // 0x0038(0x0A08) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0A40(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0A48(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0A50(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0A58(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabClientAPI");
		return ptr;
	}


	class UPlayFabClientAPI* STATIC_WriteTitleEvent(struct FClientWriteTitleEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_WritePlayerEvent(struct FClientWriteClientPlayerEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_WriteCharacterEvent(struct FClientWriteClientCharacterEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ValidateWindowsStoreReceipt(struct FClientValidateWindowsReceiptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ValidateIOSReceipt(struct FClientValidateIOSReceiptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ValidateGooglePlayPurchase(struct FClientValidateGooglePlayPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ValidateAmazonIAPReceipt(struct FClientValidateAmazonReceiptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateUserTitleDisplayName(struct FClientUpdateUserTitleDisplayNameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateUserPublisherData(struct FClientUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateUserData(struct FClientUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateSharedGroupData(struct FClientUpdateSharedGroupDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdatePlayerStatistics(struct FClientUpdatePlayerStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateCharacterStatistics(struct FClientUpdateCharacterStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateCharacterData(struct FClientUpdateCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UpdateAvatarUrl(struct FClientUpdateAvatarUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlockContainerItem(struct FClientUnlockContainerItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlockContainerInstance(struct FClientUnlockContainerInstanceRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkXboxAccount(struct FClientUnlinkXboxAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkWindowsHello(struct FClientUnlinkWindowsHelloAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkTwitch(struct FClientUnlinkTwitchAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkSteamAccount(struct FClientUnlinkSteamAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkPSNAccount(struct FClientUnlinkPSNAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkOpenIdConnect(struct FClientUninkOpenIdConnectRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkNintendoSwitchDeviceId(struct FClientUnlinkNintendoSwitchDeviceIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkKongregate(struct FClientUnlinkKongregateAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkIOSDeviceID(struct FClientUnlinkIOSDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkGoogleAccount(struct FClientUnlinkGoogleAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkGameCenterAccount(struct FClientUnlinkGameCenterAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkFacebookInstantGamesId(struct FClientUnlinkFacebookInstantGamesIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkFacebookAccount(struct FClientUnlinkFacebookAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkCustomID(struct FClientUnlinkCustomIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_UnlinkAndroidDeviceID(struct FClientUnlinkAndroidDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_SubtractUserVirtualCurrency(struct FClientSubtractUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_StartPurchase(struct FClientStartPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_StartGame(struct FClientStartGameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_SetPlayerSecret(struct FClientSetPlayerSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_SetFriendTags(struct FClientSetFriendTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_SendAccountRecoveryEmail(struct FClientSendAccountRecoveryEmailRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RestoreIOSPurchases(struct FClientRestoreIOSPurchasesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ReportPlayer(struct FClientReportPlayerClientRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ReportDeviceInfo(struct FClientDeviceInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RemoveSharedGroupMembers(struct FClientRemoveSharedGroupMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RemoveGenericID(struct FClientRemoveGenericIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RemoveFriend(struct FClientRemoveFriendRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RemoveContactEmail(struct FClientRemoveContactEmailRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RegisterWithWindowsHello(struct FClientRegisterWithWindowsHelloRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RegisterPlayFabUser(struct FClientRegisterPlayFabUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RegisterForIOSPushNotification(struct FClientRegisterForIOSPushNotificationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RefreshPSNAuthToken(struct FClientRefreshPSNAuthTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_RedeemCoupon(struct FClientRedeemCouponRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_PurchaseItem(struct FClientPurchaseItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_PayForPurchase(struct FClientPayForPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_OpenTrade(struct FClientOpenTradeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_Matchmake(struct FClientMatchmakeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithXbox(struct FClientLoginWithXboxRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithWindowsHello(struct FClientLoginWithWindowsHelloRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithTwitch(struct FClientLoginWithTwitchRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithSteam(struct FClientLoginWithSteamRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithPSN(struct FClientLoginWithPSNRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithPlayFab(struct FClientLoginWithPlayFabRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithOpenIdConnect(struct FClientLoginWithOpenIdConnectRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithNintendoSwitchDeviceId(struct FClientLoginWithNintendoSwitchDeviceIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithKongregate(struct FClientLoginWithKongregateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithIOSDeviceID(struct FClientLoginWithIOSDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithGoogleAccount(struct FClientLoginWithGoogleAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithGameCenter(struct FClientLoginWithGameCenterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithFacebookInstantGamesId(struct FClientLoginWithFacebookInstantGamesIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithFacebook(struct FClientLoginWithFacebookRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithEmailAddress(struct FClientLoginWithEmailAddressRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithCustomID(struct FClientLoginWithCustomIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LoginWithAndroidDeviceID(struct FClientLoginWithAndroidDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkXboxAccount(struct FClientLinkXboxAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkWindowsHello(struct FClientLinkWindowsHelloAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkTwitch(struct FClientLinkTwitchAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkSteamAccount(struct FClientLinkSteamAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkPSNAccount(struct FClientLinkPSNAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkOpenIdConnect(struct FClientLinkOpenIdConnectRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkNintendoSwitchDeviceId(struct FClientLinkNintendoSwitchDeviceIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkKongregate(struct FClientLinkKongregateAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkIOSDeviceID(struct FClientLinkIOSDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkGoogleAccount(struct FClientLinkGoogleAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkGameCenterAccount(struct FClientLinkGameCenterAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkFacebookInstantGamesId(struct FClientLinkFacebookInstantGamesIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkFacebookAccount(struct FClientLinkFacebookAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkCustomID(struct FClientLinkCustomIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_LinkAndroidDeviceID(struct FClientLinkAndroidDeviceIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperWriteTitleEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperWritePlayerEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperWriteCharacterEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperValidateWindowsStoreReceipt(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperValidateIOSReceipt(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperValidateGooglePlayPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperValidateAmazonIAPReceipt(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserTitleDisplayName(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateSharedGroupData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdatePlayerStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateAvatarUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlockContainerItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlockContainerInstance(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkXboxAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkWindowsHello(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkTwitch(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkSteamAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkPSNAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkOpenIdConnect(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkNintendoSwitchDeviceId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkKongregate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkIOSDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkGoogleAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkGameCenterAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkFacebookInstantGamesId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkFacebookAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkCustomID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkAndroidDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSubtractUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperStartPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperStartGame(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPlayerSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetFriendTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendAccountRecoveryEmail(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRestoreIOSPurchases(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperReportPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperReportDeviceInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveSharedGroupMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveGenericID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveFriend(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveContactEmail(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRegisterWithWindowsHello(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRegisterPlayFabUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRegisterForIOSPushNotification(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRefreshPSNAuthToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRedeemCoupon(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperPurchaseItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperPayForPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperOpenTrade(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperMatchmake(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithXbox(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithWindowsHello(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithTwitch(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithSteam(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithPSN(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithPlayFab(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithOpenIdConnect(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithNintendoSwitchDeviceId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithKongregate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithIOSDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithGoogleAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithGameCenter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithFacebookInstantGamesId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithFacebook(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithEmailAddress(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithCustomID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithAndroidDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkXboxAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkWindowsHello(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkTwitch(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkSteamAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkPSNAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkOpenIdConnect(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkNintendoSwitchDeviceId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkKongregate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkIOSDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkGoogleAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkGameCenterAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkFacebookInstantGamesId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkFacebookAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkCustomID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkAndroidDeviceID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantCharacterToUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetWindowsHelloChallenge(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserInventory(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTradeStatus(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitlePublicKey(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleNews(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTime(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetStoreItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetSharedGroupData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromTwitchIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromSteamIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromKongregateIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromGoogleIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromGenericIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromGameCenterIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromFacebookIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerTrades(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatisticVersions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerSegments(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerProfile(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerCombinedInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPhotonAuthenticationToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPaymentToken(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardForUserCharacters(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardAroundPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardAroundCharacter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetGameServerRegions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFriendsList(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFriendLeaderboardAroundPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFriendLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCurrentGames(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetContentDownloadUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterInventory(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCatalogItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAllUsersCharacters(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAccountInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperExecuteCloudScript(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateSharedGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperConsumeXboxEntitlements(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperConsumePSNEntitlements(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperConsumeItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperConfirmPurchase(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCancelTrade(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAttributeInstall(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAndroidDevicePushNotificationRegistration(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddUsernamePassword(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddSharedGroupMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddOrUpdateContactEmail(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddGenericID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddFriend(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAcceptTrade(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabClientAPI* STATIC_GrantCharacterToUser(struct FClientGrantCharacterToUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetWindowsHelloChallenge(struct FClientGetWindowsHelloChallengeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetUserReadOnlyData(struct FClientGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetUserPublisherReadOnlyData(struct FClientGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetUserPublisherData(struct FClientGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetUserInventory(struct FClientGetUserInventoryRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetUserData(struct FClientGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetTradeStatus(struct FClientGetTradeStatusRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetTitlePublicKey(struct FClientGetTitlePublicKeyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetTitleNews(struct FClientGetTitleNewsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetTitleData(struct FClientGetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetTime(struct FClientGetTimeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetStoreItems(struct FClientGetStoreItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetSharedGroupData(struct FClientGetSharedGroupDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPurchase(struct FClientGetPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPublisherData(struct FClientGetPublisherDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(struct FClientGetPlayFabIDsFromXboxLiveIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromTwitchIDs(struct FClientGetPlayFabIDsFromTwitchIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromSteamIDs(struct FClientGetPlayFabIDsFromSteamIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(struct FClientGetPlayFabIDsFromPSNAccountIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromKongregateIDs(struct FClientGetPlayFabIDsFromKongregateIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGoogleIDs(struct FClientGetPlayFabIDsFromGoogleIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGenericIDs(struct FClientGetPlayFabIDsFromGenericIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromGameCenterIDs(struct FClientGetPlayFabIDsFromGameCenterIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayFabIDsFromFacebookIDs(struct FClientGetPlayFabIDsFromFacebookIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerTrades(struct FClientGetPlayerTradesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerTags(struct FClientGetPlayerTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerStatisticVersions(struct FClientGetPlayerStatisticVersionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerStatistics(struct FClientGetPlayerStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerSegments(struct FClientGetPlayerSegmentsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerProfile(struct FClientGetPlayerProfileRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPlayerCombinedInfo(struct FClientGetPlayerCombinedInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPhotonAuthenticationToken(struct FClientGetPhotonAuthenticationTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetPaymentToken(struct FClientGetPaymentTokenRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardForUserCharacters(struct FClientGetLeaderboardForUsersCharactersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardAroundPlayer(struct FClientGetLeaderboardAroundPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboardAroundCharacter(struct FClientGetLeaderboardAroundCharacterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetLeaderboard(struct FClientGetLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetGameServerRegions(struct FClientGameServerRegionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetFriendsList(struct FClientGetFriendsListRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetFriendLeaderboardAroundPlayer(struct FClientGetFriendLeaderboardAroundPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetFriendLeaderboard(struct FClientGetFriendLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCurrentGames(struct FClientCurrentGamesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetContentDownloadUrl(struct FClientGetContentDownloadUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCharacterStatistics(struct FClientGetCharacterStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCharacterReadOnlyData(struct FClientGetCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCharacterLeaderboard(struct FClientGetCharacterLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCharacterInventory(struct FClientGetCharacterInventoryRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCharacterData(struct FClientGetCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetCatalogItems(struct FClientGetCatalogItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetAllUsersCharacters(struct FClientListUsersCharactersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_GetAccountInfo(struct FClientGetAccountInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ExecuteCloudScript(struct FClientExecuteCloudScriptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(struct FClientWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(struct FClientWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(struct FClientWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessValidateWindowsStoreReceipt__DelegateSignature(struct FClientValidateWindowsReceiptResult* Result, class UObject** customData);
	void DelegateOnSuccessValidateIOSReceipt__DelegateSignature(struct FClientValidateIOSReceiptResult* Result, class UObject** customData);
	void DelegateOnSuccessValidateGooglePlayPurchase__DelegateSignature(struct FClientValidateGooglePlayPurchaseResult* Result, class UObject** customData);
	void DelegateOnSuccessValidateAmazonIAPReceipt__DelegateSignature(struct FClientValidateAmazonReceiptResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserTitleDisplayName__DelegateSignature(struct FClientUpdateUserTitleDisplayNameResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(struct FClientUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(struct FClientUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(struct FClientUpdateSharedGroupDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(struct FClientUpdatePlayerStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(struct FClientUpdateCharacterStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(struct FClientUpdateCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(struct FClientEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(struct FClientUnlockContainerItemResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(struct FClientUnlockContainerItemResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(struct FClientUnlinkXboxAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkWindowsHello__DelegateSignature(struct FClientUnlinkWindowsHelloAccountResponse* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkTwitch__DelegateSignature(struct FClientUnlinkTwitchAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkSteamAccount__DelegateSignature(struct FClientUnlinkSteamAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(struct FClientUnlinkPSNAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkOpenIdConnect__DelegateSignature(struct FClientEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkNintendoSwitchDeviceId__DelegateSignature(struct FClientUnlinkNintendoSwitchDeviceIdResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkKongregate__DelegateSignature(struct FClientUnlinkKongregateAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkIOSDeviceID__DelegateSignature(struct FClientUnlinkIOSDeviceIDResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkGoogleAccount__DelegateSignature(struct FClientUnlinkGoogleAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkGameCenterAccount__DelegateSignature(struct FClientUnlinkGameCenterAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkFacebookInstantGamesId__DelegateSignature(struct FClientUnlinkFacebookInstantGamesIdResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkFacebookAccount__DelegateSignature(struct FClientUnlinkFacebookAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkCustomID__DelegateSignature(struct FClientUnlinkCustomIDResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkAndroidDeviceID__DelegateSignature(struct FClientUnlinkAndroidDeviceIDResult* Result, class UObject** customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(struct FClientModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessStartPurchase__DelegateSignature(struct FClientStartPurchaseResult* Result, class UObject** customData);
	void DelegateOnSuccessStartGame__DelegateSignature(struct FClientStartGameResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(struct FClientSetPlayerSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(struct FClientSetFriendTagsResult* Result, class UObject** customData);
	void DelegateOnSuccessSendAccountRecoveryEmail__DelegateSignature(struct FClientSendAccountRecoveryEmailResult* Result, class UObject** customData);
	void DelegateOnSuccessRestoreIOSPurchases__DelegateSignature(struct FClientRestoreIOSPurchasesResult* Result, class UObject** customData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(struct FClientReportPlayerClientResult* Result, class UObject** customData);
	void DelegateOnSuccessReportDeviceInfo__DelegateSignature(struct FClientEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(struct FClientRemoveSharedGroupMembersResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(struct FClientRemoveGenericIDResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(struct FClientRemoveFriendResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveContactEmail__DelegateSignature(struct FClientRemoveContactEmailResult* Result, class UObject** customData);
	void DelegateOnSuccessRegisterWithWindowsHello__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessRegisterPlayFabUser__DelegateSignature(struct FClientRegisterPlayFabUserResult* Result, class UObject** customData);
	void DelegateOnSuccessRegisterForIOSPushNotification__DelegateSignature(struct FClientRegisterForIOSPushNotificationResult* Result, class UObject** customData);
	void DelegateOnSuccessRefreshPSNAuthToken__DelegateSignature(struct FClientEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(struct FClientRedeemCouponResult* Result, class UObject** customData);
	void DelegateOnSuccessPurchaseItem__DelegateSignature(struct FClientPurchaseItemResult* Result, class UObject** customData);
	void DelegateOnSuccessPayForPurchase__DelegateSignature(struct FClientPayForPurchaseResult* Result, class UObject** customData);
	void DelegateOnSuccessOpenTrade__DelegateSignature(struct FClientOpenTradeResponse* Result, class UObject** customData);
	void DelegateOnSuccessMatchmake__DelegateSignature(struct FClientMatchmakeResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithWindowsHello__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithTwitch__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithSteam__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithPSN__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithPlayFab__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithOpenIdConnect__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithNintendoSwitchDeviceId__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithKongregate__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithIOSDeviceID__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithGoogleAccount__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithGameCenter__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithFacebookInstantGamesId__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithFacebook__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithEmailAddress__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithCustomID__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithAndroidDeviceID__DelegateSignature(struct FClientLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(struct FClientLinkXboxAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkWindowsHello__DelegateSignature(struct FClientLinkWindowsHelloAccountResponse* Result, class UObject** customData);
	void DelegateOnSuccessLinkTwitch__DelegateSignature(struct FClientLinkTwitchAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkSteamAccount__DelegateSignature(struct FClientLinkSteamAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkPSNAccount__DelegateSignature(struct FClientLinkPSNAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkOpenIdConnect__DelegateSignature(struct FClientEmptyResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkNintendoSwitchDeviceId__DelegateSignature(struct FClientLinkNintendoSwitchDeviceIdResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkKongregate__DelegateSignature(struct FClientLinkKongregateAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkIOSDeviceID__DelegateSignature(struct FClientLinkIOSDeviceIDResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkGoogleAccount__DelegateSignature(struct FClientLinkGoogleAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkGameCenterAccount__DelegateSignature(struct FClientLinkGameCenterAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkFacebookInstantGamesId__DelegateSignature(struct FClientLinkFacebookInstantGamesIdResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkFacebookAccount__DelegateSignature(struct FClientLinkFacebookAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkCustomID__DelegateSignature(struct FClientLinkCustomIDResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkAndroidDeviceID__DelegateSignature(struct FClientLinkAndroidDeviceIDResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(struct FClientGrantCharacterToUserResult* Result, class UObject** customData);
	void DelegateOnSuccessGetWindowsHelloChallenge__DelegateSignature(struct FClientGetWindowsHelloChallengeResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(struct FClientGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(struct FClientGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(struct FClientGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(struct FClientGetUserInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(struct FClientGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTradeStatus__DelegateSignature(struct FClientGetTradeStatusResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetTitlePublicKey__DelegateSignature(struct FClientGetTitlePublicKeyResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(struct FClientGetTitleNewsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(struct FClientGetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTime__DelegateSignature(struct FClientGetTimeResult* Result, class UObject** customData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(struct FClientGetStoreItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(struct FClientGetSharedGroupDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPurchase__DelegateSignature(struct FClientGetPurchaseResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(struct FClientGetPublisherDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(struct FClientGetPlayFabIDsFromXboxLiveIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromTwitchIDs__DelegateSignature(struct FClientGetPlayFabIDsFromTwitchIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(struct FClientGetPlayFabIDsFromSteamIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(struct FClientGetPlayFabIDsFromPSNAccountIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromKongregateIDs__DelegateSignature(struct FClientGetPlayFabIDsFromKongregateIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromGoogleIDs__DelegateSignature(struct FClientGetPlayFabIDsFromGoogleIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(struct FClientGetPlayFabIDsFromGenericIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromGameCenterIDs__DelegateSignature(struct FClientGetPlayFabIDsFromGameCenterIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(struct FClientGetPlayFabIDsFromFacebookIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerTrades__DelegateSignature(struct FClientGetPlayerTradesResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(struct FClientGetPlayerTagsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(struct FClientGetPlayerStatisticVersionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(struct FClientGetPlayerStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(struct FClientGetPlayerSegmentsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(struct FClientGetPlayerProfileResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(struct FClientGetPlayerCombinedInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPhotonAuthenticationToken__DelegateSignature(struct FClientGetPhotonAuthenticationTokenResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPaymentToken__DelegateSignature(struct FClientGetPaymentTokenResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(struct FClientGetLeaderboardForUsersCharactersResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardAroundPlayer__DelegateSignature(struct FClientGetLeaderboardAroundPlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(struct FClientGetLeaderboardAroundCharacterResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(struct FClientGetLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetGameServerRegions__DelegateSignature(struct FClientGameServerRegionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(struct FClientGetFriendsListResult* Result, class UObject** customData);
	void DelegateOnSuccessGetFriendLeaderboardAroundPlayer__DelegateSignature(struct FClientGetFriendLeaderboardAroundPlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(struct FClientGetLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCurrentGames__DelegateSignature(struct FClientCurrentGamesResult* Result, class UObject** customData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(struct FClientGetContentDownloadUrlResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(struct FClientGetCharacterStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(struct FClientGetCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(struct FClientGetCharacterLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(struct FClientGetCharacterInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(struct FClientGetCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(struct FClientGetCatalogItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(struct FClientListUsersCharactersResult* Result, class UObject** customData);
	void DelegateOnSuccessGetAccountInfo__DelegateSignature(struct FClientGetAccountInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(struct FClientExecuteCloudScriptResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(struct FClientCreateSharedGroupResult* Result, class UObject** customData);
	void DelegateOnSuccessConsumeXboxEntitlements__DelegateSignature(struct FClientConsumeXboxEntitlementsResult* Result, class UObject** customData);
	void DelegateOnSuccessConsumePSNEntitlements__DelegateSignature(struct FClientConsumePSNEntitlementsResult* Result, class UObject** customData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(struct FClientConsumeItemResult* Result, class UObject** customData);
	void DelegateOnSuccessConfirmPurchase__DelegateSignature(struct FClientConfirmPurchaseResult* Result, class UObject** customData);
	void DelegateOnSuccessCancelTrade__DelegateSignature(struct FClientCancelTradeResponse* Result, class UObject** customData);
	void DelegateOnSuccessAttributeInstall__DelegateSignature(struct FClientAttributeInstallResult* Result, class UObject** customData);
	void DelegateOnSuccessAndroidDevicePushNotificationRegistration__DelegateSignature(struct FClientAndroidDevicePushNotificationRegistrationResult* Result, class UObject** customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(struct FClientModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessAddUsernamePassword__DelegateSignature(struct FClientAddUsernamePasswordResult* Result, class UObject** customData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(struct FClientAddSharedGroupMembersResult* Result, class UObject** customData);
	void DelegateOnSuccessAddOrUpdateContactEmail__DelegateSignature(struct FClientAddOrUpdateContactEmailResult* Result, class UObject** customData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(struct FClientAddGenericIDResult* Result, class UObject** customData);
	void DelegateOnSuccessAddFriend__DelegateSignature(struct FClientAddFriendResult* Result, class UObject** customData);
	void DelegateOnSuccessAcceptTrade__DelegateSignature(struct FClientAcceptTradeResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabClientAPI* STATIC_CreateSharedGroup(struct FClientCreateSharedGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ConsumeXboxEntitlements(struct FClientConsumeXboxEntitlementsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ConsumePSNEntitlements(struct FClientConsumePSNEntitlementsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ConsumeItem(struct FClientConsumeItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_ConfirmPurchase(struct FClientConfirmPurchaseRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_CancelTrade(struct FClientCancelTradeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AttributeInstall(struct FClientAttributeInstallRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AndroidDevicePushNotificationRegistration(struct FClientAndroidDevicePushNotificationRegistrationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddUserVirtualCurrency(struct FClientAddUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddUsernamePassword(struct FClientAddUsernamePasswordRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddSharedGroupMembers(struct FClientAddSharedGroupMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddOrUpdateContactEmail(struct FClientAddOrUpdateContactEmailRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddGenericID(struct FClientAddGenericIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AddFriend(struct FClientAddFriendRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabClientAPI* STATIC_AcceptTrade(struct FClientAcceptTradeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabClientModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabClientModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabClientModelDecoder");
		return ptr;
	}


	struct FClientWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject** response);
	struct FClientValidateWindowsReceiptResult STATIC_decodeValidateWindowsReceiptResultResponse(class UPlayFabJsonObject** response);
	struct FClientValidateIOSReceiptResult STATIC_decodeValidateIOSReceiptResultResponse(class UPlayFabJsonObject** response);
	struct FClientValidateGooglePlayPurchaseResult STATIC_decodeValidateGooglePlayPurchaseResultResponse(class UPlayFabJsonObject** response);
	struct FClientValidateAmazonReceiptResult STATIC_decodeValidateAmazonReceiptResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdateUserTitleDisplayNameResult STATIC_decodeUpdateUserTitleDisplayNameResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FClientUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkWindowsHelloAccountResponse STATIC_decodeUnlinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkTwitchAccountResult STATIC_decodeUnlinkTwitchAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkSteamAccountResult STATIC_decodeUnlinkSteamAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkPSNAccountResult STATIC_decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkNintendoSwitchDeviceIdResult STATIC_decodeUnlinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkKongregateAccountResult STATIC_decodeUnlinkKongregateAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkIOSDeviceIDResult STATIC_decodeUnlinkIOSDeviceIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkGoogleAccountResult STATIC_decodeUnlinkGoogleAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkGameCenterAccountResult STATIC_decodeUnlinkGameCenterAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkFacebookInstantGamesIdResult STATIC_decodeUnlinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkFacebookAccountResult STATIC_decodeUnlinkFacebookAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkCustomIDResult STATIC_decodeUnlinkCustomIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientUnlinkAndroidDeviceIDResult STATIC_decodeUnlinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientStartPurchaseResult STATIC_decodeStartPurchaseResultResponse(class UPlayFabJsonObject** response);
	struct FClientStartGameResult STATIC_decodeStartGameResultResponse(class UPlayFabJsonObject** response);
	struct FClientSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject** response);
	struct FClientSetFriendTagsResult STATIC_decodeSetFriendTagsResultResponse(class UPlayFabJsonObject** response);
	struct FClientSendAccountRecoveryEmailResult STATIC_decodeSendAccountRecoveryEmailResultResponse(class UPlayFabJsonObject** response);
	struct FClientRestoreIOSPurchasesResult STATIC_decodeRestoreIOSPurchasesResultResponse(class UPlayFabJsonObject** response);
	struct FClientReportPlayerClientResult STATIC_decodeReportPlayerClientResultResponse(class UPlayFabJsonObject** response);
	struct FClientRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject** response);
	struct FClientRemoveGenericIDResult STATIC_decodeRemoveGenericIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientRemoveFriendResult STATIC_decodeRemoveFriendResultResponse(class UPlayFabJsonObject** response);
	struct FClientRemoveContactEmailResult STATIC_decodeRemoveContactEmailResultResponse(class UPlayFabJsonObject** response);
	struct FClientRegisterPlayFabUserResult STATIC_decodeRegisterPlayFabUserResultResponse(class UPlayFabJsonObject** response);
	struct FClientRegisterForIOSPushNotificationResult STATIC_decodeRegisterForIOSPushNotificationResultResponse(class UPlayFabJsonObject** response);
	struct FClientRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject** response);
	struct FClientPurchaseItemResult STATIC_decodePurchaseItemResultResponse(class UPlayFabJsonObject** response);
	struct FClientPayForPurchaseResult STATIC_decodePayForPurchaseResultResponse(class UPlayFabJsonObject** response);
	struct FClientOpenTradeResponse STATIC_decodeOpenTradeResponseResponse(class UPlayFabJsonObject** response);
	struct FClientModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject** response);
	struct FClientMatchmakeResult STATIC_decodeMatchmakeResultResponse(class UPlayFabJsonObject** response);
	struct FClientLoginResult STATIC_decodeLoginResultResponse(class UPlayFabJsonObject** response);
	struct FClientListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkWindowsHelloAccountResponse STATIC_decodeLinkWindowsHelloAccountResponseResponse(class UPlayFabJsonObject** response);
	struct FClientLinkTwitchAccountResult STATIC_decodeLinkTwitchAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkSteamAccountResult STATIC_decodeLinkSteamAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkPSNAccountResult STATIC_decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkNintendoSwitchDeviceIdResult STATIC_decodeLinkNintendoSwitchDeviceIdResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkKongregateAccountResult STATIC_decodeLinkKongregateAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkIOSDeviceIDResult STATIC_decodeLinkIOSDeviceIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkGoogleAccountResult STATIC_decodeLinkGoogleAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkGameCenterAccountResult STATIC_decodeLinkGameCenterAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkFacebookInstantGamesIdResult STATIC_decodeLinkFacebookInstantGamesIdResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkFacebookAccountResult STATIC_decodeLinkFacebookAccountResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkCustomIDResult STATIC_decodeLinkCustomIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientLinkAndroidDeviceIDResult STATIC_decodeLinkAndroidDeviceIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetWindowsHelloChallengeResponse STATIC_decodeGetWindowsHelloChallengeResponseResponse(class UPlayFabJsonObject** response);
	struct FClientGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetTradeStatusResponse STATIC_decodeGetTradeStatusResponseResponse(class UPlayFabJsonObject** response);
	struct FClientGetTitlePublicKeyResult STATIC_decodeGetTitlePublicKeyResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPurchaseResult STATIC_decodeGetPurchaseResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromTwitchIDsResult STATIC_decodeGetPlayFabIDsFromTwitchIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromKongregateIDsResult STATIC_decodeGetPlayFabIDsFromKongregateIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromGoogleIDsResult STATIC_decodeGetPlayFabIDsFromGoogleIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromGameCenterIDsResult STATIC_decodeGetPlayFabIDsFromGameCenterIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerTradesResponse STATIC_decodeGetPlayerTradesResponseResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPhotonAuthenticationTokenResult STATIC_decodeGetPhotonAuthenticationTokenResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetPaymentTokenResult STATIC_decodeGetPaymentTokenResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetLeaderboardAroundPlayerResult STATIC_decodeGetLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetFriendLeaderboardAroundPlayerResult STATIC_decodeGetFriendLeaderboardAroundPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject** response);
	struct FClientGetAccountInfoResult STATIC_decodeGetAccountInfoResultResponse(class UPlayFabJsonObject** response);
	struct FClientGameServerRegionsResult STATIC_decodeGameServerRegionsResultResponse(class UPlayFabJsonObject** response);
	struct FClientExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject** response);
	struct FClientEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject** response);
	struct FClientEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject** response);
	struct FClientCurrentGamesResult STATIC_decodeCurrentGamesResultResponse(class UPlayFabJsonObject** response);
	struct FClientCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject** response);
	struct FClientConsumeXboxEntitlementsResult STATIC_decodeConsumeXboxEntitlementsResultResponse(class UPlayFabJsonObject** response);
	struct FClientConsumePSNEntitlementsResult STATIC_decodeConsumePSNEntitlementsResultResponse(class UPlayFabJsonObject** response);
	struct FClientConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject** response);
	struct FClientConfirmPurchaseResult STATIC_decodeConfirmPurchaseResultResponse(class UPlayFabJsonObject** response);
	struct FClientCancelTradeResponse STATIC_decodeCancelTradeResponseResponse(class UPlayFabJsonObject** response);
	struct FClientAttributeInstallResult STATIC_decodeAttributeInstallResultResponse(class UPlayFabJsonObject** response);
	struct FClientAndroidDevicePushNotificationRegistrationResult STATIC_decodeAndroidDevicePushNotificationRegistrationResultResponse(class UPlayFabJsonObject** response);
	struct FClientAddUsernamePasswordResult STATIC_decodeAddUsernamePasswordResultResponse(class UPlayFabJsonObject** response);
	struct FClientAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject** response);
	struct FClientAddOrUpdateContactEmailResult STATIC_decodeAddOrUpdateContactEmailResultResponse(class UPlayFabJsonObject** response);
	struct FClientAddGenericIDResult STATIC_decodeAddGenericIDResultResponse(class UPlayFabJsonObject** response);
	struct FClientAddFriendResult STATIC_decodeAddFriendResultResponse(class UPlayFabJsonObject** response);
	struct FClientAcceptTradeResponse STATIC_decodeAcceptTradeResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabCloudScriptAPI
// 0x00E0 (0x0108 - 0x0028)
class UPlayFabCloudScriptAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x68];                                      // 0x0038(0x0068) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabCloudScriptAPI");
		return ptr;
	}


	void HelperExecuteEntityCloudScript(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabCloudScriptAPI* STATIC_ExecuteEntityCloudScript(struct FCloudScriptExecuteEntityCloudScriptRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessExecuteEntityCloudScript__DelegateSignature(struct FCloudScriptExecuteCloudScriptResult* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
};


// Class PlayFab.PlayFabCloudScriptModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabCloudScriptModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabCloudScriptModelDecoder");
		return ptr;
	}


	struct FCloudScriptExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabDataAPI
// 0x0130 (0x0158 - 0x0028)
class UPlayFabDataAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabDataAPI");
		return ptr;
	}


	class UPlayFabDataAPI* STATIC_SetObjects(struct FDataSetObjectsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabDataAPI* STATIC_InitiateFileUploads(struct FDataInitiateFileUploadsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperSetObjects(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperInitiateFileUploads(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetObjects(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFiles(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperFinalizeFileUploads(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteFiles(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAbortFileUploads(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabDataAPI* STATIC_GetObjects(struct FDataGetObjectsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabDataAPI* STATIC_GetFiles(struct FDataGetFilesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabDataAPI* STATIC_FinalizeFileUploads(struct FDataFinalizeFileUploadsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabDataAPI* STATIC_DeleteFiles(struct FDataDeleteFilesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessSetObjects__DelegateSignature(struct FDataSetObjectsResponse* Result, class UObject** customData);
	void DelegateOnSuccessInitiateFileUploads__DelegateSignature(struct FDataInitiateFileUploadsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetObjects__DelegateSignature(struct FDataGetObjectsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetFiles__DelegateSignature(struct FDataGetFilesResponse* Result, class UObject** customData);
	void DelegateOnSuccessFinalizeFileUploads__DelegateSignature(struct FDataFinalizeFileUploadsResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteFiles__DelegateSignature(struct FDataDeleteFilesResponse* Result, class UObject** customData);
	void DelegateOnSuccessAbortFileUploads__DelegateSignature(struct FDataAbortFileUploadsResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabDataAPI* STATIC_AbortFileUploads(struct FDataAbortFileUploadsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabDataModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabDataModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabDataModelDecoder");
		return ptr;
	}


	struct FDataSetObjectsResponse STATIC_decodeSetObjectsResponseResponse(class UPlayFabJsonObject** response);
	struct FDataInitiateFileUploadsResponse STATIC_decodeInitiateFileUploadsResponseResponse(class UPlayFabJsonObject** response);
	struct FDataGetObjectsResponse STATIC_decodeGetObjectsResponseResponse(class UPlayFabJsonObject** response);
	struct FDataGetFilesResponse STATIC_decodeGetFilesResponseResponse(class UPlayFabJsonObject** response);
	struct FDataFinalizeFileUploadsResponse STATIC_decodeFinalizeFileUploadsResponseResponse(class UPlayFabJsonObject** response);
	struct FDataDeleteFilesResponse STATIC_decodeDeleteFilesResponseResponse(class UPlayFabJsonObject** response);
	struct FDataAbortFileUploadsResponse STATIC_decodeAbortFileUploadsResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabEventsAPI
// 0x00E0 (0x0108 - 0x0028)
class UPlayFabEventsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x68];                                      // 0x0038(0x0068) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00A8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00B0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00B8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabEventsAPI");
		return ptr;
	}


	class UPlayFabEventsAPI* STATIC_WriteTelemetryEvents(struct FEventsWriteEventsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabEventsAPI* STATIC_WriteEvents(struct FEventsWriteEventsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperWriteTelemetryEvents(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperWriteEvents(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void DelegateOnSuccessWriteTelemetryEvents__DelegateSignature(struct FEventsWriteEventsResponse* Result, class UObject** customData);
	void DelegateOnSuccessWriteEvents__DelegateSignature(struct FEventsWriteEventsResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
};


// Class PlayFab.PlayFabEventsModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabEventsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabEventsModelDecoder");
		return ptr;
	}


	struct FEventsWriteEventsResponse STATIC_decodeWriteEventsResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabGroupsAPI
// 0x0250 (0x0278 - 0x0028)
class UPlayFabGroupsAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x1D8];                                     // 0x0038(0x01D8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0210(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0218(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0220(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0228(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabGroupsAPI");
		return ptr;
	}


	class UPlayFabGroupsAPI* STATIC_UpdateRole(struct FGroupsUpdateGroupRoleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_UpdateGroup(struct FGroupsUpdateGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_UnblockEntity(struct FGroupsUnblockEntityRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_RemoveMembers(struct FGroupsRemoveMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_RemoveGroupInvitation(struct FGroupsRemoveGroupInvitationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_RemoveGroupApplication(struct FGroupsRemoveGroupApplicationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListMembershipOpportunities(struct FGroupsListMembershipOpportunitiesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListMembership(struct FGroupsListMembershipRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupMembers(struct FGroupsListGroupMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupInvitations(struct FGroupsListGroupInvitationsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupBlocks(struct FGroupsListGroupBlocksRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ListGroupApplications(struct FGroupsListGroupApplicationsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_IsMember(struct FGroupsIsMemberRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_InviteToGroup(struct FGroupsInviteToGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperUpdateRole(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnblockEntity(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveGroupInvitation(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveGroupApplication(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListMembershipOpportunities(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListMembership(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListGroupMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListGroupInvitations(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListGroupBlocks(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListGroupApplications(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperIsMember(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperInviteToGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteRole(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateRole(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperChangeMemberRole(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperBlockEntity(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperApplyToGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAcceptGroupInvitation(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAcceptGroupApplication(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabGroupsAPI* STATIC_GetGroup(struct FGroupsGetGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_DeleteRole(struct FGroupsDeleteRoleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_DeleteGroup(struct FGroupsDeleteGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessUpdateRole__DelegateSignature(struct FGroupsUpdateGroupRoleResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateGroup__DelegateSignature(struct FGroupsUpdateGroupResponse* Result, class UObject** customData);
	void DelegateOnSuccessUnblockEntity__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRemoveMembers__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRemoveGroupInvitation__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRemoveGroupApplication__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessListMembershipOpportunities__DelegateSignature(struct FGroupsListMembershipOpportunitiesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListMembership__DelegateSignature(struct FGroupsListMembershipResponse* Result, class UObject** customData);
	void DelegateOnSuccessListGroupMembers__DelegateSignature(struct FGroupsListGroupMembersResponse* Result, class UObject** customData);
	void DelegateOnSuccessListGroupInvitations__DelegateSignature(struct FGroupsListGroupInvitationsResponse* Result, class UObject** customData);
	void DelegateOnSuccessListGroupBlocks__DelegateSignature(struct FGroupsListGroupBlocksResponse* Result, class UObject** customData);
	void DelegateOnSuccessListGroupApplications__DelegateSignature(struct FGroupsListGroupApplicationsResponse* Result, class UObject** customData);
	void DelegateOnSuccessIsMember__DelegateSignature(struct FGroupsIsMemberResponse* Result, class UObject** customData);
	void DelegateOnSuccessInviteToGroup__DelegateSignature(struct FGroupsInviteToGroupResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetGroup__DelegateSignature(struct FGroupsGetGroupResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteRole__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteGroup__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateRole__DelegateSignature(struct FGroupsCreateGroupRoleResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateGroup__DelegateSignature(struct FGroupsCreateGroupResponse* Result, class UObject** customData);
	void DelegateOnSuccessChangeMemberRole__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessBlockEntity__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessApplyToGroup__DelegateSignature(struct FGroupsApplyToGroupResponse* Result, class UObject** customData);
	void DelegateOnSuccessAddMembers__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessAcceptGroupInvitation__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessAcceptGroupApplication__DelegateSignature(struct FGroupsEmptyResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_CreateRole(struct FGroupsCreateGroupRoleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_CreateGroup(struct FGroupsCreateGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ChangeMemberRole(struct FGroupsChangeMemberRoleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_BlockEntity(struct FGroupsBlockEntityRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_ApplyToGroup(struct FGroupsApplyToGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_AddMembers(struct FGroupsAddMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_AcceptGroupInvitation(struct FGroupsAcceptGroupInvitationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabGroupsAPI* STATIC_AcceptGroupApplication(struct FGroupsAcceptGroupApplicationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabGroupsModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabGroupsModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabGroupsModelDecoder");
		return ptr;
	}


	struct FGroupsUpdateGroupRoleResponse STATIC_decodeUpdateGroupRoleResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsUpdateGroupResponse STATIC_decodeUpdateGroupResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListMembershipResponse STATIC_decodeListMembershipResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListMembershipOpportunitiesResponse STATIC_decodeListMembershipOpportunitiesResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListGroupMembersResponse STATIC_decodeListGroupMembersResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListGroupInvitationsResponse STATIC_decodeListGroupInvitationsResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListGroupBlocksResponse STATIC_decodeListGroupBlocksResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsListGroupApplicationsResponse STATIC_decodeListGroupApplicationsResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsIsMemberResponse STATIC_decodeIsMemberResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsInviteToGroupResponse STATIC_decodeInviteToGroupResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsGetGroupResponse STATIC_decodeGetGroupResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsCreateGroupRoleResponse STATIC_decodeCreateGroupRoleResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsCreateGroupResponse STATIC_decodeCreateGroupResponseResponse(class UPlayFabJsonObject** response);
	struct FGroupsApplyToGroupResponse STATIC_decodeApplyToGroupResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabJsonObject
// 0x0010 (0x0038 - 0x0028)
class UPlayFabJsonObject : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabJsonObject");
		return ptr;
	}


	void SetStringField(struct FString* FieldName, struct FString* StringValue);
	void SetStringArrayField(struct FString* FieldName, TArray<struct FString>* StringArray);
	void SetObjectField(struct FString* FieldName, class UPlayFabJsonObject** JsonObject);
	void SetObjectArrayField(struct FString* FieldName, TArray<class UPlayFabJsonObject*>* ObjectArray);
	void SetNumberField(struct FString* FieldName, float* Number);
	void SetNumberArrayField(struct FString* FieldName, TArray<float>* NumberArray);
	void SetFieldNull(struct FString* FieldName);
	void SetField(struct FString* FieldName, class UPlayFabJsonValue** JsonValue);
	void SetBoolField(struct FString* FieldName, bool* InValue);
	void SetBoolArrayField(struct FString* FieldName, TArray<unsigned char>* BoolArray);
	void SetArrayField(struct FString* FieldName, TArray<class UPlayFabJsonValue*>* inArray);
	void Reset();
	void RemoveField(struct FString* FieldName);
	void MergeJsonObject(class UPlayFabJsonObject** InJsonObject, bool* Overwrite);
	bool HasField(struct FString* FieldName);
	struct FString GetStringField(struct FString* FieldName);
	TArray<struct FString> GetStringArrayField(struct FString* FieldName);
	class UPlayFabJsonObject* GetObjectField(struct FString* FieldName);
	TArray<class UPlayFabJsonObject*> GetObjectArrayField(struct FString* FieldName);
	float GetNumberField(struct FString* FieldName);
	TArray<float> GetNumberArrayField(struct FString* FieldName);
	TArray<struct FString> GetFieldNames();
	class UPlayFabJsonValue* GetField(struct FString* FieldName);
	bool GetBoolField(struct FString* FieldName);
	TArray<unsigned char> GetBoolArrayField(struct FString* FieldName);
	TArray<class UPlayFabJsonValue*> GetArrayField(struct FString* FieldName);
	struct FString EncodeJson();
	bool DecodeJson(struct FString* JsonString);
	class UPlayFabJsonObject* STATIC_ConstructJsonObject(class UObject** WorldContextObject);
};


// Class PlayFab.PlayFabJsonValue
// 0x0010 (0x0038 - 0x0028)
class UPlayFabJsonValue : public UObject
{
public:
	unsigned char                                      UnknownData00[0x10];                                      // 0x0028(0x0010) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabJsonValue");
		return ptr;
	}


	bool IsNull();
	struct FString GetTypeString();
	TEnumAsByte<EPFJson> GetType();
	class UPlayFabJsonValue* STATIC_ConstructJsonValueString(class UObject** WorldContextObject, struct FString* StringValue);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueObject(class UObject** WorldContextObject, class UPlayFabJsonObject** JsonObject);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueNumber(class UObject** WorldContextObject, float* Number);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueBool(class UObject** WorldContextObject, bool* InValue);
	class UPlayFabJsonValue* STATIC_ConstructJsonValueArray(class UObject** WorldContextObject, TArray<class UPlayFabJsonValue*>* inArray);
	struct FString AsString();
	class UPlayFabJsonObject* AsObject();
	float AsNumber();
	bool AsBool();
	TArray<class UPlayFabJsonValue*> AsArray();
};


// Class PlayFab.PlayFabLocalizationAPI
// 0x00D0 (0x00F8 - 0x0028)
class UPlayFabLocalizationAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x58];                                      // 0x0038(0x0058) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x0090(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x0098(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00A0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00A8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabLocalizationAPI");
		return ptr;
	}


	void HelperGetLanguageList(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabLocalizationAPI* STATIC_GetLanguageList(struct FLocalizationGetLanguageListRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessGetLanguageList__DelegateSignature(struct FLocalizationGetLanguageListResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
};


// Class PlayFab.PlayFabLocalizationModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabLocalizationModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabLocalizationModelDecoder");
		return ptr;
	}


	struct FLocalizationGetLanguageListResponse STATIC_decodeGetLanguageListResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabMatchmakerAPI
// 0x0110 (0x0138 - 0x0028)
class UPlayFabMatchmakerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x98];                                      // 0x0038(0x0098) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00D0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00D8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x00E0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x00E8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMatchmakerAPI");
		return ptr;
	}


	class UPlayFabMatchmakerAPI* STATIC_UserInfo(struct FMatchmakerUserInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMatchmakerAPI* STATIC_StartGame(struct FMatchmakerStartGameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMatchmakerAPI* STATIC_PlayerLeft(struct FMatchmakerPlayerLeftRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMatchmakerAPI* STATIC_PlayerJoined(struct FMatchmakerPlayerJoinedRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperUserInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperStartGame(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperPlayerLeft(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperPlayerJoined(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAuthUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void DelegateOnSuccessUserInfo__DelegateSignature(struct FMatchmakerUserInfoResponse* Result, class UObject** customData);
	void DelegateOnSuccessStartGame__DelegateSignature(struct FMatchmakerStartGameResponse* Result, class UObject** customData);
	void DelegateOnSuccessPlayerLeft__DelegateSignature(struct FMatchmakerPlayerLeftResponse* Result, class UObject** customData);
	void DelegateOnSuccessPlayerJoined__DelegateSignature(struct FMatchmakerPlayerJoinedResponse* Result, class UObject** customData);
	void DelegateOnSuccessAuthUser__DelegateSignature(struct FMatchmakerAuthUserResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabMatchmakerAPI* STATIC_AuthUser(struct FMatchmakerAuthUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabMatchmakerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabMatchmakerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMatchmakerModelDecoder");
		return ptr;
	}


	struct FMatchmakerUserInfoResponse STATIC_decodeUserInfoResponseResponse(class UPlayFabJsonObject** response);
	struct FMatchmakerStartGameResponse STATIC_decodeStartGameResponseResponse(class UPlayFabJsonObject** response);
	struct FMatchmakerPlayerLeftResponse STATIC_decodePlayerLeftResponseResponse(class UPlayFabJsonObject** response);
	struct FMatchmakerPlayerJoinedResponse STATIC_decodePlayerJoinedResponseResponse(class UPlayFabJsonObject** response);
	struct FMatchmakerAuthUserResponse STATIC_decodeAuthUserResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabMultiplayerAPI
// 0x0400 (0x0428 - 0x0028)
class UPlayFabMultiplayerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x388];                                     // 0x0038(0x0388) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x03C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x03C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x03D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x03D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMultiplayerAPI");
		return ptr;
	}


	class UPlayFabMultiplayerAPI* STATIC_UploadCertificate(struct FMultiplayerUploadCertificateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_UpdateBuildRegions(struct FMultiplayerUpdateBuildRegionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_UpdateBuildAlias(struct FMultiplayerUpdateBuildAliasRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_UntagContainerImage(struct FMultiplayerUntagContainerImageRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ShutdownMultiplayerServer(struct FMultiplayerShutdownMultiplayerServerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_RolloverContainerRegistryCredentials(struct FMultiplayerRolloverContainerRegistryCredentialsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_RequestMultiplayerServer(struct FMultiplayerRequestMultiplayerServerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListVirtualMachineSummaries(struct FMultiplayerListVirtualMachineSummariesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListServerBackfillTicketsForPlayer(struct FMultiplayerListServerBackfillTicketsForPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListQosServersForTitle(struct FMultiplayerListQosServersForTitleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListQosServers(struct FMultiplayerListQosServersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListPartyQosServers(struct FMultiplayerListPartyQosServersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListMultiplayerServers(struct FMultiplayerListMultiplayerServersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListMatchmakingTicketsForPlayer(struct FMultiplayerListMatchmakingTicketsForPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListContainerImageTags(struct FMultiplayerListContainerImageTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListContainerImages(struct FMultiplayerListContainerImagesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListCertificateSummaries(struct FMultiplayerListCertificateSummariesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListBuildSummaries(struct FMultiplayerListBuildSummariesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListBuildAliases(struct FMultiplayerMultiplayerEmptyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListAssetSummaries(struct FMultiplayerListAssetSummariesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_ListArchivedMultiplayerServers(struct FMultiplayerListMultiplayerServersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_JoinMatchmakingTicket(struct FMultiplayerJoinMatchmakingTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperUploadCertificate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateBuildRegions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateBuildAlias(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUntagContainerImage(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperShutdownMultiplayerServer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRolloverContainerRegistryCredentials(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRequestMultiplayerServer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListVirtualMachineSummaries(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListServerBackfillTicketsForPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListQosServersForTitle(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListQosServers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListPartyQosServers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListMultiplayerServers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListMatchmakingTicketsForPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListContainerImageTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListContainerImages(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListCertificateSummaries(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListBuildSummaries(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListBuildAliases(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListAssetSummaries(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperListArchivedMultiplayerServers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperJoinMatchmakingTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleMultiplayerServersQuotas(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleEnabledForMultiplayerServersStatus(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetServerBackfillTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetRemoteLoginEndpoint(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetQueueStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMultiplayerServerLogs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMultiplayerServerDetails(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMatchmakingTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetMatch(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetContainerRegistryCredentials(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetBuildAlias(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetBuild(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAssetUploadUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperEnableMultiplayerServersForTitle(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteRemoteUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteCertificate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteBuildAlias(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteBuild(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteAsset(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateServerMatchmakingTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateServerBackfillTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateRemoteUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateMatchmakingTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateBuildWithManagedContainer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateBuildWithCustomContainer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateBuildAlias(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCancelServerBackfillTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCancelMatchmakingTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCancelAllServerBackfillTicketsForPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCancelAllMatchmakingTicketsForPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabMultiplayerAPI* STATIC_GetTitleMultiplayerServersQuotas(struct FMultiplayerGetTitleMultiplayerServersQuotasRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetTitleEnabledForMultiplayerServersStatus(struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetServerBackfillTicket(struct FMultiplayerGetServerBackfillTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetRemoteLoginEndpoint(struct FMultiplayerGetRemoteLoginEndpointRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetQueueStatistics(struct FMultiplayerGetQueueStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMultiplayerServerLogs(struct FMultiplayerGetMultiplayerServerLogsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMultiplayerServerDetails(struct FMultiplayerGetMultiplayerServerDetailsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMatchmakingTicket(struct FMultiplayerGetMatchmakingTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetMatch(struct FMultiplayerGetMatchRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetContainerRegistryCredentials(struct FMultiplayerGetContainerRegistryCredentialsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetBuildAlias(struct FMultiplayerGetBuildAliasRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetBuild(struct FMultiplayerGetBuildRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_GetAssetUploadUrl(struct FMultiplayerGetAssetUploadUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_EnableMultiplayerServersForTitle(struct FMultiplayerEnableMultiplayerServersForTitleRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteRemoteUser(struct FMultiplayerDeleteRemoteUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteCertificate(struct FMultiplayerDeleteCertificateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteBuildAlias(struct FMultiplayerDeleteBuildAliasRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteBuild(struct FMultiplayerDeleteBuildRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_DeleteAsset(struct FMultiplayerDeleteAssetRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessUploadCertificate__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateBuildRegions__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateBuildAlias__DelegateSignature(struct FMultiplayerBuildAliasDetailsResponse* Result, class UObject** customData);
	void DelegateOnSuccessUntagContainerImage__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessShutdownMultiplayerServer__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRolloverContainerRegistryCredentials__DelegateSignature(struct FMultiplayerRolloverContainerRegistryCredentialsResponse* Result, class UObject** customData);
	void DelegateOnSuccessRequestMultiplayerServer__DelegateSignature(struct FMultiplayerRequestMultiplayerServerResponse* Result, class UObject** customData);
	void DelegateOnSuccessListVirtualMachineSummaries__DelegateSignature(struct FMultiplayerListVirtualMachineSummariesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListServerBackfillTicketsForPlayer__DelegateSignature(struct FMultiplayerListServerBackfillTicketsForPlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessListQosServersForTitle__DelegateSignature(struct FMultiplayerListQosServersForTitleResponse* Result, class UObject** customData);
	void DelegateOnSuccessListQosServers__DelegateSignature(struct FMultiplayerListQosServersResponse* Result, class UObject** customData);
	void DelegateOnSuccessListPartyQosServers__DelegateSignature(struct FMultiplayerListPartyQosServersResponse* Result, class UObject** customData);
	void DelegateOnSuccessListMultiplayerServers__DelegateSignature(struct FMultiplayerListMultiplayerServersResponse* Result, class UObject** customData);
	void DelegateOnSuccessListMatchmakingTicketsForPlayer__DelegateSignature(struct FMultiplayerListMatchmakingTicketsForPlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessListContainerImageTags__DelegateSignature(struct FMultiplayerListContainerImageTagsResponse* Result, class UObject** customData);
	void DelegateOnSuccessListContainerImages__DelegateSignature(struct FMultiplayerListContainerImagesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListCertificateSummaries__DelegateSignature(struct FMultiplayerListCertificateSummariesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListBuildSummaries__DelegateSignature(struct FMultiplayerListBuildSummariesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListBuildAliases__DelegateSignature(struct FMultiplayerListBuildAliasesForTitleResponse* Result, class UObject** customData);
	void DelegateOnSuccessListAssetSummaries__DelegateSignature(struct FMultiplayerListAssetSummariesResponse* Result, class UObject** customData);
	void DelegateOnSuccessListArchivedMultiplayerServers__DelegateSignature(struct FMultiplayerListMultiplayerServersResponse* Result, class UObject** customData);
	void DelegateOnSuccessJoinMatchmakingTicket__DelegateSignature(struct FMultiplayerJoinMatchmakingTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleMultiplayerServersQuotas__DelegateSignature(struct FMultiplayerGetTitleMultiplayerServersQuotasResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleEnabledForMultiplayerServersStatus__DelegateSignature(struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetServerBackfillTicket__DelegateSignature(struct FMultiplayerGetServerBackfillTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessGetRemoteLoginEndpoint__DelegateSignature(struct FMultiplayerGetRemoteLoginEndpointResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetQueueStatistics__DelegateSignature(struct FMultiplayerGetQueueStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetMultiplayerServerLogs__DelegateSignature(struct FMultiplayerGetMultiplayerServerLogsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetMultiplayerServerDetails__DelegateSignature(struct FMultiplayerGetMultiplayerServerDetailsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetMatchmakingTicket__DelegateSignature(struct FMultiplayerGetMatchmakingTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessGetMatch__DelegateSignature(struct FMultiplayerGetMatchResult* Result, class UObject** customData);
	void DelegateOnSuccessGetContainerRegistryCredentials__DelegateSignature(struct FMultiplayerGetContainerRegistryCredentialsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetBuildAlias__DelegateSignature(struct FMultiplayerBuildAliasDetailsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetBuild__DelegateSignature(struct FMultiplayerGetBuildResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetAssetUploadUrl__DelegateSignature(struct FMultiplayerGetAssetUploadUrlResponse* Result, class UObject** customData);
	void DelegateOnSuccessEnableMultiplayerServersForTitle__DelegateSignature(struct FMultiplayerEnableMultiplayerServersForTitleResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteRemoteUser__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteCertificate__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteBuildAlias__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteBuild__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteAsset__DelegateSignature(struct FMultiplayerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateServerMatchmakingTicket__DelegateSignature(struct FMultiplayerCreateMatchmakingTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateServerBackfillTicket__DelegateSignature(struct FMultiplayerCreateServerBackfillTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateRemoteUser__DelegateSignature(struct FMultiplayerCreateRemoteUserResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateMatchmakingTicket__DelegateSignature(struct FMultiplayerCreateMatchmakingTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateBuildWithManagedContainer__DelegateSignature(struct FMultiplayerCreateBuildWithManagedContainerResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateBuildWithCustomContainer__DelegateSignature(struct FMultiplayerCreateBuildWithCustomContainerResponse* Result, class UObject** customData);
	void DelegateOnSuccessCreateBuildAlias__DelegateSignature(struct FMultiplayerBuildAliasDetailsResponse* Result, class UObject** customData);
	void DelegateOnSuccessCancelServerBackfillTicket__DelegateSignature(struct FMultiplayerCancelServerBackfillTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessCancelMatchmakingTicket__DelegateSignature(struct FMultiplayerCancelMatchmakingTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessCancelAllServerBackfillTicketsForPlayer__DelegateSignature(struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessCancelAllMatchmakingTicketsForPlayer__DelegateSignature(struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateServerMatchmakingTicket(struct FMultiplayerCreateServerMatchmakingTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateServerBackfillTicket(struct FMultiplayerCreateServerBackfillTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateRemoteUser(struct FMultiplayerCreateRemoteUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateMatchmakingTicket(struct FMultiplayerCreateMatchmakingTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithManagedContainer(struct FMultiplayerCreateBuildWithManagedContainerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateBuildWithCustomContainer(struct FMultiplayerCreateBuildWithCustomContainerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CreateBuildAlias(struct FMultiplayerCreateBuildAliasRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelServerBackfillTicket(struct FMultiplayerCancelServerBackfillTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelMatchmakingTicket(struct FMultiplayerCancelMatchmakingTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelAllServerBackfillTicketsForPlayer(struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabMultiplayerAPI* STATIC_CancelAllMatchmakingTicketsForPlayer(struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabMultiplayerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabMultiplayerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabMultiplayerModelDecoder");
		return ptr;
	}


	struct FMultiplayerRolloverContainerRegistryCredentialsResponse STATIC_decodeRolloverContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerRequestMultiplayerServerResponse STATIC_decodeRequestMultiplayerServerResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListVirtualMachineSummariesResponse STATIC_decodeListVirtualMachineSummariesResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListServerBackfillTicketsForPlayerResult STATIC_decodeListServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListQosServersResponse STATIC_decodeListQosServersResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListQosServersForTitleResponse STATIC_decodeListQosServersForTitleResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListPartyQosServersResponse STATIC_decodeListPartyQosServersResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListMultiplayerServersResponse STATIC_decodeListMultiplayerServersResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListMatchmakingTicketsForPlayerResult STATIC_decodeListMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListContainerImageTagsResponse STATIC_decodeListContainerImageTagsResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListContainerImagesResponse STATIC_decodeListContainerImagesResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListCertificateSummariesResponse STATIC_decodeListCertificateSummariesResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListBuildSummariesResponse STATIC_decodeListBuildSummariesResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListBuildAliasesForTitleResponse STATIC_decodeListBuildAliasesForTitleResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerListAssetSummariesResponse STATIC_decodeListAssetSummariesResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerJoinMatchmakingTicketResult STATIC_decodeJoinMatchmakingTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetTitleMultiplayerServersQuotasResponse STATIC_decodeGetTitleMultiplayerServersQuotasResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse STATIC_decodeGetTitleEnabledForMultiplayerServersStatusResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetServerBackfillTicketResult STATIC_decodeGetServerBackfillTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetRemoteLoginEndpointResponse STATIC_decodeGetRemoteLoginEndpointResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetQueueStatisticsResult STATIC_decodeGetQueueStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetMultiplayerServerLogsResponse STATIC_decodeGetMultiplayerServerLogsResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetMultiplayerServerDetailsResponse STATIC_decodeGetMultiplayerServerDetailsResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetMatchResult STATIC_decodeGetMatchResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetMatchmakingTicketResult STATIC_decodeGetMatchmakingTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetContainerRegistryCredentialsResponse STATIC_decodeGetContainerRegistryCredentialsResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetBuildResponse STATIC_decodeGetBuildResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerGetAssetUploadUrlResponse STATIC_decodeGetAssetUploadUrlResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerEnableMultiplayerServersForTitleResponse STATIC_decodeEnableMultiplayerServersForTitleResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCreateServerBackfillTicketResult STATIC_decodeCreateServerBackfillTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCreateRemoteUserResponse STATIC_decodeCreateRemoteUserResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCreateMatchmakingTicketResult STATIC_decodeCreateMatchmakingTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCreateBuildWithManagedContainerResponse STATIC_decodeCreateBuildWithManagedContainerResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCreateBuildWithCustomContainerResponse STATIC_decodeCreateBuildWithCustomContainerResponseResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCancelServerBackfillTicketResult STATIC_decodeCancelServerBackfillTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCancelMatchmakingTicketResult STATIC_decodeCancelMatchmakingTicketResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult STATIC_decodeCancelAllServerBackfillTicketsForPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult STATIC_decodeCancelAllMatchmakingTicketsForPlayerResultResponse(class UPlayFabJsonObject** response);
	struct FMultiplayerBuildAliasDetailsResponse STATIC_decodeBuildAliasDetailsResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabProfilesAPI
// 0x0130 (0x0158 - 0x0028)
class UPlayFabProfilesAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0xB8];                                      // 0x0038(0x00B8) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x00F0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x0100(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x0108(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabProfilesAPI");
		return ptr;
	}


	class UPlayFabProfilesAPI* STATIC_SetProfilePolicy(struct FProfilesSetEntityProfilePolicyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabProfilesAPI* STATIC_SetProfileLanguage(struct FProfilesSetProfileLanguageRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabProfilesAPI* STATIC_SetGlobalPolicy(struct FProfilesSetGlobalPolicyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperSetProfilePolicy(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetProfileLanguage(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetGlobalPolicy(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitlePlayersFromMasterPlayerAccountIds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetProfiles(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetProfile(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetGlobalPolicy(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabProfilesAPI* STATIC_GetTitlePlayersFromMasterPlayerAccountIds(struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabProfilesAPI* STATIC_GetProfiles(struct FProfilesGetEntityProfilesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabProfilesAPI* STATIC_GetProfile(struct FProfilesGetEntityProfileRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabProfilesAPI* STATIC_GetGlobalPolicy(struct FProfilesGetGlobalPolicyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessSetProfilePolicy__DelegateSignature(struct FProfilesSetEntityProfilePolicyResponse* Result, class UObject** customData);
	void DelegateOnSuccessSetProfileLanguage__DelegateSignature(struct FProfilesSetProfileLanguageResponse* Result, class UObject** customData);
	void DelegateOnSuccessSetGlobalPolicy__DelegateSignature(struct FProfilesSetGlobalPolicyResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetTitlePlayersFromMasterPlayerAccountIds__DelegateSignature(struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetProfiles__DelegateSignature(struct FProfilesGetEntityProfilesResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetProfile__DelegateSignature(struct FProfilesGetEntityProfileResponse* Result, class UObject** customData);
	void DelegateOnSuccessGetGlobalPolicy__DelegateSignature(struct FProfilesGetGlobalPolicyResponse* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
};


// Class PlayFab.PlayFabProfilesModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabProfilesModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabProfilesModelDecoder");
		return ptr;
	}


	struct FProfilesSetProfileLanguageResponse STATIC_decodeSetProfileLanguageResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesSetGlobalPolicyResponse STATIC_decodeSetGlobalPolicyResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesSetEntityProfilePolicyResponse STATIC_decodeSetEntityProfilePolicyResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse STATIC_decodeGetTitlePlayersFromMasterPlayerAccountIdsResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesGetGlobalPolicyResponse STATIC_decodeGetGlobalPolicyResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesGetEntityProfilesResponse STATIC_decodeGetEntityProfilesResponseResponse(class UPlayFabJsonObject** response);
	struct FProfilesGetEntityProfileResponse STATIC_decodeGetEntityProfileResponseResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabServerAPI
// 0x0900 (0x0928 - 0x0028)
class UPlayFabServerAPI : public UOnlineBlueprintCallProxyBase
{
public:
	struct FScriptMulticastDelegate                    OnPlayFabResponse;                                        // 0x0028(0x0001) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	unsigned char                                      UnknownData00[0xF];                                       // 0x0028(0x000F) FIX WRONG TYPE SIZE OF PREVIUS PROPERTY
	unsigned char                                      UnknownData01[0x888];                                     // 0x0038(0x0888) MISSED OFFSET
	class UPlayFabAuthenticationContext*               CallAuthenticationContext;                                // 0x08C0(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          RequestJsonObj;                                           // 0x08C8(0x0008) (ZeroConstructor, IsPlainOldData)
	class UPlayFabJsonObject*                          ResponseJsonObj;                                          // 0x08D0(0x0008) (ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x50];                                      // 0x08D8(0x0050) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabServerAPI");
		return ptr;
	}


	class UPlayFabServerAPI* STATIC_WriteTitleEvent(struct FServerWriteTitleEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_WritePlayerEvent(struct FServerWriteServerPlayerEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_WriteCharacterEvent(struct FServerWriteServerCharacterEventRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserReadOnlyData(struct FServerUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherReadOnlyData(struct FServerUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherInternalData(struct FServerUpdateUserInternalDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserPublisherData(struct FServerUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserInventoryItemCustomData(struct FServerUpdateUserInventoryItemDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserInternalData(struct FServerUpdateUserInternalDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateUserData(struct FServerUpdateUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateSharedGroupData(struct FServerUpdateSharedGroupDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdatePlayerStatistics(struct FServerUpdatePlayerStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterStatistics(struct FServerUpdateCharacterStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterReadOnlyData(struct FServerUpdateCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterInternalData(struct FServerUpdateCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateCharacterData(struct FServerUpdateCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateBans(struct FServerUpdateBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UpdateAvatarUrl(struct FServerUpdateAvatarUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UnlockContainerItem(struct FServerUnlockContainerItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UnlockContainerInstance(struct FServerUnlockContainerInstanceRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UnlinkXboxAccount(struct FServerUnlinkXboxAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UnlinkServerCustomId(struct FServerUnlinkServerCustomIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_UnlinkPSNAccount(struct FServerUnlinkPSNAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SubtractUserVirtualCurrency(struct FServerSubtractUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SubtractCharacterVirtualCurrency(struct FServerSubtractCharacterVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetTitleInternalData(struct FServerSetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetTitleData(struct FServerSetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetPublisherData(struct FServerSetPublisherDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetPlayerSecret(struct FServerSetPlayerSecretRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceTags(struct FServerSetGameServerInstanceTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceState(struct FServerSetGameServerInstanceStateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetGameServerInstanceData(struct FServerSetGameServerInstanceDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SetFriendTags(struct FServerSetFriendTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SendPushNotificationFromTemplate(struct FServerSendPushNotificationFromTemplateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SendPushNotification(struct FServerSendPushNotificationRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SendEmailFromTemplate(struct FServerSendEmailFromTemplateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SendCustomAccountRecoveryEmail(struct FServerSendCustomAccountRecoveryEmailRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_SavePushNotificationTemplate(struct FServerSavePushNotificationTemplateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RevokeInventoryItems(struct FServerRevokeInventoryItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RevokeInventoryItem(struct FServerRevokeInventoryItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RevokeBans(struct FServerRevokeBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RevokeAllBansForUser(struct FServerRevokeAllBansForUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_ReportPlayer(struct FServerReportPlayerServerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RemoveSharedGroupMembers(struct FServerRemoveSharedGroupMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RemovePlayerTag(struct FServerRemovePlayerTagRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RemoveGenericID(struct FServerRemoveGenericIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RemoveFriend(struct FServerRemoveFriendRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RegisterGame(struct FServerRegisterGameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RefreshGameServerInstanceHeartbeat(struct FServerRefreshGameServerInstanceHeartbeatRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RedeemMatchmakerTicket(struct FServerRedeemMatchmakerTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_RedeemCoupon(struct FServerRedeemCouponRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_NotifyMatchmakerPlayerLeft(struct FServerNotifyMatchmakerPlayerLeftRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_MoveItemToUserFromCharacter(struct FServerMoveItemToUserFromCharacterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromUser(struct FServerMoveItemToCharacterFromUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_MoveItemToCharacterFromCharacter(struct FServerMoveItemToCharacterFromCharacterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_ModifyItemUses(struct FServerModifyItemUsesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LoginWithXboxId(struct FServerLoginWithXboxIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LoginWithXbox(struct FServerLoginWithXboxRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LoginWithServerCustomId(struct FServerLoginWithServerCustomIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LinkXboxAccount(struct FServerLinkXboxAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LinkServerCustomId(struct FServerLinkServerCustomIdRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_LinkPSNAccount(struct FServerLinkPSNAccountRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void HelperWriteTitleEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperWritePlayerEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperWriteCharacterEvent(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserInventoryItemCustomData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateSharedGroupData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdatePlayerStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateCharacterData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUpdateAvatarUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlockContainerItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlockContainerInstance(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkXboxAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkServerCustomId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperUnlinkPSNAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSubtractUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSubtractCharacterVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetTitleInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetTitleData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetPlayerSecret(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetGameServerInstanceTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetGameServerInstanceState(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetGameServerInstanceData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSetFriendTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendPushNotificationFromTemplate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendPushNotification(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendEmailFromTemplate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSendCustomAccountRecoveryEmail(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperSavePushNotificationTemplate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeInventoryItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeInventoryItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRevokeAllBansForUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperReportPlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveSharedGroupMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemovePlayerTag(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveGenericID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRemoveFriend(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRegisterGame(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRefreshGameServerInstanceHeartbeat(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRedeemMatchmakerTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperRedeemCoupon(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperNotifyMatchmakerPlayerLeft(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperMoveItemToUserFromCharacter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperMoveItemToCharacterFromUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperMoveItemToCharacterFromCharacter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperModifyItemUses(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithXboxId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithXbox(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLoginWithServerCustomId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkXboxAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkServerCustomId(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperLinkPSNAccount(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantItemsToUsers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantItemsToUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantItemsToCharacter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGrantCharacterToUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserInventory(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserBans(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetUserAccountInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleNews(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTitleData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetTime(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetStoreItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetSharedGroupData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetServerCustomIDsFromPlayFabIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetRandomResultTables(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPublisherData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromXboxLiveIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromSteamIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromPSNAccountIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromNintendoSwitchDeviceIds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromGenericIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromFacebookInstantGamesIds(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayFabIDsFromFacebookIDs(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerTags(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatisticVersions(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayersInSegment(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerSegments(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerProfile(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetPlayerCombinedInfo(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardForUserCharacters(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardAroundUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboardAroundCharacter(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFriendsList(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetFriendLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetContentDownloadUrl(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterStatistics(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterReadOnlyData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterLeaderboard(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterInventory(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterInternalData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCharacterData(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetCatalogItems(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAllUsersCharacters(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperGetAllSegments(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperExecuteCloudScript(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperEvaluateRandomResultTable(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeregisterGame(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteSharedGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeletePushNotificationTemplate(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeletePlayer(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperDeleteCharacterFromUser(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperCreateSharedGroup(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperConsumeItem(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperBanUsers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAwardSteamAchievement(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAuthenticateSessionTicket(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddUserVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddSharedGroupMembers(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddPlayerTag(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddGenericID(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddFriend(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	void HelperAddCharacterVirtualCurrency(struct FPlayFabBaseModel* response, class UObject** customData, bool* successful);
	class UPlayFabServerAPI* STATIC_GrantItemsToUsers(struct FServerGrantItemsToUsersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GrantItemsToUser(struct FServerGrantItemsToUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GrantItemsToCharacter(struct FServerGrantItemsToCharacterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GrantCharacterToUser(struct FServerGrantCharacterToUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserReadOnlyData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherReadOnlyData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherInternalData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserPublisherData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserInventory(struct FServerGetUserInventoryRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserInternalData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserData(struct FServerGetUserDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserBans(struct FServerGetUserBansRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetUserAccountInfo(struct FServerGetUserAccountInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetTitleNews(struct FServerGetTitleNewsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetTitleInternalData(struct FServerGetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetTitleData(struct FServerGetTitleDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetTime(struct FServerGetTimeRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetStoreItems(struct FServerGetStoreItemsServerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetSharedGroupData(struct FServerGetSharedGroupDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetServerCustomIDsFromPlayFabIDs(struct FServerGetServerCustomIDsFromPlayFabIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetRandomResultTables(struct FServerGetRandomResultTablesRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPublisherData(struct FServerGetPublisherDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromXboxLiveIDs(struct FServerGetPlayFabIDsFromXboxLiveIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromSteamIDs(struct FServerGetPlayFabIDsFromSteamIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromPSNAccountIDs(struct FServerGetPlayFabIDsFromPSNAccountIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromNintendoSwitchDeviceIds(struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromGenericIDs(struct FServerGetPlayFabIDsFromGenericIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookInstantGamesIds(struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayFabIDsFromFacebookIDs(struct FServerGetPlayFabIDsFromFacebookIDsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerTags(struct FServerGetPlayerTagsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerStatisticVersions(struct FServerGetPlayerStatisticVersionsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerStatistics(struct FServerGetPlayerStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayersInSegment(struct FServerGetPlayersInSegmentRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerSegments(struct FServerGetPlayersSegmentsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerProfile(struct FServerGetPlayerProfileRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetPlayerCombinedInfo(struct FServerGetPlayerCombinedInfoRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardForUserCharacters(struct FServerGetLeaderboardForUsersCharactersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardAroundUser(struct FServerGetLeaderboardAroundUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboardAroundCharacter(struct FServerGetLeaderboardAroundCharacterRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetLeaderboard(struct FServerGetLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetFriendsList(struct FServerGetFriendsListRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetFriendLeaderboard(struct FServerGetFriendLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetContentDownloadUrl(struct FServerGetContentDownloadUrlRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterStatistics(struct FServerGetCharacterStatisticsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterReadOnlyData(struct FServerGetCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterLeaderboard(struct FServerGetCharacterLeaderboardRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterInventory(struct FServerGetCharacterInventoryRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterInternalData(struct FServerGetCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCharacterData(struct FServerGetCharacterDataRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetCatalogItems(struct FServerGetCatalogItemsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetAllUsersCharacters(struct FServerListUsersCharactersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_GetAllSegments(struct FServerGetAllSegmentsRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_ExecuteCloudScript(struct FServerExecuteCloudScriptServerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_EvaluateRandomResultTable(struct FServerEvaluateRandomResultTableRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_DeregisterGame(struct FServerDeregisterGameRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_DeleteSharedGroup(struct FServerDeleteSharedGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_DeletePushNotificationTemplate(struct FServerDeletePushNotificationTemplateRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_DeletePlayer(struct FServerDeletePlayerRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_DeleteCharacterFromUser(struct FServerDeleteCharacterFromUserRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	void DelegateOnSuccessWriteTitleEvent__DelegateSignature(struct FServerWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessWritePlayerEvent__DelegateSignature(struct FServerWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessWriteCharacterEvent__DelegateSignature(struct FServerWriteEventResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserReadOnlyData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherReadOnlyData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherInternalData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserPublisherData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserInventoryItemCustomData__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserInternalData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateUserData__DelegateSignature(struct FServerUpdateUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateSharedGroupData__DelegateSignature(struct FServerUpdateSharedGroupDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdatePlayerStatistics__DelegateSignature(struct FServerUpdatePlayerStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterStatistics__DelegateSignature(struct FServerUpdateCharacterStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterReadOnlyData__DelegateSignature(struct FServerUpdateCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterInternalData__DelegateSignature(struct FServerUpdateCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateCharacterData__DelegateSignature(struct FServerUpdateCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateBans__DelegateSignature(struct FServerUpdateBansResult* Result, class UObject** customData);
	void DelegateOnSuccessUpdateAvatarUrl__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessUnlockContainerItem__DelegateSignature(struct FServerUnlockContainerItemResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlockContainerInstance__DelegateSignature(struct FServerUnlockContainerItemResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkXboxAccount__DelegateSignature(struct FServerUnlinkXboxAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkServerCustomId__DelegateSignature(struct FServerUnlinkServerCustomIdResult* Result, class UObject** customData);
	void DelegateOnSuccessUnlinkPSNAccount__DelegateSignature(struct FServerUnlinkPSNAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessSubtractUserVirtualCurrency__DelegateSignature(struct FServerModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessSubtractCharacterVirtualCurrency__DelegateSignature(struct FServerModifyCharacterVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessSetTitleInternalData__DelegateSignature(struct FServerSetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetTitleData__DelegateSignature(struct FServerSetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPublisherData__DelegateSignature(struct FServerSetPublisherDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetPlayerSecret__DelegateSignature(struct FServerSetPlayerSecretResult* Result, class UObject** customData);
	void DelegateOnSuccessSetGameServerInstanceTags__DelegateSignature(struct FServerSetGameServerInstanceTagsResult* Result, class UObject** customData);
	void DelegateOnSuccessSetGameServerInstanceState__DelegateSignature(struct FServerSetGameServerInstanceStateResult* Result, class UObject** customData);
	void DelegateOnSuccessSetGameServerInstanceData__DelegateSignature(struct FServerSetGameServerInstanceDataResult* Result, class UObject** customData);
	void DelegateOnSuccessSetFriendTags__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessSendPushNotificationFromTemplate__DelegateSignature(struct FServerSendPushNotificationResult* Result, class UObject** customData);
	void DelegateOnSuccessSendPushNotification__DelegateSignature(struct FServerSendPushNotificationResult* Result, class UObject** customData);
	void DelegateOnSuccessSendEmailFromTemplate__DelegateSignature(struct FServerSendEmailFromTemplateResult* Result, class UObject** customData);
	void DelegateOnSuccessSendCustomAccountRecoveryEmail__DelegateSignature(struct FServerSendCustomAccountRecoveryEmailResult* Result, class UObject** customData);
	void DelegateOnSuccessSavePushNotificationTemplate__DelegateSignature(struct FServerSavePushNotificationTemplateResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeInventoryItems__DelegateSignature(struct FServerRevokeInventoryItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeInventoryItem__DelegateSignature(struct FServerRevokeInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeBans__DelegateSignature(struct FServerRevokeBansResult* Result, class UObject** customData);
	void DelegateOnSuccessRevokeAllBansForUser__DelegateSignature(struct FServerRevokeAllBansForUserResult* Result, class UObject** customData);
	void DelegateOnSuccessReportPlayer__DelegateSignature(struct FServerReportPlayerServerResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveSharedGroupMembers__DelegateSignature(struct FServerRemoveSharedGroupMembersResult* Result, class UObject** customData);
	void DelegateOnSuccessRemovePlayerTag__DelegateSignature(struct FServerRemovePlayerTagResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveGenericID__DelegateSignature(struct FServerEmptyResult* Result, class UObject** customData);
	void DelegateOnSuccessRemoveFriend__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessRegisterGame__DelegateSignature(struct FServerRegisterGameResponse* Result, class UObject** customData);
	void DelegateOnSuccessRefreshGameServerInstanceHeartbeat__DelegateSignature(struct FServerRefreshGameServerInstanceHeartbeatResult* Result, class UObject** customData);
	void DelegateOnSuccessRedeemMatchmakerTicket__DelegateSignature(struct FServerRedeemMatchmakerTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessRedeemCoupon__DelegateSignature(struct FServerRedeemCouponResult* Result, class UObject** customData);
	void DelegateOnSuccessNotifyMatchmakerPlayerLeft__DelegateSignature(struct FServerNotifyMatchmakerPlayerLeftResult* Result, class UObject** customData);
	void DelegateOnSuccessMoveItemToUserFromCharacter__DelegateSignature(struct FServerMoveItemToUserFromCharacterResult* Result, class UObject** customData);
	void DelegateOnSuccessMoveItemToCharacterFromUser__DelegateSignature(struct FServerMoveItemToCharacterFromUserResult* Result, class UObject** customData);
	void DelegateOnSuccessMoveItemToCharacterFromCharacter__DelegateSignature(struct FServerMoveItemToCharacterFromCharacterResult* Result, class UObject** customData);
	void DelegateOnSuccessModifyItemUses__DelegateSignature(struct FServerModifyItemUsesResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithXboxId__DelegateSignature(struct FServerServerLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithXbox__DelegateSignature(struct FServerServerLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLoginWithServerCustomId__DelegateSignature(struct FServerServerLoginResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkXboxAccount__DelegateSignature(struct FServerLinkXboxAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkServerCustomId__DelegateSignature(struct FServerLinkServerCustomIdResult* Result, class UObject** customData);
	void DelegateOnSuccessLinkPSNAccount__DelegateSignature(struct FServerLinkPSNAccountResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantItemsToUsers__DelegateSignature(struct FServerGrantItemsToUsersResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantItemsToUser__DelegateSignature(struct FServerGrantItemsToUserResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantItemsToCharacter__DelegateSignature(struct FServerGrantItemsToCharacterResult* Result, class UObject** customData);
	void DelegateOnSuccessGrantCharacterToUser__DelegateSignature(struct FServerGrantCharacterToUserResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserReadOnlyData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherReadOnlyData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherInternalData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserPublisherData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserInventory__DelegateSignature(struct FServerGetUserInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserInternalData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserData__DelegateSignature(struct FServerGetUserDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserBans__DelegateSignature(struct FServerGetUserBansResult* Result, class UObject** customData);
	void DelegateOnSuccessGetUserAccountInfo__DelegateSignature(struct FServerGetUserAccountInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleNews__DelegateSignature(struct FServerGetTitleNewsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleInternalData__DelegateSignature(struct FServerGetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTitleData__DelegateSignature(struct FServerGetTitleDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetTime__DelegateSignature(struct FServerGetTimeResult* Result, class UObject** customData);
	void DelegateOnSuccessGetStoreItems__DelegateSignature(struct FServerGetStoreItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetSharedGroupData__DelegateSignature(struct FServerGetSharedGroupDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetServerCustomIDsFromPlayFabIDs__DelegateSignature(struct FServerGetServerCustomIDsFromPlayFabIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetRandomResultTables__DelegateSignature(struct FServerGetRandomResultTablesResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPublisherData__DelegateSignature(struct FServerGetPublisherDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromXboxLiveIDs__DelegateSignature(struct FServerGetPlayFabIDsFromXboxLiveIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromSteamIDs__DelegateSignature(struct FServerGetPlayFabIDsFromSteamIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromPSNAccountIDs__DelegateSignature(struct FServerGetPlayFabIDsFromPSNAccountIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromNintendoSwitchDeviceIds__DelegateSignature(struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromGenericIDs__DelegateSignature(struct FServerGetPlayFabIDsFromGenericIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookInstantGamesIds__DelegateSignature(struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayFabIDsFromFacebookIDs__DelegateSignature(struct FServerGetPlayFabIDsFromFacebookIDsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerTags__DelegateSignature(struct FServerGetPlayerTagsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatisticVersions__DelegateSignature(struct FServerGetPlayerStatisticVersionsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerStatistics__DelegateSignature(struct FServerGetPlayerStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayersInSegment__DelegateSignature(struct FServerGetPlayersInSegmentResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerSegments__DelegateSignature(struct FServerGetPlayerSegmentsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerProfile__DelegateSignature(struct FServerGetPlayerProfileResult* Result, class UObject** customData);
	void DelegateOnSuccessGetPlayerCombinedInfo__DelegateSignature(struct FServerGetPlayerCombinedInfoResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardForUserCharacters__DelegateSignature(struct FServerGetLeaderboardForUsersCharactersResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardAroundUser__DelegateSignature(struct FServerGetLeaderboardAroundUserResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboardAroundCharacter__DelegateSignature(struct FServerGetLeaderboardAroundCharacterResult* Result, class UObject** customData);
	void DelegateOnSuccessGetLeaderboard__DelegateSignature(struct FServerGetLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetFriendsList__DelegateSignature(struct FServerGetFriendsListResult* Result, class UObject** customData);
	void DelegateOnSuccessGetFriendLeaderboard__DelegateSignature(struct FServerGetLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetContentDownloadUrl__DelegateSignature(struct FServerGetContentDownloadUrlResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterStatistics__DelegateSignature(struct FServerGetCharacterStatisticsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterReadOnlyData__DelegateSignature(struct FServerGetCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterLeaderboard__DelegateSignature(struct FServerGetCharacterLeaderboardResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterInventory__DelegateSignature(struct FServerGetCharacterInventoryResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterInternalData__DelegateSignature(struct FServerGetCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCharacterData__DelegateSignature(struct FServerGetCharacterDataResult* Result, class UObject** customData);
	void DelegateOnSuccessGetCatalogItems__DelegateSignature(struct FServerGetCatalogItemsResult* Result, class UObject** customData);
	void DelegateOnSuccessGetAllUsersCharacters__DelegateSignature(struct FServerListUsersCharactersResult* Result, class UObject** customData);
	void DelegateOnSuccessGetAllSegments__DelegateSignature(struct FServerGetAllSegmentsResult* Result, class UObject** customData);
	void DelegateOnSuccessExecuteCloudScript__DelegateSignature(struct FServerExecuteCloudScriptResult* Result, class UObject** customData);
	void DelegateOnSuccessEvaluateRandomResultTable__DelegateSignature(struct FServerEvaluateRandomResultTableResult* Result, class UObject** customData);
	void DelegateOnSuccessDeregisterGame__DelegateSignature(struct FServerDeregisterGameResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeleteSharedGroup__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessDeletePushNotificationTemplate__DelegateSignature(struct FServerDeletePushNotificationTemplateResult* Result, class UObject** customData);
	void DelegateOnSuccessDeletePlayer__DelegateSignature(struct FServerDeletePlayerResult* Result, class UObject** customData);
	void DelegateOnSuccessDeleteCharacterFromUser__DelegateSignature(struct FServerDeleteCharacterFromUserResult* Result, class UObject** customData);
	void DelegateOnSuccessCreateSharedGroup__DelegateSignature(struct FServerCreateSharedGroupResult* Result, class UObject** customData);
	void DelegateOnSuccessConsumeItem__DelegateSignature(struct FServerConsumeItemResult* Result, class UObject** customData);
	void DelegateOnSuccessBanUsers__DelegateSignature(struct FServerBanUsersResult* Result, class UObject** customData);
	void DelegateOnSuccessAwardSteamAchievement__DelegateSignature(struct FServerAwardSteamAchievementResult* Result, class UObject** customData);
	void DelegateOnSuccessAuthenticateSessionTicket__DelegateSignature(struct FServerAuthenticateSessionTicketResult* Result, class UObject** customData);
	void DelegateOnSuccessAddUserVirtualCurrency__DelegateSignature(struct FServerModifyUserVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnSuccessAddSharedGroupMembers__DelegateSignature(struct FServerAddSharedGroupMembersResult* Result, class UObject** customData);
	void DelegateOnSuccessAddPlayerTag__DelegateSignature(struct FServerAddPlayerTagResult* Result, class UObject** customData);
	void DelegateOnSuccessAddGenericID__DelegateSignature(struct FServerEmptyResult* Result, class UObject** customData);
	void DelegateOnSuccessAddFriend__DelegateSignature(struct FServerEmptyResponse* Result, class UObject** customData);
	void DelegateOnSuccessAddCharacterVirtualCurrency__DelegateSignature(struct FServerModifyCharacterVirtualCurrencyResult* Result, class UObject** customData);
	void DelegateOnFailurePlayFabError__DelegateSignature(struct FPlayFabError* Error, class UObject** customData);
	class UPlayFabServerAPI* STATIC_CreateSharedGroup(struct FServerCreateSharedGroupRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_ConsumeItem(struct FServerConsumeItemRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_BanUsers(struct FServerBanUsersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AwardSteamAchievement(struct FServerAwardSteamAchievementRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AuthenticateSessionTicket(struct FServerAuthenticateSessionTicketRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddUserVirtualCurrency(struct FServerAddUserVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddSharedGroupMembers(struct FServerAddSharedGroupMembersRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddPlayerTag(struct FServerAddPlayerTagRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddGenericID(struct FServerAddGenericIDRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddFriend(struct FServerAddFriendRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
	class UPlayFabServerAPI* STATIC_AddCharacterVirtualCurrency(struct FServerAddCharacterVirtualCurrencyRequest* Request, struct FScriptDelegate* onSuccess, struct FScriptDelegate* onFailure, class UObject** customData);
};


// Class PlayFab.PlayFabServerModelDecoder
// 0x0000 (0x0028 - 0x0028)
class UPlayFabServerModelDecoder : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabServerModelDecoder");
		return ptr;
	}


	struct FServerWriteEventResponse STATIC_decodeWriteEventResponseResponse(class UPlayFabJsonObject** response);
	struct FServerUpdateUserDataResult STATIC_decodeUpdateUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerUpdateSharedGroupDataResult STATIC_decodeUpdateSharedGroupDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerUpdatePlayerStatisticsResult STATIC_decodeUpdatePlayerStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FServerUpdateCharacterStatisticsResult STATIC_decodeUpdateCharacterStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FServerUpdateCharacterDataResult STATIC_decodeUpdateCharacterDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerUpdateBansResult STATIC_decodeUpdateBansResultResponse(class UPlayFabJsonObject** response);
	struct FServerUnlockContainerItemResult STATIC_decodeUnlockContainerItemResultResponse(class UPlayFabJsonObject** response);
	struct FServerUnlinkXboxAccountResult STATIC_decodeUnlinkXboxAccountResultResponse(class UPlayFabJsonObject** response);
	struct FServerUnlinkServerCustomIdResult STATIC_decodeUnlinkServerCustomIdResultResponse(class UPlayFabJsonObject** response);
	struct FServerUnlinkPSNAccountResult STATIC_decodeUnlinkPSNAccountResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetTitleDataResult STATIC_decodeSetTitleDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetPublisherDataResult STATIC_decodeSetPublisherDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetPlayerSecretResult STATIC_decodeSetPlayerSecretResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetGameServerInstanceTagsResult STATIC_decodeSetGameServerInstanceTagsResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetGameServerInstanceStateResult STATIC_decodeSetGameServerInstanceStateResultResponse(class UPlayFabJsonObject** response);
	struct FServerSetGameServerInstanceDataResult STATIC_decodeSetGameServerInstanceDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerServerLoginResult STATIC_decodeServerLoginResultResponse(class UPlayFabJsonObject** response);
	struct FServerSendPushNotificationResult STATIC_decodeSendPushNotificationResultResponse(class UPlayFabJsonObject** response);
	struct FServerSendEmailFromTemplateResult STATIC_decodeSendEmailFromTemplateResultResponse(class UPlayFabJsonObject** response);
	struct FServerSendCustomAccountRecoveryEmailResult STATIC_decodeSendCustomAccountRecoveryEmailResultResponse(class UPlayFabJsonObject** response);
	struct FServerSavePushNotificationTemplateResult STATIC_decodeSavePushNotificationTemplateResultResponse(class UPlayFabJsonObject** response);
	struct FServerRevokeInventoryResult STATIC_decodeRevokeInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FServerRevokeInventoryItemsResult STATIC_decodeRevokeInventoryItemsResultResponse(class UPlayFabJsonObject** response);
	struct FServerRevokeBansResult STATIC_decodeRevokeBansResultResponse(class UPlayFabJsonObject** response);
	struct FServerRevokeAllBansForUserResult STATIC_decodeRevokeAllBansForUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerReportPlayerServerResult STATIC_decodeReportPlayerServerResultResponse(class UPlayFabJsonObject** response);
	struct FServerRemoveSharedGroupMembersResult STATIC_decodeRemoveSharedGroupMembersResultResponse(class UPlayFabJsonObject** response);
	struct FServerRemovePlayerTagResult STATIC_decodeRemovePlayerTagResultResponse(class UPlayFabJsonObject** response);
	struct FServerRegisterGameResponse STATIC_decodeRegisterGameResponseResponse(class UPlayFabJsonObject** response);
	struct FServerRefreshGameServerInstanceHeartbeatResult STATIC_decodeRefreshGameServerInstanceHeartbeatResultResponse(class UPlayFabJsonObject** response);
	struct FServerRedeemMatchmakerTicketResult STATIC_decodeRedeemMatchmakerTicketResultResponse(class UPlayFabJsonObject** response);
	struct FServerRedeemCouponResult STATIC_decodeRedeemCouponResultResponse(class UPlayFabJsonObject** response);
	struct FServerNotifyMatchmakerPlayerLeftResult STATIC_decodeNotifyMatchmakerPlayerLeftResultResponse(class UPlayFabJsonObject** response);
	struct FServerMoveItemToUserFromCharacterResult STATIC_decodeMoveItemToUserFromCharacterResultResponse(class UPlayFabJsonObject** response);
	struct FServerMoveItemToCharacterFromUserResult STATIC_decodeMoveItemToCharacterFromUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerMoveItemToCharacterFromCharacterResult STATIC_decodeMoveItemToCharacterFromCharacterResultResponse(class UPlayFabJsonObject** response);
	struct FServerModifyUserVirtualCurrencyResult STATIC_decodeModifyUserVirtualCurrencyResultResponse(class UPlayFabJsonObject** response);
	struct FServerModifyItemUsesResult STATIC_decodeModifyItemUsesResultResponse(class UPlayFabJsonObject** response);
	struct FServerModifyCharacterVirtualCurrencyResult STATIC_decodeModifyCharacterVirtualCurrencyResultResponse(class UPlayFabJsonObject** response);
	struct FServerListUsersCharactersResult STATIC_decodeListUsersCharactersResultResponse(class UPlayFabJsonObject** response);
	struct FServerLinkXboxAccountResult STATIC_decodeLinkXboxAccountResultResponse(class UPlayFabJsonObject** response);
	struct FServerLinkServerCustomIdResult STATIC_decodeLinkServerCustomIdResultResponse(class UPlayFabJsonObject** response);
	struct FServerLinkPSNAccountResult STATIC_decodeLinkPSNAccountResultResponse(class UPlayFabJsonObject** response);
	struct FServerGrantItemsToUsersResult STATIC_decodeGrantItemsToUsersResultResponse(class UPlayFabJsonObject** response);
	struct FServerGrantItemsToUserResult STATIC_decodeGrantItemsToUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerGrantItemsToCharacterResult STATIC_decodeGrantItemsToCharacterResultResponse(class UPlayFabJsonObject** response);
	struct FServerGrantCharacterToUserResult STATIC_decodeGrantCharacterToUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetUserInventoryResult STATIC_decodeGetUserInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetUserDataResult STATIC_decodeGetUserDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetUserBansResult STATIC_decodeGetUserBansResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetUserAccountInfoResult STATIC_decodeGetUserAccountInfoResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetTitleNewsResult STATIC_decodeGetTitleNewsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetTitleDataResult STATIC_decodeGetTitleDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetTimeResult STATIC_decodeGetTimeResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetStoreItemsResult STATIC_decodeGetStoreItemsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetSharedGroupDataResult STATIC_decodeGetSharedGroupDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetServerCustomIDsFromPlayFabIDsResult STATIC_decodeGetServerCustomIDsFromPlayFabIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetRandomResultTablesResult STATIC_decodeGetRandomResultTablesResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPublisherDataResult STATIC_decodeGetPublisherDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromXboxLiveIDsResult STATIC_decodeGetPlayFabIDsFromXboxLiveIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromSteamIDsResult STATIC_decodeGetPlayFabIDsFromSteamIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromPSNAccountIDsResult STATIC_decodeGetPlayFabIDsFromPSNAccountIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult STATIC_decodeGetPlayFabIDsFromNintendoSwitchDeviceIdsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromGenericIDsResult STATIC_decodeGetPlayFabIDsFromGenericIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult STATIC_decodeGetPlayFabIDsFromFacebookInstantGamesIdsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayFabIDsFromFacebookIDsResult STATIC_decodeGetPlayFabIDsFromFacebookIDsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerTagsResult STATIC_decodeGetPlayerTagsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerStatisticVersionsResult STATIC_decodeGetPlayerStatisticVersionsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerStatisticsResult STATIC_decodeGetPlayerStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayersInSegmentResult STATIC_decodeGetPlayersInSegmentResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerSegmentsResult STATIC_decodeGetPlayerSegmentsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerProfileResult STATIC_decodeGetPlayerProfileResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetPlayerCombinedInfoResult STATIC_decodeGetPlayerCombinedInfoResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetLeaderboardResult STATIC_decodeGetLeaderboardResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetLeaderboardForUsersCharactersResult STATIC_decodeGetLeaderboardForUsersCharactersResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetLeaderboardAroundUserResult STATIC_decodeGetLeaderboardAroundUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetLeaderboardAroundCharacterResult STATIC_decodeGetLeaderboardAroundCharacterResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetFriendsListResult STATIC_decodeGetFriendsListResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetContentDownloadUrlResult STATIC_decodeGetContentDownloadUrlResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetCharacterStatisticsResult STATIC_decodeGetCharacterStatisticsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetCharacterLeaderboardResult STATIC_decodeGetCharacterLeaderboardResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetCharacterInventoryResult STATIC_decodeGetCharacterInventoryResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetCharacterDataResult STATIC_decodeGetCharacterDataResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetCatalogItemsResult STATIC_decodeGetCatalogItemsResultResponse(class UPlayFabJsonObject** response);
	struct FServerGetAllSegmentsResult STATIC_decodeGetAllSegmentsResultResponse(class UPlayFabJsonObject** response);
	struct FServerExecuteCloudScriptResult STATIC_decodeExecuteCloudScriptResultResponse(class UPlayFabJsonObject** response);
	struct FServerEvaluateRandomResultTableResult STATIC_decodeEvaluateRandomResultTableResultResponse(class UPlayFabJsonObject** response);
	struct FServerEmptyResult STATIC_decodeEmptyResultResponse(class UPlayFabJsonObject** response);
	struct FServerEmptyResponse STATIC_decodeEmptyResponseResponse(class UPlayFabJsonObject** response);
	struct FServerDeregisterGameResponse STATIC_decodeDeregisterGameResponseResponse(class UPlayFabJsonObject** response);
	struct FServerDeletePushNotificationTemplateResult STATIC_decodeDeletePushNotificationTemplateResultResponse(class UPlayFabJsonObject** response);
	struct FServerDeletePlayerResult STATIC_decodeDeletePlayerResultResponse(class UPlayFabJsonObject** response);
	struct FServerDeleteCharacterFromUserResult STATIC_decodeDeleteCharacterFromUserResultResponse(class UPlayFabJsonObject** response);
	struct FServerCreateSharedGroupResult STATIC_decodeCreateSharedGroupResultResponse(class UPlayFabJsonObject** response);
	struct FServerConsumeItemResult STATIC_decodeConsumeItemResultResponse(class UPlayFabJsonObject** response);
	struct FServerBanUsersResult STATIC_decodeBanUsersResultResponse(class UPlayFabJsonObject** response);
	struct FServerAwardSteamAchievementResult STATIC_decodeAwardSteamAchievementResultResponse(class UPlayFabJsonObject** response);
	struct FServerAuthenticateSessionTicketResult STATIC_decodeAuthenticateSessionTicketResultResponse(class UPlayFabJsonObject** response);
	struct FServerAddSharedGroupMembersResult STATIC_decodeAddSharedGroupMembersResultResponse(class UPlayFabJsonObject** response);
	struct FServerAddPlayerTagResult STATIC_decodeAddPlayerTagResultResponse(class UPlayFabJsonObject** response);
};


// Class PlayFab.PlayFabUtilities
// 0x0000 (0x0028 - 0x0028)
class UPlayFabUtilities : public UBlueprintFunctionLibrary
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class PlayFab.PlayFabUtilities");
		return ptr;
	}


	void STATIC_setPlayFabSettings(struct FString* GameTitleId, struct FString* PlayFabSecretApiKey, struct FString* PhotonRealtimeAppId, struct FString* PhotonTurnbasedAppId, struct FString* PhotonChatAppId);
	struct FString STATIC_getPhotonAppId(bool* Realtime, bool* Chat, bool* Turnbased);
	struct FString STATIC_getErrorText(int* code);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
