#pragma once

#include "MainWindow.g.h"

namespace winrt::star123::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void MyRating_ValueChanged_1(winrt::Microsoft::UI::Xaml::Controls::RatingControl const& sender, winrt::Windows::Foundation::IInspectable const& args);
        void clearEnabledCheck_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
        void readOnlyCheck_Checked(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e);
    };
}

namespace winrt::star123::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
}
