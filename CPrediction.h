namespace ValveSDK
{
	class CPrediction
	{
	public:
		void SetupMove(CBaseEntity *player, ValveSDK::CInput::CUserCmd *ucmd, PVOID movehelper, PVOID moveData)
		{
			typedef void(__thiscall* OriginalFn)(PVOID, CBaseEntity*, ValveSDK::CInput::CUserCmd*, PVOID, PVOID);
			getvfunc<OriginalFn>(this, 20)(this, player, ucmd, movehelper, moveData);
		}

		void FinishMove(CBaseEntity *player, ValveSDK::CInput::CUserCmd *ucmd, PVOID moveData)
		{
			typedef void(__thiscall* OriginalFn)(PVOID, CBaseEntity*, ValveSDK::CInput::CUserCmd*, PVOID);
			getvfunc<OriginalFn>(this, 21)(this, player, ucmd, moveData);
		}
	};
}