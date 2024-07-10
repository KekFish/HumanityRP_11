// modded class DayZIntroScene : Managed
// {
// 	protected ref IntroSceneCharacter	m_Character;
// 	protected Camera 					m_Camera;
// 	protected vector 					m_CameraTrans[4];
// 	protected vector 					m_CharacterPos;
// 	protected vector 					m_CharacterRot;
// 	protected Weather					m_Weather;
// 	protected vector 					m_Target;

// 	protected ref OptionsMenu	m_OptionsMenu = new OptionsMenu;

// 	void DayZIntroScene()
// 	{
// 		World w = g_Game.GetWorld();

// 		string root_path = "cfgCharacterScenes " + g_Game.GetWorldName();

// 		int count = g_Game.ConfigGetChildrenCount(root_path);
// 		int index = Math.RandomInt(0, count - 1);
// 		string childName;
// 		g_Game.ConfigGetChildName(root_path, index, childName);

// 		string scene_path = root_path + " " + childName;
// 		m_Target = SwapYZ(g_Game.ConfigGetVector(scene_path + " target"));
// 		vector cameraPosition = Vector(5282.07, 11.4905, 7688.24);
// 		vector cameraOrientation = Vector(129.787, -4.46136, 0);
// 		vector characterPosiotion = Vector(5284.19, 10.1724, 7686.37);
// 		TIntArray date = new TIntArray;
// 		TFloatArray storm = new TFloatArray;
// 		g_Game.ConfigGetIntArray(scene_path + " date", date);
// 		float fov = 0.75;
// 		float overcast = 0;
// 		float rain = 0;
// 		float fog = 0;
// 		float windspeed = 9.27431;

// 		World world = g_Game.GetWorld();

// 		if (world && date.Count() >= 5)
// 		{
// 			world.SetDate(1999, 8, 7, 19, 52);
// 		}

// 		GetGame().ObjectDelete( m_Camera );
// 		Class.CastTo(m_Camera, g_Game.CreateObject("staticcamera", cameraPosition, true));

// 		Math3D.MatrixIdentity4(m_CameraTrans);

// 		if (m_Camera)
// 		{
// 			  m_Camera.LookAt(characterPosiotion);
// 			  m_Camera.SetFOV(fov);
// 			  m_Camera.SetFocus(4, 0.052);
// 			  m_Camera.SetActive(true);
// 			  Math3D.DirectionAndUpMatrix(m_Target - SnapToGround(characterPosiotion), "0 1 1", m_CameraTrans);
// 			  m_CameraTrans[3] = m_Camera.GetPosition();
// 			  m_CharacterPos = characterPosiotion;
// 			  float pos_x = m_CharacterPos[0];
// 			  float pos_z = m_CharacterPos[2];
// 			  float pos_y = GetGame().SurfaceY(pos_x, pos_z);
// 			  vector ground_demo_pos = Vector(pos_x, pos_y, pos_z);
// 			  m_CharacterPos = ground_demo_pos;
// 			  vector to_cam_dir = m_Camera.GetPosition() - m_CharacterPos;
// 			  m_CharacterRot[0] = Math.Atan2(to_cam_dir[0], to_cam_dir[2]) * Math.RAD2DEG;
// 		}

// 		m_Weather = g_Game.GetWeather();
// 		m_Weather.GetOvercast().SetLimits( overcast, overcast );
// 		m_Weather.GetRain().SetLimits( rain, rain );
// 		m_Weather.GetFog().SetLimits( fog, fog );
// 		m_Weather.GetOvercast().Set( overcast, 0, 0);
// 		m_Weather.GetRain().Set( rain, 0, 0);
// 		m_Weather.GetFog().Set( fog, 0, 0);

// 		if ( storm.Count() == 3 )
// 		{
// 			m_Weather.SetStorm(storm.Get(0),storm.Get(1),storm.Get(2));
// 		}

// 		if ( windspeed != -1 )
// 		{
// 			m_Weather.SetWindSpeed(windspeed);
// 			m_Weather.SetWindMaximumSpeed(windspeed);
// 			m_Weather.SetWindFunctionParams(1,1,1);
// 		}

// 		m_Character = new IntroSceneCharacter();
// 		m_Character.LoadCharacterData(m_CharacterPos, m_CharacterRot);

// 		PPEffects.Init();
// 		PPEffects.DisableBurlapSackBlindness();
// 	}

// 	override IntroSceneCharacter GetIntroCharacter()
// 	{
// 		return m_Character;
// 	}

// 	override void ResetIntroCamera()
// 	{
// 		if ( GetIntroCharacter().GetCharacterObj() )
// 		{
// 			GetIntroCamera().LookAt( GetIntroCharacter().GetPosition() + Vector( 1, 1, 0 ) );
// 		}
// 	}

// 	override protected vector SwapYZ(vector vec)
// 	{
// 		vector tmp;
// 		tmp[0] = vec[0];
// 		tmp[1] = vec[2];
// 		tmp[2] = vec[1];

// 		return tmp;
// 	}

// 	override protected vector SnapToGround(vector pos)
// 	{
// 		float pos_x = pos[0];
// 		float pos_z = pos[2];
// 		float pos_y = GetGame().SurfaceY(pos_x, pos_z);
// 		vector tmp_pos = Vector(pos_x, pos_y, pos_z);
// 		tmp_pos[1] = tmp_pos[1] + pos[1];

// 		return tmp_pos;
// 	}
// };
