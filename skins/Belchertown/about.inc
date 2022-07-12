#encoding UTF-8
<script type='text/javascript'>showChart("about");</script>
<div class="entry-content about-outer" itemprop="text">
    <div class="row"><span>&nbsp;</span></div>
    <div class="row">
        <ul class="nav nav-tabs">
            <li class="active"><a data-toggle="tab" href="#home">General Info</a></li>
            <li><a data-toggle="tab" href="#menu1">Station Health</a></li>
            <li><a data-toggle="tab" href="#menu2">Server Health</a></li>
        </ul>
        <div class="tab-content">
            <div id="home" class="tab-pane fade in active">
                <div class="col-sm-3">
                    <img src="../images/largoweather_acurite_station.jpg" /> 
                </div>
                <div class="col-sm-9">
                    <h3>About Largo Weather</h3>
                    <p> I created LargoWeather.com as an evolving project to learn and understand Python3, 
                        Docker Containers, and MariaDB. I have recently upgraded my weather station to an 
                        Davis Instruments Vantage Pro 2 Wireless with a Airlink Air quality sensor. The station communicates with a WeatherLink Live unit in my home.
                    </p>
                    <h4>Software used:</h4>
                    <p>
                        <ul>
                            <li><a href="http://www.weewx.com/" target="_blank">weewx</a> weather station software</li>
                            <li><a href="http://www.highcharts.com/" target="_blank">HighCharts</a> for the various charts on the website</li>
                            <li>The <a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown skin</a> theme built for weewx</li>
                        </ul>
                    </p>
                    <h4>Credits:</h4>
                    <p>
                        <ul>
                            <li>Thanks to Pat Obrien at <a href="https://belchertownweather.com" target="_blank">BelchertownWeather.com</a> for this amazing website for weewx!</li>
                            <li>Forecast data <a href="https://www.aerisweather.com/account/member/" target="_blank">Powered by AERIS Weather</a></li>
                            <li>Earthquake data from <a href="http://earthquake.usgs.gov/fdsnws/event/1/" target="_blank">USGS.gov Earthquake Catalog Developer API</a></li>
                        </ul>
                    </p>
                </div>
            </div>
            <div id="menu1" class="tab-pane fade">
                <h3>Station Health</h3>
                <div id="rxchart" style="margin-top:30px;"></div>
                <div id="rxchartyear" style="margin-top:30px;"></div>
                <div id="voltChart" style="margin-top:30px;"></div>
                <div id="consolehealth" style="margin-top:30px;"></div>
            </div>
            <div id="menu2" class="tab-pane fade">
                <h3>Server Health</h3>                
                <ul>
                    <li>Station hardware: $station.hardware</li>
                    <li>Server uptime: $station.os_uptime</li>
                    <li>WeeWX uptime: $station.uptime</li>
                    <li>WeeWX version: $station.version</li>
                    
                    #if $day.rxCheckPercent.has_data
                        <li>Signal Quality: $current.rxCheckPercent</li>
                    #end if
                    
                    #if $day.txBatteryStatus.has_data
                        <li>Transmitter Battery:
                        #if $current.txBatteryStatus.raw == 0
                            <span style="color:#44aa44;">OK</span>
                        #else
                            <span style="color:#aa4444;">LOW</span>
                        #end if
                    #end if
                    <li>Belchertown Skin Version: $belchertown_version</li>
                </ul>
                <div id="system_usage" style="margin-top:30px;"></div>
            </div>
        </div>
    </div>    
</div>
