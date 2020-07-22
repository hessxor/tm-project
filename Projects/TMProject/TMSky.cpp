#include "pch.h"
#include "TMMesh.h"
#include "TMSky.h"

// NOTE: this is cleary not float values.
D3DCOLORVALUE TMSky::m_LightVal[4] =
{
  {  0.69999999f,  0.69999999f,  0.69999999f,  0.1f },
  {  0.30000001f,  0.30000001f,  0.30000001f,  1.0f },
  {  0.5f,  0.40000001f,  0.2f,  1.0f },
  {  0.25999999f,  0.34f,  0.34f,  1.0f }
};

float TMSky::FogList[16][2] =
{
  {  14.0,  34.0 },
  {  25.0,  34.0 },
  {  55.0,  70.0 },
  {  25.0,  34.0 },
  {  14.0,  23.0 },
  {  14.0,  22.0 },
  {  16.0,  34.0 },
  {  16.0,  34.0 },
  {  39.0,  70.0 },
  {  19.0,  30.0 },
  {  19.0,  30.0 },
  {  19.0,  70.0 },
  {  29.0,  40.0 },
  {  0.0,  0.0 },
  {  0.0,  0.0 },
  {  0.0,  0.0 }
};

TMSky::TMSky()
{
}

TMSky::~TMSky()
{
}

int TMSky::Render()
{
	return 0;
}

int TMSky::FrameMove(unsigned int dwServerTime)
{
	return 0;
}

void TMSky::RestoreDeviceObjects()
{
}

void TMSky::SetWeatherState(int nState)
{
}
