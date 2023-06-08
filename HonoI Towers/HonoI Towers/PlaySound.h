#pragma once
#using <PresentationCore.dll>
#using <WindowsBase.dll>
#using <mscorlib.dll>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Threading;
using namespace System::Media;
using namespace System::Windows::Media;
using namespace System;
using namespace System::Diagnostics::PresentationFramework::Trace; // «агрузка типа PresentationTraceLevel из PresentationFramework

void PlaySong()
{
	MediaPlayer^ player = gcnew MediaPlayer();
	player->Open(gcnew Uri("Sounds/Images-of-Tomorrow-Unicorn-Heads.wav"));
	player->Volume = 0.1f;
	player->Play();

	while (true)
	{
		if (player->Position >= player->NaturalDuration) // провер€ем, достигнут ли конец файла
		{
			player->Position = TimeSpan::Zero; // перематываем песню в начало
			player->Play(); // запускаем воспроизведение снова
		}

		Thread::Sleep(500); // задержка дл€ снижени€ нагрузки на процессор
	}